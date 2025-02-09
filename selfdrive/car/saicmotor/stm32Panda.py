#!/usr/bin/env python3
from cereal import car, log
from common.params import Params
from common.realtime import Priority, config_realtime_process
from selfdrive.swaglog import cloudlog
from selfdrive.controls.lib.longitudinal_planner import Planner
from selfdrive.controls.lib.lateral_planner import LateralPlanner
from selfdrive.hardware import TICI
import cereal.messaging as messaging
from selfdrive.boardd.boardd import can_list_to_can_capnp
import threading
import socket
import time
from common.params import Params, ParamKeyType
from common.realtime import sec_since_boot, config_realtime_process, Priority, Ratekeeper
from selfdrive.controls.lib.drive_helpers import get_lag_adjusted_curvature
import struct

SafetyModel = car.CarParams.SafetyModel
UsbPowerMode = log.PeripheralState.UsbPowerMode
PandaType = log.PandaState.PandaType
HarnessStatus = log.PandaState.HarnessStatus
params = Params()

# define stm32 udp can data caputure
global can_checklist, can_bytes_data
can_checklist = [ '492', '251', '355', '489', '201', \
                  '1130', '886', '901', '532',  '485', \
                  '851', '540', '758', '404', '481', \
                  '389', '593', '516', '582' ]
can_bytes_data = [int(0) for i in range(160)]

class FakePanda(threading.Thread):
  def __init__(self, ):
    super(FakePanda, self).__init__()
    self.pm = messaging.PubMaster(['pandaStates',"peripheralState" ])
    self.rk = Ratekeeper(2, print_delay_threshold=None)

  def run(self):
    print('start fake can threading')
    while True:
      global can_bytes_data
      # send pandastate
      dat = messaging.new_message('pandaStates', 1)
      dat.valid = True
      # use acc on switch for ignition, not use engine run status
      is_system_ready = bool(can_bytes_data[112] & 64) #or bool(can_bytes_data[32] & 128)
      dat.pandaStates[0].ignitionLine = is_system_ready
      dat.pandaStates[0].controlsAllowed = is_system_ready
      dat.pandaStates[0].gasInterceptorDetected = True
      dat.pandaStates[0].canSendErrs =0
      dat.pandaStates[0].canFwdErrs =0
      dat.pandaStates[0].canRxErrs =0
      dat.pandaStates[0].pandaType = PandaType.blackPanda
      dat.pandaStates[0].safetyModel = SafetyModel.volkswagen
      dat.pandaStates[0].heartbeatLost = False
      dat.pandaStates[0].harnessStatus = HarnessStatus.normal
      self.pm.send('pandaStates', dat)

      # send peripheralstate
      dat = messaging.new_message('peripheralState')
      dat.valid = True
      dat.peripheralState.pandaType = PandaType.blackPanda
      dat.peripheralState.voltage = 500
      dat.peripheralState.current = 100
      dat.peripheralState.fanSpeedRpm = 100
      dat.peripheralState.usbPowerMode = UsbPowerMode.client
      self.pm.send('peripheralState', dat)
      self.rk.keep_time()


### threading for connect stm32 hardware
class STM32UDP(threading.Thread):
    def __init__(self, server):
      super(STM32UDP, self).__init__()
      self.server = server

    def run(self):
      global can_bytes_data
      print('start udp can data capture threading')
      while True:
        # receive stm32 can data from udp protocal
        data, addr= self.server.recvfrom(1024)
        can_bytes_data = list(data)


### threading for can publish
class can_send_thread(threading.Thread):
  def __init__(self, server):
    self.server = server
    super(can_send_thread, self).__init__()
    #self.sm = messaging.SubMaster(['sendcan'], poll = ['sendcan'])
    self.can_sock = messaging.sub_sock('sendcan', timeout=100)
    self.RC = 0
    self.sm = messaging.SubMaster(['carParams', 'carState','controlsState', 'lateralPlan'])

  def update_ctrl_cmd(self):
    self.sm.update(0)
    lat_plan = self.sm['lateralPlan']
    cp = self.sm['carParams']
    cs = self.sm['carState']
    is_latCtrlActv_bl = self.sm['controlsState'].active
    desired_curvature, desired_curvature_rate = get_lag_adjusted_curvature(cp, cs.vEgo,
                                                                             lat_plan.psis,
                                                                             lat_plan.curvatures,
                                                                             lat_plan.curvatureRates)
    return is_latCtrlActv_bl, -1*desired_curvature
  def run(self):
    print('start can send thrading')
    while True:
      # get lateral controls cmds
      is_funcActv_bl, desired_curve_cmd = self.update_ctrl_cmd()
      #can_msg = messaging.drain_sock(self.can_sock)
      can_msg = self.can_sock.receive(non_blocking=True)
      if can_msg is not None:
        ret = messaging.log_from_bytes(can_msg)
        data = ret.sendcan
        # only send can commond when message valid flag is true
        #if self.sm.all_valid(service_list=['sendcan']):
        can_num = len(data)
        lka_ctrl_frame = []
        lka_hud_frame = []
        for i in range(can_num):
          if data[i].address == 509:
            lka_ctrl_frame = list(data[i].dat)
          elif data[i].address == 359:
            lka_hud_frame = list(data[i].dat)

        if len(lka_ctrl_frame) == 8 and len(lka_hud_frame) ==8:
          sendData = lka_ctrl_frame  + lka_hud_frame + [self.RC, 1, int(is_funcActv_bl), 0]
          sendBytes_arr = [int(x) for x in sendData]

          single_data_bytes =  struct.pack("<ffffffff", float(desired_curve_cmd) , 0,0,0,0,0,0,0);
          try:
            self.server.sendto(single_data_bytes + bytes(sendBytes_arr), ('192.168.5.12', 9999) )
          except:
            pass
          self.RC += 1
          if self.RC >15:
            self.RC = 0
      time.sleep(0.002)

### threading for can receive
class can_recv_thread(threading.Thread):
  def __init__(self):
    super(can_recv_thread, self).__init__()
    self.pm = messaging.PubMaster(['can'])
    self.rk = Ratekeeper(100, print_delay_threshold=0.01)

  def run(self):
    global can_bytes_data, can_checklist
    miss_count = 0
    can_rc_last = 0
    print('start can send threading')

    while 1:
      # copy global can buffer data
      can_tmp = can_bytes_data
      rc_tmp = can_tmp[144]

      # check the can data valid
      if rc_tmp == can_rc_last:
        miss_count +=1
      else:
        miss_count = 0
      if miss_count > 10:
        can_valid = False
      else:
        can_valid = True

      # create can message
      #print('can_valid', can_valid)
      dat = messaging.new_message('can', len(can_checklist))
      dat.valid = can_valid

      # convert udp list data to can format data
      i = 0
      for idd in can_checklist:
        if idd == '582':
          dat.can[i] = {
              "address": int(idd),
              "busTime": 0,
              "dat":  bytes(can_tmp[152:160]),
              "src": 0,
              }
        else:
          dat.can[i] = {
              "address": int(idd),
              "busTime": 0,
              "dat":  bytes(can_tmp[i*8:(i+1)*8]),
              "src": 0,
              }
        i+=1
      # send can
      self.pm.send('can', dat)

      # keep realtime
      self.rk.keep_time()

      # update rc state
      can_rc_last = rc_tmp


def main():
  config_realtime_process(3, 54)
  ### loop to connect stm32 udp server
  udp_server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
  udp_status = False
  stm32_panda_ip = '0.0.0.0'
  while not udp_status:
    try:
      udp_server.bind((stm32_panda_ip, 8888))
      status = True
      print('connect to panda!')
      break
    except Exception as e:
      print('connect filed to my panda.',e)
      status = False
      time.sleep(1)


  ### start fake panda publish
  fake_panda = FakePanda()
  fake_panda.setDaemon(True)
  fake_panda.start()
  #fake_panda.join()

  ### read udp data
  can_fake = STM32UDP(udp_server)
  can_fake.setDaemon(True)
  can_fake.start()
  #can_fake.join()

  ### send can message from udp data
  can_send = can_send_thread(udp_server)
  can_send.setDaemon(True)
  can_send.start()
  #can_send.join()

  ### can receive threading
  can_recv = can_recv_thread()
  can_recv.setDaemon(True)
  can_recv.start()
  #can_recv.join()

  while True:
    time.sleep(10)

if __name__ == "__main__":
  main()
