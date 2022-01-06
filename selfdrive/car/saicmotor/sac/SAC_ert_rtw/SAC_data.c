/*
 * File: SAC_data.c
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

/* Invariant block signals (default storage) */
const ConstB_SAC_T SAC_ConstB = {
  0.62F,                               /* '<S2>/Add' */
  0.0117647052F,                       /* '<S2>/Divide' */
  0.00729411747F,                      /* '<S2>/Product4' */
  0.299999982F,                        /* '<S15>/Product' */
  -15.0F,                              /* '<S11>/Unary Minus' */
  -0.299999982F,                       /* '<S15>/Product1' */
  -1.0F,                               /* '<S21>/Unary Minus' */
  3.14159274F,                         /* '<S27>/Gain1' */
  53.1415939F,                         /* '<S27>/Add' */
  0.940882564F,                        /* '<S27>/Divide' */
  0.0591174F,                          /* '<S27>/Divide1' */
  -3.0F,                               /* '<S23>/Unary Minus' */
  -2.988F,                             /* '<S18>/Unary Minus' */
  0.099999994F,                        /* '<S40>/Product' */
  -5.0F,                               /* '<S6>/Unary Minus' */
  -0.099999994F                        /* '<S40>/Product1' */
};

/* Constant parameters (default storage) */
const ConstP_SAC_T SAC_ConstP = {
  /* Pooled Parameter (Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by:
   *   '<S19>/1-D Lookup Table11'
   *   '<S19>/1-D Lookup Table5'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S12>/1-D Lookup Table'
   *   '<S12>/1-D Lookup Table1'
   *   '<S19>/1-D Lookup Table10'
   *   '<S19>/1-D Lookup Table11'
   *   '<S19>/1-D Lookup Table5'
   *   '<S19>/1-D Lookup Table7'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F },

  /* Pooled Parameter (Expression: [0.003,0.002,0.0014,0.001,0.001,0.0008,0.0008,0.0008,0.0008,0.0008,0.0008])
   * Referenced by:
   *   '<S19>/1-D Lookup Table15'
   *   '<S19>/1-D Lookup Table17'
   */
  { 0.003F, 0.002F, 0.0014F, 0.001F, 0.001F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F },

  /* Pooled Parameter (Expression: [0,1,2,4,6,8,10,15,20,30,40])
   * Referenced by:
   *   '<S19>/1-D Lookup Table15'
   *   '<S19>/1-D Lookup Table17'
   */
  { 0.0F, 1.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 15.0F, 20.0F, 30.0F, 40.0F },

  /* Computed Parameter: uDLookupTable2_tableData
   * Referenced by: '<S19>/1-D Lookup Table2'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F },

  /* Computed Parameter: uDLookupTable2_bp01Data
   * Referenced by: '<S19>/1-D Lookup Table2'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F },

  /* Computed Parameter: uDLookupTable18_tableData
   * Referenced by: '<S19>/1-D Lookup Table18'
   */
  { 4.0F, 4.0F, 2.7911F, 2.0063F, 1.4367F, 1.0443F, 0.55645F, 0.3771F, 0.3F,
    0.3F },

  /* Computed Parameter: uDLookupTable18_bp01Data
   * Referenced by: '<S19>/1-D Lookup Table18'
   */
  { 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable7_tableData
   * Referenced by: '<S19>/1-D Lookup Table7'
   */
  { 0.05F, 0.098544F, 0.15032F, 0.19563F, 0.2346F, 0.25605F, 0.27411F, 0.30008F,
    0.35615F, 0.39498F, 0.43382F, 0.45F, 0.45F, 0.45F, 0.45F },

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.2513F, 1.2513F, 1.2513F, 1.0F, 1.0F, 1.1F, 1.5F, 1.8731F, 1.8731F, 1.8731F,
    1.0F, 1.0F, 1.3F, 2.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.6F, 2.5F, 3.0F, 3.0F,
    3.0F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable_bp02Data
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F },

  /* Computed Parameter: uDLookupTable10_tableData
   * Referenced by: '<S19>/1-D Lookup Table10'
   */
  { 0.04F, 0.072089F, 0.089557F, 0.10703F, 0.11196F, 0.11728F, 0.11956F,
    0.12487F, 0.13133F, 0.13946F, 0.15316F, 0.15418F, 0.15418F, 0.15418F,
    0.15468F },

  /* Expression: single([1 1 1 0.9 0.7 0.2 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by: '<S2>/1-D Lookup Table1'
   */
  { 1.0F, 1.0F, 1.0F, 0.9F, 0.7F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F },

  /* Expression: single([0 0.5 1 1.5 2 2.5 3 3.5 4 4.5 5 5.5 6 6.5 7 7.5 8])
   * Referenced by: '<S2>/1-D Lookup Table1'
   */
  { 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F, 5.5F, 6.0F,
    6.5F, 7.0F, 7.5F, 8.0F },

  /* Computed Parameter: uDLookupTable1_tableData_m
   * Referenced by: '<S12>/1-D Lookup Table1'
   */
  { 10.0F, 7.279F, 6.3758F, 5.5911F, 5.2785F, 4.7655F, 4.2759F, 3.8795F, 3.4832F,
    3.1101F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F },

  /* Computed Parameter: uDLookupTable_tableData_c
   * Referenced by: '<S12>/1-D Lookup Table'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F },

  /* Computed Parameter: uDLookupTable_tableData_a
   * Referenced by: '<S24>/1-D Lookup Table'
   */
  { 0.97604F, 1.4798F, 1.7379F, 1.8992F, 2.1976F, 3.0F },

  /* Computed Parameter: uDLookupTable_bp01Data_b
   * Referenced by: '<S24>/1-D Lookup Table'
   */
  { 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F },

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S24>/1-D Lookup Table3'
   */
  { 1.0F, 1.0F, 0.8F, 0.3F, 0.1F, 0.0F },

  /* Computed Parameter: uDLookupTable3_bp01Data
   * Referenced by: '<S24>/1-D Lookup Table3'
   */
  { 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 3.0F },

  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<S19>/2-D Lookup Table'
   */
  { 6U, 6U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
