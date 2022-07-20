import os
import time
import re
from cffi import FFI

def get_header():
  ffi = FFI()
  header = '''/*=======================================================================*
   * Fixed width word size data types:                                     *
   *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
   *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
   *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
   *=======================================================================*/
  typedef signed char int8_T;
  typedef unsigned char uint8_T;
  typedef short int16_T;
  typedef unsigned short uint16_T;
  typedef int int32_T;
  typedef unsigned int uint32_T;
  typedef float real32_T;
  typedef double real64_T;

  /*===========================================================================*
   * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
   *                           real_T, time_T, ulong_T.                        *
   *===========================================================================*/
  typedef double real_T;
  typedef double time_T;
  typedef unsigned char boolean_T;
  typedef int int_T;
  typedef unsigned int uint_T;
  typedef unsigned long ulong_T;
  typedef char char_T;
  typedef unsigned char uchar_T;
  typedef char_T byte_T;

  /*
   * Exported Global Signals
   *
   * Note: Exported global signals are block signals with an exported global
   * storage class designation.  Code generation will declare the memory for
   * these signals and export their symbols.
   *
   */
  extern real32_T longt_out_drvrSetIPKSpdV;/* '<S1>/Signal Copy4' */
  extern real32_T m_VehCP_T_ChLKARespToq_sg;/* '<S72>/Data Type Conversion1' */
  extern real32_T m_VehCP_T_DrvrStrgDlvrdToq_sg;/* '<S72>/Data Type Conversion2' */
  extern real32_T m_VehCP_yr_VehDynYawRate_sg;/* '<S84>/Sum' */
  extern real32_T m_VehCP_angD_StrgWhlAng_sg;/* '<S81>/Sum' */
  extern real32_T m_VehCP_V_VehSpdAvgDrvn_sg;/* '<S82>/Sum' */
  extern real32_T m_VehCP_W_StrgWhlAngGrd_sg;/* '<S85>/Sum' */
  extern real32_T longt_out_desAccelCtrlCmd;/* '<S90>/Add1' */
  extern real32_T YRC_angD_ReqStrgWhlAng_sg;/* '<S1294>/Switch' */
  extern real32_T mpc_plan_desCurve;     /* '<S1065>/Divide' */
  extern real32_T m_dst_target;          /* '<S181>/Switch' */
  extern real32_T m_dst_red;             /* '<S137>/Signal Copy1' */
  extern real32_T m_dst_desire;          /* '<S137>/Subtract1' */
  extern uint8_T longt_out_drvrSetTmDistLvl;/* '<S1>/Data Type Conversion' */
  extern uint8_T m_VehCP_LeftBSD_Warnning_u8;/* '<S73>/Data Type Conversion' */
  extern uint8_T m_VehCP_RightBSD_Warnning_u8;/* '<S73>/Data Type Conversion1' */
  extern uint8_T m_VehCP_n_ChLKACtrlSts_u8;/* '<S72>/Data Type Conversion' */
  extern uint8_T m_VehCP_n_StrgCustSetngDspCmd_u8;/* '<S72>/Data Type Conversion3' */
  extern uint8_T FVCM_EPS_Frame[8];      /* '<S1070>/Signal Copy' */
  extern uint8_T FVCM_HMI_Frame[8];      /* '<S1069>/Signal Copy' */
  extern uint8_T m_Followed_Traj;        /* '<S139>/Switch13' */
  extern boolean_T long_out_isLeadVehDtct;/* '<S1019>/Compare' */
  extern boolean_T m_ACC_is_FSMEnbl01_bl;/* '<S942>/Logical Operator5' */
  extern boolean_T m_ACC_is_FSMEnbl02_bl;/* '<S942>/Logical Operator7' */
  extern boolean_T m_ACC_is_FSMEnbl03_bl;/* '<S942>/Logical Operator17' */
  extern boolean_T m_ACC_is_VehSdslSts_bl;/* '<S934>/Relational Operator' */
  extern boolean_T m_ACC_is_SafyBltFstn_bl;/* '<S945>/Logical Operator5' */
  extern boolean_T m_ACC_is_FSMEnbl04_bl;/* '<S942>/Logical Operator22' */
  extern boolean_T m_ACC_is_FSMEnbl05_bl;/* '<S942>/Logical Operator26' */
  extern boolean_T m_ACC_is_FSMEnbl06_bl;/* '<S942>/Logical Operator32' */
  extern boolean_T m_ACC_is_FSMEnbl07_bl;/* '<S942>/Logical Operator23' */
  extern boolean_T m_ACC_is_ACCFSMEnbl_bl;/* '<S942>/Logical Operator39' */
  extern boolean_T m_ACC_is_SSMEnbl01_bl;/* '<S975>/Logical Operator3'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_ACCSSMEnbl_bl;/* '<S975>/Logical Operator8' */
  extern boolean_T m_ACC_is_FSMDsbl01_bl;/* '<S939>/Logical Operator4'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_ACCActvGeneral_bl;/* '<S928>/Logical Operator24' */
  extern boolean_T m_ACC_is_ACCOvrrdReq_bl;/* '<S932>/Logical Operator5' */
  extern boolean_T m_ACC_is_FSMDsbl02_bl;/* '<S939>/Logical Operator12'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_FSMDsbl03_bl;/* '<S939>/Logical Operator16'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_FSMDsbl04_bl;/* '<S939>/Logical Operator13'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_FSMDsbl05_bl;/* '<S939>/Logical Operator25'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_FSMDsbl06_bl;/* '<S939>/Logical Operator21'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_FSMDsbl07_bl;/* '<S939>/Logical Operator32'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_ACCFSMDsbl_bl;/* '<S939>/Logical Operator40' */
  extern boolean_T m_ACC_is_SSMDsbl01_bl;/* '<S974>/Logical Operator2'
                                          * Indicate the left prevention trigger status in ITM.

                                          */
  extern boolean_T m_ACC_is_ACCSSMDsbl_bl;/* '<S974>/Logical Operator7' */
  extern boolean_T m_ACC_is_ACCReqDsbl_bl;/* '<S930>/Logical Operator4' */
  extern boolean_T m_ACC_is_ACCReqEnbl_bl;/* '<S930>/Logical Operator5' */
  extern boolean_T m_ACC_is_BrkOnlyEnbl_bl;/* '<S936>/Logical Operator3' */
  extern boolean_T m_ACC_is_BrkOnlyExit_bl;/* '<S937>/Logical Operator3' */
  extern boolean_T m_VehCP_is_LftStrgLmpOn_bl;/* '<S75>/Signal Copy18' */
  extern boolean_T m_VehCP_is_RghtStrgLmpOn_bl;/* '<S75>/Signal Copy22' */
  extern boolean_T longt_out_isCtrlEngage;/* '<S94>/Switch' */
  extern boolean_T m_ACC_is_AEBActvEver_bl;/* '<S951>/Logical Operator10' */
  extern boolean_T Arb_is_LatCtrlActv_bl;/* '<S1064>/Signal Copy' */
  extern boolean_T m_is_ACC_FaultBitlhbt_bl;/* '<S93>/Constant5'
                                             * Indicate the left prevention trigger status in ITM.

                                           */

  /* Model entry point functions */
  extern void app_initialize(void);
  extern void app_terminate(void);

/* Customized model step function */
extern void app_step(uint8_T arg_radar_pubcan_1046[8], uint8_T
                     arg_radar_pubcan_858[8], uint8_T arg_radar_pubcan_677[8],
                     uint8_T arg_radar_pubcan_175[8], uint8_T
                     arg_radar_pubcan_481[8], uint8_T arg_radar_pubcan_562[8],
                     uint8_T arg_radar_pubcan_1123[8], uint8_T
                     arg_radar_pubcan_1130[8], uint8_T arg_radar_pubcan_588[8],
                     uint8_T arg_radar_pubcan_1009[8], uint8_T
                     arg_radar_pubcan_404[8], uint8_T arg_radar_pubcan_572[8],
                     uint8_T arg_radar_pubcan_554[8], uint8_T
                     arg_radar_pubcan_355[8], uint8_T arg_radar_pubcan_508[8],
                     uint8_T arg_radar_pubcan_241[8], uint8_T
                     arg_radar_pubcan_361[8], uint8_T arg_radar_pubcan_590[8],
                     uint8_T arg_radar_pubcan_593[8], uint8_T
                     arg_radar_pubcan_485[8], uint8_T arg_radar_pubcan_407[8],
                     uint8_T arg_radar_pubcan_851[8], uint8_T
                     arg_radar_pubcan_1345[8], uint8_T arg_radar_pubcan_201[8],
                     uint8_T arg_radar_pubcan_1027[8], uint8_T
                     arg_radar_pubcan_893[8], uint8_T arg_radar_pubcan_431[8],
                     uint8_T arg_radar_pubcan_389[8], uint8_T
                     arg_radar_pubcan_758[8], uint8_T arg_radar_pubcan_190[8],
                     uint8_T arg_radar_pubcan_489[8], uint8_T
                     arg_radar_pubcan_977[8], uint8_T arg_radar_pubcan_497[8],
                     uint8_T arg_radar_pubcan_540[8], uint8_T
                     arg_radar_pubcan_1146[8], uint8_T arg_radar_pubcan_398[8],
                     uint8_T arg_radar_pubcan_251[8], uint8_T
                     arg_radar_pubcan_1225[8], uint8_T arg_radar_pubcan_560[8],
                     uint8_T arg_radar_pubcan_451[8], uint8_T
                     arg_radar_pubcan_707[8], uint8_T arg_radar_pubcan_498[8],
                     uint8_T arg_radar_pubcan_541[8], uint8_T
                     arg_radar_pubcan_886[8], uint8_T arg_radar_pubcan_479[8],
                     uint8_T arg_radar_pubcan_1344[8], uint8_T
                     arg_radar_pubcan_795[8], uint8_T arg_Cam_can_492[8],
                     uint8_T arg_Cam_can_516[8], real32_T
                     arg_lateralPlan_laneWidth, real32_T arg_lateralPlan_lProb,
                     real32_T arg_lateralPlan_rProb, real32_T
                     arg_lateralPlan_dProb, real32_T
                     arg_lateralPlan_rawCurvature, real32_T
                     arg_lateralPlan_rawCurvatureRate, real32_T
                     arg_lateralPlan_curvature, real32_T
                     arg_lateralPlan_curvatureRate, real32_T
                     arg_lateralPlan_pathCof_C3, real32_T
                     arg_lateralPlan_pathCof_C2, real32_T
                     arg_lateralPlan_pathCof_C1, real32_T
                     arg_lateralPlan_pathCof_C0, boolean_T arg_lateralPlan_valid,
                     boolean_T arg_lateralPlan_ctrlType, real32_T
                     arg_lateralPlan_yPts[17], real32_T arg_lateralPlan_headPts
                     [17], real32_T arg_Obj_01_Prob, real32_T arg_Obj_01_dx,
                     real32_T arg_Obj_01_dy, real32_T arg_Obj_01_v, real32_T
                     arg_Obj_01_a);

  '''
  filepath = "/data/openpilot/selfdrive/controls/saicmotor/zs11_build/include/app.h"
  with open(filepath, "r") as h:
    txt = h.read()
  para_list = re.findall("extern real.*;|extern int.*;|extern uint.*;|extern boolean_T .*;", txt)
  parameters ='\n'.join(para_list)
  parameters = ''

  #print(parameters)
  ffi.cdef(header + parameters)
  return ffi


latCtrl_file = '/data/openpilot/selfdrive/controls/saicmotor/zs11_build/libVLatC.so'
ffi = get_header()
latCtrl = ffi.dlopen(latCtrl_file)
