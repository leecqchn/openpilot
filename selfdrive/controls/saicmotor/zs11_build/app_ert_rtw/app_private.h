/*
 * File: app_private.h
 *
 * Code generated for Simulink model 'app'.
 *
 * Model version                  : 1.172
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Feb 24 05:55:06 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_app_private_h_
#define RTW_HEADER_app_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "app.h"

/* Includes for objects with custom storage classes. */
#include "ads_com.h"

/*
 * Check that imported macros with storage class "ImportedDefine" are defined
 */
#ifndef CV_kph2mps
#error The variable for the parameter "CV_kph2mps" is not defined
#endif

#ifndef CV_mps2kph
#error The variable for the parameter "CV_mps2kph" is not defined
#endif

#ifndef PORTABLE_WORDSIZES
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif
#endif                                 /* PORTABLE_WORDSIZES */

extern real32_T rt_powf_snf(real32_T u0, real32_T u1);
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real_T look2_binlcpw(real_T u0, real_T u1, const real_T bp0[], const
  real_T bp1[], const real_T table[], const uint32_T maxIndex[], uint32_T stride);
extern real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern real32_T look2_iflf_binlxpw(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
extern real32_T look1_iflf_binlcapw(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern void app_Chart3(boolean_T rtu_strLmpSig, boolean_T *rty_is_steerLampOn_bl,
  DW_Chart3_app_T *localDW);
extern void app_Chart(boolean_T rtu_Arb_is_LatCtrlActv_bl, real32_T
                      *rty_ramp_cof, DW_Chart_app_T *localDW);
extern void app_Debounce_Module_Init(boolean_T *rty_Out);
extern boolean_T app_Debounce_Module(boolean_T rtu_In, real32_T rtu_RiseTimeLmt,
  real32_T rtu_FallTimeLmt, real32_T rtu_MainLoop_Time, DW_Debounce_Module_app_T
  *localDW);
extern real32_T app_Vehicle_LongtResist_Estimate(real32_T
  rtu_DFIn_v_EgoAvgVehSpd_sg, real32_T rtu_ARB_a_RSEEstdSlopeVal_sg);
extern void app_SfD(real32_T rtu_Num_In, real32_T *rty_Divide_Out, const
                    ConstB_SfD_app_T *localC, real32_T rtp_Den_In_Min);
extern void app_EnDRL_Init(DW_EnDRL_app_T *localDW);
extern void app_EnDRL(real32_T rtu_In, real32_T rtu_IC, boolean_T rtu_Ena,
                      real32_T rtu_Up, real32_T rtu_Lo, real32_T *rty_Out,
                      DW_EnDRL_app_T *localDW, ZCE_EnDRL_app_T *localZCE,
                      real32_T rtp_MainLoop_Time);
extern void app_LowPass_Filter_Init(DW_LowPass_Filter_app_T *localDW);
extern void app_LowPass_Filter(real32_T rtu_Signal_Input, real32_T
  *rty_Signal_Output, DW_LowPass_Filter_app_T *localDW, real32_T
  rtp_LPF_CrossoverPoint_Hz, real32_T rtp_LPF_SampFrequency_Num);
extern void app_Trggr_Hyst(real32_T rtu_In_Sig, real32_T rtu_Up, real32_T
  rtu_Low, boolean_T *rty_True_False, DW_Trggr_Hyst_app_T *localDW);
extern void app_Chart_n_Init(eRPL_RePlanLevel *rty_TRP_Replan_Level);
extern void app_Chart_b(boolean_T rtu_is_RwPilotActv_bl, boolean_T
  rtu_RCD_is_InitCondFlf_bl, boolean_T rtu_RCD_is_ReplanCondFlf_bl, boolean_T
  rtu_RCD_is_NormCondFlf_bl, eRPL_RePlanLevel *rty_TRP_Replan_Level);
extern void app_Chart1(boolean_T rtu_input, real32_T rtu_k_TRP_t_ReplnTm_sg,
  real32_T rtu_c_TRP_t_MainLoopTm_sg, boolean_T *rty_output, DW_Chart1_app_T
  *localDW);
extern void app_MATLABFunction(real32_T rtu_c5, real32_T rtu_c4, real32_T rtu_c3,
  real32_T rtu_t_end, real32_T rtu_a0, real32_T *rty_Ax_Max_New, real32_T
  *rty_Ax_Min_New, real32_T *rty_t_Ax_Extrem1_New, real32_T
  *rty_t_Ax_Extrem2_New, real32_T *rty_Ax_Extrem1_New, real32_T
  *rty_Ax_Extrem2_New);
extern void app_MATLABFunction_f(real32_T rtu_t_end, real32_T rtu_a0, real32_T
  rtu_v0, real32_T rtu_s0, real32_T *rty_c5, real32_T *rty_c4, real32_T *rty_c3);
extern void app_MATLABFunction_g(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T *rty_Jerk_Max_New, real32_T
  *rty_Jerk_Min_New, real32_T *rty_t_Jerk_Extrem_New, real32_T
  *rty_Jerk_Extrem_New);
extern void app_MATLABFunction_p(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T *rty_JerkSqIntg_t_end);
extern void app_MATLABFunction_gv(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T rtu_a0, real32_T rtu_v0, real32_T rtu_s0,
  real32_T *rty_S_Max, real32_T *rty_S_Min, real32_T *rty_t_Sx_Extrem1_New,
  real32_T *rty_t_Sx_Extrem2_New, real32_T *rty_Sx_Extrem1_New, real32_T
  *rty_Sx_Extrem2_New);
extern void app_MATLABFunction_m(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T rtu_a0, real32_T rtu_v0, real32_T
  *rty_V_max_overshoot, real32_T *rty_t_Vx_Extrem1_New, real32_T
  *rty_t_Vx_Extrem2_New, real32_T *rty_Vx_Extrem1_New, real32_T
  *rty_Vx_Extrem2_New);
extern void app_MATLABFunction_a(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T rtu_a0, real32_T *rty_Ax_Max_New,
  real32_T *rty_Ax_Min_New, real32_T *rty_t_Ax_Extrem1_New, real32_T
  *rty_t_Ax_Extrem2_New, real32_T *rty_Ax_Extrem1_New, real32_T
  *rty_Ax_Extrem2_New);
extern void app_MATLABFunction_gl(real32_T rtu_t_end, real32_T rtu_a0, real32_T
  rtu_v0, real32_T rtu_s0, real32_T *rty_c5, real32_T *rty_c4, real32_T *rty_c3);
extern void app_MATLABFunction_k(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T *rty_Jerk_Max_New, real32_T
  *rty_Jerk_Min_New, real32_T *rty_t_Jerk_Extrem_New, real32_T
  *rty_Jerk_Extrem_New);
extern void app_MATLABFunction_k0(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T *rty_JerkSqIntg_t_end);
extern void app_MATLABFunction_aa(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T rtu_a0, real32_T rtu_v0, real32_T rtu_s0,
  real32_T *rty_S_Max, real32_T *rty_S_Min, real32_T *rty_t_Sx_Extrem1_New,
  real32_T *rty_t_Sx_Extrem2_New, real32_T *rty_Sx_Extrem1_New, real32_T
  *rty_Sx_Extrem2_New);
extern void app_MATLABFunction_n(real32_T rtu_c5, real32_T rtu_c4, real32_T
  rtu_c3, real32_T rtu_t_end, real32_T rtu_a0, real32_T rtu_v0, real32_T
  *rty_V_max_overshoot, real32_T *rty_t_Vx_Extrem1_New, real32_T
  *rty_t_Vx_Extrem2_New, real32_T *rty_Vx_Extrem1_New, real32_T
  *rty_Vx_Extrem2_New);
extern void app_Longt_Dist_Keep(real32_T rtu_Traj_Bartch_Out, real32_T
  rtu_Traj_Coff_Batch_Out, real32_T rtu_Traj_Coff_Batch_Out_p, real32_T
  rtu_Traj_Coff_Batch_Out_d, real32_T rtu_Traj_Coff_Batch_Out_o, real32_T
  rtu_Traj_Coff_Batch_Out_c, real32_T rtu_Traj_Coff_Batch_Out_j, real32_T
  rtu_Traj_Coff_Batch_Out_k, real32_T rtu_Traj_Coff_Batch_Out_ce, real32_T
  rtu_Traj_Coff_Batch_Out_b, real32_T rtu_Traj_Coff_Batch_Out_ju, real32_T
  rtu_Traj_Coff_Batch_Out_l, real32_T rtu_Traj_Coff_Batch_Out_h, boolean_T
  rtu_Long_Traj_DistReplan_Flag, real32_T *rty_s_trajFol_rel, real32_T
  *rty_v_trajFol_rel, real32_T *rty_a_trajFol_rel, real32_T *rty_j_trajFol_rel,
  real32_T *rty_t_Fol, real32_T *rty_t_remainFol, real32_T
  *rty_s_trajFol_real_dis, real32_T *rty_v_trajFol_real_dis, real32_T
  *rty_a_trajFol_real_dis, real32_T *rty_jerk_trajFol_real_dis, real32_T
  *rty_s_trajFol_real_dis_predict_one_ste, real32_T
  *rty_v_trajFol_real_dis_predict_one_ste, real32_T
  *rty_a_trajFol_real_dis_prdtOneStp, real32_T
  *rty_jerk_trajFol_real_dis_prdtOneStp, const ConstB_Longt_Dist_Keep_app_T
  *localC, DW_Longt_Dist_Keep_app_T *localDW);
extern void app_SfD_i(real32_T rtu_Num_In, real32_T rtu_Den_In, real32_T
                      *rty_Divide_Out, real32_T rtp_Den_In_Min);
extern void app_IfActionSubsystem(real32_T rtu_a_extrem1, real32_T rtu_t_extrem1,
  real32_T rtu_t_extrem2, real32_T *rty_Ax_Extrem, real32_T *rty_Ax_Extrem_k,
  real32_T *rty_Ax_Extrem_e, real32_T *rty_Ax_Extrem_el);
extern void app_IfActionSubsystem1(real32_T rtu_a_extrem1, real32_T
  rtu_a_extrem2, real32_T rtu_t_extrem1, real32_T *rty_Ax_Extrem, real32_T
  *rty_Ax_Extrem_m, real32_T *rty_Ax_Extrem_l, real32_T *rty_Ax_Extrem_ld);
extern void app_IfActionSubsystem2(real32_T rtu_a_extrem1, real32_T
  rtu_a_extrem2, real32_T rtu_t_extrem1, real32_T rtu_t_extrem2, real32_T
  *rty_Ax_Extrem, real32_T *rty_Ax_Extrem_n, real32_T *rty_Ax_Extrem_n2,
  real32_T *rty_Ax_Extrem_k);
extern void app_IfActionSubsystem_c(real32_T rtu_A, real32_T rtu_B, real32_T
  rtu_Delta, real32_T rtu_t_end, real32_T rty_t[2]);
extern void app_IfActionSubsystem1_h(real32_T rtu_B, real32_T rtu_C, real32_T
  rtu_t_end, real32_T rty_t[2]);
extern void app_IfActionSubsystem3(real32_T rtu_v_t1, real32_T
  *rty_MOS_v_MaxOvershootSpd_sg);
extern void app_IfActionSubsystem4(real32_T rtu_v_t2, real32_T
  *rty_MOS_v_MaxOvershootSpd_sg);
extern void app_IfActionSubsystem5(real32_T rtu_v_t1, real32_T rtu_v_t2,
  real32_T *rty_MOS_v_MaxOvershootSpd_sg);
extern void app_IfActionSubsystem6(real32_T *rty_MOS_v_MaxOvershootSpd_sg);
extern void app_LinSpace(real32_T rtu_x_start, real32_T rtu_x_end, real32_T
  rty_LinearVector[6], B_LinSpace_app_T *localB, uint8_T rtp_PntsNum);
extern void app_Trj_RePlan1_Init(DW_Trj_RePlan1_app_T *localDW);
extern void app_Trj_RePlan1(uint8_T rtu_Traj_B_Batch_Out, real32_T
  rtu_Traj_B_Batch_Out_j, real32_T rtu_Traj_B_Batch_Out_o, real32_T
  rtu_Traj_B_Batch_Out_i, real32_T rtu_Traj_B_Batch_Out_m, real32_T
  rtu_Traj_B_Batch_Out_d, real32_T rtu_Traj_B_Batch_Out_db, real32_T
  rtu_Traj_Batch_Out, boolean_T rtu_Traj_Batch_Out_o, real32_T
  rtu_Traj_Batch_Out_f, real32_T rtu_Traj_Batch_Out_b, real32_T
  rtu_Traj_Batch_Out_a, boolean_T rtu_Traj_Batch_Out_l, real32_T
  rtu_Traj_Batch_Out_i, uint8_T rtu_Traj_Batch_Out_d, const real32_T
  rtu_Traj_Batch_Out_h[3], const real32_T rtu_Traj_Batch_Out_c[3], real32_T
  rtu_Traj_Batch_Out_fu, real32_T rtu_Traj_Batch_Out_e, real32_T
  rtu_Traj_Batch_Out_k, real32_T rtu_Traj_Batch_Out_m, real32_T
  rtu_Traj_Batch_Out_g, real32_T rtu_Traj_Batch_Out_i4, real32_T
  rtu_Traj_Batch_Out_mh, real32_T rtu_Traj_Batch_Out_mw, real32_T
  *rty_Trj_b_BatchFol_Out, real32_T *rty_Trj_b_BatchFol_Out_j, real32_T
  *rty_Trj_b_BatchFol_Out_o, real32_T *rty_Trj_b_BatchFol_Out_i, real32_T
  *rty_Trj_b_BatchFol_Out_m, real32_T *rty_Trj_b_BatchFol_Out_d, real32_T
  *rty_Trj_b_BatchFol_Out_db, real32_T *rty_Trj_b_BatchFol_Out_d4, real32_T
  *rty_Trj_b_BatchFol_Out_ow, real32_T *rty_Trj_b_BatchFol_Out_f, real32_T
  *rty_Trj_b_BatchFol_Out_b, uint8_T *rty_Trj_b_BatchFol_Out_a, boolean_T
  *rty_Trj_BatchFol_Out, real32_T *rty_Trj_BatchFol_Out_i, real32_T
  *rty_Trj_BatchFol_Out_d, real32_T *rty_Trj_BatchFol_Out_h, real32_T
  *rty_Trj_BatchFol_Out_c, real32_T *rty_Trj_BatchFol_Out_f, real32_T
  *rty_Trj_BatchFol_Out_e, real32_T *rty_Trj_BatchFol_Out_k, real32_T
  *rty_Trj_BatchFol_Out_m, real32_T *rty_Trj_BatchFol_Out_g, real32_T
  *rty_Trj_BatchFol_Out_i4, real32_T *rty_Trj_BatchFol_Out_mh, real32_T
  *rty_Trj_BatchFol_Out_mw, boolean_T *rty_Trj_BatchFol_Out_gw, real32_T
  *rty_Trj_BatchFol_Out_f5, uint8_T *rty_Trj_BatchFol_Out_a, real32_T
  rty_Trj_BatchFol_Out_ek[3], real32_T rty_Trj_BatchFol_Out_k2[3], uint8_T
  *rty_Traj_ID_FolSpdFol, real32_T *rty_Traj_t_TrjTrvlTmFol_sg, real32_T
  *rty_Traj_t_TrjRemainTmFol_sg, const ConstB_Trj_RePlan1_app_T *localC,
  DW_Trj_RePlan1_app_T *localDW);
extern boolean_T app_Chattering_Filter(boolean_T rtu_Input_bl,
  DW_Chattering_Filter_app_T *localDW);
extern void app_Fallingedge_Detection(boolean_T rtu_Input_bl, boolean_T
  *rty_Output_bl, DW_Fallingedge_Detection_app_T *localDW);
extern void app_Upedge_Detection(boolean_T rtu_Input_bl, boolean_T
  *rty_Output_bl, DW_Upedge_Detection_app_T *localDW);
extern void app_Debounce_Module_d_Init(boolean_T *rty_Out);
extern boolean_T app_Debounce_Module_b(boolean_T rtu_In, real32_T
  rtu_RiseTimeLmt, real32_T rtu_FallTimeLmt, real32_T rtu_MainLoop_Time,
  DW_Debounce_Module_app_h_T *localDW);
extern void app_DownEdge_counter_Init(boolean_T *rty_TrgEnbl_bl);
extern void app_DownEdge_counter(boolean_T rtu_Trg_bl, real32_T rtu_CntTm_sg,
  boolean_T *rty_TrgEnbl_bl, DW_DownEdge_counter_app_T *localDW);
extern void app_DFIn_TmCntrSF_TRUE1_Init(boolean_T *rty_OutPut);
extern void app_DFIn_TmCntrSF_TRUE1(boolean_T rtu_IsSignalNeedTiming, real32_T
  rtu_P_status_counter, boolean_T *rty_OutPut, DW_DFIn_TmCntrSF_TRUE1_app_T
  *localDW);
extern void app_HMI_ACCDetObjDistLvl_Init(eCDL_ACCDistLvl
  *rty_ACC_indx_HMIDetObjDistLvl_u8);
extern eCDL_ACCDistLvl app_HMI_ACCDetObjDistLvl(real32_T
  rtu_DFIn_d_CODPACCFMRdrLongtDist_sg, real32_T rtu_DFIn_v_VDPEgoAvgVehSpd_sg,
  real32_T rtu_ACC_d_FTCDsrdDistLvl1HMI_sg, uint8_T
  rtu_ACC_indx_HMISeldDistLvl_u8, const ConstB_HMI_ACCDetObjDistLvl_app_T
  *localC, DW_HMI_ACCDetObjDistLvl_app_T *localDW);
extern void app_HMI_ACCObjDetJud_Init(void);
extern uint8_T app_HMI_ACCObjDetJud(boolean_T rtu_DFIn_is_CODPFoloTgtExist_bl,
  real32_T rtu_DFIn_v_CODPACCHdVehSpd_sg, real32_T
  rtu_DFIn_d_CODPACCFMRdrLongtDist_sg, uint8_T rtu_DFIn_indx_CODPACCTgtID_u8,
  boolean_T rtu_DFIn_is_VDPVehSdslSts_bl, E_ACCReqSts_t rtu_ACC_indx_SMRSts_en,
  const ConstB_HMI_ACCObjDetJud_app_T *localC, DW_HMI_ACCObjDetJud_app_T
  *localDW);
extern uint8_T app_HMI_ACCSeldDistLvl(eDSL_DrvrSetLvl
  rtu_ACC_indx_DISTmDistLvl_en);
extern void app_HMI_ACCSysCanclReq_Init(eCCR_ACCCancelReq
  *rty_ACC_indx_HMISysCanclReq_u8);
extern eCCR_ACCCancelReq app_HMI_ACCSysCanclReq(boolean_T
  rtu_DFIn_is_VDPACCSwCanclSw_bl, E_ACCReqSts_t rtu_ACC_indx_SMRSts_en,
  DW_HMI_ACCSysCanclReq_app_T *localDW);
extern eFLT_SysFltSts app_HMI_ACCSysFltStsHMI_WithSCS(boolean_T
  rtu_DFIn_is_VDPACCSwOnSw_bl, boolean_T rtu_DFIn_is_FDP_ACCTmpUnavablFlg_bl,
  boolean_T rtu_DFIn_is_FDP_ACCServReqFlg_bl, ePWR_PwrMd
  rtu_DFIn_indx_VDPSysPwrMd_en, boolean_T rtu_DFIn_is_CCFMRFltFSMWtSCS_bl);
extern void app_HMI_ACCSysStsJud_Init(E_ACCReqSts_t *rty_ACC_indx_HMISysSts_u8);
extern E_ACCReqSts_t app_HMI_ACCSysStsJud(E_ACCReqSts_t rtu_ACC_indx_SMRSts_en);
extern void app_EstdLongtAccel1_Init(B_EstdLongtAccel1_app_T *localB);
extern real32_T app_EstdLongtAccel1(real32_T rtu_DFIn_v_AvgWhlGndVel_sg,
  real32_T rtu_DFIn_v_EgoAvgVehSpd_sg, B_EstdLongtAccel1_app_T *localB,
  DW_EstdLongtAccel1_app_T *localDW);
extern void app_EstdVSELongtAccel_Init(B_EstdVSELongtAccel_app_T *localB);
extern void app_EstdVSELongtAccel(real32_T rtu_DFIn_v_AvgVehSpd_d, real32_T
  rtu_DFIn_a_EstdLongtAccelMnFilt_sg, real32_T rtu_DFIn_a_VSELongtAccel_sg,
  real32_T *rty_DFIn_a_EstdVSELongtAccel_sg, B_EstdVSELongtAccel_app_T *localB,
  DW_EstdVSELongtAccel_app_T *localDW);
extern void app_Hyseresis_Keep_Init(boolean_T *rty_TrgEnbl_bl);
extern void app_Hyseresis_Keep(boolean_T rtu_Trg_bl, boolean_T *rty_TrgEnbl_bl,
  const ConstB_Hyseresis_Keep_app_T *localC, DW_Hyseresis_Keep_app_T *localDW);
extern void app_VehSpdVaild(real32_T rtu_DA_IN_WhlGndVelLNonDrvn_sg, real32_T
  rtu_DA_IN_WhlGndVelRNonDrvn_sg, real32_T rtu_DA_IN_WhlGndVelLDrvn_sg, real32_T
  rtu_DA_IN_WhlGndVelRDrvn_sg, boolean_T rtu_DFIn_is_VIDPRolBckNoSpdThrs_bl,
  eVLD_ValidSts *rty_DFIn_indx_EgoVehSpdV_en, real32_T
  *rty_DFIn_v_AvgWhlGndVel_sg, const ConstB_VehSpdVaild_app_T *localC,
  DW_VehSpdVaild_app_T *localDW);
extern void app_Chart_g_Init(uint8_T *rty_count);
extern void app_Chart_k(uint8_T *rty_count);
extern void app_Chart4(boolean_T rtu_in_cond, real32_T rtu_loop_time, real32_T
  rtu_rise_time, real32_T rtu_fall_time, boolean_T *rty_out_cond,
  DW_Chart4_app_T *localDW);
extern void app_Chart1_p(boolean_T rtu_Arb_is_LatCtrlActv_bl, boolean_T
  rtu_lane_cond, uint8_T *rty_out_cond);
extern void app_Chart_i_Init(uint8_T rty_msg[64]);
extern void app_Chart_g(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64]);
extern void app_Chart_l_Init(uint8_T rty_msg[64]);
extern void app_Chart_c(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64]);
extern void app_Planner(const real32_T rtu_initial_lateral_status[3], real32_T
  rty_y_cof[7], B_Planner_app_T *localB, const ConstB_Planner_app_T *localC);

#endif                                 /* RTW_HEADER_app_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
