from cereal import car
from opendbc.can.parser import CANParser
from opendbc.can.can_define import CANDefine
from selfdrive.config import Conversions as CV
from selfdrive.car.interfaces import CarStateBase
from selfdrive.car.saicmotor.values import DBC, STEER_THRESHOLD, BUTTON_STATES, StrgLampDetector, FakeAccState


class CarState(CarStateBase):
  def __init__(self, CP):
    super().__init__(CP)
    can_define = CANDefine(DBC[CP.carFingerprint]["pt"])
    #self.shifter_values = can_define.dv["GEAR"]["PRNDL"]
    self.buttonStates = BUTTON_STATES.copy()
    self.lft_strlmp_dect = StrgLampDetector()
    self.rgt_strlmp_dect = StrgLampDetector()
    self.fake_cruise = FakeAccState()
    self.frame = 0
    self.cruise_buttons = 0
    self.prev_cruise_buttons = 0

  def update(self, cp, cp_cam):

    ret = car.CarState.new_message()

    #self.frame = int(cp.vl["EPS_STATUS"]["COUNTER"])

    ret.doorOpen = any([cp.vl["BCM_SafetyC_FrP04"]["DrvrDoorOpenSts_H1_Safety"],
                        cp.vl["BCM_SafetyC_FrP04"]["FrtPsngDoorOpenSts_H1_Safety"]])

    ret.seatbeltUnlatched = cp.vl["SDM_HSC1_FrP00"]["DrvrSbltAtc_Safety"] == 0


    ret.brake = cp.vl["SCS_HSC2_FrP22"]["BrkPdlDrvrAppdPrs_Radar_Safety"]

    ret.brakePressed = ret.brake > 10
    # disabled gasPressed exit func
    ret.gas = 0#cp.vl["ECM_HSC1_FrP00"]["AccelActuPos_Safety"]
    ret.gasPressed = ret.gas > 1

    ret.espDisabled = False #(int(cp.vl['ECM_HSC1_FrP27']['PtACCToqReqResp_Safety']) > 1) or \
    #                  (int(cp.vl['SCS_HSC2_FrP24']['ChACCAccReqResp_Safety']) > 1)

    # yawrate
    ret.yawRate = cp.vl["SCS_HSC2_FrP05"]["VehDynYawRate_Safety_Safety"]


    # kph2mps
    ret.vEgoRaw =((cp.vl["SCS_HSC2_FrP15"]["VehSpdAvgNonDrvn_Safety_Safety"] + cp.vl["SCS_HSC2_FrP15"]["VehSpdAvgDrvn_Safety_Safety"]) / 2.) / 3.6

    # zs11 dbc maybe not right, we use other speed info replaced
    '''
    ret.wheelSpeeds.fl = cp.vl["WHEEL_SPEEDS"]["WhlGndVelLNonDrvn_HS_HS"]
    ret.wheelSpeeds.rr = cp.vl["WHEEL_SPEEDS"]["WHEEL_SPEED_RR"]
    ret.wheelSpeeds.rl = cp.vl["WHEEL_SPEEDS"]["WHEEL_SPEED_RL"]
    ret.wheelSpeeds.fr = cp.vl["WHEEL_SPEEDS"]["WHEEL_SPEED_FR"]
    '''
    ret.wheelSpeeds.fl = ret.vEgoRaw
    ret.wheelSpeeds.rr = ret.vEgoRaw
    ret.wheelSpeeds.rl = ret.vEgoRaw
    ret.wheelSpeeds.fr = ret.vEgoRaw

    ret.vEgo, ret.aEgo = self.update_speed_kf(ret.vEgoRaw)
    ret.standstill = not ret.vEgoRaw > 0.001


    # Blinker signals is not high or low , but high and low signals, need to deal with debounce
    ret.leftBlinker  = self.lft_strlmp_dect.update(bool(cp.vl["BCM_SafetyC_FrP04"]["LDircnIO_Safety"]))
    ret.rightBlinker = self.rgt_strlmp_dect.update(bool(cp.vl["BCM_SafetyC_FrP04"]["RDircnIO_Safety"]))


    # Steering
    ret.steeringAngleDeg = cp.vl["SAS_SafetyC_FrP00"]["StrgWhlAng_Safety"]
    ret.steeringRateDeg =  cp.vl["SAS_SafetyC_FrP00"]["StrgWhlAngGrd_Safety"]

    ret.gearShifter = car.CarState.GearShifter.drive
    #ret.gearShifter = self.parse_gear_shifter(self.shifter_values.get(cp.vl["GW_HSC2_ECM_FrP04"]["TrEstdGear"], None))

    ### eps
    ret.steeringTorque =    cp.vl["EPS_HSC2_FrP03"]["DrvrStrgDlvrdToqHSC2"]
    ret.steeringTorqueEps = cp.vl["EPS_HSC2_FrP03"]["ChLKARespToqHSC2"]
    ret.steeringPressed = abs(ret.steeringTorque) > STEER_THRESHOLD
    steer_state = int(cp.vl["EPS_HSC2_FrP03"]["ChLKACtrlStsHSC2"])
    #print(steer_state)
    ret.steerError = steer_state ==4 or (steer_state == 0 and ret.vEgo < self.CP.minSteerSpeed)
    self.lkas_counter = cp.vl["EPS_HSC2_FrP03"]["ChLKAAlvRCHSC2"]
    self.lkas_status_ok = int(steer_state) != 4
    self.lkas_eps_mode = cp.vl["EPS_HSC2_FrP03"]["StrgCustSetngDspCmdHSC1"]
    #print(steer_state, 'steer state')

    # Update control button states for turn signals and ACC controls.
    self.buttonStates["accelCruise"]  = bool(cp.vl["IPK_GW_SafetyC_FrP04"]["CCSwStsSpdIncSwA_Safety"])
    self.buttonStates["decelCruise"]  = bool(cp.vl["IPK_GW_SafetyC_FrP04"]["CCSwStsSpdDecSwA_Safety"])
    self.buttonStates["cancel"]       = bool(cp.vl["IPK_GW_SafetyC_FrP04"]["CCSwStsCanclSwA_Safety"])
    self.buttonStates["setCruise"]    = bool(cp.vl["IPK_GW_SafetyC_FrP04"]["CCSwStsSetSwA_Safety"])
    self.buttonStates["resumeCruise"] = bool(cp.vl["IPK_GW_SafetyC_FrP04"]["CCSwStsRsmSwA_Safety"])
    #self.buttonStates["gapAdjustCruise"]     = bool(cp.vl["GW_HSC2_FrP04"]["CCSwStsOnSwA_h2HSC2"])

    self.prev_cruise_buttons = self.cruise_buttons
    if not self.buttonStates['accelCruise'] and not self.buttonStates['decelCruise'] :
      self.cruise_buttons = 0
    elif self.buttonStates['accelCruise']:
      self.cruise_buttons = 1
    elif self.buttonStates['decelCruise']:
      self.cruise_buttons = 2
    else:
      self.cruise_buttons = 0


    ret.cruiseState.available = bool(cp.vl["IPK_GW_SafetyC_FrP04"]["CCSwStsOnSwA_Safety"])

    if self.CP.pcmCruise:
      # exit cond
      disable_cond = ret.brakePressed or abs(ret.steeringTorque) > 2.5
      #ret.cruiseState.enabled = self.fake_cruise.update(True, False, enbl, disable_cond)
      ret.cruiseState.enabled = self.fake_cruise.update(self.lkas_status_ok and self.buttonStates["OnCruise"],\
                                self.buttonStates["setCruise"], self.buttonStates["resumeCruise"], disable_cond)
      #self.accEnbl
      ret.cruiseState.available = ret.cruiseState.enabled
      ret.cruiseState.nonAdaptive = False
      ret.cruiseState.speed  = 0
    '''
    ret.cruiseState.enabled = cp.vl["ACC_2"]["ACC_STATUS_2"] == 7  # ACC is green.
    ret.cruiseState.available = ret.cruiseState.enabled  # FIXME: for now same as enabled
    ret.cruiseState.speed = cp.vl["DASHBOARD"]["ACC_SPEED_CONFIG_KPH"] * CV.KPH_TO_MS
    # CRUISE_STATE is a three bit msg, 0 is off, 1 and 2 are Non-ACC mode, 3 and 4 are ACC mode, find if there are other states too
    ret.cruiseState.nonAdaptive = False
    '''

    #ret.genericToggle = bool(cp.vl["STEERING_LEVERS"]["HIGH_BEAM_FLASH"])

    if self.CP.enableBsm:
      ret.leftBlindspot  = cp.vl["RDA_HSC1_P02"]["LBSDAndLCAWrnng_HS"] > 0
      ret.rightBlindspot = cp.vl["RDA_HSC1_P02"]["RBSDAndLCAWrnng_HS"] > 0
    '''
      ("PtACCToqReqResp_Safety", "ECM_HSC1_FrP27", 0),
      ("ChACCAccReqResp_Safety", "SCS_HSC2_FrP24", 0),
    '''
    #print( cp.vl['ECM_HSC1_FrP27']['PtACCToqReqResp_Safety'])
    #print( cp.vl['SCS_HSC2_FrP24']['ChACCAccReqResp_Safety'])
    return ret

  @staticmethod
  def get_can_parser(CP):
    signals = [
      # sig_name, sig_address, default
      ("DrvrSbltAtc_Safety", "SDM_HSC1_FrP00", 0),
      ("WhlGndVelRDrvn_Radar_Safety", "SCS_HSC2_FrP22", 0),
      ("WhlGndVelLDrvn_Radar_Safety", "SCS_HSC2_FrP22", 0),
      ("BrkPdlDrvrAppdPrs_Radar_Safety", "SCS_HSC2_FrP22", 0),
      ("WhlGndVelLNonDrvn_Radar_Safety", "SCS_HSC2_FrP23", 0),
      ("WhlGndVelRNonDrvn_Radar_Safety", "SCS_HSC2_FrP23", 0),
      ("EnSpd_Safety", "ECM_HSC1_FrP00", 0),
      ("EnRunA_Safety", "ECM_HSC1_FrP00", 0),
      ("AccelActuPos_Safety", "ECM_HSC1_FrP00", 0),
      ("VehSpdAvgNonDrvn_Safety_Safety", "SCS_HSC2_FrP15", 0),
      ("VehSpdAvgDrvn_Safety_Safety", "SCS_HSC2_FrP15", 0),
      ("StrgWhlAng_Safety", "SAS_SafetyC_FrP00", 0),
      ("StrgWhlAngGrd_Safety", "SAS_SafetyC_FrP00", 0),
      ("DrvrStrgDlvrdToqHSC2", "EPS_HSC2_FrP03", 0),
      ("ChLKARespToqHSC2", "EPS_HSC2_FrP03", 0),
      ("ChLKACtrlStsHSC2", "EPS_HSC2_FrP03", 0),
      ("ChLKAAlvRCHSC2", "EPS_HSC2_FrP03", 0),
      ("StrgCustSetngDspCmdHSC1", "EPS_HSC2_FrP03", 0),
      ("ABSA_Safety_Safety", "SCS_HSC2_FrP05", 0),
      ("VehDynYawRate_Safety_Safety", "SCS_HSC2_FrP05", 0),
      ("CCSwStsSpdIncSwA_Safety", "IPK_GW_SafetyC_FrP04", 0),
      ("CCSwStsSpdDecSwA_Safety", "IPK_GW_SafetyC_FrP04", 0),
      ("CCSwStsCanclSwA_Safety", "IPK_GW_SafetyC_FrP04", 0),
      ("CCSwStsSetSwA_Safety", "IPK_GW_SafetyC_FrP04", 0),
      ("CCSwStsRsmSwA_Safety", "IPK_GW_SafetyC_FrP04", 0),
      ("CCSwStsOnSwA_Safety", "IPK_GW_SafetyC_FrP04", 0),
      ("RDircnIO_Safety", "BCM_SafetyC_FrP04", 0),
      ("LDircnIO_Safety", "BCM_SafetyC_FrP04", 0),
      ("DrvrDoorOpenSts_H1_Safety", "BCM_SafetyC_FrP04", 0),
      ("FrtPsngDoorOpenSts_H1_Safety", "BCM_SafetyC_FrP04", 0),
      ("PtACCToqReqResp_Safety", "ECM_HSC1_FrP27", 0),
      ("ChACCAccReqResp_Safety", "SCS_HSC2_FrP24", 0),
      ("TrShftLvrPos_Safety", "ECM_HSC1_FrP04", 0),
      ("TrEstdGear_Safety", "ECM_HSC1_FrP04", 0),

    ]

    checks = [
      # sig_address, frequency
      ("SAS_SafetyC_FrP00", 100),
    ]

    if CP.enableBsm:
      signals += [
        ("LBSDAndLCAWrnng_HS", "RDA_HSC1_P02", 0),
 	      ("RBSDAndLCAWrnng_HS", "RDA_HSC1_P02", 0),
      ]
      #checks += [("RDA_HSC1_P02", 2)]

    return CANParser(DBC[CP.carFingerprint]["pt"], signals, checks, 0, enforce_checks = False)

  @staticmethod
  def get_cam_can_parser(CP):

    return None
