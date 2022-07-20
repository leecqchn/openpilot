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
from selfdrive.common.zmq_msg import SubMaster, PubMaster
from selfdrive.controls.saicmotor.lib_start import zs11_start
import os

SafetyModel = car.CarParams.SafetyModel
UsbPowerMode = log.PeripheralState.UsbPowerMode
PandaType = log.PandaState.PandaType
HarnessStatus = log.PandaState.HarnessStatus
params = Params()

# define stm32 udp can data caputure
global can_checklist, can_bytes_data
can_checklist = [ '1046',\
				  '858',  '677',\
				  '175',  '481',\
				  '562',  '1123',\
				  '1130',  '588',\
				  '1009',  '404',\
				  '572',  '554',\
				  '355',  '508',\
				  '241',  '361',\
				  '590',  '593',\
				  '485',  '407',\
				  '851',  '1345',\
				  '201',  '1027',\
				  '893',  '431',\
				  '389',  '758',\
				  '190',  '489',\
				  '977',  '497',\
				  '540',  '1146',\
				  '398',  '251',\
				  '1225',  '560',\
				  '451',  '707',\
				  '498',  '541',\
				  '886',  '479',\
				  '1344',  '795', '492', '516']


can_bytes_data = [int(0) for i in range(400)]

def timeRtcUpdate():
    s = struct.Struct('<IIIIII')
    print('start rtc')
    server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    server.bind( ('192.168.5.11', 8899))
    server.sendto(bytes([0xf3]),  ('192.168.5.12', 9999))
    data, addr= server.recvfrom(512)
    time_arr = list(s.unpack(data))
    time_arr = [str(i) for i in time_arr]
    real_time = time_arr[1] + '/' + time_arr[0] + '/' + time_arr[2] + ' ' + \
        time_arr[3] + ':' + time_arr[4] + ':' + time_arr[5]
    print(real_time)
    cmd = f'date -s "{real_time}"'   # 设置时间并写入bios
    os.system(cmd)

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
      is_system_ready = bool(can_bytes_data[32] & 64) #or bool(can_bytes_data[32] & 128)
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
      self.time = 0
      self.step_time = 0

    def run(self):
      global can_bytes_data
      print('start udp can data capture threading')
      while True:
        # receive stm32 can data from udp protocal
        data, addr= self.server.recvfrom(1024)
        #print(data)
        can_bytes_data = list(data)
        self.step_time = time.time() - self.time
        #print(time.time() - self.time)
        self.time = time.time()

### threading for can publish
class can_send_thread(threading.Thread):
  def __init__(self, server):
    self.server = server
    super(can_send_thread, self).__init__()
    self.sm = SubMaster(poller_list = ['control'], isDict=True)

  def run(self):
    while True:
      self.sm.update()
      # 20ms every frame
      if self.sm.updated('control'):
        #print(self.sm.data['control'])
        try:
          self.server.sendto(self.sm.data['control'], ('192.168.5.12', 9999) )
        except:
          pass
      time.sleep(0.01)

### threading for can receive
class can_recv_thread(threading.Thread):
  def __init__(self):
    super(can_recv_thread, self).__init__()
    self.can_pm = PubMaster(server_list=['ch_can'])

    self.pm = messaging.PubMaster(['can'])
    self.rk = Ratekeeper(100, print_delay_threshold=0.02)

  def run(self):
    global can_bytes_data, can_checklist
    miss_count = 0
    can_rc_last = 0
    print('start can send threading')

    while 1:
      # copy global can buffer data
      can_tmp = can_bytes_data
      rc_tmp = can_tmp[392]

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
      pm_data={}
      i = 0
      for idd in can_checklist:
        dat.can[i] = {
            "address": int(idd),
            "busTime": 0,
            "dat":  bytes(can_tmp[i*8:(i+1)*8]),
            "src": 0,
            }
        #pm_data['ch_'+ idd] = [int(xx) for xx in can_tmp[i*8:(i+1)*8] ]
        i+=1
      # send can
      self.pm.send('can', dat)
      #self.can_pm.send('ch_can', str(pm_data).encode('utf-8'))

      # keep realtime
      self.rk.keep_time()

      # update rc state
      can_rc_last = rc_tmp


def main():
  config_realtime_process(2, 54)
  ### loop to connect stm32 udp server
  # start mgzs start task
  # start zs11 start scripts for webexplore and time update
  #timeRtcUpdate()
  #zs11_start() ## move this to manager
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
  thread_list = []

  ### start fake panda publish
  fake_panda = FakePanda()
  fake_panda.setDaemon(True)
  fake_panda.start()
  #fake_panda.join()
  thread_list.append(fake_panda)

  ### read udp data
  can_fake = STM32UDP(udp_server)
  can_fake.setDaemon(True)
  can_fake.start()
  #can_fake.join()
  thread_list.append(can_fake)

  ### send can message from udp data
  can_send = can_send_thread(udp_server)
  can_send.setDaemon(True)
  can_send.start()
  #can_send.join()
  thread_list.append(can_send)

  ### can receive threading
  can_recv = can_recv_thread()
  can_recv.setDaemon(True)
  can_recv.start()
  #can_recv.join()
  thread_list.append(can_recv)

  while True:
    time.sleep(10)
  #for t in thread_list:
  #  t.join()
if __name__ == "__main__":
  main()

