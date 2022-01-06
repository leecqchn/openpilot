/*
 * File: SAC.c
 *
 * Code generated for Simulink model 'SAC'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Dec  1 13:08:15 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-A
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SAC.h"
#include "SAC_private.h"

/* Named constants for Chart: '<S2>/Chart1' */
#define SAC_IN_OFF                     ((uint8_T)1U)
#define SAC_IN_ON                      ((uint8_T)2U)

/* Named constants for Chart: '<S2>/OvrdDely' */
#define SAC_IN_Delay                   ((uint8_T)1U)
#define SAC_IN_Norm                    ((uint8_T)2U)

/* Named constants for Chart: '<S11>/Chart' */
#define SAC_IN_OFF_Count               ((uint8_T)2U)
#define SAC_IN_ON_Count                ((uint8_T)4U)
#define SAC_IN_ON_o                    ((uint8_T)3U)

/* Block signals (default storage) */
B_SAC_T SAC_B;

/* Block states (default storage) */
DW_SAC_T SAC_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_SAC_T SAC_PrevZCX;

/* Real-time model */
static RT_MODEL_SAC_T SAC_M_;
RT_MODEL_SAC_T *const SAC_M = &SAC_M_;

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

real32_T look2_iflf_binlxpw(real32_T u0, real32_T u1, const real32_T bp0[],
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
     Overflow mode: 'portable wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  yL_0d0 = table[bpIdx];
  yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
  bpIdx += stride;
  yL_0d1 = table[bpIdx];
  return (((table[bpIdx + 1U] - yL_0d1) * fractions[0U] + yL_0d1) - yL_0d0) *
    frac + yL_0d0;
}

/* Model step function */
void SAC_step(real32_T arg_SAC_IN_angD_ReqStrgWhlAng_sg, boolean_T
              arg_SAC_IN_is_LatCtrlActv_bl, real32_T
              arg_SAC_IN_V_VehSpdAvgDrvn_sg, real32_T
              arg_SAC_IN_angD_StrgWhlAng_sg, real32_T
              arg_SAC_IN_WD_StrgWhlAngGrd_sg, real32_T
              arg_SAC_IN_T_DrvrStrgDlvrdToq_sg, uint8_T
              arg_SAC_IN_idx_EpsDspCmd_u8, real32_T arg_SAC_IN_LutTbl_VSpd_X[15],
              real32_T arg_SAC_IN_LutTbl_KpVehSpd_Y[15], real32_T
              arg_SAC_IN_LutTbl_DesAng_X[15], real32_T
              arg_SAC_IN_LutTbl_KpDesAng_Y[15], real32_T
              arg_SAC_IN_LutTbl_KiVehSpd_Y[15], real32_T
              arg_SAC_IN_LutTbl_KiDesAng_Y[15], real32_T
              *arg_SAC_OUT_T_LKAReqToq_sg, uint8_T
              *arg_SAC_OUT_idx_LKAReqToqSts_u8)
{
  /* local block i/o variables */
  real32_T rtb_LookupTableDynamic2;
  int32_T rtb_Switch2_0;
  real32_T rtb_Add1_o;
  real32_T rtb_Product_dz;
  real32_T rtb_Saturation;
  real32_T rtb_Saturation_n;
  real32_T rtb_Saturation_o;
  real32_T rtb_Sum;
  real32_T rtb_Switch_k_idx_0;
  real32_T rtb_Switch_k_idx_2;
  real32_T rtb_Switch_k_idx_3;
  real32_T rtb_uDLookupTable1;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_out_cond_e;

  /* Lookup_n-D: '<S12>/1-D Lookup Table1' incorporates:
   *  Inport: '<Root>/SAC_IN_V_VehSpdAvgDrvn_sg'
   */
  rtb_uDLookupTable1 = look1_iflf_binlxpw(arg_SAC_IN_V_VehSpdAvgDrvn_sg,
    SAC_ConstP.pooled2, SAC_ConstP.uDLookupTable1_tableData_m, 14U);

  /* Switch: '<S11>/Switch' incorporates:
   *  Delay: '<S11>/Delay'
   *  Inport: '<Root>/SAC_IN_angD_ReqStrgWhlAng_sg'
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (arg_SAC_IN_is_LatCtrlActv_bl) {
    SAC_DW.Delay_DSTATE = arg_SAC_IN_angD_ReqStrgWhlAng_sg;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Chart: '<S11>/Chart' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (SAC_DW.is_active_c13_SAC == 0U) {
    SAC_DW.is_active_c13_SAC = 1U;
    SAC_DW.is_c13_SAC = SAC_IN_OFF;
    SAC_B.ramp_cof_h = 0.0F;
  } else {
    switch (SAC_DW.is_c13_SAC) {
     case SAC_IN_OFF:
      if (arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_DW.is_c13_SAC = SAC_IN_ON_Count;
        SAC_B.ramp_cof_h = 0.0F;
      }
      break;

     case SAC_IN_OFF_Count:
      if ((!arg_SAC_IN_is_LatCtrlActv_bl) && (SAC_B.ramp_cof_h <= 0.01F)) {
        SAC_DW.is_c13_SAC = SAC_IN_OFF;
        SAC_B.ramp_cof_h = 0.0F;
      } else if (arg_SAC_IN_is_LatCtrlActv_bl && (SAC_B.ramp_cof_h >= 0.99F)) {
        SAC_DW.is_c13_SAC = SAC_IN_ON_o;
        SAC_B.ramp_cof_h = 1.0F;
      } else if (arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_B.ramp_cof_h += 0.02F;
      } else {
        SAC_B.ramp_cof_h -= 0.05F;
      }
      break;

     case SAC_IN_ON_o:
      if (!arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_DW.is_c13_SAC = SAC_IN_OFF_Count;
        SAC_B.ramp_cof_h = 1.0F;
      }
      break;

     default:
      /* case IN_ON_Count: */
      if (arg_SAC_IN_is_LatCtrlActv_bl && (SAC_B.ramp_cof_h >= 0.99F)) {
        SAC_DW.is_c13_SAC = SAC_IN_ON_o;
        SAC_B.ramp_cof_h = 1.0F;
      } else if ((!arg_SAC_IN_is_LatCtrlActv_bl) && (SAC_B.ramp_cof_h <= 0.01F))
      {
        SAC_DW.is_c13_SAC = SAC_IN_OFF;
        SAC_B.ramp_cof_h = 0.0F;
      } else if (arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_B.ramp_cof_h += 0.02F;
      } else {
        SAC_B.ramp_cof_h -= 0.05F;
      }
      break;
    }
  }

  /* End of Chart: '<S11>/Chart' */

  /* Saturate: '<S11>/Saturation1' */
  if (SAC_B.ramp_cof_h > 1.0F) {
    rtb_Saturation_n = 1.0F;
  } else if (SAC_B.ramp_cof_h < 0.0F) {
    rtb_Saturation_n = 0.0F;
  } else {
    rtb_Saturation_n = SAC_B.ramp_cof_h;
  }

  /* End of Saturate: '<S11>/Saturation1' */

  /* Sum: '<S11>/Sum' incorporates:
   *  Constant: '<S11>/Constant'
   *  Delay: '<S11>/Delay'
   *  Inport: '<Root>/SAC_IN_angD_StrgWhlAng_sg'
   *  Product: '<S11>/Product'
   *  Product: '<S11>/Product1'
   *  Sum: '<S11>/Add'
   *  Sum: '<S11>/Subtract'
   */
  rtb_Sum = ((1.0F - rtb_Saturation_n) * arg_SAC_IN_angD_StrgWhlAng_sg +
             SAC_DW.Delay_DSTATE * rtb_Saturation_n) -
    arg_SAC_IN_angD_StrgWhlAng_sg;

  /* Delay: '<S15>/Delay' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (arg_SAC_IN_is_LatCtrlActv_bl && (SAC_PrevZCX.Delay_Reset_ZCE != 1)) {
    SAC_DW.icLoad = 1U;
  }

  SAC_PrevZCX.Delay_Reset_ZCE = arg_SAC_IN_is_LatCtrlActv_bl;
  if (SAC_DW.icLoad != 0) {
    SAC_DW.Delay_DSTATE_h = rtb_Sum;
  }

  /* Switch: '<S15>/Switch' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (arg_SAC_IN_is_LatCtrlActv_bl) {
    /* Sum: '<S15>/Add1' incorporates:
     *  Delay: '<S15>/Delay'
     */
    rtb_Add1_o = SAC_ConstB.Product + SAC_DW.Delay_DSTATE_h;

    /* Switch: '<S16>/Switch2' incorporates:
     *  RelationalOperator: '<S16>/LowerRelop1'
     */
    if (rtb_Sum > rtb_Add1_o) {
      rtb_Sum = rtb_Add1_o;
    } else {
      /* Sum: '<S15>/Add2' incorporates:
       *  Delay: '<S15>/Delay'
       */
      rtb_Add1_o = SAC_DW.Delay_DSTATE_h + SAC_ConstB.Product1;

      /* Switch: '<S16>/Switch' incorporates:
       *  RelationalOperator: '<S16>/UpperRelop'
       */
      if (rtb_Sum < rtb_Add1_o) {
        rtb_Sum = rtb_Add1_o;
      }

      /* End of Switch: '<S16>/Switch' */
    }

    /* End of Switch: '<S16>/Switch2' */
  }

  /* End of Switch: '<S15>/Switch' */

  /* Sum: '<S12>/Subtract' incorporates:
   *  Gain: '<S12>/Gain'
   *  Inport: '<Root>/SAC_IN_V_VehSpdAvgDrvn_sg'
   *  Inport: '<Root>/SAC_IN_WD_StrgWhlAngGrd_sg'
   *  Lookup_n-D: '<S12>/1-D Lookup Table'
   *  Product: '<S12>/Product'
   */
  rtb_Add1_o = rtb_Sum * look1_iflf_binlxpw(arg_SAC_IN_V_VehSpdAvgDrvn_sg,
    SAC_ConstP.pooled2, SAC_ConstP.uDLookupTable_tableData_c, 14U) - 0.0F *
    arg_SAC_IN_WD_StrgWhlAngGrd_sg;

  /* Switch: '<S17>/Switch2' incorporates:
   *  RelationalOperator: '<S17>/LowerRelop1'
   *  RelationalOperator: '<S17>/UpperRelop'
   *  Switch: '<S17>/Switch'
   *  UnaryMinus: '<S12>/Unary Minus'
   */
  if (rtb_Add1_o > rtb_uDLookupTable1) {
    rtb_Add1_o = rtb_uDLookupTable1;
  } else {
    if (rtb_Add1_o < -rtb_uDLookupTable1) {
      /* Switch: '<S17>/Switch' incorporates:
       *  UnaryMinus: '<S12>/Unary Minus'
       */
      rtb_Add1_o = -rtb_uDLookupTable1;
    }
  }

  /* End of Switch: '<S17>/Switch2' */

  /* Switch: '<S19>/Switch' incorporates:
   *  Abs: '<S19>/Abs'
   *  Abs: '<S19>/Abs6'
   *  Abs: '<S19>/Abs8'
   *  Constant: '<S38>/Constant'
   *  Gain: '<S19>/Normal2comft'
   *  Inport: '<Root>/SAC_IN_V_VehSpdAvgDrvn_sg'
   *  Inport: '<Root>/SAC_IN_idx_EpsDspCmd_u8'
   *  Lookup_n-D: '<S19>/1-D Lookup Table10'
   *  Lookup_n-D: '<S19>/1-D Lookup Table11'
   *  Lookup_n-D: '<S19>/1-D Lookup Table15'
   *  Lookup_n-D: '<S19>/1-D Lookup Table17'
   *  Lookup_n-D: '<S19>/1-D Lookup Table18'
   *  Lookup_n-D: '<S19>/1-D Lookup Table2'
   *  Lookup_n-D: '<S19>/1-D Lookup Table5'
   *  Lookup_n-D: '<S19>/1-D Lookup Table7'
   *  Lookup_n-D: '<S19>/2-D Lookup Table'
   *  Product: '<S19>/Product2'
   *  Product: '<S19>/Product3'
   *  RelationalOperator: '<S38>/Compare'
   */
  if (arg_SAC_IN_idx_EpsDspCmd_u8 != 1) {
    /* Abs: '<S19>/Abs2' incorporates:
     *  Abs: '<S19>/Abs'
     *  Inport: '<Root>/SAC_IN_angD_ReqStrgWhlAng_sg'
     */
    rtb_Saturation_n = fabsf(arg_SAC_IN_angD_ReqStrgWhlAng_sg);

    /* Abs: '<S19>/Abs2' */
    rtb_uDLookupTable1 = rtb_Saturation_n;

    /* S-Function (sfix_look1_dyn): '<S19>/Lookup Table Dynamic1' incorporates:
     *  Inport: '<Root>/SAC_IN_LutTbl_DesAng_X'
     *  Inport: '<Root>/SAC_IN_LutTbl_KpDesAng_Y'
     */
    /* Dynamic Look-Up Table Block: '<S19>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(rtb_LookupTableDynamic2),
      &arg_SAC_IN_LutTbl_KpDesAng_Y[0], rtb_uDLookupTable1,
      &arg_SAC_IN_LutTbl_DesAng_X[0], 14U);

    /* S-Function (sfix_look1_dyn): '<S19>/Lookup Table Dynamic' incorporates:
     *  Inport: '<Root>/SAC_IN_LutTbl_KpVehSpd_Y'
     *  Inport: '<Root>/SAC_IN_LutTbl_VSpd_X'
     *  Inport: '<Root>/SAC_IN_V_VehSpdAvgDrvn_sg'
     */
    /* Dynamic Look-Up Table Block: '<S19>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(rtb_Switch_k_idx_3),
      &arg_SAC_IN_LutTbl_KpVehSpd_Y[0], arg_SAC_IN_V_VehSpdAvgDrvn_sg,
      &arg_SAC_IN_LutTbl_VSpd_X[0], 14U);

    /* Product: '<S19>/Product' */
    rtb_Switch_k_idx_0 = rtb_Switch_k_idx_3 * rtb_LookupTableDynamic2;

    /* S-Function (sfix_look1_dyn): '<S19>/Lookup Table Dynamic3' incorporates:
     *  Inport: '<Root>/SAC_IN_LutTbl_DesAng_X'
     *  Inport: '<Root>/SAC_IN_LutTbl_KiDesAng_Y'
     */
    /* Dynamic Look-Up Table Block: '<S19>/Lookup Table Dynamic3'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(rtb_Switch_k_idx_3),
      &arg_SAC_IN_LutTbl_KiDesAng_Y[0], rtb_uDLookupTable1,
      &arg_SAC_IN_LutTbl_DesAng_X[0], 14U);

    /* S-Function (sfix_look1_dyn): '<S19>/Lookup Table Dynamic2' incorporates:
     *  Inport: '<Root>/SAC_IN_LutTbl_KiVehSpd_Y'
     *  Inport: '<Root>/SAC_IN_LutTbl_VSpd_X'
     *  Inport: '<Root>/SAC_IN_V_VehSpdAvgDrvn_sg'
     */
    /* Dynamic Look-Up Table Block: '<S19>/Lookup Table Dynamic2'
     * Input0  Data Type:  Floating Point real32_T
     * Input1  Data Type:  Floating Point real32_T
     * Input2  Data Type:  Floating Point real32_T
     * Output0 Data Type:  Floating Point real32_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real32_T_real32_T( &(rtb_LookupTableDynamic2),
      &arg_SAC_IN_LutTbl_KiVehSpd_Y[0], arg_SAC_IN_V_VehSpdAvgDrvn_sg,
      &arg_SAC_IN_LutTbl_VSpd_X[0], 14U);

    /* Product: '<S19>/Product1' */
    rtb_uDLookupTable1 = rtb_LookupTableDynamic2 * rtb_Switch_k_idx_3;

    /* Abs: '<S19>/Abs' */
    rtb_Switch_k_idx_3 = rtb_Saturation_n;
    rtb_Switch_k_idx_2 = look1_iflf_binlxpw(arg_SAC_IN_V_VehSpdAvgDrvn_sg,
      SAC_ConstP.pooled2, SAC_ConstP.pooled1, 14U);
    rtb_Switch_k_idx_3 = look1_iflf_binlxpw(rtb_Switch_k_idx_3,
      SAC_ConstP.pooled4, SAC_ConstP.pooled3, 10U);
  } else {
    /* Abs: '<S19>/Abs6' incorporates:
     *  Abs: '<S19>/Abs7'
     *  Abs: '<S19>/Abs9'
     *  Inport: '<Root>/SAC_IN_angD_ReqStrgWhlAng_sg'
     */
    rtb_Saturation_n = fabsf(arg_SAC_IN_angD_ReqStrgWhlAng_sg);

    /* Abs: '<S19>/Abs8' incorporates:
     *  Abs: '<S19>/Abs5'
     */
    rtb_uDLookupTable1 = fabsf(rtb_Add1_o);
    rtb_Switch_k_idx_0 = look1_iflf_binlxpw(arg_SAC_IN_V_VehSpdAvgDrvn_sg,
      SAC_ConstP.pooled2, SAC_ConstP.uDLookupTable7_tableData, 14U) *
      look1_iflf_binlcpw(rtb_Saturation_n, SAC_ConstP.uDLookupTable18_bp01Data,
                         SAC_ConstP.uDLookupTable18_tableData, 9U) *
      look1_iflf_binlcpw(rtb_uDLookupTable1, SAC_ConstP.uDLookupTable2_bp01Data,
                         SAC_ConstP.uDLookupTable2_tableData, 5U);
    rtb_uDLookupTable1 = look1_iflf_binlxpw(arg_SAC_IN_V_VehSpdAvgDrvn_sg,
      SAC_ConstP.pooled2, SAC_ConstP.uDLookupTable10_tableData, 14U) *
      look2_iflf_binlxpw(rtb_Saturation_n, rtb_uDLookupTable1,
                         SAC_ConstP.uDLookupTable_bp01Data,
                         SAC_ConstP.uDLookupTable_bp02Data,
                         SAC_ConstP.uDLookupTable_tableData,
                         SAC_ConstP.uDLookupTable_maxIndex, 7U);
    rtb_Switch_k_idx_2 = look1_iflf_binlxpw(arg_SAC_IN_V_VehSpdAvgDrvn_sg,
      SAC_ConstP.pooled2, SAC_ConstP.pooled1, 14U);
    rtb_Switch_k_idx_3 = 0.75F * look1_iflf_binlxpw(rtb_Saturation_n,
      SAC_ConstP.pooled4, SAC_ConstP.pooled3, 10U);
  }

  /* End of Switch: '<S19>/Switch' */

  /* Gain: '<S22>/Gain1' incorporates:
   *  Inport: '<Root>/SAC_IN_V_VehSpdAvgDrvn_sg'
   */
  rtb_Saturation_n = 0.277777791F * arg_SAC_IN_V_VehSpdAvgDrvn_sg;

  /* Product: '<S22>/Product1' incorporates:
   *  Inport: '<Root>/SAC_IN_angD_ReqStrgWhlAng_sg'
   */
  rtb_Saturation_n = rtb_Saturation_n * rtb_Saturation_n *
    arg_SAC_IN_angD_ReqStrgWhlAng_sg;

  /* Product: '<S22>/Product2' */
  rtb_Saturation_n *= rtb_Switch_k_idx_3;

  /* Saturate: '<S22>/Saturation' */
  if (rtb_Saturation_n > 2.5F) {
    rtb_Saturation_n = 2.5F;
  } else {
    if (rtb_Saturation_n < -2.5F) {
      rtb_Saturation_n = -2.5F;
    }
  }

  /* End of Saturate: '<S22>/Saturation' */

  /* Lookup_n-D: '<S24>/1-D Lookup Table' incorporates:
   *  Inport: '<Root>/SAC_IN_V_VehSpdAvgDrvn_sg'
   */
  rtb_Switch_k_idx_3 = look1_iflf_binlxpw(arg_SAC_IN_V_VehSpdAvgDrvn_sg,
    SAC_ConstP.uDLookupTable_bp01Data_b, SAC_ConstP.uDLookupTable_tableData_a,
    5U);

  /* Product: '<S24>/Product' */
  rtb_Product_dz = rtb_Add1_o * rtb_Switch_k_idx_0;

  /* Abs: '<S24>/Abs' incorporates:
   *  Abs: '<S18>/Abs'
   *  Inport: '<Root>/SAC_IN_T_DrvrStrgDlvrdToq_sg'
   *  Switch: '<S23>/Switch'
   */
  rtb_Switch_k_idx_0 = fabsf(arg_SAC_IN_T_DrvrStrgDlvrdToq_sg);

  /* Lookup_n-D: '<S24>/1-D Lookup Table3' incorporates:
   *  Abs: '<S24>/Abs'
   */
  rtb_Saturation_o = look1_iflf_binlxpw(rtb_Switch_k_idx_0,
    SAC_ConstP.uDLookupTable3_bp01Data, SAC_ConstP.uDLookupTable3_tableData, 5U);

  /* Product: '<S21>/Divide' incorporates:
   *  Constant: '<S21>/Constant'
   *  Sum: '<S21>/Subtract'
   *  UnitDelay: '<S21>/Unit Delay'
   */
  rtb_Saturation = (rtb_Add1_o - SAC_DW.UnitDelay_DSTATE) / 0.02F;

  /* Saturate: '<S21>/Saturation' */
  if (rtb_Saturation > 10.0F) {
    rtb_Saturation = 10.0F;
  } else {
    if (rtb_Saturation < -10.0F) {
      rtb_Saturation = -10.0F;
    }
  }

  /* End of Saturate: '<S21>/Saturation' */

  /* Delay: '<S27>/Delay' */
  if (SAC_DW.icLoad_c != 0) {
    /* Sum: '<S27>/Sum' */
    SAC_DW.Delay_DSTATE_d = rtb_Saturation;
  }

  /* Sum: '<S27>/Sum' incorporates:
   *  Delay: '<S27>/Delay'
   *  Product: '<S27>/Product'
   *  Product: '<S27>/Product1'
   */
  SAC_DW.Delay_DSTATE_d = SAC_DW.Delay_DSTATE_d * SAC_ConstB.alpha +
    SAC_ConstB.ualpha * rtb_Saturation;

  /* Product: '<S21>/Product' */
  rtb_Switch_k_idx_2 *= SAC_DW.Delay_DSTATE_d;

  /* Switch: '<S23>/Switch' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (arg_SAC_IN_is_LatCtrlActv_bl) {
    /* Switch: '<S23>/Switch3' incorporates:
     *  Constant: '<S23>/Constant4'
     *  Constant: '<S23>/Constant5'
     *  Constant: '<S34>/Constant'
     *  Delay: '<S18>/Delay'
     *  Product: '<S23>/Product1'
     *  RelationalOperator: '<S34>/Compare'
     */
    if (rtb_Add1_o * SAC_DW.Delay_DSTATE_c >= 0.0F) {
      rtb_Switch2_0 = 1;
    } else {
      rtb_Switch2_0 = 3;
    }

    /* End of Switch: '<S23>/Switch3' */

    /* Sum: '<S23>/Add' incorporates:
     *  Constant: '<S23>/Constant'
     *  Delay: '<S18>/Delay'
     *  Product: '<S23>/Product'
     *  Product: '<S23>/Product2'
     */
    rtb_uDLookupTable1 = (real32_T)(rtb_uDLookupTable1 * (real32_T)rtb_Switch2_0
      * rtb_Add1_o * 0.02) + SAC_DW.Delay_DSTATE_c;

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S20>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  Constant: '<S33>/Constant'
     *  Delay: '<S18>/Delay1'
     *  Logic: '<S23>/Logical Operator'
     *  Logic: '<S23>/Logical Operator1'
     *  Logic: '<S23>/Logical Operator2'
     *  Logic: '<S23>/Logical Operator3'
     *  Logic: '<S23>/Logical Operator4'
     *  Logic: '<S23>/Logical Operator5'
     *  Logic: '<S23>/Logical Operator6'
     *  RelationalOperator: '<S20>/Compare'
     *  RelationalOperator: '<S28>/Compare'
     *  RelationalOperator: '<S29>/Compare'
     *  RelationalOperator: '<S30>/Compare'
     *  RelationalOperator: '<S31>/Compare'
     *  RelationalOperator: '<S32>/Compare'
     *  RelationalOperator: '<S33>/Compare'
     */
    if ((!(rtb_Switch_k_idx_0 >= 1.0F)) && (((rtb_Add1_o >= 0.0F) &&
          ((SAC_DW.Delay1_DSTATE < 3.0F) || (rtb_uDLookupTable1 < 0.0F))) ||
         ((rtb_Add1_o <= 0.0F) && ((SAC_DW.Delay1_DSTATE > -3.0F) ||
           (rtb_uDLookupTable1 > 0.0F))))) {
      /* Switch: '<S23>/Switch' */
      SAC_DW.Delay_DSTATE_c = rtb_uDLookupTable1;
    }

    /* End of Switch: '<S23>/Switch1' */
  } else {
    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/Constant1'
     */
    SAC_DW.Delay_DSTATE_c = 0.0F;
  }

  /* Switch: '<S35>/Switch2' incorporates:
   *  Constant: '<S23>/Constant2'
   *  RelationalOperator: '<S35>/LowerRelop1'
   *  RelationalOperator: '<S35>/UpperRelop'
   *  Switch: '<S35>/Switch'
   */
  if (SAC_DW.Delay_DSTATE_c > 3.0F) {
    /* Switch: '<S23>/Switch' */
    SAC_DW.Delay_DSTATE_c = 3.0F;
  } else {
    if (SAC_DW.Delay_DSTATE_c < SAC_ConstB.UnaryMinus_g) {
      /* Switch: '<S23>/Switch' incorporates:
       *  Switch: '<S35>/Switch'
       */
      SAC_DW.Delay_DSTATE_c = SAC_ConstB.UnaryMinus_g;
    }
  }

  /* End of Switch: '<S35>/Switch2' */

  /* Switch: '<S36>/Switch2' incorporates:
   *  RelationalOperator: '<S36>/LowerRelop1'
   *  RelationalOperator: '<S36>/UpperRelop'
   *  Switch: '<S36>/Switch'
   *  UnaryMinus: '<S24>/Unary Minus'
   */
  if (rtb_Product_dz > rtb_Switch_k_idx_3) {
    rtb_Product_dz = rtb_Switch_k_idx_3;
  } else {
    if (rtb_Product_dz < -rtb_Switch_k_idx_3) {
      /* Switch: '<S36>/Switch' incorporates:
       *  UnaryMinus: '<S24>/Unary Minus'
       */
      rtb_Product_dz = -rtb_Switch_k_idx_3;
    }
  }

  /* End of Switch: '<S36>/Switch2' */

  /* Switch: '<S26>/Switch2' incorporates:
   *  Constant: '<S21>/Constant1'
   *  RelationalOperator: '<S26>/LowerRelop1'
   *  RelationalOperator: '<S26>/UpperRelop'
   *  Switch: '<S26>/Switch'
   */
  if (rtb_Switch_k_idx_2 > 1.0F) {
    rtb_Switch_k_idx_2 = 1.0F;
  } else {
    if (rtb_Switch_k_idx_2 < SAC_ConstB.UnaryMinus_h) {
      /* Switch: '<S26>/Switch' */
      rtb_Switch_k_idx_2 = SAC_ConstB.UnaryMinus_h;
    }
  }

  /* End of Switch: '<S26>/Switch2' */

  /* Sum: '<S18>/Sum' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S37>/Constant'
   *  Delay: '<S18>/Delay'
   *  Delay: '<S18>/Delay1'
   *  Product: '<S37>/Product'
   *  Product: '<S37>/Product1'
   *  Sum: '<S37>/Add'
   *  Sum: '<S37>/Subtract'
   */
  SAC_DW.Delay1_DSTATE = ((((1.0F - rtb_Saturation_o) * 0.0F + rtb_Product_dz *
    rtb_Saturation_o) + rtb_Saturation_n) + rtb_Switch_k_idx_2) +
    SAC_DW.Delay_DSTATE_c;

  /* RelationalOperator: '<S2>/Relational Operator' incorporates:
   *  Abs: '<S24>/Abs'
   *  Constant: '<S2>/k_VLatC_T_OvrrdDelayToqThd_sg'
   */
  rtb_RelationalOperator = (rtb_Switch_k_idx_0 > 1.0F);

  /* Chart: '<S2>/Chart1' incorporates:
   *  Constant: '<S2>/c_VLatC_MainLoopTime_Sec1'
   *  Constant: '<S2>/c_VLatC_MainLoopTime_Sec2'
   *  Constant: '<S2>/k_VLatC_t_OvrrdDelayRsTm_sg1'
   */
  if (SAC_DW.is_active_c10_SAC == 0U) {
    SAC_DW.is_active_c10_SAC = 1U;
    SAC_DW.is_c10_SAC = SAC_IN_OFF;
    rtb_out_cond_e = false;
    SAC_DW.local_time_b = 0.0F;
  } else if (SAC_DW.is_c10_SAC == 1) {
    rtb_out_cond_e = false;
    if (SAC_DW.local_time_b > 0.6F) {
      SAC_DW.is_c10_SAC = SAC_IN_ON;
      rtb_out_cond_e = true;
      SAC_DW.local_time_b = 0.0F;
    } else if (rtb_RelationalOperator) {
      SAC_DW.local_time_b += 0.02F;
    } else {
      SAC_DW.local_time_b = 0.0F;
    }
  } else {
    /* case IN_ON: */
    rtb_out_cond_e = true;
    if (SAC_DW.local_time_b > 0.02F) {
      SAC_DW.is_c10_SAC = SAC_IN_OFF;
      rtb_out_cond_e = false;
      SAC_DW.local_time_b = 0.0F;
    } else if (!rtb_RelationalOperator) {
      SAC_DW.local_time_b += 0.02F;
    } else {
      SAC_DW.local_time_b = 0.0F;
    }
  }

  /* End of Chart: '<S2>/Chart1' */

  /* Chart: '<S2>/Chart2' incorporates:
   *  Constant: '<S2>/c_VLatC_MainLoopTime_Sec'
   *  Constant: '<S2>/k_VLatC_t_OvrrdDelayRsTm_sg'
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (SAC_DW.is_active_c11_SAC == 0U) {
    SAC_DW.is_active_c11_SAC = 1U;
    SAC_DW.is_c11_SAC = SAC_IN_OFF;
    rtb_RelationalOperator = false;
    SAC_DW.local_time = 0.0F;
  } else if (SAC_DW.is_c11_SAC == 1) {
    rtb_RelationalOperator = false;
    if (SAC_DW.local_time > 2.0F) {
      SAC_DW.is_c11_SAC = SAC_IN_ON;
      rtb_RelationalOperator = true;
      SAC_DW.local_time = 0.0F;
    } else if (arg_SAC_IN_is_LatCtrlActv_bl) {
      SAC_DW.local_time += 0.02F;
    } else {
      SAC_DW.local_time = 0.0F;
    }
  } else {
    /* case IN_ON: */
    rtb_RelationalOperator = true;
    if (SAC_DW.local_time > 0.02F) {
      SAC_DW.is_c11_SAC = SAC_IN_OFF;
      rtb_RelationalOperator = false;
      SAC_DW.local_time = 0.0F;
    } else if (!arg_SAC_IN_is_LatCtrlActv_bl) {
      SAC_DW.local_time += 0.02F;
    } else {
      SAC_DW.local_time = 0.0F;
    }
  }

  /* End of Chart: '<S2>/Chart2' */

  /* Logic: '<S2>/Logical Operator1' */
  rtb_out_cond_e = (rtb_out_cond_e && rtb_RelationalOperator);

  /* Chart: '<S2>/OvrdDely' incorporates:
   *  Constant: '<S2>/k_VLatC_indx_OvrrdDlyInitCof_sg'
   */
  if (SAC_DW.is_active_c12_SAC == 0U) {
    SAC_DW.is_active_c12_SAC = 1U;
    SAC_DW.is_c12_SAC = SAC_IN_Norm;
    SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg = 1.0F;
  } else if (SAC_DW.is_c12_SAC == 1) {
    if (SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg >= 1.0F) {
      SAC_DW.is_c12_SAC = SAC_IN_Norm;
      SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg = 1.0F;
    } else if (!rtb_out_cond_e) {
      SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg += SAC_ConstB.Product4;
    } else {
      SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg = 0.38F;
    }
  } else {
    /* case IN_Norm: */
    if (rtb_out_cond_e) {
      SAC_DW.is_c12_SAC = SAC_IN_Delay;
      SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg = 0.38F;
    }
  }

  /* End of Chart: '<S2>/OvrdDely' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Abs: '<S24>/Abs'
   *  Delay: '<S5>/Delay'
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   *  Lookup_n-D: '<S2>/1-D Lookup Table1'
   *  Product: '<S2>/Product2'
   *  Product: '<S2>/Product3'
   */
  if (arg_SAC_IN_is_LatCtrlActv_bl) {
    /* Switch: '<S25>/Switch2' incorporates:
     *  Constant: '<S18>/Constant'
     *  Delay: '<S18>/Delay1'
     *  RelationalOperator: '<S25>/LowerRelop1'
     *  RelationalOperator: '<S25>/UpperRelop'
     *  Switch: '<S25>/Switch'
     */
    if (SAC_DW.Delay1_DSTATE > 2.988F) {
      rtb_Saturation_n = 2.988F;
    } else if (SAC_DW.Delay1_DSTATE < SAC_ConstB.UnaryMinus_d) {
      /* Switch: '<S25>/Switch' */
      rtb_Saturation_n = SAC_ConstB.UnaryMinus_d;
    } else {
      rtb_Saturation_n = SAC_DW.Delay1_DSTATE;
    }

    /* End of Switch: '<S25>/Switch2' */

    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S2>/Constant5'
     *  Constant: '<S2>/k_VLatC_indx_OvrrdDlyInitCof_sg'
     *  RelationalOperator: '<S10>/LowerRelop1'
     *  RelationalOperator: '<S10>/UpperRelop'
     *  Switch: '<S10>/Switch'
     */
    if (SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg > 1.0F) {
      rtb_uDLookupTable1 = 1.0F;
    } else if (SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg < 0.38F) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S2>/k_VLatC_indx_OvrrdDlyInitCof_sg'
       */
      rtb_uDLookupTable1 = 0.38F;
    } else {
      rtb_uDLookupTable1 = SAC_B.VRD_indx_DrvrOvrrdDlyCof_sg;
    }

    /* End of Switch: '<S10>/Switch2' */
    SAC_DW.Delay_DSTATE_b = rtb_Saturation_n * look1_iflf_binlxpw
      (rtb_Switch_k_idx_0, SAC_ConstP.uDLookupTable1_bp01Data,
       SAC_ConstP.uDLookupTable1_tableData, 16U) * rtb_uDLookupTable1;
  }

  /* End of Switch: '<S5>/Switch' */

  /* Chart: '<S5>/Chart' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (SAC_DW.is_active_c14_SAC == 0U) {
    SAC_DW.is_active_c14_SAC = 1U;
    SAC_DW.is_c14_SAC = SAC_IN_OFF;
    SAC_B.ramp_cof = 0.0F;
  } else {
    switch (SAC_DW.is_c14_SAC) {
     case SAC_IN_OFF:
      if (arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_DW.is_c14_SAC = SAC_IN_ON_Count;
        SAC_B.ramp_cof = 0.0F;
      }
      break;

     case SAC_IN_OFF_Count:
      if ((!arg_SAC_IN_is_LatCtrlActv_bl) && (SAC_B.ramp_cof <= 0.01F)) {
        SAC_DW.is_c14_SAC = SAC_IN_OFF;
        SAC_B.ramp_cof = 0.0F;
      } else if (arg_SAC_IN_is_LatCtrlActv_bl && (SAC_B.ramp_cof >= 0.99F)) {
        SAC_DW.is_c14_SAC = SAC_IN_ON_o;
        SAC_B.ramp_cof = 1.0F;
      } else if (arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_B.ramp_cof += 0.05F;
      } else {
        SAC_B.ramp_cof -= 0.05F;
      }
      break;

     case SAC_IN_ON_o:
      if (!arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_DW.is_c14_SAC = SAC_IN_OFF_Count;
        SAC_B.ramp_cof = 1.0F;
      }
      break;

     default:
      /* case IN_ON_Count: */
      if (arg_SAC_IN_is_LatCtrlActv_bl && (SAC_B.ramp_cof >= 0.99F)) {
        SAC_DW.is_c14_SAC = SAC_IN_ON_o;
        SAC_B.ramp_cof = 1.0F;
      } else if ((!arg_SAC_IN_is_LatCtrlActv_bl) && (SAC_B.ramp_cof <= 0.01F)) {
        SAC_DW.is_c14_SAC = SAC_IN_OFF;
        SAC_B.ramp_cof = 0.0F;
      } else if (arg_SAC_IN_is_LatCtrlActv_bl) {
        SAC_B.ramp_cof += 0.05F;
      } else {
        SAC_B.ramp_cof -= 0.05F;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart' */

  /* Saturate: '<S5>/Saturation' */
  if (SAC_B.ramp_cof > 1.0F) {
    rtb_Saturation_o = 1.0F;
  } else if (SAC_B.ramp_cof < 0.0F) {
    rtb_Saturation_o = 0.0F;
  } else {
    rtb_Saturation_o = SAC_B.ramp_cof;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Sum: '<S5>/Sum' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Delay: '<S5>/Delay'
   *  Product: '<S5>/Product'
   *  Product: '<S5>/Product1'
   *  Sum: '<S5>/Add'
   *  Sum: '<S5>/Subtract'
   */
  rtb_Saturation_n = (1.0F - rtb_Saturation_o) * 0.0F + SAC_DW.Delay_DSTATE_b *
    rtb_Saturation_o;

  /* Delay: '<S40>/Delay' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (arg_SAC_IN_is_LatCtrlActv_bl && (SAC_PrevZCX.Delay_Reset_ZCE_i != 1)) {
    SAC_DW.icLoad_k = 1U;
  }

  SAC_PrevZCX.Delay_Reset_ZCE_i = arg_SAC_IN_is_LatCtrlActv_bl;
  if (SAC_DW.icLoad_k != 0) {
    SAC_DW.Delay_DSTATE_p = rtb_Saturation_n;
  }

  /* Switch: '<S40>/Switch' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  if (arg_SAC_IN_is_LatCtrlActv_bl) {
    /* Sum: '<S40>/Add1' incorporates:
     *  Delay: '<S40>/Delay'
     */
    rtb_uDLookupTable1 = SAC_ConstB.Product_o + SAC_DW.Delay_DSTATE_p;

    /* Switch: '<S41>/Switch2' incorporates:
     *  RelationalOperator: '<S41>/LowerRelop1'
     */
    if (rtb_Saturation_n > rtb_uDLookupTable1) {
      rtb_Saturation_n = rtb_uDLookupTable1;
    } else {
      /* Sum: '<S40>/Add2' incorporates:
       *  Delay: '<S40>/Delay'
       */
      rtb_uDLookupTable1 = SAC_DW.Delay_DSTATE_p + SAC_ConstB.Product1_m;

      /* Switch: '<S41>/Switch' incorporates:
       *  RelationalOperator: '<S41>/UpperRelop'
       */
      if (rtb_Saturation_n < rtb_uDLookupTable1) {
        rtb_Saturation_n = rtb_uDLookupTable1;
      }

      /* End of Switch: '<S41>/Switch' */
    }

    /* End of Switch: '<S41>/Switch2' */
  }

  /* End of Switch: '<S40>/Switch' */

  /* Saturate: '<S1>/Saturation' */
  if (rtb_Saturation_n > 3.0F) {
    /* Outport: '<Root>/SAC_OUT_T_LKAReqToq_sg' */
    *arg_SAC_OUT_T_LKAReqToq_sg = 3.0F;
  } else if (rtb_Saturation_n < -3.0F) {
    /* Outport: '<Root>/SAC_OUT_T_LKAReqToq_sg' */
    *arg_SAC_OUT_T_LKAReqToq_sg = -3.0F;
  } else {
    /* Outport: '<Root>/SAC_OUT_T_LKAReqToq_sg' */
    *arg_SAC_OUT_T_LKAReqToq_sg = rtb_Saturation_n;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Outport: '<Root>/SAC_OUT_idx_LKAReqToqSts_u8' incorporates:
   *  Inport: '<Root>/SAC_IN_is_LatCtrlActv_bl'
   */
  *arg_SAC_OUT_idx_LKAReqToqSts_u8 = arg_SAC_IN_is_LatCtrlActv_bl;

  /* Update for Delay: '<S15>/Delay' */
  SAC_DW.icLoad = 0U;
  SAC_DW.Delay_DSTATE_h = rtb_Sum;

  /* Update for UnitDelay: '<S21>/Unit Delay' */
  SAC_DW.UnitDelay_DSTATE = rtb_Add1_o;

  /* Update for Delay: '<S27>/Delay' */
  SAC_DW.icLoad_c = 0U;

  /* Update for Delay: '<S40>/Delay' */
  SAC_DW.icLoad_k = 0U;
  SAC_DW.Delay_DSTATE_p = rtb_Saturation_n;
}

/* Model initialize function */
void SAC_initialize(void)
{
  SAC_PrevZCX.Delay_Reset_ZCE = POS_ZCSIG;
  SAC_PrevZCX.Delay_Reset_ZCE_i = POS_ZCSIG;

  /* InitializeConditions for Delay: '<S15>/Delay' */
  SAC_DW.icLoad = 1U;

  /* InitializeConditions for Delay: '<S27>/Delay' */
  SAC_DW.icLoad_c = 1U;

  /* InitializeConditions for Delay: '<S40>/Delay' */
  SAC_DW.icLoad_k = 1U;
}

/* Model terminate function */
void SAC_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
