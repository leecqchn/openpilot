# flake8: noqa

from selfdrive.car import dbc_dict
from cereal import car
Ecu = car.CarParams.Ecu

class DrvierSetDist():
  '''
    according drver dist set inc signal and dec signal to 
    caculate dist level for longitudinal control
  '''
  def __init__(self):
    self.setDist = 3
    self.last_distInc_bl = False
    self.last_distDec_bl = False


  def update(self, distInc_bl, distDec_bl):

    if distInc_bl  != self.last_distInc_bl and not distInc_bl:
      self.setDist = min(self.setDist + 1, 3)
    elif distDec_bl!= self.last_distDec_bl and not distDec_bl:
      self.setDist = max(self.setDist - 1, 1)

    self.last_distInc_bl = distInc_bl
    self.last_distDec_bl = distDec_bl

    return self.setDist



class FakeAccState():
  def __init__(self):
    self.out = False
    self.CC_Set_sts_last = False
    self.CC_Rsm_sts_last = False

  def update(self,CC_On_sts,  CC_Set_sts, CC_Rsm_sts, disenabled):
    if not self.out:
      if CC_On_sts and (not CC_Set_sts and self.CC_Set_sts_last) or (not CC_Rsm_sts and self.CC_Rsm_sts_last):
        self.out = True
    else:
      if disenabled or not CC_On_sts:
        self.out = False

    self.CC_Set_sts_last = CC_Set_sts
    self.CC_Rsm_sts_last = CC_Rsm_sts
    return self.out

class StrgLampDetector():
  def __init__(self):
    self.out = False
    self.isLampOn_last = False
    self.on_count = 0
    self.loop_time = 0.01
    self.on_timer = 0
    self.off_time = 0

  def update(self, lamp_io):
    ### only rise edge detected twice in 1sec. we think lamp_sts is on
    if not self.out:
      if self.on_count >=2:
        self.out = True
        self.off_timer = 0
      else:
        if self.on_count == 0:
          self.on_timer = 0
        else:
          self.on_timer += self.loop_time

        if self.on_timer > 1 and self.on_count  == 1:
          self.on_count = 0
        if lamp_io and not self.isLampOn_last:
          self.on_count += 1

    ### only lamp_is is False for 1sec, we think lamp_sts is off
    else:
      if self.off_timer > 1 and not lamp_io:
        self.out = False
        self.on_count = 0
      if not lamp_io:
        self.off_timer +=self.loop_time
      else:
        self.off_timer = 0

    ### update lamp state
    self.isLampOn = lamp_io
    
    return self.out




class CarControllerParams():
  STEER_MAX = 300  # Safety limit, not LKA max. Trucks use 600.
  STEER_STEP = 2  # control frames per command
  STEER_DELTA_UP = 7
  STEER_DELTA_DOWN = 7
  MIN_STEER_SPEED = 3.  # m/s
  STEER_DRIVER_ALLOWANCE = 50
  STEER_DRIVER_MULTIPLIER = 4
  STEER_DRIVER_FACTOR = 100

STEER_THRESHOLD = 0.5

BUTTON_STATES = {
  "distDecCruise": False,
  "distIncCruise": False,
  "accelCruise": False,
  "decelCruise": False,
  "cancel": False,
  "setCruise": False,
  "resumeCruise": False,
  "gapAdjustCruise": False
}

class Buttons:
  NONE = 0
  RES_ACCEL = 1
  SET_DECEL = 2
  GAP_DIST = 3
  CANCEL = 4


class CAR:
  SAICMOTOR_MGZS_2020 = "Saicmotor Mgzs 2020"


# Unique CAN messages:


FINGERPRINTS = {
  CAR.SAICMOTOR_MGZS_2020: [{
    1046:8,  858:8,   677:8,  175:8,   481:8,  562:8,   1123:8,  1130:8,   588:8,  1009:8,   404:8,  572:8,   554:8,  355:8,   508:8,  241:8,   361:8,  590:8,   593:8,  485:8,   407:8,  851:8,   1345:8, 201:8,   1027:8,  893:8,   431:8,  389:8,   758:8,  190:8,   489:8,  977:8,   497:8,  540:8,   1146:8,  398:8,   251:8,  1225:8,   560:8,  451:8,   707:8,  498:8,   541:8,  886:8,   479:8,  1344:8,   795:8, 492:8, 516:8
  }],

}


DBC = {
  CAR.SAICMOTOR_MGZS_2020: dbc_dict('saicmotor_mgzs_2020',  None),

}


