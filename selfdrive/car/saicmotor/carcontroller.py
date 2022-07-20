from selfdrive.car import apply_toyota_steer_torque_limits , apply_std_steer_torque_limits
from selfdrive.car.saicmotor.saicmotorcan import create_lkas_hud, create_lkas_command
from selfdrive.car.saicmotor.values import CAR, CarControllerParams
from opendbc.can.packer import CANPacker
import time
from selfdrive.car.saicmotor.sac.lib_sac import get_sac
from selfdrive.car.saicmotor.dbc_parser import FVCM_EPS_Packer

class CarController():
  def __init__(self, dbc_name, CP, VM):
    self.apply_steer_last = 0
    self.ccframe = 0
    self.car_fingerprint = CP.carFingerprint
    self.steer_rate_limited = False
    self.params = CarControllerParams()
    self.packer = CANPacker(dbc_name)
    self.time = time.time()

    self.lib_sac, self.cffi = get_sac()
    self.lib_sac.SAC_initialize()
    self.lka_req_toq = self.cffi.new("float * ")
    self.lka_req_sts = self.cffi.new("unsigned char * ")

    self.accel = 0
    self.speed = 0
    self.gas = 0
    self.brake = 0


  def update(self, enabled, CS, actuators, pcm_cancel_cmd, hud_alert):
    ''' openpilot official pid tracking steering angle
    #print(actuators.steer)
    P  = self.params
    if enabled and CS.out.vEgo > CS.CP.minSteerSpeed and not (CS.out.standstill or CS.out.steerError or CS.out.steerWarning):
      new_steer = int(round(actuators.steer * P.STEER_MAX))
      #print(new_steer)
      #apply_steer = apply_std_steer_torque_limits(new_steer, self.apply_steer_last, CS.out.steeringTorque, P)
      #self.steer_rate_limited = new_steer != apply_steer
      #apply_steer = new_steer
      k = 5
      if new_steer - self.apply_steer_last > k:
        apply_steer = self.apply_steer_last +k 
      elif -1*new_steer+  self.apply_steer_last > k:
        apply_steer = self.apply_steer_last -k 
      else:
        apply_steer = new_steer

    else:
      apply_steer = 0
    #print(apply_steer, enabled)
    '''
    can_sends = []

    # 20ms cycle  for can message sending
    if self.ccframe % 2 == 0:
      idx = self.ccframe//2
      ## sac update
      VehSpd = max(CS.out.vEgo*3.6, 1) # zeros deive avoid
      # eps mode. different mode shoud has different parameters
      EPS_Mode = CS.lkas_eps_mode
      # steering controller parameters
      SAC_LutTbl_VSpd_X = [0,10,20,30,40,50,60,70,80,90,100,110,120,130,140]
      SAC_LutTbl_KpVehSpd_Y = [0.15886,0.17033,0.23726,0.291,0.309966,0.319842,0.330288,0.342486,0.365514,0.40887,0.449514,0.48,0.48,0.48,0.48]
      SAC_LutTbl_DesAng_X = [0,2,4,6,8,10,15,20,25,30, 35, 40, 45, 50, 60]
      SAC_LutTbl_KpDesAng_Y = [4,4,2.7911,2.0063,1.4367,1.0443,0.55645,0.3771,0.3,0.3,0.3,0.3,0.3,0.3]
      SAC_LutTbl_KiVehSpd_Y = [0.024684,0.031742,0.042838,0.053162,0.061678,0.067354,0.06942,0.069904,0.071226,0.073032,0.07613,0.087226,0.093936,0.095646,0.097032]
      SAC_LutTbl_KiDesAng_Y = [1,1.0522,1.2419,1.5065,1.8355,2.2871,2.6613,2.8226,3,3,3,3,3,3,3]
      # sac step function
      self.lib_sac.SAC_step(float(actuators.steeringAngleDeg),bool(enabled), \
          float(VehSpd), float(CS.out.steeringAngleDeg), float(CS.out.steeringRateDeg), \
          float(CS.out.steeringTorque), int(EPS_Mode),\
          [float(x) for x in SAC_LutTbl_VSpd_X], \
          [float(x) for x in SAC_LutTbl_KpVehSpd_Y],\
          [float(x) for x in SAC_LutTbl_DesAng_X], \
          [float(x) for x in SAC_LutTbl_KpDesAng_Y],\
          [float(x) for x in SAC_LutTbl_KiVehSpd_Y], \
          [float(x) for x in SAC_LutTbl_KiDesAng_Y], \
          self.lka_req_toq, self.lka_req_sts)
      ## create lka_hud can message
      ## io: (packer, tja_ica_sys_state, is_left_line_visiable, is_right_line_visiable, handoff_wrnng_lvl):
      #can_sends.append(create_lkas_hud(self.packer, 2 if enabled else 1, 2 if enabled else 1, 2 if enabled else 1, 1))


      ## create lka_ctrl can message
      ## io: (packer, lka_rc, lka_toq, lka_toq_sts, lka_toq_valid, lka_isDrvrTkovReq):
      #can_sends.append(create_lkas_command(self.packer, int(self.ccframe/2), float(self.lka_req_toq[0]), int(self.lka_req_sts[0]), 0, 0, idx, ))
      #lka_ctrl_frame = FVCM_EPS_Packer(int(self.ccframe/2), self.lka_req_toq[0], 0, int(self.lka_req_sts[0]), 0, 0)
      #can_sends.append([509, 0, bytes(lka_ctrl_frame), 0, 0])

    self.ccframe += 1
    if self.ccframe > 15:
      self.ccframe = 0
    new_actuators = actuators.copy()
    new_actuators.speed = self.speed
    new_actuators.accel = self.accel
    new_actuators.gas = self.gas
    new_actuators.brake = self.brake

    return new_actuators, can_sends
