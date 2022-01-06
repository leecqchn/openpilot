/*
 * File: app_private.h
 *
 * Code generated for Simulink model 'app'.
 *
 * Model version                  : 5.8
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Sat Nov 13 14:53:03 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_app_private_h_
#define RTW_HEADER_app_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "app.h"

extern real_T rt_powd_snf(real_T u0, real_T u1);
void BINARYSEARCH_real32_T(uint32_T *piLeft, uint32_T *piRght, real32_T u, const
  real32_T *pData, uint32_T iHi);
void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData, real32_T u,
  const real32_T *pUData, uint32_T iHi);
extern real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_binlcapw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern void app_Chart3_Init(DW_Chart3_app_T *localDW);
extern void app_Chart3(boolean_T rtu_strLmpSig, boolean_T *rty_is_steerLampOn_bl,
  DW_Chart3_app_T *localDW);
extern void app_Chart_Init(uint8_T *rty_count);
extern void app_Chart(uint8_T *rty_count);
extern void app_Chart4_Init(DW_Chart4_app_T *localDW);
extern void app_Chart4(boolean_T rtu_in_cond, real32_T rtu_loop_time, real32_T
  rtu_rise_time, real32_T rtu_fall_time, boolean_T *rty_out_cond,
  DW_Chart4_app_T *localDW);
extern void app_Chart1(boolean_T rtu_Arb_is_LatCtrlActv_bl, boolean_T
  rtu_lane_cond, uint8_T *rty_out_cond);
extern void app_Chart_a_Init(uint8_T rty_msg[64]);
extern void app_Chart_p(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64]);
extern void app_Chart_c_Init(uint8_T rty_msg[64]);
extern void app_Chart_h(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64]);
extern void app_Planner(const real32_T rtu_initial_lateral_status[3], real32_T
  rty_y_cof[7], B_Planner_app_T *localB, const ConstB_Planner_app_T *localC);
extern void app_Chart_o_Init(DW_Chart_app_go_T *localDW);
extern void app_Chart_f(boolean_T rtu_Arb_is_LatCtrlActv_bl, real32_T
  *rty_ramp_cof, DW_Chart_app_go_T *localDW);

#endif                                 /* RTW_HEADER_app_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
