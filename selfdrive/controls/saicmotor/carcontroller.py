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
from selfdrive.controls.saicmotor.lib_udpSocket import STM32UDP

from selfdrive.controls.lib.events import Events, ET
from selfdrive.controls.lib.alertmanager import AlertManager
from selfdrive.controls.lib.drive_helpers import get_lag_adjusted_curvature

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
    self.rolling_count = 0
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
  def update(self, udp, sm, pm):
    ch_can_data = udp.can_data

    ### get latera planner y and heading points
    lat_plan = sm['lateralPlan']
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
    self.libController.app_step(  [int(i) for i in ch_can_data['ch_492'] ],
                                  [int(i) for i in ch_can_data['ch_251'] ],
                                  [int(i) for i in ch_can_data['ch_355'] ],
                                  [int(i) for i in ch_can_data['ch_489'] ],
                                  [int(i) for i in ch_can_data['ch_201'] ],
                                  [int(i) for i in ch_can_data['ch_1130'] ],
                                  [int(i) for i in ch_can_data['ch_886'] ],
                                  [int(i) for i in ch_can_data['ch_901'] ],
                                  [int(i) for i in ch_can_data['ch_532'] ],
                                  [int(i) for i in ch_can_data['ch_485'] ],
                                  [int(i) for i in ch_can_data['ch_851'] ],
                                  [int(i) for i in ch_can_data['ch_540'] ],
                                  [int(i) for i in ch_can_data['ch_758'] ],
                                  [int(i) for i in ch_can_data['ch_404'] ],
                                  [int(i) for i in ch_can_data['ch_481'] ],
                                  [int(i) for i in ch_can_data['ch_389'] ],
                                  [int(i) for i in ch_can_data['ch_593'] ],
                                  [int(i) for i in ch_can_data['ch_516'] ],
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
                                  bool(sm.valid),
                                  bool(self.ctrlType),
                                  [float(i) for i in mpc_ypts],
                                  [float(i) for i in mpc_headpts] )


    # update rolling counter
    RC = self.rolling_count
    self.rolling_count +=1
    if self.rolling_count >15:
      self.rolling_count = 0
    self.active_prev = bool(self.libController.Arb_is_LatCtrlActv_bl)

    return list(self.libController.FVCM_EPS_Frame)  + list(self.libController.FVCM_HMI_Frame) + [RC, 1, 0, 0]

  def update_events(self, sm):

    # Handle lane change
    if sm['lateralPlan'].laneChangeState == LaneChangeState.preLaneChange:
      direction = sm['lateralPlan'].laneChangeDirection
      if (self.CS.leftBlindspot and direction == LaneChangeDirection.left) or \
         (self.CS.rightBlindspot and direction == LaneChangeDirection.right):
        self.events.add(EventName.laneChangeBlocked)
      else:
        if direction == LaneChangeDirection.left:
          self.events.add(EventName.preLaneChangeLeft)
        else:
          self.events.add(EventName.preLaneChangeRight)
    elif sm['lateralPlan'].laneChangeState in [LaneChangeState.laneChangeStarting,
                                                 LaneChangeState.laneChangeFinishing]:
      self.events.add(EventName.laneChange)

  def publish_log(self, sm, pm, frame, start_time):
    ### publish control state and car state
    debug_flag = bool(self.libController.Arb_is_LatCtrlActv_bl)

    ''' tmp test for button enable disenabled .
    # temp
    if frame % 200 ==0:
      self.debug_flag = not self.debug_flag
    debug_flag = self.debug_flag
    '''
    self.debug_flag = debug_flag
    self.current_alert_types = [ET.PERMANENT]
    # update car events
    self.events.clear()
    if self.debug_flag and not self.debug_flag_last:
      self.events.add(EventName.buttonEnable)
    elif not self.debug_flag:
      self.events.add(EventName.buttonCancel)

    # update events
    self.update_events(sm)

    # update states
    self.state_transition()
    clear_event = ET.WARNING if ET.WARNING not in self.current_alert_types else None
    alerts = self.events.create_alerts(self.current_alert_types, [self.CP, sm, True])
    self.AM.add_many(frame, alerts, self.state)
    self.AM.process_alerts(frame, clear_event)


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

    # normal signals
    controlsState.enabled = debug_flag
    controlsState.active = debug_flag
    controlsState.vPid = float(20)
    controlsState.state = self.state

    current_curvature = (3.1416/180)*self.libController.VehCP_yr_VehDynYawRate_sg/max((self.libController.VehSpdAvgDrvn/3.6), 1)
    controlsState.curvature = float(current_curvature)
    controlsState.engageable = True
    controlsState.vCruise = sm['deviceState'].freeSpacePercent

    #controlsState.angleSteers = float(self.libController.VehCP_angD_StrgWhlAng_sg)
    #controlsState.steeringAngleDesiredDeg = float(self.libController.YRC_angD_ReqStrgWhlAng_sg)

    pm.send('controlsState', dat)

    ### carState
    cs_send = messaging.new_message('carState')
    cs_send.valid = True
    carState = cs_send.carState
    carState.vEgo = float(self.libController.VehSpdAvgDrvn/3.6)
    carState.yawRate = float(self.libController.VehCP_yr_VehDynYawRate_sg)
    carState.steeringAngleDeg = float(self.libController.VehCP_angD_StrgWhlAng_sg)
    carState.steeringRateDeg = float(self.libController.VehCP_W_StrgWhlAngGrd_sg)
    carState.steeringTorque = float(self.libController.VehCP_T_DrvrStrgDlvrdToq_sg)
    carState.steeringTorqueEps = float(self.libController.VehCP_T_ChLKARespToq_sg)

    carState.leftBlinker = bool(self.libController.VehCP_is_LftStrgLmpOn_bl)
    carState.rightBlinker = bool(self.libController.VehCP_is_RghtStrgLmpOn_bl)
    # enabled default to auto lane change.
    carState.steeringPressed = True #bool(abs(self.libController.VehCP_T_DrvrStrgDlvrdToq_sg)>0.4)
    carState.leftBlindspot = bool(self.libController.VehCP_LeftBSD_Warnning_u8)
    carState.rightBlindspot = bool(self.libController.VehCP_RightBSD_Warnning_u8)

    # car events
    car_events = self.events.to_msg()
    carState.events = car_events

    #copy to self.cs
    self.CS = carState
    print(carState.steeringAngleDeg)
    pm.send('carState', cs_send)

    # carParams - logged every 50 seconds (> 1 per segment)
    if (frame % int(50. / DT_CTRL) == 0):
      cp_send = messaging.new_message('carParams')
      cp_send.valid = True
      cp_send.carParams = self.CP
      pm.send('carParams', cp_send)

    # car control
    CC = car.CarControl.new_message()
    CC.enabled = debug_flag
    cc_send = messaging.new_message('carControl')
    cc_send.valid = True
    cc_send.carControl = CC
    pm.send('carControl', cc_send)


    # state varibales
    self.debug_flag_last = self.debug_flag

def main():
    #config_realtime_process(3, Priority.CTRL_HIGH)
    ### start sock zmq subscribe thread to update data
    udp = STM32UDP()
    udp.setDaemon(True)
    udp.start()

    # controller and sub-pub message
    cc = CarController()
    sm = messaging.SubMaster(['lateralPlan', 'liveCalibration', 'deviceState'])
    pm = messaging.PubMaster(['controlsState', 'carState', 'carParams', 'carControl'])


    ### ratekeeper
    rk = Ratekeeper(100, print_delay_threshold=None)
    is_send = False
    frame = 0

    while True:
      start_time = sec_since_boot()
      sm.update(0)

      ### update controller, 20ms
      if is_send:
        sendData = cc.update(udp, sm, pm)

        # while udp socket with stm32 is conneted. we send control commands
        try:
          udp.server.sendto(b''.join(map(lambda x:int.to_bytes(x,1,'little'), sendData)), ('192.168.5.12', 9999) )
        except:
          pass

      ### publish logs, 10ms
      cc.publish_log(sm, pm, frame, start_time)

      ### keep realtime
      rk.keep_time()

      # update send flag
      is_send = not is_send
      frame += 1

if __name__ == "__main__":
    main()
