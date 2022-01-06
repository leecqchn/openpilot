/*
 * File: app.c
 *
 * Code generated for Simulink model 'app'.
 *
 * Model version                  : 5.26
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Dec 15 13:43:11 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-A
 * Code generation objectives:
 *    1. ROM efficiency
 *    2. RAM efficiency
 *    3. Execution efficiency
 * Validation result: Not run
 */

#include "app.h"

/* Named constants for Chart: '<S4>/Chart3' */
#define app_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define app_IN_OFF                     ((uint8_T)1U)
#define app_IN_ON                      ((uint8_T)2U)
#define app_IN_UP                      ((uint8_T)1U)
#define app_IN_Zero                    ((uint8_T)2U)

/* Named constants for Chart: '<S42>/Chart4' */
#define app_IN_OFF_f                   ((uint8_T)1U)
#define app_IN_ON_j                    ((uint8_T)2U)

/* Named constants for Chart: '<S312>/Chart' */
#define app_IN_OFF_Count               ((uint8_T)2U)
#define app_IN_OFF_i                   ((uint8_T)1U)
#define app_IN_ON_Count                ((uint8_T)4U)
#define app_IN_ON_m                    ((uint8_T)3U)

/* Named constants for Chart: '<S39>/Chart' */
#define app_IN_OFF_in                  ((uint8_T)1U)
#define app_IN_ON_g                    ((uint8_T)2U)
#define app_IN_Standby                 ((uint8_T)3U)

/* Named constants for Chart: '<S94>/Chart1' */
#define app_IN_UP_g                    ((uint8_T)1U)
#define app_IN_Zero_j                  ((uint8_T)2U)

/* Named constants for Chart: '<S338>/OvrdDely' */
#define app_IN_Delay                   ((uint8_T)1U)
#define app_IN_Norm                    ((uint8_T)2U)

/* Named constants for Chart: '<S341>/Chart' */
#define app_IN_OFF_Count_k             ((uint8_T)2U)
#define app_IN_ON_Count_e              ((uint8_T)4U)
#define app_IN_ON_a                    ((uint8_T)3U)

/* Exported block signals */
real_T ChLKACtrlSts;                   /* '<S14>/CAN Unpack' */
real_T ChLKARespToq;                   /* '<S14>/CAN Unpack' */
real_T DrvrStrgDlvrdToq;               /* '<S14>/CAN Unpack' */
real_T StrgCustSetngDspCmd;            /* '<S14>/CAN Unpack' */
real_T LftStrLght_On;                  /* '<S5>/CAN Unpack' */
real_T RghtStrLght_On;                 /* '<S5>/CAN Unpack' */
real_T BrkPdlDrvrAppdPrs;              /* '<S16>/CAN Unpack' */
real_T TJAICASwReq;                    /* '<S19>/CAN Unpack' */
real_T StrgWhlAngGrd;                  /* '<S12>/CAN Unpack' */
real_T StrgWhlAng;                     /* '<S12>/CAN Unpack' */
real_T CCSwStsCanclSwA;                /* '<S11>/CAN Unpack' */
real_T CCSwStsDistDecSw;               /* '<S11>/CAN Unpack' */
real_T CCSwStsDisIncSw;                /* '<S11>/CAN Unpack' */
real_T CCSwStsOnSw;                    /* '<S11>/CAN Unpack' */
real_T CCSwStsRsmSw;                   /* '<S11>/CAN Unpack' */
real_T CCSwStsSetSw;                   /* '<S11>/CAN Unpack' */
real32_T VehCP_T_ChLKARespToq_sg;      /* '<S14>/Data Type Conversion1' */
real32_T VehCP_T_DrvrStrgDlvrdToq_sg;  /* '<S14>/Data Type Conversion2' */
real32_T PTAccToqReqResp;              /* '<S7>/CAN Unpack' */
real32_T VehDynYawRate;                /* '<S13>/CAN Unpack' */
real32_T AccelActuPos;                 /* '<S6>/CAN Unpack' */
real32_T ACCDetObjExistPrblty;         /* '<S22>/CAN Unpack' */
real32_T ACCDetObjLatRltvDist;         /* '<S22>/CAN Unpack' */
real32_T ACCDetObjLongRltvDist;        /* '<S22>/CAN Unpack' */
real32_T ACCDetObjLongRltvSpd;         /* '<S22>/CAN Unpack' */
real32_T VehCP_p_VrkPdlDrvrAppdPrs_sg; /* '<S16>/Data Type Conversion' */
real32_T VehSpdAvgDrvn;                /* '<S20>/CAN Unpack' */
real32_T VehSpdAvgNonDrvn;             /* '<S20>/CAN Unpack' */
real32_T VSELatAcc;                    /* '<S9>/CAN Unpack' */
real32_T VSELongAcc;                   /* '<S9>/CAN Unpack' */
real32_T ChACCAccReqResp;              /* '<S18>/CAN Unpack' */
real32_T APP_IN_yr_VehDynYawRate_sg;   /* '<S4>/Signal Copy8' */
real32_T VehCP_yr_VehDynYawRate_sg;    /* '<S33>/Sum' */
real32_T VehCP_prec_VehAccelPos_sg;    /* '<S29>/Sum' */
real32_T VehCP_is_ACCDetObjExistProb_sg;/* '<S4>/Signal Copy11' */
real32_T VehCP_d_ACCDetObjLatRltvDist_sg;/* '<S4>/Signal Copy15' */
real32_T VehCP_d_ACCDetObjLongRltvDist_sg;/* '<S4>/Signal Copy22' */
real32_T VehCP_v_ACCDetObjLongRltvSpd_sg;/* '<S4>/Signal Copy26' */
real32_T VehCP_angD_StrgWhlAng_sg;     /* '<S30>/Sum' */
real32_T VehCP_V_VehSpdAvgDrvn_sg;     /* '<S4>/Saturation' */
real32_T VehCP_V_ClstDspdVehSpd_sg;    /* '<S32>/Sum' */
real32_T VehCP_W_StrgWhlAngGrd_sg;     /* '<S34>/Sum' */
real32_T VehCP_V_VehSpdAvgNonDrvn_sg;  /* '<S4>/Saturation1' */
real32_T VehCP_a_VSELatAcc_sg;         /* '<S36>/Sum' */
real32_T VehCP_a_VSELongAcc_sg;        /* '<S37>/Sum' */
real32_T YRC_angD_ReqStrgWhlAng_sg;    /* '<S392>/Switch' */
real32_T LKA_ReqToq;                   /* '<S114>/Saturation' */
uint16_T ClstDspdVehSpd;               /* '<S17>/CAN Unpack' */
uint8_T VehCP_n_ChLKACtrlSts_u8;       /* '<S14>/Data Type Conversion' */
uint8_T VehCP_n_StrgCustSetngDspCmd_u8;/* '<S14>/Data Type Conversion3' */
uint8_T AccelOvrd;                     /* '<S7>/CAN Unpack' */
uint8_T AirBagDplHS;                   /* '<S8>/CAN Unpack' */
uint8_T DrvrSbltAtcHS;                 /* '<S8>/CAN Unpack' */
uint8_T ABSActvSts;                    /* '<S13>/CAN Unpack' */
uint8_T EnRunSts;                      /* '<S6>/CAN Unpack' */
uint8_T BntOpenSts;                    /* '<S5>/CAN Unpack' */
uint8_T DipdBeamLghtOn;                /* '<S5>/CAN Unpack' */
uint8_T DrvrDoorOpenSts;               /* '<S5>/CAN Unpack' */
uint8_T FrtPsngDoorOpenSts;            /* '<S5>/CAN Unpack' */
uint8_T MainBeamLghtOn;                /* '<S5>/CAN Unpack' */
uint8_T RLDoorOpenSts;                 /* '<S5>/CAN Unpack' */
uint8_T RRDoorOpenSts;                 /* '<S5>/CAN Unpack' */
uint8_T ACCDetObjID;                   /* '<S22>/CAN Unpack' */
uint8_T LDWLKASwReq;                   /* '<S21>/CAN Unpack' */
uint8_T RstrFctryDeftsReq;             /* '<S21>/CAN Unpack' */
uint8_T AEBSwReq;                      /* '<S19>/CAN Unpack' */
uint8_T FCWSnstvLvlReq;                /* '<S19>/CAN Unpack' */
uint8_T FCWSwReq;                      /* '<S19>/CAN Unpack' */
uint8_T LDWAdoWarnngReq;               /* '<S19>/CAN Unpack' */
uint8_T LDWLKAHapticWrnngReq;          /* '<S19>/CAN Unpack' */
uint8_T LDWSnstvtLvlReq;               /* '<S19>/CAN Unpack' */
uint8_T VehCP_n_TJAICASwReq_u8;        /* '<S19>/CAN Unpack1' */
uint8_T FrtWiperSwSts;                 /* '<S17>/CAN Unpack' */
uint8_T CCSwStsSpdDecSw;               /* '<S11>/CAN Unpack' */
uint8_T CCSwStsSpdIncSw;               /* '<S11>/CAN Unpack' */
uint8_T CCSwStsSwDataIntgty;           /* '<S11>/CAN Unpack' */
uint8_T TrEstdGear;                    /* '<S10>/CAN Unpack' */
uint8_T TrShftLvrPos;                  /* '<S10>/CAN Unpack' */
uint8_T VehCP_LeftBSD_Warnning_u8;     /* '<S15>/Data Type Conversion' */
uint8_T VehCP_RightBSD_Warnning_u8;    /* '<S15>/Data Type Conversion1' */
uint8_T VehCP_BSDStatus_u8;            /* '<S15>/Data Type Conversion2' */
uint8_T VehCP_n_LDWLKASwReq_u8;        /* '<S4>/Signal Copy13' */
uint8_T VehCP_idx_ACCDetObjID_u8;      /* '<S4>/Signal Copy18' */
uint8_T VehCP_n_RstrFctryDeftsReq_u8;  /* '<S4>/Signal Copy23' */
uint8_T VehCP_n_LDWAdoWarnngReq_u8;    /* '<S4>/Signal Copy30' */
uint8_T VehCP_n_LDWLKAHapticWrnngReq_u8;/* '<S4>/Signal Copy31' */
uint8_T VehCP_n_FrtWiperSwSts_u8;      /* '<S4>/Signal Copy34' */
uint8_T VehCP_n_LDWSnstvtLvlReq_u8;    /* '<S4>/Signal Copy35' */
uint8_T VehCP_n_TrEstdGear_u8;         /* '<S4>/Signal Copy39' */
uint8_T VehCP_n_TrShftLvrPos_u8;       /* '<S4>/Signal Copy45' */
uint8_T LKA_ReqToqSts;                 /* '<S114>/Switch1' */
uint8_T FVCM_EPS_Frame[8];             /* '<S45>/Signal Copy' */
uint8_T FVCM_HMI_Frame[8];             /* '<S44>/Signal Copy' */
boolean_T VehCP_is_VehDataValid_bl;    /* '<S1>/Logical Operator' */
boolean_T VehCP_is_ABSActv_bl;         /* '<S4>/Data Type Conversion7' */
boolean_T VehCP_is_EngRun_bl;          /* '<S4>/Data Type Conversion8' */
boolean_T VehCP_is_DrvrSbltActv_bl;    /* '<S4>/Data Type Conversion9' */
boolean_T VehCP_is_BntOpen_bl;         /* '<S4>/Data Type Conversion12' */
boolean_T VehCP_is_DipdBeamLghtOn_bl;  /* '<S4>/Data Type Conversion14' */
boolean_T VehCP_is_DrvrDoorOpen_bl;    /* '<S4>/Data Type Conversion16' */
boolean_T VehCP_is_FrtPsngDoorOpen_bl; /* '<S4>/Data Type Conversion18' */
boolean_T VehCP_is_MainBeamLghtOn_bl;  /* '<S4>/Data Type Conversion22' */
boolean_T VehCP_is_RLDoorOpen_bl;      /* '<S4>/Data Type Conversion26' */
boolean_T VehCP_is_RRDoorOpen_bl;      /* '<S4>/Data Type Conversion27' */
boolean_T VehCP_is_CCSwStsCancl_bl;    /* '<S4>/Data Type Conversion39' */
boolean_T VehCP_is_CCSwStsDistDec_bl;  /* '<S4>/Data Type Conversion40' */
boolean_T VehCP_is_CCSwStsDisInc_bl;   /* '<S4>/Data Type Conversion43' */
boolean_T VehCP_is_CCSwStsOn_bl;       /* '<S4>/Data Type Conversion44' */
boolean_T VehCP_is_CCSwStsRsm_bl;      /* '<S4>/Data Type Conversion45' */
boolean_T VehCP_is_CCSwStsSet_bl;      /* '<S4>/Data Type Conversion46' */
boolean_T VehCP_is_CCSwStsSpdDec_bl;   /* '<S4>/Data Type Conversion48' */
boolean_T VehCP_is_CCSwStsSpdInc_bl;   /* '<S4>/Data Type Conversion50' */
boolean_T Arb_is_LatCtrlActv_bl;       /* '<S39>/Signal Copy' */
boolean_T VehCP_is_RghtStrgLmpOn_bl;   /* '<S4>/Chart4' */
boolean_T VehCP_is_LftStrgLmpOn_bl;    /* '<S4>/Chart3' */

/* Invariant block signals (default storage) */
const ConstB_app_T app_ConstB = {
  1U,                                  /* '<S59>/Data Type Conversion' */
  17.0F,                               /* '<S220>/Data Type Conversion' */

  { 0.0F, 0.02F },                     /* '<S334>/Math Function' */

  { 0.0F, 0.02F },                     /* '<S337>/Math Function2' */
  4U,                                  /* '<S82>/Add' */
  32U,                                 /* '<S86>/Add' */
  37U,                                 /* '<S88>/Add' */
  42U,                                 /* '<S90>/Add' */
  45U,                                 /* '<S64>/Add' */
  53U,                                 /* '<S66>/Add' */
  48U,                                 /* '<S68>/Add' */
  64U                                  /* '<S70>/Add' */
};

/* Constant parameters (default storage) */
const ConstP_app_T app_ConstP = {
  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S188>/1-D Lookup Table'
   */
  { 0.0F, 0.2F, 0.2F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F },

  /* Computed Parameter: uDLookupTable_tableData_a
   * Referenced by: '<S315>/1-D Lookup Table'
   */
  { 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F },

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S315>/1-D Lookup Table1'
   */
  { 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F },

  /* Computed Parameter: uDLookupTable2_tableData
   * Referenced by: '<S315>/1-D Lookup Table2'
   */
  { 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F },

  /* Computed Parameter: uDLookupTable1_tableData_p
   * Referenced by: '<S314>/1-D Lookup Table1'
   */
  { 0.5F, 0.5F, 0.4F, 0.4F, 0.3F, 0.3F },

  /* Computed Parameter: uDLookupTable2_tableData_b
   * Referenced by: '<S314>/1-D Lookup Table2'
   */
  { 0.05F, 0.05F, 0.04F, 0.04F, 0.03F, 0.03F },

  /* Computed Parameter: uDLookupTable1_tableData_k
   * Referenced by: '<S188>/1-D Lookup Table1'
   */
  { 0.0F, 0.092917F, 0.24708F, 0.33952F, 0.4F, 0.4F, 0.5F, 0.5F },

  /* Pooled Parameter (Expression: [1,1,0.8,0.3,0.1,0])
   * Referenced by:
   *   '<S189>/1-D Lookup Table3'
   *   '<S190>/1-D Lookup Table3'
   *   '<S360>/1-D Lookup Table3'
   */
  { 1.0F, 1.0F, 0.8F, 0.3F, 0.1F, 0.0F },

  /* Pooled Parameter (Expression: [0,0.5,1,1.5,2,3])
   * Referenced by:
   *   '<S189>/1-D Lookup Table3'
   *   '<S190>/1-D Lookup Table3'
   *   '<S360>/1-D Lookup Table3'
   */
  { 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 3.0F },

  /* Computed Parameter: Ki_tableData
   * Referenced by: '<S189>/Ki_'
   */
  { 0.0F, 0.089371F, 0.15584F, 0.21512F, 0.25913F, 0.28428F, 0.28967F, 0.29416F
  },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S188>/1-D Lookup Table'
   *   '<S188>/1-D Lookup Table1'
   *   '<S189>/1-D Lookup Table1'
   *   '<S189>/Ki_'
   *   '<S315>/1-D Lookup Table'
   *   '<S315>/1-D Lookup Table1'
   *   '<S315>/1-D Lookup Table2'
   *   '<S380>/1-D Lookup Table'
   */
  { 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F, 140.0F },

  /* Computed Parameter: Ki_1_tableData
   * Referenced by: '<S189>/Ki_1'
   */
  { 0.1F, 0.14722F, 0.2667F, 0.73694F, 1.0F, 1.0F, 1.0F },

  /* Computed Parameter: Ki_1_bp01Data
   * Referenced by: '<S189>/Ki_1'
   */
  { 0.0F, 0.0005F, 0.001F, 0.002F, 0.004F, 0.006F, 0.01F },

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S205>/Constant'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 1.0F },

  /* Pooled Parameter (Expression: [0.06:0.06:1.8])
   * Referenced by:
   *   '<S112>/reference_timeseries'
   *   '<S190>/reference_timeseries'
   */
  { 0.06F, 0.12F, 0.18F, 0.24F, 0.3F, 0.36F, 0.42F, 0.48F, 0.54F, 0.6F, 0.66F,
    0.72F, 0.78F, 0.84F, 0.9F, 0.96F, 1.02F, 1.08F, 1.14F, 1.2F, 1.26F, 1.32F,
    1.38F, 1.44F, 1.5F, 1.56F, 1.62F, 1.68F, 1.74F, 1.8F },

  /* Computed Parameter: t_pts_Value
   * Referenced by: '<S209>/t_pts'
   */
  { 0.0F, 0.00976562F, 0.0390625F, 0.0878906175F, 0.15625F, 0.244140625F,
    0.3515625F, 0.478515625F, 0.625F, 0.791015625F, 0.9765625F, 1.18164063F,
    1.40625F, 1.65039063F, 1.9140625F, 2.19726563F, 2.5F },

  /* Pooled Parameter (Expression: [1 1 1 1 1 1])
   * Referenced by:
   *   '<S210>/1-D Lookup Table1'
   *   '<S210>/1-D Lookup Table2'
   *   '<S355>/1-D Lookup Table1'
   *   '<S355>/1-D Lookup Table2'
   *   '<S355>/1-D Lookup Table6'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S314>/1-D Lookup Table1'
   *   '<S314>/1-D Lookup Table2'
   *   '<S210>/1-D Lookup Table'
   *   '<S210>/1-D Lookup Table1'
   *   '<S210>/1-D Lookup Table2'
   *   '<S360>/1-D Lookup Table'
   */
  { 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F },

  /* Computed Parameter: uDLookupTable_tableData_f
   * Referenced by: '<S210>/1-D Lookup Table'
   */
  { 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F },

  /* Pooled Parameter (Expression: [0,1,2,3,4,5])
   * Referenced by:
   *   '<S355>/1-D Lookup Table1'
   *   '<S355>/1-D Lookup Table2'
   *   '<S355>/1-D Lookup Table6'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F },

  /* Pooled Parameter (Expression: [4,4,2.7911,2.0063,1.4367,1.0443,0.55645,0.3771,0.3,0.3])
   * Referenced by:
   *   '<S355>/1-D Lookup Table18'
   *   '<S355>/1-D Lookup Table8'
   */
  { 4.0F, 4.0F, 2.7911F, 2.0063F, 1.4367F, 1.0443F, 0.55645F, 0.3771F, 0.3F,
    0.3F },

  /* Pooled Parameter (Expression: [0,2,4,6,8,10,15,20,25,30])
   * Referenced by:
   *   '<S355>/1-D Lookup Table18'
   *   '<S355>/1-D Lookup Table8'
   */
  { 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S355>/1-D Lookup Table3'
   */
  { 0.15886F, 0.17033F, 0.23726F, 0.291F, 0.309966F, 0.319842F, 0.330288F,
    0.342486F, 0.365514F, 0.40887F, 0.449514F, 0.48F, 0.48F, 0.48F, 0.48F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S389>/KI_loTable'
   *   '<S389>/KP_loTable'
   *   '<S348>/1-D Lookup Table'
   *   '<S348>/1-D Lookup Table1'
   *   '<S355>/1-D Lookup Table10'
   *   '<S355>/1-D Lookup Table11'
   *   '<S355>/1-D Lookup Table3'
   *   '<S355>/1-D Lookup Table4'
   *   '<S355>/1-D Lookup Table5'
   *   '<S355>/1-D Lookup Table7'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F },

  /* Computed Parameter: uDLookupTable9_tableData
   * Referenced by: '<S355>/1-D Lookup Table9'
   */
  { 1.0F, 1.0522F, 1.2419F, 1.5065F, 1.8355F, 2.2871F, 2.6613F, 2.8226F, 3.0F,
    3.0F },

  /* Computed Parameter: uDLookupTable9_bp01Data
   * Referenced by: '<S355>/1-D Lookup Table9'
   */
  { 0.0F, 3.0F, 6.0F, 8.0F, 10.0F, 14.0F, 18.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable4_tableData
   * Referenced by: '<S355>/1-D Lookup Table4'
   */
  { 0.024684F, 0.031742F, 0.042838F, 0.053162F, 0.061678F, 0.067354F, 0.06942F,
    0.069904F, 0.071226F, 0.073032F, 0.07613F, 0.087226F, 0.093936F, 0.095646F,
    0.097032F },

  /* Pooled Parameter (Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by:
   *   '<S355>/1-D Lookup Table11'
   *   '<S355>/1-D Lookup Table5'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F },

  /* Pooled Parameter (Expression: [0.003,0.002,0.0014,0.001,0.001,0.0008,0.0008,0.0008,0.0008,0.0008,0.0008])
   * Referenced by:
   *   '<S355>/1-D Lookup Table15'
   *   '<S355>/1-D Lookup Table17'
   */
  { 0.003F, 0.002F, 0.0014F, 0.001F, 0.001F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F },

  /* Pooled Parameter (Expression: [0,1,2,4,6,8,10,15,20,30,40])
   * Referenced by:
   *   '<S355>/1-D Lookup Table15'
   *   '<S355>/1-D Lookup Table17'
   */
  { 0.0F, 1.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 15.0F, 20.0F, 30.0F, 40.0F },

  /* Computed Parameter: uDLookupTable7_tableData
   * Referenced by: '<S355>/1-D Lookup Table7'
   */
  { 0.05F, 0.098544F, 0.15032F, 0.19563F, 0.2346F, 0.25605F, 0.27411F, 0.30008F,
    0.35615F, 0.39498F, 0.43382F, 0.45F, 0.45F, 0.45F, 0.45F },

  /* Computed Parameter: uDLookupTable_tableData_d
   * Referenced by: '<S355>/2-D Lookup Table'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.2513F, 1.2513F, 1.2513F, 1.0F, 1.0F, 1.1F, 1.5F, 1.8731F, 1.8731F, 1.8731F,
    1.0F, 1.0F, 1.3F, 2.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.6F, 2.5F, 3.0F, 3.0F,
    3.0F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S355>/2-D Lookup Table'
   */
  { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable_bp02Data
   * Referenced by: '<S355>/2-D Lookup Table'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F },

  /* Computed Parameter: uDLookupTable10_tableData
   * Referenced by: '<S355>/1-D Lookup Table10'
   */
  { 0.04F, 0.072089F, 0.089557F, 0.10703F, 0.11196F, 0.11728F, 0.11956F,
    0.12487F, 0.13133F, 0.13946F, 0.15316F, 0.15418F, 0.15418F, 0.15418F,
    0.15468F },

  /* Expression: single([1 1 1 0.9 0.7 0.2 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by: '<S338>/1-D Lookup Table1'
   */
  { 1.0F, 1.0F, 1.0F, 0.9F, 0.7F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F },

  /* Expression: single([0 0.5 1 1.5 2 2.5 3 3.5 4 4.5 5 5.5 6 6.5 7 7.5 8])
   * Referenced by: '<S338>/1-D Lookup Table1'
   */
  { 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F, 5.5F, 6.0F,
    6.5F, 7.0F, 7.5F, 8.0F },

  /* Computed Parameter: StrWhlAng_RateLmt_tableData
   * Referenced by: '<S409>/StrWhlAng_RateLmt'
   */
  { 10.0F, 12.0F, 14.0F, 15.0F, 15.0F, 14.25F, 13.5F, 12.75F, 12.0F, 11.25F,
    10.5F, 9.0F, 8.0F, 6.4F, 4.8F, 3.2F },

  /* Computed Parameter: StrWhlAng_RateLmt_bp01Data
   * Referenced by: '<S409>/StrWhlAng_RateLmt'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F },

  /* Computed Parameter: LUT_MaxLatAcc_tableData
   * Referenced by: '<S410>/LUT_MaxLatAcc'
   */
  { 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
    0.3F, 0.3F, 0.3F, 0.3F, 0.3F },

  /* Computed Parameter: LUT_MaxLatAcc_bp01Data
   * Referenced by: '<S410>/LUT_MaxLatAcc'
   */
  { 0.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F, 13.0F, 14.0F, 15.0F,
    20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 150.0F },

  /* Computed Parameter: uDLookupTable_tableData_o
   * Referenced by: '<S380>/1-D Lookup Table'
   */
  { 0.1F, 0.05F, 0.02F, 0.01F, 0.008F, 0.008F, 0.008F, 0.008F },

  /* Computed Parameter: uDLookupTable1_tableData_pw
   * Referenced by: '<S189>/1-D Lookup Table1'
   */
  { 0.0F, 0.092917F, 0.21764F, 0.27191F, 0.29509F, 0.29826F, 0.30142F, 0.29826F
  },

  /* Computed Parameter: KP_loTable_tableData
   * Referenced by: '<S389>/KP_loTable'
   */
  { 0.1657F, 0.16184F, 0.14986F, 0.12628F, 0.117F, 0.11043F, 0.10077F, 0.093043F,
    0.07971F, 0.065024F, 0.057295F, 0.048986F, 0.048599F, 0.047246F, 0.044928F },

  /* Computed Parameter: KI_loTable_tableData
   * Referenced by: '<S389>/KI_loTable'
   */
  { 0.0F, 0.01F, 0.01F, 0.015F, 0.015F, 0.02F, 0.02F, 0.025F, 0.025F, 0.025F,
    0.025F, 0.025F, 0.025F, 0.025F, 0.025F },

  /* Computed Parameter: uDLookupTable1_tableData_c
   * Referenced by: '<S348>/1-D Lookup Table1'
   */
  { 10.0F, 7.279F, 6.3758F, 5.5911F, 5.2785F, 4.7655F, 4.2759F, 3.8795F, 3.4832F,
    3.1101F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F },

  /* Computed Parameter: uDLookupTable_tableData_dy
   * Referenced by: '<S348>/1-D Lookup Table'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F },

  /* Computed Parameter: uDLookupTable_tableData_e
   * Referenced by: '<S360>/1-D Lookup Table'
   */
  { 0.97604F, 1.4798F, 1.7379F, 1.8992F, 2.1976F, 3.0F },

  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<S355>/2-D Lookup Table'
   */
  { 6U, 6U },

  /* Pooled Parameter (Expression: zeros(1,64))
   * Referenced by:
   *   '<S44>/Constant13'
   *   '<S45>/Constant'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Pooled Parameter (Expression: [128 64 32 16 8 4 2 1])
   * Referenced by:
   *   '<S58>/Constant3'
   *   '<S71>/Constant3'
   */
  { 128U, 64U, 32U, 16U, 8U, 4U, 2U, 1U }
};

/* Block signals (default storage) */
B_app_T app_B;

/* Block states (default storage) */
DW_app_T app_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_app_T app_PrevZCX;
static void BINARYSEARCH_real32_T(uint32_T *piLeft, uint32_T *piRght, real32_T u,
  const real32_T *pData, uint32_T iHi);
static void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData,
  real32_T u, const real32_T *pUData, uint32_T iHi);
static real32_T look1_iflf_binlx(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
static real32_T look1_iflf_binlca(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
static real32_T look1_iflf_binlc(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
static real32_T look2_iflf_binlx(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride);
static void app_Chart3(boolean_T rtu_strLmpSig, boolean_T *rty_is_steerLampOn_bl,
  DW_Chart3_app_T *localDW);
static void app_Chart_Init(uint8_T *rty_count);
static void app_Chart(uint8_T *rty_count);
static void app_Chart4(boolean_T rtu_in_cond, real32_T rtu_loop_time, real32_T
  rtu_rise_time, real32_T rtu_fall_time, boolean_T *rty_out_cond,
  DW_Chart4_app_T *localDW);
static void app_Chart1(boolean_T rtu_Arb_is_LatCtrlActv_bl, boolean_T
  rtu_lane_cond, uint8_T *rty_out_cond);
static void app_Chart_a_Init(uint8_T rty_msg[64]);
static void app_Chart_p(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64]);
static void app_Chart_c_Init(uint8_T rty_msg[64]);
static void app_Chart_h(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64]);
static void app_Planner(const real32_T rtu_initial_lateral_status[3], real32_T
  rty_y_cof[7], B_Planner_app_T *localB);
static void app_Chart_o(boolean_T rtu_Arb_is_LatCtrlActv_bl, real32_T
  *rty_ramp_cof, DW_Chart_app_f_T *localDW);

/* Forward declaration for local functions */
static void app_LUf_boolean_Tint32_Treal32_T(real32_T outU[], real32_T outP[],
  int32_T N, boolean_T outS[]);

/*===========*
 * Constants *
 *===========*/
#define RT_PI                          3.14159265358979323846
#define RT_PIF                         3.1415927F
#define RT_LN_10                       2.30258509299404568402
#define RT_LN_10F                      2.3025851F
#define RT_LOG10E                      0.43429448190325182765
#define RT_LOG10EF                     0.43429449F
#define RT_E                           2.7182818284590452354
#define RT_EF                          2.7182817F

/*
 * UNUSED_PARAMETER(x)
 *   Used to specify that a function parameter (argument) is required but not
 *   accessed by the function body.
 */
#ifndef UNUSED_PARAMETER
#if defined(__LCC__)
#define UNUSED_PARAMETER(x)                                      /* do nothing */
#else

/*
 * This is the semi-ANSI standard way of indicating that an
 * unused function parameter is required.
 */
#define UNUSED_PARAMETER(x)            (void) (x)
#endif
#endif

/* Lookup Binary Search Utility BINARYSEARCH_real32_T */
static void BINARYSEARCH_real32_T(uint32_T *piLeft, uint32_T *piRght, real32_T u,
  const real32_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real32_T_real32_T */
static void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData,
  real32_T u, const real32_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real32_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real32_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real32_T num;
      real32_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0F;
    }

    {
      real32_T yLeftCast;
      real32_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

static real32_T look1_iflf_binlx(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

static real32_T look1_iflf_binlca(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T y;
  real32_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex;
    frac = 0.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    yL_0d0 = table[iLeft];
    y = (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
  }

  return y;
}

static real32_T look1_iflf_binlc(real32_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0F;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

static real32_T look2_iflf_binlx(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride)
{
  real32_T fractions[2];
  real32_T frac;
  real32_T yL_0d0;
  real32_T yL_0d1;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[0U];
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0U] - 1U;
    frac = (u0 - bp0[maxIndex[0U] - 1U]) / (bp0[maxIndex[0U]] - bp0[maxIndex[0U]
      - 1U]);
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    iLeft = 0U;
    frac = (u1 - bp1[0U]) / (bp1[1U] - bp1[0U]);
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    iRght = maxIndex[1U];
    while (iRght - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U] - 1U;
    frac = (u1 - bp1[maxIndex[1U] - 1U]) / (bp1[maxIndex[1U]] - bp1[maxIndex[1U]
      - 1U]);
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  yL_0d0 = table[bpIdx];
  yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
  bpIdx += stride;
  yL_0d1 = table[bpIdx];
  return (((table[bpIdx + 1U] - yL_0d1) * fractions[0U] + yL_0d1) - yL_0d0) *
    frac + yL_0d0;
}

/*
 * Output and update for atomic system:
 *    '<S4>/Chart3'
 *    '<S4>/Chart4'
 */
static void app_Chart3(boolean_T rtu_strLmpSig, boolean_T *rty_is_steerLampOn_bl,
  DW_Chart3_app_T *localDW)
{
  uint32_T tmp;

  /* Chart: '<S4>/Chart3' */
  if (localDW->is_active_c41_app == 0U) {
    localDW->is_active_c41_app = 1U;
    localDW->is_c41_app = app_IN_OFF;
    *rty_is_steerLampOn_bl = false;
    localDW->is_OFF = app_IN_Zero;
    localDW->local_count = 0U;
  } else if (localDW->is_c41_app == app_IN_OFF) {
    *rty_is_steerLampOn_bl = false;
    if (localDW->is_OFF == app_IN_UP) {
      if (localDW->tm_count > 100) {
        localDW->is_OFF = app_IN_Zero;
        localDW->local_count = 0U;
      } else if (localDW->local_count > 1) {
        localDW->is_OFF = app_IN_NO_ACTIVE_CHILD;
        localDW->is_c41_app = app_IN_ON;
        localDW->local_count = 1U;
        *rty_is_steerLampOn_bl = true;
      } else if (rtu_strLmpSig) {
        tmp = localDW->local_count + 1U;
        if (localDW->local_count + 1U > 65535U) {
          tmp = 65535U;
        }

        localDW->local_count = (uint16_T)tmp;
        localDW->tm_count = 0U;
      } else {
        tmp = localDW->tm_count + 1U;
        if (localDW->tm_count + 1U > 65535U) {
          tmp = 65535U;
        }

        localDW->tm_count = (uint16_T)tmp;
      }
    } else {
      /* case IN_Zero: */
      if (rtu_strLmpSig) {
        localDW->is_OFF = app_IN_UP;
        localDW->local_count = 1U;
        localDW->tm_count = 0U;
      }
    }
  } else {
    /* case IN_ON: */
    *rty_is_steerLampOn_bl = true;
    if ((!rtu_strLmpSig) && (localDW->local_count > 100)) {
      localDW->is_c41_app = app_IN_OFF;
      *rty_is_steerLampOn_bl = false;
      localDW->is_OFF = app_IN_Zero;
      localDW->local_count = 0U;
    } else if (!rtu_strLmpSig) {
      tmp = localDW->local_count + 1U;
      if (localDW->local_count + 1U > 65535U) {
        tmp = 65535U;
      }

      localDW->local_count = (uint16_T)tmp;
    } else {
      localDW->local_count = 0U;
    }
  }

  /* End of Chart: '<S4>/Chart3' */
}

/*
 * System initialize for atomic system:
 *    '<S38>/Chart'
 *    '<S43>/Chart'
 */
static void app_Chart_Init(uint8_T *rty_count)
{
  *rty_count = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S38>/Chart'
 *    '<S43>/Chart'
 */
static void app_Chart(uint8_T *rty_count)
{
  int32_T tmp;

  /* Chart: '<S38>/Chart' */
  tmp = (int32_T)(*rty_count + 1U);
  if (*rty_count + 1U > 255U) {
    tmp = 255;
  }

  *rty_count = (uint8_T)tmp;
  if (*rty_count > 15) {
    *rty_count = 0U;
  }

  /* End of Chart: '<S38>/Chart' */
}

/*
 * Output and update for atomic system:
 *    '<S42>/Chart4'
 *    '<S95>/Chart1'
 *    '<S95>/Chart2'
 *    '<S95>/Chart3'
 *    '<S96>/Chart13'
 *    '<S96>/Chart4'
 *    '<S96>/Chart5'
 *    '<S96>/Chart6'
 *    '<S96>/Chart7'
 *    '<S119>/Chart1'
 *    ...
 */
static void app_Chart4(boolean_T rtu_in_cond, real32_T rtu_loop_time, real32_T
  rtu_rise_time, real32_T rtu_fall_time, boolean_T *rty_out_cond,
  DW_Chart4_app_T *localDW)
{
  /* Chart: '<S42>/Chart4' */
  if (localDW->is_active_c24_app == 0U) {
    localDW->is_active_c24_app = 1U;
    localDW->is_c24_app = app_IN_OFF_f;
    *rty_out_cond = false;
    localDW->local_time = 0.0F;
  } else if (localDW->is_c24_app == app_IN_OFF_f) {
    *rty_out_cond = false;
    if (localDW->local_time > rtu_rise_time) {
      localDW->is_c24_app = app_IN_ON_j;
      *rty_out_cond = true;
      localDW->local_time = 0.0F;
    } else if (rtu_in_cond) {
      localDW->local_time += rtu_loop_time;
    } else {
      localDW->local_time = 0.0F;
    }
  } else {
    /* case IN_ON: */
    *rty_out_cond = true;
    if (localDW->local_time > rtu_fall_time) {
      localDW->is_c24_app = app_IN_OFF_f;
      *rty_out_cond = false;
      localDW->local_time = 0.0F;
    } else if (!rtu_in_cond) {
      localDW->local_time += rtu_loop_time;
    } else {
      localDW->local_time = 0.0F;
    }
  }

  /* End of Chart: '<S42>/Chart4' */
}

/*
 * Output and update for atomic system:
 *    '<S44>/Chart1'
 *    '<S44>/Chart2'
 */
static void app_Chart1(boolean_T rtu_Arb_is_LatCtrlActv_bl, boolean_T
  rtu_lane_cond, uint8_T *rty_out_cond)
{
  /* Chart: '<S44>/Chart1' */
  if (rtu_lane_cond) {
    if (rtu_Arb_is_LatCtrlActv_bl) {
      *rty_out_cond = 2U;
    } else {
      *rty_out_cond = 1U;
    }
  } else {
    *rty_out_cond = 0U;
  }

  /* End of Chart: '<S44>/Chart1' */
}

/*
 * System initialize for atomic system:
 *    '<S59>/Chart'
 *    '<S73>/Chart'
 */
static void app_Chart_a_Init(uint8_T rty_msg[64])
{
  memset(&rty_msg[0], 0, sizeof(uint8_T) << 6U);
}

/*
 * Output and update for atomic system:
 *    '<S59>/Chart'
 *    '<S73>/Chart'
 */
static void app_Chart_p(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64])
{
  real_T tmp_tmp;
  int32_T tmp_0;
  uint32_T mod_data;
  uint32_T tmp;
  int8_T i;

  /* Chart: '<S59>/Chart' */
  for (i = 0; i < 64; i++) {
    rty_msg[i] = rtu_msg_in[i];
  }

  tmp_0 = rtu_signal_len - 1;
  if (rtu_signal_len - 1 > 127) {
    tmp_0 = 127;
  }

  i = (int8_T)tmp_0;
  mod_data = rtu_signal_raw;
  while (i >= 0) {
    tmp_tmp = pow(2.0, i);
    tmp = (uint32_T)((real_T)mod_data / tmp_tmp);
    tmp_tmp = (real_T)mod_data - (real_T)tmp * tmp_tmp;
    if (tmp_tmp >= 0.0) {
      mod_data = (uint32_T)tmp_tmp;
    } else {
      mod_data = 0U;
    }

    if (tmp > 255U) {
      tmp = 255U;
    }

    rty_msg[(rtu_start_bit - i) - 1] = (uint8_T)tmp;
    i--;
  }

  /* End of Chart: '<S59>/Chart' */
}

/*
 * System initialize for atomic system:
 *    '<S60>/Chart'
 *    '<S61>/Chart'
 *    '<S62>/Chart'
 *    '<S75>/Chart'
 *    '<S76>/Chart'
 *    '<S77>/Chart'
 */
static void app_Chart_c_Init(uint8_T rty_msg[64])
{
  memset(&rty_msg[0], 0, sizeof(uint8_T) << 6U);
}

/*
 * Output and update for atomic system:
 *    '<S60>/Chart'
 *    '<S61>/Chart'
 *    '<S62>/Chart'
 *    '<S75>/Chart'
 *    '<S76>/Chart'
 *    '<S77>/Chart'
 */
static void app_Chart_h(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
  rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg[64])
{
  real_T tmp_tmp;
  int32_T tmp_0;
  uint32_T mod_data;
  uint32_T tmp;
  int8_T i;

  /* Chart: '<S60>/Chart' */
  for (i = 0; i < 64; i++) {
    rty_msg[i] = rtu_msg_in[i];
  }

  tmp_0 = rtu_signal_len - 1;
  if (rtu_signal_len - 1 > 127) {
    tmp_0 = 127;
  }

  i = (int8_T)tmp_0;
  mod_data = rtu_signal_raw;
  while (i >= 0) {
    tmp_tmp = pow(2.0, i);
    tmp = (uint32_T)((real_T)mod_data / tmp_tmp);
    tmp_tmp = (real_T)mod_data - (real_T)tmp * tmp_tmp;
    if (tmp_tmp >= 0.0) {
      mod_data = (uint32_T)tmp_tmp;
    } else {
      mod_data = 0U;
    }

    if (tmp > 255U) {
      tmp = 255U;
    }

    rty_msg[(rtu_start_bit - i) - 1] = (uint8_T)tmp;
    i--;
  }

  /* End of Chart: '<S60>/Chart' */
}

/* Output and update for function-call system: '<S112>/Planner' */
static void app_Planner(const real32_T rtu_initial_lateral_status[3], real32_T
  rty_y_cof[7], B_Planner_app_T *localB)
{
  int32_T i;
  int32_T s124_iter;
  real32_T min_cost_value;
  real32_T rtb_Divide_lo_tmp;
  real32_T rtb_Gain5_c;
  real32_T rtb_Gain_dy;
  real32_T rtb_Selector8_i_idx_1;
  real32_T rtb_Selector8_i_idx_3;
  real32_T rtb_Sqrt_tmp;
  real32_T rtu_initial_lateral_status_0;
  real32_T s125_iter_idx_1;
  real32_T s125_iter_idx_1_tmp;
  real32_T s125_iter_idx_2;
  real32_T tmp;
  real32_T tmp_0;
  real32_T tmp_1;

  /* DataStoreWrite: '<S123>/Data Store Write' incorporates:
   *  Constant: '<S123>/Constant12'
   */
  min_cost_value = 9999.0F;

  /* Outputs for Iterator SubSystem: '<S123>/PlannerLoop' incorporates:
   *  ForIterator: '<S124>/For Iterator'
   */
  /* Outputs for Iterator SubSystem: '<S124>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S125>/For Iterator'
   */
  /* Gain: '<S128>/Gain21' */
  localB->Gain21 = 0.5F * rtu_initial_lateral_status[2];

  /* SignalConversion generated from: '<S128>/Product30' incorporates:
   *  Constant: '<S125>/Constant1'
   *  Gain: '<S128>/Gain14'
   *  Sum: '<S128>/Subtract2'
   */
  s125_iter_idx_2 = 0.0F - 2.0F * localB->Gain21;

  /* Gain: '<S133>/Gain' */
  rtb_Gain_dy = 2.0F * localB->Gain21;

  /* Sum: '<S137>/Add' */
  rtu_initial_lateral_status_0 = rtu_initial_lateral_status[1];

  /* Gain: '<S133>/Gain5' */
  rtb_Gain5_c = 2.0F * localB->Gain21;

  /* End of Outputs for SubSystem: '<S124>/For Iterator Subsystem' */
  for (s124_iter = 0; s124_iter < 14; s124_iter++) {
    /* Sum: '<S124>/Add' incorporates:
     *  Constant: '<S123>/k_TJA_PP_t_MinPlanedTm_sg'
     *  Product: '<S124>/Product'
     */
    localB->Add_ec = (real32_T)s124_iter * 0.461538464F + 2.0F;

    /* Outputs for Iterator SubSystem: '<S124>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S125>/For Iterator'
     */
    /* Product: '<S129>/Divide' incorporates:
     *  Constant: '<S129>/Constant'
     *  Sum: '<S129>/Subtract'
     */
    localB->Divide_a = localB->Add_ec / 9.0F;

    /* Sum: '<S128>/Subtract1' incorporates:
     *  Product: '<S128>/Product28'
     *  Product: '<S128>/Product29'
     */
    s125_iter_idx_1_tmp = localB->Gain21 * localB->Add_ec;

    /* SignalConversion generated from: '<S128>/Product30' incorporates:
     *  Constant: '<S125>/Constant'
     *  Gain: '<S128>/Gain22'
     *  Product: '<S128>/Product29'
     *  Sum: '<S128>/Add1'
     *  Sum: '<S128>/Subtract1'
     */
    s125_iter_idx_1 = 0.0F - (s125_iter_idx_1_tmp * 2.0F +
      rtu_initial_lateral_status[1]);

    /* Outputs for Iterator SubSystem: '<S129>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S135>/For Iterator'
     */
    for (localB->s135_iter = 0; localB->s135_iter < 10; localB->s135_iter++) {
      /* Assignment: '<S135>/Assignment' incorporates:
       *  Product: '<S135>/Product'
       */
      if (localB->s135_iter == 0) {
        /* Assignment: '<S135>/Assignment' */
        for (i = 0; i < 10; i++) {
          localB->Assignment[i] = 0.0F;
        }
      }

      localB->Assignment[localB->s135_iter] = (real32_T)localB->s135_iter *
        localB->Divide_a;

      /* End of Assignment: '<S135>/Assignment' */
    }

    /* End of Outputs for SubSystem: '<S129>/For Iterator Subsystem' */
    for (localB->s135_iter = 0; localB->s135_iter < 7; localB->s135_iter++) {
      /* Product: '<S128>/Product19' incorporates:
       *  Gain: '<S128>/Gain16'
       *  Gain: '<S128>/Gain18'
       *  Gain: '<S128>/Gain19'
       *  Gain: '<S128>/Gain20'
       *  Product: '<S128>/Product20'
       *  Product: '<S128>/Product22'
       *  Product: '<S128>/Product23'
       *  Product: '<S128>/Product24'
       *  Product: '<S128>/Product26'
       */
      tmp_1 = localB->Add_ec * localB->Add_ec;
      localB->Divide_a = tmp_1 * localB->Add_ec;

      /* Product: '<S128>/Product24' incorporates:
       *  Gain: '<S128>/Gain15'
       *  Product: '<S128>/Product21'
       *  Product: '<S128>/Product25'
       */
      rtb_Divide_lo_tmp = localB->Divide_a * localB->Add_ec;

      /* Concatenate: '<S128>/Matrix Concatenate2' incorporates:
       *  Gain: '<S128>/Gain15'
       *  Gain: '<S128>/Gain16'
       *  Gain: '<S128>/Gain17'
       *  Gain: '<S128>/Gain18'
       *  Gain: '<S128>/Gain19'
       *  Gain: '<S128>/Gain20'
       *  Product: '<S128>/Product25'
       *  Product: '<S139>/Divide'
       */
      localB->Divide_lo[6] = rtb_Divide_lo_tmp * localB->Add_ec;
      localB->Divide_lo[1] = tmp_1 * 3.0F;
      localB->Divide_lo[4] = localB->Divide_a * 4.0F;
      localB->Divide_lo[7] = rtb_Divide_lo_tmp * 5.0F;
      localB->Divide_lo[2] = 6.0F * localB->Add_ec;
      localB->Divide_lo[5] = tmp_1 * 12.0F;
      localB->Divide_lo[8] = localB->Divide_a * 20.0F;

      /* Sum: '<S159>/Subtract' incorporates:
       *  Product: '<S139>/Divide'
       *  Product: '<S159>/Product'
       *  Product: '<S159>/Product1'
       *  Selector: '<S149>/Selector4'
       *  Selector: '<S149>/Selector5'
       *  Selector: '<S149>/Selector7'
       *  Selector: '<S149>/Selector8'
       *  Sum: '<S150>/Subtract'
       */
      tmp_1 = localB->Divide_lo[4] * localB->Divide_lo[8] - localB->Divide_lo[7]
        * localB->Divide_lo[5];

      /* Product: '<S160>/Product1' incorporates:
       *  Product: '<S139>/Divide'
       *  Product: '<S151>/Product'
       *  Selector: '<S149>/Selector3'
       *  Selector: '<S149>/Selector8'
       */
      tmp_0 = localB->Divide_lo[1] * localB->Divide_lo[8];

      /* Product: '<S160>/Product' incorporates:
       *  Product: '<S139>/Divide'
       *  Product: '<S151>/Product1'
       *  Selector: '<S149>/Selector5'
       *  Selector: '<S149>/Selector6'
       */
      tmp = localB->Divide_lo[7] * localB->Divide_lo[2];

      /* Sum: '<S161>/Subtract' incorporates:
       *  Product: '<S139>/Divide'
       *  Product: '<S161>/Product'
       *  Product: '<S161>/Product1'
       *  Selector: '<S149>/Selector3'
       *  Selector: '<S149>/Selector4'
       *  Selector: '<S149>/Selector6'
       *  Selector: '<S149>/Selector7'
       *  Sum: '<S152>/Subtract'
       */
      rtb_Sqrt_tmp = localB->Divide_lo[1] * localB->Divide_lo[5] -
        localB->Divide_lo[4] * localB->Divide_lo[2];

      /* Sum: '<S149>/Add' incorporates:
       *  Product: '<S128>/Product19'
       *  Product: '<S128>/Product24'
       *  Product: '<S139>/Divide'
       *  Product: '<S149>/Product'
       *  Product: '<S149>/Product1'
       *  Product: '<S149>/Product2'
       *  Product: '<S160>/Product'
       *  Product: '<S160>/Product1'
       *  Selector: '<S149>/Selector2'
       *  Sum: '<S159>/Subtract'
       *  Sum: '<S160>/Subtract'
       *  Sum: '<S161>/Subtract'
       */
      localB->Sqrt = (tmp_1 * localB->Divide_a + (tmp - tmp_0) *
                      rtb_Divide_lo_tmp) + rtb_Sqrt_tmp * localB->Divide_lo[6];

      /* Switch: '<S139>/Switch' incorporates:
       *  Abs: '<S139>/Abs'
       *  Constant: '<S139>/Constant'
       */
      if ((real32_T)fabs(localB->Sqrt) <= 1.0E-5F) {
        localB->Sqrt = 1.0E-5F;
      }

      /* End of Switch: '<S139>/Switch' */

      /* Gain: '<S139>/Gain3' incorporates:
       *  Product: '<S128>/Product24'
       *  Product: '<S139>/Divide'
       *  Product: '<S153>/Product'
       *  Product: '<S153>/Product1'
       *  Selector: '<S139>/Selector5'
       *  Sum: '<S153>/Subtract'
       */
      localB->Gain3_d = -(rtb_Divide_lo_tmp * localB->Divide_lo[8] -
                          localB->Divide_lo[6] * localB->Divide_lo[5]);

      /* Sum: '<S154>/Subtract' incorporates:
       *  Product: '<S128>/Product19'
       *  Product: '<S139>/Divide'
       *  Product: '<S154>/Product'
       *  Product: '<S154>/Product1'
       *  Selector: '<S139>/Selector3'
       */
      localB->Subtract_fb = localB->Divide_a * localB->Divide_lo[8] -
        localB->Divide_lo[6] * localB->Divide_lo[2];

      /* Gain: '<S139>/Gain5' incorporates:
       *  Product: '<S128>/Product19'
       *  Product: '<S128>/Product24'
       *  Product: '<S139>/Divide'
       *  Product: '<S155>/Product'
       *  Product: '<S155>/Product1'
       *  Selector: '<S139>/Selector4'
       *  Sum: '<S155>/Subtract'
       */
      localB->Gain5_a = -(localB->Divide_a * localB->Divide_lo[5] -
                          rtb_Divide_lo_tmp * localB->Divide_lo[2]);

      /* Sum: '<S156>/Subtract' incorporates:
       *  Product: '<S128>/Product24'
       *  Product: '<S139>/Divide'
       *  Product: '<S156>/Product'
       *  Product: '<S156>/Product1'
       *  Selector: '<S139>/Selector9'
       */
      localB->Subtract_jf = rtb_Divide_lo_tmp * localB->Divide_lo[7] -
        localB->Divide_lo[6] * localB->Divide_lo[4];

      /* Gain: '<S139>/Gain7' incorporates:
       *  Product: '<S128>/Product19'
       *  Product: '<S139>/Divide'
       *  Product: '<S157>/Product'
       *  Product: '<S157>/Product1'
       *  Selector: '<S139>/Selector6'
       *  Sum: '<S157>/Subtract'
       */
      localB->Gain7_l = -(localB->Divide_a * localB->Divide_lo[7] -
                          localB->Divide_lo[6] * localB->Divide_lo[1]);

      /* Selector: '<S139>/Selector8' incorporates:
       *  Product: '<S139>/Divide'
       */
      rtb_Selector8_i_idx_1 = localB->Divide_lo[1];
      rtb_Selector8_i_idx_3 = localB->Divide_lo[4];

      /* Product: '<S139>/Divide' incorporates:
       *  Concatenate: '<S139>/Matrix Concatenate'
       *  Gain: '<S139>/Gain1'
       *  Product: '<S128>/Product19'
       *  Product: '<S128>/Product24'
       *  Product: '<S158>/Product'
       *  Product: '<S158>/Product1'
       *  Selector: '<S139>/Selector8'
       *  Selector: '<S148>/Selector2'
       *  Selector: '<S148>/Selector3'
       *  Sum: '<S151>/Subtract'
       *  Sum: '<S158>/Subtract'
       */
      localB->Divide_lo[0] = tmp_1 / localB->Sqrt;
      localB->Divide_lo[1] = -(tmp_0 - tmp) / localB->Sqrt;
      localB->Divide_lo[2] = rtb_Sqrt_tmp / localB->Sqrt;
      localB->Divide_lo[3] = localB->Gain3_d / localB->Sqrt;
      localB->Divide_lo[4] = localB->Subtract_fb / localB->Sqrt;
      localB->Divide_lo[5] = localB->Gain5_a / localB->Sqrt;
      localB->Divide_lo[6] = localB->Subtract_jf / localB->Sqrt;
      localB->Divide_lo[7] = localB->Gain7_l / localB->Sqrt;
      localB->Divide_lo[8] = (localB->Divide_a * rtb_Selector8_i_idx_3 -
        rtb_Divide_lo_tmp * rtb_Selector8_i_idx_1) / localB->Sqrt;

      /* SignalConversion generated from: '<S128>/Product30' incorporates:
       *  Product: '<S125>/Product'
       *  Product: '<S128>/Product27'
       *  Product: '<S128>/Product28'
       *  Sum: '<S125>/Add'
       *  Sum: '<S128>/Add'
       *  Sum: '<S128>/Subtract'
       */
      localB->Divide_a = ((real32_T)localB->s135_iter * 0.625F + -1.875F) -
        ((rtu_initial_lateral_status[1] * localB->Add_ec +
          rtu_initial_lateral_status[0]) + s125_iter_idx_1_tmp * localB->Add_ec);

      /* Product: '<S128>/Product30' incorporates:
       *  Product: '<S139>/Divide'
       */
      for (i = 0; i < 3; i++) {
        localB->Product30[i] = localB->Divide_lo[i + 6] * s125_iter_idx_2 +
          (localB->Divide_lo[i + 3] * s125_iter_idx_1 + localB->Divide_lo[i] *
           localB->Divide_a);
      }

      /* End of Product: '<S128>/Product30' */

      /* Gain: '<S133>/Gain1' */
      localB->Divide_a = 3.0F * localB->Product30[0];
      for (i = 0; i < 10; i++) {
        /* Sum: '<S136>/Add' incorporates:
         *  Assignment: '<S135>/Assignment'
         *  Product: '<S130>/Product'
         *  Product: '<S136>/Product'
         *  Product: '<S136>/Product1'
         *  Product: '<S136>/Product2'
         *  Product: '<S136>/Product3'
         *  Product: '<S136>/Product4'
         */
        rtb_Divide_lo_tmp = ((((rtu_initial_lateral_status[1] *
          localB->Assignment[i] + rtu_initial_lateral_status[0]) +
          localB->Gain21 * localB->Assignment[i] * localB->Assignment[i]) +
                              localB->Product30[0] * localB->Assignment[i] *
                              localB->Assignment[i] * localB->Assignment[i]) +
                             localB->Product30[1] * localB->Assignment[i] *
                             localB->Assignment[i] * localB->Assignment[i] *
                             localB->Assignment[i]) + localB->Product30[2] *
          localB->Assignment[i] * localB->Assignment[i] * localB->Assignment[i] *
          localB->Assignment[i] * localB->Assignment[i];
        localB->Add_ll[i] = rtb_Divide_lo_tmp * rtb_Divide_lo_tmp;

        /* Product: '<S137>/Product1' incorporates:
         *  Assignment: '<S135>/Assignment'
         */
        localB->Product_ln[i] = localB->Divide_a * localB->Assignment[i] *
          localB->Assignment[i];
      }

      /* Gain: '<S133>/Gain2' */
      localB->Divide_a = 4.0F * localB->Product30[1];

      /* Product: '<S137>/Product2' incorporates:
       *  Assignment: '<S135>/Assignment'
       */
      for (i = 0; i < 10; i++) {
        localB->Product2_a2u[i] = localB->Divide_a * localB->Assignment[i] *
          localB->Assignment[i] * localB->Assignment[i];
      }

      /* End of Product: '<S137>/Product2' */

      /* Gain: '<S133>/Gain3' */
      localB->Divide_a = 5.0F * localB->Product30[2];
      for (i = 0; i < 10; i++) {
        /* Sum: '<S137>/Add' incorporates:
         *  Assignment: '<S135>/Assignment'
         *  Product: '<S137>/Product'
         *  Product: '<S137>/Product1'
         *  Product: '<S137>/Product2'
         *  Product: '<S137>/Product3'
         *  Sum: '<S138>/Add'
         */
        rtb_Divide_lo_tmp = (((rtb_Gain_dy * localB->Assignment[i] +
          rtu_initial_lateral_status_0) + localB->Product_ln[i]) +
                             localB->Product2_a2u[i]) + localB->Divide_a *
          localB->Assignment[i] * localB->Assignment[i] * localB->Assignment[i] *
          localB->Assignment[i];
        localB->Product_ln[i] = rtb_Divide_lo_tmp;

        /* Product: '<S132>/Product' */
        localB->Product2_a2u[i] = rtb_Divide_lo_tmp * rtb_Divide_lo_tmp;
      }

      /* Gain: '<S133>/Gain6' */
      localB->Divide_a = 6.0F * localB->Product30[0];

      /* Product: '<S138>/Product' incorporates:
       *  Assignment: '<S135>/Assignment'
       */
      for (i = 0; i < 10; i++) {
        localB->Product_ln[i] = localB->Divide_a * localB->Assignment[i];
      }

      /* End of Product: '<S138>/Product' */

      /* Gain: '<S133>/Gain8' */
      localB->Divide_a = 12.0F * localB->Product30[1];

      /* Product: '<S138>/Product1' incorporates:
       *  Assignment: '<S135>/Assignment'
       */
      for (i = 0; i < 10; i++) {
        localB->Product1_ky[i] = localB->Divide_a * localB->Assignment[i] *
          localB->Assignment[i];
      }

      /* End of Product: '<S138>/Product1' */

      /* Gain: '<S133>/Gain9' */
      localB->Divide_a = 20.0F * localB->Product30[2];

      /* Sum: '<S130>/Sum of Elements' */
      tmp_1 = -0.0F;

      /* Sum: '<S132>/Sum of Elements' */
      tmp_0 = -0.0F;

      /* Sum: '<S131>/Sum of Elements' */
      tmp = -0.0F;
      for (i = 0; i < 10; i++) {
        /* Sum: '<S138>/Add' incorporates:
         *  Assignment: '<S135>/Assignment'
         *  Product: '<S131>/Product'
         *  Product: '<S138>/Product'
         *  Product: '<S138>/Product1'
         *  Product: '<S138>/Product2'
         */
        rtb_Divide_lo_tmp = localB->Divide_a * localB->Assignment[i] *
          localB->Assignment[i] * localB->Assignment[i] + ((rtb_Gain5_c +
          localB->Product_ln[i]) + localB->Product1_ky[i]);
        rtb_Divide_lo_tmp *= rtb_Divide_lo_tmp;

        /* Sum: '<S130>/Sum of Elements' incorporates:
         *  Product: '<S130>/Product'
         */
        tmp_1 += localB->Add_ll[i];

        /* Sum: '<S132>/Sum of Elements' incorporates:
         *  Product: '<S132>/Product'
         */
        tmp_0 += localB->Product2_a2u[i];

        /* Sum: '<S131>/Sum of Elements' */
        tmp += rtb_Divide_lo_tmp;

        /* Sum: '<S138>/Add' incorporates:
         *  Product: '<S138>/Product'
         */
        localB->Product_ln[i] = rtb_Divide_lo_tmp;
      }

      /* Sum: '<S127>/Add' incorporates:
       *  Constant: '<S123>/Constant3'
       *  Constant: '<S123>/k_TJA_PP_d_MaxPlanedLatPos_sg'
       *  Constant: '<S123>/k_TJA_PP_d_MaxPlanedLatVel_sg'
       *  Constant: '<S123>/k_TJA_PP_j_MaxPlanedLatJerk_sg'
       *  Constant: '<S123>/k_TJA_PP_k_PlanedLatJerkWght_sg'
       *  Constant: '<S123>/k_TJA_PP_k_PlanedLatOfstWght_sg'
       *  Constant: '<S127>/Constant1'
       *  Product: '<S130>/Divide'
       *  Product: '<S130>/Divide1'
       *  Product: '<S130>/Product1'
       *  Product: '<S131>/Divide'
       *  Product: '<S131>/Divide1'
       *  Product: '<S131>/Product1'
       *  Product: '<S132>/Divide'
       *  Product: '<S132>/Divide1'
       *  Product: '<S132>/Product1'
       *  Product: '<S134>/Divide'
       *  Saturate: '<S127>/Saturation'
       *  Sqrt: '<S130>/Sqrt'
       *  Sqrt: '<S131>/Sqrt'
       *  Sqrt: '<S132>/Sqrt'
       *  Sum: '<S130>/Sum of Elements'
       *  Sum: '<S131>/Sum of Elements'
       *  Sum: '<S132>/Sum of Elements'
       */
      localB->Divide_a = (((real32_T)sqrt(tmp_1 / 10.0F) / 1.875F * 3.0F /
                           localB->Add_ec + (real32_T)sqrt(tmp_0 / 10.0F) / 2.0F
                           / localB->Add_ec) + (real32_T)sqrt(tmp / 10.0F) /
                          10.0F * 2.0F / localB->Add_ec) + localB->Add_ec / 8.0F;

      /* If: '<S125>/If' incorporates:
       *  DataStoreRead: '<S125>/Data Store Read'
       *  DataStoreWrite: '<S126>/Data Store Write'
       *  Inport: '<S126>/cost_traj'
       *  Inport: '<S126>/cost_value'
       */
      if (localB->Divide_a < min_cost_value) {
        /* Outputs for IfAction SubSystem: '<S125>/If Action Subsystem' incorporates:
         *  ActionPort: '<S126>/Action Port'
         */
        rty_y_cof[0] = localB->Add_ec;
        rty_y_cof[1] = rtu_initial_lateral_status[0];
        rty_y_cof[2] = rtu_initial_lateral_status[1];
        rty_y_cof[3] = localB->Gain21;
        rty_y_cof[4] = localB->Product30[0];
        rty_y_cof[5] = localB->Product30[1];
        rty_y_cof[6] = localB->Product30[2];
        min_cost_value = localB->Divide_a;

        /* End of Outputs for SubSystem: '<S125>/If Action Subsystem' */
      }

      /* End of If: '<S125>/If' */
    }

    /* End of Outputs for SubSystem: '<S124>/For Iterator Subsystem' */
  }

  /* End of Outputs for SubSystem: '<S123>/PlannerLoop' */
}

/*
 * Output and update for atomic system:
 *    '<S312>/Chart'
 *    '<S193>/Chart'
 *    '<S347>/Chart'
 *    '<S379>/Chart'
 *    '<S389>/Chart'
 */
static void app_Chart_o(boolean_T rtu_Arb_is_LatCtrlActv_bl, real32_T
  *rty_ramp_cof, DW_Chart_app_f_T *localDW)
{
  /* Chart: '<S312>/Chart' */
  if (localDW->is_active_c7_app == 0U) {
    localDW->is_active_c7_app = 1U;
    localDW->is_c7_app = app_IN_OFF_i;
    *rty_ramp_cof = 0.0F;
  } else {
    switch (localDW->is_c7_app) {
     case app_IN_OFF_i:
      if (rtu_Arb_is_LatCtrlActv_bl) {
        localDW->is_c7_app = app_IN_ON_Count;
        *rty_ramp_cof = 0.0F;
      }
      break;

     case app_IN_OFF_Count:
      if ((!rtu_Arb_is_LatCtrlActv_bl) && (*rty_ramp_cof <= 0.01F)) {
        localDW->is_c7_app = app_IN_OFF_i;
        *rty_ramp_cof = 0.0F;
      } else if (rtu_Arb_is_LatCtrlActv_bl && (*rty_ramp_cof >= 0.99F)) {
        localDW->is_c7_app = app_IN_ON_m;
        *rty_ramp_cof = 1.0F;
      } else if (rtu_Arb_is_LatCtrlActv_bl) {
        *rty_ramp_cof += 0.02F;
      } else {
        *rty_ramp_cof -= 0.05F;
      }
      break;

     case app_IN_ON_m:
      if (!rtu_Arb_is_LatCtrlActv_bl) {
        localDW->is_c7_app = app_IN_OFF_Count;
        *rty_ramp_cof = 1.0F;
      }
      break;

     default:
      /* case IN_ON_Count: */
      if (rtu_Arb_is_LatCtrlActv_bl && (*rty_ramp_cof >= 0.99F)) {
        localDW->is_c7_app = app_IN_ON_m;
        *rty_ramp_cof = 1.0F;
      } else if ((!rtu_Arb_is_LatCtrlActv_bl) && (*rty_ramp_cof <= 0.01F)) {
        localDW->is_c7_app = app_IN_OFF_i;
        *rty_ramp_cof = 0.0F;
      } else if (rtu_Arb_is_LatCtrlActv_bl) {
        *rty_ramp_cof += 0.02F;
      } else {
        *rty_ramp_cof -= 0.05F;
      }
      break;
    }
  }

  /* End of Chart: '<S312>/Chart' */
}

static void app_LUf_boolean_Tint32_Treal32_T(real32_T outU[], real32_T outP[],
  int32_T N, boolean_T outS[])
{
  /* S-Function (sdsplu2): '<S211>/LU Factorization' */
  /* initialize status output */
  outS[0U] = false;

  /* initialize row-pivot indices */
  app_B.k = 0;
  while (app_B.k < N) {
    outP[app_B.k] = (real32_T)(app_B.k + 1);
    app_B.k++;
  }

  app_B.k = 0;
  while (app_B.k < N) {
    app_B.p = app_B.k;

    /* Scan the lower triangular part of this column only. */
    /* Record row of largest value */
    app_B.idx1_tmp = app_B.k * N;
    app_B.mTmp1 = outU[app_B.idx1_tmp + app_B.k];
    if (app_B.mTmp1 < 0.0F) {
      app_B.mTmp1 = -app_B.mTmp1;
    }

    app_B.r = app_B.k + 1;
    while (app_B.r < N) {
      app_B.mTmp2 = outU[app_B.idx1_tmp + app_B.r];
      if (app_B.mTmp2 < 0.0F) {
        app_B.mTmp2 = -app_B.mTmp2;
      }

      if (app_B.mTmp2 > app_B.mTmp1) {
        app_B.p = app_B.r;
        app_B.mTmp1 = app_B.mTmp2;
      }

      app_B.r++;
    }

    /* swap rows if required */
    if (app_B.p != app_B.k) {
      app_B.c = 0;
      while (app_B.c < N) {
        app_B.idx1 = app_B.c * N;
        app_B.r = app_B.idx1 + app_B.p;
        app_B.mTmp1 = outU[app_B.r];
        app_B.i_j = app_B.idx1 + app_B.k;
        outU[app_B.r] = outU[app_B.i_j];
        outU[app_B.i_j] = app_B.mTmp1;
        app_B.c++;
      }

      /* swap pivot row indices */
      app_B.mTmp1 = outP[app_B.p];
      outP[app_B.p] = outP[app_B.k];
      outP[app_B.k] = app_B.mTmp1;
    }

    app_B.idx1 = app_B.k * N + app_B.k;
    if (outU[app_B.idx1] == 0.0F) {
      outS[0U] = true;
    } else {
      app_B.r = app_B.k + 1;
      while (app_B.r < N) {
        app_B.i_j = app_B.idx1_tmp + app_B.r;
        outU[app_B.i_j] /= outU[app_B.idx1];
        app_B.r++;
      }

      app_B.c = app_B.k + 1;
      while (app_B.c < N) {
        app_B.idx1 = app_B.c * N;
        app_B.r = app_B.k + 1;
        while (app_B.r < N) {
          app_B.i_j = app_B.idx1 + app_B.r;
          outU[app_B.i_j] -= outU[app_B.idx1_tmp + app_B.r] * outU[app_B.idx1 +
            app_B.k];
          app_B.r++;
        }

        app_B.c++;
      }
    }

    app_B.k++;
  }

  /* End of S-Function (sdsplu2): '<S211>/LU Factorization' */
}

/* Model step function */
void app_step(uint8_T arg_can_492[8], uint8_T arg_can_251[8], uint8_T
              arg_can_355[8], uint8_T arg_can_489[8], uint8_T arg_can_201[8],
              uint8_T arg_can_1130[8], uint8_T arg_can_886[8], uint8_T
              arg_can_901[8], uint8_T arg_can_532[8], uint8_T arg_can_485[8],
              uint8_T arg_can_851[8], uint8_T arg_can_540[8], uint8_T
              arg_can_758[8], uint8_T arg_can_404[8], uint8_T arg_can_481[8],
              uint8_T arg_can_389[8], uint8_T arg_can_593[8], uint8_T
              arg_can_516[8], real32_T arg_lateralPlan_laneWidth, real32_T
              arg_lateralPlan_lProb, real32_T arg_lateralPlan_rProb, real32_T
              arg_lateralPlan_dProb, real32_T arg_lateralPlan_rawCurvature,
              real32_T arg_lateralPlan_rawCurvatureRate, real32_T
              arg_lateralPlan_curvature, real32_T arg_lateralPlan_curvatureRate,
              real32_T arg_lateralPlan_pathCof_C3, real32_T
              arg_lateralPlan_pathCof_C2, real32_T arg_lateralPlan_pathCof_C1,
              real32_T arg_lateralPlan_pathCof_C0, boolean_T
              arg_lateralPlan_valid, boolean_T arg_lateralPlan_ctrlType,
              real32_T arg_lateralPlan_yPts[17], real32_T
              arg_lateralPlan_headPts[17])
{
  static const int8_T ab[900] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
  };

  static const int8_T tmp[3] = { 0, 2, 3 };

  static const int8_T tmp_0[3] = { 0, 1, 3 };

  static const int8_T y[3] = { 0, 0, 1 };

  boolean_T guard1 = false;
  UNUSED_PARAMETER(arg_lateralPlan_laneWidth);
  UNUSED_PARAMETER(arg_lateralPlan_rawCurvatureRate);
  UNUSED_PARAMETER(arg_lateralPlan_curvature);
  UNUSED_PARAMETER(arg_lateralPlan_curvatureRate);

  /* BusCreator: '<S14>/Bus Creator' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/Constant4'
   *  Constant: '<S14>/Constant5'
   *  Inport: '<Root>/can_492'
   */
  app_B.BusCreator.Extended = 0U;
  app_B.BusCreator.Length = 8U;
  app_B.BusCreator.Remote = 0U;
  app_B.BusCreator.Error = 0U;
  app_B.BusCreator.ID = 492U;
  app_B.BusCreator.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator.Data[app_B.i] = arg_can_492[app_B.i];
  }

  /* End of BusCreator: '<S14>/Bus Creator' */

  /* S-Function (scanunpack): '<S14>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S14>/CAN Unpack' */
    if ((8 == app_B.BusCreator.Length) && (app_B.BusCreator.ID != INVALID_CAN_ID)
        ) {
      if ((492 == app_B.BusCreator.ID) && (0U == app_B.BusCreator.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 4
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator.Data[0]) & (uint8_T)(0xF0U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              app_B.CANUnpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 52
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator.Data[6]) & (uint8_T)(0x70U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              ChLKACtrlSts = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 8
           *  length                  = 11
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.01
           *  offset                  = -10.24
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator.Data[1]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator.Data[0]) & (uint16_T)(0x7U)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = (result * 0.01) + -10.24;
              ChLKARespToq = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 24
           *  length                  = 15
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 3
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 11
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.01
           *  offset                  = -10.24
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator.Data[4]) & (uint16_T)(0x7U)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = (result * 0.01) + -10.24;
              DrvrStrgDlvrdToq = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 55
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 37
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 38
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 35
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator.Data[4]) & (uint8_T)(0x18U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              StrgCustSetngDspCmd = result;
            }
          }
        }
      }
    }
  }

  /* Delay: '<S24>/Delay9' */
  if (app_DW.icLoad != 0) {
    for (app_B.i = 0; app_B.i < 9; app_B.i++) {
      app_DW.Delay9_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay8' */
  if (app_DW.icLoad_p != 0) {
    for (app_B.i = 0; app_B.i < 8; app_B.i++) {
      app_DW.Delay8_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay7' */
  if (app_DW.icLoad_a != 0) {
    for (app_B.i = 0; app_B.i < 7; app_B.i++) {
      app_DW.Delay7_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay6' */
  if (app_DW.icLoad_d != 0) {
    for (app_B.i = 0; app_B.i < 6; app_B.i++) {
      app_DW.Delay6_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay5' */
  if (app_DW.icLoad_g != 0) {
    for (app_B.i = 0; app_B.i < 5; app_B.i++) {
      app_DW.Delay5_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay' */
  if (app_DW.icLoad_pt != 0) {
    app_DW.Delay_DSTATE[0] = app_B.CANUnpack_o1;
    app_DW.Delay_DSTATE[1] = app_B.CANUnpack_o1;
    app_DW.Delay_DSTATE[2] = app_B.CANUnpack_o1;
    app_DW.Delay_DSTATE[3] = app_B.CANUnpack_o1;
  }

  /* Delay: '<S24>/Delay1' */
  if (app_DW.icLoad_n != 0) {
    app_DW.Delay1_DSTATE[0] = app_B.CANUnpack_o1;
    app_DW.Delay1_DSTATE[1] = app_B.CANUnpack_o1;
    app_DW.Delay1_DSTATE[2] = app_B.CANUnpack_o1;
  }

  /* Delay: '<S24>/Delay2' */
  if (app_DW.icLoad_b != 0) {
    app_DW.Delay2_DSTATE[0] = app_B.CANUnpack_o1;
    app_DW.Delay2_DSTATE[1] = app_B.CANUnpack_o1;
  }

  /* Delay: '<S24>/Delay3' */
  if (app_DW.icLoad_gw != 0) {
    app_DW.Delay3_DSTATE = app_B.CANUnpack_o1;
  }

  /* Logic: '<S24>/Logical Operator1' incorporates:
   *  Delay: '<S24>/Delay'
   *  Delay: '<S24>/Delay1'
   *  Delay: '<S24>/Delay2'
   *  Delay: '<S24>/Delay3'
   *  Delay: '<S24>/Delay5'
   *  Delay: '<S24>/Delay6'
   *  Delay: '<S24>/Delay7'
   *  Delay: '<S24>/Delay8'
   *  Delay: '<S24>/Delay9'
   *  Logic: '<S24>/Logical Operator'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator1'
   *  RelationalOperator: '<S24>/Relational Operator2'
   *  RelationalOperator: '<S24>/Relational Operator3'
   *  RelationalOperator: '<S24>/Relational Operator4'
   *  RelationalOperator: '<S24>/Relational Operator5'
   *  RelationalOperator: '<S24>/Relational Operator6'
   *  RelationalOperator: '<S24>/Relational Operator7'
   *  RelationalOperator: '<S24>/Relational Operator8'
   */
  app_B.LogicalOperator1_l = ((app_DW.Delay9_DSTATE[0] != app_DW.Delay8_DSTATE[0])
    || (app_DW.Delay8_DSTATE[0] != app_DW.Delay7_DSTATE[0]) ||
    (app_DW.Delay7_DSTATE[0] != app_DW.Delay6_DSTATE[0]) ||
    (app_DW.Delay6_DSTATE[0] != app_DW.Delay5_DSTATE[0]) ||
    (app_DW.Delay5_DSTATE[0] != app_DW.Delay_DSTATE[0]) || (app_DW.Delay_DSTATE
    [0] != app_DW.Delay1_DSTATE[0]) || (app_DW.Delay1_DSTATE[0] !=
    app_DW.Delay2_DSTATE[0]) || (app_DW.Delay2_DSTATE[0] != app_DW.Delay3_DSTATE)
    || (app_DW.Delay3_DSTATE != app_B.CANUnpack_o1));

  /* Switch generated from: '<S14>/Switch' */
  if (app_B.LogicalOperator1_l) {
    /* DataTypeConversion: '<S14>/Data Type Conversion' */
    VehCP_n_ChLKACtrlSts_u8 = (uint8_T)ChLKACtrlSts;

    /* DataTypeConversion: '<S14>/Data Type Conversion1' */
    VehCP_T_ChLKARespToq_sg = (real32_T)ChLKARespToq;

    /* DataTypeConversion: '<S14>/Data Type Conversion2' */
    VehCP_T_DrvrStrgDlvrdToq_sg = (real32_T)DrvrStrgDlvrdToq;

    /* DataTypeConversion: '<S14>/Data Type Conversion3' */
    VehCP_n_StrgCustSetngDspCmd_u8 = (uint8_T)StrgCustSetngDspCmd;
  } else {
    /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
     *  Constant: '<S14>/Constant6'
     */
    VehCP_n_ChLKACtrlSts_u8 = 0U;

    /* DataTypeConversion: '<S14>/Data Type Conversion1' incorporates:
     *  Constant: '<S14>/Constant7'
     */
    VehCP_T_ChLKARespToq_sg = 0.0F;

    /* DataTypeConversion: '<S14>/Data Type Conversion2' incorporates:
     *  Constant: '<S14>/Constant8'
     */
    VehCP_T_DrvrStrgDlvrdToq_sg = 0.0F;

    /* DataTypeConversion: '<S14>/Data Type Conversion3' incorporates:
     *  Constant: '<S14>/Constant9'
     */
    VehCP_n_StrgCustSetngDspCmd_u8 = 0U;
  }

  /* End of Switch generated from: '<S14>/Switch' */

  /* BusCreator: '<S7>/Bus Creator' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/Constant4'
   *  Constant: '<S7>/Constant5'
   *  Inport: '<Root>/can_251'
   */
  app_B.BusCreator_o.Extended = 0U;
  app_B.BusCreator_o.Length = 8U;
  app_B.BusCreator_o.Remote = 0U;
  app_B.BusCreator_o.Error = 0U;
  app_B.BusCreator_o.ID = 251U;
  app_B.BusCreator_o.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_o.Data[app_B.i] = arg_can_251[app_B.i];
  }

  /* End of BusCreator: '<S7>/Bus Creator' */

  /* S-Function (scanunpack): '<S7>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S7>/CAN Unpack' */
    if ((8 == app_B.BusCreator_o.Length) && (app_B.BusCreator_o.ID !=
         INVALID_CAN_ID) ) {
      if ((251 == app_B.BusCreator_o.ID) && (0U == app_B.BusCreator_o.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 19
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_o.Data[2]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              AccelOvrd = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 2
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_o.Data[0]) & (uint8_T)(0x1CU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              PTAccToqReqResp = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 40
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 44
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 51
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 16
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 32
           *  length                  = 15
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.015625
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 22
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S8>/Bus Creator' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/Constant3'
   *  Constant: '<S8>/Constant4'
   *  Constant: '<S8>/Constant5'
   *  Inport: '<Root>/can_355'
   */
  app_B.BusCreator_g.Extended = 0U;
  app_B.BusCreator_g.Length = 8U;
  app_B.BusCreator_g.Remote = 0U;
  app_B.BusCreator_g.Error = 0U;
  app_B.BusCreator_g.ID = 355U;
  app_B.BusCreator_g.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_g.Data[app_B.i] = arg_can_355[app_B.i];
  }

  /* End of BusCreator: '<S8>/Bus Creator' */

  /* S-Function (scanunpack): '<S8>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S8>/CAN Unpack' */
    if ((8 == app_B.BusCreator_g.Length) && (app_B.BusCreator_g.ID !=
         INVALID_CAN_ID) ) {
      if ((355 == app_B.BusCreator_g.ID) && (0U == app_B.BusCreator_g.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 11
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_g.Data[1]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              AirBagDplHS = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 10
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 12
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_g.Data[1]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DrvrSbltAtcHS = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 13
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 0
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S13>/Bus Creator' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   *  Constant: '<S13>/Constant2'
   *  Constant: '<S13>/Constant3'
   *  Constant: '<S13>/Constant4'
   *  Constant: '<S13>/Constant5'
   *  Inport: '<Root>/can_489'
   */
  app_B.BusCreator_oq.Extended = 0U;
  app_B.BusCreator_oq.Length = 8U;
  app_B.BusCreator_oq.Remote = 0U;
  app_B.BusCreator_oq.Error = 0U;
  app_B.BusCreator_oq.ID = 489U;
  app_B.BusCreator_oq.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_oq.Data[app_B.i] = arg_can_489[app_B.i];
  }

  /* End of BusCreator: '<S13>/Bus Creator' */

  /* S-Function (scanunpack): '<S13>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S13>/CAN Unpack' */
    if ((8 == app_B.BusCreator_oq.Length) && (app_B.BusCreator_oq.ID !=
         INVALID_CAN_ID) ) {
      if ((489 == app_B.BusCreator_oq.ID) && (0U == app_B.BusCreator_oq.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 30
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oq.Data[3]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              ABSActvSts = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 29
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 25
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 28
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 24
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 12
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.0625
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_oq.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_oq.Data[4]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              {
                uint16_T* tempRawValuePtr = (uint16_T*)&unpackedValue;
                uint16_T tempValue = *tempRawValuePtr;
                int16_T* tempValuePtr = (int16_T*)&tempValue;
                uint16_T bitValue = tempValue & (uint16_T)0x800U;
                if (bitValue != 0U) {
                  /* Extend sign bits */
                  tempValue = tempValue | (uint16_T)0xF000U;
                  unpackedValue = *tempValuePtr;
                }
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.0625F;
              VehDynYawRate = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 36
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S6>/Bus Creator' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant4'
   *  Constant: '<S6>/Constant5'
   *  Inport: '<Root>/can_201'
   */
  app_B.BusCreator_gw.Extended = 0U;
  app_B.BusCreator_gw.Length = 8U;
  app_B.BusCreator_gw.Remote = 0U;
  app_B.BusCreator_gw.Error = 0U;
  app_B.BusCreator_gw.ID = 201U;
  app_B.BusCreator_gw.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_gw.Data[app_B.i] = arg_can_201[app_B.i];
  }

  /* End of BusCreator: '<S6>/Bus Creator' */

  /* S-Function (scanunpack): '<S6>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S6>/CAN Unpack' */
    if ((8 == app_B.BusCreator_gw.Length) && (app_B.BusCreator_gw.ID !=
         INVALID_CAN_ID) ) {
      if ((201 == app_B.BusCreator_gw.ID) && (0U == app_B.BusCreator_gw.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.39216
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)(app_B.BusCreator_gw.Data[4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.39216F;
              AccelActuPos = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 31
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 53
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 7
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_gw.Data[0]) & (uint8_T)(0x80U)) >> 7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              EnRunSts = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.25
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_gw.Data[5]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              app_B.PrkPdlAppdSts = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 41
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S5>/Bus Creator' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/Constant4'
   *  Constant: '<S5>/Constant5'
   *  Inport: '<Root>/can_1130'
   */
  app_B.BusCreator_l.Extended = 0U;
  app_B.BusCreator_l.Length = 8U;
  app_B.BusCreator_l.Remote = 0U;
  app_B.BusCreator_l.Error = 0U;
  app_B.BusCreator_l.ID = 1130U;
  app_B.BusCreator_l.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_l.Data[app_B.i] = arg_can_1130[app_B.i];
  }

  /* End of BusCreator: '<S5>/Bus Creator' */

  /* S-Function (scanunpack): '<S5>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S5>/CAN Unpack' */
    if ((8 == app_B.BusCreator_l.Length) && (app_B.BusCreator_l.ID !=
         INVALID_CAN_ID) ) {
      if ((1130 == app_B.BusCreator_l.ID) && (0U == app_B.BusCreator_l.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 46
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[5]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              BntOpenSts = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 13
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[1]) & (uint8_T)(0x20U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DipdBeamLghtOn = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 2
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 0
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              DrvrDoorOpenSts = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 44
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 14
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 42
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[5]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              FrtPsngDoorOpenSts = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 52
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 55
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 49
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 11
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 11 ------------------
           *  startBit                = 10
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 12 ------------------
           *  startBit                = 6
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 13 ------------------
           *  startBit                = 15
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[1]) & (uint8_T)(0x80U)) >> 7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              MainBeamLghtOn = result;
            }
          }

          /* --------------- START Unpacking signal 14 ------------------
           *  startBit                = 9
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 15 ------------------
           *  startBit                = 48
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 16 ------------------
           *  startBit                = 40
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[5]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              RLDoorOpenSts = result;
            }
          }

          /* --------------- START Unpacking signal 17 ------------------
           *  startBit                = 4
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[0]) & (uint8_T)(0x30U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              RRDoorOpenSts = result;
            }
          }

          /* --------------- START Unpacking signal 18 ------------------
           *  startBit                = 8
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 19 ------------------
           *  startBit                = 56
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S5>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S5>/CAN Unpack1' */
    if ((8 == app_B.BusCreator_l.Length) && (app_B.BusCreator_l.ID !=
         INVALID_CAN_ID) ) {
      if ((1130 == app_B.BusCreator_l.ID) && (0U == app_B.BusCreator_l.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 37
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[4]) & (uint8_T)(0x20U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.LftStrLght_On_p = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 38
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_l.Data[4]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.RghtStrLght_On_o = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S22>/Bus Creator' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S22>/Constant1'
   *  Constant: '<S22>/Constant2'
   *  Constant: '<S22>/Constant3'
   *  Constant: '<S22>/Constant4'
   *  Constant: '<S22>/Constant5'
   *  Inport: '<Root>/can_901'
   */
  app_B.BusCreator_i.Extended = 0U;
  app_B.BusCreator_i.Length = 8U;
  app_B.BusCreator_i.Remote = 0U;
  app_B.BusCreator_i.Error = 0U;
  app_B.BusCreator_i.ID = 901U;
  app_B.BusCreator_i.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_i.Data[app_B.i] = arg_can_901[app_B.i];
  }

  /* End of BusCreator: '<S22>/Bus Creator' */

  /* S-Function (scanunpack): '<S22>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S22>/CAN Unpack' */
    if ((8 == app_B.BusCreator_i.Length) && (app_B.BusCreator_i.ID !=
         INVALID_CAN_ID) ) {
      if ((901 == app_B.BusCreator_i.ID) && (0U == app_B.BusCreator_i.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 10
           *  length                  = 6
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.015625
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_i.Data[1]) & (uint8_T)(0xFCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.015625F;
              ACCDetObjExistPrblty = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 20
           *  length                  = 6
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_i.Data[2]) & (uint8_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_i.Data[1]) & (uint8_T)(0x3U)) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              ACCDetObjID = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 56
           *  length                  = 15
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.0078
           *  offset                  = -128.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_i.Data[7]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_i.Data[6]) & (uint16_T)(0x7FU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = (result * 0.0078F) + -128.0F;
              ACCDetObjLatRltvDist = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 40
           *  length                  = 12
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.0625
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_i.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_i.Data[4]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.0625F;
              ACCDetObjLongRltvDist = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 24
           *  length                  = 12
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.0625
           *  offset                  = -128.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_i.Data[3]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_i.Data[2]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = (result * 0.0625F) + -128.0F;
              ACCDetObjLongRltvSpd = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 36
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 0
           *  length                  = 5
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.03125
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S21>/Bus Creator' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S21>/Constant1'
   *  Constant: '<S21>/Constant2'
   *  Constant: '<S21>/Constant3'
   *  Constant: '<S21>/Constant4'
   *  Constant: '<S21>/Constant5'
   *  Inport: '<Root>/can_886'
   */
  app_B.BusCreator_p.Extended = 0U;
  app_B.BusCreator_p.Length = 8U;
  app_B.BusCreator_p.Remote = 0U;
  app_B.BusCreator_p.Error = 0U;
  app_B.BusCreator_p.ID = 886U;
  app_B.BusCreator_p.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_p.Data[app_B.i] = arg_can_886[app_B.i];
  }

  /* End of BusCreator: '<S21>/Bus Creator' */

  /* S-Function (scanunpack): '<S21>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S21>/CAN Unpack' */
    if ((8 == app_B.BusCreator_p.Length) && (app_B.BusCreator_p.ID !=
         INVALID_CAN_ID) ) {
      if ((886 == app_B.BusCreator_p.ID) && (0U == app_B.BusCreator_p.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 29
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_p.Data[3]) & (uint8_T)(0xE0U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              LDWLKASwReq = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 56
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_p.Data[7]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              RstrFctryDeftsReq = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S16>/Bus Creator' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S16>/Constant2'
   *  Constant: '<S16>/Constant3'
   *  Constant: '<S16>/Constant4'
   *  Constant: '<S16>/Constant5'
   *  Inport: '<Root>/can_532'
   */
  app_B.BusCreator_d.Extended = 0U;
  app_B.BusCreator_d.Length = 8U;
  app_B.BusCreator_d.Remote = 0U;
  app_B.BusCreator_d.Error = 0U;
  app_B.BusCreator_d.ID = 532U;
  app_B.BusCreator_d.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_d.Data[app_B.i] = arg_can_532[app_B.i];
  }

  /* End of BusCreator: '<S16>/Bus Creator' */

  /* S-Function (scanunpack): '<S16>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S16>/CAN Unpack' */
    if ((6 == app_B.BusCreator_d.Length) && (app_B.BusCreator_d.ID !=
         INVALID_CAN_ID) ) {
      if ((532 == app_B.BusCreator_d.ID) && (0U == app_B.BusCreator_d.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 1
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 75.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S16>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S16>/CAN Unpack1' */
    if ((8 == app_B.BusCreator_d.Length) && (app_B.BusCreator_d.ID !=
         INVALID_CAN_ID) ) {
      if ((532 == app_B.BusCreator_d.ID) && (0U == app_B.BusCreator_d.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 75.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)(app_B.BusCreator_d.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 75.0;
              app_B.CANUnpack1 = result;
            }
          }
        }
      }
    }
  }

  /* DataTypeConversion: '<S16>/Data Type Conversion' */
  VehCP_p_VrkPdlDrvrAppdPrs_sg = (real32_T)app_B.CANUnpack1;

  /* BusCreator: '<S19>/Bus Creator' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant1'
   *  Constant: '<S19>/Constant2'
   *  Constant: '<S19>/Constant3'
   *  Constant: '<S19>/Constant4'
   *  Constant: '<S19>/Constant5'
   *  Inport: '<Root>/can_758'
   */
  app_B.BusCreator_oj.Extended = 0U;
  app_B.BusCreator_oj.Length = 8U;
  app_B.BusCreator_oj.Remote = 0U;
  app_B.BusCreator_oj.Error = 0U;
  app_B.BusCreator_oj.ID = 758U;
  app_B.BusCreator_oj.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_oj.Data[app_B.i] = arg_can_758[app_B.i];
  }

  /* End of BusCreator: '<S19>/Bus Creator' */

  /* S-Function (scanunpack): '<S19>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S19>/CAN Unpack' */
    if ((8 == app_B.BusCreator_oj.Length) && (app_B.BusCreator_oj.ID !=
         INVALID_CAN_ID) ) {
      if ((758 == app_B.BusCreator_oj.ID) && (0U == app_B.BusCreator_oj.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 56
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 62
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[7]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              AEBSwReq = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 51
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[6]) & (uint8_T)(0x38U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              FCWSnstvLvlReq = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 54
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[6]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              FCWSwReq = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 48
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[6]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              LDWAdoWarnngReq = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 34
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[4]) & (uint8_T)(0xCU)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              LDWLKAHapticWrnngReq = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 46
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[5]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              LDWSnstvtLvlReq = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 38
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[4]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              TJAICASwReq = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S19>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S19>/CAN Unpack1' */
    if ((8 == app_B.BusCreator_oj.Length) && (app_B.BusCreator_oj.ID !=
         INVALID_CAN_ID) ) {
      if ((758 == app_B.BusCreator_oj.ID) && (0U == app_B.BusCreator_oj.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 62
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_oj.Data[7]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              VehCP_n_TJAICASwReq_u8 = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S12>/Bus Creator' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant1'
   *  Constant: '<S12>/Constant2'
   *  Constant: '<S12>/Constant3'
   *  Constant: '<S12>/Constant4'
   *  Constant: '<S12>/Constant5'
   *  Inport: '<Root>/can_485'
   */
  app_B.BusCreator_gt.Extended = 0U;
  app_B.BusCreator_gt.Length = 8U;
  app_B.BusCreator_gt.Remote = 0U;
  app_B.BusCreator_gt.Error = 0U;
  app_B.BusCreator_gt.ID = 485U;
  app_B.BusCreator_gt.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_gt.Data[app_B.i] = arg_can_485[app_B.i];
  }

  /* End of BusCreator: '<S12>/Bus Creator' */

  /* S-Function (scanunpack): '<S12>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S12>/CAN Unpack' */
    if ((8 == app_B.BusCreator_gt.Length) && (app_B.BusCreator_gt.ID !=
         INVALID_CAN_ID) ) {
      if ((485 == app_B.BusCreator_gt.ID) && (0U == app_B.BusCreator_gt.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 28
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_gt.Data[3]) & (uint8_T)(0xF0U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              app_B.CANUnpack_o1_h = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 48
           *  length                  = 16
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 32
           *  length                  = 12
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = -2048.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_gt.Data[4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_gt.Data[3]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result + -2048.0;
              StrgWhlAngGrd = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.0625
           *  offset                  = -2048.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_gt.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (app_B.BusCreator_gt.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = (result * 0.0625) + -2048.0;
              StrgWhlAng = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 5
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 56
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 2
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 7
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* Delay: '<S23>/Delay' */
  if (app_DW.icLoad_n4 != 0) {
    app_DW.Delay_DSTATE_j[0] = app_B.CANUnpack_o1_h;
    app_DW.Delay_DSTATE_j[1] = app_B.CANUnpack_o1_h;
    app_DW.Delay_DSTATE_j[2] = app_B.CANUnpack_o1_h;
    app_DW.Delay_DSTATE_j[3] = app_B.CANUnpack_o1_h;
  }

  /* Delay: '<S23>/Delay1' */
  if (app_DW.icLoad_e != 0) {
    app_DW.Delay1_DSTATE_p[0] = app_B.CANUnpack_o1_h;
    app_DW.Delay1_DSTATE_p[1] = app_B.CANUnpack_o1_h;
    app_DW.Delay1_DSTATE_p[2] = app_B.CANUnpack_o1_h;
  }

  /* Delay: '<S23>/Delay2' */
  if (app_DW.icLoad_dc != 0) {
    app_DW.Delay2_DSTATE_g[0] = app_B.CANUnpack_o1_h;
    app_DW.Delay2_DSTATE_g[1] = app_B.CANUnpack_o1_h;
  }

  /* Delay: '<S23>/Delay3' */
  if (app_DW.icLoad_l != 0) {
    app_DW.Delay3_DSTATE_m = app_B.CANUnpack_o1_h;
  }

  /* Logic: '<S23>/Logical Operator1' incorporates:
   *  Delay: '<S23>/Delay'
   *  Delay: '<S23>/Delay1'
   *  Delay: '<S23>/Delay2'
   *  Delay: '<S23>/Delay3'
   *  Logic: '<S23>/Logical Operator'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator1'
   *  RelationalOperator: '<S23>/Relational Operator2'
   *  RelationalOperator: '<S23>/Relational Operator3'
   */
  app_B.Compare_gw = ((app_DW.Delay_DSTATE_j[0] != app_DW.Delay1_DSTATE_p[0]) ||
                      (app_DW.Delay1_DSTATE_p[0] != app_DW.Delay2_DSTATE_g[0]) ||
                      (app_DW.Delay2_DSTATE_g[0] != app_DW.Delay3_DSTATE_m) ||
                      (app_DW.Delay3_DSTATE_m != app_B.CANUnpack_o1_h));

  /* Switch generated from: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant6'
   *  Constant: '<S12>/Constant7'
   */
  if (app_B.Compare_gw) {
    app_B.StrgWhlAngGrd_m = (real32_T)StrgWhlAngGrd;
    app_B.StrgWhlAng_n = (real32_T)StrgWhlAng;
  } else {
    app_B.StrgWhlAngGrd_m = 0.0F;
    app_B.StrgWhlAng_n = 0.0F;
  }

  /* End of Switch generated from: '<S12>/Switch' */

  /* BusCreator: '<S20>/Bus Creator' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S20>/Constant1'
   *  Constant: '<S20>/Constant2'
   *  Constant: '<S20>/Constant3'
   *  Constant: '<S20>/Constant4'
   *  Constant: '<S20>/Constant5'
   *  Inport: '<Root>/can_851'
   */
  app_B.BusCreator_n.Extended = 0U;
  app_B.BusCreator_n.Length = 8U;
  app_B.BusCreator_n.Remote = 0U;
  app_B.BusCreator_n.Error = 0U;
  app_B.BusCreator_n.ID = 851U;
  app_B.BusCreator_n.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_n.Data[app_B.i] = arg_can_851[app_B.i];
  }

  /* End of BusCreator: '<S20>/Bus Creator' */

  /* S-Function (scanunpack): '<S20>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S20>/CAN Unpack' */
    if ((8 == app_B.BusCreator_n.Length) && (app_B.BusCreator_n.ID !=
         INVALID_CAN_ID) ) {
      if ((851 == app_B.BusCreator_n.ID) && (0U == app_B.BusCreator_n.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 8
           *  length                  = 15
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.015625
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_n.Data[1]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_n.Data[0]) & (uint16_T)(0x7FU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.015625F;
              VehSpdAvgDrvn = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 7
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 40
           *  length                  = 15
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.015625
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_n.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_n.Data[4]) & (uint16_T)(0x7FU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.015625F;
              VehSpdAvgNonDrvn = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 39
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S17>/Bus Creator' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   *  Constant: '<S17>/Constant2'
   *  Constant: '<S17>/Constant3'
   *  Constant: '<S17>/Constant4'
   *  Constant: '<S17>/Constant5'
   *  Inport: '<Root>/can_540'
   */
  app_B.BusCreator_go.Extended = 0U;
  app_B.BusCreator_go.Length = 8U;
  app_B.BusCreator_go.Remote = 0U;
  app_B.BusCreator_go.Error = 0U;
  app_B.BusCreator_go.ID = 540U;
  app_B.BusCreator_go.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_go.Data[app_B.i] = arg_can_540[app_B.i];
  }

  /* End of BusCreator: '<S17>/Bus Creator' */

  /* S-Function (scanunpack): '<S17>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S17>/CAN Unpack' */
    if ((8 == app_B.BusCreator_go.Length) && (app_B.BusCreator_go.ID !=
         INVALID_CAN_ID) ) {
      if ((540 == app_B.BusCreator_go.ID) && (0U == app_B.BusCreator_go.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 48
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint16_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)(app_B.BusCreator_go.Data[6]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint16_T) (unpackedValue);
            }

            {
              uint16_T result = (uint16_T) outValue;
              ClstDspdVehSpd = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 46
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_go.Data[5]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              FrtWiperSwSts = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S11>/Bus Creator' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant3'
   *  Constant: '<S11>/Constant4'
   *  Constant: '<S11>/Constant5'
   *  Inport: '<Root>/can_481'
   */
  app_B.BusCreator_e.Extended = 0U;
  app_B.BusCreator_e.Length = 8U;
  app_B.BusCreator_e.Remote = 0U;
  app_B.BusCreator_e.Error = 0U;
  app_B.BusCreator_e.ID = 481U;
  app_B.BusCreator_e.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_e.Data[app_B.i] = arg_can_481[app_B.i];
  }

  /* End of BusCreator: '<S11>/Bus Creator' */

  /* S-Function (scanunpack): '<S11>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S11>/CAN Unpack' */
    if ((7 == app_B.BusCreator_e.Length) && (app_B.BusCreator_e.ID !=
         INVALID_CAN_ID) ) {
      if ((481 == app_B.BusCreator_e.ID) && (0U == app_B.BusCreator_e.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 16
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 7
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 18
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 19
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 6
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 5
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 4
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 2
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[0]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              CCSwStsSpdDecSw = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 3
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[0]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              CCSwStsSpdIncSw = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 0
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[0]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              CCSwStsSwDataIntgty = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S11>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S11>/CAN Unpack1' */
    if ((8 == app_B.BusCreator_e.Length) && (app_B.BusCreator_e.ID !=
         INVALID_CAN_ID) ) {
      if ((481 == app_B.BusCreator_e.ID) && (0U == app_B.BusCreator_e.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 5
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[0]) & (uint8_T)(0x20U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.CCSwStsRsmSw_m = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 6
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[0]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.CCSwStsOnSw_a = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 4
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[0]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.CCSwStsSetSw_f = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 19
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[2]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.CCSwStsDisIncSw_d = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 18
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[2]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.CCSwStsDistDecSw_p = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 7
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_e.Data[0]) & (uint8_T)(0x80U)) >> 7);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              app_B.CCSwStsCanclSwA_b = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S10>/Bus Creator' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant2'
   *  Constant: '<S10>/Constant3'
   *  Constant: '<S10>/Constant4'
   *  Constant: '<S10>/Constant5'
   *  Inport: '<Root>/can_404'
   */
  app_B.BusCreator_k.Extended = 0U;
  app_B.BusCreator_k.Length = 8U;
  app_B.BusCreator_k.Remote = 0U;
  app_B.BusCreator_k.Error = 0U;
  app_B.BusCreator_k.ID = 404U;
  app_B.BusCreator_k.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_k.Data[app_B.i] = arg_can_404[app_B.i];
  }

  /* End of BusCreator: '<S10>/Bus Creator' */

  /* S-Function (scanunpack): '<S10>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S10>/CAN Unpack' */
    if ((8 == app_B.BusCreator_k.Length) && (app_B.BusCreator_k.ID !=
         INVALID_CAN_ID) ) {
      if ((404 == app_B.BusCreator_k.ID) && (0U == app_B.BusCreator_k.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_k.Data[0]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              TrEstdGear = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 4
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 28
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 24
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (app_B.BusCreator_k.Data[3]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              TrShftLvrPos = result;
            }
          }
        }
      }
    }
  }

  /* BusCreator: '<S9>/Bus Creator' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Constant: '<S9>/Constant3'
   *  Constant: '<S9>/Constant4'
   *  Constant: '<S9>/Constant5'
   *  Inport: '<Root>/can_389'
   */
  app_B.BusCreator_a.Extended = 0U;
  app_B.BusCreator_a.Length = 8U;
  app_B.BusCreator_a.Remote = 0U;
  app_B.BusCreator_a.Error = 0U;
  app_B.BusCreator_a.ID = 389U;
  app_B.BusCreator_a.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_a.Data[app_B.i] = arg_can_389[app_B.i];
  }

  /* End of BusCreator: '<S9>/Bus Creator' */

  /* S-Function (scanunpack): '<S9>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S9>/CAN Unpack' */
    if ((4 == app_B.BusCreator_a.Length) && (app_B.BusCreator_a.ID !=
         INVALID_CAN_ID) ) {
      if ((389 == app_B.BusCreator_a.ID) && (0U == app_B.BusCreator_a.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 24
           *  length                  = 12
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.015625
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_a.Data[3]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_a.Data[2]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              {
                uint16_T* tempRawValuePtr = (uint16_T*)&unpackedValue;
                uint16_T tempValue = *tempRawValuePtr;
                int16_T* tempValuePtr = (int16_T*)&tempValue;
                uint16_T bitValue = tempValue & (uint16_T)0x800U;
                if (bitValue != 0U) {
                  /* Extend sign bits */
                  tempValue = tempValue | (uint16_T)0xF000U;
                  unpackedValue = *tempValuePtr;
                }
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.015625F;
              VSELatAcc = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 3
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 8
           *  length                  = 10
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.03
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(app_B.BusCreator_a.Data[1]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (app_B.BusCreator_a.Data[0]) & (uint16_T)(0x3U)) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              {
                uint16_T* tempRawValuePtr = (uint16_T*)&unpackedValue;
                uint16_T tempValue = *tempRawValuePtr;
                int16_T* tempValuePtr = (int16_T*)&tempValue;
                uint16_T bitValue = tempValue & (uint16_T)0x200U;
                if (bitValue != 0U) {
                  /* Extend sign bits */
                  tempValue = tempValue | (uint16_T)0xFC00U;
                  unpackedValue = *tempValuePtr;
                }
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              result = result * 0.03F;
              VSELongAcc = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 2
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S18>/Bus Creator' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant1'
   *  Constant: '<S18>/Constant2'
   *  Constant: '<S18>/Constant3'
   *  Constant: '<S18>/Constant4'
   *  Constant: '<S18>/Constant5'
   *  Inport: '<Root>/can_593'
   */
  app_B.BusCreator_ea.Extended = 0U;
  app_B.BusCreator_ea.Length = 8U;
  app_B.BusCreator_ea.Remote = 0U;
  app_B.BusCreator_ea.Error = 0U;
  app_B.BusCreator_ea.ID = 593U;
  app_B.BusCreator_ea.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_ea.Data[app_B.i] = arg_can_593[app_B.i];
  }

  /* End of BusCreator: '<S18>/Bus Creator' */

  /* S-Function (scanunpack): '<S18>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S18>/CAN Unpack' */
    if ((8 == app_B.BusCreator_ea.Length) && (app_B.BusCreator_ea.ID !=
         INVALID_CAN_ID) ) {
      if ((593 == app_B.BusCreator_ea.ID) && (0U == app_B.BusCreator_ea.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 17
           *  length                  = 4
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 8
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 56
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 3
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real32_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_ea.Data[0]) & (uint8_T)(0x38U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real32_T) (unpackedValue);
            }

            {
              real32_T result = (real32_T) outValue;
              ChACCAccReqResp = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 14
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 21
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 0
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 11
           *  length                  = 3
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 6
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 24
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.05
           *  offset                  = -7.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* BusCreator: '<S15>/Bus Creator' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant3'
   *  Constant: '<S15>/Constant4'
   *  Constant: '<S15>/Constant5'
   *  Inport: '<Root>/can_516'
   */
  app_B.BusCreator_ij.Extended = 0U;
  app_B.BusCreator_ij.Length = 8U;
  app_B.BusCreator_ij.Remote = 0U;
  app_B.BusCreator_ij.Error = 0U;
  app_B.BusCreator_ij.ID = 516U;
  app_B.BusCreator_ij.Timestamp = 0.0;
  for (app_B.i = 0; app_B.i < 8; app_B.i++) {
    app_B.BusCreator_ij.Data[app_B.i] = arg_can_516[app_B.i];
  }

  /* End of BusCreator: '<S15>/Bus Creator' */

  /* S-Function (scanunpack): '<S15>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S15>/CAN Unpack1' */
    if ((8 == app_B.BusCreator_ij.Length) && (app_B.BusCreator_ij.ID !=
         INVALID_CAN_ID) ) {
      if ((516 == app_B.BusCreator_ij.ID) && (0U == app_B.BusCreator_ij.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 6
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_ij.Data[0]) & (uint8_T)(0xC0U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              app_B.CANUnpack1_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 4
           *  length                  = 2
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_ij.Data[0]) & (uint8_T)(0x30U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              app_B.CANUnpack1_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 19
           *  length                  = 5
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (app_B.BusCreator_ij.Data[2]) & (uint8_T)(0xF8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              app_B.CANUnpack1_o3 = result;
            }
          }
        }
      }
    }
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  VehCP_LeftBSD_Warnning_u8 = (uint8_T)app_B.CANUnpack1_o1;

  /* DataTypeConversion: '<S15>/Data Type Conversion1' */
  VehCP_RightBSD_Warnning_u8 = (uint8_T)app_B.CANUnpack1_o2;

  /* DataTypeConversion: '<S15>/Data Type Conversion2' */
  VehCP_BSDStatus_u8 = (uint8_T)app_B.CANUnpack1_o3;

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  Inport: '<Root>/lateralPlan_valid'
   */
  VehCP_is_VehDataValid_bl = (app_B.LogicalOperator1_l && arg_lateralPlan_valid);

  /* DataTypeConversion: '<S4>/Data Type Conversion7' */
  VehCP_is_ABSActv_bl = (ABSActvSts != 0);

  /* DataTypeConversion: '<S4>/Data Type Conversion8' */
  VehCP_is_EngRun_bl = (EnRunSts != 0);

  /* DataTypeConversion: '<S4>/Data Type Conversion9' */
  VehCP_is_DrvrSbltActv_bl = (DrvrSbltAtcHS != 0);

  /* SignalConversion: '<S4>/Signal Copy8' */
  APP_IN_yr_VehDynYawRate_sg = VehDynYawRate;

  /* Delay: '<S33>/Delay' */
  if (app_DW.icLoad_m != 0) {
    app_DW.Delay_DSTATE_e = APP_IN_yr_VehDynYawRate_sg;
  }

  /* Sum: '<S33>/Sum' incorporates:
   *  Delay: '<S33>/Delay'
   *  Product: '<S33>/Product'
   *  Product: '<S33>/Product1'
   */
  VehCP_yr_VehDynYawRate_sg = app_DW.Delay_DSTATE_e * 0.614130497F +
    0.385869563F * APP_IN_yr_VehDynYawRate_sg;

  /* Delay: '<S29>/Delay' */
  if (app_DW.icLoad_f != 0) {
    app_DW.Delay_DSTATE_jg = AccelActuPos;
  }

  /* Sum: '<S29>/Sum' incorporates:
   *  Delay: '<S29>/Delay'
   *  Product: '<S29>/Product'
   *  Product: '<S29>/Product1'
   */
  VehCP_prec_VehAccelPos_sg = app_DW.Delay_DSTATE_jg * 0.888364792F +
    0.111635208F * AccelActuPos;

  /* DataTypeConversion: '<S4>/Data Type Conversion12' */
  VehCP_is_BntOpen_bl = (BntOpenSts != 0);

  /* SignalConversion: '<S4>/Signal Copy11' */
  VehCP_is_ACCDetObjExistProb_sg = ACCDetObjExistPrblty;

  /* DataTypeConversion: '<S4>/Data Type Conversion14' */
  VehCP_is_DipdBeamLghtOn_bl = (DipdBeamLghtOn != 0);

  /* SignalConversion: '<S4>/Signal Copy13' */
  VehCP_n_LDWLKASwReq_u8 = LDWLKASwReq;

  /* DataTypeConversion: '<S4>/Data Type Conversion16' */
  VehCP_is_DrvrDoorOpen_bl = (DrvrDoorOpenSts != 0);

  /* SignalConversion: '<S4>/Signal Copy15' */
  VehCP_d_ACCDetObjLatRltvDist_sg = ACCDetObjLatRltvDist;

  /* DataTypeConversion: '<S4>/Data Type Conversion18' */
  VehCP_is_FrtPsngDoorOpen_bl = (FrtPsngDoorOpenSts != 0);

  /* Chart: '<S4>/Chart3' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion19'
   *  RelationalOperator: '<S27>/FixPt Relational Operator'
   *  UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_Chart3((app_B.LftStrLght_On_p != 0) > (int32_T)app_DW.DelayInput1_DSTATE_e,
             &VehCP_is_LftStrgLmpOn_bl, &app_DW.sf_Chart3);

  /* SignalConversion: '<S4>/Signal Copy18' */
  VehCP_idx_ACCDetObjID_u8 = ACCDetObjID;

  /* DataTypeConversion: '<S4>/Data Type Conversion22' */
  VehCP_is_MainBeamLghtOn_bl = (MainBeamLghtOn != 0);

  /* Chart: '<S4>/Chart4' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion23'
   *  RelationalOperator: '<S28>/FixPt Relational Operator'
   *  UnitDelay: '<S28>/Delay Input1'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_Chart3((app_B.RghtStrLght_On_o != 0) > (int32_T)
             app_DW.DelayInput1_DSTATE_j, &VehCP_is_RghtStrgLmpOn_bl,
             &app_DW.sf_Chart4);

  /* SignalConversion: '<S4>/Signal Copy22' */
  VehCP_d_ACCDetObjLongRltvDist_sg = ACCDetObjLongRltvDist;

  /* SignalConversion: '<S4>/Signal Copy23' */
  VehCP_n_RstrFctryDeftsReq_u8 = RstrFctryDeftsReq;

  /* DataTypeConversion: '<S4>/Data Type Conversion26' */
  VehCP_is_RLDoorOpen_bl = (RLDoorOpenSts != 0);

  /* DataTypeConversion: '<S4>/Data Type Conversion27' */
  VehCP_is_RRDoorOpen_bl = (RRDoorOpenSts != 0);

  /* SignalConversion: '<S4>/Signal Copy26' */
  VehCP_v_ACCDetObjLongRltvSpd_sg = ACCDetObjLongRltvSpd;

  /* Delay: '<S30>/Delay' */
  if (app_DW.icLoad_c != 0) {
    app_DW.Delay_DSTATE_l = app_B.StrgWhlAng_n;
  }

  /* Sum: '<S30>/Sum' incorporates:
   *  Delay: '<S30>/Delay'
   *  Product: '<S30>/Product'
   *  Product: '<S30>/Product1'
   */
  VehCP_angD_StrgWhlAng_sg = app_DW.Delay_DSTATE_l * 0.498676062F + 0.501323879F
    * app_B.StrgWhlAng_n;

  /* Delay: '<S31>/Delay' */
  if (app_DW.icLoad_k != 0) {
    /* Sum: '<S31>/Sum' */
    app_DW.Delay_DSTATE_jm = VehSpdAvgDrvn;
  }

  /* Sum: '<S31>/Sum' incorporates:
   *  Delay: '<S31>/Delay'
   *  Product: '<S31>/Product'
   *  Product: '<S31>/Product1'
   */
  app_DW.Delay_DSTATE_jm = app_DW.Delay_DSTATE_jm * 0.498676062F + 0.501323879F *
    VehSpdAvgDrvn;

  /* Saturate: '<S4>/Saturation' */
  if (app_DW.Delay_DSTATE_jm > 150.0F) {
    /* Saturate: '<S4>/Saturation' */
    VehCP_V_VehSpdAvgDrvn_sg = 150.0F;
  } else if (app_DW.Delay_DSTATE_jm < 0.5F) {
    /* Saturate: '<S4>/Saturation' */
    VehCP_V_VehSpdAvgDrvn_sg = 0.5F;
  } else {
    /* Saturate: '<S4>/Saturation' */
    VehCP_V_VehSpdAvgDrvn_sg = app_DW.Delay_DSTATE_jm;
  }

  /* End of Saturate: '<S4>/Saturation' */

  /* Delay: '<S32>/Delay' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion31'
   */
  if (app_DW.icLoad_cn != 0) {
    app_DW.Delay_DSTATE_o = ClstDspdVehSpd;
  }

  /* Sum: '<S32>/Sum' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion31'
   *  Delay: '<S32>/Delay'
   *  Product: '<S32>/Product'
   *  Product: '<S32>/Product1'
   */
  VehCP_V_ClstDspdVehSpd_sg = app_DW.Delay_DSTATE_o * 0.888364792F +
    0.111635208F * (real32_T)ClstDspdVehSpd;

  /* SignalConversion: '<S4>/Signal Copy30' */
  VehCP_n_LDWAdoWarnngReq_u8 = LDWAdoWarnngReq;

  /* SignalConversion: '<S4>/Signal Copy31' */
  VehCP_n_LDWLKAHapticWrnngReq_u8 = LDWLKAHapticWrnngReq;

  /* Delay: '<S34>/Delay' */
  if (app_DW.icLoad_dp != 0) {
    app_DW.Delay_DSTATE_d = app_B.StrgWhlAngGrd_m;
  }

  /* Sum: '<S34>/Sum' incorporates:
   *  Delay: '<S34>/Delay'
   *  Product: '<S34>/Product'
   *  Product: '<S34>/Product1'
   */
  VehCP_W_StrgWhlAngGrd_sg = app_DW.Delay_DSTATE_d * 0.498676062F + 0.501323879F
    * app_B.StrgWhlAngGrd_m;

  /* Delay: '<S35>/Delay' */
  if (app_DW.icLoad_nt != 0) {
    /* Sum: '<S35>/Sum' */
    app_DW.Delay_DSTATE_h = VehSpdAvgNonDrvn;
  }

  /* Sum: '<S35>/Sum' incorporates:
   *  Delay: '<S35>/Delay'
   *  Product: '<S35>/Product'
   *  Product: '<S35>/Product1'
   */
  app_DW.Delay_DSTATE_h = app_DW.Delay_DSTATE_h * 0.498676062F + 0.501323879F *
    VehSpdAvgNonDrvn;

  /* Saturate: '<S4>/Saturation1' */
  if (app_DW.Delay_DSTATE_h > 200.0F) {
    /* Saturate: '<S4>/Saturation1' */
    VehCP_V_VehSpdAvgNonDrvn_sg = 200.0F;
  } else if (app_DW.Delay_DSTATE_h < 0.5F) {
    /* Saturate: '<S4>/Saturation1' */
    VehCP_V_VehSpdAvgNonDrvn_sg = 0.5F;
  } else {
    /* Saturate: '<S4>/Saturation1' */
    VehCP_V_VehSpdAvgNonDrvn_sg = app_DW.Delay_DSTATE_h;
  }

  /* End of Saturate: '<S4>/Saturation1' */

  /* SignalConversion: '<S4>/Signal Copy34' */
  VehCP_n_FrtWiperSwSts_u8 = FrtWiperSwSts;

  /* SignalConversion: '<S4>/Signal Copy35' */
  VehCP_n_LDWSnstvtLvlReq_u8 = LDWSnstvtLvlReq;

  /* DataTypeConversion: '<S4>/Data Type Conversion39' */
  VehCP_is_CCSwStsCancl_bl = (app_B.CCSwStsCanclSwA_b != 0);

  /* DataTypeConversion: '<S4>/Data Type Conversion40' */
  VehCP_is_CCSwStsDistDec_bl = (app_B.CCSwStsDistDecSw_p != 0);

  /* SignalConversion: '<S4>/Signal Copy39' */
  VehCP_n_TrEstdGear_u8 = TrEstdGear;

  /* Delay: '<S36>/Delay' */
  if (app_DW.icLoad_dv != 0) {
    app_DW.Delay_DSTATE_i = VSELatAcc;
  }

  /* Sum: '<S36>/Sum' incorporates:
   *  Delay: '<S36>/Delay'
   *  Product: '<S36>/Product'
   *  Product: '<S36>/Product1'
   */
  VehCP_a_VSELatAcc_sg = app_DW.Delay_DSTATE_i * 0.498676062F + 0.501323879F *
    VSELatAcc;

  /* DataTypeConversion: '<S4>/Data Type Conversion43' */
  VehCP_is_CCSwStsDisInc_bl = (app_B.CCSwStsDisIncSw_d != 0);

  /* DataTypeConversion: '<S4>/Data Type Conversion44' */
  VehCP_is_CCSwStsOn_bl = (app_B.CCSwStsOnSw_a != 0);

  /* DataTypeConversion: '<S4>/Data Type Conversion45' */
  VehCP_is_CCSwStsRsm_bl = (app_B.CCSwStsRsmSw_m != 0);

  /* DataTypeConversion: '<S4>/Data Type Conversion46' */
  VehCP_is_CCSwStsSet_bl = (app_B.CCSwStsSetSw_f != 0);

  /* SignalConversion: '<S4>/Signal Copy45' */
  VehCP_n_TrShftLvrPos_u8 = TrShftLvrPos;

  /* DataTypeConversion: '<S4>/Data Type Conversion48' */
  VehCP_is_CCSwStsSpdDec_bl = (CCSwStsSpdDecSw != 0);

  /* Delay: '<S37>/Delay' */
  if (app_DW.icLoad_fg != 0) {
    app_DW.Delay_DSTATE_ok = VSELongAcc;
  }

  /* Sum: '<S37>/Sum' incorporates:
   *  Delay: '<S37>/Delay'
   *  Product: '<S37>/Product'
   *  Product: '<S37>/Product1'
   */
  VehCP_a_VSELongAcc_sg = app_DW.Delay_DSTATE_ok * 0.498676062F + 0.501323879F *
    VSELongAcc;

  /* DataTypeConversion: '<S4>/Data Type Conversion50' */
  VehCP_is_CCSwStsSpdInc_bl = (CCSwStsSpdIncSw != 0);

  /* Chart: '<S38>/Chart' */
  app_Chart(&app_B.count_d);

  /* Chart: '<S95>/Chart3' incorporates:
   *  Constant: '<S101>/Constant'
   *  Constant: '<S95>/Constant'
   *  Constant: '<S95>/Constant1'
   *  Constant: '<S95>/Constant2'
   *  Inport: '<Root>/lateralPlan_lProb'
   *  RelationalOperator: '<S101>/Compare'
   */
  app_Chart4(arg_lateralPlan_lProb >= 0.5F, 0.02F, 1.0F, 0.01F,
             &app_B.LogicalOperator1_l, &app_DW.sf_Chart3_c);

  /* Chart: '<S95>/Chart2' incorporates:
   *  Constant: '<S102>/Constant'
   *  Constant: '<S95>/Constant3'
   *  Constant: '<S95>/Constant4'
   *  Constant: '<S95>/Constant5'
   *  Inport: '<Root>/lateralPlan_rProb'
   *  RelationalOperator: '<S102>/Compare'
   */
  app_Chart4(arg_lateralPlan_rProb >= 0.5F, 0.02F, 1.0F, 0.01F,
             &app_B.out_cond_kz, &app_DW.sf_Chart2_a);

  /* Chart: '<S95>/Chart1' incorporates:
   *  Constant: '<S103>/Constant'
   *  Constant: '<S95>/Constant6'
   *  Constant: '<S95>/Constant7'
   *  Constant: '<S95>/Constant8'
   *  Inport: '<Root>/lateralPlan_dProb'
   *  RelationalOperator: '<S103>/Compare'
   */
  app_Chart4(arg_lateralPlan_dProb >= 0.5F, 0.02F, 1.0F, 0.01F,
             &app_B.out_cond_iu, &app_DW.sf_Chart1_h);

  /* Chart: '<S96>/Chart7' incorporates:
   *  Constant: '<S109>/Constant'
   *  Constant: '<S96>/Constant17'
   *  Constant: '<S96>/Constant18'
   *  Constant: '<S96>/Constant19'
   *  RelationalOperator: '<S109>/Compare'
   */
  app_Chart4(VehCP_p_VrkPdlDrvrAppdPrs_sg < 10.0F, 0.02F, 1.0F, 0.1F,
             &app_B.out_cond_i, &app_DW.sf_Chart7);

  /* Chart: '<S96>/Chart4' incorporates:
   *  Constant: '<S96>/Constant6'
   *  Constant: '<S96>/Constant7'
   *  Constant: '<S96>/Constant8'
   */
  app_Chart4(VehCP_is_EngRun_bl, 0.02F, 1.0F, 0.01F, &app_B.out_cond_aq,
             &app_DW.sf_Chart4_i);

  /* Chart: '<S96>/Chart5' incorporates:
   *  Constant: '<S96>/Constant10'
   *  Constant: '<S96>/Constant11'
   *  Constant: '<S96>/Constant9'
   */
  app_Chart4(VehCP_is_CCSwStsOn_bl, 0.02F, 1.0F, 0.01F, &app_B.out_cond_a,
             &app_DW.sf_Chart5);

  /* Chart: '<S96>/Chart13' incorporates:
   *  Abs: '<S96>/Abs'
   *  Constant: '<S111>/Constant'
   *  Constant: '<S96>/Constant32'
   *  Constant: '<S96>/Constant33'
   *  Constant: '<S96>/Constant34'
   *  RelationalOperator: '<S111>/Compare'
   */
  app_Chart4((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg) < 2.5F, 0.02F, 1.0F,
             0.5F, &app_B.out_cond_c4, &app_DW.sf_Chart13);

  /* Logic: '<S39>/Logical Operator' incorporates:
   *  Logic: '<S95>/Logical Operator1'
   *  Logic: '<S95>/Logical Operator2'
   *  Logic: '<S96>/Logical Operator'
   */
  app_B.out_cond_kz = (((app_B.LogicalOperator1_l && app_B.out_cond_kz) ||
                        app_B.out_cond_iu) && (app_B.out_cond_i &&
    app_B.out_cond_aq && app_B.out_cond_a && app_B.out_cond_c4));

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   */
  app_B.LogicalOperator1_l = (VehCP_n_ChLKACtrlSts_u8 != 4);

  /* RelationalOperator: '<S92>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S92>/Delay Input1'
   *
   * Block description for '<S92>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_B.out_cond_iu = ((int32_T)VehCP_is_CCSwStsRsm_bl > (int32_T)
                       app_DW.DelayInput1_DSTATE_c);

  /* Chart: '<S94>/Chart1' incorporates:
   *  Delay: '<S94>/Delay'
   *  RelationalOperator: '<S93>/FixPt Relational Operator'
   *  UnitDelay: '<S93>/Delay Input1'
   *
   * Block description for '<S93>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (app_DW.is_active_c46_app == 0U) {
    app_DW.is_active_c46_app = 1U;
    app_DW.is_c46_app = app_IN_OFF_in;
    app_B.out_cond_i = false;
    app_DW.is_OFF = app_IN_Zero_j;
    app_DW.local_count = 0U;
  } else if (app_DW.is_c46_app == 1) {
    app_B.out_cond_i = false;
    if (((int32_T)VehCP_is_CCSwStsSet_bl > (int32_T)app_DW.DelayInput1_DSTATE_d)
        && VehCP_is_CCSwStsOn_bl) {
      app_DW.is_OFF = 0;
      app_DW.is_c46_app = app_IN_ON_g;
      app_B.out_cond_i = true;
    } else if (app_DW.is_OFF == 1) {
      if (app_DW.tm_count > 100) {
        app_DW.is_OFF = app_IN_Zero_j;
        app_DW.local_count = 0U;
      } else if ((app_DW.local_count == 2) && VehCP_is_CCSwStsOn_bl) {
        app_DW.is_OFF = 0;
        app_DW.is_c46_app = app_IN_ON_g;
        app_B.out_cond_i = true;
      } else if (app_B.out_cond_iu) {
        app_B.mod_data = app_DW.local_count + 1U;
        if (app_DW.local_count + 1U > 65535U) {
          app_B.mod_data = 65535U;
        }

        app_DW.local_count = (uint16_T)app_B.mod_data;
        app_DW.tm_count = 0U;
      } else {
        app_B.mod_data = app_DW.tm_count + 1U;
        if (app_DW.tm_count + 1U > 65535U) {
          app_B.mod_data = 65535U;
        }

        app_DW.tm_count = (uint16_T)app_B.mod_data;
      }
    } else {
      /* case IN_Zero: */
      if (app_B.out_cond_iu) {
        app_DW.is_OFF = app_IN_UP_g;
        app_DW.local_count = 1U;
        app_DW.tm_count = 0U;
      }
    }
  } else {
    /* case IN_ON: */
    app_B.out_cond_i = true;
    if (app_DW.Delay_DSTATE_lz || (!VehCP_is_CCSwStsOn_bl)) {
      app_DW.is_c46_app = app_IN_OFF_in;
      app_B.out_cond_i = false;
      app_DW.is_OFF = app_IN_Zero_j;
      app_DW.local_count = 0U;
    }
  }

  /* End of Chart: '<S94>/Chart1' */

  /* Chart: '<S39>/Chart' */
  if (app_DW.is_active_c45_app == 0U) {
    app_DW.is_active_c45_app = 1U;
    app_DW.is_c45_app = app_IN_OFF_in;
    Arb_is_LatCtrlActv_bl = false;
  } else {
    switch (app_DW.is_c45_app) {
     case app_IN_OFF_in:
      if (app_B.out_cond_i && app_B.out_cond_kz) {
        app_DW.is_c45_app = app_IN_Standby;
        Arb_is_LatCtrlActv_bl = false;
      } else {
        Arb_is_LatCtrlActv_bl = false;
      }
      break;

     case app_IN_ON_g:
      if (!app_B.out_cond_kz) {
        app_DW.is_c45_app = app_IN_OFF_in;
        Arb_is_LatCtrlActv_bl = false;
      } else if (!app_B.LogicalOperator1_l) {
        app_DW.is_c45_app = app_IN_Standby;
        Arb_is_LatCtrlActv_bl = false;
      } else {
        Arb_is_LatCtrlActv_bl = true;
      }
      break;

     default:
      /* case IN_Standby: */
      if (!app_B.out_cond_kz) {
        app_DW.is_c45_app = app_IN_OFF_in;
        Arb_is_LatCtrlActv_bl = false;
      } else if (app_B.LogicalOperator1_l) {
        app_DW.is_c45_app = app_IN_ON_g;
        Arb_is_LatCtrlActv_bl = true;
      } else {
        Arb_is_LatCtrlActv_bl = false;
      }
      break;
    }
  }

  /* End of Chart: '<S39>/Chart' */

  /* Gain: '<S358>/Gain1' incorporates:
   *  Gain: '<S112>/Gain7'
   *  Gain: '<S113>/Gain'
   *  Gain: '<S115>/Gain'
   */
  app_B.StrgWhlAngGrd_m = 0.277777791F * VehCP_V_VehSpdAvgDrvn_sg;

  /* Lookup_n-D: '<S380>/1-D Lookup Table' incorporates:
   *  Gain: '<S380>/Gain'
   */
  app_B.uDLookupTable = look1_iflf_binlx(3.6F * app_B.StrgWhlAngGrd_m,
    app_ConstP.pooled27, app_ConstP.uDLookupTable_tableData_o, 7U);

  /* Saturate: '<S113>/Saturation' */
  if (app_B.StrgWhlAngGrd_m > 100.0F) {
    /* Saturate: '<S390>/Saturation' */
    app_B.StrgWhlAng_n = 100.0F;
  } else if (app_B.StrgWhlAngGrd_m < 1.0F) {
    /* Saturate: '<S390>/Saturation' */
    app_B.StrgWhlAng_n = 1.0F;
  } else {
    /* Saturate: '<S390>/Saturation' */
    app_B.StrgWhlAng_n = app_B.StrgWhlAngGrd_m;
  }

  for (app_B.i = 0; app_B.i < 17; app_B.i++) {
    /* Gain: '<S40>/Gain2' incorporates:
     *  Inport: '<Root>/lateralPlan_yPts'
     */
    app_B.Gain2[app_B.i] = -arg_lateralPlan_yPts[app_B.i];

    /* Gain: '<S40>/Gain3' incorporates:
     *  Inport: '<Root>/lateralPlan_headPts'
     */
    app_B.Gain3[app_B.i] = -arg_lateralPlan_headPts[app_B.i];
  }

  /* Chart: '<S119>/Chart7' incorporates:
   *  Abs: '<S119>/Abs'
   *  Constant: '<S119>/Constant1'
   *  Constant: '<S119>/Constant11'
   *  Constant: '<S119>/Constant12'
   *  Constant: '<S168>/Constant'
   *  Inport: '<Root>/lateralPlan_pathCof_C1'
   *  RelationalOperator: '<S168>/Compare'
   */
  app_Chart4((real32_T)fabs(arg_lateralPlan_pathCof_C1) > 0.04F, 1.0F, 0.1F,
             0.02F, &app_B.out_cond_kz, &app_DW.sf_Chart7_g);

  /* Chart: '<S119>/Chart1' incorporates:
   *  Abs: '<S119>/Abs1'
   *  Constant: '<S119>/Constant2'
   *  Constant: '<S119>/Constant3'
   *  Constant: '<S119>/Constant4'
   *  Constant: '<S167>/Constant'
   *  Inport: '<Root>/lateralPlan_pathCof_C0'
   *  RelationalOperator: '<S167>/Compare'
   */
  app_Chart4((real32_T)fabs(arg_lateralPlan_pathCof_C0) > 0.5F, 1.0F, 0.1F,
             0.02F, &app_B.out_cond_iu, &app_DW.sf_Chart1_g);

  /* Chart: '<S119>/Chart2' incorporates:
   *  Abs: '<S119>/Abs2'
   *  Constant: '<S119>/Constant5'
   *  Constant: '<S119>/Constant6'
   *  Constant: '<S119>/Constant7'
   *  Constant: '<S169>/Constant'
   *  RelationalOperator: '<S169>/Compare'
   */
  app_Chart4((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg) < 1.0F, 1.0F, 0.1F,
             0.02F, &app_B.out_cond_i, &app_DW.sf_Chart2_g);

  /* Logic: '<S119>/Logical Operator3' incorporates:
   *  Logic: '<S119>/Logical Operator2'
   */
  app_B.out_cond_kz = ((app_B.out_cond_kz || app_B.out_cond_iu) &&
                       app_B.out_cond_i);

  /* Chart: '<S119>/Chart' incorporates:
   *  Constant: '<S119>/Constant10'
   *  Constant: '<S119>/Constant9'
   *  RelationalOperator: '<S171>/FixPt Relational Operator'
   *  UnitDelay: '<S171>/Delay Input1'
   *
   * Block description for '<S171>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (app_DW.is_active_c1_app == 0U) {
    app_DW.is_active_c1_app = 1U;
    app_DW.local_time_p = 0.0F;
    app_B.out_cond_iu = true;
  } else if (((int32_T)app_B.out_cond_kz > (int32_T)app_DW.DelayInput1_DSTATE_h)
             || ((app_DW.local_time_p > 0.1F) && app_B.out_cond_kz)) {
    app_DW.local_time_p = 0.0F;
    app_B.out_cond_iu = true;
  } else {
    app_B.out_cond_iu = false;
    if (app_B.out_cond_kz) {
      app_DW.local_time_p += 0.02F;
    } else {
      app_DW.local_time_p = 0.0F;
    }
  }

  /* End of Chart: '<S119>/Chart' */

  /* Gain: '<S112>/Gain7' */
  app_B.Gain5_h = app_B.StrgWhlAngGrd_m;

  /* Logic: '<S119>/Logical Operator1' incorporates:
   *  Constant: '<S166>/Constant'
   *  DataTypeConversion: '<S40>/Data Type Conversion'
   *  Logic: '<S119>/Logical Operator'
   *  RelationalOperator: '<S166>/Compare'
   *  RelationalOperator: '<S170>/FixPt Relational Operator'
   *  UnitDelay: '<S170>/Delay Input1'
   *
   * Block description for '<S170>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_B.out_cond_iu = (((Arb_is_LatCtrlActv_bl != app_DW.DelayInput1_DSTATE) ||
                        app_B.out_cond_iu) && (app_B.StrgWhlAngGrd_m >= 5.0F));

  /* Delay: '<S117>/Delay' incorporates:
   *  Gain: '<S117>/Gain3'
   *  Gain: '<S117>/Gain4'
   *  Gain: '<S117>/Gain5'
   *  Gain: '<S117>/Gain6'
   *  Inport: '<Root>/lateralPlan_pathCof_C0'
   *  Inport: '<Root>/lateralPlan_pathCof_C1'
   *  Inport: '<Root>/lateralPlan_pathCof_C2'
   *  Product: '<S117>/Product'
   *  Product: '<S117>/Product1'
   *  Product: '<S117>/Product2'
   *  Sum: '<S117>/Subtract'
   */
  if (app_B.out_cond_iu && (app_PrevZCX.Delay_Reset_ZCE != 1)) {
    app_DW.icLoad_i = 1U;
  }

  app_PrevZCX.Delay_Reset_ZCE = app_B.out_cond_iu;
  if (app_DW.icLoad_i != 0) {
    app_DW.Delay_DSTATE_n[0] = -arg_lateralPlan_pathCof_C0;
    app_DW.Delay_DSTATE_n[1] = -(arg_lateralPlan_pathCof_C1 *
      app_B.StrgWhlAngGrd_m);
    app_DW.Delay_DSTATE_n[2] = (0.0174532924F * VehCP_yr_VehDynYawRate_sg - 2.0F
      * arg_lateralPlan_pathCof_C2 * app_B.StrgWhlAngGrd_m) *
      app_B.StrgWhlAngGrd_m;
  }

  /* End of Delay: '<S117>/Delay' */

  /* Chart: '<S112>/Planning_Scheduler' incorporates:
   *  Constant: '<S112>/Constant'
   *  Constant: '<S112>/Constant4'
   */
  if (app_DW.is_active_c5_app == 0U) {
    app_DW.is_active_c5_app = 1U;
    app_B.plan_time = 0.0F;

    /* Outputs for Function Call SubSystem: '<S112>/Planner' */
    app_Planner(app_DW.Delay_DSTATE_n, app_B.cost_traj, &app_B.Planner);

    /* End of Outputs for SubSystem: '<S112>/Planner' */
  } else {
    app_B.plan_time += 0.02F;
    if ((app_B.plan_time >= 0.1F) || app_B.out_cond_iu) {
      /* Outputs for Function Call SubSystem: '<S112>/Planner' */
      app_Planner(app_DW.Delay_DSTATE_n, app_B.cost_traj, &app_B.Planner);

      /* End of Outputs for SubSystem: '<S112>/Planner' */
      app_B.plan_time = 0.0F;
    }
  }

  /* End of Chart: '<S112>/Planning_Scheduler' */

  /* Gain: '<S122>/Gain' */
  app_B.Add_pgy = 2.0F * app_B.cost_traj[3];
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    /* Sum: '<S178>/Add' incorporates:
     *  Constant: '<S112>/reference_timeseries'
     *  Product: '<S178>/Product'
     *  Product: '<S178>/Product1'
     *  Product: '<S178>/Product2'
     *  Product: '<S178>/Product3'
     *  Product: '<S178>/Product4'
     */
    app_B.Add_h[app_B.i] = ((((app_B.cost_traj[2] * app_ConstP.pooled29[app_B.i]
      + app_B.cost_traj[1]) + app_B.cost_traj[3] * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i]) + app_B.cost_traj[4] *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i]) + app_B.cost_traj[5] *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i]) +
      app_B.cost_traj[6] * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i];

    /* Product: '<S178>/Product4' incorporates:
     *  Constant: '<S112>/reference_timeseries'
     *  Product: '<S179>/Product'
     */
    app_B.Selector7_n[app_B.i] = app_B.Add_pgy * app_ConstP.pooled29[app_B.i];
  }

  /* Gain: '<S122>/Gain1' */
  app_B.Add_pgy = 3.0F * app_B.cost_traj[4];

  /* Product: '<S179>/Product1' incorporates:
   *  Constant: '<S112>/reference_timeseries'
   */
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    app_B.MatrixConcatenate4[app_B.i] = app_B.Add_pgy *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i];
  }

  /* End of Product: '<S179>/Product1' */

  /* Gain: '<S122>/Gain2' */
  app_B.Add_pgy = 4.0F * app_B.cost_traj[5];

  /* Product: '<S179>/Product2' incorporates:
   *  Constant: '<S112>/reference_timeseries'
   */
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    app_B.Product2_ea[app_B.i] = app_B.Add_pgy * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i];
  }

  /* End of Product: '<S179>/Product2' */

  /* Gain: '<S122>/Gain3' */
  app_B.Add_pgy = 5.0F * app_B.cost_traj[6];

  /* Sum: '<S179>/Add' */
  app_B.Ts = app_B.cost_traj[2];

  /* Saturate: '<S112>/Saturation' */
  if (app_B.StrgWhlAngGrd_m > 100.0F) {
    app_B.Gain5_h = 100.0F;
  } else {
    if (app_B.StrgWhlAngGrd_m < 1.0F) {
      app_B.Gain5_h = 1.0F;
    }
  }

  /* End of Saturate: '<S112>/Saturation' */
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    /* Sum: '<S179>/Add' incorporates:
     *  Constant: '<S112>/reference_timeseries'
     *  Product: '<S179>/Product3'
     */
    app_B.Subtract_i = app_B.Add_pgy * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i] * app_ConstP.pooled29[app_B.i] *
      app_ConstP.pooled29[app_B.i] + (((app_B.Ts + app_B.Selector7_n[app_B.i]) +
      app_B.MatrixConcatenate4[app_B.i]) + app_B.Product2_ea[app_B.i]);
    app_B.Selector7_n[app_B.i] = app_B.Subtract_i;

    /* Product: '<S112>/Divide' */
    app_B.Product2_ea[app_B.i] = app_B.Subtract_i / app_B.Gain5_h;
  }

  /* Chart: '<S113>/Chart' */
  app_B.s215_iter = (int32_T)(app_B.count + 1U);
  if (app_B.count + 1U > 255U) {
    app_B.s215_iter = 255;
  }

  app_B.count = (uint8_T)app_B.s215_iter;
  if (app_B.count > 2) {
    app_B.count = 0U;
  }

  /* End of Chart: '<S113>/Chart' */

  /* Outputs for Enabled SubSystem: '<S187>/mpc_controller' incorporates:
   *  EnablePort: '<S190>/Enable'
   */
  /* RelationalOperator: '<S185>/Compare' incorporates:
   *  Constant: '<S185>/Constant'
   */
  if (app_B.count == 2) {
    /* Lookup_n-D: '<S190>/1-D Lookup Table3' incorporates:
     *  Abs: '<S190>/Abs'
     */
    app_B.Add_op = look1_iflf_binlx((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg),
      app_ConstP.pooled23, app_ConstP.pooled22, 5U);

    /* S-Function (sfix_look1_dyn): '<S209>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S190>/reference_timeseries'
     *  Constant: '<S209>/t_pts'
     */
    /* Dynamic Look-Up Table Block: '<S209>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    {
      int_T i1;
      const real32_T *u0 = app_ConstP.pooled29;
      real32_T *y0 = &app_B.Selector7_n[0];
      for (i1=0; i1 < 30; i1++) {
        LookUp_real32_T_real32_T( &(y0[i1]), &app_B.Gain3[0], u0[i1],
          app_ConstP.t_pts_Value, 16U);
      }
    }

    for (app_B.i = 0; app_B.i < 30; app_B.i++) {
      /* Gain: '<S207>/Gain7' incorporates:
       *  Trigonometry: '<S207>/Atan'
       */
      app_B.Gain7[app_B.i] = -(real32_T)atan(app_B.Selector7_n[app_B.i]);
    }

    /* S-Function (sfix_look1_dyn): '<S209>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S190>/reference_timeseries'
     *  Constant: '<S209>/t_pts'
     */
    /* Dynamic Look-Up Table Block: '<S209>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    {
      int_T i1;
      const real32_T *u0 = app_ConstP.pooled29;
      real32_T *y0 = &app_B.MatrixConcatenate4[0];
      for (i1=0; i1 < 30; i1++) {
        LookUp_real32_T_real32_T( &(y0[i1]), &app_B.Gain2[0], u0[i1],
          app_ConstP.t_pts_Value, 16U);
      }
    }

    /* Outputs for Iterator SubSystem: '<S207>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S215>/For Iterator'
     */
    for (app_B.s215_iter = 0; app_B.s215_iter < 30; app_B.s215_iter++) {
      app_B.Ts = app_B.Gain7[app_B.s215_iter];

      /* Gain: '<S207>/Gain6' incorporates:
       *  Selector: '<S215>/Selector'
       */
      app_B.rtb_MatrixConcatenate4_p = -app_B.MatrixConcatenate4[app_B.s215_iter];

      /* Outputs for IfAction SubSystem: '<S217>/rotateThenMove' incorporates:
       *  ActionPort: '<S219>/Action Port'
       */
      /* If: '<S217>/If' incorporates:
       *  Assignment: '<S215>/Assignment'
       *  Constant: '<S215>/Constant1'
       *  Product: '<S219>/Product2'
       *  Product: '<S219>/Product3'
       *  Selector: '<S215>/Selector1'
       *  Sum: '<S219>/Add1'
       *  Sum: '<S219>/Add3'
       *  Trigonometry: '<S219>/Sin2'
       *  Trigonometry: '<S219>/Sin3'
       */
      app_B.Reshape3[app_B.s215_iter] = ((real32_T)cos(app_B.Ts) *
        app_B.Add_h[app_B.s215_iter] - 0.0F * (real32_T)sin(app_B.Ts)) -
        app_B.rtb_MatrixConcatenate4_p;

      /* End of Outputs for SubSystem: '<S217>/rotateThenMove' */

      /* Reshape: '<S207>/Reshape4' incorporates:
       *  Sum: '<S207>/Add'
       */
      app_B.Reshape4[app_B.s215_iter] = app_B.Product2_ea[app_B.s215_iter] +
        app_B.Selector7_n[app_B.s215_iter];
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.rtb_MatrixConcatenate4_p;
    }

    /* End of Outputs for SubSystem: '<S207>/For Iterator Subsystem' */

    /* Gain: '<S210>/Gain' incorporates:
     *  Gain: '<S207>/Gain6'
     *  Saturate: '<S113>/Saturation'
     *  Selector: '<S215>/Selector'
     */
    app_B.Add_pgy = 3.6F * app_B.StrgWhlAng_n;

    /* Lookup_n-D: '<S210>/1-D Lookup Table1' incorporates:
     *  Lookup_n-D: '<S210>/1-D Lookup Table2'
     *  Sum: '<S172>/Add'
     */
    app_B.Ts = look1_iflf_binlca(app_B.Add_pgy, app_ConstP.pooled34,
      app_ConstP.pooled33, 5U);

    /* Lookup_n-D: '<S210>/1-D Lookup Table' incorporates:
     *  Sum: '<S172>/Add'
     */
    app_B.Add_pgy = look1_iflf_binlca(app_B.Add_pgy, app_ConstP.pooled34,
      app_ConstP.uDLookupTable_tableData_f, 5U);

    /* Gain: '<S210>/Gain2' */
    app_B.Add_pgy *= 100.0F;

    /* Gain: '<S190>/degps2radps' */
    app_B.Gain5_h = 0.0174532924F * VehCP_yr_VehDynYawRate_sg;

    /* Delay: '<S190>/Delay' */
    if (Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_ha != 1)) {
      app_DW.icLoad_fm = 1U;
    }

    app_PrevZCX.Delay_Reset_ZCE_ha = Arb_is_LatCtrlActv_bl;
    if (app_DW.icLoad_fm != 0) {
      /* Sum: '<S190>/Sum' */
      app_DW.Delay_DSTATE_c = app_B.Gain5_h;
    }

    /* Sum: '<S208>/Add' incorporates:
     *  Constant: '<S208>/Constant'
     *  Delay: '<S190>/Delay'
     *  Product: '<S208>/Product'
     *  Product: '<S208>/Product1'
     *  Sum: '<S208>/Subtract'
     */
    app_B.Add_op = (1.0F - app_B.Add_op) * app_B.Gain5_h + app_DW.Delay_DSTATE_c
      * app_B.Add_op;

    /* MATLAB Function: '<S190>/MPC_LatController' incorporates:
     *  Constant: '<S190>/reference_timeseries'
     *  Gain: '<S210>/Gain3'
     *  Lookup_n-D: '<S210>/1-D Lookup Table1'
     *  Lookup_n-D: '<S210>/1-D Lookup Table2'
     *  Reshape: '<S207>/Reshape3'
     *  Reshape: '<S207>/Reshape4'
     *  Saturate: '<S113>/Saturation'
     */
    memset(&app_B.Q[0], 0, 8100U * sizeof(real32_T));
    memset(&app_B.M[0], 0, 270U * sizeof(real32_T));
    memset(&app_B.K[0], 0, 2700U * sizeof(real32_T));
    memset(&app_B.X_ref[0], 0, 90U * sizeof(real32_T));
    app_B.rtb_MatrixConcatenate4_f[2] = 0.0F;
    app_B.Gain7_o[0] = 0.0F;
    app_B.tmp_1[0] = 0.01F * app_B.Ts;
    app_B.tmp_1[3] = 0.0F;
    app_B.tmp_1[6] = 0.0F;
    app_B.tmp_1[1] = 0.0F;
    app_B.tmp_1[4] = app_B.Ts;
    app_B.tmp_1[7] = 0.0F;
    app_B.tmp_1[2] = 0.0F;
    app_B.tmp_1[5] = 0.0F;
    app_B.tmp_1[8] = 0.0F;
    for (app_B.i = 0; app_B.i < 30; app_B.i++) {
      if (app_B.i + 1 == 1) {
        app_B.Ts = 0.06F;
      } else {
        app_B.Ts = app_ConstP.pooled29[app_B.i] - app_ConstP.pooled29[app_B.i -
          1];
      }

      app_B.Subtract_i = app_B.Reshape4[app_B.i];
      app_B.g_tmp = app_B.i * 3;
      app_B.h_tmp = (app_B.i + 1) * 3;
      if (app_B.g_tmp + 1 > app_B.h_tmp) {
        app_B.l = 0;
        app_B.s215_iter = 0;
      } else {
        app_B.l = app_B.g_tmp;
        app_B.s215_iter = app_B.h_tmp;
      }

      app_B.rtb_MatrixConcatenate4_f[0] = app_B.Reshape3[app_B.i];
      app_B.rtb_MatrixConcatenate4_f[1] = app_B.Subtract_i;
      app_B.loop_ub = app_B.s215_iter - app_B.l;
      for (app_B.s215_iter = 0; app_B.s215_iter < app_B.loop_ub; app_B.s215_iter
           ++) {
        app_B.X_ref[app_B.l + app_B.s215_iter] =
          app_B.rtb_MatrixConcatenate4_f[app_B.s215_iter];
      }

      app_B.Gain7_o[1] = app_B.Ts;
      app_B.tmp_2[0] = 1.0F;
      app_B.tmp_2[3] = app_B.StrgWhlAng_n * (real32_T)cos(app_B.Subtract_i) *
        app_B.Ts;
      app_B.tmp_2[1] = 0.0F;
      app_B.tmp_2[4] = 1.0F;
      for (app_B.s215_iter = 0; app_B.s215_iter < 2; app_B.s215_iter++) {
        app_B.tmp_2[app_B.s215_iter + 6] = app_B.Gain7_o[app_B.s215_iter];
      }

      app_B.tmp_2[2] = 0.0F;
      app_B.tmp_2[5] = 0.0F;
      app_B.tmp_2[8] = 1.0F;
      for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
        app_B.l = app_B.i + 90 * app_B.s215_iter;
        app_B.A_set[app_B.l] = app_B.tmp_2[3 * app_B.s215_iter];
        app_B.A_set[app_B.l + 30] = app_B.tmp_2[3 * app_B.s215_iter + 1];
        app_B.A_set[app_B.l + 60] = app_B.tmp_2[3 * app_B.s215_iter + 2];
        app_B.B_set[app_B.i + 30 * app_B.s215_iter] = y[app_B.s215_iter];
      }

      if (app_B.g_tmp + 1 > app_B.h_tmp) {
        app_B.l = 0;
        app_B.s215_iter = 0;
        app_B.g_tmp = 0;
        app_B.h_tmp = 0;
      } else {
        app_B.l = app_B.g_tmp;
        app_B.s215_iter = app_B.h_tmp;
      }

      app_B.loop_ub = app_B.s215_iter - app_B.l;
      app_B.s_idx_1 = app_B.h_tmp - app_B.g_tmp;
      for (app_B.s215_iter = 0; app_B.s215_iter < app_B.s_idx_1; app_B.s215_iter
           ++) {
        for (app_B.h_tmp = 0; app_B.h_tmp < app_B.loop_ub; app_B.h_tmp++) {
          app_B.Q[(app_B.l + app_B.h_tmp) + 90 * (app_B.g_tmp + app_B.s215_iter)]
            = app_B.tmp_1[app_B.loop_ub * app_B.s215_iter + app_B.h_tmp];
        }
      }
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.b_I[app_B.s215_iter] = 0;
    }

    app_B.b_I[0] = 1;
    app_B.b_I[4] = 1;
    app_B.b_I[8] = 1;
    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.tmp_1[app_B.s215_iter] = app_B.b_I[app_B.s215_iter];
      app_B.b_I[app_B.s215_iter] = 0;
    }

    app_B.b_I[0] = 1;
    app_B.b_I[4] = 1;
    app_B.b_I[8] = 1;
    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.tmp_2[app_B.s215_iter] = app_B.b_I[app_B.s215_iter];
    }

    for (app_B.i = 0; app_B.i < 30; app_B.i++) {
      for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
        for (app_B.h_tmp = 0; app_B.h_tmp < 3; app_B.h_tmp++) {
          app_B.l = app_B.s215_iter + 3 * app_B.h_tmp;
          app_B.A_set_b[app_B.l] = 0.0F;
          app_B.g_tmp = 30 * app_B.s215_iter + app_B.i;
          app_B.A_set_b[app_B.l] += app_B.A_set[app_B.g_tmp] * app_B.tmp_1[3 *
            app_B.h_tmp];
          app_B.A_set_b[app_B.l] += app_B.A_set[app_B.g_tmp + 90] * app_B.tmp_1
            [3 * app_B.h_tmp + 1];
          app_B.A_set_b[app_B.l] += app_B.A_set[app_B.g_tmp + 180] *
            app_B.tmp_1[3 * app_B.h_tmp + 2];
        }
      }

      for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
        app_B.tmp_1[app_B.s215_iter] = app_B.A_set_b[app_B.s215_iter];
      }

      app_B.g_tmp = app_B.i * 3;
      app_B.loop_ub = (app_B.i + 1) * 3;
      if (app_B.g_tmp + 1 > app_B.loop_ub) {
        app_B.l = 0;
        app_B.s215_iter = 0;
      } else {
        app_B.l = app_B.g_tmp;
        app_B.s215_iter = app_B.loop_ub;
      }

      app_B.s_idx_1 = app_B.s215_iter - app_B.l;
      for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
        for (app_B.h_tmp = 0; app_B.h_tmp < app_B.s_idx_1; app_B.h_tmp++) {
          app_B.M[(app_B.l + app_B.h_tmp) + 90 * app_B.s215_iter] =
            app_B.tmp_1[app_B.s_idx_1 * app_B.s215_iter + app_B.h_tmp];
        }
      }

      app_B.l = (int32_T)(((-1.0 - ((real_T)app_B.i + 1.0)) + 1.0) / -1.0);
      if (0 <= app_B.l - 1) {
        if (app_B.g_tmp + 1 > app_B.loop_ub) {
          app_B.s337_iter = 0;
          app_B.loop_ub = 0;
        } else {
          app_B.s337_iter = app_B.g_tmp;
        }

        app_B.loop_ub_l = app_B.loop_ub - app_B.s337_iter;
      }

      app_B.loop_ub = 0;
      while (app_B.loop_ub <= app_B.l - 1) {
        app_B.g_tmp = (app_B.i - app_B.loop_ub) + 1;
        if (app_B.i + 1 == app_B.g_tmp) {
          for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
            app_B.b_I[app_B.s215_iter] = 0;
          }

          app_B.b_I[0] = 1;
          app_B.b_I[4] = 1;
          app_B.b_I[8] = 1;
          for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
            app_B.tmp_2[app_B.s215_iter] = app_B.b_I[app_B.s215_iter];
          }
        } else {
          for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
            for (app_B.h_tmp = 0; app_B.h_tmp < 3; app_B.h_tmp++) {
              app_B.s_idx_1 = app_B.s215_iter + 3 * app_B.h_tmp;
              app_B.A_set_b[app_B.s_idx_1] = 0.0F;
              app_B.tmp_2_tmp = 90 * app_B.h_tmp + app_B.g_tmp;
              app_B.A_set_b[app_B.s_idx_1] += app_B.A_set[app_B.tmp_2_tmp] *
                app_B.tmp_2[app_B.s215_iter];
              app_B.A_set_b[app_B.s_idx_1] += app_B.A_set[app_B.tmp_2_tmp + 30] *
                app_B.tmp_2[app_B.s215_iter + 3];
              app_B.A_set_b[app_B.s_idx_1] += app_B.A_set[app_B.tmp_2_tmp + 60] *
                app_B.tmp_2[app_B.s215_iter + 6];
            }
          }

          for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
            app_B.tmp_2[app_B.s215_iter] = app_B.A_set_b[app_B.s215_iter];
          }
        }

        for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
          app_B.rtb_MatrixConcatenate4_f[app_B.s215_iter] =
            app_B.tmp_2[app_B.s215_iter + 6] * (real32_T)app_B.B_set[app_B.g_tmp
            + 59] + (app_B.tmp_2[app_B.s215_iter + 3] * (real32_T)
                     app_B.B_set[app_B.g_tmp + 29] + (real32_T)
                     app_B.B_set[app_B.g_tmp - 1] * app_B.tmp_2[app_B.s215_iter]);
        }

        for (app_B.s215_iter = 0; app_B.s215_iter < app_B.loop_ub_l;
             app_B.s215_iter++) {
          app_B.K[(app_B.s337_iter + app_B.s215_iter) + 90 * (app_B.g_tmp - 1)] =
            app_B.rtb_MatrixConcatenate4_f[app_B.s215_iter];
        }

        app_B.loop_ub++;
      }
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 30; app_B.s215_iter++) {
      for (app_B.h_tmp = 0; app_B.h_tmp < 90; app_B.h_tmp++) {
        app_B.loop_ub_l = app_B.s215_iter + 30 * app_B.h_tmp;
        app_B.K_m[app_B.loop_ub_l] = 0.0F;
        for (app_B.s337_iter = 0; app_B.s337_iter < 90; app_B.s337_iter++) {
          app_B.K_m[app_B.loop_ub_l] += app_B.K[90 * app_B.s215_iter +
            app_B.s337_iter] * app_B.Q[90 * app_B.h_tmp + app_B.s337_iter];
        }
      }

      for (app_B.h_tmp = 0; app_B.h_tmp < 30; app_B.h_tmp++) {
        app_B.Ts = 0.0F;
        for (app_B.s337_iter = 0; app_B.s337_iter < 90; app_B.s337_iter++) {
          app_B.Ts += app_B.K_m[30 * app_B.s337_iter + app_B.s215_iter] *
            app_B.K[90 * app_B.h_tmp + app_B.s337_iter];
        }

        app_B.loop_ub_l = 30 * app_B.h_tmp + app_B.s215_iter;
        app_B.K_c[app_B.loop_ub_l] = (real32_T)ab[app_B.loop_ub_l] *
          app_B.Add_pgy + app_B.Ts;
      }
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 900; app_B.s215_iter++) {
      /* S-Function (sdsplu2): '<S211>/LU Factorization' */
      app_B.LUFactorization_o1[app_B.s215_iter] = 2.0F *
        app_B.K_c[app_B.s215_iter];
    }

    /* S-Function (sdsplu2): '<S211>/LU Factorization' */
    app_LUf_boolean_Tint32_Treal32_T(&app_B.LUFactorization_o1[0],
      &app_B.LUFactorization_o2[0], 30, &app_B.Compare_gw);

    /* Logic: '<S211>/Logical Operator' */
    app_B.Compare_gw = !app_B.Compare_gw;

    /* DataTypeConversion: '<S211>/Data Type Conversion' */
    app_B.DataTypeConversion = app_B.Compare_gw;

    /* If: '<S211>/If' incorporates:
     *  Constant: '<S205>/Constant'
     *  Inport: '<S213>/In1'
     *  Merge: '<S211>/Merge'
     */
    if (app_B.DataTypeConversion != 0) {
      /* Outputs for IfAction SubSystem: '<S211>/Subsystem' incorporates:
       *  ActionPort: '<S212>/Action Port'
       */
      /* S-Function (sdspperm2): '<S212>/Permute Matrix' incorporates:
       *  Constant: '<S205>/Constant'
       *  S-Function (sdspfbsub2): '<S212>/Backward Substitution'
       */
      for (app_B.s215_iter = 0; app_B.s215_iter < 30; app_B.s215_iter++) {
        app_B.loop_ub_l = (int32_T)(real32_T)floor
          (app_B.LUFactorization_o2[app_B.s215_iter]) - 1;
        if (app_B.loop_ub_l < 0) {
          app_B.loop_ub_l = 0;
        } else {
          if (app_B.loop_ub_l >= 30) {
            app_B.loop_ub_l = 29;
          }
        }

        for (app_B.s337_iter = 0; app_B.s337_iter < 30; app_B.s337_iter++) {
          app_B.BackwardSubstitution[30 * app_B.s337_iter + app_B.s215_iter] =
            app_ConstP.Constant_Value_l[30 * app_B.s337_iter + app_B.loop_ub_l];
        }
      }

      /* End of S-Function (sdspperm2): '<S212>/Permute Matrix' */

      /* S-Function (sdspfbsub2): '<S212>/Forward Substitution' incorporates:
       *  S-Function (sdspfbsub2): '<S212>/Backward Substitution'
       *  S-Function (sdsplu2): '<S211>/LU Factorization'
       */
      for (app_B.g_tmp = 0; app_B.g_tmp < 30; app_B.g_tmp++) {
        app_B.s337_iter = app_B.g_tmp * 30;
        for (app_B.i = 0; app_B.i < 29; app_B.i++) {
          app_B.loop_ub_l = app_B.i + 1;
          app_B.h_tmp = (app_B.s337_iter + app_B.i) + 1;
          app_B.Ts = app_B.BackwardSubstitution[app_B.h_tmp];
          app_B.s215_iter = 0;
          while (app_B.s215_iter < app_B.i + 1) {
            app_B.Ts -= app_B.BackwardSubstitution[app_B.s337_iter +
              app_B.s215_iter] * app_B.LUFactorization_o1[app_B.loop_ub_l];
            app_B.loop_ub_l += 30;
            app_B.s215_iter++;
          }

          app_B.BackwardSubstitution[app_B.h_tmp] = app_B.Ts;
        }
      }

      /* End of S-Function (sdspfbsub2): '<S212>/Forward Substitution' */

      /* S-Function (sdspfbsub2): '<S212>/Backward Substitution' incorporates:
       *  S-Function (sdsplu2): '<S211>/LU Factorization'
       */
      for (app_B.g_tmp = 0; app_B.g_tmp < 30; app_B.g_tmp++) {
        app_B.s337_iter = app_B.g_tmp * 30;
        app_B.BackwardSubstitution[app_B.s337_iter + 29] /=
          app_B.LUFactorization_o1[899];
        for (app_B.i = 28; app_B.i >= 0; app_B.i--) {
          app_B.loop_ub_l = app_B.i + 870;
          app_B.h_tmp = app_B.s337_iter + app_B.i;
          app_B.Ts = app_B.BackwardSubstitution[app_B.h_tmp];
          app_B.s215_iter = 29;
          while (app_B.s215_iter > app_B.i) {
            app_B.Ts -= app_B.BackwardSubstitution[app_B.s337_iter +
              app_B.s215_iter] * app_B.LUFactorization_o1[app_B.loop_ub_l];
            app_B.loop_ub_l -= 30;
            app_B.s215_iter--;
          }

          app_B.BackwardSubstitution[app_B.h_tmp] = app_B.Ts /
            app_B.LUFactorization_o1[app_B.loop_ub_l];
        }
      }

      /* End of S-Function (sdspfbsub2): '<S212>/Backward Substitution' */
      /* End of Outputs for SubSystem: '<S211>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S211>/Subsystem1' incorporates:
       *  ActionPort: '<S213>/Action Port'
       */
      memcpy(&app_B.BackwardSubstitution[0], &app_ConstP.Constant_Value_l[0],
             900U * sizeof(real32_T));

      /* End of Outputs for SubSystem: '<S211>/Subsystem1' */
    }

    /* End of If: '<S211>/If' */

    /* MATLAB Function: '<S190>/MPC_LatController' */
    for (app_B.s215_iter = 0; app_B.s215_iter < 90; app_B.s215_iter++) {
      app_B.fv[app_B.s215_iter] = (app_B.M[app_B.s215_iter + 180] * app_B.Add_op
        - app_B.X_ref[app_B.s215_iter]) * 2.0F;
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 90; app_B.s215_iter++) {
      app_B.X_ref[app_B.s215_iter] = 0.0F;
      for (app_B.h_tmp = 0; app_B.h_tmp < 90; app_B.h_tmp++) {
        app_B.X_ref[app_B.s215_iter] += app_B.Q[90 * app_B.s215_iter +
          app_B.h_tmp] * app_B.fv[app_B.h_tmp];
      }
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 30; app_B.s215_iter++) {
      app_B.Add_h[app_B.s215_iter] = 0.0F;
      for (app_B.h_tmp = 0; app_B.h_tmp < 90; app_B.h_tmp++) {
        app_B.Add_h[app_B.s215_iter] += app_B.K[90 * app_B.s215_iter +
          app_B.h_tmp] * app_B.X_ref[app_B.h_tmp];
      }

      /* Gain: '<S190>/Gain1' incorporates:
       *  Selector: '<S226>/Selector7'
       */
      app_B.Selector7_n[app_B.s215_iter] = -app_B.Add_h[app_B.s215_iter];
    }

    /* Product: '<S190>/Product' incorporates:
     *  Merge: '<S211>/Merge'
     *  Selector: '<S226>/Selector7'
     */
    for (app_B.s215_iter = 0; app_B.s215_iter < 30; app_B.s215_iter++) {
      app_B.MatrixConcatenate4[app_B.s215_iter] = 0.0F;
      for (app_B.h_tmp = 0; app_B.h_tmp < 30; app_B.h_tmp++) {
        app_B.MatrixConcatenate4[app_B.s215_iter] += app_B.BackwardSubstitution
          [30 * app_B.h_tmp + app_B.s215_iter] * app_B.Selector7_n[app_B.h_tmp];
      }
    }

    /* End of Product: '<S190>/Product' */

    /* Sum: '<S190>/Add5' */
    app_B.Gain5_h = ((((app_B.MatrixConcatenate4[0] + app_B.MatrixConcatenate4[1])
                       + app_B.MatrixConcatenate4[2]) +
                      app_B.MatrixConcatenate4[3]) + app_B.MatrixConcatenate4[4])
      + app_B.MatrixConcatenate4[5];

    /* Saturate: '<S190>/Saturation' */
    if (app_B.Gain5_h > 0.01F) {
      app_B.Gain5_h = 0.01F;
    } else {
      if (app_B.Gain5_h < -0.01F) {
        app_B.Gain5_h = -0.01F;
      }
    }

    /* End of Saturate: '<S190>/Saturation' */

    /* Sum: '<S190>/Sum' */
    app_DW.Delay_DSTATE_c = app_B.Gain5_h + app_B.Add_op;

    /* Gain: '<S190>/radps2degps' */
    app_B.radps2degps = 57.2957802F * app_DW.Delay_DSTATE_c;

    /* Saturate: '<S209>/Saturation' incorporates:
     *  Saturate: '<S113>/Saturation'
     */
    if (app_B.StrgWhlAng_n < 5.0F) {
      app_B.Add_op = 5.0F;
    } else {
      app_B.Add_op = app_B.StrgWhlAng_n;
    }

    /* End of Saturate: '<S209>/Saturation' */

    /* Product: '<S209>/Product' incorporates:
     *  Constant: '<S209>/t_pts'
     */
    for (app_B.i = 0; app_B.i < 17; app_B.i++) {
      app_B.Gain3[app_B.i] = app_B.Add_op * app_ConstP.t_pts_Value[app_B.i];
    }

    /* End of Product: '<S209>/Product' */

    /* MinMax: '<S220>/MinMax1' */
    app_B.Ts = app_B.Gain3[0];

    /* MinMax: '<S220>/MinMax' */
    app_B.Add_op = app_B.Gain3[0];
    for (app_B.s215_iter = 0; app_B.s215_iter < 16; app_B.s215_iter++) {
      /* MinMax: '<S220>/MinMax1' incorporates:
       *  MinMax: '<S220>/MinMax'
       */
      app_B.Add_pgy = app_B.Gain3[app_B.s215_iter + 1];
      if (app_B.Ts <= app_B.Add_pgy) {
        app_B.Ts = app_B.Add_pgy;
      }

      /* MinMax: '<S220>/MinMax' */
      if (app_B.Add_op >= app_B.Add_pgy) {
        app_B.Add_op = app_B.Add_pgy;
      }
    }

    /* Gain: '<S220>/Gain' incorporates:
     *  MinMax: '<S220>/MinMax'
     *  MinMax: '<S220>/MinMax1'
     *  Sum: '<S220>/Add'
     */
    app_B.Add_pgy = (app_B.Ts + app_B.Add_op) * 0.5F;

    /* Gain: '<S220>/Gain1' incorporates:
     *  MinMax: '<S220>/MinMax'
     *  MinMax: '<S220>/MinMax1'
     *  Sum: '<S220>/Add1'
     */
    app_B.Add_op = (app_B.Ts - app_B.Add_op) * 0.5F;

    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S220>/Constant'
     *  Constant: '<S220>/Constant2'
     *  RelationalOperator: '<S220>/Relational Operator'
     */
    if (app_B.Add_op < 0.1F) {
      app_B.Add_op = 1.0F;
    }

    /* End of Switch: '<S220>/Switch' */

    /* Sum: '<S220>/Sum of Elements' */
    app_B.Ts = -0.0F;

    /* Sum: '<S220>/Sum of Elements1' */
    app_B.Gain5_h = -0.0F;

    /* Sum: '<S220>/Sum of Elements2' */
    app_B.Product2_ig = -0.0F;

    /* Sum: '<S220>/Sum of Elements3' */
    app_B.Add_mm = -0.0F;

    /* Sum: '<S220>/Sum of Elements4' */
    app_B.Product_fp = -0.0F;

    /* Sum: '<S220>/Sum of Elements5' */
    app_B.Product_ly = -0.0F;

    /* Outputs for Atomic SubSystem: '<S220>/If Action Subsystem' */
    for (app_B.i = 0; app_B.i < 17; app_B.i++) {
      app_B.Subtract_i = (app_B.Gain3[app_B.i] - app_B.Add_pgy) / app_B.Add_op;

      /* Sum: '<S220>/Sum of Elements' incorporates:
       *  Product: '<S227>/Divide'
       *  Sum: '<S227>/Subtract'
       */
      app_B.Ts += app_B.Subtract_i;

      /* Product: '<S220>/Product' incorporates:
       *  Product: '<S220>/Product1'
       *  Product: '<S220>/Product5'
       */
      app_B.Selector1 = app_B.Subtract_i * app_B.Subtract_i;

      /* Sum: '<S220>/Sum of Elements1' */
      app_B.Gain5_h += app_B.Selector1;

      /* Product: '<S220>/Product1' incorporates:
       *  Product: '<S220>/Product2'
       *  Product: '<S220>/Product6'
       */
      app_B.Subtract_a = app_B.Selector1 * app_B.Subtract_i;

      /* Sum: '<S220>/Sum of Elements2' */
      app_B.Product2_ig += app_B.Subtract_a;

      /* Product: '<S220>/Product2' incorporates:
       *  Product: '<S220>/Product3'
       */
      app_B.Selector_o = app_B.Subtract_a * app_B.Subtract_i;

      /* Sum: '<S220>/Sum of Elements3' */
      app_B.Add_mm += app_B.Selector_o;
      app_B.Selector_o *= app_B.Subtract_i;

      /* Sum: '<S220>/Sum of Elements4' incorporates:
       *  Product: '<S220>/Product3'
       */
      app_B.Product_fp += app_B.Selector_o;
      app_B.Selector_o *= app_B.Subtract_i;

      /* Sum: '<S220>/Sum of Elements5' incorporates:
       *  Product: '<S220>/Product4'
       */
      app_B.Product_ly += app_B.Selector_o;
      app_B.Gain3[app_B.i] = app_B.Subtract_i;
      app_B.Product5_l[app_B.i] = app_B.Selector1;
      app_B.Product6_l[app_B.i] = app_B.Subtract_a;
    }

    /* End of Outputs for SubSystem: '<S220>/If Action Subsystem' */

    /* Concatenate: '<S220>/Matrix Concatenate' incorporates:
     *  Product: '<S220>/Product'
     *  Product: '<S220>/Product1'
     *  Product: '<S220>/Product3'
     *  Product: '<S220>/Product4'
     *  Product: '<S227>/Divide'
     *  Reshape: '<S220>/Reshape2'
     *  Sum: '<S220>/Sum of Elements'
     *  Sum: '<S220>/Sum of Elements1'
     *  Sum: '<S220>/Sum of Elements2'
     *  Sum: '<S220>/Sum of Elements3'
     *  Sum: '<S220>/Sum of Elements4'
     *  Sum: '<S220>/Sum of Elements5'
     *  Sum: '<S227>/Subtract'
     */
    app_B.rtb_Selector6_c[0] = app_ConstB.DataTypeConversion_g;
    app_B.rtb_Selector6_c[4] = app_B.Ts;
    app_B.rtb_Selector6_c[8] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[12] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[1] = app_B.Ts;
    app_B.rtb_Selector6_c[5] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[9] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[13] = app_B.Add_mm;
    app_B.rtb_Selector6_c[2] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[6] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[10] = app_B.Add_mm;
    app_B.rtb_Selector6_c[14] = app_B.Product_fp;
    app_B.rtb_Selector6_c[3] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[7] = app_B.Add_mm;
    app_B.rtb_Selector6_c[11] = app_B.Product_fp;
    app_B.rtb_Selector6_c[15] = app_B.Product_ly;
    for (app_B.s215_iter = 0; app_B.s215_iter < 16; app_B.s215_iter++) {
      app_B.rtb_MatrixConcatenate4_p = app_B.rtb_Selector6_c[app_B.s215_iter];

      /* Selector: '<S222>/Selector4' */
      app_B.rtb_MatrixConcatenate4_k[app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_p;
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.rtb_MatrixConcatenate4_p;
    }

    /* End of Concatenate: '<S220>/Matrix Concatenate' */

    /* Selector: '<S222>/Selector4' */
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = (app_B.s215_iter + 1) << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* Selector: '<S230>/Selector' */
    app_B.Selector_o = app_B.Selector7_n[0];

    /* Sum: '<S234>/Subtract' incorporates:
     *  Product: '<S234>/Product'
     *  Product: '<S234>/Product1'
     *  Selector: '<S230>/Selector4'
     *  Selector: '<S230>/Selector5'
     *  Selector: '<S230>/Selector7'
     *  Selector: '<S230>/Selector8'
     */
    app_B.Subtract_i = app_B.Selector7_n[4] * app_B.Selector7_n[8] -
      app_B.Selector7_n[7] * app_B.Selector7_n[5];

    /* Selector: '<S230>/Selector1' */
    app_B.Selector1 = app_B.Selector7_n[3];

    /* Sum: '<S235>/Subtract' incorporates:
     *  Product: '<S235>/Product'
     *  Product: '<S235>/Product1'
     *  Selector: '<S230>/Selector3'
     *  Selector: '<S230>/Selector5'
     *  Selector: '<S230>/Selector6'
     *  Selector: '<S230>/Selector8'
     */
    app_B.Subtract_a = app_B.Selector7_n[7] * app_B.Selector7_n[2] -
      app_B.Selector7_n[1] * app_B.Selector7_n[8];

    /* Selector: '<S230>/Selector2' */
    app_B.Selector2 = app_B.Selector7_n[6];

    /* Sum: '<S236>/Subtract' incorporates:
     *  Product: '<S236>/Product'
     *  Product: '<S236>/Product1'
     *  Selector: '<S230>/Selector3'
     *  Selector: '<S230>/Selector4'
     *  Selector: '<S230>/Selector6'
     *  Selector: '<S230>/Selector7'
     */
    app_B.Subtract_m = app_B.Selector7_n[1] * app_B.Selector7_n[5] -
      app_B.Selector7_n[4] * app_B.Selector7_n[2];

    /* Selector: '<S222>/Selector5' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S222>/Selector5' */

    /* Product: '<S231>/Product' incorporates:
     *  Product: '<S237>/Product'
     *  Product: '<S237>/Product1'
     *  Selector: '<S231>/Selector'
     *  Selector: '<S231>/Selector4'
     *  Selector: '<S231>/Selector5'
     *  Selector: '<S231>/Selector7'
     *  Selector: '<S231>/Selector8'
     *  Sum: '<S237>/Subtract'
     */
    app_B.Product_hs = (app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                        app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
      app_B.Selector7_n[0];

    /* Product: '<S231>/Product1' incorporates:
     *  Product: '<S238>/Product'
     *  Product: '<S238>/Product1'
     *  Selector: '<S231>/Selector1'
     *  Selector: '<S231>/Selector3'
     *  Selector: '<S231>/Selector5'
     *  Selector: '<S231>/Selector6'
     *  Selector: '<S231>/Selector8'
     *  Sum: '<S238>/Subtract'
     */
    app_B.Product1_j3 = (app_B.Selector7_n[7] * app_B.Selector7_n[2] -
                         app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
      app_B.Selector7_n[3];

    /* Product: '<S231>/Product2' incorporates:
     *  Product: '<S239>/Product'
     *  Product: '<S239>/Product1'
     *  Selector: '<S231>/Selector2'
     *  Selector: '<S231>/Selector3'
     *  Selector: '<S231>/Selector4'
     *  Selector: '<S231>/Selector6'
     *  Selector: '<S231>/Selector7'
     *  Sum: '<S239>/Subtract'
     */
    app_B.Product2_ah = (app_B.Selector7_n[1] * app_B.Selector7_n[5] -
                         app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Selector: '<S222>/Selector6' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp_0[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S222>/Selector6' */

    /* Selector: '<S232>/Selector' */
    app_B.Selector_i = app_B.Selector7_n[0];

    /* Sum: '<S240>/Subtract' incorporates:
     *  Product: '<S240>/Product'
     *  Product: '<S240>/Product1'
     *  Selector: '<S232>/Selector4'
     *  Selector: '<S232>/Selector5'
     *  Selector: '<S232>/Selector7'
     *  Selector: '<S232>/Selector8'
     */
    app_B.Subtract_md = app_B.Selector7_n[4] * app_B.Selector7_n[8] -
      app_B.Selector7_n[7] * app_B.Selector7_n[5];

    /* Selector: '<S232>/Selector1' */
    app_B.Selector1_h = app_B.Selector7_n[3];

    /* Sum: '<S241>/Subtract' incorporates:
     *  Product: '<S241>/Product'
     *  Product: '<S241>/Product1'
     *  Selector: '<S232>/Selector3'
     *  Selector: '<S232>/Selector5'
     *  Selector: '<S232>/Selector6'
     *  Selector: '<S232>/Selector8'
     */
    app_B.Subtract_jn = app_B.Selector7_n[7] * app_B.Selector7_n[2] -
      app_B.Selector7_n[1] * app_B.Selector7_n[8];

    /* Selector: '<S232>/Selector2' */
    app_B.Selector2_d = app_B.Selector7_n[6];

    /* Sum: '<S242>/Subtract' incorporates:
     *  Product: '<S242>/Product'
     *  Product: '<S242>/Product1'
     *  Selector: '<S232>/Selector3'
     *  Selector: '<S232>/Selector4'
     *  Selector: '<S232>/Selector6'
     *  Selector: '<S232>/Selector7'
     */
    app_B.Subtract_je = app_B.Selector7_n[1] * app_B.Selector7_n[5] -
      app_B.Selector7_n[4] * app_B.Selector7_n[2];

    /* Selector: '<S222>/Selector7' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = app_B.s215_iter << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S222>/Selector7' */

    /* Sum: '<S222>/Add' incorporates:
     *  Gain: '<S222>/Gain'
     *  Gain: '<S222>/Gain1'
     *  Product: '<S222>/Product'
     *  Product: '<S222>/Product1'
     *  Product: '<S222>/Product2'
     *  Product: '<S222>/Product3'
     *  Product: '<S230>/Product'
     *  Product: '<S230>/Product1'
     *  Product: '<S230>/Product2'
     *  Product: '<S232>/Product'
     *  Product: '<S232>/Product1'
     *  Product: '<S232>/Product2'
     *  Product: '<S233>/Product'
     *  Product: '<S233>/Product1'
     *  Product: '<S233>/Product2'
     *  Product: '<S243>/Product'
     *  Product: '<S243>/Product1'
     *  Product: '<S244>/Product'
     *  Product: '<S244>/Product1'
     *  Product: '<S245>/Product'
     *  Product: '<S245>/Product1'
     *  Selector: '<S222>/Selector'
     *  Selector: '<S222>/Selector1'
     *  Selector: '<S222>/Selector2'
     *  Selector: '<S222>/Selector3'
     *  Selector: '<S233>/Selector'
     *  Selector: '<S233>/Selector1'
     *  Selector: '<S233>/Selector2'
     *  Selector: '<S233>/Selector3'
     *  Selector: '<S233>/Selector4'
     *  Selector: '<S233>/Selector5'
     *  Selector: '<S233>/Selector6'
     *  Selector: '<S233>/Selector7'
     *  Selector: '<S233>/Selector8'
     *  Sum: '<S230>/Add'
     *  Sum: '<S231>/Add'
     *  Sum: '<S232>/Add'
     *  Sum: '<S233>/Add'
     *  Sum: '<S243>/Subtract'
     *  Sum: '<S244>/Subtract'
     *  Sum: '<S245>/Subtract'
     */
    app_B.Selector_o = ((((app_B.Selector_o * app_B.Subtract_i + app_B.Selector1
      * app_B.Subtract_a) + app_B.Selector2 * app_B.Subtract_m) *
                         app_B.MatrixConcatenate4[0] + -(((app_B.Product_hs +
      app_B.Product1_j3) + app_B.Product2_ah) * app_B.MatrixConcatenate4[4])) +
                        ((app_B.Selector_i * app_B.Subtract_md +
                          app_B.Selector1_h * app_B.Subtract_jn) +
                         app_B.Selector2_d * app_B.Subtract_je) *
                        app_B.MatrixConcatenate4[8]) + -((((app_B.Selector7_n[4]
      * app_B.Selector7_n[8] - app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
      app_B.Selector7_n[0] + (app_B.Selector7_n[7] * app_B.Selector7_n[2] -
      app_B.Selector7_n[1] * app_B.Selector7_n[8]) * app_B.Selector7_n[3]) +
      (app_B.Selector7_n[1] * app_B.Selector7_n[5] - app_B.Selector7_n[4] *
       app_B.Selector7_n[2]) * app_B.Selector7_n[6]) * app_B.MatrixConcatenate4
      [12]);

    /* Sum: '<S220>/Sum of Elements9' */
    app_B.Product1_pn = -0.0F;

    /* Sum: '<S220>/Sum of Elements6' */
    app_B.Product2_gy = -0.0F;

    /* Sum: '<S220>/Sum of Elements7' */
    app_B.f = -0.0F;

    /* Sum: '<S220>/Sum of Elements8' */
    app_B.f1 = -0.0F;
    for (app_B.s215_iter = 0; app_B.s215_iter < 17; app_B.s215_iter++) {
      app_B.Subtract_a = app_B.Gain2[app_B.s215_iter];

      /* Sum: '<S220>/Sum of Elements9' */
      app_B.Product1_pn += app_B.Subtract_a;
      app_B.Subtract_i = app_B.Subtract_a * app_B.Gain3[app_B.s215_iter];

      /* Sum: '<S220>/Sum of Elements6' incorporates:
       *  Product: '<S220>/Product7'
       */
      app_B.Product2_gy += app_B.Subtract_i;
      app_B.Selector1 = app_B.Product5_l[app_B.s215_iter] * app_B.Subtract_a;

      /* Sum: '<S220>/Sum of Elements7' incorporates:
       *  Product: '<S220>/Product5'
       */
      app_B.f += app_B.Selector1;
      app_B.Subtract_a *= app_B.Product6_l[app_B.s215_iter];

      /* Sum: '<S220>/Sum of Elements8' incorporates:
       *  Product: '<S220>/Product6'
       */
      app_B.f1 += app_B.Subtract_a;
      app_B.Gain3[app_B.s215_iter] = app_B.Subtract_i;
      app_B.Product5_l[app_B.s215_iter] = app_B.Selector1;
      app_B.Product6_l[app_B.s215_iter] = app_B.Subtract_a;
    }

    /* Concatenate: '<S220>/Matrix Concatenate1' incorporates:
     *  Product: '<S220>/Product5'
     *  Product: '<S220>/Product6'
     *  Product: '<S220>/Product7'
     *  Sum: '<S220>/Sum of Elements'
     *  Sum: '<S220>/Sum of Elements1'
     *  Sum: '<S220>/Sum of Elements2'
     *  Sum: '<S220>/Sum of Elements3'
     *  Sum: '<S220>/Sum of Elements4'
     *  Sum: '<S220>/Sum of Elements5'
     *  Sum: '<S220>/Sum of Elements6'
     *  Sum: '<S220>/Sum of Elements7'
     *  Sum: '<S220>/Sum of Elements8'
     *  Sum: '<S220>/Sum of Elements9'
     */
    app_B.rtb_Selector6_c[0] = app_B.Product1_pn;
    app_B.rtb_Selector6_c[4] = app_B.Ts;
    app_B.rtb_Selector6_c[8] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[12] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[1] = app_B.Product2_gy;
    app_B.rtb_Selector6_c[5] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[9] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[13] = app_B.Add_mm;
    app_B.rtb_Selector6_c[2] = app_B.f;
    app_B.rtb_Selector6_c[6] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[10] = app_B.Add_mm;
    app_B.rtb_Selector6_c[14] = app_B.Product_fp;
    app_B.rtb_Selector6_c[3] = app_B.f1;
    app_B.rtb_Selector6_c[7] = app_B.Add_mm;
    app_B.rtb_Selector6_c[11] = app_B.Product_fp;
    app_B.rtb_Selector6_c[15] = app_B.Product_ly;
    for (app_B.s215_iter = 0; app_B.s215_iter < 16; app_B.s215_iter++) {
      app_B.Subtract_i = app_B.rtb_Selector6_c[app_B.s215_iter];

      /* Selector: '<S223>/Selector4' */
      app_B.rtb_MatrixConcatenate4_k[app_B.s215_iter] = app_B.Subtract_i;
      app_B.Selector7_n[app_B.s215_iter] = app_B.Subtract_i;
    }

    /* End of Concatenate: '<S220>/Matrix Concatenate1' */

    /* Selector: '<S223>/Selector' */
    app_B.Subtract_i = app_B.Selector7_n[0];

    /* Selector: '<S223>/Selector4' */
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = (app_B.s215_iter + 1) << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* Sum: '<S246>/Add' incorporates:
     *  Product: '<S246>/Product'
     *  Product: '<S246>/Product1'
     *  Product: '<S246>/Product2'
     *  Product: '<S250>/Product'
     *  Product: '<S250>/Product1'
     *  Product: '<S251>/Product'
     *  Product: '<S251>/Product1'
     *  Product: '<S252>/Product'
     *  Product: '<S252>/Product1'
     *  Selector: '<S246>/Selector'
     *  Selector: '<S246>/Selector1'
     *  Selector: '<S246>/Selector2'
     *  Selector: '<S246>/Selector3'
     *  Selector: '<S246>/Selector4'
     *  Selector: '<S246>/Selector5'
     *  Selector: '<S246>/Selector6'
     *  Selector: '<S246>/Selector7'
     *  Selector: '<S246>/Selector8'
     *  Sum: '<S250>/Subtract'
     *  Sum: '<S251>/Subtract'
     *  Sum: '<S252>/Subtract'
     */
    app_B.Selector1 = ((app_B.MatrixConcatenate4[4] * app_B.MatrixConcatenate4[8]
                        - app_B.MatrixConcatenate4[7] *
                        app_B.MatrixConcatenate4[5]) * app_B.MatrixConcatenate4
                       [0] + (app_B.MatrixConcatenate4[7] *
      app_B.MatrixConcatenate4[2] - app_B.MatrixConcatenate4[1] *
      app_B.MatrixConcatenate4[8]) * app_B.MatrixConcatenate4[3]) +
      (app_B.MatrixConcatenate4[1] * app_B.MatrixConcatenate4[5] -
       app_B.MatrixConcatenate4[4] * app_B.MatrixConcatenate4[2]) *
      app_B.MatrixConcatenate4[6];

    /* Selector: '<S223>/Selector5' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.Selector7_n[0], sizeof
           (real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S223>/Selector5' */

    /* Product: '<S223>/Product1' incorporates:
     *  Product: '<S247>/Product'
     *  Product: '<S247>/Product1'
     *  Product: '<S247>/Product2'
     *  Product: '<S253>/Product'
     *  Product: '<S253>/Product1'
     *  Product: '<S254>/Product'
     *  Product: '<S254>/Product1'
     *  Product: '<S255>/Product'
     *  Product: '<S255>/Product1'
     *  Selector: '<S223>/Selector1'
     *  Selector: '<S247>/Selector'
     *  Selector: '<S247>/Selector1'
     *  Selector: '<S247>/Selector2'
     *  Selector: '<S247>/Selector3'
     *  Selector: '<S247>/Selector4'
     *  Selector: '<S247>/Selector5'
     *  Selector: '<S247>/Selector6'
     *  Selector: '<S247>/Selector7'
     *  Selector: '<S247>/Selector8'
     *  Sum: '<S247>/Add'
     *  Sum: '<S253>/Subtract'
     *  Sum: '<S254>/Subtract'
     *  Sum: '<S255>/Subtract'
     */
    app_B.Subtract_a = (((app_B.MatrixConcatenate4[4] *
                          app_B.MatrixConcatenate4[8] -
                          app_B.MatrixConcatenate4[7] *
                          app_B.MatrixConcatenate4[5]) *
                         app_B.MatrixConcatenate4[0] +
                         (app_B.MatrixConcatenate4[7] *
                          app_B.MatrixConcatenate4[2] -
                          app_B.MatrixConcatenate4[1] *
                          app_B.MatrixConcatenate4[8]) *
                         app_B.MatrixConcatenate4[3]) +
                        (app_B.MatrixConcatenate4[1] * app_B.MatrixConcatenate4
                         [5] - app_B.MatrixConcatenate4[4] *
                         app_B.MatrixConcatenate4[2]) *
                        app_B.MatrixConcatenate4[6]) * app_B.Selector7_n[4];

    /* Selector: '<S223>/Selector2' */
    app_B.Selector2 = app_B.Selector7_n[8];

    /* Selector: '<S223>/Selector6' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.Selector7_n[0], sizeof
           (real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp_0[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S223>/Selector6' */

    /* Sum: '<S248>/Add' incorporates:
     *  Product: '<S248>/Product'
     *  Product: '<S248>/Product1'
     *  Product: '<S248>/Product2'
     *  Product: '<S256>/Product'
     *  Product: '<S256>/Product1'
     *  Product: '<S257>/Product'
     *  Product: '<S257>/Product1'
     *  Product: '<S258>/Product'
     *  Product: '<S258>/Product1'
     *  Selector: '<S248>/Selector'
     *  Selector: '<S248>/Selector1'
     *  Selector: '<S248>/Selector2'
     *  Selector: '<S248>/Selector3'
     *  Selector: '<S248>/Selector4'
     *  Selector: '<S248>/Selector5'
     *  Selector: '<S248>/Selector6'
     *  Selector: '<S248>/Selector7'
     *  Selector: '<S248>/Selector8'
     *  Sum: '<S256>/Subtract'
     *  Sum: '<S257>/Subtract'
     *  Sum: '<S258>/Subtract'
     */
    app_B.Subtract_m = ((app_B.MatrixConcatenate4[4] * app_B.MatrixConcatenate4
                         [8] - app_B.MatrixConcatenate4[7] *
                         app_B.MatrixConcatenate4[5]) *
                        app_B.MatrixConcatenate4[0] + (app_B.MatrixConcatenate4
      [7] * app_B.MatrixConcatenate4[2] - app_B.MatrixConcatenate4[1] *
      app_B.MatrixConcatenate4[8]) * app_B.MatrixConcatenate4[3]) +
      (app_B.MatrixConcatenate4[1] * app_B.MatrixConcatenate4[5] -
       app_B.MatrixConcatenate4[4] * app_B.MatrixConcatenate4[2]) *
      app_B.MatrixConcatenate4[6];

    /* Selector: '<S223>/Selector7' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.Selector7_n[0], sizeof
           (real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = app_B.s215_iter << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S223>/Selector7' */

    /* Product: '<S223>/Product3' incorporates:
     *  Product: '<S249>/Product'
     *  Product: '<S249>/Product1'
     *  Product: '<S249>/Product2'
     *  Product: '<S259>/Product'
     *  Product: '<S259>/Product1'
     *  Product: '<S260>/Product'
     *  Product: '<S260>/Product1'
     *  Product: '<S261>/Product'
     *  Product: '<S261>/Product1'
     *  Selector: '<S223>/Selector3'
     *  Selector: '<S249>/Selector'
     *  Selector: '<S249>/Selector1'
     *  Selector: '<S249>/Selector2'
     *  Selector: '<S249>/Selector3'
     *  Selector: '<S249>/Selector4'
     *  Selector: '<S249>/Selector5'
     *  Selector: '<S249>/Selector6'
     *  Selector: '<S249>/Selector7'
     *  Selector: '<S249>/Selector8'
     *  Sum: '<S249>/Add'
     *  Sum: '<S259>/Subtract'
     *  Sum: '<S260>/Subtract'
     *  Sum: '<S261>/Subtract'
     */
    app_B.Product_hs = (((app_B.MatrixConcatenate4[4] *
                          app_B.MatrixConcatenate4[8] -
                          app_B.MatrixConcatenate4[7] *
                          app_B.MatrixConcatenate4[5]) *
                         app_B.MatrixConcatenate4[0] +
                         (app_B.MatrixConcatenate4[7] *
                          app_B.MatrixConcatenate4[2] -
                          app_B.MatrixConcatenate4[1] *
                          app_B.MatrixConcatenate4[8]) *
                         app_B.MatrixConcatenate4[3]) +
                        (app_B.MatrixConcatenate4[1] * app_B.MatrixConcatenate4
                         [5] - app_B.MatrixConcatenate4[4] *
                         app_B.MatrixConcatenate4[2]) *
                        app_B.MatrixConcatenate4[6]) * app_B.Selector7_n[12];

    /* Concatenate: '<S220>/Matrix Concatenate2' incorporates:
     *  Reshape: '<S220>/Reshape10'
     *  Sum: '<S220>/Sum of Elements'
     *  Sum: '<S220>/Sum of Elements1'
     *  Sum: '<S220>/Sum of Elements2'
     *  Sum: '<S220>/Sum of Elements3'
     *  Sum: '<S220>/Sum of Elements4'
     *  Sum: '<S220>/Sum of Elements5'
     *  Sum: '<S220>/Sum of Elements6'
     *  Sum: '<S220>/Sum of Elements7'
     *  Sum: '<S220>/Sum of Elements8'
     *  Sum: '<S220>/Sum of Elements9'
     */
    app_B.rtb_Selector6_c[0] = app_ConstB.DataTypeConversion_g;
    app_B.rtb_Selector6_c[4] = app_B.Product1_pn;
    app_B.rtb_Selector6_c[8] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[12] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[1] = app_B.Ts;
    app_B.rtb_Selector6_c[5] = app_B.Product2_gy;
    app_B.rtb_Selector6_c[9] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[13] = app_B.Add_mm;
    app_B.rtb_Selector6_c[2] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[6] = app_B.f;
    app_B.rtb_Selector6_c[10] = app_B.Add_mm;
    app_B.rtb_Selector6_c[14] = app_B.Product_fp;
    app_B.rtb_Selector6_c[3] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[7] = app_B.f1;
    app_B.rtb_Selector6_c[11] = app_B.Product_fp;
    app_B.rtb_Selector6_c[15] = app_B.Product_ly;
    for (app_B.s215_iter = 0; app_B.s215_iter < 16; app_B.s215_iter++) {
      app_B.rtb_MatrixConcatenate4_p = app_B.rtb_Selector6_c[app_B.s215_iter];

      /* Selector: '<S224>/Selector4' */
      app_B.rtb_MatrixConcatenate4_k[app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_p;
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.rtb_MatrixConcatenate4_p;
    }

    /* End of Concatenate: '<S220>/Matrix Concatenate2' */

    /* Selector: '<S224>/Selector4' */
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = (app_B.s215_iter + 1) << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* Product: '<S224>/Product' incorporates:
     *  Product: '<S262>/Product'
     *  Product: '<S262>/Product1'
     *  Product: '<S262>/Product2'
     *  Product: '<S266>/Product'
     *  Product: '<S266>/Product1'
     *  Product: '<S267>/Product'
     *  Product: '<S267>/Product1'
     *  Product: '<S268>/Product'
     *  Product: '<S268>/Product1'
     *  Selector: '<S224>/Selector'
     *  Selector: '<S262>/Selector'
     *  Selector: '<S262>/Selector1'
     *  Selector: '<S262>/Selector2'
     *  Selector: '<S262>/Selector3'
     *  Selector: '<S262>/Selector4'
     *  Selector: '<S262>/Selector5'
     *  Selector: '<S262>/Selector6'
     *  Selector: '<S262>/Selector7'
     *  Selector: '<S262>/Selector8'
     *  Sum: '<S262>/Add'
     *  Sum: '<S266>/Subtract'
     *  Sum: '<S267>/Subtract'
     *  Sum: '<S268>/Subtract'
     */
    app_B.Product1_j3 = (((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
      app_B.Selector7_n[7] * app_B.Selector7_n[5]) * app_B.Selector7_n[0] +
                          (app_B.Selector7_n[7] * app_B.Selector7_n[2] -
      app_B.Selector7_n[1] * app_B.Selector7_n[8]) * app_B.Selector7_n[3]) +
                         (app_B.Selector7_n[1] * app_B.Selector7_n[5] -
                          app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
                         app_B.Selector7_n[6]) * app_B.MatrixConcatenate4[0];

    /* Selector: '<S224>/Selector1' */
    app_B.Product2_ah = app_B.MatrixConcatenate4[4];

    /* Selector: '<S224>/Selector5' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S224>/Selector5' */

    /* Sum: '<S263>/Add' incorporates:
     *  Product: '<S263>/Product'
     *  Product: '<S263>/Product1'
     *  Product: '<S263>/Product2'
     *  Product: '<S269>/Product'
     *  Product: '<S269>/Product1'
     *  Product: '<S270>/Product'
     *  Product: '<S270>/Product1'
     *  Product: '<S271>/Product'
     *  Product: '<S271>/Product1'
     *  Selector: '<S263>/Selector'
     *  Selector: '<S263>/Selector1'
     *  Selector: '<S263>/Selector2'
     *  Selector: '<S263>/Selector3'
     *  Selector: '<S263>/Selector4'
     *  Selector: '<S263>/Selector5'
     *  Selector: '<S263>/Selector6'
     *  Selector: '<S263>/Selector7'
     *  Selector: '<S263>/Selector8'
     *  Sum: '<S269>/Subtract'
     *  Sum: '<S270>/Subtract'
     *  Sum: '<S271>/Subtract'
     */
    app_B.Selector_i = ((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                         app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                        app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
      app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                        app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
      app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Selector: '<S224>/Selector6' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp_0[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S224>/Selector6' */

    /* Product: '<S224>/Product2' incorporates:
     *  Product: '<S264>/Product'
     *  Product: '<S264>/Product1'
     *  Product: '<S264>/Product2'
     *  Product: '<S272>/Product'
     *  Product: '<S272>/Product1'
     *  Product: '<S273>/Product'
     *  Product: '<S273>/Product1'
     *  Product: '<S274>/Product'
     *  Product: '<S274>/Product1'
     *  Selector: '<S224>/Selector2'
     *  Selector: '<S264>/Selector'
     *  Selector: '<S264>/Selector1'
     *  Selector: '<S264>/Selector2'
     *  Selector: '<S264>/Selector3'
     *  Selector: '<S264>/Selector4'
     *  Selector: '<S264>/Selector5'
     *  Selector: '<S264>/Selector6'
     *  Selector: '<S264>/Selector7'
     *  Selector: '<S264>/Selector8'
     *  Sum: '<S264>/Add'
     *  Sum: '<S272>/Subtract'
     *  Sum: '<S273>/Subtract'
     *  Sum: '<S274>/Subtract'
     */
    app_B.Subtract_md = (((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
      app_B.Selector7_n[7] * app_B.Selector7_n[5]) * app_B.Selector7_n[0] +
                          (app_B.Selector7_n[7] * app_B.Selector7_n[2] -
      app_B.Selector7_n[1] * app_B.Selector7_n[8]) * app_B.Selector7_n[3]) +
                         (app_B.Selector7_n[1] * app_B.Selector7_n[5] -
                          app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
                         app_B.Selector7_n[6]) * app_B.MatrixConcatenate4[8];

    /* Selector: '<S224>/Selector3' */
    app_B.Selector1_h = app_B.MatrixConcatenate4[12];

    /* Selector: '<S224>/Selector7' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = app_B.s215_iter << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S224>/Selector7' */

    /* Sum: '<S265>/Add' incorporates:
     *  Product: '<S265>/Product'
     *  Product: '<S265>/Product1'
     *  Product: '<S265>/Product2'
     *  Product: '<S275>/Product'
     *  Product: '<S275>/Product1'
     *  Product: '<S276>/Product'
     *  Product: '<S276>/Product1'
     *  Product: '<S277>/Product'
     *  Product: '<S277>/Product1'
     *  Selector: '<S265>/Selector'
     *  Selector: '<S265>/Selector1'
     *  Selector: '<S265>/Selector2'
     *  Selector: '<S265>/Selector3'
     *  Selector: '<S265>/Selector4'
     *  Selector: '<S265>/Selector5'
     *  Selector: '<S265>/Selector6'
     *  Selector: '<S265>/Selector7'
     *  Selector: '<S265>/Selector8'
     *  Sum: '<S275>/Subtract'
     *  Sum: '<S276>/Subtract'
     *  Sum: '<S277>/Subtract'
     */
    app_B.Subtract_jn = ((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                          app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                         app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
      app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                         app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
      app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Concatenate: '<S220>/Matrix Concatenate3' incorporates:
     *  Reshape: '<S220>/Reshape13'
     *  Sum: '<S220>/Sum of Elements'
     *  Sum: '<S220>/Sum of Elements1'
     *  Sum: '<S220>/Sum of Elements2'
     *  Sum: '<S220>/Sum of Elements3'
     *  Sum: '<S220>/Sum of Elements4'
     *  Sum: '<S220>/Sum of Elements5'
     *  Sum: '<S220>/Sum of Elements6'
     *  Sum: '<S220>/Sum of Elements7'
     *  Sum: '<S220>/Sum of Elements8'
     *  Sum: '<S220>/Sum of Elements9'
     */
    app_B.rtb_Selector6_c[0] = app_ConstB.DataTypeConversion_g;
    app_B.rtb_Selector6_c[4] = app_B.Ts;
    app_B.rtb_Selector6_c[8] = app_B.Product1_pn;
    app_B.rtb_Selector6_c[12] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[1] = app_B.Ts;
    app_B.rtb_Selector6_c[5] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[9] = app_B.Product2_gy;
    app_B.rtb_Selector6_c[13] = app_B.Add_mm;
    app_B.rtb_Selector6_c[2] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[6] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[10] = app_B.f;
    app_B.rtb_Selector6_c[14] = app_B.Product_fp;
    app_B.rtb_Selector6_c[3] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[7] = app_B.Add_mm;
    app_B.rtb_Selector6_c[11] = app_B.f1;
    app_B.rtb_Selector6_c[15] = app_B.Product_ly;
    for (app_B.s215_iter = 0; app_B.s215_iter < 16; app_B.s215_iter++) {
      app_B.rtb_MatrixConcatenate4_p = app_B.rtb_Selector6_c[app_B.s215_iter];

      /* Selector: '<S225>/Selector4' */
      app_B.rtb_MatrixConcatenate4_k[app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_p;
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.rtb_MatrixConcatenate4_p;
    }

    /* End of Concatenate: '<S220>/Matrix Concatenate3' */

    /* Selector: '<S225>/Selector4' */
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = (app_B.s215_iter + 1) << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* Product: '<S225>/Product' incorporates:
     *  Product: '<S278>/Product'
     *  Product: '<S278>/Product1'
     *  Product: '<S278>/Product2'
     *  Product: '<S282>/Product'
     *  Product: '<S282>/Product1'
     *  Product: '<S283>/Product'
     *  Product: '<S283>/Product1'
     *  Product: '<S284>/Product'
     *  Product: '<S284>/Product1'
     *  Selector: '<S225>/Selector'
     *  Selector: '<S278>/Selector'
     *  Selector: '<S278>/Selector1'
     *  Selector: '<S278>/Selector2'
     *  Selector: '<S278>/Selector3'
     *  Selector: '<S278>/Selector4'
     *  Selector: '<S278>/Selector5'
     *  Selector: '<S278>/Selector6'
     *  Selector: '<S278>/Selector7'
     *  Selector: '<S278>/Selector8'
     *  Sum: '<S278>/Add'
     *  Sum: '<S282>/Subtract'
     *  Sum: '<S283>/Subtract'
     *  Sum: '<S284>/Subtract'
     */
    app_B.Product_ly = (((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                          app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                         app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
      app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                         app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
      app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
                        app_B.Selector7_n[6]) * app_B.MatrixConcatenate4[0];

    /* Selector: '<S225>/Selector1' */
    app_B.Selector2_d = app_B.MatrixConcatenate4[4];

    /* Selector: '<S225>/Selector5' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S225>/Selector5' */

    /* Sum: '<S279>/Add' incorporates:
     *  Product: '<S279>/Product'
     *  Product: '<S279>/Product1'
     *  Product: '<S279>/Product2'
     *  Product: '<S285>/Product'
     *  Product: '<S285>/Product1'
     *  Product: '<S286>/Product'
     *  Product: '<S286>/Product1'
     *  Product: '<S287>/Product'
     *  Product: '<S287>/Product1'
     *  Selector: '<S279>/Selector'
     *  Selector: '<S279>/Selector1'
     *  Selector: '<S279>/Selector2'
     *  Selector: '<S279>/Selector3'
     *  Selector: '<S279>/Selector4'
     *  Selector: '<S279>/Selector5'
     *  Selector: '<S279>/Selector6'
     *  Selector: '<S279>/Selector7'
     *  Selector: '<S279>/Selector8'
     *  Sum: '<S285>/Subtract'
     *  Sum: '<S286>/Subtract'
     *  Sum: '<S287>/Subtract'
     */
    app_B.Subtract_je = ((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                          app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                         app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
      app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                         app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
      app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Selector: '<S225>/Selector6' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp_0[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S225>/Selector6' */

    /* Product: '<S225>/Product2' incorporates:
     *  Product: '<S280>/Product'
     *  Product: '<S280>/Product1'
     *  Product: '<S280>/Product2'
     *  Product: '<S288>/Product'
     *  Product: '<S288>/Product1'
     *  Product: '<S289>/Product'
     *  Product: '<S289>/Product1'
     *  Product: '<S290>/Product'
     *  Product: '<S290>/Product1'
     *  Selector: '<S225>/Selector2'
     *  Selector: '<S280>/Selector'
     *  Selector: '<S280>/Selector1'
     *  Selector: '<S280>/Selector2'
     *  Selector: '<S280>/Selector3'
     *  Selector: '<S280>/Selector4'
     *  Selector: '<S280>/Selector5'
     *  Selector: '<S280>/Selector6'
     *  Selector: '<S280>/Selector7'
     *  Selector: '<S280>/Selector8'
     *  Sum: '<S280>/Add'
     *  Sum: '<S288>/Subtract'
     *  Sum: '<S289>/Subtract'
     *  Sum: '<S290>/Subtract'
     */
    app_B.Product2_i = (((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                          app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                         app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
      app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                         app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
      app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
                        app_B.Selector7_n[6]) * app_B.MatrixConcatenate4[8];

    /* Selector: '<S225>/Selector3' */
    app_B.Selector3_c = app_B.MatrixConcatenate4[12];

    /* Selector: '<S225>/Selector7' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = app_B.s215_iter << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S225>/Selector7' */

    /* Sum: '<S281>/Add' incorporates:
     *  Product: '<S281>/Product'
     *  Product: '<S281>/Product1'
     *  Product: '<S281>/Product2'
     *  Product: '<S291>/Product'
     *  Product: '<S291>/Product1'
     *  Product: '<S292>/Product'
     *  Product: '<S292>/Product1'
     *  Product: '<S293>/Product'
     *  Product: '<S293>/Product1'
     *  Selector: '<S281>/Selector'
     *  Selector: '<S281>/Selector1'
     *  Selector: '<S281>/Selector2'
     *  Selector: '<S281>/Selector3'
     *  Selector: '<S281>/Selector4'
     *  Selector: '<S281>/Selector5'
     *  Selector: '<S281>/Selector6'
     *  Selector: '<S281>/Selector7'
     *  Selector: '<S281>/Selector8'
     *  Sum: '<S291>/Subtract'
     *  Sum: '<S292>/Subtract'
     *  Sum: '<S293>/Subtract'
     */
    app_B.Add_be = ((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                     app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                    app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
      app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                    app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
      app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Concatenate: '<S220>/Matrix Concatenate4' incorporates:
     *  Reshape: '<S220>/Reshape18'
     *  Sum: '<S220>/Sum of Elements'
     *  Sum: '<S220>/Sum of Elements1'
     *  Sum: '<S220>/Sum of Elements2'
     *  Sum: '<S220>/Sum of Elements3'
     *  Sum: '<S220>/Sum of Elements4'
     *  Sum: '<S220>/Sum of Elements6'
     *  Sum: '<S220>/Sum of Elements7'
     *  Sum: '<S220>/Sum of Elements8'
     *  Sum: '<S220>/Sum of Elements9'
     */
    app_B.rtb_Selector6_c[0] = app_ConstB.DataTypeConversion_g;
    app_B.rtb_Selector6_c[4] = app_B.Ts;
    app_B.rtb_Selector6_c[8] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[12] = app_B.Product1_pn;
    app_B.rtb_Selector6_c[1] = app_B.Ts;
    app_B.rtb_Selector6_c[5] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[9] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[13] = app_B.Product2_gy;
    app_B.rtb_Selector6_c[2] = app_B.Gain5_h;
    app_B.rtb_Selector6_c[6] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[10] = app_B.Add_mm;
    app_B.rtb_Selector6_c[14] = app_B.f;
    app_B.rtb_Selector6_c[3] = app_B.Product2_ig;
    app_B.rtb_Selector6_c[7] = app_B.Add_mm;
    app_B.rtb_Selector6_c[11] = app_B.Product_fp;
    app_B.rtb_Selector6_c[15] = app_B.f1;
    for (app_B.s215_iter = 0; app_B.s215_iter < 16; app_B.s215_iter++) {
      app_B.rtb_MatrixConcatenate4_p = app_B.rtb_Selector6_c[app_B.s215_iter];

      /* Selector: '<S226>/Selector4' */
      app_B.rtb_MatrixConcatenate4_k[app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_p;
      app_B.MatrixConcatenate4[app_B.s215_iter] = app_B.rtb_MatrixConcatenate4_p;
    }

    /* End of Concatenate: '<S220>/Matrix Concatenate4' */

    /* Selector: '<S226>/Selector4' */
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = (app_B.s215_iter + 1) << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* Product: '<S294>/Product' incorporates:
     *  Product: '<S298>/Product'
     *  Product: '<S298>/Product1'
     *  Selector: '<S294>/Selector'
     *  Selector: '<S294>/Selector4'
     *  Selector: '<S294>/Selector5'
     *  Selector: '<S294>/Selector7'
     *  Selector: '<S294>/Selector8'
     *  Sum: '<S298>/Subtract'
     */
    app_B.Ts = (app_B.Selector7_n[4] * app_B.Selector7_n[8] - app_B.Selector7_n
                [7] * app_B.Selector7_n[5]) * app_B.Selector7_n[0];

    /* Product: '<S294>/Product1' incorporates:
     *  Product: '<S299>/Product'
     *  Product: '<S299>/Product1'
     *  Selector: '<S294>/Selector1'
     *  Selector: '<S294>/Selector3'
     *  Selector: '<S294>/Selector5'
     *  Selector: '<S294>/Selector6'
     *  Selector: '<S294>/Selector8'
     *  Sum: '<S299>/Subtract'
     */
    app_B.Gain5_h = (app_B.Selector7_n[7] * app_B.Selector7_n[2] -
                     app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
      app_B.Selector7_n[3];

    /* Product: '<S294>/Product2' incorporates:
     *  Product: '<S300>/Product'
     *  Product: '<S300>/Product1'
     *  Selector: '<S294>/Selector2'
     *  Selector: '<S294>/Selector3'
     *  Selector: '<S294>/Selector4'
     *  Selector: '<S294>/Selector6'
     *  Selector: '<S294>/Selector7'
     *  Sum: '<S300>/Subtract'
     */
    app_B.Product2_ig = (app_B.Selector7_n[1] * app_B.Selector7_n[5] -
                         app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Selector: '<S226>/Selector5' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S226>/Selector5' */

    /* Sum: '<S295>/Add' incorporates:
     *  Product: '<S295>/Product'
     *  Product: '<S295>/Product1'
     *  Product: '<S295>/Product2'
     *  Product: '<S301>/Product'
     *  Product: '<S301>/Product1'
     *  Product: '<S302>/Product'
     *  Product: '<S302>/Product1'
     *  Product: '<S303>/Product'
     *  Product: '<S303>/Product1'
     *  Selector: '<S295>/Selector'
     *  Selector: '<S295>/Selector1'
     *  Selector: '<S295>/Selector2'
     *  Selector: '<S295>/Selector3'
     *  Selector: '<S295>/Selector4'
     *  Selector: '<S295>/Selector5'
     *  Selector: '<S295>/Selector6'
     *  Selector: '<S295>/Selector7'
     *  Selector: '<S295>/Selector8'
     *  Sum: '<S301>/Subtract'
     *  Sum: '<S302>/Subtract'
     *  Sum: '<S303>/Subtract'
     */
    app_B.Add_mm = ((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                     app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                    app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
      app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                    app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
      app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Selector: '<S226>/Selector6' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = tmp_0[app_B.s215_iter] << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S226>/Selector6' */

    /* Product: '<S296>/Product' incorporates:
     *  Product: '<S304>/Product'
     *  Product: '<S304>/Product1'
     *  Selector: '<S296>/Selector'
     *  Selector: '<S296>/Selector4'
     *  Selector: '<S296>/Selector5'
     *  Selector: '<S296>/Selector7'
     *  Selector: '<S296>/Selector8'
     *  Sum: '<S304>/Subtract'
     */
    app_B.Product_fp = (app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                        app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
      app_B.Selector7_n[0];

    /* Product: '<S296>/Product1' incorporates:
     *  Product: '<S305>/Product'
     *  Product: '<S305>/Product1'
     *  Selector: '<S296>/Selector1'
     *  Selector: '<S296>/Selector3'
     *  Selector: '<S296>/Selector5'
     *  Selector: '<S296>/Selector6'
     *  Selector: '<S296>/Selector8'
     *  Sum: '<S305>/Subtract'
     */
    app_B.Product1_pn = (app_B.Selector7_n[7] * app_B.Selector7_n[2] -
                         app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
      app_B.Selector7_n[3];

    /* Product: '<S296>/Product2' incorporates:
     *  Product: '<S306>/Product'
     *  Product: '<S306>/Product1'
     *  Selector: '<S296>/Selector2'
     *  Selector: '<S296>/Selector3'
     *  Selector: '<S296>/Selector4'
     *  Selector: '<S296>/Selector6'
     *  Selector: '<S296>/Selector7'
     *  Sum: '<S306>/Subtract'
     */
    app_B.Product2_gy = (app_B.Selector7_n[1] * app_B.Selector7_n[5] -
                         app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
      app_B.Selector7_n[6];

    /* Selector: '<S226>/Selector7' */
    memcpy(&app_B.rtb_MatrixConcatenate4_k[0], &app_B.MatrixConcatenate4[0],
           sizeof(real32_T) << 4U);
    for (app_B.s215_iter = 0; app_B.s215_iter < 3; app_B.s215_iter++) {
      app_B.s337_iter = app_B.s215_iter << 2;
      app_B.tmp_1[3 * app_B.s215_iter] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 1];
      app_B.tmp_1[3 * app_B.s215_iter + 1] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 2];
      app_B.tmp_1[3 * app_B.s215_iter + 2] =
        app_B.rtb_MatrixConcatenate4_k[app_B.s337_iter + 3];
    }

    for (app_B.s215_iter = 0; app_B.s215_iter < 9; app_B.s215_iter++) {
      app_B.Selector7_n[app_B.s215_iter] = app_B.tmp_1[app_B.s215_iter];
    }

    /* End of Selector: '<S226>/Selector7' */

    /* If: '<S220>/If1' incorporates:
     *  Abs: '<S220>/Abs1'
     *  Constant: '<S220>/Constant1'
     *  RelationalOperator: '<S220>/Relational Operator1'
     */
    if ((real32_T)fabs(app_B.Selector_o) > 0.1F) {
      /* Outputs for IfAction SubSystem: '<S220>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S228>/Action Port'
       */
      /* Product: '<S228>/Divide1' incorporates:
       *  Gain: '<S224>/Gain'
       *  Gain: '<S224>/Gain1'
       *  Product: '<S224>/Product1'
       *  Product: '<S224>/Product3'
       *  Sum: '<S224>/Add'
       */
      app_B.Product1_j3 = (((-(app_B.Product2_ah * app_B.Selector_i) +
        app_B.Product1_j3) + app_B.Subtract_md) + -(app_B.Selector1_h *
        app_B.Subtract_jn)) / app_B.Selector_o;

      /* Product: '<S228>/Divide2' incorporates:
       *  Gain: '<S225>/Gain'
       *  Gain: '<S225>/Gain1'
       *  Product: '<S225>/Product1'
       *  Product: '<S225>/Product3'
       *  Sum: '<S225>/Add'
       */
      app_B.Product_ly = (((-(app_B.Selector2_d * app_B.Subtract_je) +
                            app_B.Product_ly) + app_B.Product2_i) +
                          -(app_B.Selector3_c * app_B.Add_be)) /
        app_B.Selector_o;

      /* Product: '<S228>/Divide3' incorporates:
       *  Gain: '<S226>/Gain'
       *  Gain: '<S226>/Gain1'
       *  Product: '<S226>/Product'
       *  Product: '<S226>/Product1'
       *  Product: '<S226>/Product2'
       *  Product: '<S226>/Product3'
       *  Product: '<S297>/Product'
       *  Product: '<S297>/Product1'
       *  Product: '<S297>/Product2'
       *  Product: '<S307>/Product'
       *  Product: '<S307>/Product1'
       *  Product: '<S308>/Product'
       *  Product: '<S308>/Product1'
       *  Product: '<S309>/Product'
       *  Product: '<S309>/Product1'
       *  Selector: '<S226>/Selector'
       *  Selector: '<S226>/Selector1'
       *  Selector: '<S226>/Selector2'
       *  Selector: '<S226>/Selector3'
       *  Selector: '<S297>/Selector'
       *  Selector: '<S297>/Selector1'
       *  Selector: '<S297>/Selector2'
       *  Selector: '<S297>/Selector3'
       *  Selector: '<S297>/Selector4'
       *  Selector: '<S297>/Selector5'
       *  Selector: '<S297>/Selector6'
       *  Selector: '<S297>/Selector7'
       *  Selector: '<S297>/Selector8'
       *  Sum: '<S226>/Add'
       *  Sum: '<S294>/Add'
       *  Sum: '<S296>/Add'
       *  Sum: '<S297>/Add'
       *  Sum: '<S307>/Subtract'
       *  Sum: '<S308>/Subtract'
       *  Sum: '<S309>/Subtract'
       */
      app_B.Ts = (-((((app_B.Selector7_n[4] * app_B.Selector7_n[8] -
                       app_B.Selector7_n[7] * app_B.Selector7_n[5]) *
                      app_B.Selector7_n[0] + (app_B.Selector7_n[7] *
        app_B.Selector7_n[2] - app_B.Selector7_n[1] * app_B.Selector7_n[8]) *
                      app_B.Selector7_n[3]) + (app_B.Selector7_n[1] *
        app_B.Selector7_n[5] - app_B.Selector7_n[4] * app_B.Selector7_n[2]) *
                     app_B.Selector7_n[6]) * app_B.MatrixConcatenate4[12]) +
                  ((((app_B.Ts + app_B.Gain5_h) + app_B.Product2_ig) *
                    app_B.MatrixConcatenate4[0] + -(app_B.MatrixConcatenate4[4] *
        app_B.Add_mm)) + ((app_B.Product_fp + app_B.Product1_pn) +
                          app_B.Product2_gy) * app_B.MatrixConcatenate4[8])) /
        app_B.Selector_o;

      /* Outputs for Atomic SubSystem: '<S228>/If Action Subsystem' */
      /* Product: '<S310>/Product' incorporates:
       *  Product: '<S310>/Product2'
       *  Product: '<S310>/Product5'
       */
      app_B.Gain5_h = app_B.Add_pgy * app_B.Add_pgy;

      /* Product: '<S310>/Product1' incorporates:
       *  Product: '<S310>/Product10'
       *  Product: '<S310>/Product11'
       *  Product: '<S310>/Product12'
       *  Product: '<S310>/Product3'
       *  Product: '<S310>/Product6'
       *  Product: '<S310>/Product8'
       */
      app_B.Product2_ig = app_B.Add_op * app_B.Add_op;
      app_B.Add_mm = app_B.Product2_ig * app_B.Add_op;

      /* Sum: '<S310>/Add' incorporates:
       *  Gain: '<S223>/Gain'
       *  Gain: '<S223>/Gain1'
       *  Gain: '<S310>/Gain'
       *  Gain: '<S310>/Gain1'
       *  Product: '<S223>/Product'
       *  Product: '<S223>/Product2'
       *  Product: '<S228>/Divide'
       *  Product: '<S310>/Divide'
       *  Product: '<S310>/Divide1'
       *  Product: '<S310>/Divide2'
       *  Product: '<S310>/Product'
       *  Product: '<S310>/Product1'
       *  Product: '<S310>/Product2'
       *  Product: '<S310>/Product4'
       *  Sum: '<S223>/Add'
       */
      app_B.Merge[0] = ((-(app_B.Gain5_h * app_B.Add_pgy * app_B.Ts /
                           app_B.Add_mm) + app_B.Gain5_h * app_B.Product_ly /
                         app_B.Product2_ig) + -(app_B.Add_pgy *
        app_B.Product1_j3 / app_B.Add_op)) + (((app_B.Subtract_i *
        app_B.Selector1 + -app_B.Subtract_a) + app_B.Selector2 *
        app_B.Subtract_m) + -app_B.Product_hs) / app_B.Selector_o;

      /* Sum: '<S310>/Add1' incorporates:
       *  Gain: '<S310>/Gain2'
       *  Gain: '<S310>/Gain4'
       *  Product: '<S310>/Divide3'
       *  Product: '<S310>/Divide4'
       *  Product: '<S310>/Divide5'
       *  Product: '<S310>/Product5'
       *  Product: '<S310>/Product7'
       */
      app_B.Merge[1] = (app_B.Gain5_h * app_B.Ts / app_B.Add_mm * 3.0F +
                        app_B.Add_pgy * app_B.Product_ly / app_B.Product2_ig *
                        -2.0F) + app_B.Product1_j3 / app_B.Add_op;

      /* Sum: '<S310>/Add2' incorporates:
       *  Gain: '<S310>/Gain5'
       *  Product: '<S310>/Divide6'
       *  Product: '<S310>/Divide7'
       *  Product: '<S310>/Product9'
       */
      app_B.Merge[2] = app_B.Add_pgy * app_B.Ts / app_B.Add_mm * -3.0F +
        app_B.Product_ly / app_B.Product2_ig;

      /* Product: '<S310>/Divide8' */
      app_B.Merge[3] = app_B.Ts / app_B.Add_mm;

      /* End of Outputs for SubSystem: '<S228>/If Action Subsystem' */
      /* End of Outputs for SubSystem: '<S220>/If Action Subsystem2' */
    } else {
      /* Outputs for IfAction SubSystem: '<S220>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S229>/Action Port'
       */
      /* Merge: '<S220>/Merge' incorporates:
       *  Constant: '<S229>/C0'
       *  Constant: '<S229>/C1'
       *  Constant: '<S229>/C2'
       *  Constant: '<S229>/C3'
       *  SignalConversion generated from: '<S229>/Cof'
       */
      app_B.Merge[0] = 0.0F;
      app_B.Merge[1] = 0.0F;
      app_B.Merge[2] = 0.0F;
      app_B.Merge[3] = 0.0F;

      /* End of Outputs for SubSystem: '<S220>/If Action Subsystem3' */
    }

    /* End of If: '<S220>/If1' */

    /* Delay: '<S221>/Delay' */
    if (app_DW.icLoad_ih != 0) {
      /* Sum: '<S221>/Sum' */
      app_DW.Delay_DSTATE_id = app_B.Merge[2];
    }

    /* Sum: '<S221>/Sum' incorporates:
     *  Delay: '<S221>/Delay'
     *  Product: '<S221>/Product'
     *  Product: '<S221>/Product1'
     */
    app_DW.Delay_DSTATE_id = app_DW.Delay_DSTATE_id * 0.940882564F + 0.0591174F *
      app_B.Merge[2];

    /* Gain: '<S209>/Gain' */
    app_B.Gain = 2.0F * app_DW.Delay_DSTATE_id;

    /* Update for Delay: '<S190>/Delay' */
    app_DW.icLoad_fm = 0U;

    /* Update for Delay: '<S221>/Delay' */
    app_DW.icLoad_ih = 0U;
  }

  /* End of RelationalOperator: '<S185>/Compare' */
  /* End of Outputs for SubSystem: '<S187>/mpc_controller' */

  /* Outputs for IfAction SubSystem: '<S113>/Path_Tracking1' incorporates:
   *  ActionPort: '<S188>/Action Port'
   */
  /* If: '<S113>/If' incorporates:
   *  Gain: '<S187>/Gain'
   *  Gain: '<S188>/Gain'
   *  Gain: '<S189>/Gain'
   *  Saturate: '<S113>/Saturation'
   */
  app_B.Add_op = 3.6F * app_B.StrgWhlAng_n * 0.277777791F;

  /* End of Outputs for SubSystem: '<S113>/Path_Tracking1' */

  /* Saturate: '<S189>/Saturation' incorporates:
   *  Gain: '<S189>/Gain'
   */
  if (app_B.Add_op > 100.0F) {
    app_B.Add_pgy = 100.0F;
  } else {
    app_B.Add_pgy = app_B.Add_op;
  }

  /* End of Saturate: '<S189>/Saturation' */

  /* Saturate: '<S189>/Saturation5' incorporates:
   *  Constant: '<S189>/Constant'
   *  Sum: '<S189>/Subtract2'
   */
  if (0.0F - app_B.Reshape4[0] > 0.03F) {
    app_B.Ts = 0.03F;
  } else if (0.0F - app_B.Reshape4[0] < -0.03F) {
    app_B.Ts = -0.03F;
  } else {
    app_B.Ts = 0.0F - app_B.Reshape4[0];
  }

  /* End of Saturate: '<S189>/Saturation5' */

  /* Product: '<S189>/Product' incorporates:
   *  Trigonometry: '<S189>/Sin'
   */
  app_B.Ts = (real32_T)atan(app_B.Ts) * app_B.Add_pgy;

  /* Delay: '<S194>/Delay' */
  if (app_DW.icLoad_e0 != 0) {
    /* Sum: '<S194>/Sum' */
    app_DW.Delay_DSTATE_k = app_B.Ts;
  }

  /* Sum: '<S194>/Sum' incorporates:
   *  Delay: '<S194>/Delay'
   *  Product: '<S194>/Product'
   *  Product: '<S194>/Product1'
   */
  app_DW.Delay_DSTATE_k = app_DW.Delay_DSTATE_k * 0.969540954F + 0.0304590296F *
    app_B.Ts;

  /* Chart: '<S189>/Chart' incorporates:
   *  Constant: '<S189>/Constant2'
   */
  guard1 = false;
  if (app_DW.is_active_c9_app == 0U) {
    app_DW.is_active_c9_app = 1U;
    app_DW.is_c9_app = app_IN_OFF_in;
    app_B.Compare_gw = false;
    app_DW.local_time_k = 0.0F;

    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S192>/Constant1'
     */
    app_B.Gain5_h = 0.0F;
  } else if (app_DW.is_c9_app == 1) {
    app_B.Compare_gw = false;
    if (app_DW.local_time_k > 1.0F) {
      app_DW.is_c9_app = app_IN_ON_g;
      app_B.Compare_gw = true;
      app_DW.local_time_k = 0.0F;
      guard1 = true;
    } else {
      if (Arb_is_LatCtrlActv_bl && ((real32_T)fabs(app_B.Reshape3[0]) < 0.2F)) {
        app_DW.local_time_k += 0.02F;
      } else {
        app_DW.local_time_k = 0.0F;
      }

      /* Switch: '<S192>/Switch' incorporates:
       *  Constant: '<S192>/Constant1'
       */
      app_B.Gain5_h = 0.0F;
    }
  } else {
    /* case IN_ON: */
    app_B.Compare_gw = true;
    if (!Arb_is_LatCtrlActv_bl) {
      app_DW.is_c9_app = app_IN_OFF_in;
      app_B.Compare_gw = false;
      app_DW.local_time_k = 0.0F;

      /* Switch: '<S192>/Switch' incorporates:
       *  Constant: '<S192>/Constant1'
       */
      app_B.Gain5_h = 0.0F;
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    /* Lookup_n-D: '<S189>/1-D Lookup Table3' incorporates:
     *  Abs: '<S189>/Abs'
     *  Switch: '<S192>/Switch'
     */
    app_B.Gain5_h = look1_iflf_binlx((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg),
      app_ConstP.pooled23, app_ConstP.pooled22, 5U);

    /* Sum: '<S195>/Add' incorporates:
     *  Constant: '<S195>/Constant'
     *  Delay: '<S189>/Delay'
     *  Product: '<S195>/Product'
     *  Product: '<S195>/Product1'
     *  Sum: '<S195>/Subtract'
     *  Switch: '<S192>/Switch'
     */
    app_B.Gain5_h = (1.0F - app_B.Gain5_h) * app_DW.Delay_DSTATE_k +
      app_DW.Delay_DSTATE_p * app_B.Gain5_h;

    /* Saturate: '<S189>/Saturation4' incorporates:
     *  Constant: '<S189>/Constant'
     *  Sum: '<S189>/Subtract1'
     *  Switch: '<S192>/Switch'
     */
    if (0.0F - app_B.Reshape3[0] > 0.3F) {
      app_B.Product2_ig = 0.3F;
    } else if (0.0F - app_B.Reshape3[0] < -0.3F) {
      app_B.Product2_ig = -0.3F;
    } else {
      app_B.Product2_ig = 0.0F - app_B.Reshape3[0];
    }

    if (0.0F - app_B.Reshape3[0] > 0.3F) {
      app_B.Ts = 0.3F;
    } else if (0.0F - app_B.Reshape3[0] < -0.3F) {
      app_B.Ts = -0.3F;
    } else {
      app_B.Ts = 0.0F - app_B.Reshape3[0];
    }

    /* End of Saturate: '<S189>/Saturation4' */

    /* Switch: '<S192>/S witch3' incorporates:
     *  Constant: '<S189>/desired_stable_offset'
     *  Constant: '<S192>/Constant4'
     *  Constant: '<S192>/Constant5'
     *  Constant: '<S202>/Constant'
     *  Product: '<S192>/Product1'
     *  RelationalOperator: '<S202>/Compare'
     *  Sum: '<S189>/Subtract'
     *  Switch: '<S192>/Switch'
     */
    if ((0.0F - app_B.Ts) * app_B.Gain5_h > 0.0F) {
      app_B.s215_iter = 1;
    } else {
      app_B.s215_iter = 3;
    }

    /* End of Switch: '<S192>/S witch3' */

    /* Sum: '<S192>/Add' incorporates:
     *  Abs: '<S189>/Abs1'
     *  Constant: '<S189>/desired_stable_offset'
     *  Constant: '<S192>/Constant'
     *  Gain: '<S189>/Gain3'
     *  Lookup_n-D: '<S189>/Ki_'
     *  Lookup_n-D: '<S189>/Ki_1'
     *  Product: '<S189>/Product2'
     *  Product: '<S192>/Product'
     *  Product: '<S192>/Product2'
     *  Sum: '<S189>/Subtract'
     *  Switch: '<S192>/Switch'
     */
    app_B.Ts = look1_iflf_binlx(3.6F * app_B.Add_pgy, app_ConstP.pooled27,
      app_ConstP.Ki_tableData, 7U) * look1_iflf_binlx((real32_T)fabs(app_B.Gain),
      app_ConstP.Ki_1_bp01Data, app_ConstP.Ki_1_tableData, 6U) * (real32_T)
      app_B.s215_iter * (0.0F - app_B.Product2_ig) * 0.02F + app_B.Gain5_h;

    /* Switch: '<S192>/Switch1' incorporates:
     *  Constant: '<S189>/desired_stable_offset'
     *  Constant: '<S196>/Constant'
     *  Constant: '<S197>/Constant'
     *  Constant: '<S198>/Constant'
     *  Constant: '<S199>/Constant'
     *  Constant: '<S200>/Constant'
     *  Constant: '<S201>/Constant'
     *  Delay: '<S187>/Delay1'
     *  Logic: '<S192>/Logical Operator'
     *  Logic: '<S192>/Logical Operator1'
     *  Logic: '<S192>/Logical Operator2'
     *  Logic: '<S192>/Logical Operator3'
     *  Logic: '<S192>/Logical Operator4'
     *  RelationalOperator: '<S196>/Compare'
     *  RelationalOperator: '<S197>/Compare'
     *  RelationalOperator: '<S198>/Compare'
     *  RelationalOperator: '<S199>/Compare'
     *  RelationalOperator: '<S200>/Compare'
     *  RelationalOperator: '<S201>/Compare'
     *  Sum: '<S189>/Subtract'
     *  Switch: '<S192>/Switch'
     */
    if (((0.0F - app_B.Product2_ig >= 0.0F) && ((app_DW.Delay1_DSTATE_l < 5.0F) ||
          (app_B.Ts < 0.0F))) || ((0.0F - app_B.Product2_ig <= 0.0F) &&
         ((app_DW.Delay1_DSTATE_l > -5.0F) || (app_B.Ts > 0.0F)))) {
      app_B.Gain5_h = app_B.Ts;
    }

    /* End of Switch: '<S192>/Switch1' */
  }

  /* End of Chart: '<S189>/Chart' */

  /* Switch: '<S203>/Switch2' incorporates:
   *  Constant: '<S192>/Constant2'
   *  Delay: '<S189>/Delay'
   *  RelationalOperator: '<S203>/LowerRelop1'
   *  RelationalOperator: '<S203>/UpperRelop'
   *  Switch: '<S203>/Switch'
   */
  if (app_B.Gain5_h > 0.5F) {
    app_DW.Delay_DSTATE_p = 0.5F;
  } else if (app_B.Gain5_h < -0.5F) {
    /* Switch: '<S203>/Switch' incorporates:
     *  Delay: '<S189>/Delay'
     */
    app_DW.Delay_DSTATE_p = -0.5F;
  } else {
    app_DW.Delay_DSTATE_p = app_B.Gain5_h;
  }

  /* End of Switch: '<S203>/Switch2' */

  /* Switch: '<S193>/Switch' incorporates:
   *  Delay: '<S189>/Delay'
   *  Delay: '<S193>/Delay'
   */
  if (app_B.Compare_gw) {
    app_DW.Delay_DSTATE_f = app_DW.Delay_DSTATE_p;
  }

  /* End of Switch: '<S193>/Switch' */

  /* Chart: '<S193>/Chart' */
  app_Chart_o(app_B.Compare_gw, &app_B.ramp_cof_e, &app_DW.sf_Chart_eg);

  /* Saturate: '<S193>/Saturation1' */
  if (app_B.ramp_cof_e > 1.0F) {
    app_B.Gain5_h = 1.0F;
  } else if (app_B.ramp_cof_e < 0.0F) {
    app_B.Gain5_h = 0.0F;
  } else {
    app_B.Gain5_h = app_B.ramp_cof_e;
  }

  /* End of Saturate: '<S193>/Saturation1' */

  /* Product: '<S189>/Product1' incorporates:
   *  Constant: '<S193>/Constant'
   *  Delay: '<S193>/Delay'
   *  Gain: '<S189>/Gain5'
   *  Lookup_n-D: '<S189>/1-D Lookup Table1'
   *  Product: '<S193>/Product'
   *  Product: '<S193>/Product1'
   *  Sum: '<S193>/Add'
   *  Sum: '<S193>/Subtract'
   *  Sum: '<S193>/Sum'
   */
  app_B.Gain5_h = (((1.0F - app_B.Gain5_h) * app_DW.Delay_DSTATE_k +
                    app_DW.Delay_DSTATE_f * app_B.Gain5_h) -
                   app_DW.Delay_DSTATE_k) * look1_iflf_binlx(3.6F *
    app_B.Add_pgy, app_ConstP.pooled27, app_ConstP.uDLookupTable1_tableData_pw,
    7U);

  /* Saturate: '<S189>/Saturation1' */
  if (app_B.Gain5_h > 1.0F) {
    app_B.Gain5_h = 1.0F;
  } else {
    if (app_B.Gain5_h < -1.0F) {
      app_B.Gain5_h = -1.0F;
    }
  }

  /* End of Saturate: '<S189>/Saturation1' */

  /* Sum: '<S187>/Add' incorporates:
   *  Delay: '<S187>/Delay1'
   *  Gain: '<S189>/Gain1'
   *  Product: '<S189>/Divide'
   *  Saturate: '<S189>/Saturation2'
   */
  app_DW.Delay1_DSTATE_l = app_B.Gain5_h / app_B.Add_pgy * 57.2957802F +
    app_B.radps2degps;

  /* If: '<S113>/If' incorporates:
   *  Delay: '<S187>/Delay1'
   *  Inport: '<S186>/In1'
   *  Saturate: '<S188>/Saturation'
   */
  if (app_B.DataTypeConversion == 1) {
    /* Outputs for IfAction SubSystem: '<S113>/MPC' incorporates:
     *  ActionPort: '<S186>/Action Port'
     */
    app_B.Ts = app_DW.Delay1_DSTATE_l;

    /* End of Outputs for SubSystem: '<S113>/MPC' */
  } else {
    /* Outputs for IfAction SubSystem: '<S113>/Path_Tracking1' incorporates:
     *  ActionPort: '<S188>/Action Port'
     */
    if (app_B.Add_op > 100.0F) {
      /* Saturate: '<S188>/Saturation' */
      app_B.Add_op = 100.0F;
    }

    /* Gain: '<S315>/Gain1' */
    app_B.Product2_ig = 3.6F * app_B.Add_op;

    /* Concatenate: '<S315>/Matrix Concatenate1' incorporates:
     *  Constant: '<S315>/Constant1'
     *  Constant: '<S315>/Constant3'
     *  Lookup_n-D: '<S315>/1-D Lookup Table'
     *  Lookup_n-D: '<S315>/1-D Lookup Table1'
     *  Reshape: '<S315>/Reshape4'
     *  Reshape: '<S315>/Reshape5'
     *  Saturate: '<S188>/Saturation2'
     */
    app_B.MatrixConcatenate1[0] = look1_iflf_binlx(app_B.Product2_ig,
      app_ConstP.pooled27, app_ConstP.uDLookupTable_tableData_a, 7U);
    app_B.MatrixConcatenate1[2] = 0.0F;
    app_B.MatrixConcatenate1[1] = 0.0F;
    app_B.MatrixConcatenate1[3] = look1_iflf_binlx(app_B.Product2_ig,
      app_ConstP.pooled27, app_ConstP.uDLookupTable1_tableData, 7U);

    /* Lookup_n-D: '<S315>/1-D Lookup Table2' incorporates:
     *  Saturate: '<S188>/Saturation2'
     */
    app_B.Selector_o = look1_iflf_binlx(app_B.Product2_ig, app_ConstP.pooled27,
      app_ConstP.uDLookupTable2_tableData, 7U);

    /* Product: '<S314>/Product1' incorporates:
     *  Constant: '<S314>/Constant2'
     */
    app_B.Add_pgy = 0.5F * app_B.Add_op;

    /* Product: '<S329>/Product' incorporates:
     *  Inport: '<Root>/lateralPlan_pathCof_C2'
     *  Product: '<S328>/Product1'
     */
    app_B.Add_mm = arg_lateralPlan_pathCof_C2 * app_B.Add_pgy;

    /* Product: '<S329>/Product1' incorporates:
     *  Inport: '<Root>/lateralPlan_pathCof_C3'
     *  Product: '<S328>/Product2'
     */
    app_B.Product_fp = arg_lateralPlan_pathCof_C3 * app_B.Add_pgy *
      app_B.Add_pgy;

    /* Sum: '<S329>/Add' incorporates:
     *  Gain: '<S329>/Gain'
     *  Gain: '<S329>/Gain1'
     *  Inport: '<Root>/lateralPlan_pathCof_C1'
     *  Product: '<S329>/Product'
     *  Product: '<S329>/Product1'
     */
    app_B.Product2_ig = (app_B.Add_mm * 2.0F + arg_lateralPlan_pathCof_C1) +
      app_B.Product_fp * 3.0F;

    /* Concatenate: '<S315>/Matrix Concatenate' incorporates:
     *  Constant: '<S188>/Constant'
     *  Constant: '<S315>/Constant2'
     *  Constant: '<S315>/Constant4'
     *  Constant: '<S315>/Constant5'
     *  Product: '<S315>/Product1'
     *  Reshape: '<S315>/Reshape'
     *  Trigonometry: '<S315>/Cos'
     */
    app_B.MatrixConcatenate[0] = 1.0F;
    app_B.MatrixConcatenate[2] = app_B.Add_op * (real32_T)cos(app_B.Product2_ig)
      * 0.02F;
    app_B.MatrixConcatenate[1] = 0.0F;
    app_B.MatrixConcatenate[3] = 1.0F;

    /* Outputs for Iterator SubSystem: '<S334>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S337>/For Iterator'
     */
    app_B.s337_iter = 1;
    while (app_B.s337_iter <= 20) {
      /* Product: '<S337>/Product2' incorporates:
       *  Concatenate: '<S315>/Matrix Concatenate'
       *  DataStoreRead: '<S337>/Data Store Read'
       *  Math: '<S337>/Math Function2'
       *  Product: '<S337>/Product'
       *  Product: '<S337>/Product1'
       */
      app_B.Ts = 0.0F;
      for (app_B.s215_iter = 0; app_B.s215_iter < 2; app_B.s215_iter++) {
        /* Math: '<S337>/Math Function' incorporates:
         *  Concatenate: '<S315>/Matrix Concatenate'
         *  Math: '<S337>/Math Function1'
         */
        app_B.loop_ub_l = app_B.s215_iter << 1;
        app_B.Add1_tmp[app_B.loop_ub_l] =
          app_B.MatrixConcatenate[app_B.s215_iter];

        /* Product: '<S337>/Product' incorporates:
         *  Product: '<S337>/Product3'
         */
        app_B.Add1_tmp_p[app_B.s215_iter] = 0.0F;
        app_B.Add1_tmp_p[app_B.s215_iter] += app_DW.P[app_B.s215_iter];

        /* Math: '<S337>/Math Function' incorporates:
         *  Concatenate: '<S315>/Matrix Concatenate'
         *  DataStoreRead: '<S337>/Data Store Read'
         *  Math: '<S337>/Math Function1'
         *  Product: '<S337>/Product'
         */
        app_B.Add1_tmp[app_B.loop_ub_l + 1] =
          app_B.MatrixConcatenate[app_B.s215_iter + 2];

        /* Product: '<S337>/Product' incorporates:
         *  Product: '<S337>/Product3'
         */
        app_B.Add1_tmp_p[app_B.s215_iter + 2] = 0.0F;
        app_B.Add1_tmp_p[app_B.s215_iter + 2] += app_DW.P[app_B.s215_iter] *
          app_B.MatrixConcatenate[2];
        app_B.Add1_tmp_p[app_B.s215_iter + 2] += app_DW.P[app_B.s215_iter + 2];
        app_B.Gain5_h = app_DW.P[app_B.s215_iter + 2] * 0.02F;
        app_B.Ts += app_ConstB.MathFunction2[app_B.s215_iter] * app_B.Gain5_h;
        app_B.Gain7_o[app_B.s215_iter] = app_B.Gain5_h;
      }

      /* Sum: '<S337>/Add' incorporates:
       *  Product: '<S337>/Product2'
       */
      app_B.Gain5_h = app_B.Selector_o + app_B.Ts;
      for (app_B.s215_iter = 0; app_B.s215_iter < 2; app_B.s215_iter++) {
        /* Math: '<S337>/Math Function' incorporates:
         *  Math: '<S337>/Math Function1'
         */
        app_B.Ts = app_B.Add1_tmp[app_B.s215_iter + 2];

        /* Sum: '<S337>/Add1' incorporates:
         *  Concatenate: '<S315>/Matrix Concatenate1'
         *  Math: '<S337>/Math Function'
         *  Product: '<S337>/Product'
         */
        app_B.rtb_MatrixConcatenate1_c[app_B.s215_iter] = (app_B.Ts *
          app_B.Add1_tmp_p[1] + app_B.Add1_tmp[app_B.s215_iter] *
          app_B.Add1_tmp_p[0]) + app_B.MatrixConcatenate1[app_B.s215_iter];
        app_B.rtb_MatrixConcatenate1_c[app_B.s215_iter + 2] = (app_B.Ts *
          app_B.Add1_tmp_p[3] + app_B.Add1_tmp[app_B.s215_iter] *
          app_B.Add1_tmp_p[2]) + app_B.MatrixConcatenate1[app_B.s215_iter + 2];

        /* Product: '<S337>/Divide' incorporates:
         *  Math: '<S337>/Math Function1'
         *  Product: '<S337>/Product1'
         */
        app_B.Add1_tmp_g[app_B.s215_iter] = (app_B.Ts * app_B.Gain7_o[1] +
          app_B.Add1_tmp[app_B.s215_iter] * app_B.Gain7_o[0]) / app_B.Gain5_h;
        app_B.fv1[app_B.s215_iter] = app_B.Add1_tmp_p[(app_B.s215_iter << 1) + 1]
          * 0.02F;
      }

      /* Sum: '<S337>/Add1' incorporates:
       *  Product: '<S337>/Product3'
       */
      app_B.Add1[0] = app_B.rtb_MatrixConcatenate1_c[0] - app_B.Add1_tmp_g[0] *
        app_B.fv1[0];

      /* DataStoreWrite: '<S337>/Data Store Write' incorporates:
       *  Sum: '<S337>/Add1'
       */
      app_DW.P[0] = app_B.Add1[0];

      /* Sum: '<S337>/Add1' incorporates:
       *  Product: '<S337>/Product3'
       */
      app_B.Add1[1] = app_B.rtb_MatrixConcatenate1_c[1] - app_B.Add1_tmp_g[1] *
        app_B.fv1[0];

      /* DataStoreWrite: '<S337>/Data Store Write' incorporates:
       *  Sum: '<S337>/Add1'
       */
      app_DW.P[1] = app_B.Add1[1];

      /* Sum: '<S337>/Add1' incorporates:
       *  Product: '<S337>/Product3'
       */
      app_B.Add1[2] = app_B.rtb_MatrixConcatenate1_c[2] - app_B.Add1_tmp_g[0] *
        app_B.fv1[1];

      /* DataStoreWrite: '<S337>/Data Store Write' incorporates:
       *  Sum: '<S337>/Add1'
       */
      app_DW.P[2] = app_B.Add1[2];

      /* Sum: '<S337>/Add1' incorporates:
       *  Product: '<S337>/Product3'
       */
      app_B.Add1[3] = app_B.rtb_MatrixConcatenate1_c[3] - app_B.Add1_tmp_g[1] *
        app_B.fv1[1];

      /* DataStoreWrite: '<S337>/Data Store Write' incorporates:
       *  Sum: '<S337>/Add1'
       */
      app_DW.P[3] = app_B.Add1[3];
      app_B.s337_iter++;
    }

    /* End of Outputs for SubSystem: '<S334>/For Iterator Subsystem' */

    /* Product: '<S334>/Product' incorporates:
     *  Concatenate: '<S315>/Matrix Concatenate'
     *  Math: '<S334>/Math Function'
     *  Product: '<S334>/Product1'
     *  Sum: '<S337>/Add1'
     */
    app_B.Ts = 0.0F;
    for (app_B.s215_iter = 0; app_B.s215_iter < 2; app_B.s215_iter++) {
      /* Product: '<S334>/Product1' */
      app_B.MatrixConcatenate1[app_B.s215_iter] = 0.0F;
      app_B.MatrixConcatenate1[app_B.s215_iter] += app_B.Add1[app_B.s215_iter];

      /* Product: '<S334>/Product1' incorporates:
       *  Sum: '<S337>/Add1'
       */
      app_B.Gain5_h = app_B.Add1[app_B.s215_iter + 2];
      app_B.MatrixConcatenate1[app_B.s215_iter + 2] = 0.0F;
      app_B.MatrixConcatenate1[app_B.s215_iter + 2] +=
        app_B.Add1[app_B.s215_iter] * app_B.MatrixConcatenate[2];
      app_B.MatrixConcatenate1[app_B.s215_iter + 2] += app_B.Gain5_h;
      app_B.Ts += app_ConstB.MathFunction[app_B.s215_iter] * (app_B.Gain5_h *
        0.02F);
    }

    /* Sum: '<S334>/Add' incorporates:
     *  Product: '<S334>/Product'
     */
    app_B.Gain5_h = app_B.Selector_o + app_B.Ts;

    /* Gain: '<S315>/Gain7' incorporates:
     *  Product: '<S334>/Divide'
     *  Product: '<S334>/Product1'
     */
    app_B.Gain7_o[0] = -(0.02F * app_B.MatrixConcatenate1[1] / app_B.Gain5_h);

    /* Product: '<S334>/Divide' incorporates:
     *  Product: '<S334>/Product1'
     */
    app_B.Ts = 0.02F * app_B.MatrixConcatenate1[3] / app_B.Gain5_h;

    /* Lookup_n-D: '<S314>/1-D Lookup Table1' incorporates:
     *  Gain: '<S314>/Gain2'
     */
    app_B.Selector_o = look1_iflf_binlx(3.6F * app_B.Add_op, app_ConstP.pooled34,
      app_ConstP.uDLookupTable1_tableData_p, 5U);

    /* Gain: '<S314>/Gain4' */
    app_B.Gain5_h = 0.0174532924F * VehCP_yr_VehDynYawRate_sg;

    /* Delay: '<S333>/Delay' */
    if (app_DW.icLoad_n1 != 0) {
      /* Sum: '<S333>/Sum' */
      app_DW.Delay_DSTATE_cd = app_B.Gain5_h;
    }

    /* Sum: '<S333>/Sum' incorporates:
     *  Delay: '<S333>/Delay'
     *  Product: '<S333>/Product'
     *  Product: '<S333>/Product1'
     */
    app_DW.Delay_DSTATE_cd = app_DW.Delay_DSTATE_cd * 0.940882564F + 0.0591174F *
      app_B.Gain5_h;

    /* Product: '<S314>/Divide' incorporates:
     *  Saturate: '<S314>/Saturation2'
     */
    app_B.Gain5_h = app_DW.Delay_DSTATE_cd / app_B.Add_op;

    /* Sum: '<S314>/Subtract' incorporates:
     *  Gain: '<S314>/Gain5'
     *  Inport: '<Root>/lateralPlan_pathCof_C0'
     *  Inport: '<Root>/lateralPlan_pathCof_C1'
     *  Product: '<S314>/Product'
     *  Product: '<S328>/Product'
     *  Product: '<S328>/Product1'
     *  Product: '<S328>/Product2'
     *  Sum: '<S328>/Add'
     */
    app_B.Add_mm = app_B.Gain5_h * app_B.Add_pgy * app_B.Add_pgy * 0.5F -
      (((arg_lateralPlan_pathCof_C1 * app_B.Add_pgy + arg_lateralPlan_pathCof_C0)
        + app_B.Add_mm * app_B.Add_pgy) + app_B.Product_fp * app_B.Add_pgy);

    /* Switch: '<S331>/Switch2' incorporates:
     *  RelationalOperator: '<S331>/LowerRelop1'
     *  RelationalOperator: '<S331>/UpperRelop'
     *  Switch: '<S331>/Switch'
     *  UnaryMinus: '<S314>/Unary Minus'
     */
    if (app_B.Add_mm > app_B.Selector_o) {
      app_B.Add_mm = app_B.Selector_o;
    } else {
      if (app_B.Add_mm < -app_B.Selector_o) {
        /* Switch: '<S331>/Switch' incorporates:
         *  UnaryMinus: '<S314>/Unary Minus'
         */
        app_B.Add_mm = -app_B.Selector_o;
      }
    }

    /* End of Switch: '<S331>/Switch2' */

    /* Delay: '<S336>/Delay' */
    if (Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_m != 1)) {
      app_DW.icLoad_jr = 1U;
    }

    app_PrevZCX.Delay_Reset_ZCE_m = Arb_is_LatCtrlActv_bl;
    if (app_DW.icLoad_jr != 0) {
      /* Sum: '<S336>/Sum' */
      app_DW.Delay_DSTATE_jy = app_B.Add_mm;
    }

    /* Sum: '<S336>/Sum' incorporates:
     *  Delay: '<S336>/Delay'
     *  Product: '<S336>/Product'
     *  Product: '<S336>/Product1'
     */
    app_DW.Delay_DSTATE_jy = app_DW.Delay_DSTATE_jy * 0.888364792F +
      0.111635208F * app_B.Add_mm;

    /* Lookup_n-D: '<S314>/1-D Lookup Table2' incorporates:
     *  Gain: '<S314>/Gain3'
     */
    app_B.Product_fp = look1_iflf_binlx(3.6F * app_B.Add_op, app_ConstP.pooled34,
      app_ConstP.uDLookupTable2_tableData_b, 5U);

    /* Sum: '<S314>/Subtract1' incorporates:
     *  Gain: '<S314>/Gain6'
     *  Gain: '<S330>/Gain'
     *  Product: '<S330>/Product'
     */
    app_B.Gain5_h = 0.5F * app_B.Gain5_h * app_B.Add_pgy * 2.0F -
      app_B.Product2_ig;

    /* Switch: '<S332>/Switch2' incorporates:
     *  RelationalOperator: '<S332>/LowerRelop1'
     *  RelationalOperator: '<S332>/UpperRelop'
     *  Switch: '<S332>/Switch'
     *  UnaryMinus: '<S314>/Unary Minus1'
     */
    if (app_B.Gain5_h > app_B.Product_fp) {
      app_B.Gain5_h = app_B.Product_fp;
    } else {
      if (app_B.Gain5_h < -app_B.Product_fp) {
        /* Switch: '<S332>/Switch' incorporates:
         *  UnaryMinus: '<S314>/Unary Minus1'
         */
        app_B.Gain5_h = -app_B.Product_fp;
      }
    }

    /* End of Switch: '<S332>/Switch2' */

    /* Delay: '<S335>/Delay' */
    if (Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_l3 != 1)) {
      app_DW.icLoad_bt = 1U;
    }

    app_PrevZCX.Delay_Reset_ZCE_l3 = Arb_is_LatCtrlActv_bl;
    if (app_DW.icLoad_bt != 0) {
      /* Sum: '<S335>/Sum' */
      app_DW.Delay_DSTATE_pq = app_B.Gain5_h;
    }

    /* Sum: '<S335>/Sum' incorporates:
     *  Delay: '<S335>/Delay'
     *  Product: '<S335>/Product'
     *  Product: '<S335>/Product1'
     */
    app_DW.Delay_DSTATE_pq = app_DW.Delay_DSTATE_pq * 0.888364792F +
      0.111635208F * app_B.Gain5_h;

    /* Product: '<S188>/Product' incorporates:
     *  Trigonometry: '<S188>/Sin'
     */
    app_B.Gain5_h = (real32_T)atan(app_B.Gain5_h) * app_B.Add_op;

    /* Delay: '<S317>/Delay' */
    if (app_DW.icLoad_ff != 0) {
      /* Sum: '<S317>/Sum' */
      app_DW.Delay_DSTATE_jd = app_B.Gain5_h;
    }

    /* Sum: '<S317>/Sum' incorporates:
     *  Delay: '<S317>/Delay'
     *  Product: '<S317>/Product'
     *  Product: '<S317>/Product1'
     */
    app_DW.Delay_DSTATE_jd = app_DW.Delay_DSTATE_jd * 0.940882564F + 0.0591174F *
      app_B.Gain5_h;

    /* Switch: '<S311>/Switch' */
    if (Arb_is_LatCtrlActv_bl) {
      /* Saturate: '<S188>/Saturation3' incorporates:
       *  Constant: '<S188>/desired_stable_offset'
       *  Sum: '<S188>/Subtract'
       *  Switch: '<S311>/Switch2'
       */
      if (0.0F - app_B.Add_mm > 0.4F) {
        app_B.Gain5_h = 0.4F;
      } else if (0.0F - app_B.Add_mm < -0.4F) {
        app_B.Gain5_h = -0.4F;
      } else {
        app_B.Gain5_h = 0.0F - app_B.Add_mm;
      }

      /* End of Saturate: '<S188>/Saturation3' */

      /* Switch: '<S311>/Switch3' incorporates:
       *  Constant: '<S311>/Constant4'
       *  Constant: '<S311>/Constant5'
       *  Constant: '<S325>/Constant'
       *  Delay: '<S188>/Delay'
       *  Product: '<S311>/Product1'
       *  RelationalOperator: '<S325>/Compare'
       *  Switch: '<S311>/Switch2'
       */
      if (app_B.Gain5_h * app_DW.Delay_DSTATE_l3 > 0.0F) {
        app_B.s215_iter = 1;
      } else {
        app_B.s215_iter = 3;
      }

      /* End of Switch: '<S311>/Switch3' */

      /* Sum: '<S311>/Add' incorporates:
       *  Constant: '<S311>/Constant'
       *  Delay: '<S188>/Delay'
       *  Gain: '<S188>/Gain3'
       *  Lookup_n-D: '<S188>/1-D Lookup Table'
       *  Product: '<S311>/Product'
       *  Product: '<S311>/Product2'
       *  Switch: '<S311>/Switch2'
       */
      app_B.Product2_ig = (real32_T)(look1_iflf_binlx(3.6F * app_B.Add_op,
        app_ConstP.pooled27, app_ConstP.uDLookupTable_tableData, 7U) * (real32_T)
        app_B.s215_iter * app_B.Gain5_h * 0.02) + app_DW.Delay_DSTATE_l3;

      /* Switch: '<S311>/Switch1' incorporates:
       *  Constant: '<S319>/Constant'
       *  Constant: '<S320>/Constant'
       *  Constant: '<S321>/Constant'
       *  Constant: '<S322>/Constant'
       *  Constant: '<S323>/Constant'
       *  Constant: '<S324>/Constant'
       *  Delay: '<S188>/Delay1'
       *  Logic: '<S311>/Logical Operator'
       *  Logic: '<S311>/Logical Operator1'
       *  Logic: '<S311>/Logical Operator2'
       *  Logic: '<S311>/Logical Operator3'
       *  Logic: '<S311>/Logical Operator4'
       *  RelationalOperator: '<S319>/Compare'
       *  RelationalOperator: '<S320>/Compare'
       *  RelationalOperator: '<S321>/Compare'
       *  RelationalOperator: '<S322>/Compare'
       *  RelationalOperator: '<S323>/Compare'
       *  RelationalOperator: '<S324>/Compare'
       *  Switch: '<S311>/Switch2'
       */
      if (((app_B.Gain5_h >= 0.0F) && ((app_DW.Delay1_DSTATE_e < 5.0F) ||
            (app_B.Product2_ig < 0.0F))) || ((app_B.Gain5_h <= 0.0F) &&
           ((app_DW.Delay1_DSTATE_e > -5.0F) || (app_B.Product2_ig > 0.0F)))) {
        /* Switch: '<S311>/Switch' */
        app_DW.Delay_DSTATE_l3 = app_B.Product2_ig;
      }

      /* End of Switch: '<S311>/Switch1' */
    } else {
      /* Switch: '<S311>/Switch' incorporates:
       *  Constant: '<S311>/Constant1'
       */
      app_DW.Delay_DSTATE_l3 = 0.0F;
    }

    /* End of Switch: '<S311>/Switch' */

    /* Switch: '<S326>/Switch2' incorporates:
     *  Constant: '<S311>/Constant2'
     *  RelationalOperator: '<S326>/LowerRelop1'
     *  RelationalOperator: '<S326>/UpperRelop'
     *  Switch: '<S326>/Switch'
     */
    if (app_DW.Delay_DSTATE_l3 > 0.5F) {
      /* Switch: '<S311>/Switch' */
      app_DW.Delay_DSTATE_l3 = 0.5F;
    } else {
      if (app_DW.Delay_DSTATE_l3 < -0.5F) {
        /* Switch: '<S311>/Switch' incorporates:
         *  Switch: '<S326>/Switch'
         */
        app_DW.Delay_DSTATE_l3 = -0.5F;
      }
    }

    /* End of Switch: '<S326>/Switch2' */

    /* Switch: '<S312>/Switch' incorporates:
     *  Delay: '<S188>/Delay'
     *  Delay: '<S312>/Delay'
     */
    if (Arb_is_LatCtrlActv_bl) {
      app_DW.Delay_DSTATE_ob = app_DW.Delay_DSTATE_l3;
    }

    /* End of Switch: '<S312>/Switch' */

    /* Chart: '<S312>/Chart' */
    app_Chart_o(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof_n, &app_DW.sf_Chart_ov);

    /* Saturate: '<S312>/Saturation1' */
    if (app_B.ramp_cof_n > 1.0F) {
      app_B.Product2_ig = 1.0F;
    } else if (app_B.ramp_cof_n < 0.0F) {
      app_B.Product2_ig = 0.0F;
    } else {
      app_B.Product2_ig = app_B.ramp_cof_n;
    }

    /* End of Saturate: '<S312>/Saturation1' */

    /* Product: '<S188>/Product1' incorporates:
     *  Constant: '<S312>/Constant'
     *  Delay: '<S312>/Delay'
     *  Gain: '<S188>/Gain5'
     *  Lookup_n-D: '<S188>/1-D Lookup Table1'
     *  Product: '<S312>/Product'
     *  Product: '<S312>/Product1'
     *  Sum: '<S312>/Add'
     *  Sum: '<S312>/Subtract'
     *  Sum: '<S312>/Sum'
     */
    app_B.Gain5_h = (((1.0F - app_B.Product2_ig) * app_DW.Delay_DSTATE_jd +
                      app_DW.Delay_DSTATE_ob * app_B.Product2_ig) -
                     app_DW.Delay_DSTATE_jd) * look1_iflf_binlx(3.6F *
      app_B.Add_op, app_ConstP.pooled27, app_ConstP.uDLookupTable1_tableData_k,
      7U);

    /* Saturate: '<S188>/Saturation1' */
    if (app_B.Gain5_h > 1.0F) {
      app_B.Gain5_h = 1.0F;
    } else {
      if (app_B.Gain5_h < -1.0F) {
        app_B.Gain5_h = -1.0F;
      }
    }

    /* End of Saturate: '<S188>/Saturation1' */

    /* Gain: '<S313>/Gain' incorporates:
     *  Delay: '<S188>/Delay1'
     *  Gain: '<S314>/Gain1'
     *  Gain: '<S314>/Gain8'
     *  Gain: '<S315>/Gain7'
     *  Inport: '<Root>/lateralPlan_pathCof_C2'
     *  Inport: '<Root>/lateralPlan_pathCof_C3'
     *  Product: '<S188>/Divide'
     *  Product: '<S314>/Product3'
     *  Product: '<S315>/Product2'
     *  Product: '<S316>/Product'
     *  Saturate: '<S188>/Saturation2'
     *  SignalConversion generated from: '<S315>/Product2'
     *  Sum: '<S313>/Add5'
     *  Sum: '<S314>/Add4'
     */
    app_DW.Delay1_DSTATE_e = ((6.0F * arg_lateralPlan_pathCof_C3 * app_B.Add_pgy
      + 2.0F * arg_lateralPlan_pathCof_C2) * app_B.Add_op + ((app_B.Gain7_o[0] *
      app_DW.Delay_DSTATE_jy + -app_B.Ts * app_DW.Delay_DSTATE_pq) +
      app_B.Gain5_h / app_B.Add_op)) * 57.2957802F;

    /* SignalConversion generated from: '<S188>/desired_Yawrate_degps_AftLimit' incorporates:
     *  Delay: '<S188>/Delay1'
     */
    app_B.Ts = app_DW.Delay1_DSTATE_e;

    /* Update for Delay: '<S333>/Delay' */
    app_DW.icLoad_n1 = 0U;

    /* Update for Delay: '<S336>/Delay' */
    app_DW.icLoad_jr = 0U;

    /* Update for Delay: '<S335>/Delay' */
    app_DW.icLoad_bt = 0U;

    /* Update for Delay: '<S317>/Delay' */
    app_DW.icLoad_ff = 0U;

    /* End of Outputs for SubSystem: '<S113>/Path_Tracking1' */
  }

  /* Switch: '<S379>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S113>/Switch' incorporates:
     *  Inport: '<Root>/lateralPlan_ctrlType'
     */
    if (arg_lateralPlan_ctrlType) {
      /* Delay: '<S379>/Delay' incorporates:
       *  Gain: '<S113>/Gain3'
       *  Inport: '<Root>/lateralPlan_rawCurvature'
       *  Product: '<S113>/Product'
       *  Saturate: '<S113>/Saturation'
       */
      app_DW.Delay_DSTATE_ii = arg_lateralPlan_rawCurvature * app_B.StrgWhlAng_n
        * 57.2957802F;
    } else {
      /* Delay: '<S379>/Delay' */
      app_DW.Delay_DSTATE_ii = app_B.Ts;
    }

    /* End of Switch: '<S113>/Switch' */
  }

  /* End of Switch: '<S379>/Switch' */

  /* Chart: '<S379>/Chart' */
  app_Chart_o(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof_f, &app_DW.sf_Chart_ba);

  /* Saturate: '<S379>/Saturation1' */
  if (app_B.ramp_cof_f > 1.0F) {
    app_B.Add_pgy = 1.0F;
  } else if (app_B.ramp_cof_f < 0.0F) {
    app_B.Add_pgy = 0.0F;
  } else {
    app_B.Add_pgy = app_B.ramp_cof_f;
  }

  /* End of Saturate: '<S379>/Saturation1' */

  /* Switch: '<S379>/Switch1' incorporates:
   *  Constant: '<S379>/Constant1'
   */
  if (Arb_is_LatCtrlActv_bl) {
    app_B.Ts = 0.0F;
  } else {
    app_B.Ts = VehCP_yr_VehDynYawRate_sg;
  }

  /* End of Switch: '<S379>/Switch1' */

  /* Saturate: '<S380>/Saturation' */
  if (app_B.StrgWhlAngGrd_m > 100.0F) {
    app_B.Add_op = 100.0F;
  } else if (app_B.StrgWhlAngGrd_m < 0.1F) {
    app_B.Add_op = 0.1F;
  } else {
    app_B.Add_op = app_B.StrgWhlAngGrd_m;
  }

  /* End of Saturate: '<S380>/Saturation' */

  /* Product: '<S380>/Divide' incorporates:
   *  Constant: '<S379>/Constant'
   *  Delay: '<S379>/Delay'
   *  Gain: '<S380>/degps2radps'
   *  Product: '<S379>/Product'
   *  Product: '<S379>/Product1'
   *  Sum: '<S379>/Add'
   *  Sum: '<S379>/Subtract'
   *  Sum: '<S379>/Sum'
   */
  app_B.Ts = (((1.0F - app_B.Add_pgy) * VehCP_yr_VehDynYawRate_sg +
               app_DW.Delay_DSTATE_ii * app_B.Add_pgy) - app_B.Ts) *
    0.0174532924F / app_B.Add_op;

  /* Switch: '<S384>/Switch2' incorporates:
   *  RelationalOperator: '<S384>/LowerRelop1'
   *  RelationalOperator: '<S384>/UpperRelop'
   *  Switch: '<S384>/Switch'
   *  UnaryMinus: '<S380>/Unary Minus1'
   */
  if (app_B.Ts > app_B.uDLookupTable) {
    app_B.Ts = app_B.uDLookupTable;
  } else {
    if (app_B.Ts < -app_B.uDLookupTable) {
      /* Switch: '<S384>/Switch' incorporates:
       *  UnaryMinus: '<S380>/Unary Minus1'
       */
      app_B.Ts = -app_B.uDLookupTable;
    }
  }

  /* End of Switch: '<S384>/Switch2' */

  /* Product: '<S381>/Product' incorporates:
   *  Product: '<S380>/Product'
   */
  app_B.uDLookupTable = app_B.Ts * app_B.StrgWhlAngGrd_m * app_B.StrgWhlAngGrd_m;

  /* Delay: '<S385>/Delay' */
  if (Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_n != 1)) {
    app_DW.icLoad_n5 = 1U;
  }

  app_PrevZCX.Delay_Reset_ZCE_n = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_n5 != 0) {
    app_DW.Delay_DSTATE_k3 = app_B.uDLookupTable;
  }

  /* Switch: '<S385>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S386>/Switch2' incorporates:
     *  Delay: '<S385>/Delay'
     *  RelationalOperator: '<S386>/LowerRelop1'
     *  RelationalOperator: '<S386>/UpperRelop'
     *  Sum: '<S385>/Add1'
     *  Sum: '<S385>/Add2'
     *  Switch: '<S386>/Switch'
     */
    if (app_B.uDLookupTable > app_DW.Delay_DSTATE_k3 + 0.04F) {
      app_B.uDLookupTable = app_DW.Delay_DSTATE_k3 + 0.04F;
    } else {
      if (app_B.uDLookupTable < app_DW.Delay_DSTATE_k3 + -0.04F) {
        /* Switch: '<S386>/Switch' incorporates:
         *  Sum: '<S385>/Add2'
         */
        app_B.uDLookupTable = app_DW.Delay_DSTATE_k3 + -0.04F;
      }
    }

    /* End of Switch: '<S386>/Switch2' */
  }

  /* End of Switch: '<S385>/Switch' */

  /* Saturate: '<S381>/Saturation' */
  if (app_B.StrgWhlAngGrd_m > 100.0F) {
    /* Saturate: '<S382>/Saturation' */
    app_B.Ts = 100.0F;
  } else if (app_B.StrgWhlAngGrd_m < 0.5F) {
    /* Saturate: '<S382>/Saturation' */
    app_B.Ts = 0.5F;
  } else {
    /* Saturate: '<S382>/Saturation' */
    app_B.Ts = app_B.StrgWhlAngGrd_m;
  }

  /* Product: '<S382>/Product' incorporates:
   *  Product: '<S381>/Divide'
   *  Saturate: '<S381>/Saturation'
   */
  app_B.Add_op = app_B.uDLookupTable / app_B.Ts * app_B.StrgWhlAngGrd_m;

  /* Switch: '<S387>/Switch2' incorporates:
   *  Constant: '<S382>/Constant'
   *  RelationalOperator: '<S387>/LowerRelop1'
   *  RelationalOperator: '<S387>/UpperRelop'
   *  Switch: '<S387>/Switch'
   */
  if (app_B.Add_op > 2.5F) {
    app_B.Add_op = 2.5F;
  } else {
    if (app_B.Add_op < -2.5F) {
      /* Switch: '<S387>/Switch' */
      app_B.Add_op = -2.5F;
    }
  }

  /* End of Switch: '<S387>/Switch2' */

  /* Gain: '<S378>/radps2degps' incorporates:
   *  Product: '<S382>/Divide'
   */
  app_B.Ts = app_B.Add_op / app_B.Ts * 57.2957802F;

  /* Delay: '<S383>/Delay' */
  if (((app_PrevZCX.Delay_Reset_ZCE_a == 1) != (int32_T)Arb_is_LatCtrlActv_bl) &&
      (app_PrevZCX.Delay_Reset_ZCE_a != 3)) {
    app_DW.icLoad_ab = 1U;
  }

  app_PrevZCX.Delay_Reset_ZCE_a = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_ab != 0) {
    /* Sum: '<S383>/Sum' */
    app_DW.Delay_DSTATE_i1 = app_B.Ts;
  }

  /* Sum: '<S383>/Sum' incorporates:
   *  Delay: '<S383>/Delay'
   *  Product: '<S383>/Product'
   *  Product: '<S383>/Product1'
   */
  app_DW.Delay_DSTATE_i1 = app_DW.Delay_DSTATE_i1 * 0.888364792F + 0.111635208F *
    app_B.Ts;

  /* Switch: '<S389>/Switch' incorporates:
   *  Delay: '<S389>/Delay'
   */
  if (Arb_is_LatCtrlActv_bl) {
    app_DW.Delay_DSTATE_hc = app_DW.Delay_DSTATE_i1;
  }

  /* End of Switch: '<S389>/Switch' */

  /* Chart: '<S389>/Chart' */
  app_Chart_o(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof, &app_DW.sf_Chart_o);

  /* Saturate: '<S389>/Saturation1' */
  if (app_B.ramp_cof > 1.0F) {
    app_B.Add_pgy = 1.0F;
  } else if (app_B.ramp_cof < 0.0F) {
    app_B.Add_pgy = 0.0F;
  } else {
    app_B.Add_pgy = app_B.ramp_cof;
  }

  /* End of Saturate: '<S389>/Saturation1' */

  /* Delay: '<S393>/Delay' */
  if (app_DW.icLoad_h != 0) {
    /* Sum: '<S393>/Sum' */
    app_DW.Delay_DSTATE_b = APP_IN_yr_VehDynYawRate_sg;
  }

  /* Sum: '<S393>/Sum' incorporates:
   *  Delay: '<S393>/Delay'
   *  Product: '<S393>/Product'
   *  Product: '<S393>/Product1'
   */
  app_DW.Delay_DSTATE_b = app_DW.Delay_DSTATE_b * 0.888364792F + 0.111635208F *
    APP_IN_yr_VehDynYawRate_sg;

  /* Sum: '<S389>/Sum' incorporates:
   *  Constant: '<S389>/Constant'
   *  Delay: '<S389>/Delay'
   *  Product: '<S389>/Product'
   *  Product: '<S389>/Product1'
   *  Sum: '<S389>/Add'
   *  Sum: '<S389>/Subtract'
   */
  app_B.Ts = ((1.0F - app_B.Add_pgy) * app_DW.Delay_DSTATE_b +
              app_DW.Delay_DSTATE_hc * app_B.Add_pgy) - app_DW.Delay_DSTATE_b;

  /* Switch: '<S397>/Switch2' incorporates:
   *  Constant: '<S389>/Constant1'
   *  RelationalOperator: '<S397>/LowerRelop1'
   *  RelationalOperator: '<S397>/UpperRelop'
   *  Switch: '<S397>/Switch'
   */
  if (app_B.Ts > 2.0F) {
    app_B.Ts = 2.0F;
  } else {
    if (app_B.Ts < -2.0F) {
      /* Switch: '<S397>/Switch' */
      app_B.Ts = -2.0F;
    }
  }

  /* End of Switch: '<S397>/Switch2' */

  /* Product: '<S399>/Product2' incorporates:
   *  Lookup_n-D: '<S389>/KP_loTable'
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Add_op = app_B.Ts * look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
    app_ConstP.pooled41, app_ConstP.KP_loTable_tableData, 14U);

  /* Switch: '<S396>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S396>/Switch3' incorporates:
     *  Constant: '<S405>/Constant'
     *  Delay: '<S389>/Delay1'
     *  Gain: '<S396>/Gain'
     *  Lookup_n-D: '<S389>/KI_loTable'
     *  Product: '<S396>/Product1'
     *  RelationalOperator: '<S405>/Compare'
     *  Saturate: '<S4>/Saturation'
     *  Switch: '<S396>/Switch2'
     */
    if (app_B.Ts * app_DW.Delay1_DSTATE_b > 0.0F) {
      app_B.Add_pgy = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
        app_ConstP.pooled41, app_ConstP.KI_loTable_tableData, 14U);
    } else {
      app_B.Add_pgy = 3.0F * look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
        app_ConstP.pooled41, app_ConstP.KI_loTable_tableData, 14U);
    }

    /* End of Switch: '<S396>/Switch3' */

    /* Sum: '<S396>/Add' incorporates:
     *  Constant: '<S396>/Constant'
     *  Delay: '<S389>/Delay1'
     *  Product: '<S396>/Product'
     *  Switch: '<S396>/Switch2'
     */
    app_B.Add_pgy = (real32_T)(app_B.Ts * app_B.Add_pgy * 0.02) +
      app_DW.Delay1_DSTATE_b;

    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S389>/MaxAllowed_FBW_Item1'
     *  Constant: '<S401>/Constant'
     *  Constant: '<S402>/Constant'
     *  Constant: '<S403>/Constant'
     *  Constant: '<S404>/Constant'
     *  Delay: '<S389>/Delay2'
     *  Logic: '<S396>/Logical Operator'
     *  Logic: '<S396>/Logical Operator1'
     *  Logic: '<S396>/Logical Operator2'
     *  Logic: '<S396>/Logical Operator3'
     *  Logic: '<S396>/Logical Operator4'
     *  RelationalOperator: '<S396>/Relational Operator'
     *  RelationalOperator: '<S396>/Relational Operator1'
     *  RelationalOperator: '<S401>/Compare'
     *  RelationalOperator: '<S402>/Compare'
     *  RelationalOperator: '<S403>/Compare'
     *  RelationalOperator: '<S404>/Compare'
     *  Switch: '<S396>/Switch2'
     */
    if (((app_B.Ts >= 0.0F) && ((app_DW.Delay2_DSTATE_b < 0.25F) ||
          (app_B.Add_pgy < 0.0F))) || ((app_B.Ts <= 0.0F) &&
         ((app_DW.Delay2_DSTATE_b > -0.25F) || (app_B.Add_pgy > 0.0F)))) {
      /* Switch: '<S396>/Switch' */
      app_DW.Delay1_DSTATE_b = app_B.Add_pgy;
    }

    /* End of Switch: '<S396>/Switch1' */
  } else {
    /* Switch: '<S396>/Switch' incorporates:
     *  Constant: '<S396>/Constant1'
     */
    app_DW.Delay1_DSTATE_b = 0.0F;
  }

  /* End of Switch: '<S396>/Switch' */

  /* Switch: '<S406>/Switch2' incorporates:
   *  Constant: '<S396>/Constant2'
   *  RelationalOperator: '<S406>/LowerRelop1'
   *  RelationalOperator: '<S406>/UpperRelop'
   *  Switch: '<S406>/Switch'
   */
  if (app_DW.Delay1_DSTATE_b > 0.2F) {
    /* Switch: '<S396>/Switch' */
    app_DW.Delay1_DSTATE_b = 0.2F;
  } else {
    if (app_DW.Delay1_DSTATE_b < -0.2F) {
      /* Switch: '<S396>/Switch' incorporates:
       *  Switch: '<S406>/Switch'
       */
      app_DW.Delay1_DSTATE_b = -0.2F;
    }
  }

  /* End of Switch: '<S406>/Switch2' */

  /* Switch: '<S407>/Switch2' incorporates:
   *  Constant: '<S399>/Constant1'
   *  RelationalOperator: '<S407>/LowerRelop1'
   *  RelationalOperator: '<S407>/UpperRelop'
   *  Switch: '<S407>/Switch'
   */
  if (app_B.Add_op > 0.2F) {
    app_B.Add_op = 0.2F;
  } else {
    if (app_B.Add_op < -0.2F) {
      /* Switch: '<S407>/Switch' */
      app_B.Add_op = -0.2F;
    }
  }

  /* End of Switch: '<S407>/Switch2' */

  /* Sum: '<S389>/Add1' incorporates:
   *  Delay: '<S389>/Delay1'
   */
  app_DW.Delay2_DSTATE_b = app_B.Add_op + app_DW.Delay1_DSTATE_b;

  /* Switch: '<S398>/Switch2' incorporates:
   *  Constant: '<S389>/MaxAllowed_FBW_Item'
   *  RelationalOperator: '<S398>/LowerRelop1'
   *  RelationalOperator: '<S398>/UpperRelop'
   *  Switch: '<S398>/Switch'
   */
  if (app_DW.Delay2_DSTATE_b > 0.25F) {
    /* Sum: '<S389>/Add1' */
    app_DW.Delay2_DSTATE_b = 0.25F;
  } else {
    if (app_DW.Delay2_DSTATE_b < -0.25F) {
      /* Sum: '<S389>/Add1' incorporates:
       *  Switch: '<S398>/Switch'
       */
      app_DW.Delay2_DSTATE_b = -0.25F;
    }
  }

  /* End of Switch: '<S398>/Switch2' */

  /* Product: '<S391>/Product' incorporates:
   *  Constant: '<S390>/Constant'
   *  Constant: '<S390>/Constant1'
   *  Constant: '<S390>/Constant2'
   *  Constant: '<S391>/Constant'
   *  Delay: '<S389>/Delay2'
   *  Gain: '<S390>/Gain'
   *  Gain: '<S390>/deg2rad'
   *  Gain: '<S390>/rad2deg'
   *  Product: '<S390>/Divide'
   *  Product: '<S390>/Divide1'
   *  Product: '<S390>/Product'
   *  Product: '<S390>/Product1'
   *  Sum: '<S390>/Add'
   *  Sum: '<S394>/Add'
   *  Trigonometry: '<S390>/Atan'
   */
  app_B.StrgWhlAng_n = (((real32_T)atan(0.0174532924F * app_DW.Delay_DSTATE_i1 /
    app_B.StrgWhlAng_n * 2.65F) * 57.2957802F + 0.0174532924F *
    app_DW.Delay_DSTATE_i1 * app_B.StrgWhlAng_n * 2.0F / 9.81F) +
                        app_DW.Delay2_DSTATE_b) * 15.2F;

  /* Delay: '<S413>/Delay' */
  if (Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_l != 1)) {
    app_DW.icLoad_j = 1U;
  }

  app_PrevZCX.Delay_Reset_ZCE_l = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_j != 0) {
    app_DW.Delay_DSTATE_bk = app_B.StrgWhlAng_n;
  }

  /* Switch: '<S413>/Switch' incorporates:
   *  Delay: '<S347>/Delay'
   *  Switch: '<S347>/Switch'
   *  Switch: '<S392>/Switch'
   */
  if (Arb_is_LatCtrlActv_bl) {
    /* Lookup_n-D: '<S409>/StrWhlAng_RateLmt' incorporates:
     *  Saturate: '<S4>/Saturation'
     */
    app_B.Ts = look1_iflf_binlca(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.StrWhlAng_RateLmt_bp01Data,
      app_ConstP.StrWhlAng_RateLmt_tableData, 15U);

    /* Sum: '<S413>/Add1' incorporates:
     *  Constant: '<S409>/Constant'
     *  Delay: '<S413>/Delay'
     *  Product: '<S413>/Product'
     */
    app_B.Add1_g = app_B.Ts * 0.02 + app_DW.Delay_DSTATE_bk;

    /* Switch: '<S414>/Switch2' incorporates:
     *  RelationalOperator: '<S414>/LowerRelop1'
     */
    if (app_B.StrgWhlAng_n > app_B.Add1_g) {
      app_B.StrgWhlAng_n = (real32_T)app_B.Add1_g;
    } else {
      /* Sum: '<S413>/Add2' incorporates:
       *  Constant: '<S409>/Constant'
       *  Delay: '<S413>/Delay'
       *  Product: '<S413>/Product1'
       *  UnaryMinus: '<S409>/Unary Minus'
       */
      app_B.Add1_g = 0.02 * -app_B.Ts + app_DW.Delay_DSTATE_bk;

      /* Switch: '<S414>/Switch' incorporates:
       *  RelationalOperator: '<S414>/UpperRelop'
       */
      if (app_B.StrgWhlAng_n < app_B.Add1_g) {
        app_B.StrgWhlAng_n = (real32_T)app_B.Add1_g;
      }

      /* End of Switch: '<S414>/Switch' */
    }

    /* End of Switch: '<S414>/Switch2' */

    /* Lookup_n-D: '<S410>/LUT_MaxLatAcc' incorporates:
     *  Saturate: '<S4>/Saturation'
     */
    app_B.Add_op = look1_iflf_binlca(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.LUT_MaxLatAcc_bp01Data, app_ConstP.LUT_MaxLatAcc_tableData, 17U);

    /* Saturate: '<S410>/Saturation2' */
    if (VehCP_V_VehSpdAvgDrvn_sg > 180.0F) {
      app_B.Ts = 180.0F;
    } else if (VehCP_V_VehSpdAvgDrvn_sg < 5.0F) {
      app_B.Ts = 5.0F;
    } else {
      app_B.Ts = VehCP_V_VehSpdAvgDrvn_sg;
    }

    /* End of Saturate: '<S410>/Saturation2' */

    /* Gain: '<S410>/Gain' */
    app_B.Ts *= 0.277777791F;

    /* Abs: '<S410>/Abs' incorporates:
     *  Constant: '<S116>/Constant'
     *  Constant: '<S116>/Constant1'
     *  Constant: '<S116>/Constant2'
     *  Constant: '<S410>/C_GravAcc'
     *  Gain: '<S410>/rad2deg'
     *  Product: '<S410>/Divide1'
     *  Product: '<S410>/Product'
     *  Product: '<S410>/Product1'
     *  Product: '<S410>/Product2'
     *  Product: '<S410>/Product3'
     *  Sum: '<S410>/Add'
     *  Trigonometry: '<S410>/Trigonometric Function'
     */
    YRC_angD_ReqStrgWhlAng_sg = (real32_T)fabs(((real32_T)atan(2.65F / (app_B.Ts
      * app_B.Ts) * 9.8F * app_B.Add_op) * 57.2957802F + app_B.Add_op * 2.0F) *
      15.2F);

    /* Switch: '<S412>/Switch2' incorporates:
     *  RelationalOperator: '<S412>/LowerRelop1'
     */
    if (app_B.StrgWhlAng_n <= YRC_angD_ReqStrgWhlAng_sg) {
      /* Switch: '<S412>/Switch' incorporates:
       *  Gain: '<S411>/Gain3'
       *  RelationalOperator: '<S412>/UpperRelop'
       */
      if (app_B.StrgWhlAng_n < -YRC_angD_ReqStrgWhlAng_sg) {
        /* Abs: '<S410>/Abs' incorporates:
         *  Switch: '<S392>/Switch'
         */
        YRC_angD_ReqStrgWhlAng_sg = -YRC_angD_ReqStrgWhlAng_sg;
      } else {
        /* Abs: '<S410>/Abs' incorporates:
         *  Switch: '<S392>/Switch'
         */
        YRC_angD_ReqStrgWhlAng_sg = app_B.StrgWhlAng_n;
      }

      /* End of Switch: '<S412>/Switch' */
    }

    /* End of Switch: '<S412>/Switch2' */
    app_DW.Delay_DSTATE_ji = YRC_angD_ReqStrgWhlAng_sg;
  } else {
    /* Abs: '<S410>/Abs' incorporates:
     *  Switch: '<S392>/Switch'
     */
    YRC_angD_ReqStrgWhlAng_sg = VehCP_angD_StrgWhlAng_sg;
  }

  /* End of Switch: '<S413>/Switch' */

  /* Lookup_n-D: '<S348>/1-D Lookup Table1' incorporates:
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Ts = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg, app_ConstP.pooled41,
    app_ConstP.uDLookupTable1_tableData_c, 14U);

  /* Chart: '<S347>/Chart' */
  app_Chart_o(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof_fu, &app_DW.sf_Chart_em);

  /* Saturate: '<S347>/Saturation1' */
  if (app_B.ramp_cof_fu > 1.0F) {
    app_B.Add_pgy = 1.0F;
  } else if (app_B.ramp_cof_fu < 0.0F) {
    app_B.Add_pgy = 0.0F;
  } else {
    app_B.Add_pgy = app_B.ramp_cof_fu;
  }

  /* End of Saturate: '<S347>/Saturation1' */

  /* Sum: '<S347>/Sum' incorporates:
   *  Constant: '<S347>/Constant'
   *  Delay: '<S347>/Delay'
   *  Product: '<S347>/Product'
   *  Product: '<S347>/Product1'
   *  Sum: '<S347>/Add'
   *  Sum: '<S347>/Subtract'
   */
  app_B.Add_op = ((1.0F - app_B.Add_pgy) * VehCP_angD_StrgWhlAng_sg +
                  app_DW.Delay_DSTATE_ji * app_B.Add_pgy) -
    VehCP_angD_StrgWhlAng_sg;

  /* Delay: '<S351>/Delay' */
  if (Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_nn != 1)) {
    app_DW.icLoad_nb = 1U;
  }

  app_PrevZCX.Delay_Reset_ZCE_nn = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_nb != 0) {
    app_DW.Delay_DSTATE_hp = app_B.Add_op;
  }

  /* Switch: '<S351>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S352>/Switch2' incorporates:
     *  Delay: '<S351>/Delay'
     *  RelationalOperator: '<S352>/LowerRelop1'
     *  RelationalOperator: '<S352>/UpperRelop'
     *  Sum: '<S351>/Add1'
     *  Sum: '<S351>/Add2'
     *  Switch: '<S352>/Switch'
     */
    if (app_B.Add_op > app_DW.Delay_DSTATE_hp + 0.299999982F) {
      app_B.Add_op = app_DW.Delay_DSTATE_hp + 0.299999982F;
    } else {
      if (app_B.Add_op < app_DW.Delay_DSTATE_hp + -0.299999982F) {
        /* Switch: '<S352>/Switch' incorporates:
         *  Sum: '<S351>/Add2'
         */
        app_B.Add_op = app_DW.Delay_DSTATE_hp + -0.299999982F;
      }
    }

    /* End of Switch: '<S352>/Switch2' */
  }

  /* End of Switch: '<S351>/Switch' */

  /* Sum: '<S348>/Subtract' incorporates:
   *  Lookup_n-D: '<S348>/1-D Lookup Table'
   *  Product: '<S348>/Product'
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Add_pgy = app_B.Add_op * look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
    app_ConstP.pooled41, app_ConstP.uDLookupTable_tableData_dy, 14U);

  /* Switch: '<S353>/Switch2' incorporates:
   *  RelationalOperator: '<S353>/LowerRelop1'
   *  RelationalOperator: '<S353>/UpperRelop'
   *  Switch: '<S353>/Switch'
   *  UnaryMinus: '<S348>/Unary Minus'
   */
  if (app_B.Add_pgy > app_B.Ts) {
    app_B.Add_pgy = app_B.Ts;
  } else {
    if (app_B.Add_pgy < -app_B.Ts) {
      /* Switch: '<S353>/Switch' incorporates:
       *  UnaryMinus: '<S348>/Unary Minus'
       */
      app_B.Add_pgy = -app_B.Ts;
    }
  }

  /* End of Switch: '<S353>/Switch2' */

  /* Switch: '<S355>/Switch' incorporates:
   *  Abs: '<S355>/Abs2'
   *  Abs: '<S355>/Abs6'
   *  Abs: '<S355>/Abs8'
   *  Constant: '<S374>/Constant'
   *  Gain: '<S355>/Normal2comft'
   *  Lookup_n-D: '<S355>/1-D Lookup Table1'
   *  Lookup_n-D: '<S355>/1-D Lookup Table10'
   *  Lookup_n-D: '<S355>/1-D Lookup Table11'
   *  Lookup_n-D: '<S355>/1-D Lookup Table15'
   *  Lookup_n-D: '<S355>/1-D Lookup Table17'
   *  Lookup_n-D: '<S355>/1-D Lookup Table18'
   *  Lookup_n-D: '<S355>/1-D Lookup Table2'
   *  Lookup_n-D: '<S355>/1-D Lookup Table3'
   *  Lookup_n-D: '<S355>/1-D Lookup Table4'
   *  Lookup_n-D: '<S355>/1-D Lookup Table5'
   *  Lookup_n-D: '<S355>/1-D Lookup Table7'
   *  Lookup_n-D: '<S355>/1-D Lookup Table8'
   *  Lookup_n-D: '<S355>/1-D Lookup Table9'
   *  Lookup_n-D: '<S355>/2-D Lookup Table'
   *  Product: '<S355>/Product'
   *  Product: '<S355>/Product1'
   *  Product: '<S355>/Product2'
   *  Product: '<S355>/Product3'
   *  RelationalOperator: '<S374>/Compare'
   *  Saturate: '<S4>/Saturation'
   */
  if (VehCP_n_StrgCustSetngDspCmd_u8 != 1) {
    /* Lookup_n-D: '<S355>/1-D Lookup Table1' incorporates:
     *  Abs: '<S355>/Abs4'
     *  Lookup_n-D: '<S355>/1-D Lookup Table6'
     */
    app_B.Gain5_h = look1_iflf_binlc((real32_T)fabs(app_B.Add_pgy),
      app_ConstP.pooled38, app_ConstP.pooled33, 5U);

    /* Abs: '<S355>/Abs2' incorporates:
     *  Abs: '<S355>/Abs'
     *  Abs: '<S355>/Abs3'
     */
    app_B.Ts = (real32_T)fabs(YRC_angD_ReqStrgWhlAng_sg);
    app_B.MatrixConcatenate1[0] = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled41, app_ConstP.uDLookupTable3_tableData, 14U) *
      look1_iflf_binlc(app_B.Ts, app_ConstP.pooled40, app_ConstP.pooled39, 9U) *
      app_B.Gain5_h;
    app_B.MatrixConcatenate1[1] = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled41, app_ConstP.uDLookupTable4_tableData, 14U) *
      look1_iflf_binlc(app_B.Ts, app_ConstP.uDLookupTable9_bp01Data,
                       app_ConstP.uDLookupTable9_tableData, 9U) * app_B.Gain5_h;
    app_B.MatrixConcatenate1[2] = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled41, app_ConstP.pooled42, 14U);
    app_B.MatrixConcatenate1[3] = look1_iflf_binlx(app_B.Ts, app_ConstP.pooled44,
      app_ConstP.pooled43, 10U);
  } else {
    /* Abs: '<S355>/Abs6' incorporates:
     *  Abs: '<S355>/Abs7'
     *  Abs: '<S355>/Abs9'
     */
    app_B.Gain5_h = (real32_T)fabs(YRC_angD_ReqStrgWhlAng_sg);

    /* Abs: '<S355>/Abs8' incorporates:
     *  Abs: '<S355>/Abs5'
     */
    app_B.Ts = (real32_T)fabs(app_B.Add_pgy);
    app_B.MatrixConcatenate1[0] = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled41, app_ConstP.uDLookupTable7_tableData, 14U) *
      look1_iflf_binlc(app_B.Gain5_h, app_ConstP.pooled40, app_ConstP.pooled39,
                       9U) * look1_iflf_binlc(app_B.Ts, app_ConstP.pooled38,
      app_ConstP.pooled33, 5U);
    app_B.MatrixConcatenate1[1] = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled41, app_ConstP.uDLookupTable10_tableData, 14U) *
      look2_iflf_binlx(app_B.Gain5_h, app_B.Ts,
                       app_ConstP.uDLookupTable_bp01Data,
                       app_ConstP.uDLookupTable_bp02Data,
                       app_ConstP.uDLookupTable_tableData_d,
                       app_ConstP.uDLookupTable_maxIndex, 7U);
    app_B.MatrixConcatenate1[2] = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled41, app_ConstP.pooled42, 14U);
    app_B.MatrixConcatenate1[3] = 0.75F * look1_iflf_binlx(app_B.Gain5_h,
      app_ConstP.pooled44, app_ConstP.pooled43, 10U);
  }

  /* End of Switch: '<S355>/Switch' */

  /* Product: '<S358>/Product2' incorporates:
   *  Gain: '<S358>/Gain1'
   *  Product: '<S358>/Product1'
   */
  app_B.StrgWhlAngGrd_m = app_B.StrgWhlAngGrd_m * app_B.StrgWhlAngGrd_m *
    YRC_angD_ReqStrgWhlAng_sg * app_B.MatrixConcatenate1[3];

  /* Saturate: '<S358>/Saturation' */
  if (app_B.StrgWhlAngGrd_m > 2.5F) {
    app_B.StrgWhlAngGrd_m = 2.5F;
  } else {
    if (app_B.StrgWhlAngGrd_m < -2.5F) {
      app_B.StrgWhlAngGrd_m = -2.5F;
    }
  }

  /* End of Saturate: '<S358>/Saturation' */

  /* Lookup_n-D: '<S360>/1-D Lookup Table' incorporates:
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Ts = look1_iflf_binlx(VehCP_V_VehSpdAvgDrvn_sg, app_ConstP.pooled34,
    app_ConstP.uDLookupTable_tableData_e, 5U);

  /* Product: '<S360>/Product' */
  app_B.Gain5_h = app_B.Add_pgy * app_B.MatrixConcatenate1[0];

  /* Product: '<S357>/Divide' incorporates:
   *  Constant: '<S357>/Constant'
   *  Sum: '<S357>/Subtract'
   *  UnitDelay: '<S357>/Unit Delay'
   */
  app_B.Product2_ig = (app_B.Add_pgy - app_DW.UnitDelay_DSTATE) / 0.02F;

  /* Saturate: '<S357>/Saturation' */
  if (app_B.Product2_ig > 10.0F) {
    app_B.Product2_ig = 10.0F;
  } else {
    if (app_B.Product2_ig < -10.0F) {
      app_B.Product2_ig = -10.0F;
    }
  }

  /* End of Saturate: '<S357>/Saturation' */

  /* Delay: '<S363>/Delay' */
  if (app_DW.icLoad_iy != 0) {
    /* Sum: '<S363>/Sum' */
    app_DW.Delay_DSTATE_jr = app_B.Product2_ig;
  }

  /* Sum: '<S363>/Sum' incorporates:
   *  Delay: '<S363>/Delay'
   *  Product: '<S363>/Product'
   *  Product: '<S363>/Product1'
   */
  app_DW.Delay_DSTATE_jr = app_DW.Delay_DSTATE_jr * 0.940882564F + 0.0591174F *
    app_B.Product2_ig;

  /* Product: '<S357>/Product' */
  app_B.Product2_ig = app_DW.Delay_DSTATE_jr * app_B.MatrixConcatenate1[2];

  /* Switch: '<S359>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S359>/Switch3' incorporates:
     *  Constant: '<S359>/Constant4'
     *  Constant: '<S359>/Constant5'
     *  Constant: '<S370>/Constant'
     *  Delay: '<S354>/Delay'
     *  Product: '<S359>/Product1'
     *  RelationalOperator: '<S370>/Compare'
     */
    if (app_B.Add_pgy * app_DW.Delay_DSTATE_nr >= 0.0F) {
      app_B.s215_iter = 1;
    } else {
      app_B.s215_iter = 3;
    }

    /* End of Switch: '<S359>/Switch3' */

    /* Sum: '<S359>/Add' incorporates:
     *  Constant: '<S359>/Constant'
     *  Delay: '<S354>/Delay'
     *  Product: '<S359>/Product'
     *  Product: '<S359>/Product2'
     */
    app_B.Add_mm = (real32_T)(app_B.MatrixConcatenate1[1] * (real32_T)
      app_B.s215_iter * app_B.Add_pgy * 0.02) + app_DW.Delay_DSTATE_nr;

    /* Switch: '<S359>/Switch1' incorporates:
     *  Abs: '<S354>/Abs'
     *  Constant: '<S356>/Constant'
     *  Constant: '<S364>/Constant'
     *  Constant: '<S365>/Constant'
     *  Constant: '<S366>/Constant'
     *  Constant: '<S367>/Constant'
     *  Constant: '<S368>/Constant'
     *  Constant: '<S369>/Constant'
     *  Delay: '<S354>/Delay1'
     *  Logic: '<S359>/Logical Operator'
     *  Logic: '<S359>/Logical Operator1'
     *  Logic: '<S359>/Logical Operator2'
     *  Logic: '<S359>/Logical Operator3'
     *  Logic: '<S359>/Logical Operator4'
     *  Logic: '<S359>/Logical Operator5'
     *  Logic: '<S359>/Logical Operator6'
     *  RelationalOperator: '<S356>/Compare'
     *  RelationalOperator: '<S364>/Compare'
     *  RelationalOperator: '<S365>/Compare'
     *  RelationalOperator: '<S366>/Compare'
     *  RelationalOperator: '<S367>/Compare'
     *  RelationalOperator: '<S368>/Compare'
     *  RelationalOperator: '<S369>/Compare'
     */
    if (((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg) < 1.0F) && (((app_B.Add_pgy
           >= 0.0F) && ((app_DW.Delay1_DSTATE_a < 3.0F) || (app_B.Add_mm < 0.0F)))
         || ((app_B.Add_pgy <= 0.0F) && ((app_DW.Delay1_DSTATE_a > -3.0F) ||
           (app_B.Add_mm > 0.0F))))) {
      /* Switch: '<S359>/Switch' */
      app_DW.Delay_DSTATE_nr = app_B.Add_mm;
    }

    /* End of Switch: '<S359>/Switch1' */
  } else {
    /* Switch: '<S359>/Switch' incorporates:
     *  Constant: '<S359>/Constant1'
     */
    app_DW.Delay_DSTATE_nr = 0.0F;
  }

  /* End of Switch: '<S359>/Switch' */

  /* Switch: '<S371>/Switch2' incorporates:
   *  Constant: '<S359>/Constant2'
   *  RelationalOperator: '<S371>/LowerRelop1'
   *  RelationalOperator: '<S371>/UpperRelop'
   *  Switch: '<S371>/Switch'
   */
  if (app_DW.Delay_DSTATE_nr > 3.0F) {
    /* Switch: '<S359>/Switch' */
    app_DW.Delay_DSTATE_nr = 3.0F;
  } else {
    if (app_DW.Delay_DSTATE_nr < -3.0F) {
      /* Switch: '<S359>/Switch' incorporates:
       *  Switch: '<S371>/Switch'
       */
      app_DW.Delay_DSTATE_nr = -3.0F;
    }
  }

  /* End of Switch: '<S371>/Switch2' */

  /* Switch: '<S372>/Switch2' incorporates:
   *  RelationalOperator: '<S372>/LowerRelop1'
   *  RelationalOperator: '<S372>/UpperRelop'
   *  Switch: '<S372>/Switch'
   *  UnaryMinus: '<S360>/Unary Minus'
   */
  if (app_B.Gain5_h > app_B.Ts) {
    app_B.Gain5_h = app_B.Ts;
  } else {
    if (app_B.Gain5_h < -app_B.Ts) {
      /* Switch: '<S372>/Switch' incorporates:
       *  UnaryMinus: '<S360>/Unary Minus'
       */
      app_B.Gain5_h = -app_B.Ts;
    }
  }

  /* End of Switch: '<S372>/Switch2' */

  /* Switch: '<S362>/Switch2' incorporates:
   *  Constant: '<S357>/Constant1'
   *  RelationalOperator: '<S362>/LowerRelop1'
   *  RelationalOperator: '<S362>/UpperRelop'
   *  Switch: '<S362>/Switch'
   */
  if (app_B.Product2_ig > 1.0F) {
    app_B.Product2_ig = 1.0F;
  } else {
    if (app_B.Product2_ig < -1.0F) {
      /* Switch: '<S362>/Switch' */
      app_B.Product2_ig = -1.0F;
    }
  }

  /* End of Switch: '<S362>/Switch2' */

  /* Sum: '<S354>/Sum' incorporates:
   *  Abs: '<S360>/Abs'
   *  Delay: '<S354>/Delay'
   *  Delay: '<S354>/Delay1'
   *  Lookup_n-D: '<S360>/1-D Lookup Table3'
   *  Product: '<S373>/Product'
   */
  app_DW.Delay1_DSTATE_a = ((app_B.Gain5_h * look1_iflf_binlx((real32_T)fabs
    (VehCP_T_DrvrStrgDlvrdToq_sg), app_ConstP.pooled23, app_ConstP.pooled22, 5U)
    + app_B.StrgWhlAngGrd_m) + app_B.Product2_ig) + app_DW.Delay_DSTATE_nr;

  /* Abs: '<S338>/Abs1' */
  app_B.StrgWhlAngGrd_m = (real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg);

  /* Chart: '<S338>/Chart1' incorporates:
   *  Constant: '<S338>/c_VLatC_MainLoopTime_Sec1'
   *  Constant: '<S338>/c_VLatC_MainLoopTime_Sec2'
   *  Constant: '<S338>/k_VLatC_T_OvrrdDelayToqThd_sg'
   *  Constant: '<S338>/k_VLatC_t_OvrrdDelayRsTm_sg1'
   *  RelationalOperator: '<S338>/Relational Operator'
   */
  app_Chart4(app_B.StrgWhlAngGrd_m > 1.0F, 0.02F, 0.6F, 0.02F, &app_B.Compare_gw,
             &app_DW.sf_Chart1_p5);

  /* Chart: '<S338>/Chart2' incorporates:
   *  Constant: '<S338>/c_VLatC_MainLoopTime_Sec'
   *  Constant: '<S338>/k_VLatC_t_OvrrdDelayRsTm_sg'
   */
  if (app_DW.is_active_c11_app == 0U) {
    app_DW.is_active_c11_app = 1U;
    app_DW.is_c11_app = app_IN_OFF_in;
    app_B.out_cond_iu = false;
    app_DW.local_time = 0.0F;
  } else if (app_DW.is_c11_app == 1) {
    app_B.out_cond_iu = false;
    if (app_DW.local_time > 2.0F) {
      app_DW.is_c11_app = app_IN_ON_g;
      app_B.out_cond_iu = true;
      app_DW.local_time = 0.0F;
    } else if (Arb_is_LatCtrlActv_bl) {
      app_DW.local_time += 0.02F;
    } else {
      app_DW.local_time = 0.0F;
    }
  } else {
    /* case IN_ON: */
    app_B.out_cond_iu = true;
    if (app_DW.local_time > 0.02F) {
      app_DW.is_c11_app = app_IN_OFF_in;
      app_B.out_cond_iu = false;
      app_DW.local_time = 0.0F;
    } else if (!Arb_is_LatCtrlActv_bl) {
      app_DW.local_time += 0.02F;
    } else {
      app_DW.local_time = 0.0F;
    }
  }

  /* End of Chart: '<S338>/Chart2' */

  /* Logic: '<S338>/Logical Operator1' */
  app_B.Compare_gw = (app_B.Compare_gw && app_B.out_cond_iu);

  /* Chart: '<S338>/OvrdDely' incorporates:
   *  Constant: '<S338>/k_VLatC_indx_OvrrdDlyInitCof_sg'
   */
  if (app_DW.is_active_c12_app == 0U) {
    app_DW.is_active_c12_app = 1U;
    app_DW.is_c12_app = app_IN_Norm;
    app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 1.0F;
  } else if (app_DW.is_c12_app == 1) {
    if (app_B.VRD_indx_DrvrOvrrdDlyCof_sg >= 1.0F) {
      app_DW.is_c12_app = app_IN_Norm;
      app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 1.0F;
    } else if (!app_B.Compare_gw) {
      app_B.VRD_indx_DrvrOvrrdDlyCof_sg += 0.00729411747F;
    } else {
      app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 0.38F;
    }
  } else {
    /* case IN_Norm: */
    if (app_B.Compare_gw) {
      app_DW.is_c12_app = app_IN_Delay;
      app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 0.38F;
    }
  }

  /* End of Chart: '<S338>/OvrdDely' */

  /* Switch: '<S341>/Switch' incorporates:
   *  Abs: '<S338>/Abs1'
   *  Delay: '<S341>/Delay'
   *  Lookup_n-D: '<S338>/1-D Lookup Table1'
   *  Product: '<S338>/Product2'
   *  Product: '<S338>/Product3'
   */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S361>/Switch2' incorporates:
     *  Constant: '<S354>/Constant'
     *  Delay: '<S354>/Delay1'
     *  RelationalOperator: '<S361>/LowerRelop1'
     *  RelationalOperator: '<S361>/UpperRelop'
     *  Switch: '<S361>/Switch'
     */
    if (app_DW.Delay1_DSTATE_a > 2.988F) {
      app_B.Ts = 2.988F;
    } else if (app_DW.Delay1_DSTATE_a < -2.988F) {
      /* Switch: '<S361>/Switch' */
      app_B.Ts = -2.988F;
    } else {
      app_B.Ts = app_DW.Delay1_DSTATE_a;
    }

    /* End of Switch: '<S361>/Switch2' */

    /* Switch: '<S346>/Switch2' incorporates:
     *  Constant: '<S338>/Constant5'
     *  Constant: '<S338>/k_VLatC_indx_OvrrdDlyInitCof_sg'
     *  RelationalOperator: '<S346>/LowerRelop1'
     *  RelationalOperator: '<S346>/UpperRelop'
     *  Switch: '<S346>/Switch'
     */
    if (app_B.VRD_indx_DrvrOvrrdDlyCof_sg > 1.0F) {
      app_B.Gain5_h = 1.0F;
    } else if (app_B.VRD_indx_DrvrOvrrdDlyCof_sg < 0.38F) {
      /* Switch: '<S346>/Switch' incorporates:
       *  Constant: '<S338>/k_VLatC_indx_OvrrdDlyInitCof_sg'
       */
      app_B.Gain5_h = 0.38F;
    } else {
      app_B.Gain5_h = app_B.VRD_indx_DrvrOvrrdDlyCof_sg;
    }

    /* End of Switch: '<S346>/Switch2' */
    app_DW.Delay_DSTATE_pp = app_B.Ts * look1_iflf_binlx(app_B.StrgWhlAngGrd_m,
      app_ConstP.uDLookupTable1_bp01Data, app_ConstP.uDLookupTable1_tableData_o,
      16U) * app_B.Gain5_h;
  }

  /* End of Switch: '<S341>/Switch' */

  /* Chart: '<S341>/Chart' */
  if (app_DW.is_active_c14_app == 0U) {
    app_DW.is_active_c14_app = 1U;
    app_DW.is_c14_app = app_IN_OFF_in;
    app_B.ramp_cof_m = 0.0F;
  } else {
    switch (app_DW.is_c14_app) {
     case app_IN_OFF_in:
      if (Arb_is_LatCtrlActv_bl) {
        app_DW.is_c14_app = app_IN_ON_Count_e;
        app_B.ramp_cof_m = 0.0F;
      }
      break;

     case app_IN_OFF_Count_k:
      if ((!Arb_is_LatCtrlActv_bl) && (app_B.ramp_cof_m <= 0.01F)) {
        app_DW.is_c14_app = app_IN_OFF_in;
        app_B.ramp_cof_m = 0.0F;
      } else if (Arb_is_LatCtrlActv_bl && (app_B.ramp_cof_m >= 0.99F)) {
        app_DW.is_c14_app = app_IN_ON_a;
        app_B.ramp_cof_m = 1.0F;
      } else if (Arb_is_LatCtrlActv_bl) {
        app_B.ramp_cof_m += 0.05F;
      } else {
        app_B.ramp_cof_m -= 0.05F;
      }
      break;

     case app_IN_ON_a:
      if (!Arb_is_LatCtrlActv_bl) {
        app_DW.is_c14_app = app_IN_OFF_Count_k;
        app_B.ramp_cof_m = 1.0F;
      }
      break;

     default:
      /* case IN_ON_Count: */
      if (Arb_is_LatCtrlActv_bl && (app_B.ramp_cof_m >= 0.99F)) {
        app_DW.is_c14_app = app_IN_ON_a;
        app_B.ramp_cof_m = 1.0F;
      } else if ((!Arb_is_LatCtrlActv_bl) && (app_B.ramp_cof_m <= 0.01F)) {
        app_DW.is_c14_app = app_IN_OFF_in;
        app_B.ramp_cof_m = 0.0F;
      } else if (Arb_is_LatCtrlActv_bl) {
        app_B.ramp_cof_m += 0.05F;
      } else {
        app_B.ramp_cof_m -= 0.05F;
      }
      break;
    }
  }

  /* End of Chart: '<S341>/Chart' */

  /* Saturate: '<S341>/Saturation' */
  if (app_B.ramp_cof_m > 1.0F) {
    app_B.Ts = 1.0F;
  } else if (app_B.ramp_cof_m < 0.0F) {
    app_B.Ts = 0.0F;
  } else {
    app_B.Ts = app_B.ramp_cof_m;
  }

  /* End of Saturate: '<S341>/Saturation' */

  /* Sum: '<S341>/Sum' incorporates:
   *  Delay: '<S341>/Delay'
   *  Product: '<S341>/Product'
   */
  app_B.StrgWhlAngGrd_m = app_DW.Delay_DSTATE_pp * app_B.Ts;

  /* Delay: '<S376>/Delay' */
  if (Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_h != 1)) {
    app_DW.icLoad_bl = 1U;
  }

  app_PrevZCX.Delay_Reset_ZCE_h = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_bl != 0) {
    app_DW.Delay_DSTATE_oh = app_B.StrgWhlAngGrd_m;
  }

  /* Switch: '<S376>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S377>/Switch2' incorporates:
     *  Delay: '<S376>/Delay'
     *  RelationalOperator: '<S377>/LowerRelop1'
     *  RelationalOperator: '<S377>/UpperRelop'
     *  Sum: '<S376>/Add1'
     *  Sum: '<S376>/Add2'
     *  Switch: '<S377>/Switch'
     */
    if (app_B.StrgWhlAngGrd_m > app_DW.Delay_DSTATE_oh + 0.099999994F) {
      app_B.StrgWhlAngGrd_m = app_DW.Delay_DSTATE_oh + 0.099999994F;
    } else {
      if (app_B.StrgWhlAngGrd_m < app_DW.Delay_DSTATE_oh + -0.099999994F) {
        /* Switch: '<S377>/Switch' incorporates:
         *  Sum: '<S376>/Add2'
         */
        app_B.StrgWhlAngGrd_m = app_DW.Delay_DSTATE_oh + -0.099999994F;
      }
    }

    /* End of Switch: '<S377>/Switch2' */
  }

  /* End of Switch: '<S376>/Switch' */

  /* Saturate: '<S114>/Saturation' */
  if (app_B.StrgWhlAngGrd_m > 3.0F) {
    /* Saturate: '<S114>/Saturation' */
    LKA_ReqToq = 3.0F;
  } else if (app_B.StrgWhlAngGrd_m < -3.0F) {
    /* Saturate: '<S114>/Saturation' */
    LKA_ReqToq = -3.0F;
  } else {
    /* Saturate: '<S114>/Saturation' */
    LKA_ReqToq = app_B.StrgWhlAngGrd_m;
  }

  /* End of Saturate: '<S114>/Saturation' */

  /* Chart: '<S42>/Chart4' incorporates:
   *  Abs: '<S42>/Abs'
   *  Constant: '<S42>/Constant10'
   *  Constant: '<S42>/Constant11'
   *  Constant: '<S42>/Constant12'
   *  Constant: '<S47>/Constant'
   *  RelationalOperator: '<S47>/Compare'
   */
  app_Chart4((real32_T)fabs(LKA_ReqToq) > 2.95F, 0.02F, 1.0F, 1.0F,
             &app_B.Compare_gw, &app_DW.sf_Chart4_a);

  /* Switch: '<S114>/Switch1' */
  LKA_ReqToqSts = Arb_is_LatCtrlActv_bl;

  /* Product: '<S79>/Divide' incorporates:
   *  Bias: '<S79>/Bias'
   *  Constant: '<S79>/Constant'
   */
  app_B.Divide_jy = (uint16_T)((LKA_ReqToq + 10.24F) / 0.01F);

  /* Chart: '<S73>/Chart' incorporates:
   *  Constant: '<S45>/Constant'
   *  Constant: '<S45>/Constant1'
   *  DataTypeConversion: '<S73>/Data Type Conversion'
   */
  app_Chart_p(4, app_ConstB.Add_c, (uint32_T)app_B.count_d, app_ConstP.pooled61,
              app_B.msg_j);

  /* Chart: '<S77>/Chart' incorporates:
   *  Constant: '<S45>/Constant9'
   *  DataTypeConversion: '<S42>/Data Type Conversion'
   *  DataTypeConversion: '<S77>/Data Type Conversion'
   */
  app_Chart_h(1, app_ConstB.Add_h, (uint32_T)app_B.Compare_gw, app_B.msg_j,
              app_B.msg);

  /* Chart: '<S74>/Chart' incorporates:
   *  Constant: '<S74>/Constant'
   *  Constant: '<S74>/Constant1'
   *  DataTypeConversion: '<S74>/Data Type Conversion'
   *  Product: '<S74>/Divide'
   *  Sum: '<S74>/Add'
   */
  app_B.i_d = 0;
  while (app_B.i_d < 64) {
    app_B.msg_ct[app_B.i_d] = app_B.msg[app_B.i_d];
    app_B.i_d++;
  }

  app_B.i_d = 10;
  app_B.mod_data = (uint32_T)((LKA_ReqToq + 10.24F) / 0.01F);
  while (app_B.i_d >= 0) {
    app_B.s215_iter = (int32_T)pow(2.0, app_B.i_d);
    app_B.tmp = (uint32_T)((real_T)app_B.mod_data / (real_T)app_B.s215_iter);
    app_B.Add1_g = (real_T)app_B.mod_data - (real_T)app_B.tmp * (real_T)
      app_B.s215_iter;
    if (app_B.Add1_g >= 0.0) {
      app_B.mod_data = (uint32_T)app_B.Add1_g;
    } else {
      app_B.mod_data = 0U;
    }

    if (app_B.tmp > 255U) {
      app_B.tmp = 255U;
    }

    app_B.msg_ct[15 - app_B.i_d] = (uint8_T)app_B.tmp;
    app_B.i_d--;
  }

  /* End of Chart: '<S74>/Chart' */

  /* Chart: '<S75>/Chart' incorporates:
   *  ArithShift: '<S78>/Shift Arithmetic'
   *  ArithShift: '<S78>/Shift Arithmetic1'
   *  ArithShift: '<S78>/Shift Arithmetic2'
   *  ArithShift: '<S78>/Shift Arithmetic3'
   *  ArithShift: '<S79>/Shift Arithmetic'
   *  ArithShift: '<S79>/Shift Arithmetic1'
   *  ArithShift: '<S79>/Shift Arithmetic10'
   *  ArithShift: '<S79>/Shift Arithmetic11'
   *  ArithShift: '<S79>/Shift Arithmetic12'
   *  ArithShift: '<S79>/Shift Arithmetic13'
   *  ArithShift: '<S79>/Shift Arithmetic14'
   *  ArithShift: '<S79>/Shift Arithmetic15'
   *  ArithShift: '<S79>/Shift Arithmetic16'
   *  ArithShift: '<S79>/Shift Arithmetic17'
   *  ArithShift: '<S79>/Shift Arithmetic18'
   *  ArithShift: '<S79>/Shift Arithmetic19'
   *  ArithShift: '<S79>/Shift Arithmetic2'
   *  ArithShift: '<S79>/Shift Arithmetic20'
   *  ArithShift: '<S79>/Shift Arithmetic21'
   *  ArithShift: '<S79>/Shift Arithmetic3'
   *  ArithShift: '<S79>/Shift Arithmetic4'
   *  ArithShift: '<S79>/Shift Arithmetic5'
   *  ArithShift: '<S79>/Shift Arithmetic6'
   *  ArithShift: '<S79>/Shift Arithmetic7'
   *  ArithShift: '<S79>/Shift Arithmetic8'
   *  ArithShift: '<S79>/Shift Arithmetic9'
   *  Constant: '<S45>/Constant5'
   *  Constant: '<S72>/Constant'
   *  Product: '<S79>/Divide'
   *  Product: '<S80>/Product1'
   *  Product: '<S80>/Product10'
   *  Product: '<S80>/Product11'
   *  Product: '<S80>/Product12'
   *  Product: '<S80>/Product13'
   *  Product: '<S80>/Product2'
   *  Product: '<S80>/Product3'
   *  Product: '<S80>/Product4'
   *  Product: '<S80>/Product5'
   *  Product: '<S80>/Product6'
   *  Product: '<S80>/Product7'
   *  Product: '<S80>/Product8'
   *  Product: '<S80>/Product9'
   *  S-Function (sfix_bitop): '<S72>/Xor'
   *  Sum: '<S72>/Add'
   *  Sum: '<S72>/Add1'
   *  Sum: '<S80>/Add'
   *  Switch: '<S114>/Switch1'
   */
  app_Chart_h(14, app_ConstB.Add_ml, ((((((((app_B.count_d + (((((((((uint32_T)
    (uint8_T)(LKA_ReqToqSts << 6) >> 7) << 13) + (((uint32_T)(uint8_T)
    (LKA_ReqToqSts << 7) >> 7) << 12)) + (((uint32_T)(uint16_T)(app_B.Divide_jy <<
    5) >> 15) << 11)) + (((uint32_T)(uint16_T)(app_B.Divide_jy << 6) >> 15) <<
    10)) + (((uint32_T)(uint16_T)(app_B.Divide_jy << 7) >> 15) << 9)) +
    (((uint32_T)(uint16_T)(app_B.Divide_jy << 8) >> 15) << 8)) + (((uint32_T)
    (uint16_T)(app_B.Divide_jy << 9) >> 15) << 7))) + (((uint32_T)(uint16_T)
    (app_B.Divide_jy << 10) >> 15) << 6)) + (((uint32_T)(uint16_T)
    (app_B.Divide_jy << 11) >> 15) << 5)) + (((uint32_T)(uint16_T)
    (app_B.Divide_jy << 12) >> 15) << 4)) + (((uint32_T)(uint16_T)
    (app_B.Divide_jy << 13) >> 15) << 3)) + (((uint32_T)(uint16_T)
    (app_B.Divide_jy << 14) >> 15) << 2)) + (((uint32_T)(uint16_T)
    (app_B.Divide_jy << 15) >> 15) << 1)) ^ 16383U) + 1U, app_B.msg_ct,
              app_B.msg_c);

  /* Chart: '<S76>/Chart' incorporates:
   *  Constant: '<S45>/Constant8'
   *  DataTypeConversion: '<S76>/Data Type Conversion'
   */
  app_Chart_h(2, app_ConstB.Add_ow, (uint32_T)LKA_ReqToqSts, app_B.msg_c,
              app_B.msg_e);

  /* Product: '<S71>/Product' */
  app_B.out_cond_c = 0U;

  /* Product: '<S71>/Product1' */
  app_B.out_cond = 0U;

  /* Product: '<S71>/Product2' */
  app_B.u = 0U;

  /* Product: '<S71>/Product3' */
  app_B.u1 = 0U;

  /* Product: '<S71>/Product4' */
  app_B.u2 = 0U;

  /* Product: '<S71>/Product5' */
  app_B.u3 = 0U;

  /* Product: '<S71>/Product6' */
  app_B.u4 = 0U;

  /* Product: '<S71>/Product7' */
  app_B.u5 = 0U;
  for (app_B.s215_iter = 0; app_B.s215_iter < 8; app_B.s215_iter++) {
    /* Product: '<S71>/Product' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.out_cond_c = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter] * app_ConstP.pooled64[app_B.s215_iter]) +
      app_B.out_cond_c);

    /* Product: '<S71>/Product1' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.out_cond = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter + 8] * app_ConstP.pooled64[app_B.s215_iter]) +
      app_B.out_cond);

    /* Product: '<S71>/Product2' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter + 16] * app_ConstP.pooled64[app_B.s215_iter])
                        + app_B.u);

    /* Product: '<S71>/Product3' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter + 24] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u1);

    /* Product: '<S71>/Product4' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter + 32] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u2);

    /* Product: '<S71>/Product5' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u3 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter + 40] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u3);

    /* Product: '<S71>/Product6' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u4 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter + 48] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u4);

    /* Product: '<S71>/Product7' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u5 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s215_iter + 56] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u5);
  }

  /* SignalConversion: '<S45>/Signal Copy' incorporates:
   *  Product: '<S71>/Product'
   *  Product: '<S71>/Product1'
   *  Product: '<S71>/Product2'
   *  Product: '<S71>/Product3'
   *  Product: '<S71>/Product4'
   *  Product: '<S71>/Product5'
   *  Product: '<S71>/Product6'
   *  Product: '<S71>/Product7'
   */
  FVCM_EPS_Frame[0] = app_B.out_cond_c;
  FVCM_EPS_Frame[1] = app_B.out_cond;
  FVCM_EPS_Frame[2] = app_B.u;
  FVCM_EPS_Frame[3] = app_B.u1;
  FVCM_EPS_Frame[4] = app_B.u2;
  FVCM_EPS_Frame[5] = app_B.u3;
  FVCM_EPS_Frame[6] = app_B.u4;
  FVCM_EPS_Frame[7] = app_B.u5;

  /* Chart: '<S43>/Chart' */
  app_Chart(&app_B.count_n);

  /* RelationalOperator: '<S56>/Compare' incorporates:
   *  Constant: '<S56>/Constant'
   *  Inport: '<Root>/lateralPlan_rProb'
   */
  app_B.out_cond_iu = (arg_lateralPlan_rProb >= 0.5F);

  /* RelationalOperator: '<S57>/Compare' incorporates:
   *  Constant: '<S57>/Constant'
   *  Inport: '<Root>/lateralPlan_dProb'
   */
  app_B.Compare_gw = (arg_lateralPlan_dProb >= 0.5F);

  /* Chart: '<S44>/Chart1' incorporates:
   *  Logic: '<S44>/Logical Operator1'
   */
  app_Chart1(Arb_is_LatCtrlActv_bl, app_B.Compare_gw || app_B.out_cond_iu,
             &app_B.out_cond_c);

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   *  Inport: '<Root>/lateralPlan_lProb'
   */
  app_B.out_cond_iu = (arg_lateralPlan_lProb >= 0.5F);

  /* Chart: '<S44>/Chart2' incorporates:
   *  Logic: '<S44>/Logical Operator'
   */
  app_Chart1(Arb_is_LatCtrlActv_bl, app_B.Compare_gw || app_B.out_cond_iu,
             &app_B.out_cond);

  /* Chart: '<S59>/Chart' incorporates:
   *  Constant: '<S44>/Constant13'
   *  Constant: '<S44>/Constant14'
   */
  app_Chart_p(2, app_ConstB.Add_cu, app_ConstB.DataTypeConversion,
              app_ConstP.pooled61, app_B.msg_i);

  /* Chart: '<S60>/Chart' incorporates:
   *  Constant: '<S44>/Constant17'
   *  DataTypeConversion: '<S60>/Data Type Conversion'
   */
  app_Chart_h(3, app_ConstB.Add_k, (uint32_T)app_B.out_cond, app_B.msg_i,
              app_B.msg_p);

  /* Chart: '<S61>/Chart' incorporates:
   *  Constant: '<S44>/Constant19'
   *  DataTypeConversion: '<S61>/Data Type Conversion'
   */
  app_Chart_h(3, app_ConstB.Add_p, (uint32_T)app_B.out_cond_c, app_B.msg_p,
              app_B.msg_em);

  /* Switch: '<S39>/Switch' incorporates:
   *  Constant: '<S39>/Constant15'
   *  Constant: '<S39>/Constant16'
   */
  if (Arb_is_LatCtrlActv_bl) {
    app_B.out_cond_c = 2U;
  } else {
    app_B.out_cond_c = 1U;
  }

  /* End of Switch: '<S39>/Switch' */

  /* Chart: '<S62>/Chart' incorporates:
   *  Constant: '<S44>/Constant21'
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   */
  app_Chart_h(3, app_ConstB.Add_nd, (uint32_T)app_B.out_cond_c, app_B.msg_em,
              app_B.msg_n);

  /* Product: '<S58>/Product' */
  app_B.out_cond_c = 0U;

  /* Product: '<S58>/Product1' */
  app_B.out_cond = 0U;

  /* Product: '<S58>/Product2' */
  app_B.u = 0U;

  /* Product: '<S58>/Product3' */
  app_B.u1 = 0U;

  /* Product: '<S58>/Product4' */
  app_B.u2 = 0U;

  /* Product: '<S58>/Product5' */
  app_B.u3 = 0U;

  /* Product: '<S58>/Product6' */
  app_B.u4 = 0U;

  /* Product: '<S58>/Product7' */
  app_B.u5 = 0U;
  for (app_B.s215_iter = 0; app_B.s215_iter < 8; app_B.s215_iter++) {
    /* Product: '<S58>/Product' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.out_cond_c = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter] * app_ConstP.pooled64[app_B.s215_iter]) +
      app_B.out_cond_c);

    /* Product: '<S58>/Product1' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.out_cond = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter + 8] * app_ConstP.pooled64[app_B.s215_iter]) +
      app_B.out_cond);

    /* Product: '<S58>/Product2' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter + 16] * app_ConstP.pooled64[app_B.s215_iter])
                        + app_B.u);

    /* Product: '<S58>/Product3' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter + 24] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u1);

    /* Product: '<S58>/Product4' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter + 32] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u2);

    /* Product: '<S58>/Product5' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u3 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter + 40] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u3);

    /* Product: '<S58>/Product6' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u4 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter + 48] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u4);

    /* Product: '<S58>/Product7' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u5 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s215_iter + 56] * app_ConstP.pooled64[app_B.s215_iter])
                         + app_B.u5);
  }

  /* SignalConversion: '<S44>/Signal Copy' incorporates:
   *  Product: '<S58>/Product'
   *  Product: '<S58>/Product1'
   *  Product: '<S58>/Product2'
   *  Product: '<S58>/Product3'
   *  Product: '<S58>/Product4'
   *  Product: '<S58>/Product5'
   *  Product: '<S58>/Product6'
   *  Product: '<S58>/Product7'
   */
  FVCM_HMI_Frame[0] = app_B.out_cond_c;
  FVCM_HMI_Frame[1] = app_B.out_cond;
  FVCM_HMI_Frame[2] = app_B.u;
  FVCM_HMI_Frame[3] = app_B.u1;
  FVCM_HMI_Frame[4] = app_B.u2;
  FVCM_HMI_Frame[5] = app_B.u3;
  FVCM_HMI_Frame[6] = app_B.u4;
  FVCM_HMI_Frame[7] = app_B.u5;

  /* Chart: '<S96>/Chart6' incorporates:
   *  Constant: '<S96>/Constant12'
   *  Constant: '<S96>/Constant13'
   *  Constant: '<S96>/Constant14'
   */
  app_Chart4(app_B.LogicalOperator1_l, 0.02F, 1.0F, 0.01F, &app_B.Compare_gw,
             &app_DW.sf_Chart6);

  /* Update for Delay: '<S24>/Delay9' */
  app_DW.icLoad = 0U;
  for (app_B.s215_iter = 0; app_B.s215_iter < 8; app_B.s215_iter++) {
    app_DW.Delay9_DSTATE[app_B.s215_iter] = app_DW.Delay9_DSTATE[app_B.s215_iter
      + 1];
  }

  app_DW.Delay9_DSTATE[8] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay9' */

  /* Update for Delay: '<S24>/Delay8' */
  app_DW.icLoad_p = 0U;
  for (app_B.s215_iter = 0; app_B.s215_iter < 7; app_B.s215_iter++) {
    app_DW.Delay8_DSTATE[app_B.s215_iter] = app_DW.Delay8_DSTATE[app_B.s215_iter
      + 1];
  }

  app_DW.Delay8_DSTATE[7] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay8' */

  /* Update for Delay: '<S24>/Delay7' */
  app_DW.icLoad_a = 0U;
  for (app_B.s215_iter = 0; app_B.s215_iter < 6; app_B.s215_iter++) {
    app_DW.Delay7_DSTATE[app_B.s215_iter] = app_DW.Delay7_DSTATE[app_B.s215_iter
      + 1];
  }

  app_DW.Delay7_DSTATE[6] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay7' */

  /* Update for Delay: '<S24>/Delay6' */
  app_DW.icLoad_d = 0U;
  for (app_B.s215_iter = 0; app_B.s215_iter < 5; app_B.s215_iter++) {
    app_DW.Delay6_DSTATE[app_B.s215_iter] = app_DW.Delay6_DSTATE[app_B.s215_iter
      + 1];
  }

  app_DW.Delay6_DSTATE[5] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay6' */

  /* Update for Delay: '<S24>/Delay5' */
  app_DW.icLoad_g = 0U;
  app_DW.Delay5_DSTATE[0] = app_DW.Delay5_DSTATE[1];
  app_DW.Delay5_DSTATE[1] = app_DW.Delay5_DSTATE[2];
  app_DW.Delay5_DSTATE[2] = app_DW.Delay5_DSTATE[3];
  app_DW.Delay5_DSTATE[3] = app_DW.Delay5_DSTATE[4];
  app_DW.Delay5_DSTATE[4] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay' */
  app_DW.icLoad_pt = 0U;
  app_DW.Delay_DSTATE[0] = app_DW.Delay_DSTATE[1];
  app_DW.Delay_DSTATE[1] = app_DW.Delay_DSTATE[2];
  app_DW.Delay_DSTATE[2] = app_DW.Delay_DSTATE[3];
  app_DW.Delay_DSTATE[3] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay1' */
  app_DW.icLoad_n = 0U;
  app_DW.Delay1_DSTATE[0] = app_DW.Delay1_DSTATE[1];
  app_DW.Delay1_DSTATE[1] = app_DW.Delay1_DSTATE[2];
  app_DW.Delay1_DSTATE[2] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay2' */
  app_DW.icLoad_b = 0U;
  app_DW.Delay2_DSTATE[0] = app_DW.Delay2_DSTATE[1];
  app_DW.Delay2_DSTATE[1] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay3' */
  app_DW.icLoad_gw = 0U;
  app_DW.Delay3_DSTATE = app_B.CANUnpack_o1;

  /* Update for Delay: '<S23>/Delay' */
  app_DW.icLoad_n4 = 0U;
  app_DW.Delay_DSTATE_j[0] = app_DW.Delay_DSTATE_j[1];
  app_DW.Delay_DSTATE_j[1] = app_DW.Delay_DSTATE_j[2];
  app_DW.Delay_DSTATE_j[2] = app_DW.Delay_DSTATE_j[3];
  app_DW.Delay_DSTATE_j[3] = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S23>/Delay1' */
  app_DW.icLoad_e = 0U;
  app_DW.Delay1_DSTATE_p[0] = app_DW.Delay1_DSTATE_p[1];
  app_DW.Delay1_DSTATE_p[1] = app_DW.Delay1_DSTATE_p[2];
  app_DW.Delay1_DSTATE_p[2] = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S23>/Delay2' */
  app_DW.icLoad_dc = 0U;
  app_DW.Delay2_DSTATE_g[0] = app_DW.Delay2_DSTATE_g[1];
  app_DW.Delay2_DSTATE_g[1] = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S23>/Delay3' */
  app_DW.icLoad_l = 0U;
  app_DW.Delay3_DSTATE_m = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S33>/Delay' */
  app_DW.icLoad_m = 0U;
  app_DW.Delay_DSTATE_e = VehCP_yr_VehDynYawRate_sg;

  /* Update for Delay: '<S29>/Delay' */
  app_DW.icLoad_f = 0U;
  app_DW.Delay_DSTATE_jg = VehCP_prec_VehAccelPos_sg;

  /* Update for UnitDelay: '<S27>/Delay Input1' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion19'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_DW.DelayInput1_DSTATE_e = (app_B.LftStrLght_On_p != 0);

  /* Update for UnitDelay: '<S28>/Delay Input1' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion23'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_DW.DelayInput1_DSTATE_j = (app_B.RghtStrLght_On_o != 0);

  /* Update for Delay: '<S30>/Delay' */
  app_DW.icLoad_c = 0U;
  app_DW.Delay_DSTATE_l = VehCP_angD_StrgWhlAng_sg;

  /* Update for Delay: '<S31>/Delay' */
  app_DW.icLoad_k = 0U;

  /* Update for Delay: '<S32>/Delay' */
  app_DW.icLoad_cn = 0U;
  app_DW.Delay_DSTATE_o = VehCP_V_ClstDspdVehSpd_sg;

  /* Update for Delay: '<S34>/Delay' */
  app_DW.icLoad_dp = 0U;
  app_DW.Delay_DSTATE_d = VehCP_W_StrgWhlAngGrd_sg;

  /* Update for Delay: '<S35>/Delay' */
  app_DW.icLoad_nt = 0U;

  /* Update for Delay: '<S36>/Delay' */
  app_DW.icLoad_dv = 0U;
  app_DW.Delay_DSTATE_i = VehCP_a_VSELatAcc_sg;

  /* Update for Delay: '<S37>/Delay' */
  app_DW.icLoad_fg = 0U;
  app_DW.Delay_DSTATE_ok = VehCP_a_VSELongAcc_sg;

  /* Update for UnitDelay: '<S93>/Delay Input1'
   *
   * Block description for '<S93>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_DW.DelayInput1_DSTATE_d = VehCP_is_CCSwStsSet_bl;

  /* Update for UnitDelay: '<S92>/Delay Input1'
   *
   * Block description for '<S92>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_DW.DelayInput1_DSTATE_c = VehCP_is_CCSwStsRsm_bl;

  /* Update for Delay: '<S94>/Delay' */
  app_DW.Delay_DSTATE_lz = Arb_is_LatCtrlActv_bl;

  /* Update for UnitDelay: '<S170>/Delay Input1' incorporates:
   *  DataTypeConversion: '<S40>/Data Type Conversion'
   *
   * Block description for '<S170>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_DW.DelayInput1_DSTATE = Arb_is_LatCtrlActv_bl;

  /* Update for UnitDelay: '<S171>/Delay Input1'
   *
   * Block description for '<S171>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_DW.DelayInput1_DSTATE_h = app_B.out_cond_kz;

  /* Update for Delay: '<S117>/Delay' incorporates:
   *  Gain: '<S121>/Gain'
   *  Gain: '<S121>/Gain1'
   *  Gain: '<S121>/Gain2'
   *  Gain: '<S121>/Gain3'
   *  Gain: '<S121>/Gain5'
   *  Gain: '<S121>/Gain6'
   *  Gain: '<S121>/Gain8'
   *  Gain: '<S121>/Gain9'
   *  Product: '<S172>/Product'
   *  Product: '<S172>/Product1'
   *  Product: '<S172>/Product2'
   *  Product: '<S172>/Product3'
   *  Product: '<S172>/Product4'
   *  Product: '<S173>/Product'
   *  Product: '<S173>/Product1'
   *  Product: '<S173>/Product2'
   *  Product: '<S173>/Product3'
   *  Product: '<S174>/Product'
   *  Product: '<S174>/Product1'
   *  Product: '<S174>/Product2'
   *  Sum: '<S172>/Add'
   *  Sum: '<S173>/Add'
   *  Sum: '<S174>/Add'
   */
  app_DW.icLoad_i = 0U;
  app_DW.Delay_DSTATE_n[0] = ((((app_B.cost_traj[2] * app_B.plan_time +
    app_B.cost_traj[1]) + app_B.cost_traj[3] * app_B.plan_time * app_B.plan_time)
    + app_B.cost_traj[4] * app_B.plan_time * app_B.plan_time * app_B.plan_time)
    + app_B.cost_traj[5] * app_B.plan_time * app_B.plan_time * app_B.plan_time *
    app_B.plan_time) + app_B.cost_traj[6] * app_B.plan_time * app_B.plan_time *
    app_B.plan_time * app_B.plan_time * app_B.plan_time;
  app_DW.Delay_DSTATE_n[1] = (((2.0F * app_B.cost_traj[3] * app_B.plan_time +
    app_B.cost_traj[2]) + 3.0F * app_B.cost_traj[4] * app_B.plan_time *
    app_B.plan_time) + 4.0F * app_B.cost_traj[5] * app_B.plan_time *
    app_B.plan_time * app_B.plan_time) + 5.0F * app_B.cost_traj[6] *
    app_B.plan_time * app_B.plan_time * app_B.plan_time * app_B.plan_time;
  app_DW.Delay_DSTATE_n[2] = ((6.0F * app_B.cost_traj[4] * app_B.plan_time +
    2.0F * app_B.cost_traj[3]) + 12.0F * app_B.cost_traj[5] * app_B.plan_time *
    app_B.plan_time) + 20.0F * app_B.cost_traj[6] * app_B.plan_time *
    app_B.plan_time * app_B.plan_time;

  /* Update for Delay: '<S194>/Delay' */
  app_DW.icLoad_e0 = 0U;

  /* Update for Delay: '<S385>/Delay' */
  app_DW.icLoad_n5 = 0U;
  app_DW.Delay_DSTATE_k3 = app_B.uDLookupTable;

  /* Update for Delay: '<S383>/Delay' */
  app_DW.icLoad_ab = 0U;

  /* Update for Delay: '<S393>/Delay' */
  app_DW.icLoad_h = 0U;

  /* Update for Delay: '<S413>/Delay' */
  app_DW.icLoad_j = 0U;
  app_DW.Delay_DSTATE_bk = app_B.StrgWhlAng_n;

  /* Update for Delay: '<S351>/Delay' */
  app_DW.icLoad_nb = 0U;
  app_DW.Delay_DSTATE_hp = app_B.Add_op;

  /* Update for UnitDelay: '<S357>/Unit Delay' */
  app_DW.UnitDelay_DSTATE = app_B.Add_pgy;

  /* Update for Delay: '<S363>/Delay' */
  app_DW.icLoad_iy = 0U;

  /* Update for Delay: '<S376>/Delay' */
  app_DW.icLoad_bl = 0U;
  app_DW.Delay_DSTATE_oh = app_B.StrgWhlAngGrd_m;
}

/* Model initialize function */
void app_initialize(void)
{
  /* Start for S-Function (scanunpack): '<S14>/CAN Unpack' */

  /*-----------S-Function Block: <S14>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S7>/CAN Unpack' */

  /*-----------S-Function Block: <S7>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S8>/CAN Unpack' */

  /*-----------S-Function Block: <S8>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S13>/CAN Unpack' */

  /*-----------S-Function Block: <S13>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S6>/CAN Unpack' */

  /*-----------S-Function Block: <S6>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S5>/CAN Unpack' */

  /*-----------S-Function Block: <S5>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S5>/CAN Unpack1' */

  /*-----------S-Function Block: <S5>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S22>/CAN Unpack' */

  /*-----------S-Function Block: <S22>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S21>/CAN Unpack' */

  /*-----------S-Function Block: <S21>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S16>/CAN Unpack' */

  /*-----------S-Function Block: <S16>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S16>/CAN Unpack1' */

  /*-----------S-Function Block: <S16>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S19>/CAN Unpack' */

  /*-----------S-Function Block: <S19>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S19>/CAN Unpack1' */

  /*-----------S-Function Block: <S19>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S12>/CAN Unpack' */

  /*-----------S-Function Block: <S12>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S20>/CAN Unpack' */

  /*-----------S-Function Block: <S20>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S17>/CAN Unpack' */

  /*-----------S-Function Block: <S17>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/CAN Unpack' */

  /*-----------S-Function Block: <S11>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/CAN Unpack1' */

  /*-----------S-Function Block: <S11>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S10>/CAN Unpack' */

  /*-----------S-Function Block: <S10>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S9>/CAN Unpack' */

  /*-----------S-Function Block: <S9>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S18>/CAN Unpack' */

  /*-----------S-Function Block: <S18>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S15>/CAN Unpack1' */

  /*-----------S-Function Block: <S15>/CAN Unpack1 -----------------*/
  app_PrevZCX.Delay_Reset_ZCE = POS_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_n = POS_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_a = UNINITIALIZED_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_l = POS_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_nn = POS_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_h = POS_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_m = POS_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_l3 = POS_ZCSIG;
  app_PrevZCX.Delay_Reset_ZCE_ha = POS_ZCSIG;

  /* InitializeConditions for Delay: '<S24>/Delay9' */
  app_DW.icLoad = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay8' */
  app_DW.icLoad_p = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay7' */
  app_DW.icLoad_a = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay6' */
  app_DW.icLoad_d = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay5' */
  app_DW.icLoad_g = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay' */
  app_DW.icLoad_pt = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay1' */
  app_DW.icLoad_n = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay2' */
  app_DW.icLoad_b = 1U;

  /* InitializeConditions for Delay: '<S24>/Delay3' */
  app_DW.icLoad_gw = 1U;

  /* InitializeConditions for Delay: '<S23>/Delay' */
  app_DW.icLoad_n4 = 1U;

  /* InitializeConditions for Delay: '<S23>/Delay1' */
  app_DW.icLoad_e = 1U;

  /* InitializeConditions for Delay: '<S23>/Delay2' */
  app_DW.icLoad_dc = 1U;

  /* InitializeConditions for Delay: '<S23>/Delay3' */
  app_DW.icLoad_l = 1U;

  /* InitializeConditions for Delay: '<S33>/Delay' */
  app_DW.icLoad_m = 1U;

  /* InitializeConditions for Delay: '<S29>/Delay' */
  app_DW.icLoad_f = 1U;

  /* InitializeConditions for Delay: '<S30>/Delay' */
  app_DW.icLoad_c = 1U;

  /* InitializeConditions for Delay: '<S31>/Delay' */
  app_DW.icLoad_k = 1U;

  /* InitializeConditions for Delay: '<S32>/Delay' */
  app_DW.icLoad_cn = 1U;

  /* InitializeConditions for Delay: '<S34>/Delay' */
  app_DW.icLoad_dp = 1U;

  /* InitializeConditions for Delay: '<S35>/Delay' */
  app_DW.icLoad_nt = 1U;

  /* InitializeConditions for Delay: '<S36>/Delay' */
  app_DW.icLoad_dv = 1U;

  /* InitializeConditions for Delay: '<S37>/Delay' */
  app_DW.icLoad_fg = 1U;

  /* InitializeConditions for Delay: '<S117>/Delay' */
  app_DW.icLoad_i = 1U;

  /* InitializeConditions for Delay: '<S194>/Delay' */
  app_DW.icLoad_e0 = 1U;

  /* InitializeConditions for Delay: '<S385>/Delay' */
  app_DW.icLoad_n5 = 1U;

  /* InitializeConditions for Delay: '<S383>/Delay' */
  app_DW.icLoad_ab = 1U;

  /* InitializeConditions for Delay: '<S393>/Delay' */
  app_DW.icLoad_h = 1U;

  /* InitializeConditions for Delay: '<S413>/Delay' */
  app_DW.icLoad_j = 1U;

  /* InitializeConditions for Delay: '<S351>/Delay' */
  app_DW.icLoad_nb = 1U;

  /* InitializeConditions for Delay: '<S363>/Delay' */
  app_DW.icLoad_iy = 1U;

  /* InitializeConditions for Delay: '<S376>/Delay' */
  app_DW.icLoad_bl = 1U;

  /* SystemInitialize for Chart: '<S38>/Chart' */
  app_Chart_Init(&app_B.count_d);

  /* SystemInitialize for Enabled SubSystem: '<S187>/mpc_controller' */
  /* InitializeConditions for Delay: '<S190>/Delay' */
  app_DW.icLoad_fm = 1U;

  /* InitializeConditions for Delay: '<S221>/Delay' */
  app_DW.icLoad_ih = 1U;

  /* End of SystemInitialize for SubSystem: '<S187>/mpc_controller' */

  /* SystemInitialize for IfAction SubSystem: '<S113>/Path_Tracking1' */
  /* Start for DataStoreMemory: '<S334>/Data Store Memory' */
  app_DW.P[0] = 1.0F;
  app_DW.P[1] = 0.0F;
  app_DW.P[2] = 0.0F;
  app_DW.P[3] = 1.0F;

  /* InitializeConditions for Delay: '<S333>/Delay' */
  app_DW.icLoad_n1 = 1U;

  /* InitializeConditions for Delay: '<S336>/Delay' */
  app_DW.icLoad_jr = 1U;

  /* InitializeConditions for Delay: '<S335>/Delay' */
  app_DW.icLoad_bt = 1U;

  /* InitializeConditions for Delay: '<S317>/Delay' */
  app_DW.icLoad_ff = 1U;

  /* End of SystemInitialize for SubSystem: '<S113>/Path_Tracking1' */

  /* SystemInitialize for Chart: '<S73>/Chart' */
  app_Chart_a_Init(app_B.msg_j);

  /* SystemInitialize for Chart: '<S77>/Chart' */
  app_Chart_c_Init(app_B.msg);

  /* SystemInitialize for Chart: '<S75>/Chart' */
  app_Chart_c_Init(app_B.msg_c);

  /* SystemInitialize for Chart: '<S76>/Chart' */
  app_Chart_c_Init(app_B.msg_e);

  /* SystemInitialize for Chart: '<S43>/Chart' */
  app_Chart_Init(&app_B.count_n);

  /* SystemInitialize for Chart: '<S59>/Chart' */
  app_Chart_a_Init(app_B.msg_i);

  /* SystemInitialize for Chart: '<S60>/Chart' */
  app_Chart_c_Init(app_B.msg_p);

  /* SystemInitialize for Chart: '<S61>/Chart' */
  app_Chart_c_Init(app_B.msg_em);

  /* SystemInitialize for Chart: '<S62>/Chart' */
  app_Chart_c_Init(app_B.msg_n);
}

/* Model terminate function */
void app_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
