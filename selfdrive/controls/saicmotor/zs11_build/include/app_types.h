/*
 * File: app_types.h
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

#ifndef RTW_HEADER_app_types_h_
#define RTW_HEADER_app_types_h_
#include "rtwtypes.h"
#include "ads_com.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_

typedef struct {
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint32_T ID;
  real_T Timestamp;
  uint8_T Data[8];
} CAN_MESSAGE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Lq4Nq8rYX8Bo8Zp9ozPXXE_
#define DEFINED_TYPEDEF_FOR_struct_Lq4Nq8rYX8Bo8Zp9ozPXXE_

typedef struct {
  real32_T a_Traj_Max;
  boolean_T Collision;
  real32_T Lim_Violation;
  real32_T JerkSqIntg_t_end;
  real32_T c3_traj;
  real32_T c4_traj;
  real32_T c5_traj;
  real32_T t_Ax_Extrem1;
  real32_T t_Ax_Extrem2;
  real32_T t_Jerk_Extrem;
  real32_T Ax_Extrem1;
  real32_T Ax_Extrem2;
  real32_T Jerk_Extrem;
  real32_T t_end;
  boolean_T Traj_Valid;
  real32_T t_Vx_Extrem1;
  real32_T t_Vx_Extrem2;
  real32_T Vx_Extrem1;
  real32_T Vx_Extrem2;
  uint8_T Traj_ID_Lgt;
} struct_Lq4Nq8rYX8Bo8Zp9ozPXXE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_qmWh3GmZX1QmAf5ChSjAgH_
#define DEFINED_TYPEDEF_FOR_struct_qmWh3GmZX1QmAf5ChSjAgH_

typedef struct {
  real32_T Longt_Dist_C0;
  real32_T Longt_Dist_C1;
  real32_T Longt_Dist_C2;
  real32_T Longt_Dist_C3;
  real32_T Longt_Dist_C4;
  real32_T Longt_Dist_C5;
  real32_T Traj_Rel_C0;
  real32_T Traj_Rel_C1;
  real32_T Traj_Rel_C2;
  real32_T Traj_Rel_C3;
  real32_T Traj_Rel_C4;
  real32_T Traj_Rel_C5;
} struct_qmWh3GmZX1QmAf5ChSjAgH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TWCgwEYGIFxnqPPhjyEB9G_
#define DEFINED_TYPEDEF_FOR_struct_TWCgwEYGIFxnqPPhjyEB9G_

typedef struct {
  boolean_T Collision;
  real32_T LimitationViolate;
  real32_T Opt;
  real32_T c3;
  real32_T c4;
  real32_T c5;
  real32_T t_Ax_Extrem1;
  real32_T t_Ax_Extrem2;
  real32_T t_Jerk_Extrem;
  real32_T Ax_Extrem1;
  real32_T Ax_Extrem2;
  real32_T Jerk_Extrem;
  real32_T t_end;
  boolean_T Traj_valid;
  real32_T ax_Max_Traj;
  uint8_T Traj_Numb;
  real32_T Opt_SubIterm[3];
  real32_T LmtViolt_SubIterm[3];
} struct_TWCgwEYGIFxnqPPhjyEB9G;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_mex28tLof33KLERna0vhlC_
#define DEFINED_TYPEDEF_FOR_struct_mex28tLof33KLERna0vhlC_

typedef struct {
  real32_T Longt_Spd_C0;
  real32_T Longt_Spd_C1;
  real32_T Longt_Spd_C2;
  real32_T Longt_Spd_C3;
  real32_T Longt_Spd_C4;
  real32_T Longt_Spd_C5;
  uint8_T Trj_ID_Spd;
} struct_mex28tLof33KLERna0vhlC;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_app_T RT_MODEL_app_T;

#endif                                 /* RTW_HEADER_app_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
