/*
 * File: app_data.c
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

#include "app.h"
#include "app_private.h"

/* Invariant block signals (default storage) */
const ConstB_app_T app_ConstB = {
  0.45,                                /* '<S132>/Gain' */
  101.25,                              /* '<S132>/Product2' */
  202.5,                               /* '<S132>/Gain2' */
  457.2,                               /* '<S132>/Gain3' */
  659.7,                               /* '<S132>/Add1' */
  1972.5030000000004,                  /* '<S132>/Product3' */
  313.9336027135929,                   /* '<S132>/Gain4' */
  0.31393360271359289,                 /* '<S132>/mm_To_m' */
  1U,                                  /* '<S1084>/Data Type Conversion' */
  31.4159279F,                         /* '<S84>/Gain1' */
  50.0F,                               /* '<S84>/Divide2' */
  81.4159241F,                         /* '<S84>/Add' */
  0.614130497F,                        /* '<S84>/Divide' */
  0.385869563F,                        /* '<S84>/Divide1' */
  50.2654839F,                         /* '<S81>/Gain1' */
  50.0F,                               /* '<S81>/Divide2' */
  100.265488F,                         /* '<S81>/Add' */
  0.498676062F,                        /* '<S81>/Divide' */
  0.501323879F,                        /* '<S81>/Divide1' */
  50.2654839F,                         /* '<S82>/Gain1' */
  50.0F,                               /* '<S82>/Divide2' */
  100.265488F,                         /* '<S82>/Add' */
  0.498676062F,                        /* '<S82>/Divide' */
  0.501323879F,                        /* '<S82>/Divide1' */
  50.2654839F,                         /* '<S85>/Gain1' */
  50.0F,                               /* '<S85>/Divide2' */
  100.265488F,                         /* '<S85>/Add' */
  0.498676062F,                        /* '<S85>/Divide' */
  0.501323879F,                        /* '<S85>/Divide1' */
  -0.2F,                               /* '<S104>/Unary Minus' */
  -0.25F,                              /* '<S104>/Unary Minus1' */
  -0.2F,                               /* '<S107>/Unary Minus' */
  -5.0F,                               /* '<S97>/Unary Minus' */
  -0.5F,                               /* '<S97>/Unary Minus1' */
  0.02F,                               /* '<S949>/Constant7' */
  0.02F,                               /* '<S949>/Constant8' */
  0.02F,                               /* '<S950>/Constant3' */
  0.02F,                               /* '<S950>/Constant2' */
  0.02F,                               /* '<S976>/Constant2' */
  0.02F,                               /* '<S976>/Constant3' */
  0.02F,                               /* '<S976>/Constant4' */
  0.02F,                               /* '<S976>/Constant6' */
  0.02F,                               /* '<S976>/Constant7' */
  0.012732395F,                        /* '<S1040>/Divide' */
  0.0327323936F,                       /* '<S1040>/Add' */
  0.00726760458F,                      /* '<S1040>/Add2' */
  0.611015499F,                        /* '<S1040>/a' */
  0.222030953F,                        /* '<S1040>/a1' */
  0.62F,                               /* '<S1240>/Add' */
  0.0117647052F,                       /* '<S1240>/Divide' */
  0.00729411747F,                      /* '<S1240>/Product4' */
  0.299999982F,                        /* '<S1253>/Product' */
  -15.0F,                              /* '<S1249>/Unary Minus' */
  -0.299999982F,                       /* '<S1253>/Product1' */
  -1.0F,                               /* '<S1259>/Unary Minus' */
  3.14159274F,                         /* '<S1265>/Gain1' */
  53.1415939F,                         /* '<S1265>/Add' */
  0.940882564F,                        /* '<S1265>/Divide' */
  0.0591174F,                          /* '<S1265>/Divide1' */
  -3.0F,                               /* '<S1261>/Unary Minus' */
  -2.988F,                             /* '<S1256>/Unary Minus' */
  0.099999994F,                        /* '<S1278>/Product' */
  -5.0F,                               /* '<S1244>/Unary Minus' */
  -0.099999994F,                       /* '<S1278>/Product1' */
  0.04F,                               /* '<S1287>/Product' */
  -2.0F,                               /* '<S1283>/Unary Minus' */
  -0.04F,                              /* '<S1287>/Product1' */
  -2.5F,                               /* '<S1284>/Unary Minus' */
  6.28318548F,                         /* '<S1285>/Gain1' */
  56.2831841F,                         /* '<S1285>/Add' */
  0.888364792F,                        /* '<S1285>/Divide' */
  0.111635208F,                        /* '<S1285>/Divide1' */
  0.0F,                                /* '<S1298>/Abs' */
  -0.2F,                               /* '<S1298>/Unary Minus' */
  -0.25F,                              /* '<S1298>/Unary Minus1' */
  -0.2F,                               /* '<S1301>/Unary Minus' */
  -2.0F,                               /* '<S1291>/Unary Minus' */
  -0.25F,                              /* '<S1291>/Unary Minus1' */
  6.28318548F,                         /* '<S1295>/Gain1' */
  50.0F,                               /* '<S1295>/Divide2' */
  56.2831841F,                         /* '<S1295>/Add' */
  0.888364792F,                        /* '<S1295>/Divide' */
  0.111635208F,                        /* '<S1295>/Divide1' */
  0.0F,                                /* '<S1213>/Abs' */
  -0.5F,                               /* '<S1213>/Unary Minus' */
  3.14159274F,                         /* '<S1235>/Gain1' */
  53.1415939F,                         /* '<S1235>/Add' */
  0.940882564F,                        /* '<S1235>/Divide' */
  0.0591174F,                          /* '<S1235>/Divide1' */

  { 0.0F, 0.02F },                     /* synthesized block */

  { 0.0F, 0.02F },                     /* '<S1236>/Math Function' */

  { 0.0F, 0.02F },                     /* '<S1236>/Math Function1' */
  6.28318548F,                         /* '<S1237>/Gain1' */
  56.2831841F,                         /* '<S1237>/Add' */
  0.888364792F,                        /* '<S1237>/Divide' */
  0.111635208F,                        /* '<S1237>/Divide1' */
  6.28318548F,                         /* '<S1238>/Gain1' */
  56.2831841F,                         /* '<S1238>/Add' */
  0.888364792F,                        /* '<S1238>/Divide' */
  0.111635208F,                        /* '<S1238>/Divide1' */
  3.14159274F,                         /* '<S1219>/Gain1' */
  53.1415939F,                         /* '<S1219>/Add' */
  0.940882564F,                        /* '<S1219>/Divide' */
  0.0591174F,                          /* '<S1219>/Divide1' */

  { 0.0F, 0.02F },                     /* synthesized block */

  { 0.0F, 0.02F },                     /* '<S1239>/Math Function2' */

  { 0.0F, 0.02F },                     /* '<S1239>/Math Function3' */
  3.5F,                                /* '<S157>/Multiport Switch' */
  3.0F,                                /* '<S158>/Multiport Switch' */
  3.0F,                                /* '<S159>/Multiport Switch' */
  -2.5F,                               /* '<S191>/Unary Minus' */
  0.0F,                                /* '<S497>/Abs2' */
  0.0F,                                /* '<S537>/Constant16' */
  0.0F,                                /* '<S537>/Constant17' */
  0.0F,                                /* '<S537>/Constant18' */
  0.0F,                                /* '<S537>/Constant19' */
  0.0F,                                /* '<S537>/Constant20' */
  0.0F,                                /* '<S537>/Constant21' */
  0.0F,                                /* '<S537>/Constant22' */
  0.0F,                                /* '<S537>/Constant23' */
  0.0F,                                /* '<S537>/Constant24' */
  0.0F,                                /* '<S537>/Constant25' */
  0.0F,                                /* '<S537>/Constant26' */
  0.0F,                                /* '<S537>/Constant27' */
  0.0F,                                /* '<S537>/Constant29' */
  0.0F,                                /* '<S537>/Constant31' */
  VSEM_Normal,                         /* '<S908>/Data Type Conversion1' */
  EPS_Released,                        /* '<S5>/Data Type Conversion66' */
  0U,                                  /* '<S1105>/Product' */
  2U,                                  /* '<S5>/Data Type Conversion103' */
  0U,                                  /* '<S1107>/Divide' */
  0U,                                  /* '<S1107>/Divide1' */
  4U,                                  /* '<S1107>/Mod' */
  4U,                                  /* '<S1107>/Subtract' */
  4U,                                  /* '<S1107>/Add' */
  1U,                                  /* '<S1109>/Divide' */
  8U,                                  /* '<S1109>/Divide1' */
  0U,                                  /* '<S1109>/Mod' */
  8U,                                  /* '<S1109>/Subtract' */
  16U,                                 /* '<S1109>/Add' */
  3U,                                  /* '<S1111>/Divide' */
  24U,                                 /* '<S1111>/Divide1' */
  0U,                                  /* '<S1111>/Mod' */
  8U,                                  /* '<S1111>/Subtract' */
  32U,                                 /* '<S1111>/Add' */
  4U,                                  /* '<S1113>/Divide' */
  32U,                                 /* '<S1113>/Divide1' */
  3U,                                  /* '<S1113>/Mod' */
  5U,                                  /* '<S1113>/Subtract' */
  37U,                                 /* '<S1113>/Add' */
  5U,                                  /* '<S1115>/Divide' */
  40U,                                 /* '<S1115>/Divide1' */
  6U,                                  /* '<S1115>/Mod' */
  2U,                                  /* '<S1115>/Subtract' */
  42U,                                 /* '<S1115>/Add' */
  5U,                                  /* '<S1089>/Divide' */
  40U,                                 /* '<S1089>/Divide1' */
  3U,                                  /* '<S1089>/Mod' */
  5U,                                  /* '<S1089>/Subtract' */
  45U,                                 /* '<S1089>/Add' */
  6U,                                  /* '<S1091>/Divide' */
  48U,                                 /* '<S1091>/Divide1' */
  3U,                                  /* '<S1091>/Mod' */
  5U,                                  /* '<S1091>/Subtract' */
  53U,                                 /* '<S1091>/Add' */
  5U,                                  /* '<S1093>/Divide' */
  40U,                                 /* '<S1093>/Divide1' */
  0U,                                  /* '<S1093>/Mod' */
  8U,                                  /* '<S1093>/Subtract' */
  48U,                                 /* '<S1093>/Add' */
  7U,                                  /* '<S1095>/Divide' */
  56U,                                 /* '<S1095>/Divide1' */
  0U,                                  /* '<S1095>/Mod' */
  8U,                                  /* '<S1095>/Subtract' */
  64U,                                 /* '<S1095>/Add' */
  0U,                                  /* '<S537>/Constant28' */
  1,                                   /* '<S104>/Logical Operator6' */
  0,                                   /* '<S907>/Logical Operator1' */
  0,                                   /* '<S907>/Logical Operator2' */
  0,                                   /* '<S907>/Logical Operator4' */
  0,                                   /* '<S907>/Logical Operator5' */
  0,                                   /* '<S907>/Logical Operator6' */
  0,                                   /* '<S940>/Relational Operator15' */
  0,                                   /* '<S940>/Relational Operator5' */
  0,                                   /* '<S952>/Relational Operator3' */
  0,                                   /* '<S952>/Relational Operator1' */
  0,                                   /* '<S952>/Logical Operator2' */
  0,                                   /* '<S952>/Relational Operator2' */
  0,                                   /* '<S952>/Logical Operator1' */
  0,                                   /* '<S952>/Relational Operator5' */
  0,                                   /* '<S952>/Relational Operator6' */
  0,                                   /* '<S952>/Logical Operator7' */
  0,                                   /* '<S952>/Relational Operator4' */
  0,                                   /* '<S952>/Logical Operator4' */
  0,                                   /* '<S956>/Relational Operator4' */
  0,                                   /* '<S951>/Relational Operator5' */
  0,                                   /* '<S951>/Relational Operator6' */
  0,                                   /* '<S951>/Logical Operator7' */
  1,                                   /* '<S951>/Relational Operator16' */
  0,                                   /* '<S955>/Relational Operator6' */
  0,                                   /* '<S943>/Relational Operator10' */
  0,                                   /* '<S947>/Relational Operator5' */
  0,                                   /* '<S947>/Relational Operator1' */
  0,                                   /* '<S932>/Relational Operator2' */
  0,                                   /* '<S1302>/Compare' */
  1,                                   /* '<S1298>/Logical Operator6' */
  0,                                   /* '<S1220>/Compare' */
  1,                                   /* '<S1213>/Logical Operator6' */
  0,                                   /* '<S999>/Relational Operator3' */
  0,                                   /* '<S999>/Relational Operator4' */
  0,                                   /* '<S537>/Constant15' */
  0,                                   /* '<S537>/Constant30' */

  /* Start of '<S1137>/Planner' */
  {
    -1.875F,                           /* '<S1148>/Gain' */
    14.0F,                             /* '<S1149>/Data Type Conversion' */
    13.0F,                             /* '<S1149>/Bias' */
    6.0F,                              /* '<S1149>/Subtract' */
    0.461538464F,                      /* '<S1149>/Divide' */
    7.0F,                              /* '<S1150>/Data Type Conversion' */
    6.0F,                              /* '<S1150>/Bias' */
    3.75F,                             /* '<S1150>/Subtract' */
    0.625F                             /* '<S1150>/Divide' */
  }
  ,

  /* End of '<S1137>/Planner' */

  /* Start of '<S1035>/VehSpdVaild' */
  {
    0.199999988F                       /* '<S1062>/Divide5' */
  }
  ,

  /* End of '<S1035>/VehSpdVaild' */

  /* Start of '<S1030>/Hyseresis_Keep1' */
  {
    40.0F,                             /* '<S1055>/Divide' */
    40.0F,                             /* '<S1055>/Saturation2_To_-4' */
    40U                                /* '<S1055>/Data Type Conversion11' */
  }
  ,

  /* End of '<S1030>/Hyseresis_Keep1' */

  /* Start of '<S1030>/Hyseresis_Keep' */
  {
    40.0F,                             /* '<S1054>/Divide' */
    40.0F,                             /* '<S1054>/Saturation2_To_-4' */
    40U                                /* '<S1054>/Data Type Conversion11' */
  }
  ,

  /* End of '<S1030>/Hyseresis_Keep' */

  /* Start of '<S997>/HMI_ACCObjDetJud' */
  {
    0.02F,                             /* '<S1004>/Constant9' */
    0.02F                              /* '<S1004>/Constant8' */
  }
  ,

  /* End of '<S997>/HMI_ACCObjDetJud' */

  /* Start of '<S997>/HMI_ACCDetObjDistLvl' */
  {
    30.0F,                             /* '<S1003>/Add' */
    50.0F,                             /* '<S1003>/Add1' */
    30.0F,                             /* '<S1003>/Add3' */
    30.0F,                             /* '<S1003>/Add8' */
    50.0F,                             /* '<S1003>/Add9' */
    15.0F,                             /* '<S1003>/Divide' */
    25.0F,                             /* '<S1003>/Divide1' */
    15.0F,                             /* '<S1003>/Divide3' */
    15.0F,                             /* '<S1003>/Divide6' */
    25.0F                              /* '<S1003>/Divide7' */
  }
  ,

  /* End of '<S997>/HMI_ACCDetObjDistLvl' */

  /* Start of '<S502>/Trj_RePlan1' */
  {
    0.1F                               /* '<S900>/Gain' */
  }
  ,

  /* End of '<S502>/Trj_RePlan1' */

  /* Start of '<S140>/Longt_Dist_Keep' */
  {
    0.1F                               /* '<S235>/Gain' */
  }
  ,

  /* End of '<S140>/Longt_Dist_Keep' */

  /* Start of '<S157>/SfD' */
  {
    3.5F,                              /* '<S160>/Abs' */
    1.0F                               /* '<S160>/Sign' */
  }
  /* End of '<S157>/SfD' */
};

/* Constant parameters (default storage) */
const ConstP_app_T app_ConstP = {
  /* Computed Parameter: LookupTable4_tableData
   * Referenced by: '<S1060>/LookupTable4'
   */
  { 0.019999999552965164, 0.059999998658895493, 0.070000000298023224,
    0.079999998211860657, 0.10000000149011612, 0.019999999552965164,
    0.079999998211860657, 0.090000003576278687, 0.10000000149011612,
    0.20000000298023224, 0.05000000074505806, 0.11999999731779099,
    0.14000000059604645, 0.15000000596046448, 0.40000000596046448,
    0.10000000149011612, 0.25, 0.2800000011920929, 0.30000001192092896,
    0.800000011920929, 0.30000001192092896, 0.5, 0.550000011920929,
    0.60000002384185791, 1.0, 0.60000002384185791, 0.89999997615814209, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0 },

  /* Computed Parameter: LookupTable4_bp01Data
   * Referenced by: '<S1060>/LookupTable4'
   */
  { 0.079999998211860657, 0.10000000149011612, 0.15000000596046448,
    0.20000000298023224, 0.30000001192092896 },

  /* Computed Parameter: LookupTable4_bp02Data
   * Referenced by: '<S1060>/LookupTable4'
   */
  { 0.0, 0.039999999105930328, 0.059999998658895493, 0.10000000149011612, 0.5,
    1.0, 1.5, 2.0, 3.0 },

  /* Computed Parameter: LookupTable_tableData
   * Referenced by: '<S1060>/LookupTable'
   */
  { 20.0, 2.0, 1.1000000238418579, 1.0499999523162842, 1.0 },

  /* Computed Parameter: LookupTable_bp01Data
   * Referenced by: '<S1060>/LookupTable'
   */
  { 1.0, 1.2000000476837158, 5.0, 10.0, 20.0 },

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S182>/2-D Lookup Table1'
   */
  { 1.5F, 1.7F, 1.9F, 2.1F, 2.3F, 2.5F, 2.7F, 1.5F, 1.68F, 2.24F, 2.8F, 3.36F,
    3.92F, 4.48F, 2.24F, 3.36F, 4.48F, 5.6F, 6.72F, 7.84F, 8.96F, 3.32F, 4.98F,
    6.64F, 8.3F, 9.96F, 11.62F, 13.28F, 4.44F, 6.66F, 8.88F, 11.1F, 13.32F,
    15.54F, 17.76F, 5.56F, 8.34F, 11.12F, 13.9F, 16.68F, 19.46F, 22.24F, 6.68F,
    10.02F, 13.36F, 16.7F, 20.04F, 23.38F, 26.72F, 7.76F, 11.64F, 15.52F, 19.4F,
    23.28F, 27.16F, 31.04F, 8.88F, 13.32F, 17.76F, 22.2F, 26.64F, 31.08F, 35.52F,
    10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 11.12F, 16.68F, 22.24F,
    27.8F, 33.36F, 38.92F, 44.48F, 12.24F, 18.36F, 24.48F, 30.6F, 36.72F, 42.84F,
    48.96F, 13.32F, 19.98F, 26.64F, 33.3F, 39.96F, 46.62F, 53.28F },

  /* Pooled Parameter (Expression: [0.4,0.6,0.8,1,1.2,1.4,1.6])
   * Referenced by:
   *   '<S182>/2-D Lookup Table1'
   *   '<S191>/2-D Lookup Table'
   *   '<S201>/2-D Lookup Table'
   */
  { 0.4F, 0.6F, 0.8F, 1.0F, 1.2F, 1.4F, 1.6F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S239>/1-D Lookup Table2'
   *   '<S155>/2-D Lookup Table'
   *   '<S156>/2-D Lookup Table'
   *   '<S182>/2-D Lookup Table1'
   *   '<S191>/2-D Lookup Table'
   *   '<S201>/2-D Lookup Table'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F },

  /* Pooled Parameter (Expression: [6,6,6,6,6,6,6,7,8,9,10])
   * Referenced by:
   *   '<S191>/1-D Lookup Table'
   *   '<S201>/1-D Lookup Table1'
   */
  { 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F },

  /* Pooled Parameter (Expression: [0,2,4,6,8,10,12,14,16,18,20])
   * Referenced by:
   *   '<S191>/1-D Lookup Table'
   *   '<S201>/1-D Lookup Table1'
   */
  { 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 12.0F, 14.0F, 16.0F, 18.0F, 20.0F },

  /* Pooled Parameter (Expression: reshape([1.5,1.7,1.9,2.1,2.3,2.5,2.7,1.5,2.7,3.2,4.5,5,6,7.3,2.8,4,5,6.9,8,9,10.2,3.32,4.98,6.64,8.3,9.96,11.62,13.28,4.44,6.66,8.88,11.1,13.32,15.54,17.76,5.56,8.34,11.12,13.9,16.68,19.46,22.24,6.68,10.02,13.36,16.7,20.04,23.38,26.72,7.76,11.64,15.52,19.4,23.28,27.16,31.04,8.88,13.32,17.76,22.2,26.64,31.08,35.52,10,15,20,25,30,35,40,11.12,16.68,22.24,27.8,33.36,38.92,44.48,12.24,18.36,24.48,30.6,36.72,42.84,48.96,13.32,19.98,26.64,33.3,39.96,46.62,53.28],7,13))
   * Referenced by:
   *   '<S191>/2-D Lookup Table'
   *   '<S201>/2-D Lookup Table'
   */
  { 1.5F, 1.7F, 1.9F, 2.1F, 2.3F, 2.5F, 2.7F, 1.5F, 2.7F, 3.2F, 4.5F, 5.0F, 6.0F,
    7.3F, 2.8F, 4.0F, 5.0F, 6.9F, 8.0F, 9.0F, 10.2F, 3.32F, 4.98F, 6.64F, 8.3F,
    9.96F, 11.62F, 13.28F, 4.44F, 6.66F, 8.88F, 11.1F, 13.32F, 15.54F, 17.76F,
    5.56F, 8.34F, 11.12F, 13.9F, 16.68F, 19.46F, 22.24F, 6.68F, 10.02F, 13.36F,
    16.7F, 20.04F, 23.38F, 26.72F, 7.76F, 11.64F, 15.52F, 19.4F, 23.28F, 27.16F,
    31.04F, 8.88F, 13.32F, 17.76F, 22.2F, 26.64F, 31.08F, 35.52F, 10.0F, 15.0F,
    20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 11.12F, 16.68F, 22.24F, 27.8F, 33.36F,
    38.92F, 44.48F, 12.24F, 18.36F, 24.48F, 30.6F, 36.72F, 42.84F, 48.96F,
    13.32F, 19.98F, 26.64F, 33.3F, 39.96F, 46.62F, 53.28F },

  /* Pooled Parameter (Expression: [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1])
   * Referenced by:
   *   '<S495>/n-D Lookup Table3'
   *   '<S495>/n-D Lookup Table4'
   *   '<S500>/n-D Lookup Table1'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F },

  /* Pooled Parameter (Expression: [-150,-140,-130,-120,-110,-100,-90,-80,-70,-60,-50,-40,-30,-20,-10,0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150])
   * Referenced by:
   *   '<S495>/n-D Lookup Table3'
   *   '<S495>/n-D Lookup Table4'
   *   '<S500>/n-D Lookup Table'
   *   '<S500>/n-D Lookup Table1'
   */
  { -150.0F, -140.0F, -130.0F, -120.0F, -110.0F, -100.0F, -90.0F, -80.0F, -70.0F,
    -60.0F, -50.0F, -40.0F, -30.0F, -20.0F, -10.0F, 0.0F, 10.0F, 20.0F, 30.0F,
    40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 110.0F, 120.0F, 130.0F,
    140.0F, 150.0F },

  /* Computed Parameter: nDLookupTable5_tableData
   * Referenced by: '<S495>/n-D Lookup Table5'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S495>/n-D Lookup Table'
   *   '<S495>/n-D Lookup Table1'
   *   '<S495>/n-D Lookup Table2'
   *   '<S495>/n-D Lookup Table5'
   *   '<S500>/n-D Lookup Table2'
   *   '<S500>/n-D Lookup Table3'
   *   '<S500>/n-D Lookup Table4'
   *   '<S500>/n-D Lookup Table5'
   *   '<S1311>/StrWhlAng_RateLmt'
   *   '<S543>/n-D Lookup Table1'
   *   '<S543>/n-D Lookup Table2'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F },

  /* Computed Parameter: nDLookupTable2_tableData
   * Referenced by: '<S495>/n-D Lookup Table2'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.95F, 0.9F, 0.85F, 0.8F,
    0.8F, 0.8F, 0.8F, 0.8F },

  /* Computed Parameter: nDLookupTable1_tableData
   * Referenced by: '<S495>/n-D Lookup Table1'
   */
  { 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F,
    4.0F, 4.0F, 4.0F },

  /* Computed Parameter: nDLookupTable_tableData
   * Referenced by: '<S495>/n-D Lookup Table'
   */
  { -1.0F, -1.5F, -2.0F, -2.5F, -3.0F, -3.0F, -3.0F, -3.0F, -3.0F, -3.0F, -3.0F,
    -3.0F, -3.0F, -3.0F, -3.0F, -3.0F },

  /* Computed Parameter: nDLookupTable2_tableData_l
   * Referenced by: '<S543>/n-D Lookup Table2'
   */
  { 3.0F, 3.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 10.0F, 10.0F,
    10.0F, 10.0F, 10.0F, 10.0F },

  /* Computed Parameter: nDLookupTable1_tableData_o
   * Referenced by: '<S543>/n-D Lookup Table1'
   */
  { 8.0F, 8.0F, 8.0F, 10.0F, 12.0F, 14.0F, 16.0F, 18.0F, 20.0F, 22.0F, 24.0F,
    26.0F, 28.0F, 30.0F, 30.0F, 30.0F },

  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S155>/2-D Lookup Table'
   */
  { -1.0F, -1.5F, -1.5F, -2.0F, -2.5F, -2.5F, -3.0F, -3.5F, -3.5F, -4.0F, -4.0F,
    -4.0F, -4.0F, -4.0F, -4.0F, -3.5F, -4.0F, -4.0F, -3.0F, -3.5F, -3.5F, -3.0F,
    -3.5F, -3.5F, -3.0F, -3.5F, -3.5F, -3.0F, -3.5F, -3.5F, -2.5F, -3.0F, -3.0F,
    -2.5F, -3.0F, -3.0F, -2.5F, -3.0F, -3.0F },

  /* Pooled Parameter (Expression: [1,2,3])
   * Referenced by:
   *   '<S155>/2-D Lookup Table'
   *   '<S156>/2-D Lookup Table'
   */
  { 1.0F, 2.0F, 3.0F },

  /* Pooled Parameter (Expression: [1 1 1 1 1 1 1])
   * Referenced by:
   *   '<S155>/1-D Lookup Table'
   *   '<S156>/1-D Lookup Table'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F },

  /* Pooled Parameter (Expression: [-5 -3  -1  0 1 3 5])
   * Referenced by:
   *   '<S155>/1-D Lookup Table'
   *   '<S156>/1-D Lookup Table'
   */
  { -5.0F, -3.0F, -1.0F, 0.0F, 1.0F, 3.0F, 5.0F },

  /* Computed Parameter: uDLookupTable_tableData_h
   * Referenced by: '<S497>/1-D Lookup Table'
   */
  { 3.0F, 3.0F, 2.5F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 1.6242F,
    1.2789F, 0.98F, 0.7387F, 0.5558F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S497>/1-D Lookup Table'
   */
  { 0.0F, 3.0F, 6.0F, 9.0F, 12.0F, 15.0F, 18.0F, 21.0F, 24.0F, 27.0F, 30.0F,
    33.0F, 39.0F, 42.0F, 45.0F, 48.0F },

  /* Computed Parameter: uDLookupTable_tableData_o
   * Referenced by: '<S156>/2-D Lookup Table'
   */
  { 1.0F, 1.5F, 1.5F, 2.0F, 2.5F, 2.5F, 3.0F, 3.5F, 3.5F, 4.0F, 4.0F, 4.0F, 4.0F,
    4.0F, 4.0F, 3.5F, 4.0F, 4.0F, 3.0F, 3.5F, 3.5F, 3.0F, 3.5F, 3.5F, 3.0F, 3.5F,
    3.5F, 3.0F, 3.5F, 3.5F, 2.5F, 3.0F, 3.0F, 2.5F, 3.0F, 3.0F, 2.5F, 3.0F, 3.0F
  },

  /* Pooled Parameter (Expression: [3,2.5,2,1.5,1.5,1.5])
   * Referenced by:
   *   '<S158>/1-D Lookup Table'
   *   '<S159>/1-D Lookup Table'
   *   '<S159>/1-D Lookup Table1'
   */
  { 3.0F, 2.5F, 2.0F, 1.5F, 1.5F, 1.5F },

  /* Pooled Parameter (Expression: [0,1,2,3,4,5])
   * Referenced by:
   *   '<S158>/1-D Lookup Table'
   *   '<S159>/1-D Lookup Table'
   *   '<S1257>/1-D Lookup Table1'
   *   '<S1257>/1-D Lookup Table2'
   *   '<S1257>/1-D Lookup Table6'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F },

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S159>/1-D Lookup Table1'
   */
  { 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F },

  /* Pooled Parameter (Expression: [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1])
   * Referenced by:
   *   '<S500>/n-D Lookup Table2'
   *   '<S500>/n-D Lookup Table3'
   *   '<S500>/n-D Lookup Table4'
   *   '<S500>/n-D Lookup Table5'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F },

  /* Computed Parameter: nDLookupTable_tableData_b
   * Referenced by: '<S500>/n-D Lookup Table'
   */
  { 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F,
    2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F,
    2.0F, 2.0F, 2.0F, 2.0F, 2.0F },

  /* Pooled Parameter (Expression: [0 10 20 30 40 50 60 70 80 90 100])
   * Referenced by:
   *   '<S239>/1-D Lookup Table4'
   *   '<S239>/1-D Lookup Table5'
   *   '<S239>/1-D Lookup Table8'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
  },

  /* Computed Parameter: uDLookupTable2_tableData
   * Referenced by: '<S239>/1-D Lookup Table2'
   */
  { 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.5F, 2.5F, 2.5F, 2.5F, 3.0F, 3.0F, 3.0F, 3.0F
  },

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S239>/1-D Lookup Table3'
   */
  { 1.3F, 1.3F, 1.3F, 1.2F, 1.2F, 1.1F, 1.1F, 1.0F, 1.0F, 1.0F },

  /* Pooled Parameter (Expression: [0 15 30 45 60 75 90 105 120 135])
   * Referenced by:
   *   '<S239>/1-D Lookup Table3'
   *   '<S239>/1-D Lookup Table6'
   *   '<S239>/1-D Lookup Table7'
   */
  { 0.0F, 15.0F, 30.0F, 45.0F, 60.0F, 75.0F, 90.0F, 105.0F, 120.0F, 135.0F },

  /* Computed Parameter: uDLookupTable6_tableData
   * Referenced by: '<S239>/1-D Lookup Table6'
   */
  { 3.0F, 3.5F, 4.0F, 4.5F, 5.0F, 5.5F, 6.0F, 6.5F, 7.0F, 7.5F },

  /* Computed Parameter: uDLookupTable4_tableData
   * Referenced by: '<S239>/1-D Lookup Table4'
   */
  { 3.0F, 3.5F, 4.0F, 4.5F, 5.0F, 5.5F, 6.0F, 6.5F, 7.0F, 7.5F, 8.0F },

  /* Computed Parameter: uDLookupTable7_tableData
   * Referenced by: '<S239>/1-D Lookup Table7'
   */
  { 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F },

  /* Computed Parameter: uDLookupTable5_tableData
   * Referenced by: '<S239>/1-D Lookup Table5'
   */
  { 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F, 5.5F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S97>/KI_loTable'
   *   '<S1291>/KI_loTable'
   *   '<S1148>/Data Store Memory1'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: uDLookupTable_tableData_k
   * Referenced by: '<S1212>/1-D Lookup Table'
   */
  { 0.0F, 0.2F, 0.2F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S1212>/1-D Lookup Table'
   *   '<S1212>/1-D Lookup Table1'
   *   '<S1217>/1-D Lookup Table'
   *   '<S1217>/1-D Lookup Table1'
   *   '<S1217>/1-D Lookup Table2'
   *   '<S1282>/1-D Lookup Table'
   */
  { 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F, 140.0F },

  /* Computed Parameter: uDLookupTable_tableData_e
   * Referenced by: '<S1217>/1-D Lookup Table'
   */
  { 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F },

  /* Computed Parameter: uDLookupTable1_tableData_m
   * Referenced by: '<S1217>/1-D Lookup Table1'
   */
  { 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F },

  /* Computed Parameter: uDLookupTable2_tableData_n
   * Referenced by: '<S1217>/1-D Lookup Table2'
   */
  { 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F },

  /* Computed Parameter: uDLookupTable1_tableData_d
   * Referenced by: '<S1216>/1-D Lookup Table1'
   */
  { 0.5F, 0.5F, 0.4F, 0.4F, 0.3F, 0.3F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S1216>/1-D Lookup Table1'
   *   '<S1216>/1-D Lookup Table2'
   *   '<S1262>/1-D Lookup Table'
   */
  { 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F },

  /* Computed Parameter: uDLookupTable2_tableData_c
   * Referenced by: '<S1216>/1-D Lookup Table2'
   */
  { 0.05F, 0.05F, 0.04F, 0.04F, 0.03F, 0.03F },

  /* Computed Parameter: uDLookupTable1_tableData_e
   * Referenced by: '<S1212>/1-D Lookup Table1'
   */
  { 0.0F, 0.092917F, 0.24708F, 0.33952F, 0.4F, 0.4F, 0.5F, 0.5F },

  /* Pooled Parameter (Expression: [1 1 1 1 1 1])
   * Referenced by:
   *   '<S1257>/1-D Lookup Table1'
   *   '<S1257>/1-D Lookup Table2'
   *   '<S1257>/1-D Lookup Table6'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F },

  /* Pooled Parameter (Expression: [4,4,2.7911,2.0063,1.4367,1.0443,0.55645,0.3771,0.3,0.3])
   * Referenced by:
   *   '<S1257>/1-D Lookup Table18'
   *   '<S1257>/1-D Lookup Table8'
   */
  { 4.0F, 4.0F, 2.7911F, 2.0063F, 1.4367F, 1.0443F, 0.55645F, 0.3771F, 0.3F,
    0.3F },

  /* Pooled Parameter (Expression: [0,2,4,6,8,10,15,20,25,30])
   * Referenced by:
   *   '<S1257>/1-D Lookup Table18'
   *   '<S1257>/1-D Lookup Table8'
   */
  { 0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable3_tableData_e
   * Referenced by: '<S1257>/1-D Lookup Table3'
   */
  { 0.15886F, 0.17033F, 0.23726F, 0.291F, 0.309966F, 0.319842F, 0.330288F,
    0.342486F, 0.365514F, 0.40887F, 0.449514F, 0.48F, 0.48F, 0.48F, 0.48F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S1250>/1-D Lookup Table'
   *   '<S1250>/1-D Lookup Table1'
   *   '<S1257>/1-D Lookup Table10'
   *   '<S1257>/1-D Lookup Table11'
   *   '<S1257>/1-D Lookup Table3'
   *   '<S1257>/1-D Lookup Table4'
   *   '<S1257>/1-D Lookup Table5'
   *   '<S1257>/1-D Lookup Table7'
   */
  { 0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F },

  /* Computed Parameter: uDLookupTable9_tableData
   * Referenced by: '<S1257>/1-D Lookup Table9'
   */
  { 1.0F, 1.0522F, 1.2419F, 1.5065F, 1.8355F, 2.2871F, 2.6613F, 2.8226F, 3.0F,
    3.0F },

  /* Computed Parameter: uDLookupTable9_bp01Data
   * Referenced by: '<S1257>/1-D Lookup Table9'
   */
  { 0.0F, 3.0F, 6.0F, 8.0F, 10.0F, 14.0F, 18.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable4_tableData_k
   * Referenced by: '<S1257>/1-D Lookup Table4'
   */
  { 0.024684F, 0.031742F, 0.042838F, 0.053162F, 0.061678F, 0.067354F, 0.06942F,
    0.069904F, 0.071226F, 0.073032F, 0.07613F, 0.087226F, 0.093936F, 0.095646F,
    0.097032F },

  /* Pooled Parameter (Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by:
   *   '<S1257>/1-D Lookup Table11'
   *   '<S1257>/1-D Lookup Table5'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F },

  /* Pooled Parameter (Expression: [0.003,0.002,0.0014,0.001,0.001,0.0008,0.0008,0.0008,0.0008,0.0008,0.0008])
   * Referenced by:
   *   '<S1257>/1-D Lookup Table15'
   *   '<S1257>/1-D Lookup Table17'
   */
  { 0.003F, 0.002F, 0.0014F, 0.001F, 0.001F, 0.0008F, 0.0008F, 0.0008F, 0.0008F,
    0.0008F, 0.0008F },

  /* Pooled Parameter (Expression: [0,1,2,4,6,8,10,15,20,30,40])
   * Referenced by:
   *   '<S1257>/1-D Lookup Table15'
   *   '<S1257>/1-D Lookup Table17'
   */
  { 0.0F, 1.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 15.0F, 20.0F, 30.0F, 40.0F },

  /* Computed Parameter: uDLookupTable7_tableData_d
   * Referenced by: '<S1257>/1-D Lookup Table7'
   */
  { 0.05F, 0.098544F, 0.15032F, 0.19563F, 0.2346F, 0.25605F, 0.27411F, 0.30008F,
    0.35615F, 0.39498F, 0.43382F, 0.45F, 0.45F, 0.45F, 0.45F },

  /* Computed Parameter: uDLookupTable_tableData_hu
   * Referenced by: '<S1257>/2-D Lookup Table'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.2513F, 1.2513F, 1.2513F, 1.0F, 1.0F, 1.1F, 1.5F, 1.8731F, 1.8731F, 1.8731F,
    1.0F, 1.0F, 1.3F, 2.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.6F, 2.5F, 3.0F, 3.0F,
    3.0F },

  /* Computed Parameter: uDLookupTable_bp01Data_d
   * Referenced by: '<S1257>/2-D Lookup Table'
   */
  { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F },

  /* Computed Parameter: uDLookupTable_bp02Data
   * Referenced by: '<S1257>/2-D Lookup Table'
   */
  { 0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F },

  /* Computed Parameter: uDLookupTable10_tableData
   * Referenced by: '<S1257>/1-D Lookup Table10'
   */
  { 0.04F, 0.072089F, 0.089557F, 0.10703F, 0.11196F, 0.11728F, 0.11956F,
    0.12487F, 0.13133F, 0.13946F, 0.15316F, 0.15418F, 0.15418F, 0.15418F,
    0.15468F },

  /* Expression: single([1 1 1 0.9 0.7 0.2 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by: '<S1240>/1-D Lookup Table1'
   */
  { 1.0F, 1.0F, 1.0F, 0.9F, 0.7F, 0.2F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F },

  /* Expression: single([0 0.5 1 1.5 2 2.5 3 3.5 4 4.5 5 5.5 6 6.5 7 7.5 8])
   * Referenced by: '<S1240>/1-D Lookup Table1'
   */
  { 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 5.0F, 5.5F, 6.0F,
    6.5F, 7.0F, 7.5F, 8.0F },

  /* Computed Parameter: StrWhlAng_RateLmt_tableData
   * Referenced by: '<S1311>/StrWhlAng_RateLmt'
   */
  { 10.0F, 12.0F, 14.0F, 15.0F, 15.0F, 14.25F, 13.5F, 12.75F, 12.0F, 11.25F,
    10.5F, 9.0F, 8.0F, 6.4F, 4.8F, 3.2F },

  /* Computed Parameter: LUT_MaxLatAcc_tableData
   * Referenced by: '<S1312>/LUT_MaxLatAcc'
   */
  { 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F, 0.3F,
    0.3F, 0.3F, 0.3F, 0.3F, 0.3F },

  /* Computed Parameter: LUT_MaxLatAcc_bp01Data
   * Referenced by: '<S1312>/LUT_MaxLatAcc'
   */
  { 0.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F, 13.0F, 14.0F, 15.0F,
    20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 150.0F },

  /* Computed Parameter: KP_loTable_tableData
   * Referenced by: '<S97>/KP_loTable'
   */
  { 0.4F, 0.4F, 0.2F, 0.2F, 0.15F, 0.1F, 0.1F },

  /* Pooled Parameter (Expression: [0 20 40 60 80 100 120])
   * Referenced by:
   *   '<S97>/KI_loTable'
   *   '<S97>/KP_loTable'
   *   '<S1291>/KI_loTable'
   *   '<S1291>/KP_loTable'
   */
  { 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F, 120.0F },

  /* Computed Parameter: uDLookupTable_tableData_c
   * Referenced by: '<S1282>/1-D Lookup Table'
   */
  { 0.1F, 0.05F, 0.02F, 0.01F, 0.008F, 0.008F, 0.008F, 0.008F },

  /* Computed Parameter: KP_loTable_tableData_l
   * Referenced by: '<S1291>/KP_loTable'
   */
  { 0.15F, 0.15F, 0.15F, 0.15F, 0.15F, 0.15F, 0.15F },

  /* Computed Parameter: uDLookupTable1_tableData_o
   * Referenced by: '<S1250>/1-D Lookup Table1'
   */
  { 10.0F, 7.279F, 6.3758F, 5.5911F, 5.2785F, 4.7655F, 4.2759F, 3.8795F, 3.4832F,
    3.1101F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F },

  /* Computed Parameter: uDLookupTable_tableData_o1
   * Referenced by: '<S1250>/1-D Lookup Table'
   */
  { 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F },

  /* Computed Parameter: uDLookupTable_tableData_hv
   * Referenced by: '<S1262>/1-D Lookup Table'
   */
  { 0.97604F, 1.4798F, 1.7379F, 1.8992F, 2.1976F, 3.0F },

  /* Computed Parameter: uDLookupTable3_tableData_l
   * Referenced by: '<S1262>/1-D Lookup Table3'
   */
  { 1.0F, 1.0F, 0.8F, 0.3F, 0.1F, 0.0F },

  /* Computed Parameter: uDLookupTable3_bp01Data
   * Referenced by: '<S1262>/1-D Lookup Table3'
   */
  { 0.0F, 0.5F, 1.0F, 1.5F, 2.0F, 3.0F },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S182>/2-D Lookup Table1'
   *   '<S191>/2-D Lookup Table'
   *   '<S201>/2-D Lookup Table'
   */
  { 6U, 12U },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S155>/2-D Lookup Table'
   *   '<S156>/2-D Lookup Table'
   */
  { 2U, 12U },

  /* Computed Parameter: uDLookupTable_maxIndex
   * Referenced by: '<S1257>/2-D Lookup Table'
   */
  { 6U, 6U },

  /* Computed Parameter: LookupTable4_maxIndex
   * Referenced by: '<S1060>/LookupTable4'
   */
  { 4U, 8U },

  /* Pooled Parameter (Expression: zeros(1,64))
   * Referenced by:
   *   '<S1069>/Constant13'
   *   '<S1070>/Constant'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Pooled Parameter (Expression: [128 64 32 16 8 4 2 1])
   * Referenced by:
   *   '<S1083>/Constant3'
   *   '<S1096>/Constant3'
   */
  { 128U, 64U, 32U, 16U, 8U, 4U, 2U, 1U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
