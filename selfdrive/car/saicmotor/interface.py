#!/usr/bin/env python3
from cereal import car
from selfdrive.car.saicmotor.values import CAR
from selfdrive.car import STD_CARGO_KG, scale_rot_inertia, scale_tire_stiffness, gen_empty_fingerprint,get_safety_config
from selfdrive.car.interfaces import CarInterfaceBase


class CarInterface(CarInterfaceBase):
  @staticmethod
  def get_params(candidate, fingerprint=gen_empty_fingerprint(), car_fw=None):
    ret = CarInterfaceBase.get_std_params(candidate, fingerprint)
    ret.carName = "saicmotor"
    ret.safetyConfigs = [get_safety_config(car.CarParams.SafetyModel.volkswagen)]
    # reuse temperial chrysler
    #ret.safetyModel = car.CarParams.SafetyModel.chrysler

    # Speed conversion:              20, 45 mph
    ret.steerControlType = car.CarParams.SteerControlType.torque
    ret.steerRatio = 15.2  # Pacifica Hybrid 2017
    ret.steerRatioRear = 0.
    ret.wheelbase = 2.65  # in meters for Pacifica Hybrid 2017
    ret.mass = 1318. + STD_CARGO_KG  # kg curb weight Pacifica Hybrid 2017
    ret.lateralTuning.pid.kpBP, ret.lateralTuning.pid.kiBP = [[9., 20.], [9., 20.]]
    ret.lateralTuning.pid.kpV, ret.lateralTuning.pid.kiV = [[0.04, 0.1], [0.03, 0.05]]
    ret.lateralTuning.pid.kf = 0.00000   # full torque for 10 deg at 80mph means 0.00007818594
    ret.steerActuatorDelay = 0.25
    ret.steerRateCost = 0.5
    ret.steerLimitTimer = 0.4

    ret.pcmCruise = True
    ret.centerToFront = ret.wheelbase * 0.46

    ret.minSteerSpeed = -0.1  # m/s

    # starting with reasonable value for civic and scaling by mass and wheelbase
    ret.rotationalInertia = scale_rot_inertia(ret.mass, ret.wheelbase)

    # TODO: start from empirically derived lateral slip stiffness for the civic and scale by
    # mass and CG position, so all cars will have approximately similar dyn behaviors
    ret.tireStiffnessFront, ret.tireStiffnessRear = scale_tire_stiffness(ret.mass, ret.wheelbase, ret.centerToFront)

    ret.enableBsm =True 
    ret.openpilotLongitudinalControl = False
    return ret

  # returns a car.CarState
  def update(self, c, can_strings):
    # ******************* do can recv *******************
    self.cp.update_strings(can_strings)

    # we do not use cp_cam can from bosch temp, return None
    #self.cp_cam.update_strings(can_strings)

    ret = self.CS.update(self.cp, self.cp_cam)

    ret.canValid = self.cp.can_valid   # and self.cp_cam.can_valid

    # speeds
    ret.steeringRateLimited = self.CC.steer_rate_limited if self.CC is not None else False

    # events
    events = self.create_common_events(ret, extra_gears=[car.CarState.GearShifter.low],
                                       gas_resume_speed=2.)

    if ret.vEgo < self.CP.minSteerSpeed:
      events.add(car.CarEvent.EventName.belowSteerSpeed)

    ret.events = events.to_msg()

    # copy back carState packet to CS
    self.CS.out = ret.as_reader()

    return self.CS.out

  # pass in a car.CarControl
  # to be called @ 100hz
  def apply(self, c):


    can_sends = self.CC.update(c.enabled, self.CS, c.actuators, c.cruiseControl.cancel, c.hudControl.visualAlert)


    return can_sends
