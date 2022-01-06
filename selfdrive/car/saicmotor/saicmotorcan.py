from cereal import car
from selfdrive.car import make_can_msg


GearShifter = car.CarState.GearShifter
VisualAlert = car.CarControl.HUDControl.VisualAlert

def create_lkas_hud(packer, tja_ica_sys_state, is_left_line_visiable, is_right_line_visiable, handoff_wrnng_lvl):
  # FVCM_HSC2_FrP02  (359) Controls what lane-keeping icon is displayed.

  values = {
    "HandOffStrgWhlDetnStaHSC2"  : handoff_wrnng_lvl,  # hands off warnning, 1 is no warnning
    "HandOffStrgWhlDetnStaVHSC2" : 0,  # hands off warnning valid, 0 is valid
    "LDWLKADspCmdHSC2"           : 0,  #  LKA display command
    "LDWLKAHapticWrnngDspCmdHSC2": 0,  # handoff_wrnng_lvl 
    'LDWLKALVsulznReqHSC2'       : is_left_line_visiable, # left lane line display
    'LDWLKARVsulznReqHSC2'       : is_right_line_visiable, # right lane line display
    'TJAICADspCmdHSC2'           : 1,   #  TJA display command ,default open
    'TJAICASysFltStsHSC2'        : 0,
    'TJAICASysStsHSC2'           : tja_ica_sys_state, #  TJA system status

    }

  return packer.make_can_msg("FVCM_HSC2_FrP02", 0, values)  # 0x2a6


def create_lkas_command(packer, lka_rc, lka_toq, lka_toq_sts, lka_toq_valid, lka_isDrvrTkovReq):
  # FVCM_HSC2_FrP03 id_509 Lane-keeping signal to turn the wheel.

  #print(lka_toq)
  # caculate pv value for handshake
  # limit torque to [-3 3]
  lka_toq_u = min(3, lka_toq)
  lka_toq_u = max(-3, lka_toq_u)

  # persision is  0.01
  lka_toq_u = int(lka_toq_u * 100) / 100.

  # caculate pv value
  PV_handshake = int(lka_toq_sts) * 4096 + (round((lka_toq_u + 10.24) / 0.01))* 2 + int(lka_toq_valid)
  PV_handshake = PV_handshake + int(lka_rc)
  PV_handshake  = (PV_handshake ^ 0b11111111111111) + 1

  # we caculate pv data in packer.cc
  values = {
    "LDWLKAVbnLvlReqHSC2": 0,
    "LKAAlvRCHSC2": lka_rc,
    "LKADrvrTkovReqHSC2": lka_isDrvrTkovReq,
    "LKAReqToqHSC2": lka_toq_u,
    #"LKAReqToqPVHSC2": PV_handshake,
    "LKAReqToqStsHSC2": lka_toq_sts,
    "LKAReqToqVHSC2": 0,
    "LKASysFltStsHSC2": 0,
    "LKASysStsHSC2": 0,

  }

  #return PV_handshake
  #print(values)
  return packer.make_can_msg("FVCM_HSC2_FrP03", 0, values)

