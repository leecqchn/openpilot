/*
 * File: app.c
 *
 * Code generated for Simulink model 'app'.
 *
 * Model version                  : 6.39
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Aug 21 10:31:52 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "app.h"
#include "app_private.h"

/* Named constants for Chart: '<S4>/Chart3' */
#define app_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define app_IN_OFF                     ((uint8_T)1U)
#define app_IN_ON                      ((uint8_T)2U)
#define app_IN_UP                      ((uint8_T)1U)
#define app_IN_Zero                    ((uint8_T)2U)

/* Named constants for Chart: '<S42>/Chart4' */
#define app_IN_NO_ACTIVE_CHILD_h       ((uint8_T)0U)
#define app_IN_OFF_f                   ((uint8_T)1U)
#define app_IN_ON_j                    ((uint8_T)2U)

/* Named constants for Chart: '<S216>/Chart' */
#define app_IN_NO_ACTIVE_CHILD_k       ((uint8_T)0U)
#define app_IN_OFF_Count               ((uint8_T)2U)
#define app_IN_OFF_f4                  ((uint8_T)1U)
#define app_IN_ON_Count                ((uint8_T)4U)
#define app_IN_ON_o                    ((uint8_T)3U)

/* Named constants for Chart: '<S39>/Chart' */
#define app_IN_OFF_i                   ((uint8_T)1U)
#define app_IN_ON_g                    ((uint8_T)2U)
#define app_IN_Standby                 ((uint8_T)3U)

/* Named constants for Chart: '<S94>/Chart1' */
#define app_IN_UP_g                    ((uint8_T)1U)
#define app_IN_Zero_j                  ((uint8_T)2U)

/* Named constants for Chart: '<S242>/OvrdDely' */
#define app_IN_Delay                   ((uint8_T)1U)
#define app_IN_Norm                    ((uint8_T)2U)

/* Named constants for Chart: '<S245>/Chart' */
#define app_IN_OFF_Count_e             ((uint8_T)2U)
#define app_IN_ON_Count_n              ((uint8_T)4U)
#define app_IN_ON_k                    ((uint8_T)3U)

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
real32_T YRC_angD_ReqStrgWhlAng_sg;    /* '<S295>/Switch' */
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

/* Block signals (default storage) */
B_app_T app_B;

/* Block states (default storage) */
DW_app_T app_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_app_T app_PrevZCX;

/* Real-time model */
static RT_MODEL_app_T app_M_;
RT_MODEL_app_T *const app_M = &app_M_;

/* Forward declaration for local functions */
static void ap_LUf_boolean_Tint32_Treal32_T(real32_T outU[], real32_T outP[],
  int32_T N, boolean_T outS[]);
static real_T app_rt_powd_snf(real_T u0, real_T u1);

/* Lookup Binary Search Utility BINARYSEARCH_real32_T */
void BINARYSEARCH_real32_T(uint32_T *piLeft, uint32_T *piRght, real32_T u, const
  real32_T *pData, uint32_T iHi)
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
void LookUp_real32_T_real32_T(real32_T *pY, const real32_T *pYData, real32_T u,
  const real32_T *pUData, uint32_T iHi)
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

real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
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
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

real32_T look1_iflf_binlcapw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
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
     Overflow mode: 'portable wrapping'
   */
  if (iLeft == maxIndex) {
    y = table[iLeft];
  } else {
    yL_0d0 = table[iLeft];
    y = (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
  }

  return y;
}

real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
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
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/*
 * System initialize for atomic system:
 *    '<S4>/Chart3'
 *    '<S4>/Chart4'
 */
void app_Chart3_Init(boolean_T *rty_is_steerLampOn_bl, DW_Chart3_app_T *localDW)
{
  localDW->is_OFF = app_IN_NO_ACTIVE_CHILD;
  localDW->is_active_c41_app = 0U;
  localDW->is_c41_app = app_IN_NO_ACTIVE_CHILD;
  localDW->local_count = 0U;
  localDW->tm_count = 0U;
  *rty_is_steerLampOn_bl = false;
}

/*
 * Output and update for atomic system:
 *    '<S4>/Chart3'
 *    '<S4>/Chart4'
 */
void app_Chart3(boolean_T rtu_strLmpSig, boolean_T *rty_is_steerLampOn_bl,
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

      /* case IN_Zero: */
    } else if (rtu_strLmpSig) {
      localDW->is_OFF = app_IN_UP;
      localDW->local_count = 1U;
      localDW->tm_count = 0U;
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
void app_Chart_Init(uint8_T *rty_count)
{
  *rty_count = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S38>/Chart'
 *    '<S43>/Chart'
 */
void app_Chart(uint8_T *rty_count)
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
 * System initialize for atomic system:
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
void app_Chart4_Init(boolean_T *rty_out_cond, DW_Chart4_app_T *localDW)
{
  localDW->is_active_c1_app = 0U;
  localDW->is_c1_app = app_IN_NO_ACTIVE_CHILD_h;
  localDW->local_time = 0.0F;
  *rty_out_cond = false;
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
void app_Chart4(boolean_T rtu_in_cond, real32_T rtu_loop_time, real32_T
                rtu_rise_time, real32_T rtu_fall_time, boolean_T *rty_out_cond,
                DW_Chart4_app_T *localDW)
{
  /* Chart: '<S42>/Chart4' */
  if (localDW->is_active_c1_app == 0U) {
    localDW->is_active_c1_app = 1U;
    localDW->is_c1_app = app_IN_OFF_f;
    *rty_out_cond = false;
    localDW->local_time = 0.0F;
  } else if (localDW->is_c1_app == app_IN_OFF_f) {
    *rty_out_cond = false;
    if (localDW->local_time > rtu_rise_time) {
      localDW->is_c1_app = app_IN_ON_j;
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
      localDW->is_c1_app = app_IN_OFF_f;
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
 * System initialize for atomic system:
 *    '<S44>/Chart1'
 *    '<S44>/Chart2'
 */
void app_Chart1_Init(uint8_T *rty_out_cond)
{
  *rty_out_cond = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S44>/Chart1'
 *    '<S44>/Chart2'
 */
void app_Chart1(boolean_T rtu_Arb_is_LatCtrlActv_bl, boolean_T rtu_lane_cond,
                uint8_T *rty_out_cond)
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

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T tmp;
  real_T tmp_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * System initialize for atomic system:
 *    '<S59>/Chart'
 *    '<S73>/Chart'
 */
void app_Chart_a_Init(uint8_T rty_msg[64])
{
  memset(&rty_msg[0], 0, sizeof(uint8_T) << 6U);
}

/*
 * Output and update for atomic system:
 *    '<S59>/Chart'
 *    '<S73>/Chart'
 */
void app_Chart_p(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
                 rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg
                 [64])
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
    tmp_tmp = rt_powd_snf(2.0, (real_T)i);
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
void app_Chart_c_Init(uint8_T rty_msg[64])
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
void app_Chart_h(uint8_T rtu_signal_len, uint8_T rtu_start_bit, uint32_T
                 rtu_signal_raw, const uint8_T rtu_msg_in[64], uint8_T rty_msg
                 [64])
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
    tmp_tmp = rt_powd_snf(2.0, (real_T)i);
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
void app_Planner(const real32_T rtu_initial_lateral_status[3], real32_T
                 rty_y_cof[7], B_Planner_app_T *localB, const
                 ConstB_Planner_app_T *localC)
{
  int32_T i;
  int32_T s135_iter;
  real32_T min_cost_value;
  real32_T rtb_Add_mp_tmp;
  real32_T rtb_Add_mp_tmp_0;
  real32_T rtb_Add_ot;
  real32_T rtb_Divide_h;
  real32_T rtb_Gain21;
  real32_T rtb_Gain5_j;
  real32_T rtb_Gain_p;
  real32_T rtb_Sqrt;
  real32_T rtu_initial_lateral_status_0;
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
  rtb_Gain21 = 0.5F * rtu_initial_lateral_status[2];

  /* SignalConversion generated from: '<S128>/Product30' incorporates:
   *  Constant: '<S125>/Constant1'
   *  Gain: '<S128>/Gain14'
   *  Sum: '<S128>/Subtract2'
   */
  s125_iter_idx_2 = 0.0F - 2.0F * rtb_Gain21;

  /* Gain: '<S133>/Gain' */
  rtb_Gain_p = 2.0F * rtb_Gain21;

  /* Sum: '<S137>/Add' */
  rtu_initial_lateral_status_0 = rtu_initial_lateral_status[1];

  /* Gain: '<S133>/Gain5' */
  rtb_Gain5_j = 2.0F * rtb_Gain21;

  /* End of Outputs for SubSystem: '<S124>/For Iterator Subsystem' */
  for (localB->s124_iter = 0; localB->s124_iter < 14; localB->s124_iter++) {
    /* Sum: '<S124>/Add' incorporates:
     *  Constant: '<S123>/k_TJA_PP_t_MinPlanedTm_sg'
     *  Product: '<S124>/Product'
     */
    localB->Add_mp = (real32_T)localB->s124_iter * localC->Divide + 2.0F;

    /* Outputs for Iterator SubSystem: '<S124>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S125>/For Iterator'
     */
    /* Product: '<S129>/Divide' incorporates:
     *  Constant: '<S129>/Constant'
     *  Sum: '<S129>/Subtract'
     */
    rtb_Divide_h = localB->Add_mp / 9.0F;

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
    rtb_Sqrt = localB->Add_mp * localB->Add_mp;
    rtb_Add_mp_tmp = rtb_Sqrt * localB->Add_mp;

    /* Concatenate: '<S128>/Matrix Concatenate2' incorporates:
     *  Product: '<S128>/Product19'
     */
    localB->rtb_Add_mp_m[0] = rtb_Add_mp_tmp;

    /* Product: '<S128>/Product24' incorporates:
     *  Gain: '<S128>/Gain15'
     *  Product: '<S128>/Product21'
     *  Product: '<S128>/Product25'
     */
    rtb_Add_mp_tmp_0 = rtb_Add_mp_tmp * localB->Add_mp;

    /* Concatenate: '<S128>/Matrix Concatenate2' incorporates:
     *  Gain: '<S128>/Gain19'
     *  Product: '<S128>/Product24'
     *  Product: '<S128>/Product25'
     */
    localB->rtb_Add_mp_m[3] = rtb_Add_mp_tmp_0;
    localB->rtb_Add_mp_m[6] = rtb_Add_mp_tmp_0 * localB->Add_mp;
    localB->rtb_Add_mp_m[1] = rtb_Sqrt * 3.0F;

    /* Gain: '<S128>/Gain20' */
    tmp = rtb_Add_mp_tmp * 4.0F;

    /* Concatenate: '<S128>/Matrix Concatenate2' incorporates:
     *  Gain: '<S128>/Gain20'
     */
    localB->rtb_Add_mp_m[4] = tmp;

    /* Gain: '<S128>/Gain15' */
    rtb_Add_mp_tmp_0 *= 5.0F;

    /* Concatenate: '<S128>/Matrix Concatenate2' incorporates:
     *  Gain: '<S128>/Gain15'
     *  Gain: '<S128>/Gain17'
     */
    localB->rtb_Add_mp_m[7] = rtb_Add_mp_tmp_0;
    localB->rtb_Add_mp_m[2] = 6.0F * localB->Add_mp;

    /* Gain: '<S128>/Gain18' */
    rtb_Sqrt *= 12.0F;

    /* Concatenate: '<S128>/Matrix Concatenate2' incorporates:
     *  Gain: '<S128>/Gain18'
     */
    localB->rtb_Add_mp_m[5] = rtb_Sqrt;

    /* Gain: '<S128>/Gain16' */
    rtb_Add_mp_tmp *= 20.0F;

    /* Concatenate: '<S128>/Matrix Concatenate2' incorporates:
     *  Gain: '<S128>/Gain16'
     */
    localB->rtb_Add_mp_m[8] = rtb_Add_mp_tmp;

    /* Math: '<S139>/Math Function' incorporates:
     *  Product: '<S150>/Product'
     *  Product: '<S150>/Product1'
     *  Sum: '<S150>/Subtract'
     */
    localB->rtb_Product_k5_g[0] = tmp * rtb_Add_mp_tmp - rtb_Add_mp_tmp_0 *
      rtb_Sqrt;

    /* Product: '<S128>/Product29' incorporates:
     *  Product: '<S128>/Product28'
     *  Sum: '<S128>/Subtract'
     */
    rtb_Add_mp_tmp = rtb_Gain21 * localB->Add_mp;

    /* SignalConversion generated from: '<S128>/Product30' incorporates:
     *  Constant: '<S125>/Constant'
     *  Gain: '<S128>/Gain22'
     *  Product: '<S128>/Product29'
     *  Sum: '<S128>/Add1'
     *  Sum: '<S128>/Subtract1'
     */
    rtb_Add_mp_tmp_0 = 0.0F - (rtb_Add_mp_tmp * 2.0F +
      rtu_initial_lateral_status[1]);

    /* Outputs for Iterator SubSystem: '<S129>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S135>/For Iterator'
     */
    for (s135_iter = 0; s135_iter < 10; s135_iter++) {
      /* Assignment: '<S135>/Assignment' incorporates:
       *  Product: '<S135>/Product'
       */
      if (s135_iter == 0) {
        /* Assignment: '<S135>/Assignment' */
        for (i = 0; i < 10; i++) {
          localB->Assignment[i] = 0.0F;
        }
      }

      localB->Assignment[s135_iter] = (real32_T)s135_iter * rtb_Divide_h;

      /* End of Assignment: '<S135>/Assignment' */
    }

    /* End of Outputs for SubSystem: '<S129>/For Iterator Subsystem' */
    for (s135_iter = 0; s135_iter < 7; s135_iter++) {
      for (i = 0; i < 9; i++) {
        /* Concatenate: '<S128>/Matrix Concatenate2' */
        rtb_Divide_h = localB->rtb_Add_mp_m[i];

        /* Selector: '<S139>/Selector1' */
        localB->rtb_Product1_nw3_c[i] = rtb_Divide_h;

        /* Selector: '<S139>/Selector2' */
        localB->rtb_Product1_nw3_k[i] = rtb_Divide_h;

        /* Selector: '<S139>/Selector5' */
        localB->rtb_Product1_nw3_cx[i] = rtb_Divide_h;

        /* Selector: '<S139>/Selector3' */
        localB->rtb_Product1_nw3_b[i] = rtb_Divide_h;

        /* Selector: '<S139>/Selector4' */
        localB->rtb_Product1_nw3_p[i] = rtb_Divide_h;

        /* Selector: '<S139>/Selector9' */
        localB->rtb_Product1_nw3_cv[i] = rtb_Divide_h;

        /* Selector: '<S139>/Selector6' */
        localB->rtb_Product1_nw3_f[i] = rtb_Divide_h;

        /* Selector: '<S139>/Selector8' */
        localB->rtb_Product1_nw3_g[i] = rtb_Divide_h;

        /* Concatenate: '<S128>/Matrix Concatenate2' */
        localB->Product1_nw3[i] = rtb_Divide_h;
      }

      /* Math: '<S139>/Math Function' incorporates:
       *  Gain: '<S139>/Gain1'
       *  Gain: '<S139>/Gain3'
       *  Gain: '<S139>/Gain5'
       *  Gain: '<S139>/Gain7'
       *  Product: '<S151>/Product'
       *  Product: '<S151>/Product1'
       *  Product: '<S152>/Product'
       *  Product: '<S152>/Product1'
       *  Product: '<S153>/Product'
       *  Product: '<S153>/Product1'
       *  Product: '<S154>/Product'
       *  Product: '<S154>/Product1'
       *  Product: '<S155>/Product'
       *  Product: '<S155>/Product1'
       *  Product: '<S156>/Product'
       *  Product: '<S156>/Product1'
       *  Product: '<S157>/Product'
       *  Product: '<S157>/Product1'
       *  Product: '<S158>/Product'
       *  Product: '<S158>/Product1'
       *  Selector: '<S139>/Selector1'
       *  Selector: '<S139>/Selector2'
       *  Selector: '<S139>/Selector3'
       *  Selector: '<S139>/Selector4'
       *  Selector: '<S139>/Selector5'
       *  Selector: '<S139>/Selector6'
       *  Selector: '<S139>/Selector8'
       *  Selector: '<S139>/Selector9'
       *  Sum: '<S151>/Subtract'
       *  Sum: '<S152>/Subtract'
       *  Sum: '<S153>/Subtract'
       *  Sum: '<S154>/Subtract'
       *  Sum: '<S155>/Subtract'
       *  Sum: '<S156>/Subtract'
       *  Sum: '<S157>/Subtract'
       *  Sum: '<S158>/Subtract'
       */
      localB->rtb_Product_k5_g[1] = -(localB->rtb_Product1_nw3_c[1] *
        localB->rtb_Product1_nw3_c[8] - localB->rtb_Product1_nw3_c[2] *
        localB->rtb_Product1_nw3_c[7]);
      localB->rtb_Product_k5_g[2] = localB->rtb_Product1_nw3_k[1] *
        localB->rtb_Product1_nw3_k[5] - localB->rtb_Product1_nw3_k[2] *
        localB->rtb_Product1_nw3_k[4];
      localB->rtb_Product_k5_g[3] = -(localB->rtb_Product1_nw3_cx[3] *
        localB->rtb_Product1_nw3_cx[8] - localB->rtb_Product1_nw3_cx[5] *
        localB->rtb_Product1_nw3_cx[6]);
      localB->rtb_Product_k5_g[4] = localB->rtb_Product1_nw3_b[0] *
        localB->rtb_Product1_nw3_b[8] - localB->rtb_Product1_nw3_b[2] *
        localB->rtb_Product1_nw3_b[6];
      localB->rtb_Product_k5_g[5] = -(localB->rtb_Product1_nw3_p[0] *
        localB->rtb_Product1_nw3_p[5] - localB->rtb_Product1_nw3_p[2] *
        localB->rtb_Product1_nw3_p[3]);
      localB->rtb_Product_k5_g[6] = localB->rtb_Product1_nw3_cv[3] *
        localB->rtb_Product1_nw3_cv[7] - localB->rtb_Product1_nw3_cv[4] *
        localB->rtb_Product1_nw3_cv[6];
      localB->rtb_Product_k5_g[7] = -(localB->rtb_Product1_nw3_f[0] *
        localB->rtb_Product1_nw3_f[7] - localB->rtb_Product1_nw3_f[1] *
        localB->rtb_Product1_nw3_f[6]);
      localB->rtb_Product_k5_g[8] = localB->rtb_Product1_nw3_g[0] *
        localB->rtb_Product1_nw3_g[4] - localB->rtb_Product1_nw3_g[1] *
        localB->rtb_Product1_nw3_g[3];

      /* Sum: '<S149>/Add' incorporates:
       *  Product: '<S149>/Product'
       *  Product: '<S149>/Product1'
       *  Product: '<S149>/Product2'
       *  Product: '<S159>/Product'
       *  Product: '<S159>/Product1'
       *  Product: '<S160>/Product'
       *  Product: '<S160>/Product1'
       *  Product: '<S161>/Product'
       *  Product: '<S161>/Product1'
       *  Selector: '<S149>/Selector'
       *  Selector: '<S149>/Selector1'
       *  Selector: '<S149>/Selector2'
       *  Selector: '<S149>/Selector3'
       *  Selector: '<S149>/Selector4'
       *  Selector: '<S149>/Selector5'
       *  Selector: '<S149>/Selector6'
       *  Selector: '<S149>/Selector7'
       *  Selector: '<S149>/Selector8'
       *  Sum: '<S159>/Subtract'
       *  Sum: '<S160>/Subtract'
       *  Sum: '<S161>/Subtract'
       */
      rtb_Divide_h = ((localB->Product1_nw3[4] * localB->Product1_nw3[8] -
                       localB->Product1_nw3[5] * localB->Product1_nw3[7]) *
                      localB->Product1_nw3[0] + (localB->Product1_nw3[2] *
        localB->Product1_nw3[7] - localB->Product1_nw3[1] * localB->
        Product1_nw3[8]) * localB->Product1_nw3[3]) + (localB->Product1_nw3[1] *
        localB->Product1_nw3[5] - localB->Product1_nw3[2] * localB->
        Product1_nw3[4]) * localB->Product1_nw3[6];

      /* Switch: '<S139>/Switch' incorporates:
       *  Abs: '<S139>/Abs'
       *  Constant: '<S139>/Constant'
       */
      if (!((real32_T)fabs(rtb_Divide_h) > 1.0E-5F)) {
        rtb_Divide_h = 1.0E-5F;
      }

      /* End of Switch: '<S139>/Switch' */
      for (i = 0; i < 9; i++) {
        /* Product: '<S128>/Product30' incorporates:
         *  Math: '<S139>/Math Function'
         *  Product: '<S139>/Divide'
         */
        localB->rtb_Product1_nw3_c[i] = localB->rtb_Product_k5_g[i] /
          rtb_Divide_h;
      }

      /* SignalConversion generated from: '<S128>/Product30' incorporates:
       *  Product: '<S125>/Product'
       *  Product: '<S128>/Product27'
       *  Product: '<S128>/Product28'
       *  Sum: '<S125>/Add'
       *  Sum: '<S128>/Add'
       *  Sum: '<S128>/Subtract'
       */
      rtb_Divide_h = ((real32_T)s135_iter * localC->Divide_d + localC->Gain) -
        ((rtu_initial_lateral_status[1] * localB->Add_mp +
          rtu_initial_lateral_status[0]) + rtb_Add_mp_tmp * localB->Add_mp);

      /* Product: '<S128>/Product30' */
      for (i = 0; i < 3; i++) {
        localB->Product30[i] = localB->rtb_Product1_nw3_c[i + 6] *
          s125_iter_idx_2 + (localB->rtb_Product1_nw3_c[i + 3] *
                             rtb_Add_mp_tmp_0 + localB->rtb_Product1_nw3_c[i] *
                             rtb_Divide_h);
      }

      /* Sum: '<S130>/Sum of Elements' */
      tmp = -0.0F;

      /* Gain: '<S133>/Gain1' */
      rtb_Sqrt = 3.0F * localB->Product30[0];
      for (i = 0; i < 10; i++) {
        /* Sum: '<S136>/Add' incorporates:
         *  Assignment: '<S135>/Assignment'
         *  Product: '<S136>/Product'
         *  Product: '<S136>/Product1'
         *  Product: '<S136>/Product2'
         *  Product: '<S136>/Product3'
         *  Product: '<S136>/Product4'
         */
        rtb_Add_ot = ((((rtu_initial_lateral_status[1] * localB->Assignment[i] +
                         rtu_initial_lateral_status[0]) + rtb_Gain21 *
                        localB->Assignment[i] * localB->Assignment[i]) +
                       localB->Product30[0] * localB->Assignment[i] *
                       localB->Assignment[i] * localB->Assignment[i]) +
                      localB->Product30[1] * localB->Assignment[i] *
                      localB->Assignment[i] * localB->Assignment[i] *
                      localB->Assignment[i]) + localB->Product30[2] *
          localB->Assignment[i] * localB->Assignment[i] * localB->Assignment[i] *
          localB->Assignment[i] * localB->Assignment[i];

        /* Sum: '<S130>/Sum of Elements' incorporates:
         *  Product: '<S130>/Product'
         */
        tmp += rtb_Add_ot * rtb_Add_ot;

        /* Product: '<S137>/Product1' incorporates:
         *  Assignment: '<S135>/Assignment'
         */
        localB->Product1_nw3[i] = rtb_Sqrt * localB->Assignment[i] *
          localB->Assignment[i];
      }

      /* Saturate: '<S127>/Saturation' */
      if (localB->Add_mp > 100.0F) {
        rtb_Divide_h = 100.0F;
      } else if (localB->Add_mp < 0.5F) {
        rtb_Divide_h = 0.5F;
      } else {
        rtb_Divide_h = localB->Add_mp;
      }

      /* End of Saturate: '<S127>/Saturation' */

      /* Gain: '<S133>/Gain2' */
      rtb_Sqrt = 4.0F * localB->Product30[1];

      /* Product: '<S137>/Product2' incorporates:
       *  Assignment: '<S135>/Assignment'
       */
      for (i = 0; i < 10; i++) {
        localB->Add_jo[i] = rtb_Sqrt * localB->Assignment[i] *
          localB->Assignment[i] * localB->Assignment[i];
      }

      /* End of Product: '<S137>/Product2' */

      /* Gain: '<S133>/Gain3' */
      rtb_Sqrt = 5.0F * localB->Product30[2];

      /* Sum: '<S132>/Sum of Elements' */
      tmp_0 = -0.0F;
      for (i = 0; i < 10; i++) {
        /* Sum: '<S137>/Add' incorporates:
         *  Assignment: '<S135>/Assignment'
         *  Product: '<S137>/Product'
         *  Product: '<S137>/Product1'
         *  Product: '<S137>/Product2'
         *  Product: '<S137>/Product3'
         */
        rtb_Add_ot = (((rtb_Gain_p * localB->Assignment[i] +
                        rtu_initial_lateral_status_0) + localB->Product1_nw3[i])
                      + localB->Add_jo[i]) + rtb_Sqrt * localB->Assignment[i] *
          localB->Assignment[i] * localB->Assignment[i] * localB->Assignment[i];

        /* Product: '<S132>/Product' */
        rtb_Add_ot *= rtb_Add_ot;

        /* Sum: '<S132>/Sum of Elements' */
        tmp_0 += rtb_Add_ot;

        /* Sum: '<S137>/Add' incorporates:
         *  Assignment: '<S135>/Assignment'
         *  Product: '<S137>/Product'
         *  Sum: '<S138>/Add'
         */
        localB->Add_jo[i] = rtb_Add_ot;
      }

      /* Gain: '<S133>/Gain6' */
      rtb_Sqrt = 6.0F * localB->Product30[0];

      /* Product: '<S138>/Product' incorporates:
       *  Assignment: '<S135>/Assignment'
       */
      for (i = 0; i < 10; i++) {
        localB->Add_jo[i] = rtb_Sqrt * localB->Assignment[i];
      }

      /* End of Product: '<S138>/Product' */

      /* Gain: '<S133>/Gain8' */
      rtb_Sqrt = 12.0F * localB->Product30[1];

      /* Product: '<S138>/Product1' incorporates:
       *  Assignment: '<S135>/Assignment'
       */
      for (i = 0; i < 10; i++) {
        localB->Product1_nw3[i] = rtb_Sqrt * localB->Assignment[i] *
          localB->Assignment[i];
      }

      /* End of Product: '<S138>/Product1' */

      /* Gain: '<S133>/Gain9' */
      rtb_Sqrt = 20.0F * localB->Product30[2];

      /* Sum: '<S131>/Sum of Elements' */
      tmp_1 = -0.0F;
      for (i = 0; i < 10; i++) {
        /* Sum: '<S138>/Add' incorporates:
         *  Assignment: '<S135>/Assignment'
         *  Product: '<S138>/Product'
         *  Product: '<S138>/Product1'
         *  Product: '<S138>/Product2'
         */
        rtb_Add_ot = rtb_Sqrt * localB->Assignment[i] * localB->Assignment[i] *
          localB->Assignment[i] + ((rtb_Gain5_j + localB->Add_jo[i]) +
          localB->Product1_nw3[i]);

        /* Product: '<S131>/Product' */
        rtb_Add_ot *= rtb_Add_ot;

        /* Sum: '<S131>/Sum of Elements' */
        tmp_1 += rtb_Add_ot;

        /* Sum: '<S138>/Add' incorporates:
         *  Product: '<S138>/Product'
         */
        localB->Add_jo[i] = rtb_Add_ot;
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
       *  Sqrt: '<S130>/Sqrt'
       *  Sqrt: '<S131>/Sqrt'
       *  Sqrt: '<S132>/Sqrt'
       *  Sum: '<S130>/Sum of Elements'
       *  Sum: '<S131>/Sum of Elements'
       *  Sum: '<S132>/Sum of Elements'
       */
      rtb_Divide_h = (((real32_T)sqrt(tmp / 10.0F) / 1.875F * 3.0F /
                       rtb_Divide_h + (real32_T)sqrt(tmp_0 / 10.0F) / 2.0F /
                       rtb_Divide_h) + (real32_T)sqrt(tmp_1 / 10.0F) / 10.0F *
                      2.0F / rtb_Divide_h) + rtb_Divide_h / 8.0F;

      /* If: '<S125>/If' incorporates:
       *  DataStoreRead: '<S125>/Data Store Read'
       *  DataStoreWrite: '<S126>/Data Store Write'
       *  Inport: '<S126>/cost_traj'
       *  Inport: '<S126>/cost_value'
       */
      if (rtb_Divide_h < min_cost_value) {
        /* Outputs for IfAction SubSystem: '<S125>/If Action Subsystem' incorporates:
         *  ActionPort: '<S126>/Action Port'
         */
        rty_y_cof[0] = localB->Add_mp;
        rty_y_cof[1] = rtu_initial_lateral_status[0];
        rty_y_cof[2] = rtu_initial_lateral_status[1];
        rty_y_cof[3] = rtb_Gain21;
        rty_y_cof[4] = localB->Product30[0];
        rty_y_cof[5] = localB->Product30[1];
        rty_y_cof[6] = localB->Product30[2];
        min_cost_value = rtb_Divide_h;

        /* End of Outputs for SubSystem: '<S125>/If Action Subsystem' */
      }

      /* End of If: '<S125>/If' */
    }

    /* End of Outputs for SubSystem: '<S124>/For Iterator Subsystem' */
  }

  /* End of Outputs for SubSystem: '<S123>/PlannerLoop' */
}

/*
 * System initialize for atomic system:
 *    '<S216>/Chart'
 *    '<S193>/Chart'
 *    '<S251>/Chart'
 *    '<S282>/Chart'
 *    '<S292>/Chart'
 */
void app_Chart_o_Init(real32_T *rty_ramp_cof, DW_Chart_app_go_T *localDW)
{
  localDW->is_active_c21_app = 0U;
  localDW->is_c21_app = app_IN_NO_ACTIVE_CHILD_k;
  *rty_ramp_cof = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S216>/Chart'
 *    '<S193>/Chart'
 *    '<S251>/Chart'
 *    '<S282>/Chart'
 *    '<S292>/Chart'
 */
void app_Chart_f(boolean_T rtu_Arb_is_LatCtrlActv_bl, real32_T *rty_ramp_cof,
                 DW_Chart_app_go_T *localDW)
{
  /* Chart: '<S216>/Chart' */
  if (localDW->is_active_c21_app == 0U) {
    localDW->is_active_c21_app = 1U;
    localDW->is_c21_app = app_IN_OFF_f4;
    *rty_ramp_cof = 0.0F;
  } else {
    switch (localDW->is_c21_app) {
     case app_IN_OFF_f4:
      if (rtu_Arb_is_LatCtrlActv_bl) {
        localDW->is_c21_app = app_IN_ON_Count;
        *rty_ramp_cof = 0.0F;
      }
      break;

     case app_IN_OFF_Count:
      if ((!rtu_Arb_is_LatCtrlActv_bl) && (*rty_ramp_cof <= 0.01F)) {
        localDW->is_c21_app = app_IN_OFF_f4;
        *rty_ramp_cof = 0.0F;
      } else if (rtu_Arb_is_LatCtrlActv_bl && (*rty_ramp_cof >= 0.99F)) {
        localDW->is_c21_app = app_IN_ON_o;
        *rty_ramp_cof = 1.0F;
      } else if (rtu_Arb_is_LatCtrlActv_bl) {
        *rty_ramp_cof += 0.02F;
      } else {
        *rty_ramp_cof -= 0.05F;
      }
      break;

     case app_IN_ON_o:
      if (!rtu_Arb_is_LatCtrlActv_bl) {
        localDW->is_c21_app = app_IN_OFF_Count;
        *rty_ramp_cof = 1.0F;
      }
      break;

     default:
      /* case IN_ON_Count: */
      if (rtu_Arb_is_LatCtrlActv_bl && (*rty_ramp_cof >= 0.99F)) {
        localDW->is_c21_app = app_IN_ON_o;
        *rty_ramp_cof = 1.0F;
      } else if ((!rtu_Arb_is_LatCtrlActv_bl) && (*rty_ramp_cof <= 0.01F)) {
        localDW->is_c21_app = app_IN_OFF_f4;
        *rty_ramp_cof = 0.0F;
      } else if (rtu_Arb_is_LatCtrlActv_bl) {
        *rty_ramp_cof += 0.02F;
      } else {
        *rty_ramp_cof -= 0.05F;
      }
      break;
    }
  }

  /* End of Chart: '<S216>/Chart' */
}

static void ap_LUf_boolean_Tint32_Treal32_T(real32_T outU[], real32_T outP[],
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
        app_B.i_n = app_B.idx1 + app_B.k;
        outU[app_B.r] = outU[app_B.i_n];
        outU[app_B.i_n] = app_B.mTmp1;
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
        app_B.i_n = app_B.idx1_tmp + app_B.r;
        outU[app_B.i_n] /= outU[app_B.idx1];
        app_B.r++;
      }

      app_B.c = app_B.k + 1;
      while (app_B.c < N) {
        app_B.idx1 = app_B.c * N;
        app_B.r = app_B.k + 1;
        while (app_B.r < N) {
          app_B.i_n = app_B.idx1 + app_B.r;
          outU[app_B.i_n] -= outU[app_B.idx1_tmp + app_B.r] * outU[app_B.idx1 +
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

static real_T app_rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    app_B.d = fabs(u0);
    app_B.d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (app_B.d == 1.0) {
        y = 1.0;
      } else if (app_B.d > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (app_B.d1 == 0.0) {
      y = 1.0;
    } else if (app_B.d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
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
  static const int8_T y[3] = { 0, 0, 1 };

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
  if (app_DW.icLoad) {
    for (app_B.i = 0; app_B.i < 9; app_B.i++) {
      app_DW.Delay9_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay8' */
  if (app_DW.icLoad_p) {
    for (app_B.i = 0; app_B.i < 8; app_B.i++) {
      app_DW.Delay8_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay7' */
  if (app_DW.icLoad_a) {
    for (app_B.i = 0; app_B.i < 7; app_B.i++) {
      app_DW.Delay7_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay6' */
  if (app_DW.icLoad_d) {
    for (app_B.i = 0; app_B.i < 6; app_B.i++) {
      app_DW.Delay6_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay5' */
  if (app_DW.icLoad_g) {
    for (app_B.i = 0; app_B.i < 5; app_B.i++) {
      app_DW.Delay5_DSTATE[app_B.i] = app_B.CANUnpack_o1;
    }
  }

  /* Delay: '<S24>/Delay' */
  if (app_DW.icLoad_pt) {
    app_DW.Delay_DSTATE[0] = app_B.CANUnpack_o1;
    app_DW.Delay_DSTATE[1] = app_B.CANUnpack_o1;
    app_DW.Delay_DSTATE[2] = app_B.CANUnpack_o1;
    app_DW.Delay_DSTATE[3] = app_B.CANUnpack_o1;
  }

  /* Delay: '<S24>/Delay1' */
  if (app_DW.icLoad_n) {
    app_DW.Delay1_DSTATE[0] = app_B.CANUnpack_o1;
    app_DW.Delay1_DSTATE[1] = app_B.CANUnpack_o1;
    app_DW.Delay1_DSTATE[2] = app_B.CANUnpack_o1;
  }

  /* Delay: '<S24>/Delay2' */
  if (app_DW.icLoad_b) {
    app_DW.Delay2_DSTATE[0] = app_B.CANUnpack_o1;
    app_DW.Delay2_DSTATE[1] = app_B.CANUnpack_o1;
  }

  /* Delay: '<S24>/Delay3' */
  if (app_DW.icLoad_gw) {
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
  app_B.LogicalOperator1_l = ((!(app_DW.Delay9_DSTATE[0] ==
    app_DW.Delay8_DSTATE[0])) || (!(app_DW.Delay8_DSTATE[0] ==
    app_DW.Delay7_DSTATE[0])) || (!(app_DW.Delay7_DSTATE[0] ==
    app_DW.Delay6_DSTATE[0])) || (!(app_DW.Delay6_DSTATE[0] ==
    app_DW.Delay5_DSTATE[0])) || (!(app_DW.Delay5_DSTATE[0] ==
    app_DW.Delay_DSTATE[0])) || (!(app_DW.Delay_DSTATE[0] ==
    app_DW.Delay1_DSTATE[0])) || (!(app_DW.Delay1_DSTATE[0] ==
    app_DW.Delay2_DSTATE[0])) || (!(app_DW.Delay2_DSTATE[0] ==
    app_DW.Delay3_DSTATE)) || (!(app_DW.Delay3_DSTATE == app_B.CANUnpack_o1)));

  /* Switch generated from: '<S14>/Switch' */
  if (app_B.LogicalOperator1_l) {
    /* DataTypeConversion: '<S14>/Data Type Conversion' */
    app_B.Add1_c = floor(ChLKACtrlSts);
    if (rtIsNaN(app_B.Add1_c) || rtIsInf(app_B.Add1_c)) {
      app_B.Add1_c = 0.0;
    } else {
      app_B.Add1_c = fmod(app_B.Add1_c, 256.0);
    }

    /* DataTypeConversion: '<S14>/Data Type Conversion' */
    VehCP_n_ChLKACtrlSts_u8 = (uint8_T)(app_B.Add1_c < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-app_B.Add1_c : (int32_T)(uint8_T)app_B.Add1_c);

    /* DataTypeConversion: '<S14>/Data Type Conversion1' */
    VehCP_T_ChLKARespToq_sg = (real32_T)ChLKARespToq;

    /* DataTypeConversion: '<S14>/Data Type Conversion2' */
    VehCP_T_DrvrStrgDlvrdToq_sg = (real32_T)DrvrStrgDlvrdToq;

    /* DataTypeConversion: '<S14>/Data Type Conversion3' */
    app_B.Add1_c = floor(StrgCustSetngDspCmd);
    if (rtIsNaN(app_B.Add1_c) || rtIsInf(app_B.Add1_c)) {
      app_B.Add1_c = 0.0;
    } else {
      app_B.Add1_c = fmod(app_B.Add1_c, 256.0);
    }

    /* DataTypeConversion: '<S14>/Data Type Conversion3' */
    VehCP_n_StrgCustSetngDspCmd_u8 = (uint8_T)(app_B.Add1_c < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-app_B.Add1_c : (int32_T)(uint8_T)app_B.Add1_c);
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
  if (app_DW.icLoad_n4) {
    app_DW.Delay_DSTATE_j[0] = app_B.CANUnpack_o1_h;
    app_DW.Delay_DSTATE_j[1] = app_B.CANUnpack_o1_h;
    app_DW.Delay_DSTATE_j[2] = app_B.CANUnpack_o1_h;
    app_DW.Delay_DSTATE_j[3] = app_B.CANUnpack_o1_h;
  }

  /* Delay: '<S23>/Delay1' */
  if (app_DW.icLoad_e) {
    app_DW.Delay1_DSTATE_p[0] = app_B.CANUnpack_o1_h;
    app_DW.Delay1_DSTATE_p[1] = app_B.CANUnpack_o1_h;
    app_DW.Delay1_DSTATE_p[2] = app_B.CANUnpack_o1_h;
  }

  /* Delay: '<S23>/Delay2' */
  if (app_DW.icLoad_dc) {
    app_DW.Delay2_DSTATE_g[0] = app_B.CANUnpack_o1_h;
    app_DW.Delay2_DSTATE_g[1] = app_B.CANUnpack_o1_h;
  }

  /* Delay: '<S23>/Delay3' */
  if (app_DW.icLoad_l) {
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
  app_B.Compare_gw = ((!(app_DW.Delay_DSTATE_j[0] == app_DW.Delay1_DSTATE_p[0]))
                      || (!(app_DW.Delay1_DSTATE_p[0] == app_DW.Delay2_DSTATE_g
    [0])) || (!(app_DW.Delay2_DSTATE_g[0] == app_DW.Delay3_DSTATE_m)) ||
                      (!(app_DW.Delay3_DSTATE_m == app_B.CANUnpack_o1_h)));

  /* Switch generated from: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant6'
   *  Constant: '<S12>/Constant7'
   */
  if (app_B.Compare_gw) {
    app_B.StrgWhlAngGrd_g = (real32_T)StrgWhlAngGrd;
    app_B.StrgWhlAng_g = (real32_T)StrgWhlAng;
  } else {
    app_B.StrgWhlAngGrd_g = 0.0F;
    app_B.StrgWhlAng_g = 0.0F;
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
  app_B.Add1_c = floor(app_B.CANUnpack1_o1);
  if (rtIsNaN(app_B.Add1_c) || rtIsInf(app_B.Add1_c)) {
    app_B.Add1_c = 0.0;
  } else {
    app_B.Add1_c = fmod(app_B.Add1_c, 256.0);
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion' */
  VehCP_LeftBSD_Warnning_u8 = (uint8_T)(app_B.Add1_c < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-app_B.Add1_c : (int32_T)(uint8_T)app_B.Add1_c);

  /* DataTypeConversion: '<S15>/Data Type Conversion1' */
  app_B.Add1_c = floor(app_B.CANUnpack1_o2);
  if (rtIsNaN(app_B.Add1_c) || rtIsInf(app_B.Add1_c)) {
    app_B.Add1_c = 0.0;
  } else {
    app_B.Add1_c = fmod(app_B.Add1_c, 256.0);
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion1' */
  VehCP_RightBSD_Warnning_u8 = (uint8_T)(app_B.Add1_c < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-app_B.Add1_c : (int32_T)(uint8_T)app_B.Add1_c);

  /* DataTypeConversion: '<S15>/Data Type Conversion2' */
  app_B.Add1_c = floor(app_B.CANUnpack1_o3);
  if (rtIsNaN(app_B.Add1_c) || rtIsInf(app_B.Add1_c)) {
    app_B.Add1_c = 0.0;
  } else {
    app_B.Add1_c = fmod(app_B.Add1_c, 256.0);
  }

  /* DataTypeConversion: '<S15>/Data Type Conversion2' */
  VehCP_BSDStatus_u8 = (uint8_T)(app_B.Add1_c < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-app_B.Add1_c : (int32_T)(uint8_T)app_B.Add1_c);

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
  if (app_DW.icLoad_m) {
    app_DW.Delay_DSTATE_e = APP_IN_yr_VehDynYawRate_sg;
  }

  /* Sum: '<S33>/Sum' incorporates:
   *  Delay: '<S33>/Delay'
   *  Product: '<S33>/Product'
   *  Product: '<S33>/Product1'
   */
  VehCP_yr_VehDynYawRate_sg = app_DW.Delay_DSTATE_e * app_ConstB.alpha +
    app_ConstB.ualpha * APP_IN_yr_VehDynYawRate_sg;

  /* Delay: '<S29>/Delay' */
  if (app_DW.icLoad_f) {
    app_DW.Delay_DSTATE_jg = AccelActuPos;
  }

  /* Sum: '<S29>/Sum' incorporates:
   *  Delay: '<S29>/Delay'
   *  Product: '<S29>/Product'
   *  Product: '<S29>/Product1'
   */
  VehCP_prec_VehAccelPos_sg = app_DW.Delay_DSTATE_jg * app_ConstB.alpha_b +
    app_ConstB.ualpha_g * AccelActuPos;

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
  if (app_DW.icLoad_c) {
    app_DW.Delay_DSTATE_l = app_B.StrgWhlAng_g;
  }

  /* Sum: '<S30>/Sum' incorporates:
   *  Delay: '<S30>/Delay'
   *  Product: '<S30>/Product'
   *  Product: '<S30>/Product1'
   */
  VehCP_angD_StrgWhlAng_sg = app_DW.Delay_DSTATE_l * app_ConstB.alpha_p +
    app_ConstB.ualpha_i * app_B.StrgWhlAng_g;

  /* Delay: '<S31>/Delay' */
  if (app_DW.icLoad_k) {
    /* Sum: '<S31>/Sum' */
    app_DW.Delay_DSTATE_jm = VehSpdAvgDrvn;
  }

  /* Sum: '<S31>/Sum' incorporates:
   *  Delay: '<S31>/Delay'
   *  Product: '<S31>/Product'
   *  Product: '<S31>/Product1'
   */
  app_DW.Delay_DSTATE_jm = app_DW.Delay_DSTATE_jm * app_ConstB.alpha_c +
    app_ConstB.ualpha_n * VehSpdAvgDrvn;

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
  if (app_DW.icLoad_cn) {
    app_DW.Delay_DSTATE_o = ClstDspdVehSpd;
  }

  /* Sum: '<S32>/Sum' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion31'
   *  Delay: '<S32>/Delay'
   *  Product: '<S32>/Product'
   *  Product: '<S32>/Product1'
   */
  VehCP_V_ClstDspdVehSpd_sg = app_DW.Delay_DSTATE_o * app_ConstB.alpha_p3 +
    app_ConstB.ualpha_a * (real32_T)ClstDspdVehSpd;

  /* SignalConversion: '<S4>/Signal Copy30' */
  VehCP_n_LDWAdoWarnngReq_u8 = LDWAdoWarnngReq;

  /* SignalConversion: '<S4>/Signal Copy31' */
  VehCP_n_LDWLKAHapticWrnngReq_u8 = LDWLKAHapticWrnngReq;

  /* Delay: '<S34>/Delay' */
  if (app_DW.icLoad_dp) {
    app_DW.Delay_DSTATE_d = app_B.StrgWhlAngGrd_g;
  }

  /* Sum: '<S34>/Sum' incorporates:
   *  Delay: '<S34>/Delay'
   *  Product: '<S34>/Product'
   *  Product: '<S34>/Product1'
   */
  VehCP_W_StrgWhlAngGrd_sg = app_DW.Delay_DSTATE_d * app_ConstB.alpha_j +
    app_ConstB.ualpha_l * app_B.StrgWhlAngGrd_g;

  /* Delay: '<S35>/Delay' */
  if (app_DW.icLoad_nt) {
    /* Sum: '<S35>/Sum' */
    app_DW.Delay_DSTATE_h = VehSpdAvgNonDrvn;
  }

  /* Sum: '<S35>/Sum' incorporates:
   *  Delay: '<S35>/Delay'
   *  Product: '<S35>/Product'
   *  Product: '<S35>/Product1'
   */
  app_DW.Delay_DSTATE_h = app_DW.Delay_DSTATE_h * app_ConstB.alpha_o +
    app_ConstB.ualpha_n1 * VehSpdAvgNonDrvn;

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
  if (app_DW.icLoad_dv) {
    app_DW.Delay_DSTATE_i = VSELatAcc;
  }

  /* Sum: '<S36>/Sum' incorporates:
   *  Delay: '<S36>/Delay'
   *  Product: '<S36>/Product'
   *  Product: '<S36>/Product1'
   */
  VehCP_a_VSELatAcc_sg = app_DW.Delay_DSTATE_i * app_ConstB.alpha_a +
    app_ConstB.ualpha_j * VSELatAcc;

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
  if (app_DW.icLoad_fg) {
    app_DW.Delay_DSTATE_ok = VSELongAcc;
  }

  /* Sum: '<S37>/Sum' incorporates:
   *  Delay: '<S37>/Delay'
   *  Product: '<S37>/Product'
   *  Product: '<S37>/Product1'
   */
  VehCP_a_VSELongAcc_sg = app_DW.Delay_DSTATE_ok * app_ConstB.alpha_l +
    app_ConstB.ualpha_k * VSELongAcc;

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
             &app_B.rtb_out_cond_k_d, &app_DW.sf_Chart2_a);

  /* Chart: '<S95>/Chart1' incorporates:
   *  Constant: '<S103>/Constant'
   *  Constant: '<S95>/Constant6'
   *  Constant: '<S95>/Constant7'
   *  Constant: '<S95>/Constant8'
   *  Inport: '<Root>/lateralPlan_dProb'
   *  RelationalOperator: '<S103>/Compare'
   */
  app_Chart4(arg_lateralPlan_dProb >= 0.5F, 0.02F, 1.0F, 0.01F,
             &app_B.rtb_out_cond_iu_g, &app_DW.sf_Chart1_h);

  /* Chart: '<S96>/Chart7' incorporates:
   *  Constant: '<S109>/Constant'
   *  Constant: '<S96>/Constant17'
   *  Constant: '<S96>/Constant18'
   *  Constant: '<S96>/Constant19'
   *  RelationalOperator: '<S109>/Compare'
   */
  app_Chart4(VehCP_p_VrkPdlDrvrAppdPrs_sg < 10.0F, 0.02F, 1.0F, 0.1F,
             &app_B.rtb_out_cond_i_l, &app_DW.sf_Chart7);

  /* Chart: '<S96>/Chart4' incorporates:
   *  Constant: '<S96>/Constant6'
   *  Constant: '<S96>/Constant7'
   *  Constant: '<S96>/Constant8'
   */
  app_Chart4(VehCP_is_EngRun_bl, 0.02F, 1.0F, 0.01F, &app_B.rtb_out_cond_aq_d,
             &app_DW.sf_Chart4_i);

  /* Chart: '<S96>/Chart5' incorporates:
   *  Constant: '<S96>/Constant10'
   *  Constant: '<S96>/Constant11'
   *  Constant: '<S96>/Constant9'
   */
  app_Chart4(VehCP_is_CCSwStsOn_bl, 0.02F, 1.0F, 0.01F, &app_B.rtb_out_cond_a_d,
             &app_DW.sf_Chart5);

  /* Chart: '<S96>/Chart13' incorporates:
   *  Constant: '<S111>/Constant'
   *  Constant: '<S96>/Constant32'
   *  Constant: '<S96>/Constant33'
   *  Constant: '<S96>/Constant34'
   *  RelationalOperator: '<S111>/Compare'
   */
  app_Chart4(VehCP_T_DrvrStrgDlvrdToq_sg < 2.5F, 0.02F, 1.0F, 0.5F,
             &app_B.rtb_out_cond_c4_l, &app_DW.sf_Chart13);

  /* Logic: '<S39>/Logical Operator' incorporates:
   *  Logic: '<S95>/Logical Operator1'
   *  Logic: '<S95>/Logical Operator2'
   *  Logic: '<S96>/Logical Operator'
   */
  app_B.LogicalOperator1_l = (((app_B.LogicalOperator1_l &&
    app_B.rtb_out_cond_k_d) || app_B.rtb_out_cond_iu_g) &&
    (app_B.rtb_out_cond_i_l && app_B.rtb_out_cond_aq_d && app_B.rtb_out_cond_a_d
     && app_B.rtb_out_cond_c4_l));

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   */
  app_B.rtb_out_cond_k_d = (VehCP_n_ChLKACtrlSts_u8 != 4);

  /* RelationalOperator: '<S92>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S92>/Delay Input1'
   *
   * Block description for '<S92>/Delay Input1':
   *
   *  Store in Global RAM
   */
  app_B.rtb_out_cond_iu_g = ((int32_T)VehCP_is_CCSwStsRsm_bl > (int32_T)
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
  if (app_DW.is_active_c52_app == 0U) {
    app_DW.is_active_c52_app = 1U;
    app_DW.is_c52_app = app_IN_OFF_i;
    app_B.rtb_out_cond_i_l = false;
    app_DW.is_OFF = app_IN_Zero_j;
    app_DW.local_count = 0U;
  } else if (app_DW.is_c52_app == 1) {
    app_B.rtb_out_cond_i_l = false;
    if (((int32_T)VehCP_is_CCSwStsSet_bl > (int32_T)app_DW.DelayInput1_DSTATE_d)
        && VehCP_is_CCSwStsOn_bl) {
      app_DW.is_OFF = 0;
      app_DW.is_c52_app = app_IN_ON_g;
      app_B.rtb_out_cond_i_l = true;
    } else if (app_DW.is_OFF == 1) {
      if (app_DW.tm_count > 100) {
        app_DW.is_OFF = app_IN_Zero_j;
        app_DW.local_count = 0U;
      } else if ((app_DW.local_count == 2) && VehCP_is_CCSwStsOn_bl) {
        app_DW.is_OFF = 0;
        app_DW.is_c52_app = app_IN_ON_g;
        app_B.rtb_out_cond_i_l = true;
      } else if (app_B.rtb_out_cond_iu_g) {
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

      /* case IN_Zero: */
    } else if (app_B.rtb_out_cond_iu_g) {
      app_DW.is_OFF = app_IN_UP_g;
      app_DW.local_count = 1U;
      app_DW.tm_count = 0U;
    }
  } else {
    /* case IN_ON: */
    app_B.rtb_out_cond_i_l = true;
    if (app_DW.Delay_DSTATE_lz || (!VehCP_is_CCSwStsOn_bl)) {
      app_DW.is_c52_app = app_IN_OFF_i;
      app_B.rtb_out_cond_i_l = false;
      app_DW.is_OFF = app_IN_Zero_j;
      app_DW.local_count = 0U;
    }
  }

  /* End of Chart: '<S94>/Chart1' */

  /* Chart: '<S39>/Chart' */
  if (app_DW.is_active_c51_app == 0U) {
    app_DW.is_active_c51_app = 1U;
    app_DW.is_c51_app = app_IN_OFF_i;
    Arb_is_LatCtrlActv_bl = false;
  } else {
    switch (app_DW.is_c51_app) {
     case app_IN_OFF_i:
      if (app_B.rtb_out_cond_i_l && app_B.LogicalOperator1_l) {
        app_DW.is_c51_app = app_IN_Standby;
        Arb_is_LatCtrlActv_bl = false;
      } else {
        Arb_is_LatCtrlActv_bl = false;
      }
      break;

     case app_IN_ON_g:
      if (!app_B.LogicalOperator1_l) {
        app_DW.is_c51_app = app_IN_OFF_i;
        Arb_is_LatCtrlActv_bl = false;
      } else if (!app_B.rtb_out_cond_k_d) {
        app_DW.is_c51_app = app_IN_Standby;
        Arb_is_LatCtrlActv_bl = false;
      } else {
        Arb_is_LatCtrlActv_bl = true;
      }
      break;

     default:
      /* case IN_Standby: */
      if (!app_B.LogicalOperator1_l) {
        app_DW.is_c51_app = app_IN_OFF_i;
        Arb_is_LatCtrlActv_bl = false;
      } else if (app_B.rtb_out_cond_k_d) {
        app_DW.is_c51_app = app_IN_ON_g;
        Arb_is_LatCtrlActv_bl = true;
      } else {
        Arb_is_LatCtrlActv_bl = false;
      }
      break;
    }
  }

  /* End of Chart: '<S39>/Chart' */

  /* Gain: '<S262>/Gain1' incorporates:
   *  Gain: '<S112>/Gain7'
   *  Gain: '<S113>/Gain'
   *  Gain: '<S115>/Gain'
   */
  app_B.StrgWhlAngGrd_g = 0.277777791F * VehCP_V_VehSpdAvgDrvn_sg;

  /* Lookup_n-D: '<S283>/1-D Lookup Table' incorporates:
   *  Gain: '<S283>/Gain'
   */
  app_B.uDLookupTable = look1_iflf_binlxpw(3.6F * app_B.StrgWhlAngGrd_g,
    app_ConstP.pooled29, app_ConstP.uDLookupTable_tableData_h4, 7U);

  /* Saturate: '<S113>/Saturation' */
  if (app_B.StrgWhlAngGrd_g > 100.0F) {
    /* Saturate: '<S293>/Saturation' */
    app_B.StrgWhlAng_g = 100.0F;
  } else if (app_B.StrgWhlAngGrd_g < 1.0F) {
    /* Saturate: '<S293>/Saturation' */
    app_B.StrgWhlAng_g = 1.0F;
  } else {
    /* Saturate: '<S293>/Saturation' */
    app_B.StrgWhlAng_g = app_B.StrgWhlAngGrd_g;
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
             0.02F, &app_B.LogicalOperator1_l, &app_DW.sf_Chart7_o);

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
             0.02F, &app_B.rtb_out_cond_iu_g, &app_DW.sf_Chart1_c);

  /* Chart: '<S119>/Chart2' incorporates:
   *  Abs: '<S119>/Abs2'
   *  Constant: '<S119>/Constant5'
   *  Constant: '<S119>/Constant6'
   *  Constant: '<S119>/Constant7'
   *  Constant: '<S169>/Constant'
   *  RelationalOperator: '<S169>/Compare'
   */
  app_Chart4((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg) < 1.0F, 1.0F, 0.1F,
             0.02F, &app_B.rtb_out_cond_i_l, &app_DW.sf_Chart2_n);

  /* Logic: '<S119>/Logical Operator3' incorporates:
   *  Logic: '<S119>/Logical Operator2'
   */
  app_B.LogicalOperator1_l = ((app_B.LogicalOperator1_l ||
    app_B.rtb_out_cond_iu_g) && app_B.rtb_out_cond_i_l);

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
  if (app_DW.is_active_c6_app == 0U) {
    app_DW.is_active_c6_app = 1U;
    app_DW.local_time_h = 0.0F;
    app_B.rtb_out_cond_iu_g = true;
  } else if (((int32_T)app_B.LogicalOperator1_l > (int32_T)
              app_DW.DelayInput1_DSTATE_p) || ((app_DW.local_time_h > 0.1F) &&
              app_B.LogicalOperator1_l)) {
    app_DW.local_time_h = 0.0F;
    app_B.rtb_out_cond_iu_g = true;
  } else {
    app_B.rtb_out_cond_iu_g = false;
    if (app_B.LogicalOperator1_l) {
      app_DW.local_time_h += 0.02F;
    } else {
      app_DW.local_time_h = 0.0F;
    }
  }

  /* End of Chart: '<S119>/Chart' */

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
  app_B.rtb_out_cond_iu_g = (((Arb_is_LatCtrlActv_bl !=
    app_DW.DelayInput1_DSTATE) || app_B.rtb_out_cond_iu_g) &&
    (app_B.StrgWhlAngGrd_g >= 5.0F));

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
  app_DW.icLoad_mq = ((app_B.rtb_out_cond_iu_g && (app_PrevZCX.Delay_Reset_ZCE
    != 1)) || app_DW.icLoad_mq);
  app_PrevZCX.Delay_Reset_ZCE = app_B.rtb_out_cond_iu_g;
  if (app_DW.icLoad_mq) {
    app_DW.Delay_DSTATE_lg[0] = -arg_lateralPlan_pathCof_C0;
    app_DW.Delay_DSTATE_lg[1] = -(arg_lateralPlan_pathCof_C1 *
      app_B.StrgWhlAngGrd_g);
    app_DW.Delay_DSTATE_lg[2] = (0.0174532924F * VehCP_yr_VehDynYawRate_sg -
      2.0F * arg_lateralPlan_pathCof_C2 * app_B.StrgWhlAngGrd_g) *
      app_B.StrgWhlAngGrd_g;
  }

  /* End of Delay: '<S117>/Delay' */

  /* Chart: '<S112>/Planning_Scheduler' incorporates:
   *  Constant: '<S112>/Constant'
   *  Constant: '<S112>/Constant4'
   */
  if (app_DW.is_active_c12_app == 0U) {
    app_DW.is_active_c12_app = 1U;
    app_B.plan_time = 0.0F;

    /* Outputs for Function Call SubSystem: '<S112>/Planner' */
    app_Planner(app_DW.Delay_DSTATE_lg, app_B.cost_traj, &app_B.Planner,
                &app_ConstB.Planner);

    /* End of Outputs for SubSystem: '<S112>/Planner' */
  } else {
    app_B.plan_time += 0.02F;
    if ((app_B.plan_time >= 0.1F) || app_B.rtb_out_cond_iu_g) {
      /* Outputs for Function Call SubSystem: '<S112>/Planner' */
      app_Planner(app_DW.Delay_DSTATE_lg, app_B.cost_traj, &app_B.Planner,
                  &app_ConstB.Planner);

      /* End of Outputs for SubSystem: '<S112>/Planner' */
      app_B.plan_time = 0.0F;
    }
  }

  /* End of Chart: '<S112>/Planning_Scheduler' */

  /* Gain: '<S122>/Gain' */
  app_B.Add_e = 2.0F * app_B.cost_traj[3];
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    /* Sum: '<S178>/Add' incorporates:
     *  Constant: '<S112>/reference_timeseries'
     *  Product: '<S178>/Product'
     *  Product: '<S178>/Product1'
     *  Product: '<S178>/Product2'
     *  Product: '<S178>/Product3'
     *  Product: '<S178>/Product4'
     */
    app_B.Add_k[app_B.i] = ((((app_B.cost_traj[2] * app_ConstP.pooled30[app_B.i]
      + app_B.cost_traj[1]) + app_B.cost_traj[3] * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i]) + app_B.cost_traj[4] *
      app_ConstP.pooled30[app_B.i] * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i]) + app_B.cost_traj[5] *
      app_ConstP.pooled30[app_B.i] * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i] * app_ConstP.pooled30[app_B.i]) +
      app_B.cost_traj[6] * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i] * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i] * app_ConstP.pooled30[app_B.i];

    /* Product: '<S178>/Product4' incorporates:
     *  Constant: '<S112>/reference_timeseries'
     *  Product: '<S179>/Product'
     */
    app_B.Gain1_m[app_B.i] = app_B.Add_e * app_ConstP.pooled30[app_B.i];
  }

  /* Gain: '<S122>/Gain1' */
  app_B.Add_e = 3.0F * app_B.cost_traj[4];

  /* Product: '<S179>/Product1' incorporates:
   *  Constant: '<S112>/reference_timeseries'
   */
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    app_B.Product_bw[app_B.i] = app_B.Add_e * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i];
  }

  /* End of Product: '<S179>/Product1' */

  /* Gain: '<S122>/Gain2' */
  app_B.Add_e = 4.0F * app_B.cost_traj[5];

  /* Product: '<S179>/Product2' incorporates:
   *  Constant: '<S112>/reference_timeseries'
   */
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    app_B.Product2_i2[app_B.i] = app_B.Add_e * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i] * app_ConstP.pooled30[app_B.i];
  }

  /* End of Product: '<S179>/Product2' */

  /* Gain: '<S122>/Gain3' */
  app_B.Add_e = 5.0F * app_B.cost_traj[6];

  /* Sum: '<S179>/Add' */
  app_B.Ts = app_B.cost_traj[2];

  /* Saturate: '<S112>/Saturation' */
  if (app_B.StrgWhlAngGrd_g > 100.0F) {
    app_B.Gain9 = 100.0F;
  } else if (app_B.StrgWhlAngGrd_g < 1.0F) {
    app_B.Gain9 = 1.0F;
  } else {
    app_B.Gain9 = app_B.StrgWhlAngGrd_g;
  }

  /* End of Saturate: '<S112>/Saturation' */
  for (app_B.i = 0; app_B.i < 30; app_B.i++) {
    /* Sum: '<S179>/Add' incorporates:
     *  Constant: '<S112>/reference_timeseries'
     *  Product: '<S179>/Product3'
     */
    app_B.Gain2_a = app_B.Add_e * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i] * app_ConstP.pooled30[app_B.i] *
      app_ConstP.pooled30[app_B.i] + (((app_B.Ts + app_B.Gain1_m[app_B.i]) +
      app_B.Product_bw[app_B.i]) + app_B.Product2_i2[app_B.i]);
    app_B.Gain1_m[app_B.i] = app_B.Gain2_a;

    /* Product: '<S112>/Divide' */
    app_B.Product_bw[app_B.i] = app_B.Gain2_a / app_B.Gain9;
  }

  /* Chart: '<S113>/Chart' */
  app_B.s204_iter = (int32_T)(app_B.count + 1U);
  if (app_B.count + 1U > 255U) {
    app_B.s204_iter = 255;
  }

  app_B.count = (uint8_T)app_B.s204_iter;
  if (app_B.count > 2) {
    app_B.count = 0U;
  }

  /* End of Chart: '<S113>/Chart' */

  /* Outputs for Enabled SubSystem: '<S187>/mpc_controller2' incorporates:
   *  EnablePort: '<S190>/Enable'
   */
  /* RelationalOperator: '<S185>/Compare' incorporates:
   *  Constant: '<S185>/Constant'
   */
  if (app_B.count == 2) {
    /* Gain: '<S190>/Gain' incorporates:
     *  Saturate: '<S113>/Saturation'
     */
    app_B.Add_e = 3.6F * app_B.StrgWhlAng_g;

    /* Lookup_n-D: '<S190>/1-D Lookup Table2' incorporates:
     *  Lookup_n-D: '<S190>/1-D Lookup Table1'
     *  Sum: '<S172>/Add'
     */
    app_B.Ts = look1_iflf_binlcapw(app_B.Add_e, app_ConstP.pooled31,
      app_ConstP.pooled32, 5U);

    /* S-Function (sfix_look1_dyn): '<S190>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S190>/Constant'
     *  Constant: '<S190>/reference_timeseries'
     */
    /* Dynamic Look-Up Table Block: '<S190>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    {
      int_T i1;
      const real32_T *u0 = app_ConstP.pooled30;
      real32_T *y0 = &app_B.Gain1_m[0];
      for (i1=0; i1 < 30; i1++) {
        LookUp_real32_T_real32_T( &(y0[i1]), &app_B.Gain3[0], u0[i1],
          app_ConstP.Constant_Value_g, 16U);
      }
    }

    for (app_B.i = 0; app_B.i < 30; app_B.i++) {
      app_B.Gain2_a = app_B.Gain1_m[app_B.i];

      /* Reshape: '<S190>/Reshape4' incorporates:
       *  Sum: '<S190>/Add'
       */
      app_B.Reshape4[app_B.i] = app_B.Product_bw[app_B.i] + app_B.Gain2_a;
      app_B.Product_bw[app_B.i] = -(real32_T)atan(app_B.Gain2_a);
    }

    /* S-Function (sfix_look1_dyn): '<S190>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S190>/Constant'
     *  Constant: '<S190>/reference_timeseries'
     *  Gain: '<S190>/Gain7'
     *  Sum: '<S190>/Add'
     *  Trigonometry: '<S190>/Atan'
     */
    /* Dynamic Look-Up Table Block: '<S190>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    {
      int_T i1;
      const real32_T *u0 = app_ConstP.pooled30;
      real32_T *y0 = &app_B.Gain1_m[0];
      for (i1=0; i1 < 30; i1++) {
        LookUp_real32_T_real32_T( &(y0[i1]), &app_B.Gain2[0], u0[i1],
          app_ConstP.Constant_Value_g, 16U);
      }
    }

    /* Outputs for Iterator SubSystem: '<S190>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S204>/For Iterator'
     */
    /* Outputs for IfAction SubSystem: '<S208>/rotateThenMove' incorporates:
     *  ActionPort: '<S210>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S208>/moveThenRotate' incorporates:
     *  ActionPort: '<S209>/Action Port'
     */
    /* If: '<S208>/If' incorporates:
     *  Constant: '<S204>/Constant1'
     *  Gain: '<S190>/Gain6'
     *  Merge: '<S208>/Merge1'
     *  Product: '<S210>/Product2'
     *  Product: '<S210>/Product3'
     *  Selector: '<S204>/Selector'
     *  Selector: '<S204>/Selector1'
     *  Selector: '<S204>/Selector2'
     *  Selector: '<S204>/Selector3'
     *  Sum: '<S209>/Add1'
     *  Sum: '<S210>/Add1'
     *  Sum: '<S210>/Add3'
     *  Trigonometry: '<S210>/Sin2'
     *  Trigonometry: '<S210>/Sin3'
     */
    for (app_B.s204_iter = 0; app_B.s204_iter < 30; app_B.s204_iter++) {
      app_B.Gain9 = app_B.Product_bw[app_B.s204_iter];
      app_B.Gain2_a = app_B.Gain1_m[app_B.s204_iter];
      app_B.Reshape3[app_B.s204_iter] = ((real32_T)cos(app_B.Gain9) *
        app_B.Add_k[app_B.s204_iter] - 0.0F * (real32_T)sin(app_B.Gain9)) -
        (-app_B.Gain2_a);
      app_B.Gain1_m[app_B.s204_iter] = -app_B.Gain2_a;
    }

    /* End of If: '<S208>/If' */
    /* End of Outputs for SubSystem: '<S208>/moveThenRotate' */
    /* End of Outputs for SubSystem: '<S208>/rotateThenMove' */
    /* End of Outputs for SubSystem: '<S190>/For Iterator Subsystem' */

    /* Gain: '<S190>/Gain2' incorporates:
     *  Lookup_n-D: '<S190>/1-D Lookup Table'
     *  Sum: '<S172>/Add'
     */
    app_B.Gain2_a = 100.0F * look1_iflf_binlcapw(app_B.Add_e,
      app_ConstP.pooled31, app_ConstP.uDLookupTable_tableData_h, 5U);

    /* Delay: '<S190>/Delay' */
    app_DW.icLoad_pb = ((Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_c
      != 1)) || app_DW.icLoad_pb);
    app_PrevZCX.Delay_Reset_ZCE_c = Arb_is_LatCtrlActv_bl;
    if (app_DW.icLoad_pb) {
      /* Sum: '<S190>/Sum' incorporates:
       *  Gain: '<S190>/degps2radps'
       */
      app_DW.Delay_DSTATE_cc = 0.0174532924F * VehCP_yr_VehDynYawRate_sg;
    }

    /* MATLAB Function: '<S190>/MPC_LatController' incorporates:
     *  Constant: '<S190>/reference_timeseries'
     *  Gain: '<S190>/Gain3'
     *  Lookup_n-D: '<S190>/1-D Lookup Table2'
     *  Reshape: '<S190>/Reshape3'
     *  Reshape: '<S190>/Reshape4'
     *  Saturate: '<S113>/Saturation'
     */
    memset(&app_B.Q[0], 0, 8100U * sizeof(real32_T));
    memset(&app_B.M[0], 0, 270U * sizeof(real32_T));
    memset(&app_B.K[0], 0, 2700U * sizeof(real32_T));
    memset(&app_B.X_ref[0], 0, 90U * sizeof(real32_T));
    app_B.rtb_Gain1_m_p[2] = 0.0F;
    app_B.tmp_data[0] = 0.0F;
    app_B.e[0] = 2;
    app_B.e[1] = 1;
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
        app_B.Ts = app_ConstP.pooled30[app_B.i] - app_ConstP.pooled30[app_B.i -
          1];
      }

      app_B.Gain9 = app_B.Reshape4[app_B.i];
      app_B.g_tmp = app_B.i * 3;
      app_B.h_tmp = (app_B.i + 1) * 3;
      if (app_B.g_tmp + 1 > app_B.h_tmp) {
        app_B.l = 0;
        app_B.s204_iter = 0;
      } else {
        app_B.l = app_B.g_tmp;
        app_B.s204_iter = app_B.h_tmp;
      }

      app_B.rtb_Gain1_m_p[0] = app_B.Reshape3[app_B.i];
      app_B.rtb_Gain1_m_p[1] = app_B.Gain9;
      app_B.loop_ub_tmp = app_B.s204_iter - app_B.l;
      for (app_B.s204_iter = 0; app_B.s204_iter < app_B.loop_ub_tmp;
           app_B.s204_iter++) {
        app_B.X_ref[app_B.l + app_B.s204_iter] =
          app_B.rtb_Gain1_m_p[app_B.s204_iter];
      }

      app_B.tmp_data[1] = app_B.Ts;
      app_B.tmp_2[0] = 1.0F;
      app_B.tmp_2[3] = app_B.StrgWhlAng_g * (real32_T)cos(app_B.Gain9) *
        app_B.Ts;
      app_B.tmp_2[1] = 0.0F;
      app_B.tmp_2[4] = 1.0F;
      for (app_B.s204_iter = 0; app_B.s204_iter < 2; app_B.s204_iter++) {
        app_B.tmp_2[app_B.s204_iter + 6] = app_B.tmp_data[app_B.s204_iter];
      }

      for (app_B.s204_iter = 0; app_B.s204_iter < 3; app_B.s204_iter++) {
        app_B.i_p = y[app_B.s204_iter];
        app_B.tmp_2[2 + 3 * app_B.s204_iter] = app_B.i_p;
        app_B.l = app_B.i + 90 * app_B.s204_iter;
        app_B.loop_ub_tmp = 3 * app_B.s204_iter;
        app_B.A_set[app_B.l] = app_B.tmp_2[app_B.loop_ub_tmp];
        app_B.A_set[app_B.l + 30] = app_B.tmp_2[1 + app_B.loop_ub_tmp];
        app_B.A_set[app_B.l + 60] = app_B.tmp_2[2 + 3 * app_B.s204_iter];
        app_B.B_set[app_B.i + 30 * app_B.s204_iter] = app_B.i_p;
      }

      if (app_B.g_tmp + 1 > app_B.h_tmp) {
        app_B.loop_ub_tmp = 0;
        app_B.s204_iter = 0;
        app_B.g_tmp = 0;
        app_B.h_tmp = 0;
      } else {
        app_B.loop_ub_tmp = app_B.g_tmp;
        app_B.s204_iter = app_B.h_tmp;
      }

      app_B.s[0] = (int8_T)(app_B.s204_iter - app_B.loop_ub_tmp);
      app_B.s[1] = (int8_T)(app_B.h_tmp - app_B.g_tmp);
      app_B.l = app_B.s[1];
      for (app_B.s204_iter = 0; app_B.s204_iter < app_B.l; app_B.s204_iter++) {
        app_B.loop_ub = app_B.s[0];
        for (app_B.h_tmp = 0; app_B.h_tmp < app_B.loop_ub; app_B.h_tmp++) {
          app_B.Q[(app_B.loop_ub_tmp + app_B.h_tmp) + 90 * (app_B.g_tmp +
            app_B.s204_iter)] = app_B.tmp_1[app_B.h_tmp + app_B.s[0] *
            app_B.s204_iter];
        }
      }
    }

    for (app_B.s204_iter = 0; app_B.s204_iter < 9; app_B.s204_iter++) {
      app_B.b_I[app_B.s204_iter] = 0;
    }

    app_B.b_I[0] = 1;
    app_B.b_I[4] = 1;
    app_B.b_I[8] = 1;
    for (app_B.s204_iter = 0; app_B.s204_iter < 9; app_B.s204_iter++) {
      app_B.tmp_1[app_B.s204_iter] = app_B.b_I[app_B.s204_iter];
      app_B.b_I[app_B.s204_iter] = 0;
    }

    app_B.b_I[0] = 1;
    app_B.b_I[4] = 1;
    app_B.b_I[8] = 1;
    for (app_B.s204_iter = 0; app_B.s204_iter < 9; app_B.s204_iter++) {
      app_B.tmp_2[app_B.s204_iter] = app_B.b_I[app_B.s204_iter];
    }

    app_B.e[1] = 3;
    for (app_B.i = 0; app_B.i < 30; app_B.i++) {
      for (app_B.s204_iter = 0; app_B.s204_iter < 3; app_B.s204_iter++) {
        for (app_B.h_tmp = 0; app_B.h_tmp < 3; app_B.h_tmp++) {
          app_B.l = app_B.s204_iter + 3 * app_B.h_tmp;
          app_B.A_set_k[app_B.l] = 0.0F;
          app_B.g_tmp = 30 * app_B.s204_iter + app_B.i;
          app_B.A_set_k[app_B.l] += app_B.A_set[app_B.g_tmp] * app_B.tmp_1[3 *
            app_B.h_tmp];
          app_B.A_set_k[app_B.l] += app_B.A_set[app_B.g_tmp + 90] * app_B.tmp_1
            [3 * app_B.h_tmp + 1];
          app_B.A_set_k[app_B.l] += app_B.A_set[app_B.g_tmp + 180] *
            app_B.tmp_1[3 * app_B.h_tmp + 2];
        }
      }

      for (app_B.s204_iter = 0; app_B.s204_iter < 9; app_B.s204_iter++) {
        app_B.tmp_1[app_B.s204_iter] = app_B.A_set_k[app_B.s204_iter];
      }

      app_B.g_tmp = app_B.i * 3;
      app_B.loop_ub_tmp = (app_B.i + 1) * 3;
      if (app_B.g_tmp + 1 > app_B.loop_ub_tmp) {
        app_B.loop_ub = 0;
        app_B.s204_iter = 0;
      } else {
        app_B.loop_ub = app_B.g_tmp;
        app_B.s204_iter = app_B.loop_ub_tmp;
      }

      app_B.e[0] = (int8_T)(app_B.s204_iter - app_B.loop_ub);
      app_B.l = app_B.e[0];
      for (app_B.s204_iter = 0; app_B.s204_iter < 3; app_B.s204_iter++) {
        for (app_B.h_tmp = 0; app_B.h_tmp < app_B.l; app_B.h_tmp++) {
          app_B.M[(app_B.loop_ub + app_B.h_tmp) + 90 * app_B.s204_iter] =
            app_B.tmp_1[app_B.h_tmp + app_B.e[0] * app_B.s204_iter];
        }
      }

      app_B.l = (int32_T)(((-1.0 - ((real_T)app_B.i + 1.0)) + 1.0) / -1.0);
      if (0 <= app_B.l - 1) {
        if (app_B.g_tmp + 1 > app_B.loop_ub_tmp) {
          app_B.s241_iter = 0;
          app_B.loop_ub_tmp = 0;
        } else {
          app_B.s241_iter = app_B.g_tmp;
        }

        app_B.loop_ub_m = app_B.loop_ub_tmp - app_B.s241_iter;
      }

      app_B.loop_ub_tmp = 0;
      while (app_B.loop_ub_tmp <= app_B.l - 1) {
        app_B.g_tmp = (app_B.i - app_B.loop_ub_tmp) + 1;
        if (app_B.i + 1 == app_B.g_tmp) {
          for (app_B.s204_iter = 0; app_B.s204_iter < 9; app_B.s204_iter++) {
            app_B.b_I[app_B.s204_iter] = 0;
          }

          app_B.b_I[0] = 1;
          app_B.b_I[4] = 1;
          app_B.b_I[8] = 1;
          for (app_B.s204_iter = 0; app_B.s204_iter < 9; app_B.s204_iter++) {
            app_B.tmp_2[app_B.s204_iter] = app_B.b_I[app_B.s204_iter];
          }
        } else {
          for (app_B.s204_iter = 0; app_B.s204_iter < 3; app_B.s204_iter++) {
            for (app_B.h_tmp = 0; app_B.h_tmp < 3; app_B.h_tmp++) {
              app_B.loop_ub = app_B.s204_iter + 3 * app_B.h_tmp;
              app_B.A_set_k[app_B.loop_ub] = 0.0F;
              app_B.tmp_2_tmp = 90 * app_B.h_tmp + app_B.g_tmp;
              app_B.A_set_k[app_B.loop_ub] += app_B.A_set[app_B.tmp_2_tmp] *
                app_B.tmp_2[app_B.s204_iter];
              app_B.A_set_k[app_B.loop_ub] += app_B.A_set[app_B.tmp_2_tmp + 30] *
                app_B.tmp_2[app_B.s204_iter + 3];
              app_B.A_set_k[app_B.loop_ub] += app_B.A_set[app_B.tmp_2_tmp + 60] *
                app_B.tmp_2[app_B.s204_iter + 6];
            }
          }

          for (app_B.s204_iter = 0; app_B.s204_iter < 9; app_B.s204_iter++) {
            app_B.tmp_2[app_B.s204_iter] = app_B.A_set_k[app_B.s204_iter];
          }
        }

        for (app_B.s204_iter = 0; app_B.s204_iter < 3; app_B.s204_iter++) {
          app_B.rtb_Gain1_m_p[app_B.s204_iter] = app_B.tmp_2[app_B.s204_iter + 6]
            * (real32_T)app_B.B_set[app_B.g_tmp + 59] +
            (app_B.tmp_2[app_B.s204_iter + 3] * (real32_T)
             app_B.B_set[app_B.g_tmp + 29] + (real32_T)app_B.B_set[app_B.g_tmp -
             1] * app_B.tmp_2[app_B.s204_iter]);
        }

        for (app_B.s204_iter = 0; app_B.s204_iter < app_B.loop_ub_m;
             app_B.s204_iter++) {
          app_B.K[(app_B.s241_iter + app_B.s204_iter) + 90 * (app_B.g_tmp - 1)] =
            app_B.rtb_Gain1_m_p[app_B.s204_iter];
        }

        app_B.loop_ub_tmp++;
      }
    }

    for (app_B.s204_iter = 0; app_B.s204_iter < 90; app_B.s204_iter++) {
      for (app_B.h_tmp = 0; app_B.h_tmp < 30; app_B.h_tmp++) {
        app_B.loop_ub_tmp = app_B.h_tmp + 30 * app_B.s204_iter;
        app_B.K_m[app_B.loop_ub_tmp] = 0.0F;
        for (app_B.s241_iter = 0; app_B.s241_iter < 90; app_B.s241_iter++) {
          app_B.K_m[app_B.loop_ub_tmp] += app_B.K[90 * app_B.h_tmp +
            app_B.s241_iter] * app_B.Q[90 * app_B.s204_iter + app_B.s241_iter];
        }
      }
    }

    for (app_B.s204_iter = 0; app_B.s204_iter < 30; app_B.s204_iter++) {
      for (app_B.h_tmp = 0; app_B.h_tmp < 30; app_B.h_tmp++) {
        app_B.Ts = 0.0F;
        for (app_B.s241_iter = 0; app_B.s241_iter < 90; app_B.s241_iter++) {
          app_B.Ts += app_B.K_m[30 * app_B.s241_iter + app_B.s204_iter] *
            app_B.K[90 * app_B.h_tmp + app_B.s241_iter];
        }

        app_B.loop_ub_tmp = 30 * app_B.h_tmp + app_B.s204_iter;
        app_B.K_c[app_B.loop_ub_tmp] = (real32_T)ab[app_B.loop_ub_tmp] *
          app_B.Gain2_a + app_B.Ts;
      }
    }

    for (app_B.s204_iter = 0; app_B.s204_iter < 900; app_B.s204_iter++) {
      /* S-Function (sdsplu2): '<S211>/LU Factorization' */
      app_B.LUFactorization_o1[app_B.s204_iter] = 2.0F *
        app_B.K_c[app_B.s204_iter];
    }

    /* S-Function (sdsplu2): '<S211>/LU Factorization' */
    ap_LUf_boolean_Tint32_Treal32_T(&app_B.LUFactorization_o1[0],
      &app_B.LUFactorization_o2[0], 30, &app_B.Compare_gw);

    /* DataTypeConversion: '<S211>/Data Type Conversion' incorporates:
     *  Logic: '<S211>/Logical Operator'
     */
    app_B.DataTypeConversion = (uint8_T)!app_B.Compare_gw;

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
      for (app_B.s204_iter = 0; app_B.s204_iter < 30; app_B.s204_iter++) {
        app_B.loop_ub_tmp = (int32_T)(real32_T)floor
          (app_B.LUFactorization_o2[app_B.s204_iter]) - 1;
        if (app_B.loop_ub_tmp < 0) {
          app_B.loop_ub_tmp = 0;
        } else if (app_B.loop_ub_tmp >= 30) {
          app_B.loop_ub_tmp = 29;
        }

        for (app_B.s241_iter = 0; app_B.s241_iter < 30; app_B.s241_iter++) {
          app_B.BackwardSubstitution[30 * app_B.s241_iter + app_B.s204_iter] =
            app_ConstP.Constant_Value_e[30 * app_B.s241_iter + app_B.loop_ub_tmp];
        }
      }

      /* End of S-Function (sdspperm2): '<S212>/Permute Matrix' */

      /* S-Function (sdspfbsub2): '<S212>/Forward Substitution' incorporates:
       *  S-Function (sdspfbsub2): '<S212>/Backward Substitution'
       *  S-Function (sdsplu2): '<S211>/LU Factorization'
       */
      for (app_B.g_tmp = 0; app_B.g_tmp < 30; app_B.g_tmp++) {
        app_B.s241_iter = app_B.g_tmp * 30;
        for (app_B.i = 0; app_B.i < 29; app_B.i++) {
          app_B.loop_ub_tmp = app_B.i + 1;
          app_B.loop_ub_m = (app_B.s241_iter + app_B.i) + 1;
          app_B.Gain2_a = app_B.BackwardSubstitution[app_B.loop_ub_m];
          app_B.s204_iter = 0;
          while (app_B.s204_iter < app_B.i + 1) {
            app_B.Gain2_a -= app_B.BackwardSubstitution[app_B.s241_iter +
              app_B.s204_iter] * app_B.LUFactorization_o1[app_B.loop_ub_tmp];
            app_B.loop_ub_tmp += 30;
            app_B.s204_iter++;
          }

          app_B.BackwardSubstitution[app_B.loop_ub_m] = app_B.Gain2_a;
        }
      }

      /* End of S-Function (sdspfbsub2): '<S212>/Forward Substitution' */

      /* S-Function (sdspfbsub2): '<S212>/Backward Substitution' incorporates:
       *  S-Function (sdsplu2): '<S211>/LU Factorization'
       */
      for (app_B.g_tmp = 0; app_B.g_tmp < 30; app_B.g_tmp++) {
        app_B.s241_iter = app_B.g_tmp * 30;
        app_B.BackwardSubstitution[app_B.s241_iter + 29] /=
          app_B.LUFactorization_o1[899];
        for (app_B.i = 28; app_B.i >= 0; app_B.i--) {
          app_B.loop_ub_tmp = app_B.i + 870;
          app_B.loop_ub_m = app_B.s241_iter + app_B.i;
          app_B.Gain2_a = app_B.BackwardSubstitution[app_B.loop_ub_m];
          app_B.s204_iter = 29;
          while (app_B.s204_iter > app_B.i) {
            app_B.Gain2_a -= app_B.BackwardSubstitution[app_B.s241_iter +
              app_B.s204_iter] * app_B.LUFactorization_o1[app_B.loop_ub_tmp];
            app_B.loop_ub_tmp -= 30;
            app_B.s204_iter--;
          }

          app_B.BackwardSubstitution[app_B.loop_ub_m] = app_B.Gain2_a /
            app_B.LUFactorization_o1[app_B.loop_ub_tmp];
        }
      }

      /* End of S-Function (sdspfbsub2): '<S212>/Backward Substitution' */
      /* End of Outputs for SubSystem: '<S211>/Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S211>/Subsystem1' incorporates:
       *  ActionPort: '<S213>/Action Port'
       */
      memcpy(&app_B.BackwardSubstitution[0], &app_ConstP.Constant_Value_e[0],
             900U * sizeof(real32_T));

      /* End of Outputs for SubSystem: '<S211>/Subsystem1' */
    }

    /* End of If: '<S211>/If' */

    /* MATLAB Function: '<S190>/MPC_LatController' incorporates:
     *  Delay: '<S190>/Delay'
     */
    for (app_B.s204_iter = 0; app_B.s204_iter < 90; app_B.s204_iter++) {
      app_B.fv[app_B.s204_iter] = ((app_B.M[app_B.s204_iter + 180] *
        app_DW.Delay_DSTATE_cc + (app_B.M[app_B.s204_iter + 90] * 0.0F +
        app_B.M[app_B.s204_iter] * 0.0F)) - app_B.X_ref[app_B.s204_iter]) * 2.0F;
      app_B.fv1[app_B.s204_iter] = 0.0F;
    }

    for (app_B.s204_iter = 0; app_B.s204_iter < 90; app_B.s204_iter++) {
      for (app_B.h_tmp = 0; app_B.h_tmp < 90; app_B.h_tmp++) {
        app_B.fv1[app_B.s204_iter] += app_B.Q[90 * app_B.s204_iter + app_B.h_tmp]
          * app_B.fv[app_B.h_tmp];
      }
    }

    for (app_B.s204_iter = 0; app_B.s204_iter < 30; app_B.s204_iter++) {
      app_B.Add_k[app_B.s204_iter] = 0.0F;
      for (app_B.h_tmp = 0; app_B.h_tmp < 90; app_B.h_tmp++) {
        app_B.Add_k[app_B.s204_iter] += app_B.K[90 * app_B.s204_iter +
          app_B.h_tmp] * app_B.fv1[app_B.h_tmp];
      }

      /* Gain: '<S190>/Gain1' */
      app_B.Gain1_m[app_B.s204_iter] = -app_B.Add_k[app_B.s204_iter];

      /* Product: '<S190>/Product' */
      app_B.Product_bw[app_B.s204_iter] = 0.0F;
    }

    /* Product: '<S190>/Product' incorporates:
     *  Gain: '<S190>/Gain1'
     *  Merge: '<S211>/Merge'
     */
    for (app_B.s204_iter = 0; app_B.s204_iter < 30; app_B.s204_iter++) {
      for (app_B.h_tmp = 0; app_B.h_tmp < 30; app_B.h_tmp++) {
        app_B.Product_bw[app_B.h_tmp] += app_B.BackwardSubstitution[30 *
          app_B.s204_iter + app_B.h_tmp] * app_B.Gain1_m[app_B.s204_iter];
      }
    }

    /* Sum: '<S190>/Add5' */
    app_B.Ts = ((((app_B.Product_bw[0] + app_B.Product_bw[1]) +
                  app_B.Product_bw[2]) + app_B.Product_bw[3]) +
                app_B.Product_bw[4]) + app_B.Product_bw[5];

    /* Saturate: '<S190>/Saturation' */
    if (app_B.Ts > 0.01F) {
      app_B.Ts = 0.01F;
    } else if (app_B.Ts < -0.01F) {
      app_B.Ts = -0.01F;
    }

    /* End of Saturate: '<S190>/Saturation' */

    /* Sum: '<S190>/Sum' incorporates:
     *  Delay: '<S190>/Delay'
     */
    app_DW.Delay_DSTATE_cc += app_B.Ts;

    /* Gain: '<S190>/radps2degps' */
    app_B.radps2degps = 57.2957802F * app_DW.Delay_DSTATE_cc;

    /* Update for Delay: '<S190>/Delay' */
    app_DW.icLoad_pb = false;
  }

  /* End of RelationalOperator: '<S185>/Compare' */
  /* End of Outputs for SubSystem: '<S187>/mpc_controller2' */

  /* Outputs for IfAction SubSystem: '<S113>/Path_Tracking1' incorporates:
   *  ActionPort: '<S188>/Action Port'
   */
  /* If: '<S113>/If' incorporates:
   *  Gain: '<S187>/Gain'
   *  Gain: '<S188>/Gain'
   *  Gain: '<S189>/Gain'
   *  Saturate: '<S113>/Saturation'
   */
  app_B.Gain2_a = 3.6F * app_B.StrgWhlAng_g * 0.277777791F;

  /* End of Outputs for SubSystem: '<S113>/Path_Tracking1' */

  /* Saturate: '<S189>/Saturation' incorporates:
   *  Gain: '<S189>/Gain'
   */
  if (app_B.Gain2_a > 100.0F) {
    app_B.Gain9 = 100.0F;
  } else {
    app_B.Gain9 = app_B.Gain2_a;
  }

  /* End of Saturate: '<S189>/Saturation' */

  /* Switch: '<S192>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Saturate: '<S189>/Saturation4' incorporates:
     *  Constant: '<S189>/Constant'
     *  Sum: '<S189>/Subtract1'
     */
    if (0.0F - app_B.Reshape3[0] > 0.3F) {
      app_B.Add_e = 0.3F;
    } else if (0.0F - app_B.Reshape3[0] < -0.3F) {
      app_B.Add_e = -0.3F;
    } else {
      app_B.Add_e = 0.0F - app_B.Reshape3[0];
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
     *  Constant: '<S201>/Constant'
     *  Delay: '<S189>/Delay'
     *  Product: '<S192>/Product1'
     *  RelationalOperator: '<S201>/Compare'
     *  Sum: '<S189>/Subtract'
     */
    if ((0.0F - app_B.Ts) * app_DW.Delay_DSTATE_oa > 0.0F) {
      app_B.s204_iter = 1;
    } else {
      app_B.s204_iter = 3;
    }

    /* End of Switch: '<S192>/S witch3' */

    /* Sum: '<S192>/Add' incorporates:
     *  Constant: '<S189>/desired_stable_offset'
     *  Constant: '<S192>/Constant'
     *  Delay: '<S189>/Delay'
     *  Gain: '<S189>/Gain3'
     *  Lookup_n-D: '<S189>/Ki_'
     *  Product: '<S192>/Product'
     *  Product: '<S192>/Product2'
     *  Sum: '<S189>/Subtract'
     */
    app_B.Ts = (real32_T)(look1_iflf_binlxpw(3.6F * app_B.Gain9,
      app_ConstP.pooled29, app_ConstP.pooled28, 7U) * (real32_T)app_B.s204_iter *
                          (0.0F - app_B.Add_e) * 0.02) + app_DW.Delay_DSTATE_oa;

    /* Switch: '<S192>/Switch1' incorporates:
     *  Abs: '<S189>/Abs'
     *  Constant: '<S189>/desired_stable_offset'
     *  Constant: '<S191>/Constant'
     *  Constant: '<S195>/Constant'
     *  Constant: '<S196>/Constant'
     *  Constant: '<S197>/Constant'
     *  Constant: '<S198>/Constant'
     *  Constant: '<S199>/Constant'
     *  Constant: '<S200>/Constant'
     *  Delay: '<S189>/Delay1'
     *  Logic: '<S192>/Logical Operator'
     *  Logic: '<S192>/Logical Operator1'
     *  Logic: '<S192>/Logical Operator2'
     *  Logic: '<S192>/Logical Operator3'
     *  Logic: '<S192>/Logical Operator4'
     *  Logic: '<S192>/Logical Operator5'
     *  Logic: '<S192>/Logical Operator6'
     *  RelationalOperator: '<S191>/Compare'
     *  RelationalOperator: '<S195>/Compare'
     *  RelationalOperator: '<S196>/Compare'
     *  RelationalOperator: '<S197>/Compare'
     *  RelationalOperator: '<S198>/Compare'
     *  RelationalOperator: '<S199>/Compare'
     *  RelationalOperator: '<S200>/Compare'
     *  Sum: '<S189>/Subtract'
     */
    if ((!((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg) > 1.0F)) && (((0.0F -
           app_B.Add_e >= 0.0F) && ((app_DW.Delay1_DSTATE_f < 5.0F) || (app_B.Ts
            < 0.0F))) || ((0.0F - app_B.Add_e <= 0.0F) &&
                          ((app_DW.Delay1_DSTATE_f > -5.0F) || (app_B.Ts > 0.0F)))))
    {
      /* Switch: '<S192>/Switch' */
      app_DW.Delay_DSTATE_oa = app_B.Ts;
    }

    /* End of Switch: '<S192>/Switch1' */
  } else {
    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S192>/Constant1'
     */
    app_DW.Delay_DSTATE_oa = 0.0F;
  }

  /* End of Switch: '<S192>/Switch' */

  /* Switch: '<S202>/Switch2' incorporates:
   *  Constant: '<S192>/Constant2'
   *  RelationalOperator: '<S202>/LowerRelop1'
   *  RelationalOperator: '<S202>/UpperRelop'
   *  Switch: '<S202>/Switch'
   */
  if (app_DW.Delay_DSTATE_oa > 0.5F) {
    /* Switch: '<S192>/Switch' */
    app_DW.Delay_DSTATE_oa = 0.5F;
  } else if (app_DW.Delay_DSTATE_oa < app_ConstB.UnaryMinus) {
    /* Switch: '<S192>/Switch' incorporates:
     *  Switch: '<S202>/Switch'
     */
    app_DW.Delay_DSTATE_oa = app_ConstB.UnaryMinus;
  }

  /* End of Switch: '<S202>/Switch2' */

  /* Switch: '<S193>/Switch' incorporates:
   *  Delay: '<S189>/Delay'
   *  Delay: '<S193>/Delay'
   */
  if (Arb_is_LatCtrlActv_bl) {
    app_DW.Delay_DSTATE_k = app_DW.Delay_DSTATE_oa;
  }

  /* End of Switch: '<S193>/Switch' */

  /* Chart: '<S193>/Chart' */
  app_Chart_f(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof_c, &app_DW.sf_Chart_d);

  /* Saturate: '<S193>/Saturation1' */
  if (app_B.ramp_cof_c > 1.0F) {
    app_B.Add_e = 1.0F;
  } else if (app_B.ramp_cof_c < 0.0F) {
    app_B.Add_e = 0.0F;
  } else {
    app_B.Add_e = app_B.ramp_cof_c;
  }

  /* End of Saturate: '<S193>/Saturation1' */

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
  app_B.Ts = (real32_T)atan(app_B.Ts) * app_B.Gain9;

  /* Delay: '<S194>/Delay' */
  if (app_DW.icLoad_i) {
    /* Sum: '<S194>/Sum' */
    app_DW.Delay_DSTATE_n = app_B.Ts;
  }

  /* Sum: '<S194>/Sum' incorporates:
   *  Delay: '<S194>/Delay'
   *  Product: '<S194>/Product'
   *  Product: '<S194>/Product1'
   */
  app_DW.Delay_DSTATE_n = app_DW.Delay_DSTATE_n * app_ConstB.alpha_os +
    app_ConstB.ualpha_jr * app_B.Ts;

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
  app_B.Ts = (((1.0F - app_B.Add_e) * app_DW.Delay_DSTATE_n +
               app_DW.Delay_DSTATE_k * app_B.Add_e) - app_DW.Delay_DSTATE_n) *
    look1_iflf_binlxpw(3.6F * app_B.Gain9, app_ConstP.pooled29,
                       app_ConstP.pooled24, 7U);

  /* Saturate: '<S189>/Saturation1' */
  if (app_B.Ts > 1.0F) {
    app_B.Ts = 1.0F;
  } else if (app_B.Ts < -1.0F) {
    app_B.Ts = -1.0F;
  }

  /* End of Saturate: '<S189>/Saturation1' */

  /* Sum: '<S187>/Add' incorporates:
   *  Delay: '<S189>/Delay1'
   *  Gain: '<S189>/Gain1'
   *  Product: '<S189>/Divide'
   *  Saturate: '<S189>/Saturation2'
   */
  app_DW.Delay1_DSTATE_f = app_B.Ts / app_B.Gain9 * 57.2957802F +
    app_B.radps2degps;

  /* If: '<S113>/If' incorporates:
   *  Delay: '<S189>/Delay1'
   *  Inport: '<S186>/In1'
   *  Saturate: '<S188>/Saturation'
   */
  if (app_B.DataTypeConversion == 1) {
    /* Outputs for IfAction SubSystem: '<S113>/MPC' incorporates:
     *  ActionPort: '<S186>/Action Port'
     */
    app_B.Gain2_a = app_DW.Delay1_DSTATE_f;

    /* End of Outputs for SubSystem: '<S113>/MPC' */
  } else {
    /* Outputs for IfAction SubSystem: '<S113>/Path_Tracking1' incorporates:
     *  ActionPort: '<S188>/Action Port'
     */
    if (app_B.Gain2_a > 100.0F) {
      /* Saturate: '<S188>/Saturation' */
      app_B.Gain2_a = 100.0F;
    }

    /* Lookup_n-D: '<S218>/1-D Lookup Table1' incorporates:
     *  Gain: '<S218>/Gain2'
     */
    app_B.uDLookupTable1_d = look1_iflf_binlxpw(3.6F * app_B.Gain2_a,
      app_ConstP.pooled31, app_ConstP.uDLookupTable1_tableData, 5U);

    /* Product: '<S218>/Product1' incorporates:
     *  Constant: '<S218>/Constant2'
     */
    app_B.Gain9 = 0.5F * app_B.Gain2_a;

    /* Gain: '<S218>/Gain4' */
    app_B.Ts = 0.0174532924F * VehCP_yr_VehDynYawRate_sg;

    /* Delay: '<S237>/Delay' */
    if (app_DW.icLoad_g5) {
      /* Sum: '<S237>/Sum' */
      app_DW.Delay_DSTATE_om = app_B.Ts;
    }

    /* Sum: '<S237>/Sum' incorporates:
     *  Delay: '<S237>/Delay'
     *  Product: '<S237>/Product'
     *  Product: '<S237>/Product1'
     */
    app_DW.Delay_DSTATE_om = app_DW.Delay_DSTATE_om * app_ConstB.alpha_gu +
      app_ConstB.ualpha_o * app_B.Ts;

    /* Product: '<S218>/Divide' incorporates:
     *  Saturate: '<S218>/Saturation2'
     */
    app_B.Ts = app_DW.Delay_DSTATE_om / app_B.Gain2_a;

    /* Product: '<S232>/Product1' incorporates:
     *  Inport: '<Root>/lateralPlan_pathCof_C2'
     *  Product: '<S233>/Product'
     */
    app_B.Subtract1 = arg_lateralPlan_pathCof_C2 * app_B.Gain9;

    /* Product: '<S232>/Product2' incorporates:
     *  Inport: '<Root>/lateralPlan_pathCof_C3'
     *  Product: '<S233>/Product1'
     */
    app_B.uDLookupTable2_m = arg_lateralPlan_pathCof_C3 * app_B.Gain9 *
      app_B.Gain9;

    /* Sum: '<S218>/Subtract' incorporates:
     *  Gain: '<S218>/Gain5'
     *  Inport: '<Root>/lateralPlan_pathCof_C0'
     *  Inport: '<Root>/lateralPlan_pathCof_C1'
     *  Product: '<S218>/Product'
     *  Product: '<S232>/Product'
     *  Product: '<S232>/Product1'
     *  Product: '<S232>/Product2'
     *  Sum: '<S232>/Add'
     */
    app_B.Add_e = app_B.Ts * app_B.Gain9 * app_B.Gain9 * 0.5F -
      (((arg_lateralPlan_pathCof_C1 * app_B.Gain9 + arg_lateralPlan_pathCof_C0)
        + app_B.Subtract1 * app_B.Gain9) + app_B.uDLookupTable2_m * app_B.Gain9);

    /* Switch: '<S235>/Switch2' incorporates:
     *  RelationalOperator: '<S235>/LowerRelop1'
     *  RelationalOperator: '<S235>/UpperRelop'
     *  Switch: '<S235>/Switch'
     *  UnaryMinus: '<S218>/Unary Minus'
     */
    if (app_B.Add_e > app_B.uDLookupTable1_d) {
      app_B.Add_e = app_B.uDLookupTable1_d;
    } else if (app_B.Add_e < -app_B.uDLookupTable1_d) {
      /* Switch: '<S235>/Switch' incorporates:
       *  UnaryMinus: '<S218>/Unary Minus'
       */
      app_B.Add_e = -app_B.uDLookupTable1_d;
    }

    /* End of Switch: '<S235>/Switch2' */

    /* Switch: '<S215>/Switch' */
    if (Arb_is_LatCtrlActv_bl) {
      /* Switch: '<S215>/Switch2' incorporates:
       *  Constant: '<S188>/desired_stable_offset'
       *  Saturate: '<S188>/Saturation3'
       *  Sum: '<S188>/Subtract'
       */
      if (app_ConstB.Compare_d) {
        /* Switch: '<S215>/Switch' incorporates:
         *  Constant: '<S215>/Constant3'
         */
        app_DW.Delay_DSTATE_e5 = 0.0F;
      } else {
        if (0.0F - app_B.Add_e > 0.4F) {
          /* Saturate: '<S188>/Saturation3' */
          app_B.uDLookupTable1_d = 0.4F;
        } else if (0.0F - app_B.Add_e < -0.4F) {
          /* Saturate: '<S188>/Saturation3' */
          app_B.uDLookupTable1_d = -0.4F;
        } else {
          /* Saturate: '<S188>/Saturation3' incorporates:
           *  Constant: '<S188>/desired_stable_offset'
           *  Sum: '<S188>/Subtract'
           */
          app_B.uDLookupTable1_d = 0.0F - app_B.Add_e;
        }

        /* Switch: '<S215>/Switch3' incorporates:
         *  Constant: '<S188>/desired_stable_offset'
         *  Constant: '<S215>/Constant4'
         *  Constant: '<S215>/Constant5'
         *  Constant: '<S229>/Constant'
         *  Delay: '<S188>/Delay'
         *  Product: '<S215>/Product1'
         *  RelationalOperator: '<S229>/Compare'
         *  Saturate: '<S188>/Saturation3'
         *  Sum: '<S188>/Subtract'
         */
        if (app_B.uDLookupTable1_d * app_DW.Delay_DSTATE_e5 > 0.0F) {
          app_B.s204_iter = 1;
        } else {
          app_B.s204_iter = 3;
        }

        /* End of Switch: '<S215>/Switch3' */

        /* Sum: '<S215>/Add' incorporates:
         *  Constant: '<S215>/Constant'
         *  Delay: '<S188>/Delay'
         *  Gain: '<S188>/Gain3'
         *  Lookup_n-D: '<S188>/1-D Lookup Table'
         *  Product: '<S215>/Product'
         *  Product: '<S215>/Product2'
         */
        app_B.Add_c = (real32_T)(look1_iflf_binlxpw(3.6F * app_B.Gain2_a,
          app_ConstP.pooled29, app_ConstP.pooled28, 7U) * (real32_T)
          app_B.s204_iter * app_B.uDLookupTable1_d * 0.02) +
          app_DW.Delay_DSTATE_e5;

        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S223>/Constant'
         *  Constant: '<S224>/Constant'
         *  Constant: '<S225>/Constant'
         *  Constant: '<S226>/Constant'
         *  Constant: '<S227>/Constant'
         *  Constant: '<S228>/Constant'
         *  Delay: '<S188>/Delay1'
         *  Logic: '<S215>/Logical Operator'
         *  Logic: '<S215>/Logical Operator1'
         *  Logic: '<S215>/Logical Operator2'
         *  Logic: '<S215>/Logical Operator3'
         *  Logic: '<S215>/Logical Operator4'
         *  Logic: '<S215>/Logical Operator5'
         *  RelationalOperator: '<S223>/Compare'
         *  RelationalOperator: '<S224>/Compare'
         *  RelationalOperator: '<S225>/Compare'
         *  RelationalOperator: '<S226>/Compare'
         *  RelationalOperator: '<S227>/Compare'
         *  RelationalOperator: '<S228>/Compare'
         */
        if (app_ConstB.LogicalOperator6_n && (((app_B.uDLookupTable1_d >= 0.0F) &&
              ((app_DW.Delay1_DSTATE_e < 5.0F) || (app_B.Add_c < 0.0F))) ||
             ((app_B.uDLookupTable1_d <= 0.0F) && ((app_DW.Delay1_DSTATE_e >
                -5.0F) || (app_B.Add_c > 0.0F))))) {
          /* Switch: '<S215>/Switch' */
          app_DW.Delay_DSTATE_e5 = app_B.Add_c;
        }

        /* End of Switch: '<S215>/Switch1' */
      }

      /* End of Switch: '<S215>/Switch2' */
    } else {
      /* Switch: '<S215>/Switch' incorporates:
       *  Constant: '<S215>/Constant1'
       */
      app_DW.Delay_DSTATE_e5 = 0.0F;
    }

    /* End of Switch: '<S215>/Switch' */

    /* Switch: '<S230>/Switch2' incorporates:
     *  Constant: '<S215>/Constant2'
     *  RelationalOperator: '<S230>/LowerRelop1'
     *  RelationalOperator: '<S230>/UpperRelop'
     *  Switch: '<S230>/Switch'
     */
    if (app_DW.Delay_DSTATE_e5 > 0.5F) {
      /* Switch: '<S215>/Switch' */
      app_DW.Delay_DSTATE_e5 = 0.5F;
    } else if (app_DW.Delay_DSTATE_e5 < app_ConstB.UnaryMinus_ck) {
      /* Switch: '<S215>/Switch' incorporates:
       *  Switch: '<S230>/Switch'
       */
      app_DW.Delay_DSTATE_e5 = app_ConstB.UnaryMinus_ck;
    }

    /* End of Switch: '<S230>/Switch2' */

    /* Switch: '<S216>/Switch' incorporates:
     *  Delay: '<S188>/Delay'
     *  Delay: '<S216>/Delay'
     */
    if (Arb_is_LatCtrlActv_bl) {
      app_DW.Delay_DSTATE_pa = app_DW.Delay_DSTATE_e5;
    }

    /* End of Switch: '<S216>/Switch' */

    /* Chart: '<S216>/Chart' */
    app_Chart_f(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof_md, &app_DW.sf_Chart_fs);

    /* Saturate: '<S216>/Saturation1' */
    if (app_B.ramp_cof_md > 1.0F) {
      app_B.Product2_ad = 1.0F;
    } else if (app_B.ramp_cof_md < 0.0F) {
      app_B.Product2_ad = 0.0F;
    } else {
      app_B.Product2_ad = app_B.ramp_cof_md;
    }

    /* End of Saturate: '<S216>/Saturation1' */

    /* Product: '<S216>/Product' incorporates:
     *  Delay: '<S216>/Delay'
     */
    app_B.uDLookupTable1_d = app_DW.Delay_DSTATE_pa * app_B.Product2_ad;

    /* Sum: '<S216>/Subtract' incorporates:
     *  Constant: '<S216>/Constant'
     */
    app_B.Add_c = 1.0F - app_B.Product2_ad;

    /* Lookup_n-D: '<S218>/1-D Lookup Table2' incorporates:
     *  Gain: '<S218>/Gain3'
     */
    app_B.uDLookupTable2_c = look1_iflf_binlxpw(3.6F * app_B.Gain2_a,
      app_ConstP.pooled31, app_ConstP.uDLookupTable2_tableData, 5U);

    /* Sum: '<S233>/Add' incorporates:
     *  Gain: '<S233>/Gain'
     *  Gain: '<S233>/Gain1'
     *  Inport: '<Root>/lateralPlan_pathCof_C1'
     */
    app_B.Product2_ad = (app_B.Subtract1 * 2.0F + arg_lateralPlan_pathCof_C1) +
      app_B.uDLookupTable2_m * 3.0F;

    /* Sum: '<S218>/Subtract1' incorporates:
     *  Constant: '<S218>/Constant1'
     *  Gain: '<S218>/Gain6'
     *  Gain: '<S234>/Gain'
     *  Gain: '<S234>/Gain1'
     *  Product: '<S234>/Product'
     *  Product: '<S234>/Product1'
     *  Sum: '<S234>/Add'
     */
    app_B.Subtract1 = (0.5F * app_B.Ts * app_B.Gain9 * 2.0F + 0.0F * app_B.Gain9
                       * app_B.Gain9 * 3.0F) - app_B.Product2_ad;

    /* Switch: '<S236>/Switch2' incorporates:
     *  RelationalOperator: '<S236>/LowerRelop1'
     *  RelationalOperator: '<S236>/UpperRelop'
     *  Switch: '<S236>/Switch'
     *  UnaryMinus: '<S218>/Unary Minus1'
     */
    if (app_B.Subtract1 > app_B.uDLookupTable2_c) {
      app_B.Subtract1 = app_B.uDLookupTable2_c;
    } else if (app_B.Subtract1 < -app_B.uDLookupTable2_c) {
      /* Switch: '<S236>/Switch' incorporates:
       *  UnaryMinus: '<S218>/Unary Minus1'
       */
      app_B.Subtract1 = -app_B.uDLookupTable2_c;
    }

    /* End of Switch: '<S236>/Switch2' */

    /* Product: '<S188>/Product' incorporates:
     *  Trigonometry: '<S188>/Sin'
     */
    app_B.Ts = (real32_T)atan(app_B.Subtract1) * app_B.Gain2_a;

    /* Delay: '<S221>/Delay' */
    if (app_DW.icLoad_gh) {
      /* Sum: '<S221>/Sum' */
      app_DW.Delay_DSTATE_l5 = app_B.Ts;
    }

    /* Sum: '<S221>/Sum' incorporates:
     *  Delay: '<S221>/Delay'
     *  Product: '<S221>/Product'
     *  Product: '<S221>/Product1'
     */
    app_DW.Delay_DSTATE_l5 = app_DW.Delay_DSTATE_l5 * app_ConstB.alpha_pw +
      app_ConstB.ualpha_c * app_B.Ts;

    /* Gain: '<S219>/Gain1' */
    app_B.Ts = 3.6F * app_B.Gain2_a;

    /* Lookup_n-D: '<S219>/1-D Lookup Table2' incorporates:
     *  Lookup_n-D: '<S219>/1-D Lookup Table1'
     */
    app_B.uDLookupTable2_m = look1_iflf_binlxpw(app_B.Ts, app_ConstP.pooled29,
      app_ConstP.uDLookupTable2_tableData_n, 7U);

    /* Concatenate: '<S219>/Matrix Concatenate1' incorporates:
     *  Constant: '<S219>/Constant1'
     *  Constant: '<S219>/Constant3'
     *  Lookup_n-D: '<S219>/1-D Lookup Table'
     *  Lookup_n-D: '<S219>/1-D Lookup Table1'
     *  Reshape: '<S219>/Reshape4'
     *  Reshape: '<S219>/Reshape5'
     */
    app_B.MatrixConcatenate1[0] = look1_iflf_binlxpw(app_B.Ts,
      app_ConstP.pooled29, app_ConstP.uDLookupTable_tableData, 7U);
    app_B.MatrixConcatenate1[2] = 0.0F;
    app_B.MatrixConcatenate1[1] = 0.0F;
    app_B.MatrixConcatenate1[3] = look1_iflf_binlxpw(app_B.Ts,
      app_ConstP.pooled29, app_ConstP.uDLookupTable1_tableData_o, 7U);

    /* Concatenate: '<S219>/Matrix Concatenate' incorporates:
     *  Constant: '<S188>/Constant'
     *  Constant: '<S219>/Constant2'
     *  Product: '<S219>/Product1'
     *  Reshape: '<S219>/Reshape'
     *  Reshape: '<S219>/Reshape1'
     *  Trigonometry: '<S219>/Cos'
     */
    app_B.MatrixConcatenate[0] = 1.0F;
    app_B.MatrixConcatenate[2] = app_B.Gain2_a * (real32_T)cos(app_B.Product2_ad)
      * 0.02F;
    app_B.MatrixConcatenate[1] = app_ConstB.Reshape1[0];
    app_B.MatrixConcatenate[3] = app_ConstB.Reshape1[1];

    /* Outputs for Iterator SubSystem: '<S238>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S241>/For Iterator'
     */
    app_B.s241_iter = 1;
    while (app_B.s241_iter <= 20) {
      /* Product: '<S241>/Product2' incorporates:
       *  Concatenate: '<S219>/Matrix Concatenate'
       *  DataStoreRead: '<S241>/Data Store Read'
       *  Math: '<S241>/Math Function2'
       *  Product: '<S241>/Product'
       *  Product: '<S241>/Product1'
       */
      app_B.Ts = 0.0F;
      for (app_B.s204_iter = 0; app_B.s204_iter < 2; app_B.s204_iter++) {
        /* Math: '<S241>/Math Function' incorporates:
         *  Concatenate: '<S219>/Matrix Concatenate'
         *  Math: '<S241>/Math Function1'
         */
        app_B.loop_ub_tmp = app_B.s204_iter << 1;
        app_B.Add1_tmp[app_B.loop_ub_tmp] =
          app_B.MatrixConcatenate[app_B.s204_iter];

        /* Product: '<S241>/Product' incorporates:
         *  Product: '<S241>/Product3'
         */
        app_B.Add1_tmp_c[app_B.s204_iter] = 0.0F;
        app_B.Add1_tmp_c[app_B.s204_iter] += app_DW.P[app_B.s204_iter];

        /* Product: '<S241>/Product' incorporates:
         *  DataStoreRead: '<S241>/Data Store Read'
         */
        app_B.Product2_ad = app_DW.P[app_B.s204_iter + 2];
        app_B.Add1_tmp_c[app_B.s204_iter] += app_B.Product2_ad *
          app_B.MatrixConcatenate[1];

        /* Product: '<S241>/Product1' incorporates:
         *  Concatenate: '<S219>/Matrix Concatenate'
         *  DataStoreRead: '<S241>/Data Store Read'
         *  Product: '<S241>/Product'
         *  Reshape: '<S219>/Reshape2'
         */
        app_B.Product2_ad = app_B.Product2_ad * app_ConstB.Reshape2[1] +
          app_DW.P[app_B.s204_iter] * app_ConstB.Reshape2[0];

        /* Math: '<S241>/Math Function' incorporates:
         *  Concatenate: '<S219>/Matrix Concatenate'
         *  Math: '<S241>/Math Function1'
         */
        app_B.Add1_tmp[app_B.loop_ub_tmp + 1] =
          app_B.MatrixConcatenate[app_B.s204_iter + 2];

        /* Product: '<S241>/Product' incorporates:
         *  Product: '<S241>/Product3'
         */
        app_B.Add1_tmp_c[app_B.s204_iter + 2] = 0.0F;
        app_B.Add1_tmp_c[app_B.s204_iter + 2] += app_DW.P[app_B.s204_iter] *
          app_B.MatrixConcatenate[2];
        app_B.Add1_tmp_c[app_B.s204_iter + 2] += app_DW.P[app_B.s204_iter + 2] *
          app_B.MatrixConcatenate[3];
        app_B.Ts += app_ConstB.MathFunction2[app_B.s204_iter] *
          app_B.Product2_ad;
        app_B.tmp_data[app_B.s204_iter] = app_B.Product2_ad;
      }

      /* Sum: '<S241>/Add' incorporates:
       *  Product: '<S241>/Product2'
       */
      app_B.Product2_ad = app_B.uDLookupTable2_m + app_B.Ts;
      for (app_B.s204_iter = 0; app_B.s204_iter < 2; app_B.s204_iter++) {
        /* Product: '<S241>/Product3' */
        app_B.h_tmp = app_B.s204_iter << 1;

        /* Math: '<S241>/Math Function' incorporates:
         *  Math: '<S241>/Math Function1'
         */
        app_B.Ts = app_B.Add1_tmp[app_B.s204_iter + 2];

        /* Sum: '<S241>/Add1' incorporates:
         *  Concatenate: '<S219>/Matrix Concatenate1'
         *  Math: '<S241>/Math Function'
         *  Product: '<S241>/Product'
         */
        app_B.rtb_MatrixConcatenate1_b[app_B.s204_iter] = (app_B.Ts *
          app_B.Add1_tmp_c[1] + app_B.Add1_tmp[app_B.s204_iter] *
          app_B.Add1_tmp_c[0]) + app_B.MatrixConcatenate1[app_B.s204_iter];
        app_B.rtb_MatrixConcatenate1_b[app_B.s204_iter + 2] = (app_B.Ts *
          app_B.Add1_tmp_c[3] + app_B.Add1_tmp[app_B.s204_iter] *
          app_B.Add1_tmp_c[2]) + app_B.MatrixConcatenate1[app_B.s204_iter + 2];

        /* Product: '<S241>/Divide' incorporates:
         *  Math: '<S241>/Math Function1'
         *  Product: '<S241>/Product1'
         */
        app_B.Add1_tmp_f[app_B.s204_iter] = (app_B.Ts * app_B.tmp_data[1] +
          app_B.Add1_tmp[app_B.s204_iter] * app_B.tmp_data[0]) /
          app_B.Product2_ad;
        app_B.fv2[app_B.s204_iter] = app_B.Add1_tmp_c[app_B.h_tmp + 1] *
          app_ConstB.MathFunction3[1] + app_B.Add1_tmp_c[app_B.h_tmp] *
          app_ConstB.MathFunction3[0];
      }

      /* Sum: '<S241>/Add1' incorporates:
       *  Math: '<S241>/Math Function3'
       *  Product: '<S241>/Product3'
       */
      app_B.Add1[0] = app_B.rtb_MatrixConcatenate1_b[0] - app_B.Add1_tmp_f[0] *
        app_B.fv2[0];

      /* DataStoreWrite: '<S241>/Data Store Write' incorporates:
       *  Sum: '<S241>/Add1'
       */
      app_DW.P[0] = app_B.Add1[0];

      /* Sum: '<S241>/Add1' incorporates:
       *  Product: '<S241>/Product3'
       */
      app_B.Add1[1] = app_B.rtb_MatrixConcatenate1_b[1] - app_B.fv2[0] *
        app_B.Add1_tmp_f[1];

      /* DataStoreWrite: '<S241>/Data Store Write' incorporates:
       *  Sum: '<S241>/Add1'
       */
      app_DW.P[1] = app_B.Add1[1];

      /* Sum: '<S241>/Add1' incorporates:
       *  Product: '<S241>/Product3'
       */
      app_B.Add1[2] = app_B.rtb_MatrixConcatenate1_b[2] - app_B.Add1_tmp_f[0] *
        app_B.fv2[1];

      /* DataStoreWrite: '<S241>/Data Store Write' incorporates:
       *  Sum: '<S241>/Add1'
       */
      app_DW.P[2] = app_B.Add1[2];

      /* Sum: '<S241>/Add1' incorporates:
       *  Product: '<S241>/Product3'
       */
      app_B.Add1[3] = app_B.rtb_MatrixConcatenate1_b[3] - app_B.Add1_tmp_f[1] *
        app_B.fv2[1];

      /* DataStoreWrite: '<S241>/Data Store Write' incorporates:
       *  Sum: '<S241>/Add1'
       */
      app_DW.P[3] = app_B.Add1[3];
      app_B.s241_iter++;
    }

    /* End of Outputs for SubSystem: '<S238>/For Iterator Subsystem' */

    /* Sum: '<S238>/Add' incorporates:
     *  Math: '<S238>/Math Function'
     *  Product: '<S238>/Product'
     *  Reshape: '<S219>/Reshape2'
     *  Sum: '<S241>/Add1'
     */
    app_B.Product2_ad = ((app_B.Add1[0] * app_ConstB.Reshape2[0] +
                          app_ConstB.Reshape2[1] * app_B.Add1[2]) *
                         app_ConstB.MathFunction[0] + (app_ConstB.Reshape2[0] *
      app_B.Add1[1] + app_ConstB.Reshape2[1] * app_B.Add1[3]) *
                         app_ConstB.MathFunction[1]) + app_B.uDLookupTable2_m;

    /* Delay: '<S240>/Delay' */
    app_DW.icLoad_g5p = ((Arb_is_LatCtrlActv_bl &&
                          (app_PrevZCX.Delay_Reset_ZCE_o != 1)) ||
                         app_DW.icLoad_g5p);
    app_PrevZCX.Delay_Reset_ZCE_o = Arb_is_LatCtrlActv_bl;
    if (app_DW.icLoad_g5p) {
      /* Sum: '<S240>/Sum' */
      app_DW.Delay_DSTATE_lq = app_B.Add_e;
    }

    /* Sum: '<S240>/Sum' incorporates:
     *  Delay: '<S240>/Delay'
     *  Product: '<S240>/Product'
     *  Product: '<S240>/Product1'
     */
    app_DW.Delay_DSTATE_lq = app_DW.Delay_DSTATE_lq * app_ConstB.alpha_i +
      app_ConstB.ualpha_ip * app_B.Add_e;

    /* Delay: '<S239>/Delay' incorporates:
     *  Delay: '<S240>/Delay'
     */
    app_DW.icLoad_fgq = ((Arb_is_LatCtrlActv_bl &&
                          (app_PrevZCX.Delay_Reset_ZCE_h != 1)) ||
                         app_DW.icLoad_fgq);
    app_PrevZCX.Delay_Reset_ZCE_h = Arb_is_LatCtrlActv_bl;
    if (app_DW.icLoad_fgq) {
      /* Sum: '<S239>/Sum' */
      app_DW.Delay_DSTATE_b = app_B.Subtract1;
    }

    /* Sum: '<S239>/Sum' incorporates:
     *  Delay: '<S239>/Delay'
     *  Product: '<S239>/Product'
     *  Product: '<S239>/Product1'
     */
    app_DW.Delay_DSTATE_b = app_DW.Delay_DSTATE_b * app_ConstB.alpha_gg +
      app_ConstB.ualpha_f * app_B.Subtract1;

    /* Product: '<S238>/Product1' incorporates:
     *  Concatenate: '<S219>/Matrix Concatenate'
     *  Sum: '<S241>/Add1'
     */
    for (app_B.s204_iter = 0; app_B.s204_iter < 2; app_B.s204_iter++) {
      app_B.h_tmp = app_B.s204_iter << 1;
      app_B.MatrixConcatenate1[app_B.h_tmp] = 0.0F;
      app_B.Ts = app_B.MatrixConcatenate[app_B.h_tmp];
      app_B.MatrixConcatenate1[app_B.h_tmp] += app_B.Ts * app_B.Add1[0];
      app_B.Add_e = app_B.MatrixConcatenate[app_B.h_tmp + 1];
      app_B.MatrixConcatenate1[app_B.h_tmp] += app_B.Add_e * app_B.Add1[2];
      app_B.MatrixConcatenate1[app_B.h_tmp + 1] = 0.0F;
      app_B.MatrixConcatenate1[app_B.h_tmp + 1] += app_B.Ts * app_B.Add1[1];
      app_B.MatrixConcatenate1[app_B.h_tmp + 1] += app_B.Add_e * app_B.Add1[3];
    }

    /* Product: '<S188>/Product1' incorporates:
     *  Gain: '<S188>/Gain5'
     *  Lookup_n-D: '<S188>/1-D Lookup Table1'
     *  Product: '<S216>/Product1'
     *  Sum: '<S216>/Add'
     *  Sum: '<S216>/Sum'
     */
    app_B.Ts = ((app_B.Add_c * app_DW.Delay_DSTATE_l5 + app_B.uDLookupTable1_d)
                - app_DW.Delay_DSTATE_l5) * look1_iflf_binlxpw(3.6F *
      app_B.Gain2_a, app_ConstP.pooled29, app_ConstP.pooled24, 7U);

    /* Saturate: '<S188>/Saturation1' */
    if (app_B.Ts > 1.0F) {
      app_B.Ts = 1.0F;
    } else if (app_B.Ts < -1.0F) {
      app_B.Ts = -1.0F;
    }

    /* End of Saturate: '<S188>/Saturation1' */

    /* Gain: '<S217>/Gain' incorporates:
     *  Delay: '<S188>/Delay1'
     *  Gain: '<S218>/Gain1'
     *  Gain: '<S218>/Gain8'
     *  Gain: '<S219>/Gain7'
     *  Inport: '<Root>/lateralPlan_pathCof_C2'
     *  Inport: '<Root>/lateralPlan_pathCof_C3'
     *  Math: '<S238>/Math Function1'
     *  Product: '<S188>/Divide'
     *  Product: '<S218>/Product3'
     *  Product: '<S219>/Product2'
     *  Product: '<S220>/Product'
     *  Product: '<S238>/Divide'
     *  Product: '<S238>/Product1'
     *  Reshape: '<S219>/Reshape3'
     *  Saturate: '<S188>/Saturation2'
     *  Sum: '<S217>/Add5'
     *  Sum: '<S218>/Add4'
     */
    app_DW.Delay1_DSTATE_e = (((-((app_ConstB.MathFunction1[0] *
      app_B.MatrixConcatenate1[0] + app_ConstB.MathFunction1[1] *
      app_B.MatrixConcatenate1[1]) / app_B.Product2_ad) * app_DW.Delay_DSTATE_lq
      + -((app_ConstB.MathFunction1[0] * app_B.MatrixConcatenate1[2] +
           app_ConstB.MathFunction1[1] * app_B.MatrixConcatenate1[3]) /
          app_B.Product2_ad) * app_DW.Delay_DSTATE_b) + app_B.Ts / app_B.Gain2_a)
      + (6.0F * arg_lateralPlan_pathCof_C3 * app_B.Gain9 + 2.0F *
         arg_lateralPlan_pathCof_C2) * app_B.Gain2_a) * 57.2957802F;

    /* SignalConversion generated from: '<S188>/desired_Yawrate_degps_AftLimit' incorporates:
     *  Delay: '<S188>/Delay1'
     */
    app_B.Gain2_a = app_DW.Delay1_DSTATE_e;

    /* Update for Delay: '<S237>/Delay' */
    app_DW.icLoad_g5 = false;

    /* Update for Delay: '<S221>/Delay' */
    app_DW.icLoad_gh = false;

    /* Update for Delay: '<S240>/Delay' */
    app_DW.icLoad_g5p = false;

    /* Update for Delay: '<S239>/Delay' */
    app_DW.icLoad_fgq = false;

    /* End of Outputs for SubSystem: '<S113>/Path_Tracking1' */
  }

  /* Switch: '<S282>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S40>/Switch' incorporates:
     *  Inport: '<Root>/lateralPlan_ctrlType'
     */
    if (arg_lateralPlan_ctrlType) {
      /* Delay: '<S282>/Delay' incorporates:
       *  Gain: '<S40>/Gain'
       *  Gain: '<S40>/Gain1'
       *  Inport: '<Root>/lateralPlan_rawCurvature'
       *  Product: '<S40>/Product'
       */
      app_DW.Delay_DSTATE_a = 0.277777791F * VehCP_V_VehSpdAvgDrvn_sg *
        arg_lateralPlan_rawCurvature * 57.2957802F;
    } else {
      /* Delay: '<S282>/Delay' */
      app_DW.Delay_DSTATE_a = app_B.Gain2_a;
    }

    /* End of Switch: '<S40>/Switch' */
  }

  /* End of Switch: '<S282>/Switch' */

  /* Chart: '<S282>/Chart' */
  app_Chart_f(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof_i, &app_DW.sf_Chart_o);

  /* Saturate: '<S282>/Saturation1' */
  if (app_B.ramp_cof_i > 1.0F) {
    app_B.Add_e = 1.0F;
  } else if (app_B.ramp_cof_i < 0.0F) {
    app_B.Add_e = 0.0F;
  } else {
    app_B.Add_e = app_B.ramp_cof_i;
  }

  /* End of Saturate: '<S282>/Saturation1' */

  /* Switch: '<S282>/Switch1' incorporates:
   *  Constant: '<S282>/Constant1'
   */
  if (Arb_is_LatCtrlActv_bl) {
    app_B.Gain2_a = 0.0F;
  } else {
    app_B.Gain2_a = VehCP_yr_VehDynYawRate_sg;
  }

  /* End of Switch: '<S282>/Switch1' */

  /* Saturate: '<S283>/Saturation' */
  if (app_B.StrgWhlAngGrd_g > 100.0F) {
    app_B.Ts = 100.0F;
  } else if (app_B.StrgWhlAngGrd_g < 0.1F) {
    app_B.Ts = 0.1F;
  } else {
    app_B.Ts = app_B.StrgWhlAngGrd_g;
  }

  /* End of Saturate: '<S283>/Saturation' */

  /* Product: '<S283>/Divide' incorporates:
   *  Constant: '<S282>/Constant'
   *  Delay: '<S282>/Delay'
   *  Gain: '<S283>/degps2radps'
   *  Product: '<S282>/Product'
   *  Product: '<S282>/Product1'
   *  Sum: '<S282>/Add'
   *  Sum: '<S282>/Subtract'
   *  Sum: '<S282>/Sum'
   */
  app_B.Gain2_a = (((1.0F - app_B.Add_e) * VehCP_yr_VehDynYawRate_sg +
                    app_DW.Delay_DSTATE_a * app_B.Add_e) - app_B.Gain2_a) *
    0.0174532924F / app_B.Ts;

  /* Switch: '<S287>/Switch2' incorporates:
   *  RelationalOperator: '<S287>/LowerRelop1'
   *  RelationalOperator: '<S287>/UpperRelop'
   *  Switch: '<S287>/Switch'
   *  UnaryMinus: '<S283>/Unary Minus1'
   */
  if (app_B.Gain2_a > app_B.uDLookupTable) {
    app_B.Gain2_a = app_B.uDLookupTable;
  } else if (app_B.Gain2_a < -app_B.uDLookupTable) {
    /* Switch: '<S287>/Switch' incorporates:
     *  UnaryMinus: '<S283>/Unary Minus1'
     */
    app_B.Gain2_a = -app_B.uDLookupTable;
  }

  /* End of Switch: '<S287>/Switch2' */

  /* Product: '<S284>/Product' incorporates:
   *  Product: '<S283>/Product'
   */
  app_B.uDLookupTable = app_B.Gain2_a * app_B.StrgWhlAngGrd_g *
    app_B.StrgWhlAngGrd_g;

  /* Delay: '<S288>/Delay' */
  app_DW.icLoad_gn = ((Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_e
    != 1)) || app_DW.icLoad_gn);
  app_PrevZCX.Delay_Reset_ZCE_e = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_gn) {
    app_DW.Delay_DSTATE_l0 = app_B.uDLookupTable;
  }

  /* Switch: '<S288>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Sum: '<S288>/Add1' incorporates:
     *  Delay: '<S288>/Delay'
     */
    app_B.Gain2_a = app_ConstB.Product_o + app_DW.Delay_DSTATE_l0;

    /* Switch: '<S289>/Switch2' incorporates:
     *  RelationalOperator: '<S289>/LowerRelop1'
     */
    if (app_B.uDLookupTable > app_B.Gain2_a) {
      app_B.uDLookupTable = app_B.Gain2_a;
    } else {
      /* Sum: '<S288>/Add2' incorporates:
       *  Delay: '<S288>/Delay'
       */
      app_B.Gain2_a = app_DW.Delay_DSTATE_l0 + app_ConstB.Product1_l;

      /* Switch: '<S289>/Switch' incorporates:
       *  RelationalOperator: '<S289>/UpperRelop'
       */
      if (app_B.uDLookupTable < app_B.Gain2_a) {
        app_B.uDLookupTable = app_B.Gain2_a;
      }

      /* End of Switch: '<S289>/Switch' */
    }

    /* End of Switch: '<S289>/Switch2' */
  }

  /* End of Switch: '<S288>/Switch' */

  /* Saturate: '<S284>/Saturation' */
  if (app_B.StrgWhlAngGrd_g > 100.0F) {
    /* Saturate: '<S285>/Saturation' */
    app_B.Gain2_a = 100.0F;
  } else if (app_B.StrgWhlAngGrd_g < 0.5F) {
    /* Saturate: '<S285>/Saturation' */
    app_B.Gain2_a = 0.5F;
  } else {
    /* Saturate: '<S285>/Saturation' */
    app_B.Gain2_a = app_B.StrgWhlAngGrd_g;
  }

  /* Product: '<S285>/Product' incorporates:
   *  Product: '<S284>/Divide'
   *  Saturate: '<S284>/Saturation'
   */
  app_B.Ts = app_B.uDLookupTable / app_B.Gain2_a * app_B.StrgWhlAngGrd_g;

  /* Switch: '<S290>/Switch2' incorporates:
   *  Constant: '<S285>/Constant'
   *  RelationalOperator: '<S290>/LowerRelop1'
   *  RelationalOperator: '<S290>/UpperRelop'
   *  Switch: '<S290>/Switch'
   */
  if (app_B.Ts > 2.5F) {
    app_B.Ts = 2.5F;
  } else if (app_B.Ts < app_ConstB.UnaryMinus_i) {
    /* Switch: '<S290>/Switch' */
    app_B.Ts = app_ConstB.UnaryMinus_i;
  }

  /* End of Switch: '<S290>/Switch2' */

  /* Gain: '<S281>/radps2degps' incorporates:
   *  Product: '<S285>/Divide'
   */
  app_B.Gain2_a = app_B.Ts / app_B.Gain2_a * 57.2957802F;

  /* Delay: '<S286>/Delay' incorporates:
   *  Delay: '<S288>/Delay'
   */
  app_DW.icLoad_j = ((((app_PrevZCX.Delay_Reset_ZCE_b == 1) != (int32_T)
                       Arb_is_LatCtrlActv_bl) && (app_PrevZCX.Delay_Reset_ZCE_b
    != 3)) || app_DW.icLoad_j);
  app_PrevZCX.Delay_Reset_ZCE_b = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_j) {
    /* Sum: '<S286>/Sum' */
    app_DW.Delay_DSTATE_nx = app_B.Gain2_a;
  }

  /* Sum: '<S286>/Sum' incorporates:
   *  Delay: '<S286>/Delay'
   *  Product: '<S286>/Product'
   *  Product: '<S286>/Product1'
   */
  app_DW.Delay_DSTATE_nx = app_DW.Delay_DSTATE_nx * app_ConstB.alpha_jw +
    app_ConstB.ualpha_ig * app_B.Gain2_a;

  /* Switch: '<S292>/Switch' incorporates:
   *  Delay: '<S292>/Delay'
   */
  if (Arb_is_LatCtrlActv_bl) {
    app_DW.Delay_DSTATE_c = app_DW.Delay_DSTATE_nx;
  }

  /* End of Switch: '<S292>/Switch' */

  /* Chart: '<S292>/Chart' */
  app_Chart_f(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof, &app_DW.sf_Chart_b5);

  /* Saturate: '<S292>/Saturation1' */
  if (app_B.ramp_cof > 1.0F) {
    app_B.Add_e = 1.0F;
  } else if (app_B.ramp_cof < 0.0F) {
    app_B.Add_e = 0.0F;
  } else {
    app_B.Add_e = app_B.ramp_cof;
  }

  /* End of Saturate: '<S292>/Saturation1' */

  /* Delay: '<S296>/Delay' */
  if (app_DW.icLoad_mg) {
    /* Sum: '<S296>/Sum' */
    app_DW.Delay_DSTATE_ky = APP_IN_yr_VehDynYawRate_sg;
  }

  /* Sum: '<S296>/Sum' incorporates:
   *  Delay: '<S296>/Delay'
   *  Product: '<S296>/Product'
   *  Product: '<S296>/Product1'
   */
  app_DW.Delay_DSTATE_ky = app_DW.Delay_DSTATE_ky * app_ConstB.alpha_ge +
    app_ConstB.ualpha_nu * APP_IN_yr_VehDynYawRate_sg;

  /* Sum: '<S292>/Sum' incorporates:
   *  Constant: '<S292>/Constant'
   *  Delay: '<S292>/Delay'
   *  Product: '<S292>/Product'
   *  Product: '<S292>/Product1'
   *  Sum: '<S292>/Add'
   *  Sum: '<S292>/Subtract'
   */
  app_B.Gain2_a = ((1.0F - app_B.Add_e) * app_DW.Delay_DSTATE_ky +
                   app_DW.Delay_DSTATE_c * app_B.Add_e) - app_DW.Delay_DSTATE_ky;

  /* Switch: '<S300>/Switch2' incorporates:
   *  Constant: '<S292>/Constant1'
   *  RelationalOperator: '<S300>/LowerRelop1'
   *  RelationalOperator: '<S300>/UpperRelop'
   *  Switch: '<S300>/Switch'
   */
  if (app_B.Gain2_a > 2.0F) {
    app_B.Gain2_a = 2.0F;
  } else if (app_B.Gain2_a < app_ConstB.UnaryMinus_f) {
    /* Switch: '<S300>/Switch' */
    app_B.Gain2_a = app_ConstB.UnaryMinus_f;
  }

  /* End of Switch: '<S300>/Switch2' */

  /* Product: '<S302>/Product2' incorporates:
   *  Lookup_n-D: '<S292>/KP_loTable'
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Ts = app_B.Gain2_a * look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
    app_ConstP.pooled39, app_ConstP.KP_loTable_tableData, 14U);

  /* Switch: '<S299>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S299>/Switch2' incorporates:
     *  Constant: '<S308>/Constant'
     *  Delay: '<S292>/Delay1'
     *  Product: '<S299>/Product1'
     *  RelationalOperator: '<S308>/Compare'
     *  Switch: '<S299>/Switch3'
     */
    if (app_ConstB.Compare) {
      /* Switch: '<S299>/Switch' incorporates:
       *  Constant: '<S299>/Constant3'
       */
      app_DW.Delay1_DSTATE_j = 0.0F;
    } else {
      if (app_B.Gain2_a * app_DW.Delay1_DSTATE_j > 0.0F) {
        /* Switch: '<S299>/Switch3' incorporates:
         *  Lookup_n-D: '<S292>/KI_loTable'
         *  Saturate: '<S4>/Saturation'
         */
        app_B.Gain9 = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
          app_ConstP.pooled39, app_ConstP.KI_loTable_tableData, 14U);
      } else {
        /* Switch: '<S299>/Switch3' incorporates:
         *  Gain: '<S299>/Gain'
         *  Lookup_n-D: '<S292>/KI_loTable'
         *  Saturate: '<S4>/Saturation'
         */
        app_B.Gain9 = 3.0F * look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
          app_ConstP.pooled39, app_ConstP.KI_loTable_tableData, 14U);
      }

      /* Sum: '<S299>/Add' incorporates:
       *  Constant: '<S299>/Constant'
       *  Delay: '<S292>/Delay1'
       *  Product: '<S299>/Product'
       */
      app_B.Gain9 = (real32_T)(app_B.Gain2_a * app_B.Gain9 * 0.02) +
        app_DW.Delay1_DSTATE_j;

      /* Switch: '<S299>/Switch1' incorporates:
       *  Constant: '<S292>/MaxAllowed_FBW_Item1'
       *  Constant: '<S304>/Constant'
       *  Constant: '<S305>/Constant'
       *  Constant: '<S306>/Constant'
       *  Constant: '<S307>/Constant'
       *  Delay: '<S292>/Delay2'
       *  Logic: '<S299>/Logical Operator'
       *  Logic: '<S299>/Logical Operator1'
       *  Logic: '<S299>/Logical Operator2'
       *  Logic: '<S299>/Logical Operator3'
       *  Logic: '<S299>/Logical Operator4'
       *  Logic: '<S299>/Logical Operator5'
       *  RelationalOperator: '<S299>/Relational Operator'
       *  RelationalOperator: '<S299>/Relational Operator1'
       *  RelationalOperator: '<S304>/Compare'
       *  RelationalOperator: '<S305>/Compare'
       *  RelationalOperator: '<S306>/Compare'
       *  RelationalOperator: '<S307>/Compare'
       */
      if (app_ConstB.LogicalOperator6 && (((app_B.Gain2_a >= 0.0F) &&
            ((app_DW.Delay2_DSTATE_m < 0.25F) || (app_B.Gain9 < 0.0F))) ||
           ((app_B.Gain2_a <= 0.0F) && ((app_DW.Delay2_DSTATE_m >
              app_ConstB.UnaryMinus1) || (app_B.Gain9 > 0.0F))))) {
        /* Switch: '<S299>/Switch' */
        app_DW.Delay1_DSTATE_j = app_B.Gain9;
      }

      /* End of Switch: '<S299>/Switch1' */
    }

    /* End of Switch: '<S299>/Switch2' */
  } else {
    /* Switch: '<S299>/Switch' incorporates:
     *  Constant: '<S299>/Constant1'
     */
    app_DW.Delay1_DSTATE_j = 0.0F;
  }

  /* End of Switch: '<S299>/Switch' */

  /* Switch: '<S309>/Switch2' incorporates:
   *  Constant: '<S299>/Constant2'
   *  RelationalOperator: '<S309>/LowerRelop1'
   *  RelationalOperator: '<S309>/UpperRelop'
   *  Switch: '<S309>/Switch'
   */
  if (app_DW.Delay1_DSTATE_j > 0.2F) {
    /* Switch: '<S299>/Switch' */
    app_DW.Delay1_DSTATE_j = 0.2F;
  } else if (app_DW.Delay1_DSTATE_j < app_ConstB.UnaryMinus_kn) {
    /* Switch: '<S299>/Switch' incorporates:
     *  Switch: '<S309>/Switch'
     */
    app_DW.Delay1_DSTATE_j = app_ConstB.UnaryMinus_kn;
  }

  /* End of Switch: '<S309>/Switch2' */

  /* Switch: '<S310>/Switch2' incorporates:
   *  Constant: '<S302>/Constant1'
   *  RelationalOperator: '<S310>/LowerRelop1'
   *  RelationalOperator: '<S310>/UpperRelop'
   *  Switch: '<S310>/Switch'
   */
  if (app_B.Ts > 0.2F) {
    app_B.Ts = 0.2F;
  } else if (app_B.Ts < app_ConstB.UnaryMinus_gj) {
    /* Switch: '<S310>/Switch' */
    app_B.Ts = app_ConstB.UnaryMinus_gj;
  }

  /* End of Switch: '<S310>/Switch2' */

  /* Sum: '<S292>/Add1' incorporates:
   *  Delay: '<S292>/Delay1'
   */
  app_DW.Delay2_DSTATE_m = app_B.Ts + app_DW.Delay1_DSTATE_j;

  /* Switch: '<S301>/Switch2' incorporates:
   *  Constant: '<S292>/MaxAllowed_FBW_Item'
   *  RelationalOperator: '<S301>/LowerRelop1'
   *  RelationalOperator: '<S301>/UpperRelop'
   *  Switch: '<S301>/Switch'
   */
  if (app_DW.Delay2_DSTATE_m > 0.25F) {
    /* Sum: '<S292>/Add1' */
    app_DW.Delay2_DSTATE_m = 0.25F;
  } else if (app_DW.Delay2_DSTATE_m < app_ConstB.UnaryMinus1_m) {
    /* Sum: '<S292>/Add1' incorporates:
     *  Switch: '<S301>/Switch'
     */
    app_DW.Delay2_DSTATE_m = app_ConstB.UnaryMinus1_m;
  }

  /* End of Switch: '<S301>/Switch2' */

  /* Product: '<S294>/Product' incorporates:
   *  Constant: '<S293>/Constant'
   *  Constant: '<S293>/Constant1'
   *  Constant: '<S293>/Constant2'
   *  Constant: '<S294>/Constant'
   *  Delay: '<S292>/Delay2'
   *  Gain: '<S293>/Gain'
   *  Gain: '<S293>/deg2rad'
   *  Gain: '<S293>/rad2deg'
   *  Product: '<S293>/Divide'
   *  Product: '<S293>/Divide1'
   *  Product: '<S293>/Product'
   *  Product: '<S293>/Product1'
   *  Sum: '<S293>/Add'
   *  Sum: '<S297>/Add'
   *  Trigonometry: '<S293>/Atan'
   */
  app_B.StrgWhlAng_g = (((real32_T)atan(0.0174532924F * app_DW.Delay_DSTATE_nx /
    app_B.StrgWhlAng_g * 2.65F) * 57.2957802F + 0.0174532924F *
    app_DW.Delay_DSTATE_nx * app_B.StrgWhlAng_g * 2.0F / 9.81F) +
                        app_DW.Delay2_DSTATE_m) * 15.2F;

  /* Delay: '<S316>/Delay' incorporates:
   *  Delay: '<S288>/Delay'
   */
  app_DW.icLoad_px = ((Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_j
    != 1)) || app_DW.icLoad_px);
  app_PrevZCX.Delay_Reset_ZCE_j = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_px) {
    app_DW.Delay_DSTATE_ic = app_B.StrgWhlAng_g;
  }

  /* Switch: '<S316>/Switch' incorporates:
   *  Delay: '<S251>/Delay'
   *  Switch: '<S251>/Switch'
   *  Switch: '<S295>/Switch'
   */
  if (Arb_is_LatCtrlActv_bl) {
    /* Lookup_n-D: '<S312>/StrWhlAng_RateLmt' incorporates:
     *  Saturate: '<S4>/Saturation'
     */
    app_B.Gain2_a = look1_iflf_binlcapw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.StrWhlAng_RateLmt_bp01Data,
      app_ConstP.StrWhlAng_RateLmt_tableData, 15U);

    /* Sum: '<S316>/Add1' incorporates:
     *  Constant: '<S312>/Constant'
     *  Delay: '<S316>/Delay'
     *  Product: '<S316>/Product'
     */
    app_B.Add1_c = app_B.Gain2_a * 0.02 + app_DW.Delay_DSTATE_ic;

    /* Switch: '<S317>/Switch2' incorporates:
     *  RelationalOperator: '<S317>/LowerRelop1'
     */
    if (app_B.StrgWhlAng_g > app_B.Add1_c) {
      app_B.StrgWhlAng_g = (real32_T)app_B.Add1_c;
    } else {
      /* Sum: '<S316>/Add2' incorporates:
       *  Constant: '<S312>/Constant'
       *  Delay: '<S316>/Delay'
       *  Product: '<S316>/Product1'
       *  UnaryMinus: '<S312>/Unary Minus'
       */
      app_B.Add1_c = 0.02 * -app_B.Gain2_a + app_DW.Delay_DSTATE_ic;

      /* Switch: '<S317>/Switch' incorporates:
       *  RelationalOperator: '<S317>/UpperRelop'
       */
      if (app_B.StrgWhlAng_g < app_B.Add1_c) {
        app_B.StrgWhlAng_g = (real32_T)app_B.Add1_c;
      }

      /* End of Switch: '<S317>/Switch' */
    }

    /* End of Switch: '<S317>/Switch2' */

    /* Lookup_n-D: '<S313>/LUT_MaxLatAcc' incorporates:
     *  Saturate: '<S4>/Saturation'
     */
    app_B.Gain2_a = look1_iflf_binlcapw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.LUT_MaxLatAcc_bp01Data, app_ConstP.LUT_MaxLatAcc_tableData, 17U);

    /* Saturate: '<S313>/Saturation2' */
    if (VehCP_V_VehSpdAvgDrvn_sg > 180.0F) {
      app_B.Ts = 180.0F;
    } else if (VehCP_V_VehSpdAvgDrvn_sg < 5.0F) {
      app_B.Ts = 5.0F;
    } else {
      app_B.Ts = VehCP_V_VehSpdAvgDrvn_sg;
    }

    /* End of Saturate: '<S313>/Saturation2' */

    /* Gain: '<S313>/Gain' */
    app_B.Ts *= 0.277777791F;

    /* Abs: '<S313>/Abs' incorporates:
     *  Constant: '<S116>/Constant'
     *  Constant: '<S116>/Constant1'
     *  Constant: '<S116>/Constant2'
     *  Constant: '<S313>/C_GravAcc'
     *  Gain: '<S313>/rad2deg'
     *  Product: '<S313>/Divide1'
     *  Product: '<S313>/Product'
     *  Product: '<S313>/Product1'
     *  Product: '<S313>/Product2'
     *  Product: '<S313>/Product3'
     *  Sum: '<S313>/Add'
     *  Trigonometry: '<S313>/Trigonometric Function'
     */
    YRC_angD_ReqStrgWhlAng_sg = (real32_T)fabs(((real32_T)atan(2.65F / (app_B.Ts
      * app_B.Ts) * 9.8F * app_B.Gain2_a) * 57.2957802F + app_B.Gain2_a * 2.0F) *
      15.2F);

    /* Switch: '<S315>/Switch2' incorporates:
     *  RelationalOperator: '<S315>/LowerRelop1'
     */
    if (!(app_B.StrgWhlAng_g > YRC_angD_ReqStrgWhlAng_sg)) {
      /* Switch: '<S315>/Switch' incorporates:
       *  Gain: '<S314>/Gain3'
       *  RelationalOperator: '<S315>/UpperRelop'
       */
      if (app_B.StrgWhlAng_g < -YRC_angD_ReqStrgWhlAng_sg) {
        /* Abs: '<S313>/Abs' incorporates:
         *  Switch: '<S295>/Switch'
         */
        YRC_angD_ReqStrgWhlAng_sg = -YRC_angD_ReqStrgWhlAng_sg;
      } else {
        /* Abs: '<S313>/Abs' incorporates:
         *  Switch: '<S295>/Switch'
         */
        YRC_angD_ReqStrgWhlAng_sg = app_B.StrgWhlAng_g;
      }

      /* End of Switch: '<S315>/Switch' */
    }

    /* End of Switch: '<S315>/Switch2' */
    app_DW.Delay_DSTATE_k1 = YRC_angD_ReqStrgWhlAng_sg;
  } else {
    /* Abs: '<S313>/Abs' incorporates:
     *  Switch: '<S295>/Switch'
     */
    YRC_angD_ReqStrgWhlAng_sg = VehCP_angD_StrgWhlAng_sg;
  }

  /* End of Switch: '<S316>/Switch' */

  /* Lookup_n-D: '<S252>/1-D Lookup Table1' incorporates:
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Ts = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg, app_ConstP.pooled39,
    app_ConstP.uDLookupTable1_tableData_jx, 14U);

  /* Chart: '<S251>/Chart' */
  app_Chart_f(Arb_is_LatCtrlActv_bl, &app_B.ramp_cof_b, &app_DW.sf_Chart_pw);

  /* Saturate: '<S251>/Saturation1' */
  if (app_B.ramp_cof_b > 1.0F) {
    app_B.Add_e = 1.0F;
  } else if (app_B.ramp_cof_b < 0.0F) {
    app_B.Add_e = 0.0F;
  } else {
    app_B.Add_e = app_B.ramp_cof_b;
  }

  /* End of Saturate: '<S251>/Saturation1' */

  /* Sum: '<S251>/Sum' incorporates:
   *  Constant: '<S251>/Constant'
   *  Delay: '<S251>/Delay'
   *  Product: '<S251>/Product'
   *  Product: '<S251>/Product1'
   *  Sum: '<S251>/Add'
   *  Sum: '<S251>/Subtract'
   */
  app_B.Gain2_a = ((1.0F - app_B.Add_e) * VehCP_angD_StrgWhlAng_sg +
                   app_DW.Delay_DSTATE_k1 * app_B.Add_e) -
    VehCP_angD_StrgWhlAng_sg;

  /* Delay: '<S255>/Delay' incorporates:
   *  Delay: '<S288>/Delay'
   */
  app_DW.icLoad_jh = ((Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_l
    != 1)) || app_DW.icLoad_jh);
  app_PrevZCX.Delay_Reset_ZCE_l = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_jh) {
    app_DW.Delay_DSTATE_oy = app_B.Gain2_a;
  }

  /* Switch: '<S255>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Sum: '<S255>/Add1' incorporates:
     *  Delay: '<S255>/Delay'
     */
    app_B.Gain9 = app_ConstB.Product + app_DW.Delay_DSTATE_oy;

    /* Switch: '<S256>/Switch2' incorporates:
     *  RelationalOperator: '<S256>/LowerRelop1'
     */
    if (app_B.Gain2_a > app_B.Gain9) {
      app_B.Gain2_a = app_B.Gain9;
    } else {
      /* Sum: '<S255>/Add2' incorporates:
       *  Delay: '<S255>/Delay'
       */
      app_B.Gain9 = app_DW.Delay_DSTATE_oy + app_ConstB.Product1;

      /* Switch: '<S256>/Switch' incorporates:
       *  RelationalOperator: '<S256>/UpperRelop'
       */
      if (app_B.Gain2_a < app_B.Gain9) {
        app_B.Gain2_a = app_B.Gain9;
      }

      /* End of Switch: '<S256>/Switch' */
    }

    /* End of Switch: '<S256>/Switch2' */
  }

  /* End of Switch: '<S255>/Switch' */

  /* Sum: '<S252>/Subtract' incorporates:
   *  Gain: '<S252>/Gain'
   *  Lookup_n-D: '<S252>/1-D Lookup Table'
   *  Product: '<S252>/Product'
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Gain9 = app_B.Gain2_a * look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
    app_ConstP.pooled39, app_ConstP.uDLookupTable_tableData_i, 14U) - 0.0F *
    VehCP_W_StrgWhlAngGrd_sg;

  /* Switch: '<S257>/Switch2' incorporates:
   *  RelationalOperator: '<S257>/LowerRelop1'
   *  RelationalOperator: '<S257>/UpperRelop'
   *  Switch: '<S257>/Switch'
   *  UnaryMinus: '<S252>/Unary Minus'
   */
  if (app_B.Gain9 > app_B.Ts) {
    app_B.Gain9 = app_B.Ts;
  } else if (app_B.Gain9 < -app_B.Ts) {
    /* Switch: '<S257>/Switch' incorporates:
     *  UnaryMinus: '<S252>/Unary Minus'
     */
    app_B.Gain9 = -app_B.Ts;
  }

  /* End of Switch: '<S257>/Switch2' */

  /* Switch: '<S259>/Switch' incorporates:
   *  Abs: '<S259>/Abs2'
   *  Abs: '<S259>/Abs6'
   *  Constant: '<S259>/Constant2'
   *  Constant: '<S277>/Constant'
   *  Lookup_n-D: '<S259>/1-D Lookup Table1'
   *  Lookup_n-D: '<S259>/1-D Lookup Table10'
   *  Lookup_n-D: '<S259>/1-D Lookup Table11'
   *  Lookup_n-D: '<S259>/1-D Lookup Table13'
   *  Lookup_n-D: '<S259>/1-D Lookup Table14'
   *  Lookup_n-D: '<S259>/1-D Lookup Table15'
   *  Lookup_n-D: '<S259>/1-D Lookup Table2'
   *  Lookup_n-D: '<S259>/1-D Lookup Table3'
   *  Lookup_n-D: '<S259>/1-D Lookup Table4'
   *  Lookup_n-D: '<S259>/1-D Lookup Table5'
   *  Lookup_n-D: '<S259>/1-D Lookup Table7'
   *  Lookup_n-D: '<S259>/1-D Lookup Table8'
   *  Lookup_n-D: '<S259>/1-D Lookup Table9'
   *  Product: '<S259>/Product'
   *  Product: '<S259>/Product1'
   *  Product: '<S259>/Product2'
   *  Product: '<S259>/Product3'
   *  RelationalOperator: '<S277>/Compare'
   *  Saturate: '<S4>/Saturation'
   */
  if (VehCP_n_StrgCustSetngDspCmd_u8 != 1) {
    /* Lookup_n-D: '<S259>/1-D Lookup Table1' incorporates:
     *  Abs: '<S259>/Abs4'
     *  Lookup_n-D: '<S259>/1-D Lookup Table6'
     */
    app_B.Add_e = look1_iflf_binlcpw((real32_T)fabs(app_B.Gain9),
      app_ConstP.pooled36, app_ConstP.pooled32, 5U);

    /* Abs: '<S259>/Abs2' incorporates:
     *  Abs: '<S259>/Abs'
     *  Abs: '<S259>/Abs3'
     */
    app_B.Ts = (real32_T)fabs(YRC_angD_ReqStrgWhlAng_sg);
    app_B.MatrixConcatenate1[0] = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled39, app_ConstP.uDLookupTable3_tableData, 14U) *
      look1_iflf_binlcpw(app_B.Ts, app_ConstP.pooled38, app_ConstP.pooled37, 9U)
      * app_B.Add_e;
    app_B.MatrixConcatenate1[1] = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled39, app_ConstP.uDLookupTable4_tableData, 14U) *
      look1_iflf_binlcpw(app_B.Ts, app_ConstP.pooled41, app_ConstP.pooled40, 9U)
      * app_B.Add_e;
    app_B.MatrixConcatenate1[2] = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled39, app_ConstP.pooled42, 14U);
    app_B.MatrixConcatenate1[3] = look1_iflf_binlxpw(app_B.Ts,
      app_ConstP.uDLookupTable15_bp01Data, app_ConstP.uDLookupTable15_tableData,
      10U);
  } else {
    /* Abs: '<S259>/Abs6' incorporates:
     *  Abs: '<S259>/Abs7'
     */
    app_B.Add_e = (real32_T)fabs(YRC_angD_ReqStrgWhlAng_sg);

    /* Lookup_n-D: '<S259>/1-D Lookup Table2' incorporates:
     *  Abs: '<S259>/Abs8'
     *  Lookup_n-D: '<S259>/1-D Lookup Table12'
     */
    app_B.Ts = look1_iflf_binlcpw((real32_T)fabs(app_B.Gain9),
      app_ConstP.pooled36, app_ConstP.pooled32, 5U);
    app_B.MatrixConcatenate1[0] = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled39, app_ConstP.uDLookupTable7_tableData, 14U) *
      look1_iflf_binlcpw(app_B.Add_e, app_ConstP.pooled38, app_ConstP.pooled37,
                         9U) * app_B.Ts;
    app_B.MatrixConcatenate1[1] = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled39, app_ConstP.uDLookupTable10_tableData, 14U) *
      look1_iflf_binlcpw(app_B.Add_e, app_ConstP.pooled41, app_ConstP.pooled40,
                         9U) * app_B.Ts;
    app_B.MatrixConcatenate1[2] = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg,
      app_ConstP.pooled39, app_ConstP.pooled42, 14U);
    app_B.MatrixConcatenate1[3] = 0.0007F;
  }

  /* End of Switch: '<S259>/Switch' */

  /* Lookup_n-D: '<S264>/1-D Lookup Table' incorporates:
   *  Saturate: '<S4>/Saturation'
   */
  app_B.Add_e = look1_iflf_binlxpw(VehCP_V_VehSpdAvgDrvn_sg, app_ConstP.pooled31,
    app_ConstP.uDLookupTable_tableData_g, 5U);

  /* Product: '<S264>/Product' */
  app_B.uDLookupTable1_d = app_B.Gain9 * app_B.MatrixConcatenate1[0];

  /* Product: '<S261>/Divide' incorporates:
   *  Constant: '<S261>/Constant'
   *  Sum: '<S261>/Subtract'
   *  UnitDelay: '<S261>/Unit Delay'
   */
  app_B.Ts = (app_B.Gain9 - app_DW.UnitDelay_DSTATE) / 0.02F;

  /* Saturate: '<S261>/Saturation' */
  if (app_B.Ts > 10.0F) {
    app_B.Ts = 10.0F;
  } else if (app_B.Ts < -10.0F) {
    app_B.Ts = -10.0F;
  }

  /* End of Saturate: '<S261>/Saturation' */

  /* Delay: '<S267>/Delay' */
  if (app_DW.icLoad_m2) {
    /* Sum: '<S267>/Sum' */
    app_DW.Delay_DSTATE_p = app_B.Ts;
  }

  /* Sum: '<S267>/Sum' incorporates:
   *  Delay: '<S267>/Delay'
   *  Product: '<S267>/Product'
   *  Product: '<S267>/Product1'
   */
  app_DW.Delay_DSTATE_p = app_DW.Delay_DSTATE_p * app_ConstB.alpha_g +
    app_ConstB.ualpha_n2 * app_B.Ts;

  /* Product: '<S261>/Product' */
  app_B.Add_c = app_DW.Delay_DSTATE_p * app_B.MatrixConcatenate1[2];

  /* Switch: '<S263>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S263>/Switch3' incorporates:
     *  Constant: '<S263>/Constant4'
     *  Constant: '<S263>/Constant5'
     *  Constant: '<S274>/Constant'
     *  Delay: '<S258>/Delay'
     *  Product: '<S263>/Product1'
     *  RelationalOperator: '<S274>/Compare'
     */
    if (app_B.Gain9 * app_DW.Delay_DSTATE_jq >= 0.0F) {
      app_B.s204_iter = 1;
    } else {
      app_B.s204_iter = 3;
    }

    /* End of Switch: '<S263>/Switch3' */

    /* Sum: '<S263>/Add' incorporates:
     *  Constant: '<S263>/Constant'
     *  Delay: '<S258>/Delay'
     *  Product: '<S263>/Product'
     *  Product: '<S263>/Product2'
     */
    app_B.Ts = (real32_T)(app_B.MatrixConcatenate1[1] * (real32_T)
                          app_B.s204_iter * app_B.Gain9 * 0.02) +
      app_DW.Delay_DSTATE_jq;

    /* Switch: '<S263>/Switch1' incorporates:
     *  Abs: '<S258>/Abs'
     *  Constant: '<S260>/Constant'
     *  Constant: '<S268>/Constant'
     *  Constant: '<S269>/Constant'
     *  Constant: '<S270>/Constant'
     *  Constant: '<S271>/Constant'
     *  Constant: '<S272>/Constant'
     *  Constant: '<S273>/Constant'
     *  Delay: '<S258>/Delay1'
     *  Logic: '<S263>/Logical Operator'
     *  Logic: '<S263>/Logical Operator1'
     *  Logic: '<S263>/Logical Operator2'
     *  Logic: '<S263>/Logical Operator3'
     *  Logic: '<S263>/Logical Operator4'
     *  Logic: '<S263>/Logical Operator5'
     *  Logic: '<S263>/Logical Operator6'
     *  RelationalOperator: '<S260>/Compare'
     *  RelationalOperator: '<S268>/Compare'
     *  RelationalOperator: '<S269>/Compare'
     *  RelationalOperator: '<S270>/Compare'
     *  RelationalOperator: '<S271>/Compare'
     *  RelationalOperator: '<S272>/Compare'
     *  RelationalOperator: '<S273>/Compare'
     */
    if ((!((real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg) >= 1.0F)) &&
        (((app_B.Gain9 >= 0.0F) && ((app_DW.Delay1_DSTATE_a < 3.0F) || (app_B.Ts
            < 0.0F))) || ((app_B.Gain9 <= 0.0F) && ((app_DW.Delay1_DSTATE_a >
            -3.0F) || (app_B.Ts > 0.0F))))) {
      /* Switch: '<S263>/Switch' */
      app_DW.Delay_DSTATE_jq = app_B.Ts;
    }

    /* End of Switch: '<S263>/Switch1' */
  } else {
    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S263>/Constant1'
     */
    app_DW.Delay_DSTATE_jq = 0.0F;
  }

  /* End of Switch: '<S263>/Switch' */

  /* Switch: '<S275>/Switch2' incorporates:
   *  Constant: '<S263>/Constant2'
   *  RelationalOperator: '<S275>/LowerRelop1'
   *  RelationalOperator: '<S275>/UpperRelop'
   *  Switch: '<S275>/Switch'
   */
  if (app_DW.Delay_DSTATE_jq > 3.0F) {
    /* Switch: '<S263>/Switch' */
    app_DW.Delay_DSTATE_jq = 3.0F;
  } else if (app_DW.Delay_DSTATE_jq < app_ConstB.UnaryMinus_e) {
    /* Switch: '<S263>/Switch' incorporates:
     *  Switch: '<S275>/Switch'
     */
    app_DW.Delay_DSTATE_jq = app_ConstB.UnaryMinus_e;
  }

  /* End of Switch: '<S275>/Switch2' */

  /* Product: '<S262>/Product2' incorporates:
   *  Gain: '<S262>/Gain1'
   *  Product: '<S262>/Product1'
   */
  app_B.Ts = app_B.StrgWhlAngGrd_g * app_B.StrgWhlAngGrd_g *
    YRC_angD_ReqStrgWhlAng_sg * app_B.MatrixConcatenate1[3];

  /* Saturate: '<S262>/Saturation' */
  if (app_B.Ts > 2.5F) {
    app_B.Ts = 2.5F;
  } else if (app_B.Ts < -2.5F) {
    app_B.Ts = -2.5F;
  }

  /* End of Saturate: '<S262>/Saturation' */

  /* Switch: '<S276>/Switch2' incorporates:
   *  RelationalOperator: '<S276>/LowerRelop1'
   *  RelationalOperator: '<S276>/UpperRelop'
   *  Switch: '<S276>/Switch'
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  if (app_B.uDLookupTable1_d > app_B.Add_e) {
    app_B.uDLookupTable1_d = app_B.Add_e;
  } else if (app_B.uDLookupTable1_d < -app_B.Add_e) {
    /* Switch: '<S276>/Switch' incorporates:
     *  UnaryMinus: '<S264>/Unary Minus'
     */
    app_B.uDLookupTable1_d = -app_B.Add_e;
  }

  /* End of Switch: '<S276>/Switch2' */

  /* Switch: '<S266>/Switch2' incorporates:
   *  Constant: '<S261>/Constant1'
   *  RelationalOperator: '<S266>/LowerRelop1'
   *  RelationalOperator: '<S266>/UpperRelop'
   *  Switch: '<S266>/Switch'
   */
  if (app_B.Add_c > 1.0F) {
    app_B.Add_c = 1.0F;
  } else if (app_B.Add_c < app_ConstB.UnaryMinus_g) {
    /* Switch: '<S266>/Switch' */
    app_B.Add_c = app_ConstB.UnaryMinus_g;
  }

  /* End of Switch: '<S266>/Switch2' */

  /* Sum: '<S258>/Sum' incorporates:
   *  Delay: '<S258>/Delay'
   *  Delay: '<S258>/Delay1'
   */
  app_DW.Delay1_DSTATE_a = ((app_B.Ts + app_B.uDLookupTable1_d) + app_B.Add_c) +
    app_DW.Delay_DSTATE_jq;

  /* Abs: '<S242>/Abs1' */
  app_B.StrgWhlAngGrd_g = (real32_T)fabs(VehCP_T_DrvrStrgDlvrdToq_sg);

  /* Chart: '<S242>/Chart1' incorporates:
   *  Constant: '<S242>/c_VLatC_MainLoopTime_Sec1'
   *  Constant: '<S242>/c_VLatC_MainLoopTime_Sec2'
   *  Constant: '<S242>/k_VLatC_T_OvrrdDelayToqThd_sg'
   *  Constant: '<S242>/k_VLatC_t_OvrrdDelayRsTm_sg1'
   *  RelationalOperator: '<S242>/Relational Operator'
   */
  app_Chart4(app_B.StrgWhlAngGrd_g > 1.0F, 0.02F, 1.5F, 0.02F, &app_B.Compare_gw,
             &app_DW.sf_Chart1_j);

  /* Chart: '<S242>/Chart2' incorporates:
   *  Constant: '<S242>/c_VLatC_MainLoopTime_Sec'
   *  Constant: '<S242>/k_VLatC_t_OvrrdDelayRsTm_sg'
   */
  if (app_DW.is_active_c16_app == 0U) {
    app_DW.is_active_c16_app = 1U;
    app_DW.is_c16_app = app_IN_OFF_i;
    app_B.rtb_out_cond_iu_g = false;
    app_DW.local_time = 0.0F;
  } else if (app_DW.is_c16_app == 1) {
    app_B.rtb_out_cond_iu_g = false;
    if (app_DW.local_time > 2.0F) {
      app_DW.is_c16_app = app_IN_ON_g;
      app_B.rtb_out_cond_iu_g = true;
      app_DW.local_time = 0.0F;
    } else if (Arb_is_LatCtrlActv_bl) {
      app_DW.local_time += 0.02F;
    } else {
      app_DW.local_time = 0.0F;
    }
  } else {
    /* case IN_ON: */
    app_B.rtb_out_cond_iu_g = true;
    if (app_DW.local_time > 0.02F) {
      app_DW.is_c16_app = app_IN_OFF_i;
      app_B.rtb_out_cond_iu_g = false;
      app_DW.local_time = 0.0F;
    } else if (!Arb_is_LatCtrlActv_bl) {
      app_DW.local_time += 0.02F;
    } else {
      app_DW.local_time = 0.0F;
    }
  }

  /* End of Chart: '<S242>/Chart2' */

  /* Logic: '<S242>/Logical Operator1' */
  app_B.Compare_gw = (app_B.Compare_gw && app_B.rtb_out_cond_iu_g);

  /* Chart: '<S242>/OvrdDely' incorporates:
   *  Constant: '<S242>/k_VLatC_indx_OvrrdDlyInitCof_sg'
   */
  if (app_DW.is_active_c17_app == 0U) {
    app_DW.is_active_c17_app = 1U;
    app_DW.is_c17_app = app_IN_Norm;
    app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 1.0F;
  } else if (app_DW.is_c17_app == 1) {
    if (app_B.VRD_indx_DrvrOvrrdDlyCof_sg >= 1.0F) {
      app_DW.is_c17_app = app_IN_Norm;
      app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 1.0F;
    } else if (!app_B.Compare_gw) {
      app_B.VRD_indx_DrvrOvrrdDlyCof_sg += app_ConstB.Product4;
    } else {
      app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 0.38F;
    }

    /* case IN_Norm: */
  } else if (app_B.Compare_gw) {
    app_DW.is_c17_app = app_IN_Delay;
    app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 0.38F;
  }

  /* End of Chart: '<S242>/OvrdDely' */

  /* Switch: '<S245>/Switch' incorporates:
   *  Abs: '<S242>/Abs1'
   *  Delay: '<S245>/Delay'
   *  Lookup_n-D: '<S242>/1-D Lookup Table1'
   *  Product: '<S242>/Product2'
   *  Product: '<S242>/Product3'
   */
  if (Arb_is_LatCtrlActv_bl) {
    /* Switch: '<S265>/Switch2' incorporates:
     *  Constant: '<S258>/Constant'
     *  Delay: '<S258>/Delay1'
     *  RelationalOperator: '<S265>/LowerRelop1'
     *  RelationalOperator: '<S265>/UpperRelop'
     *  Switch: '<S265>/Switch'
     */
    if (app_DW.Delay1_DSTATE_a > 2.988F) {
      app_B.Ts = 2.988F;
    } else if (app_DW.Delay1_DSTATE_a < app_ConstB.UnaryMinus_k) {
      /* Switch: '<S265>/Switch' */
      app_B.Ts = app_ConstB.UnaryMinus_k;
    } else {
      app_B.Ts = app_DW.Delay1_DSTATE_a;
    }

    /* End of Switch: '<S265>/Switch2' */

    /* Switch: '<S250>/Switch2' incorporates:
     *  Constant: '<S242>/Constant5'
     *  Constant: '<S242>/k_VLatC_indx_OvrrdDlyInitCof_sg'
     *  RelationalOperator: '<S250>/LowerRelop1'
     *  RelationalOperator: '<S250>/UpperRelop'
     *  Switch: '<S250>/Switch'
     */
    if (app_B.VRD_indx_DrvrOvrrdDlyCof_sg > 1.0F) {
      app_B.Add_e = 1.0F;
    } else if (app_B.VRD_indx_DrvrOvrrdDlyCof_sg < 0.38F) {
      /* Switch: '<S250>/Switch' incorporates:
       *  Constant: '<S242>/k_VLatC_indx_OvrrdDlyInitCof_sg'
       */
      app_B.Add_e = 0.38F;
    } else {
      app_B.Add_e = app_B.VRD_indx_DrvrOvrrdDlyCof_sg;
    }

    /* End of Switch: '<S250>/Switch2' */
    app_DW.Delay_DSTATE_nv = app_B.Ts * look1_iflf_binlxpw(app_B.StrgWhlAngGrd_g,
      app_ConstP.uDLookupTable1_bp01Data, app_ConstP.uDLookupTable1_tableData_j,
      16U) * app_B.Add_e;
  }

  /* End of Switch: '<S245>/Switch' */

  /* Chart: '<S245>/Chart' */
  if (app_DW.is_active_c19_app == 0U) {
    app_DW.is_active_c19_app = 1U;
    app_DW.is_c19_app = app_IN_OFF_i;
    app_B.ramp_cof_m = 0.0F;
  } else {
    switch (app_DW.is_c19_app) {
     case app_IN_OFF_i:
      if (Arb_is_LatCtrlActv_bl) {
        app_DW.is_c19_app = app_IN_ON_Count_n;
        app_B.ramp_cof_m = 0.0F;
      }
      break;

     case app_IN_OFF_Count_e:
      if ((!Arb_is_LatCtrlActv_bl) && (app_B.ramp_cof_m <= 0.01F)) {
        app_DW.is_c19_app = app_IN_OFF_i;
        app_B.ramp_cof_m = 0.0F;
      } else if (Arb_is_LatCtrlActv_bl && (app_B.ramp_cof_m >= 0.99F)) {
        app_DW.is_c19_app = app_IN_ON_k;
        app_B.ramp_cof_m = 1.0F;
      } else if (Arb_is_LatCtrlActv_bl) {
        app_B.ramp_cof_m += 0.05F;
      } else {
        app_B.ramp_cof_m -= 0.05F;
      }
      break;

     case app_IN_ON_k:
      if (!Arb_is_LatCtrlActv_bl) {
        app_DW.is_c19_app = app_IN_OFF_Count_e;
        app_B.ramp_cof_m = 1.0F;
      }
      break;

     default:
      /* case IN_ON_Count: */
      if (Arb_is_LatCtrlActv_bl && (app_B.ramp_cof_m >= 0.99F)) {
        app_DW.is_c19_app = app_IN_ON_k;
        app_B.ramp_cof_m = 1.0F;
      } else if ((!Arb_is_LatCtrlActv_bl) && (app_B.ramp_cof_m <= 0.01F)) {
        app_DW.is_c19_app = app_IN_OFF_i;
        app_B.ramp_cof_m = 0.0F;
      } else if (Arb_is_LatCtrlActv_bl) {
        app_B.ramp_cof_m += 0.05F;
      } else {
        app_B.ramp_cof_m -= 0.05F;
      }
      break;
    }
  }

  /* End of Chart: '<S245>/Chart' */

  /* Saturate: '<S245>/Saturation' */
  if (app_B.ramp_cof_m > 1.0F) {
    app_B.Add_e = 1.0F;
  } else if (app_B.ramp_cof_m < 0.0F) {
    app_B.Add_e = 0.0F;
  } else {
    app_B.Add_e = app_B.ramp_cof_m;
  }

  /* End of Saturate: '<S245>/Saturation' */

  /* Sum: '<S245>/Sum' incorporates:
   *  Constant: '<S245>/Constant'
   *  Constant: '<S245>/Constant1'
   *  Delay: '<S245>/Delay'
   *  Product: '<S245>/Product'
   *  Product: '<S245>/Product1'
   *  Sum: '<S245>/Add'
   *  Sum: '<S245>/Subtract'
   */
  app_B.StrgWhlAngGrd_g = (1.0F - app_B.Add_e) * 0.0F + app_DW.Delay_DSTATE_nv *
    app_B.Add_e;

  /* Delay: '<S279>/Delay' incorporates:
   *  Delay: '<S288>/Delay'
   */
  app_DW.icLoad_fy = ((Arb_is_LatCtrlActv_bl && (app_PrevZCX.Delay_Reset_ZCE_lg
    != 1)) || app_DW.icLoad_fy);
  app_PrevZCX.Delay_Reset_ZCE_lg = Arb_is_LatCtrlActv_bl;
  if (app_DW.icLoad_fy) {
    app_DW.Delay_DSTATE_a5 = app_B.StrgWhlAngGrd_g;
  }

  /* Switch: '<S279>/Switch' */
  if (Arb_is_LatCtrlActv_bl) {
    /* Sum: '<S279>/Add1' incorporates:
     *  Delay: '<S279>/Delay'
     */
    app_B.Ts = app_ConstB.Product_h + app_DW.Delay_DSTATE_a5;

    /* Switch: '<S280>/Switch2' incorporates:
     *  RelationalOperator: '<S280>/LowerRelop1'
     */
    if (app_B.StrgWhlAngGrd_g > app_B.Ts) {
      app_B.StrgWhlAngGrd_g = app_B.Ts;
    } else {
      /* Sum: '<S279>/Add2' incorporates:
       *  Delay: '<S279>/Delay'
       */
      app_B.Ts = app_DW.Delay_DSTATE_a5 + app_ConstB.Product1_j;

      /* Switch: '<S280>/Switch' incorporates:
       *  RelationalOperator: '<S280>/UpperRelop'
       */
      if (app_B.StrgWhlAngGrd_g < app_B.Ts) {
        app_B.StrgWhlAngGrd_g = app_B.Ts;
      }

      /* End of Switch: '<S280>/Switch' */
    }

    /* End of Switch: '<S280>/Switch2' */
  }

  /* End of Switch: '<S279>/Switch' */

  /* Saturate: '<S114>/Saturation' */
  if (app_B.StrgWhlAngGrd_g > 3.0F) {
    /* Saturate: '<S114>/Saturation' */
    LKA_ReqToq = 3.0F;
  } else if (app_B.StrgWhlAngGrd_g < -3.0F) {
    /* Saturate: '<S114>/Saturation' */
    LKA_ReqToq = -3.0F;
  } else {
    /* Saturate: '<S114>/Saturation' */
    LKA_ReqToq = app_B.StrgWhlAngGrd_g;
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
   *  DataTypeConversion: '<S74>/Data Type Conversion'
   */
  app_B.Ts = (real32_T)floor((LKA_ReqToq + 10.24F) / 0.01F);
  app_B.rtb_out_cond_iu_g = rtIsNaNF(app_B.Ts);
  app_B.rtb_out_cond_i_l = rtIsInfF(app_B.Ts);
  if (app_B.rtb_out_cond_iu_g || app_B.rtb_out_cond_i_l) {
    app_B.Add_e = 0.0F;
  } else {
    app_B.Add_e = (real32_T)fmod(app_B.Ts, 65536.0);
  }

  app_B.Divide_j = (uint16_T)(app_B.Add_e < 0.0F ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-app_B.Add_e : (int32_T)(uint16_T)app_B.Add_e);

  /* End of Product: '<S79>/Divide' */

  /* Chart: '<S73>/Chart' incorporates:
   *  Constant: '<S45>/Constant'
   *  Constant: '<S45>/Constant1'
   *  DataTypeConversion: '<S73>/Data Type Conversion'
   */
  app_Chart_p(4, app_ConstB.Add_c1, (uint32_T)app_B.count_d, app_ConstP.pooled61,
              app_B.msg_j);

  /* Chart: '<S77>/Chart' incorporates:
   *  Constant: '<S45>/Constant9'
   *  DataTypeConversion: '<S42>/Data Type Conversion'
   *  DataTypeConversion: '<S77>/Data Type Conversion'
   */
  app_Chart_h(1, app_ConstB.Add_h, (uint32_T)app_B.Compare_gw, app_B.msg_j,
              app_B.msg);

  /* Chart: '<S74>/Chart' */
  app_B.i_p = 0;
  while (app_B.i_p < 64) {
    app_B.msg_ct[app_B.i_p] = app_B.msg[app_B.i_p];
    app_B.i_p++;
  }

  app_B.i_p = 10;

  /* DataTypeConversion: '<S74>/Data Type Conversion' */
  if (app_B.rtb_out_cond_iu_g || app_B.rtb_out_cond_i_l) {
    app_B.Ts = 0.0F;
  } else {
    app_B.Ts = (real32_T)fmod(app_B.Ts, 4.294967296E+9);
  }

  /* Chart: '<S74>/Chart' incorporates:
   *  DataTypeConversion: '<S74>/Data Type Conversion'
   */
  app_B.mod_data = app_B.Ts < 0.0F ? (uint32_T)-(int32_T)(uint32_T)-app_B.Ts :
    (uint32_T)app_B.Ts;
  while (app_B.i_p >= 0) {
    app_B.s204_iter = (int32_T)app_rt_powd_snf(2.0, (real_T)app_B.i_p);
    app_B.tmp = (uint32_T)((real_T)app_B.mod_data / (real_T)app_B.s204_iter);
    app_B.Add1_c = (real_T)app_B.mod_data - (real_T)app_B.tmp * (real_T)
      app_B.s204_iter;
    if (app_B.Add1_c >= 0.0) {
      app_B.mod_data = (uint32_T)app_B.Add1_c;
    } else {
      app_B.mod_data = 0U;
    }

    if (app_B.tmp > 255U) {
      app_B.tmp = 255U;
    }

    app_B.msg_ct[(app_ConstB.Add_nm - app_B.i_p) - 1] = (uint8_T)app_B.tmp;
    app_B.i_p--;
  }

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
  app_Chart_h(14, app_ConstB.Add_ml, ((((((((app_B.count_d + ((((((((((uint32_T)
    (uint8_T)(LKA_ReqToqSts << 6) >> 7) << 13) + (((uint32_T)(uint8_T)
    (LKA_ReqToqSts << 7) >> 7) << 12)) + (((uint32_T)(uint16_T)(app_B.Divide_j <<
    5) >> 15) << 11)) + (((uint32_T)(uint16_T)(app_B.Divide_j << 6) >> 15) << 10))
    + (((uint32_T)(uint16_T)(app_B.Divide_j << 7) >> 15) << 9)) + (((uint32_T)
    (uint16_T)(app_B.Divide_j << 8) >> 15) << 8)) + (((uint32_T)(uint16_T)
    (app_B.Divide_j << 9) >> 15) << 7)) + (((uint32_T)(uint16_T)(app_B.Divide_j <<
    10) >> 15) << 6))) + (((uint32_T)(uint16_T)(app_B.Divide_j << 11) >> 15) <<
    5)) + (((uint32_T)(uint16_T)(app_B.Divide_j << 12) >> 15) << 4)) +
    (((uint32_T)(uint16_T)(app_B.Divide_j << 13) >> 15) << 3)) + (((uint32_T)
    (uint16_T)(app_B.Divide_j << 14) >> 15) << 2)) + (((uint32_T)(uint16_T)
    (app_B.Divide_j << 15) >> 15) << 1)) + app_ConstB.Product_i) ^ 16383U) + 1U,
              app_B.msg_ct, app_B.msg_c);

  /* Chart: '<S76>/Chart' incorporates:
   *  Constant: '<S45>/Constant8'
   *  DataTypeConversion: '<S76>/Data Type Conversion'
   */
  app_Chart_h(2, app_ConstB.Add_ow, (uint32_T)LKA_ReqToqSts, app_B.msg_c,
              app_B.msg_e);

  /* Product: '<S71>/Product' */
  app_B.rtb_out_cond_c_l = 0U;

  /* Product: '<S71>/Product1' */
  app_B.rtb_out_cond_j = 0U;

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
  for (app_B.s204_iter = 0; app_B.s204_iter < 8; app_B.s204_iter++) {
    /* Product: '<S71>/Product' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.rtb_out_cond_c_l = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter] * app_ConstP.pooled64[app_B.s204_iter]) +
      app_B.rtb_out_cond_c_l);

    /* Product: '<S71>/Product1' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.rtb_out_cond_j = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter + 8] * app_ConstP.pooled64[app_B.s204_iter]) +
      app_B.rtb_out_cond_j);

    /* Product: '<S71>/Product2' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter + 16] * app_ConstP.pooled64[app_B.s204_iter])
                        + app_B.u);

    /* Product: '<S71>/Product3' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter + 24] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u1);

    /* Product: '<S71>/Product4' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter + 32] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u2);

    /* Product: '<S71>/Product5' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u3 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter + 40] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u3);

    /* Product: '<S71>/Product6' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u4 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter + 48] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u4);

    /* Product: '<S71>/Product7' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    app_B.u5 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_e[app_B.s204_iter + 56] * app_ConstP.pooled64[app_B.s204_iter])
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
  FVCM_EPS_Frame[0] = app_B.rtb_out_cond_c_l;
  FVCM_EPS_Frame[1] = app_B.rtb_out_cond_j;
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
  app_B.rtb_out_cond_iu_g = (arg_lateralPlan_rProb >= 0.5F);

  /* RelationalOperator: '<S57>/Compare' incorporates:
   *  Constant: '<S57>/Constant'
   *  Inport: '<Root>/lateralPlan_dProb'
   */
  app_B.Compare_gw = (arg_lateralPlan_dProb >= 0.5F);

  /* Chart: '<S44>/Chart1' incorporates:
   *  Logic: '<S44>/Logical Operator1'
   */
  app_Chart1(Arb_is_LatCtrlActv_bl, app_B.Compare_gw || app_B.rtb_out_cond_iu_g,
             &app_B.rtb_out_cond_c_l);

  /* RelationalOperator: '<S55>/Compare' incorporates:
   *  Constant: '<S55>/Constant'
   *  Inport: '<Root>/lateralPlan_lProb'
   */
  app_B.rtb_out_cond_iu_g = (arg_lateralPlan_lProb >= 0.5F);

  /* Chart: '<S44>/Chart2' incorporates:
   *  Logic: '<S44>/Logical Operator'
   */
  app_Chart1(Arb_is_LatCtrlActv_bl, app_B.Compare_gw || app_B.rtb_out_cond_iu_g,
             &app_B.rtb_out_cond_j);

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
  app_Chart_h(3, app_ConstB.Add_k, (uint32_T)app_B.rtb_out_cond_j, app_B.msg_i,
              app_B.msg_p);

  /* Chart: '<S61>/Chart' incorporates:
   *  Constant: '<S44>/Constant19'
   *  DataTypeConversion: '<S61>/Data Type Conversion'
   */
  app_Chart_h(3, app_ConstB.Add_ps, (uint32_T)app_B.rtb_out_cond_c_l,
              app_B.msg_p, app_B.msg_em);

  /* Switch: '<S39>/Switch' incorporates:
   *  Constant: '<S39>/Constant15'
   *  Constant: '<S39>/Constant16'
   */
  if (Arb_is_LatCtrlActv_bl) {
    app_B.rtb_out_cond_c_l = 2U;
  } else {
    app_B.rtb_out_cond_c_l = 1U;
  }

  /* End of Switch: '<S39>/Switch' */

  /* Chart: '<S62>/Chart' incorporates:
   *  Constant: '<S44>/Constant21'
   *  DataTypeConversion: '<S62>/Data Type Conversion'
   */
  app_Chart_h(3, app_ConstB.Add_nd, (uint32_T)app_B.rtb_out_cond_c_l,
              app_B.msg_em, app_B.msg_n);

  /* Product: '<S58>/Product' */
  app_B.rtb_out_cond_c_l = 0U;

  /* Product: '<S58>/Product1' */
  app_B.rtb_out_cond_j = 0U;

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
  for (app_B.s204_iter = 0; app_B.s204_iter < 8; app_B.s204_iter++) {
    /* Product: '<S58>/Product' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.rtb_out_cond_c_l = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter] * app_ConstP.pooled64[app_B.s204_iter]) +
      app_B.rtb_out_cond_c_l);

    /* Product: '<S58>/Product1' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.rtb_out_cond_j = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter + 8] * app_ConstP.pooled64[app_B.s204_iter]) +
      app_B.rtb_out_cond_j);

    /* Product: '<S58>/Product2' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter + 16] * app_ConstP.pooled64[app_B.s204_iter])
                        + app_B.u);

    /* Product: '<S58>/Product3' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter + 24] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u1);

    /* Product: '<S58>/Product4' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u2 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter + 32] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u2);

    /* Product: '<S58>/Product5' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u3 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter + 40] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u3);

    /* Product: '<S58>/Product6' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u4 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter + 48] * app_ConstP.pooled64[app_B.s204_iter])
                         + app_B.u4);

    /* Product: '<S58>/Product7' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    app_B.u5 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)
      app_B.msg_n[app_B.s204_iter + 56] * app_ConstP.pooled64[app_B.s204_iter])
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
  FVCM_HMI_Frame[0] = app_B.rtb_out_cond_c_l;
  FVCM_HMI_Frame[1] = app_B.rtb_out_cond_j;
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
  app_Chart4(app_B.rtb_out_cond_k_d, 0.02F, 1.0F, 0.01F, &app_B.Compare_gw,
             &app_DW.sf_Chart6);

  /* Update for Delay: '<S24>/Delay9' */
  app_DW.icLoad = false;
  for (app_B.s204_iter = 0; app_B.s204_iter < 8; app_B.s204_iter++) {
    app_DW.Delay9_DSTATE[app_B.s204_iter] = app_DW.Delay9_DSTATE[app_B.s204_iter
      + 1];
  }

  app_DW.Delay9_DSTATE[8] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay9' */

  /* Update for Delay: '<S24>/Delay8' */
  app_DW.icLoad_p = false;
  for (app_B.s204_iter = 0; app_B.s204_iter < 7; app_B.s204_iter++) {
    app_DW.Delay8_DSTATE[app_B.s204_iter] = app_DW.Delay8_DSTATE[app_B.s204_iter
      + 1];
  }

  app_DW.Delay8_DSTATE[7] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay8' */

  /* Update for Delay: '<S24>/Delay7' */
  app_DW.icLoad_a = false;
  for (app_B.s204_iter = 0; app_B.s204_iter < 6; app_B.s204_iter++) {
    app_DW.Delay7_DSTATE[app_B.s204_iter] = app_DW.Delay7_DSTATE[app_B.s204_iter
      + 1];
  }

  app_DW.Delay7_DSTATE[6] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay7' */

  /* Update for Delay: '<S24>/Delay6' */
  app_DW.icLoad_d = false;
  for (app_B.s204_iter = 0; app_B.s204_iter < 5; app_B.s204_iter++) {
    app_DW.Delay6_DSTATE[app_B.s204_iter] = app_DW.Delay6_DSTATE[app_B.s204_iter
      + 1];
  }

  app_DW.Delay6_DSTATE[5] = app_B.CANUnpack_o1;

  /* End of Update for Delay: '<S24>/Delay6' */

  /* Update for Delay: '<S24>/Delay5' */
  app_DW.icLoad_g = false;
  app_DW.Delay5_DSTATE[0] = app_DW.Delay5_DSTATE[1];
  app_DW.Delay5_DSTATE[1] = app_DW.Delay5_DSTATE[2];
  app_DW.Delay5_DSTATE[2] = app_DW.Delay5_DSTATE[3];
  app_DW.Delay5_DSTATE[3] = app_DW.Delay5_DSTATE[4];
  app_DW.Delay5_DSTATE[4] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay' */
  app_DW.icLoad_pt = false;
  app_DW.Delay_DSTATE[0] = app_DW.Delay_DSTATE[1];
  app_DW.Delay_DSTATE[1] = app_DW.Delay_DSTATE[2];
  app_DW.Delay_DSTATE[2] = app_DW.Delay_DSTATE[3];
  app_DW.Delay_DSTATE[3] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay1' */
  app_DW.icLoad_n = false;
  app_DW.Delay1_DSTATE[0] = app_DW.Delay1_DSTATE[1];
  app_DW.Delay1_DSTATE[1] = app_DW.Delay1_DSTATE[2];
  app_DW.Delay1_DSTATE[2] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay2' */
  app_DW.icLoad_b = false;
  app_DW.Delay2_DSTATE[0] = app_DW.Delay2_DSTATE[1];
  app_DW.Delay2_DSTATE[1] = app_B.CANUnpack_o1;

  /* Update for Delay: '<S24>/Delay3' */
  app_DW.icLoad_gw = false;
  app_DW.Delay3_DSTATE = app_B.CANUnpack_o1;

  /* Update for Delay: '<S23>/Delay' */
  app_DW.icLoad_n4 = false;
  app_DW.Delay_DSTATE_j[0] = app_DW.Delay_DSTATE_j[1];
  app_DW.Delay_DSTATE_j[1] = app_DW.Delay_DSTATE_j[2];
  app_DW.Delay_DSTATE_j[2] = app_DW.Delay_DSTATE_j[3];
  app_DW.Delay_DSTATE_j[3] = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S23>/Delay1' */
  app_DW.icLoad_e = false;
  app_DW.Delay1_DSTATE_p[0] = app_DW.Delay1_DSTATE_p[1];
  app_DW.Delay1_DSTATE_p[1] = app_DW.Delay1_DSTATE_p[2];
  app_DW.Delay1_DSTATE_p[2] = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S23>/Delay2' */
  app_DW.icLoad_dc = false;
  app_DW.Delay2_DSTATE_g[0] = app_DW.Delay2_DSTATE_g[1];
  app_DW.Delay2_DSTATE_g[1] = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S23>/Delay3' */
  app_DW.icLoad_l = false;
  app_DW.Delay3_DSTATE_m = app_B.CANUnpack_o1_h;

  /* Update for Delay: '<S33>/Delay' */
  app_DW.icLoad_m = false;
  app_DW.Delay_DSTATE_e = VehCP_yr_VehDynYawRate_sg;

  /* Update for Delay: '<S29>/Delay' */
  app_DW.icLoad_f = false;
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
  app_DW.icLoad_c = false;
  app_DW.Delay_DSTATE_l = VehCP_angD_StrgWhlAng_sg;

  /* Update for Delay: '<S31>/Delay' */
  app_DW.icLoad_k = false;

  /* Update for Delay: '<S32>/Delay' */
  app_DW.icLoad_cn = false;
  app_DW.Delay_DSTATE_o = VehCP_V_ClstDspdVehSpd_sg;

  /* Update for Delay: '<S34>/Delay' */
  app_DW.icLoad_dp = false;
  app_DW.Delay_DSTATE_d = VehCP_W_StrgWhlAngGrd_sg;

  /* Update for Delay: '<S35>/Delay' */
  app_DW.icLoad_nt = false;

  /* Update for Delay: '<S36>/Delay' */
  app_DW.icLoad_dv = false;
  app_DW.Delay_DSTATE_i = VehCP_a_VSELatAcc_sg;

  /* Update for Delay: '<S37>/Delay' */
  app_DW.icLoad_fg = false;
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
   *  Switch: '<S114>/Switch1'
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
  app_DW.DelayInput1_DSTATE_p = app_B.LogicalOperator1_l;

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
  app_DW.icLoad_mq = false;
  app_DW.Delay_DSTATE_lg[0] = ((((app_B.cost_traj[2] * app_B.plan_time +
    app_B.cost_traj[1]) + app_B.cost_traj[3] * app_B.plan_time * app_B.plan_time)
    + app_B.cost_traj[4] * app_B.plan_time * app_B.plan_time * app_B.plan_time)
    + app_B.cost_traj[5] * app_B.plan_time * app_B.plan_time * app_B.plan_time *
    app_B.plan_time) + app_B.cost_traj[6] * app_B.plan_time * app_B.plan_time *
    app_B.plan_time * app_B.plan_time * app_B.plan_time;
  app_DW.Delay_DSTATE_lg[1] = (((2.0F * app_B.cost_traj[3] * app_B.plan_time +
    app_B.cost_traj[2]) + 3.0F * app_B.cost_traj[4] * app_B.plan_time *
    app_B.plan_time) + 4.0F * app_B.cost_traj[5] * app_B.plan_time *
    app_B.plan_time * app_B.plan_time) + 5.0F * app_B.cost_traj[6] *
    app_B.plan_time * app_B.plan_time * app_B.plan_time * app_B.plan_time;
  app_DW.Delay_DSTATE_lg[2] = ((6.0F * app_B.cost_traj[4] * app_B.plan_time +
    2.0F * app_B.cost_traj[3]) + 12.0F * app_B.cost_traj[5] * app_B.plan_time *
    app_B.plan_time) + 20.0F * app_B.cost_traj[6] * app_B.plan_time *
    app_B.plan_time * app_B.plan_time;

  /* Update for Delay: '<S194>/Delay' */
  app_DW.icLoad_i = false;

  /* Update for Delay: '<S288>/Delay' */
  app_DW.icLoad_gn = false;
  app_DW.Delay_DSTATE_l0 = app_B.uDLookupTable;

  /* Update for Delay: '<S286>/Delay' */
  app_DW.icLoad_j = false;

  /* Update for Delay: '<S296>/Delay' */
  app_DW.icLoad_mg = false;

  /* Update for Delay: '<S316>/Delay' */
  app_DW.icLoad_px = false;
  app_DW.Delay_DSTATE_ic = app_B.StrgWhlAng_g;

  /* Update for Delay: '<S255>/Delay' */
  app_DW.icLoad_jh = false;
  app_DW.Delay_DSTATE_oy = app_B.Gain2_a;

  /* Update for UnitDelay: '<S261>/Unit Delay' */
  app_DW.UnitDelay_DSTATE = app_B.Gain9;

  /* Update for Delay: '<S267>/Delay' */
  app_DW.icLoad_m2 = false;

  /* Update for Delay: '<S279>/Delay' */
  app_DW.icLoad_fy = false;
  app_DW.Delay_DSTATE_a5 = app_B.StrgWhlAngGrd_g;
}

/* Model initialize function */
void app_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(app_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &app_B), 0,
                sizeof(B_app_T));

  /* exported global signals */
  ChLKACtrlSts = 0.0;
  ChLKARespToq = 0.0;
  DrvrStrgDlvrdToq = 0.0;
  StrgCustSetngDspCmd = 0.0;
  LftStrLght_On = 0.0;
  RghtStrLght_On = 0.0;
  BrkPdlDrvrAppdPrs = 0.0;
  TJAICASwReq = 0.0;
  StrgWhlAngGrd = 0.0;
  StrgWhlAng = 0.0;
  CCSwStsCanclSwA = 0.0;
  CCSwStsDistDecSw = 0.0;
  CCSwStsDisIncSw = 0.0;
  CCSwStsOnSw = 0.0;
  CCSwStsRsmSw = 0.0;
  CCSwStsSetSw = 0.0;
  VehCP_T_ChLKARespToq_sg = 0.0F;
  VehCP_T_DrvrStrgDlvrdToq_sg = 0.0F;
  PTAccToqReqResp = 0.0F;
  VehDynYawRate = 0.0F;
  AccelActuPos = 0.0F;
  ACCDetObjExistPrblty = 0.0F;
  ACCDetObjLatRltvDist = 0.0F;
  ACCDetObjLongRltvDist = 0.0F;
  ACCDetObjLongRltvSpd = 0.0F;
  VehCP_p_VrkPdlDrvrAppdPrs_sg = 0.0F;
  VehSpdAvgDrvn = 0.0F;
  VehSpdAvgNonDrvn = 0.0F;
  VSELatAcc = 0.0F;
  VSELongAcc = 0.0F;
  ChACCAccReqResp = 0.0F;
  APP_IN_yr_VehDynYawRate_sg = 0.0F;
  VehCP_yr_VehDynYawRate_sg = 0.0F;
  VehCP_prec_VehAccelPos_sg = 0.0F;
  VehCP_is_ACCDetObjExistProb_sg = 0.0F;
  VehCP_d_ACCDetObjLatRltvDist_sg = 0.0F;
  VehCP_d_ACCDetObjLongRltvDist_sg = 0.0F;
  VehCP_v_ACCDetObjLongRltvSpd_sg = 0.0F;
  VehCP_angD_StrgWhlAng_sg = 0.0F;
  VehCP_V_VehSpdAvgDrvn_sg = 0.0F;
  VehCP_V_ClstDspdVehSpd_sg = 0.0F;
  VehCP_W_StrgWhlAngGrd_sg = 0.0F;
  VehCP_V_VehSpdAvgNonDrvn_sg = 0.0F;
  VehCP_a_VSELatAcc_sg = 0.0F;
  VehCP_a_VSELongAcc_sg = 0.0F;
  YRC_angD_ReqStrgWhlAng_sg = 0.0F;
  LKA_ReqToq = 0.0F;
  ClstDspdVehSpd = 0U;
  VehCP_n_ChLKACtrlSts_u8 = 0U;
  VehCP_n_StrgCustSetngDspCmd_u8 = 0U;
  AccelOvrd = 0U;
  AirBagDplHS = 0U;
  DrvrSbltAtcHS = 0U;
  ABSActvSts = 0U;
  EnRunSts = 0U;
  BntOpenSts = 0U;
  DipdBeamLghtOn = 0U;
  DrvrDoorOpenSts = 0U;
  FrtPsngDoorOpenSts = 0U;
  MainBeamLghtOn = 0U;
  RLDoorOpenSts = 0U;
  RRDoorOpenSts = 0U;
  ACCDetObjID = 0U;
  LDWLKASwReq = 0U;
  RstrFctryDeftsReq = 0U;
  AEBSwReq = 0U;
  FCWSnstvLvlReq = 0U;
  FCWSwReq = 0U;
  LDWAdoWarnngReq = 0U;
  LDWLKAHapticWrnngReq = 0U;
  LDWSnstvtLvlReq = 0U;
  VehCP_n_TJAICASwReq_u8 = 0U;
  FrtWiperSwSts = 0U;
  CCSwStsSpdDecSw = 0U;
  CCSwStsSpdIncSw = 0U;
  CCSwStsSwDataIntgty = 0U;
  TrEstdGear = 0U;
  TrShftLvrPos = 0U;
  VehCP_LeftBSD_Warnning_u8 = 0U;
  VehCP_RightBSD_Warnning_u8 = 0U;
  VehCP_BSDStatus_u8 = 0U;
  VehCP_n_LDWLKASwReq_u8 = 0U;
  VehCP_idx_ACCDetObjID_u8 = 0U;
  VehCP_n_RstrFctryDeftsReq_u8 = 0U;
  VehCP_n_LDWAdoWarnngReq_u8 = 0U;
  VehCP_n_LDWLKAHapticWrnngReq_u8 = 0U;
  VehCP_n_FrtWiperSwSts_u8 = 0U;
  VehCP_n_LDWSnstvtLvlReq_u8 = 0U;
  VehCP_n_TrEstdGear_u8 = 0U;
  VehCP_n_TrShftLvrPos_u8 = 0U;
  LKA_ReqToqSts = 0U;

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      FVCM_EPS_Frame[i] = 0U;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      FVCM_HMI_Frame[i] = 0U;
    }
  }

  VehCP_is_VehDataValid_bl = false;
  VehCP_is_ABSActv_bl = false;
  VehCP_is_EngRun_bl = false;
  VehCP_is_DrvrSbltActv_bl = false;
  VehCP_is_BntOpen_bl = false;
  VehCP_is_DipdBeamLghtOn_bl = false;
  VehCP_is_DrvrDoorOpen_bl = false;
  VehCP_is_FrtPsngDoorOpen_bl = false;
  VehCP_is_MainBeamLghtOn_bl = false;
  VehCP_is_RLDoorOpen_bl = false;
  VehCP_is_RRDoorOpen_bl = false;
  VehCP_is_CCSwStsCancl_bl = false;
  VehCP_is_CCSwStsDistDec_bl = false;
  VehCP_is_CCSwStsDisInc_bl = false;
  VehCP_is_CCSwStsOn_bl = false;
  VehCP_is_CCSwStsRsm_bl = false;
  VehCP_is_CCSwStsSet_bl = false;
  VehCP_is_CCSwStsSpdDec_bl = false;
  VehCP_is_CCSwStsSpdInc_bl = false;
  Arb_is_LatCtrlActv_bl = false;
  VehCP_is_RghtStrgLmpOn_bl = false;
  VehCP_is_LftStrgLmpOn_bl = false;

  /* states (dwork) */
  (void) memset((void *)&app_DW, 0,
                sizeof(DW_app_T));

  {
    uint8_T rtb_out_cond_bj;
    boolean_T rtb_out_cond_l;

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
    app_PrevZCX.Delay_Reset_ZCE_e = POS_ZCSIG;
    app_PrevZCX.Delay_Reset_ZCE_b = UNINITIALIZED_ZCSIG;
    app_PrevZCX.Delay_Reset_ZCE_j = POS_ZCSIG;
    app_PrevZCX.Delay_Reset_ZCE_l = POS_ZCSIG;
    app_PrevZCX.Delay_Reset_ZCE_lg = POS_ZCSIG;
    app_PrevZCX.Delay_Reset_ZCE_o = POS_ZCSIG;
    app_PrevZCX.Delay_Reset_ZCE_h = POS_ZCSIG;
    app_PrevZCX.Delay_Reset_ZCE_c = POS_ZCSIG;

    /* InitializeConditions for Delay: '<S24>/Delay9' */
    app_DW.icLoad = true;

    /* InitializeConditions for Delay: '<S24>/Delay8' */
    app_DW.icLoad_p = true;

    /* InitializeConditions for Delay: '<S24>/Delay7' */
    app_DW.icLoad_a = true;

    /* InitializeConditions for Delay: '<S24>/Delay6' */
    app_DW.icLoad_d = true;

    /* InitializeConditions for Delay: '<S24>/Delay5' */
    app_DW.icLoad_g = true;

    /* InitializeConditions for Delay: '<S24>/Delay' */
    app_DW.icLoad_pt = true;

    /* InitializeConditions for Delay: '<S24>/Delay1' */
    app_DW.icLoad_n = true;

    /* InitializeConditions for Delay: '<S24>/Delay2' */
    app_DW.icLoad_b = true;

    /* InitializeConditions for Delay: '<S24>/Delay3' */
    app_DW.icLoad_gw = true;

    /* InitializeConditions for Delay: '<S23>/Delay' */
    app_DW.icLoad_n4 = true;

    /* InitializeConditions for Delay: '<S23>/Delay1' */
    app_DW.icLoad_e = true;

    /* InitializeConditions for Delay: '<S23>/Delay2' */
    app_DW.icLoad_dc = true;

    /* InitializeConditions for Delay: '<S23>/Delay3' */
    app_DW.icLoad_l = true;

    /* InitializeConditions for Delay: '<S33>/Delay' */
    app_DW.icLoad_m = true;

    /* InitializeConditions for Delay: '<S29>/Delay' */
    app_DW.icLoad_f = true;

    /* InitializeConditions for Delay: '<S30>/Delay' */
    app_DW.icLoad_c = true;

    /* InitializeConditions for Delay: '<S31>/Delay' */
    app_DW.icLoad_k = true;

    /* InitializeConditions for Delay: '<S32>/Delay' */
    app_DW.icLoad_cn = true;

    /* InitializeConditions for Delay: '<S34>/Delay' */
    app_DW.icLoad_dp = true;

    /* InitializeConditions for Delay: '<S35>/Delay' */
    app_DW.icLoad_nt = true;

    /* InitializeConditions for Delay: '<S36>/Delay' */
    app_DW.icLoad_dv = true;

    /* InitializeConditions for Delay: '<S37>/Delay' */
    app_DW.icLoad_fg = true;

    /* InitializeConditions for Delay: '<S117>/Delay' */
    app_DW.icLoad_mq = true;

    /* InitializeConditions for Delay: '<S194>/Delay' */
    app_DW.icLoad_i = true;

    /* InitializeConditions for Delay: '<S288>/Delay' */
    app_DW.icLoad_gn = true;

    /* InitializeConditions for Delay: '<S286>/Delay' */
    app_DW.icLoad_j = true;

    /* InitializeConditions for Delay: '<S296>/Delay' */
    app_DW.icLoad_mg = true;

    /* InitializeConditions for Delay: '<S316>/Delay' */
    app_DW.icLoad_px = true;

    /* InitializeConditions for Delay: '<S255>/Delay' */
    app_DW.icLoad_jh = true;

    /* InitializeConditions for Delay: '<S267>/Delay' */
    app_DW.icLoad_m2 = true;

    /* InitializeConditions for Delay: '<S279>/Delay' */
    app_DW.icLoad_fy = true;

    /* SystemInitialize for Chart: '<S4>/Chart3' */
    app_Chart3_Init(&VehCP_is_LftStrgLmpOn_bl, &app_DW.sf_Chart3);

    /* SystemInitialize for Chart: '<S4>/Chart4' */
    app_Chart3_Init(&VehCP_is_RghtStrgLmpOn_bl, &app_DW.sf_Chart4);

    /* SystemInitialize for Chart: '<S38>/Chart' */
    app_Chart_Init(&app_B.count_d);

    /* SystemInitialize for Chart: '<S95>/Chart3' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart3_c);

    /* SystemInitialize for Chart: '<S95>/Chart2' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart2_a);

    /* SystemInitialize for Chart: '<S95>/Chart1' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart1_h);

    /* SystemInitialize for Chart: '<S96>/Chart7' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart7);

    /* SystemInitialize for Chart: '<S96>/Chart4' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart4_i);

    /* SystemInitialize for Chart: '<S96>/Chart5' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart5);

    /* SystemInitialize for Chart: '<S96>/Chart13' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart13);

    /* SystemInitialize for Chart: '<S94>/Chart1' */
    app_DW.is_OFF = 0;
    app_DW.is_active_c52_app = 0U;
    app_DW.is_c52_app = 0;
    app_DW.local_count = 0U;
    app_DW.tm_count = 0U;

    /* SystemInitialize for Chart: '<S39>/Chart' */
    app_DW.is_active_c51_app = 0U;
    app_DW.is_c51_app = 0;

    /* SystemInitialize for Chart: '<S119>/Chart7' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart7_o);

    /* SystemInitialize for Chart: '<S119>/Chart1' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart1_c);

    /* SystemInitialize for Chart: '<S119>/Chart2' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart2_n);

    /* SystemInitialize for Chart: '<S119>/Chart' */
    app_DW.is_active_c6_app = 0U;
    app_DW.local_time_h = 0.0F;

    /* SystemInitialize for Chart: '<S112>/Planning_Scheduler' */
    app_DW.is_active_c12_app = 0U;
    app_B.plan_time = 0.0F;

    /* SystemInitialize for Chart: '<S113>/Chart' */
    app_B.count = 0U;

    /* SystemInitialize for Enabled SubSystem: '<S187>/mpc_controller2' */
    /* InitializeConditions for Delay: '<S190>/Delay' */
    app_DW.icLoad_pb = true;

    /* End of SystemInitialize for SubSystem: '<S187>/mpc_controller2' */

    /* SystemInitialize for Chart: '<S193>/Chart' */
    app_Chart_o_Init(&app_B.ramp_cof_c, &app_DW.sf_Chart_d);

    /* SystemInitialize for IfAction SubSystem: '<S113>/Path_Tracking1' */
    /* Start for DataStoreMemory: '<S238>/Data Store Memory' */
    app_DW.P[0] = 1.0F;
    app_DW.P[1] = 0.0F;
    app_DW.P[2] = 0.0F;
    app_DW.P[3] = 1.0F;

    /* InitializeConditions for Delay: '<S237>/Delay' */
    app_DW.icLoad_g5 = true;

    /* InitializeConditions for Delay: '<S221>/Delay' */
    app_DW.icLoad_gh = true;

    /* InitializeConditions for Delay: '<S240>/Delay' */
    app_DW.icLoad_g5p = true;

    /* InitializeConditions for Delay: '<S239>/Delay' */
    app_DW.icLoad_fgq = true;

    /* SystemInitialize for Chart: '<S216>/Chart' */
    app_Chart_o_Init(&app_B.ramp_cof_md, &app_DW.sf_Chart_fs);

    /* End of SystemInitialize for SubSystem: '<S113>/Path_Tracking1' */

    /* SystemInitialize for Chart: '<S282>/Chart' */
    app_Chart_o_Init(&app_B.ramp_cof_i, &app_DW.sf_Chart_o);

    /* SystemInitialize for Chart: '<S292>/Chart' */
    app_Chart_o_Init(&app_B.ramp_cof, &app_DW.sf_Chart_b5);

    /* SystemInitialize for Chart: '<S251>/Chart' */
    app_Chart_o_Init(&app_B.ramp_cof_b, &app_DW.sf_Chart_pw);

    /* SystemInitialize for Chart: '<S242>/Chart1' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart1_j);

    /* SystemInitialize for Chart: '<S242>/Chart2' */
    app_DW.is_active_c16_app = 0U;
    app_DW.is_c16_app = 0;
    app_DW.local_time = 0.0F;

    /* SystemInitialize for Chart: '<S242>/OvrdDely' */
    app_DW.is_active_c17_app = 0U;
    app_DW.is_c17_app = 0;
    app_B.VRD_indx_DrvrOvrrdDlyCof_sg = 0.0F;

    /* SystemInitialize for Chart: '<S245>/Chart' */
    app_DW.is_active_c19_app = 0U;
    app_DW.is_c19_app = 0;
    app_B.ramp_cof_m = 0.0F;

    /* SystemInitialize for Chart: '<S42>/Chart4' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart4_a);

    /* SystemInitialize for Chart: '<S73>/Chart' */
    app_Chart_a_Init(app_B.msg_j);

    /* SystemInitialize for Chart: '<S77>/Chart' */
    app_Chart_c_Init(app_B.msg);

    /* SystemInitialize for Chart: '<S74>/Chart' */
    memset(&app_B.msg_ct[0], 0, sizeof(uint8_T) << 6U);

    /* SystemInitialize for Chart: '<S75>/Chart' */
    app_Chart_c_Init(app_B.msg_c);

    /* SystemInitialize for Chart: '<S76>/Chart' */
    app_Chart_c_Init(app_B.msg_e);

    /* SystemInitialize for Chart: '<S43>/Chart' */
    app_Chart_Init(&app_B.count_n);

    /* SystemInitialize for Chart: '<S44>/Chart1' */
    app_Chart1_Init(&rtb_out_cond_bj);

    /* SystemInitialize for Chart: '<S44>/Chart2' */
    app_Chart1_Init(&rtb_out_cond_bj);

    /* SystemInitialize for Chart: '<S59>/Chart' */
    app_Chart_a_Init(app_B.msg_i);

    /* SystemInitialize for Chart: '<S60>/Chart' */
    app_Chart_c_Init(app_B.msg_p);

    /* SystemInitialize for Chart: '<S61>/Chart' */
    app_Chart_c_Init(app_B.msg_em);

    /* SystemInitialize for Chart: '<S62>/Chart' */
    app_Chart_c_Init(app_B.msg_n);

    /* SystemInitialize for Chart: '<S96>/Chart6' */
    app_Chart4_Init(&rtb_out_cond_l, &app_DW.sf_Chart6);
  }
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
