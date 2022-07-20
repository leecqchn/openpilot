#!/usr/bin/env python3
import time
import zmq
from cffi import FFI
from cereal import car
from common.params import Params
from common.realtime import sec_since_boot, config_realtime_process, Priority, Ratekeeper, DT_CTRL
from common.profiler import Profiler
from selfdrive.swaglog import cloudlog
from selfdrive.controls.lib.longitudinal_planner import Planner
from selfdrive.controls.lib.lateral_planner import LateralPlanner
from selfdrive.hardware import TICI
import cereal.messaging as messaging
from cereal import log, car
from selfdrive.controls.saicmotor.lib_latCtrl import latCtrl
import struct
from selfdrive.controls.lib.events import Events, ET
from selfdrive.controls.lib.alertmanager import AlertManager
from selfdrive.controls.lib.drive_helpers import get_lag_adjusted_curvature
from selfdrive.common.zmq_msg import SubMaster, PubMaster

State = log.ControlsState.OpenpilotState
LaneChangeState = log.LateralPlan.LaneChangeState
LaneChangeDirection = log.LateralPlan.LaneChangeDirection
### car alert event
AlertSize = log.ControlsState.AlertSize
AlertStatus = log.ControlsState.AlertStatus
VisualAlert = car.CarControl.HUDControl.VisualAlert
AudibleAlert = car.CarControl.HUDControl.AudibleAlert
EventName = car.CarEvent.EventName
params = Params()



### car controller interface
class CarController():
  def __init__(self):
    self.libController = latCtrl
    self.libController.app_initialize()
    self.pp_LaneWidth = 3.5
    self.pp_lProb = 0
    self.pp_rProb = 0
    self.pp_dProb = 0
    self.pp_rawCurvature = 0
    self.pp_curvature = 0
    self.pp_rawCurvatureRate = 0
    self.pp_curvatureRate = 0
    self.RC = 0
    self.active_prev = False
    self.CP = self.get_CP()
    self.CS = car.CarState.new_message()
    # speed
    self.vEgo = 0
    self.ctrlType = params.get_bool("IsLdwEnabled")
    # Write CarParams for radard
    cp_bytes = self.CP.to_bytes()
    params.put("CarParams", cp_bytes)

    self.alert_time = 0
    self.state =State.disabled
    self.free = False
    self.AM = AlertManager()
    self.events = Events()
    self.current_alert_types = [ET.PERMANENT]
    self.debug_flag = False
    self.debug_flag_last = False
    self.soft_disable_timer = 0
    # sm-pm
    self.can_sm = SubMaster(server_list=['ch_can'], isDict=True)
    self.can_pm = PubMaster(server_list=['control'])

    self.sm = messaging.SubMaster(['modelV2', 'lateralPlan', 'liveCalibration', 'deviceState'])
    self.pm = messaging.PubMaster(['controlsState', 'carState', 'carParams', 'carControl'])


  # get carParams
  def get_CP(self):
    ret = car.CarParams.new_message()
    ret.carName = "saicmotor"
    ret.steerRateCost = 1.0
    ret.steerActuatorDelay = 0.3
    ret.radarTimeStep = 0.05
    #ret.carFingerprint = candidate
    #ret.isPandaBlack = True  # TODO: deprecate this field
    ret.mass = 1607. + 50.0
    ret.wheelbase = 2.65
    ret.steerRatio = 15.2
    ret.steerRatioRear = 0.
    ret.centerToFront = ret.wheelbase * 0.4  # wild guess
    # standard ALC params
    ret.steerControlType = car.CarParams.SteerControlType.torque

    ret.steerMaxBP = [0.]
    ret.steerMaxV = [1.]
    ret.minSteerSpeed = 0.

    ret.pcmCruise = True     # openpilot's state is tied to the PCM's cruise state on most cars
    ret.minEnableSpeed = -1. # enable is done by stock ACC, so ignore this
    ret.steerRatioRear = 0.  # no rear steering, at least on the listed cars aboveA
    #ret.gasMaxBP = [0.]
    #ret.gasMaxV = [.5]       # half max brake
    #ret.brakeMaxBP = [0.]
    #ret.brakeMaxV = [1.]
    ret.openpilotLongitudinalControl = False
    ret.startAccel = 0.0
    ret.minSpeedCan = 0.3
    #ret.stoppingBrakeRate = 0.2 # brake_travel/s while trying to stop
    #ret.startingBrakeRate = 0.8 # brake_travel/s while releasing on restart
    ret.stoppingControl = True
    ret.longitudinalTuning.deadzoneBP = [0.]
    ret.longitudinalTuning.deadzoneV = [0.]
    ret.longitudinalTuning.kpBP = [0.]
    ret.longitudinalTuning.kpV = [1.]
    ret.longitudinalTuning.kiBP = [0.]
    ret.longitudinalTuning.kiV = [1.]

    return ret

  def state_transition(self):
    # ENABLED, PRE ENABLING, SOFT DISABLING
    if self.state != State.disabled:
      # user and immediate disable always have priority in a non-disabled state
      if self.events.any(ET.USER_DISABLE):
        self.state = State.disabled
        self.current_alert_types.append(ET.USER_DISABLE)

      elif self.events.any(ET.IMMEDIATE_DISABLE):
        self.state = State.disabled
        self.current_alert_types.append(ET.IMMEDIATE_DISABLE)

      else:
        # ENABLED
        if self.state == State.enabled:
          if self.events.any(ET.SOFT_DISABLE):
            self.state = State.softDisabling
            self.soft_disable_timer = 300   # 3s
            self.current_alert_types.append(ET.SOFT_DISABLE)

        # SOFT DISABLING
        elif self.state == State.softDisabling:
          if not self.events.any(ET.SOFT_DISABLE):
            # no more soft disabling condition, so go back to ENABLED
            self.state = State.enabled

          elif self.events.any(ET.SOFT_DISABLE) and self.soft_disable_timer > 0:
            self.current_alert_types.append(ET.SOFT_DISABLE)

          elif self.soft_disable_timer <= 0:
            self.state = State.disabled

        # PRE ENABLING
        elif self.state == State.preEnabled:
          if not self.events.any(ET.PRE_ENABLE):
            self.state = State.enabled
          else:
            self.current_alert_types.append(ET.PRE_ENABLE)

    # DISABLED
    elif self.state == State.disabled:
      if self.events.any(ET.ENABLE):
        if self.events.any(ET.NO_ENTRY):
          self.current_alert_types.append(ET.NO_ENTRY)

        else:
          if self.events.any(ET.PRE_ENABLE):
            self.state = State.preEnabled
          else:
            self.state = State.enabled
            self.current_alert_types.append(ET.ENABLE)

  # update controller
  def update(self):
    ch_can_data = self.can_sm.data['ch_can']

    ### get object data
    model_data = self.sm['modelV2']
    if len(model_data.leadsV3) > 0:
      obj_01_prob = model_data.leadsV3[0].prob
      obj_01_dx = model_data.leadsV3[0].x[0]
      obj_01_dy = -1*model_data.leadsV3[0].y[0]
      obj_01_v = model_data.leadsV3[0].v[0]
      obj_01_a = model_data.leadsV3[0].a[0]
    else:
      obj_01_prob = 0
      obj_01_dx = 0
      obj_01_dy = 0
      obj_01_v = 0
      obj_01_a = 0

    #print(obj_01_prob, obj_01_dx)

    ### get latera planner y and heading points
    lat_plan = self.sm['lateralPlan']
    if len(list(lat_plan.planYpts)) == 17:
      mpc_ypts = list(lat_plan.planYpts)
    else:
      mpc_ypts = [float(0) for i in range(17)]
    if len(list(lat_plan.planHeadpts)) == 17:
      mpc_headpts = list(lat_plan.planHeadpts)
    else:
      mpc_headpts = [float(0) for i in range(17)]
    ### get desired mpc curve
    #print(self.ctrlType)
    mpc_desired_curvature, mpc_desired_curvature_rate = get_lag_adjusted_curvature(self.CP, self.CS.vEgo,
                                                                             lat_plan.psis,
                                                                             lat_plan.curvatures,
                                                                             lat_plan.curvatureRates)
    ### controller step function
    #print(mpc_desired_curvature, mpc_ypts)
    #print(obj_01_prob > 0.5) #(self.libController.long_out_isLeadVehDtct)
    self.libController.app_step(  ch_can_data['ch_1046'],
                                  ch_can_data['ch_858'],  ch_can_data['ch_677'],
                                  ch_can_data['ch_175'],  ch_can_data['ch_481'],
                                  ch_can_data['ch_562'],  ch_can_data['ch_1123'],
                                  ch_can_data['ch_1130'],  ch_can_data['ch_588'],
                                  ch_can_data['ch_1009'],  ch_can_data['ch_404'],
                                  ch_can_data['ch_572'],  ch_can_data['ch_554'],
                                  ch_can_data['ch_355'],  ch_can_data['ch_508'],
                                  ch_can_data['ch_241'],  ch_can_data['ch_361'],
                                  ch_can_data['ch_590'],  ch_can_data['ch_593'],
                                  ch_can_data['ch_485'],  ch_can_data['ch_407'],
                                  ch_can_data['ch_851'],  ch_can_data['ch_1345'],
                                  ch_can_data['ch_201'],  ch_can_data['ch_1027'],
                                  ch_can_data['ch_893'],  ch_can_data['ch_431'],
                                  ch_can_data['ch_389'],  ch_can_data['ch_758'],
                                  ch_can_data['ch_190'],  ch_can_data['ch_489'],
                                  ch_can_data['ch_977'],  ch_can_data['ch_497'],
                                  ch_can_data['ch_540'],  ch_can_data['ch_1146'],
                                  ch_can_data['ch_398'],  ch_can_data['ch_251'],
                                  ch_can_data['ch_1225'],  ch_can_data['ch_560'],
                                  ch_can_data['ch_451'],  ch_can_data['ch_707'],
                                  ch_can_data['ch_498'],  ch_can_data['ch_541'],
                                  ch_can_data['ch_886'],  ch_can_data['ch_479'],
                                  ch_can_data['ch_1344'],  ch_can_data['ch_795'],
                                  ch_can_data['ch_492'],  ch_can_data['ch_516'],
                                  float(lat_plan.laneWidth),
                                  float(lat_plan.lProb),
                                  float(lat_plan.rProb),
                                  float(1.0),
                                  float(-1*mpc_desired_curvature),
                                  float(-1*mpc_desired_curvature_rate),
                                  float(0.0),
                                  float(0.0),
                                  float(0.0),
                                  float(0.0),
                                  float(0.0),
                                  float(0.0),
                                  bool(self.sm.valid),
                                  bool(1),
                                  [float(i) for i in mpc_ypts],
                                  [float(i) for i in mpc_headpts],
                                  float(obj_01_prob), float(obj_01_dx), float(obj_01_dy), float(obj_01_v), float(obj_01_a) )

    # utils sm-pm
    # get lateral controls cmds
    is_funcActv_bl = bool(self.libController.longt_out_isCtrlEngage) and bool(self.libController.Arb_is_LatCtrlActv_bl)
    desired_curve_cmd = float(self.libController.mpc_plan_desCurve)
    desired_accel_cmd = float(self.libController.longt_out_desAccelCtrlCmd)

    #print(sendData)
    if self.RC % 1==0:
      # send byted data commonds
      setSpeedIpk = round(self.libController.longt_out_drvrSetIPKSpdV)
      setSpeedIpk = min(255, setSpeedIpk)
      setSpeedIpk = 0 if setSpeedIpk == 255 else setSpeedIpk
      sendData = [0,0,0,0,0,0,0,0]+ [0,0,0,0,0,0,0,0]+ [self.RC/1, 1, int(is_funcActv_bl), 0] + \
          [2, setSpeedIpk, int(self.libController.longt_out_drvrSetTmDistLvl), 0, 0 , 0, int(self.libController.long_out_isLeadVehDtct), 0, 0, 2 if bool(is_funcActv_bl) else 1] + [0 for i in range(22)]
      sendBytes_arr = [int(x) for x in sendData]

      single_data_bytes =  struct.pack("<ffffffff", float(desired_curve_cmd) , float(desired_accel_cmd),0,0,0,0,0,0);

      self.can_pm.send('control', single_data_bytes + bytes(sendBytes_arr))
    # update Rolling counter
    self.RC +=1
    if self.RC > 15:
      self.RC=0

  def update_events(self):

    # Handle lane change
    if self.sm['lateralPlan'].laneChangeState == LaneChangeState.preLaneChange:
      direction = self.sm['lateralPlan'].laneChangeDirection
      if (self.CS.leftBlindspot and direction == LaneChangeDirection.left) or \
         (self.CS.rightBlindspot and direction == LaneChangeDirection.right):
        self.events.add(EventName.laneChangeBlocked)
      else:
        if direction == LaneChangeDirection.left:
          self.events.add(EventName.preLaneChangeLeft)
        else:
          self.events.add(EventName.preLaneChangeRight)
    elif self.sm['lateralPlan'].laneChangeState in [LaneChangeState.laneChangeStarting,
                                                 LaneChangeState.laneChangeFinishing]:
      self.events.add(EventName.laneChange)

  def publish_log(self, frame, start_time):

    ### publish control state and car state
    debug_flag = bool(self.libController.Arb_is_LatCtrlActv_bl) and bool(self.libController.longt_out_isCtrlEngage)

    self.debug_flag = debug_flag
    self.current_alert_types = [ET.PERMANENT]
    # update car events
    self.events.clear()
    if self.debug_flag and not self.debug_flag_last:
      self.events.add(EventName.buttonEnable)
    elif not self.debug_flag:
      self.events.add(EventName.buttonCancel)

    # update events
    self.update_events()

    # update states
    self.state_transition()
    clear_event = ET.WARNING if ET.WARNING not in self.current_alert_types else None
    alerts = self.events.create_alerts(self.current_alert_types, [self.CP, self.sm, True])
    self.AM.add_many(frame, alerts)
    self.AM.process_alerts(frame, clear_event)


    st = time.time()
    # controlsState
    dat = messaging.new_message('controlsState')
    dat.valid = True
    controlsState = dat.controlsState
    controlsState.alertText1 = self.AM.alert_text_1
    controlsState.alertText2 = self.AM.alert_text_2
    controlsState.alertSize = self.AM.alert_size
    controlsState.alertStatus = self.AM.alert_status
    controlsState.alertBlinkingRate = self.AM.alert_rate
    controlsState.alertType = self.AM.alert_type
    controlsState.alertSound = self.AM.audible_alert
    controlsState.startMonoTime = int(start_time * 1e9)
    dt = (time.time() - st)
    if dt > 0.005:
      print(dt)


    # normal signals
    controlsState.enabled = debug_flag
    controlsState.active = debug_flag
    controlsState.vPid = float(20)
    controlsState.state = self.state

    current_curvature = (3.1416/180)*self.libController.m_VehCP_yr_VehDynYawRate_sg/max((self.libController.m_VehCP_V_VehSpdAvgDrvn_sg/3.6), 1)
    controlsState.curvature = float(current_curvature)
    controlsState.engageable = True
    controlsState.vCruise = float(self.libController.longt_out_drvrSetIPKSpdV)  #sm['deviceState'].freeSpacePercent
    controlsState.angleSteers = float(self.libController.m_VehCP_angD_StrgWhlAng_sg)
    controlsState.steeringAngleDesiredDeg = float(self.libController.YRC_angD_ReqStrgWhlAng_sg)

    self.pm.send('controlsState', dat)

    ### carState
    cs_send = messaging.new_message('carState')
    cs_send.valid = True
    carState = cs_send.carState
    carState.vEgo = float(self.libController.m_VehCP_V_VehSpdAvgDrvn_sg/3.6)
    carState.yawRate = float(self.libController.m_VehCP_yr_VehDynYawRate_sg)
    carState.steeringAngleDeg = float(self.libController.m_VehCP_angD_StrgWhlAng_sg)
    carState.steeringRateDeg = float(self.libController.m_VehCP_W_StrgWhlAngGrd_sg)
    carState.steeringTorque = float(self.libController.m_VehCP_T_DrvrStrgDlvrdToq_sg)
    carState.steeringTorqueEps = float(self.libController.m_VehCP_T_ChLKARespToq_sg)

    carState.leftBlinker = bool(self.libController.m_VehCP_is_LftStrgLmpOn_bl)
    carState.rightBlinker = bool(self.libController.m_VehCP_is_RghtStrgLmpOn_bl)
    # enabled default to auto lane change.
    carState.steeringPressed = True #bool(abs(self.libController.VehCP_T_DrvrStrgDlvrdToq_sg)>0.4)
    carState.leftBlindspot = bool(self.libController.m_VehCP_LeftBSD_Warnning_u8)
    carState.rightBlindspot = bool(self.libController.m_VehCP_RightBSD_Warnning_u8)

    # car events
    car_events = self.events.to_msg()
    carState.events = car_events

    #copy to self.cs
    self.CS = carState
    self.pm.send('carState', cs_send)

    # carParams - logged every 50 seconds (> 1 per segment)
    if (frame % int(50. / DT_CTRL) == 0):
      cp_send = messaging.new_message('carParams')
      cp_send.valid = True
      cp_send.carParams = self.CP
      self.pm.send('carParams', cp_send)


    # car control
    CC = car.CarControl.new_message()
    CC.enabled = debug_flag
    cc_send = messaging.new_message('carControl')
    cc_send.valid = True
    cc_send.carControl = CC
    self.pm.send('carControl', cc_send)

    # state varibales
    self.debug_flag_last = self.debug_flag

def main():
    #config_realtime_process(3, Priority.CTRL_HIGH)

    # controller and sub-pub message
    cc = CarController()

    ### ratekeeper
    rk = Ratekeeper(50, print_delay_threshold=0.02)
    is_send = False
    frame = 0

    while True:
      start_time = sec_since_boot()
      cc.sm.update(0)
      cc.can_sm.update(0)

      ### update controller, 20ms
      if is_send and cc.can_sm.data['ch_can'] is not None:
        cc.update()
      dt = (sec_since_boot() - start_time)
      if dt > 0.01:
        print(dt)
      ### publish logs, 10ms
      #cc.publish_log(frame, start_time)
      ### keep realtime
      rk.keep_time()

      # update send flag
      is_send = True#not is_send
      frame += 1



if __name__ == "__main__":
  main()
