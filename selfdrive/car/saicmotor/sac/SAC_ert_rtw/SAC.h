/*
 * File: SAC.h
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

#ifndef RTW_HEADER_SAC_h_
#define RTW_HEADER_SAC_h_
#include <math.h>
#ifndef SAC_COMMON_INCLUDES_
#define SAC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* SAC_COMMON_INCLUDES_ */

#include "SAC_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real32_T ramp_cof;                   /* '<S5>/Chart' */
  real32_T ramp_cof_h;                 /* '<S11>/Chart' */
  real32_T VRD_indx_DrvrOvrrdDlyCof_sg;/* '<S2>/OvrdDely' */
} B_SAC_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S11>/Delay' */
  real32_T Delay_DSTATE_h;             /* '<S15>/Delay' */
  real32_T UnitDelay_DSTATE;           /* '<S21>/Unit Delay' */
  real32_T Delay_DSTATE_d;             /* '<S27>/Delay' */
  real32_T Delay_DSTATE_c;             /* '<S18>/Delay' */
  real32_T Delay1_DSTATE;              /* '<S18>/Delay1' */
  real32_T Delay_DSTATE_b;             /* '<S5>/Delay' */
  real32_T Delay_DSTATE_p;             /* '<S40>/Delay' */
  real32_T local_time;                 /* '<S2>/Chart2' */
  real32_T local_time_b;               /* '<S2>/Chart1' */
  uint8_T icLoad;                      /* '<S15>/Delay' */
  uint8_T icLoad_c;                    /* '<S27>/Delay' */
  uint8_T icLoad_k;                    /* '<S40>/Delay' */
  uint8_T is_active_c14_SAC;           /* '<S5>/Chart' */
  uint8_T is_c14_SAC;                  /* '<S5>/Chart' */
  uint8_T is_active_c13_SAC;           /* '<S11>/Chart' */
  uint8_T is_c13_SAC;                  /* '<S11>/Chart' */
  uint8_T is_active_c12_SAC;           /* '<S2>/OvrdDely' */
  uint8_T is_c12_SAC;                  /* '<S2>/OvrdDely' */
  uint8_T is_active_c11_SAC;           /* '<S2>/Chart2' */
  uint8_T is_c11_SAC;                  /* '<S2>/Chart2' */
  uint8_T is_active_c10_SAC;           /* '<S2>/Chart1' */
  uint8_T is_c10_SAC;                  /* '<S2>/Chart1' */
} DW_SAC_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Delay_Reset_ZCE;          /* '<S15>/Delay' */
  ZCSigState Delay_Reset_ZCE_i;        /* '<S40>/Delay' */
} PrevZCX_SAC_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T Add;                  /* '<S2>/Add' */
  const real32_T Divide;               /* '<S2>/Divide' */
  const real32_T Product4;             /* '<S2>/Product4' */
  const real32_T Product;              /* '<S15>/Product' */
  const real32_T UnaryMinus;           /* '<S11>/Unary Minus' */
  const real32_T Product1;             /* '<S15>/Product1' */
  const real32_T UnaryMinus_h;         /* '<S21>/Unary Minus' */
  const real32_T Gain1;                /* '<S27>/Gain1' */
  const real32_T Add_o;                /* '<S27>/Add' */
  const real32_T alpha;                /* '<S27>/Divide' */
  const real32_T ualpha;               /* '<S27>/Divide1' */
  const real32_T UnaryMinus_g;         /* '<S23>/Unary Minus' */
  const real32_T UnaryMinus_d;         /* '<S18>/Unary Minus' */
  const real32_T Product_o;            /* '<S40>/Product' */
  const real32_T UnaryMinus_c;         /* '<S6>/Unary Minus' */
  const real32_T Product1_m;           /* '<S40>/Product1' */
} ConstB_SAC_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by:
   *   '<S19>/1-D Lookup Table11'
   *   '<S19>/1-D Lookup Table5'
   */
  real32_T pooled1[15];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S12>/1-D Lookup Table'
   *   '<S12>/1-D Lookup Table1'
   *   '<S19>/1-D Lookup Table10'
   *   '<S19>/1-D Lookup Table11'
   *   '<S19>/1-D Lookup Table5'
   *   '<S19>/1-D Lookup Table7'
   */
  real32_T pooled2[15];

  /* Pooled Parameter (Expression: [0.003,0.002,0.0014,0.001,0.001,0.0008,0.0008,0.0008,0.0008,0.0008,0.0008])
   * Referenced by:
   *   '<S19>/1-D Lookup Table15'
   *   '<S19>/1-D Lookup Table17'
   */
  real32_T pooled3[11];

  /* Pooled Parameter (Expression: [0,1,2,4,6,8,10,15,20,30,40])
   * Referenced by:
   *   '<S19>/1-D Lookup Table15'
   *   '<S19>/1-D Lookup Table17'
   */
  real32_T pooled4[11];

  /* Computed Parameter: uDLookupTable2_tableData
   * Referenced by: '<S19>/1-D Lookup Table2'
   */
  real32_T uDLookupTable2_tableData[6];

  /* Computed Parameter: uDLookupTable2_bp01Data
   * Referenced by: '<S19>/1-D Lookup Table2'
   */
  real32_T uDLookupTable2_bp01Data[6];

  /* Computed Parameter: uDLookupTable18_tableData
   * Referenced by: '<S19>/1-D Lookup Table18'
   */
  real32_T uDLookupTable18_tableData[10];

  /* Computed Parameter: uDLookupTable18_bp01Data
   * Referenced by: '<S19>/1-D Lookup Table18'
   */
  real32_T uDLookupTable18_bp01Data[10];

  /* Computed Parameter: uDLookupTable7_tableData
   * Referenced by: '<S19>/1-D Lookup Table7'
   */
  real32_T uDLookupTable7_tableData[15];

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  real32_T uDLookupTable_tableData[49];

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data[7];

  /* Computed Parameter: uDLookupTable_bp02Data
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp02Data[7];

  /* Computed Parameter: uDLookupTable10_tableData
   * Referenced by: '<S19>/1-D Lookup Table10'
   */
  real32_T uDLookupTable10_tableData[15];

  /* Expression: single([1 1 1 0.9 0.7 0.2 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by: '<S2>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData[17];

  /* Expression: single([0 0.5 1 1.5 2 2.5 3 3.5 4 4.5 5 5.5 6 6.5 7 7.5 8])
   * Referenced by: '<S2>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_bp01Data[17];

  /* Computed Parameter: uDLookupTable1_tableData_m
   * Referenced by: '<S12>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData_m[15];

  /* Computed Parameter: uDLookupTable_tableData_c
   * Referenced by: '<S12>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_c[15];

  /* Computed Parameter: uDLookupTable_tableData_a
   * Referenced by: '<S24>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_a[6];

  /* Computed Parameter: uDLookupTable_bp01Data_b
   * Referenced by: '<S24>/1-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data_b[6];

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S24>/1-D Lookup Table3'
   */
  real32_T uDLookupTable3_tableData[6];

  /* Computed Parameter: uDLookupTable3_bp01Data
   * Referenced by: '<S24>/1-D Lookup Table3'
   */
  real32_T uDLookupTable3_bp01Data[6];

  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  uint32_T uDLookupTable_maxIndex[2];
} ConstP_SAC_T;

/* Real-time Model Data Structure */
struct tag_RTM_SAC_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_SAC_T SAC_B;

/* Block states (default storage) */
extern DW_SAC_T SAC_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_SAC_T SAC_PrevZCX;
extern const ConstB_SAC_T SAC_ConstB;  /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_SAC_T SAC_ConstP;

/* Model entry point functions */
extern void SAC_initialize(void);
extern void SAC_terminate(void);

/* Customized model step function */
extern void SAC_step(real32_T arg_SAC_IN_angD_ReqStrgWhlAng_sg, boolean_T
                     arg_SAC_IN_is_LatCtrlActv_bl, real32_T
                     arg_SAC_IN_V_VehSpdAvgDrvn_sg, real32_T
                     arg_SAC_IN_angD_StrgWhlAng_sg, real32_T
                     arg_SAC_IN_WD_StrgWhlAngGrd_sg, real32_T
                     arg_SAC_IN_T_DrvrStrgDlvrdToq_sg, uint8_T
                     arg_SAC_IN_idx_EpsDspCmd_u8, real32_T
                     arg_SAC_IN_LutTbl_VSpd_X[15], real32_T
                     arg_SAC_IN_LutTbl_KpVehSpd_Y[15], real32_T
                     arg_SAC_IN_LutTbl_DesAng_X[15], real32_T
                     arg_SAC_IN_LutTbl_KpDesAng_Y[15], real32_T
                     arg_SAC_IN_LutTbl_KiVehSpd_Y[15], real32_T
                     arg_SAC_IN_LutTbl_KiDesAng_Y[15], real32_T
                     *arg_SAC_OUT_T_LKAReqToq_sg, uint8_T
                     *arg_SAC_OUT_idx_LKAReqToqSts_u8);

/* Real-time Model object */
extern RT_MODEL_SAC_T *const SAC_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Propagation' : Unused code path elimination
 * Block '<S11>/Scope1' : Unused code path elimination
 * Block '<S16>/Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/Data Type Propagation' : Unused code path elimination
 * Block '<S12>/1-D Lookup Table2' : Unused code path elimination
 * Block '<S12>/Abs' : Unused code path elimination
 * Block '<S17>/Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/Data Type Propagation' : Unused code path elimination
 * Block '<S26>/Data Type Duplicate' : Unused code path elimination
 * Block '<S26>/Data Type Propagation' : Unused code path elimination
 * Block '<S22>/1-D Lookup Table1' : Unused code path elimination
 * Block '<S22>/Abs' : Unused code path elimination
 * Block '<S22>/Gain' : Unused code path elimination
 * Block '<S22>/Product' : Unused code path elimination
 * Block '<S22>/Sign' : Unused code path elimination
 * Block '<S35>/Data Type Duplicate' : Unused code path elimination
 * Block '<S35>/Data Type Propagation' : Unused code path elimination
 * Block '<S36>/Data Type Duplicate' : Unused code path elimination
 * Block '<S36>/Data Type Propagation' : Unused code path elimination
 * Block '<S25>/Data Type Duplicate' : Unused code path elimination
 * Block '<S25>/Data Type Propagation' : Unused code path elimination
 * Block '<S19>/Constant' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<S6>/Scope' : Unused code path elimination
 * Block '<S41>/Data Type Duplicate' : Unused code path elimination
 * Block '<S41>/Data Type Propagation' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SAC'
 * '<S1>'   : 'SAC/SteeringAngle_Control'
 * '<S2>'   : 'SAC/SteeringAngle_Control/DOT'
 * '<S3>'   : 'SAC/SteeringAngle_Control/NolinearFix'
 * '<S4>'   : 'SAC/SteeringAngle_Control/SteeringAngleTracking'
 * '<S5>'   : 'SAC/SteeringAngle_Control/Torque_Ramp'
 * '<S6>'   : 'SAC/SteeringAngle_Control/Torque_Rate_Limit'
 * '<S7>'   : 'SAC/SteeringAngle_Control/DOT/Chart1'
 * '<S8>'   : 'SAC/SteeringAngle_Control/DOT/Chart2'
 * '<S9>'   : 'SAC/SteeringAngle_Control/DOT/OvrdDely'
 * '<S10>'  : 'SAC/SteeringAngle_Control/DOT/Saturation Dynamic'
 * '<S11>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc'
 * '<S12>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc1'
 * '<S13>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2'
 * '<S14>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc/Chart'
 * '<S15>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc/Subsystem'
 * '<S16>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc/Subsystem/Saturation Dynamic'
 * '<S17>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc1/Saturation Dynamic'
 * '<S18>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem'
 * '<S19>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem2'
 * '<S20>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/Compare To Constant'
 * '<S21>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/D_Term'
 * '<S22>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/ForwardFeed_Term'
 * '<S23>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term'
 * '<S24>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/P_Term'
 * '<S25>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/Saturation Dynamic'
 * '<S26>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/D_Term/Saturation Dynamic'
 * '<S27>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/D_Term/lowpassFilter3'
 * '<S28>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant1'
 * '<S29>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant2'
 * '<S30>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant3'
 * '<S31>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant4'
 * '<S32>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant5'
 * '<S33>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant6'
 * '<S34>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant7'
 * '<S35>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Saturation Dynamic'
 * '<S36>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/P_Term/Saturation Dynamic'
 * '<S37>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/P_Term/merge'
 * '<S38>'  : 'SAC/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem2/Compare To Constant'
 * '<S39>'  : 'SAC/SteeringAngle_Control/Torque_Ramp/Chart'
 * '<S40>'  : 'SAC/SteeringAngle_Control/Torque_Rate_Limit/Subsystem'
 * '<S41>'  : 'SAC/SteeringAngle_Control/Torque_Rate_Limit/Subsystem/Saturation Dynamic'
 */
#endif                                 /* RTW_HEADER_SAC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
