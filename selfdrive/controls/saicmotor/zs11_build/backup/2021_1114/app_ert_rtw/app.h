/*
 * File: app.h
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

#ifndef RTW_HEADER_app_h_
#define RTW_HEADER_app_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef app_COMMON_INCLUDES_
#define app_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "can_message.h"
#endif                                 /* app_COMMON_INCLUDES_ */

#include "app_types.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S4>/Chart3' */
typedef struct {
  uint16_T local_count;                /* '<S4>/Chart3' */
  uint16_T tm_count;                   /* '<S4>/Chart3' */
  uint8_T is_active_c41_app;           /* '<S4>/Chart3' */
  uint8_T is_c41_app;                  /* '<S4>/Chart3' */
  uint8_T is_OFF;                      /* '<S4>/Chart3' */
} DW_Chart3_app_T;

/* Block states (default storage) for system '<S42>/Chart4' */
typedef struct {
  real32_T local_time;                 /* '<S42>/Chart4' */
  uint8_T is_active_c24_app;           /* '<S42>/Chart4' */
  uint8_T is_c24_app;                  /* '<S42>/Chart4' */
} DW_Chart4_app_T;

/* Block signals for system '<S112>/Planner' */
typedef struct {
  real32_T Assignment[10];             /* '<S135>/Assignment' */
  real32_T Product1_mo[10];            /* '<S138>/Product1' */
  real32_T Product_ih[10];             /* '<S138>/Product' */
  real32_T Product2_o5[10];            /* '<S137>/Product2' */
  real32_T Add_jo[10];                 /* '<S136>/Add' */
  real32_T Divide_gn[9];               /* '<S139>/Divide' */
  real32_T Product30[3];               /* '<S128>/Product30' */
  real32_T Gain21;                     /* '<S128>/Gain21' */
  real32_T Add_mp;                     /* '<S124>/Add' */
  real32_T Gain7_nd;                   /* '<S139>/Gain7' */
  real32_T Subtract_gl;                /* '<S156>/Subtract' */
  real32_T Gain5_d;                    /* '<S139>/Gain5' */
  real32_T Subtract_a;                 /* '<S154>/Subtract' */
  real32_T Gain3_c;                    /* '<S139>/Gain3' */
  real32_T Sqrt;                       /* '<S131>/Sqrt' */
  real32_T Divide_ok;                  /* '<S129>/Divide' */
  int32_T s135_iter;
} B_Planner_app_T;

/* Block states (default storage) for system '<S217>/Chart' */
typedef struct {
  uint8_T is_active_c7_app;            /* '<S217>/Chart' */
  uint8_T is_c7_app;                   /* '<S217>/Chart' */
} DW_Chart_app_go_T;

/* Block signals (default storage) */
typedef struct {
  real32_T Q[8100];
  real32_T K[2700];
  real32_T K_m[2700];
  real32_T LUFactorization_o1[900];    /* '<S212>/LU Factorization' */
  real32_T BackwardSubstitution[900];  /* '<S213>/Backward Substitution' */
  real32_T K_c[900];
  real32_T A_set[270];
  real32_T M[270];
  real32_T X_ref[90];
  real32_T fv[90];
  real32_T Product2_i2[30];            /* '<S179>/Product2' */
  real32_T Product_bw[30];             /* '<S190>/Product' */
  real32_T Gain1_m[30];                /* '<S190>/Gain1' */
  real32_T Add_k[30];                  /* '<S178>/Add' */
  real32_T LUFactorization_o2[30];     /* '<S212>/LU Factorization' */
  int8_T B_set[90];
  real32_T Gain2[17];                  /* '<S40>/Gain2' */
  real32_T Gain3[17];                  /* '<S40>/Gain3' */
  CAN_MESSAGE_BUS BusCreator;          /* '<S14>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_o;        /* '<S7>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_g;        /* '<S8>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_oq;       /* '<S13>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_gw;       /* '<S6>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_l;        /* '<S5>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_i;        /* '<S22>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_p;        /* '<S21>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_d;        /* '<S16>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_oj;       /* '<S19>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_gt;       /* '<S12>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_n;        /* '<S20>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_go;       /* '<S17>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_e;        /* '<S11>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_k;        /* '<S10>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_a;        /* '<S9>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_ea;       /* '<S18>/Bus Creator' */
  CAN_MESSAGE_BUS BusCreator_ij;       /* '<S15>/Bus Creator' */
  real_T CANUnpack_o1;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o5;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o7;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o8;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o9;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o4_d;               /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o5_f;               /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o6;                 /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o7_b;               /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o8_j;               /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S8>/CAN Unpack' */
  real_T CANUnpack_o4_da;              /* '<S8>/CAN Unpack' */
  real_T CANUnpack_o5_a;               /* '<S8>/CAN Unpack' */
  real_T CANUnpack_o2_i;               /* '<S13>/CAN Unpack' */
  real_T CANUnpack_o3_f;               /* '<S13>/CAN Unpack' */
  real_T CANUnpack_o4_dw;              /* '<S13>/CAN Unpack' */
  real_T CANUnpack_o5_m;               /* '<S13>/CAN Unpack' */
  real_T CANUnpack_o7_p;               /* '<S13>/CAN Unpack' */
  real_T CANUnpack_o2_o;               /* '<S6>/CAN Unpack' */
  real_T CANUnpack_o3_e;               /* '<S6>/CAN Unpack' */
  real_T CANUnpack_o5_l;               /* '<S6>/CAN Unpack' */
  real_T PrkPdlAppdSts;                /* '<S6>/CAN Unpack' */
  real_T CANUnpack_o7_h;               /* '<S6>/CAN Unpack' */
  real_T CANUnpack_o3_l;               /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o5_o;               /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o6_h;               /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o8_l;               /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o9_d;               /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o10;                /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o12;                /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o13;                /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o16;                /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o19;                /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o20;                /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o6_k;               /* '<S22>/CAN Unpack' */
  real_T CANUnpack_o7_e;               /* '<S22>/CAN Unpack' */
  real_T CANUnpack_o1_o;               /* '<S16>/CAN Unpack' */
  real_T CANUnpack_o3_h;               /* '<S16>/CAN Unpack' */
  real_T CANUnpack1;                   /* '<S16>/CAN Unpack1' */
  real_T CANUnpack_o1_e;               /* '<S19>/CAN Unpack' */
  real_T CANUnpack_o1_h;               /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o2_c;               /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o5_mg;              /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o6_hj;              /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o7_m;               /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o8_lf;              /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o9_o;               /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o10_n;              /* '<S12>/CAN Unpack' */
  real_T CANUnpack_o2_h;               /* '<S20>/CAN Unpack' */
  real_T CANUnpack_o4_j;               /* '<S20>/CAN Unpack' */
  real_T CANUnpack_o1_g;               /* '<S11>/CAN Unpack' */
  real_T CANUnpack_o6_j;               /* '<S11>/CAN Unpack' */
  real_T CANUnpack_o2_a;               /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o3_j;               /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o2_j;               /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o4_dx;              /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o1_n;               /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o2_jy;              /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o3_e0;              /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o5_e;               /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o6_f;               /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o7_pi;              /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o8_n;               /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o9_a;               /* '<S18>/CAN Unpack' */
  real_T CANUnpack_o10_e;              /* '<S18>/CAN Unpack' */
  real_T CANUnpack1_o1;                /* '<S15>/CAN Unpack1' */
  real_T CANUnpack1_o2;                /* '<S15>/CAN Unpack1' */
  real_T CANUnpack1_o3;                /* '<S15>/CAN Unpack1' */
  real32_T ramp_cof;                   /* '<S293>/Chart' */
  real32_T ramp_cof_i;                 /* '<S283>/Chart' */
  real32_T ramp_cof_m;                 /* '<S246>/Chart' */
  real32_T ramp_cof_b;                 /* '<S252>/Chart' */
  real32_T VRD_indx_DrvrOvrrdDlyCof_sg;/* '<S243>/OvrdDely' */
  real32_T Reshape3[30];               /* '<S190>/Reshape3' */
  real32_T Reshape4[30];               /* '<S190>/Reshape4' */
  real32_T radps2degps;                /* '<S190>/radps2degps' */
  real32_T ramp_cof_c;                 /* '<S192>/Chart' */
  real32_T Add1[4];                    /* '<S242>/Add1' */
  real32_T ramp_cof_md;                /* '<S217>/Chart' */
  real32_T plan_time;                  /* '<S112>/Planning_Scheduler' */
  real32_T cost_traj[7];               /* '<S126>/cost_traj' */
  real32_T Add_cg;                     /* '<S173>/Add' */
  real32_T Add_e5;                     /* '<S172>/Add' */
  real32_T uDLookupTable;              /* '<S284>/1-D Lookup Table' */
  real32_T StrgWhlAngGrd_g;            /* '<S12>/Switch' */
  real32_T StrgWhlAng_g;               /* '<S12>/Switch' */
  real32_T Gain2_a;                    /* '<S190>/Gain2' */
  real32_T degps2radps_f;              /* '<S190>/degps2radps' */
  real32_T uDLookupTable2_m;           /* '<S220>/1-D Lookup Table2' */
  real32_T Subtract_ck;                /* '<S219>/Subtract' */
  real32_T uDLookupTable2_c;           /* '<S219>/1-D Lookup Table2' */
  real32_T mTmp1;
  real32_T mTmp2;
  int32_T l;
  int32_T s242_iter;
  int32_T i;
  int32_T s204_iter;
  int32_T loop_ub;
  int32_T loop_ub_m;
  int32_T s_idx_1;
  int32_T g_tmp;
  int32_T h_tmp;
  int32_T tmp_2_tmp;
  int32_T k;
  int32_T c;
  int32_T r;
  int32_T idx1;
  int32_T p;
  int32_T idx1_tmp;
  int32_T i_n;
  uint32_T tmp;
  uint32_T mod_data;
  uint16_T Divide_j;                   /* '<S79>/Divide' */
  int8_T i_p;
  uint8_T LftStrLght_On_p;             /* '<S5>/CAN Unpack1' */
  uint8_T RghtStrLght_On_o;            /* '<S5>/CAN Unpack1' */
  uint8_T CCSwStsRsmSw_m;              /* '<S11>/CAN Unpack1' */
  uint8_T CCSwStsOnSw_a;               /* '<S11>/CAN Unpack1' */
  uint8_T CCSwStsSetSw_f;              /* '<S11>/CAN Unpack1' */
  uint8_T CCSwStsDisIncSw_d;           /* '<S11>/CAN Unpack1' */
  uint8_T CCSwStsDistDecSw_p;          /* '<S11>/CAN Unpack1' */
  uint8_T CCSwStsCanclSwA_b;           /* '<S11>/CAN Unpack1' */
  uint8_T DataTypeConversion;          /* '<S212>/Data Type Conversion' */
  uint8_T count;                       /* '<S113>/Chart' */
  uint8_T msg[64];                     /* '<S77>/Chart' */
  uint8_T msg_e[64];                   /* '<S76>/Chart' */
  uint8_T msg_c[64];                   /* '<S75>/Chart' */
  uint8_T msg_ct[64];                  /* '<S74>/Chart' */
  uint8_T msg_j[64];                   /* '<S73>/Chart' */
  uint8_T msg_n[64];                   /* '<S62>/Chart' */
  uint8_T msg_em[64];                  /* '<S61>/Chart' */
  uint8_T msg_p[64];                   /* '<S60>/Chart' */
  uint8_T msg_i[64];                   /* '<S59>/Chart' */
  real32_T tmp_1[9];
  real32_T tmp_2[9];
  real32_T A_set_k[9];
  real32_T MatrixConcatenate1[4];      /* '<S220>/Matrix Concatenate1' */
  real32_T MatrixConcatenate[4];       /* '<S220>/Matrix Concatenate' */
  real32_T Add1_tmp[4];
  real32_T Add1_tmp_c[4];
  real32_T rtb_MatrixConcatenate1_b[4];
  real32_T rtb_Gain1_m_p[3];
  int8_T b_I[9];
  real_T Add1_c;                       /* '<S317>/Add1' */
  real_T d;
  real_T d1;
  real32_T Gain7_n[2];                 /* '<S220>/Gain7' */
  real32_T Add1_tmp_f[2];
  real32_T fv1[2];
  real32_T Ts;
  uint8_T count_n;                     /* '<S43>/Chart' */
  uint8_T count_d;                     /* '<S38>/Chart' */
  uint8_T out_cond_c;                  /* '<S44>/Chart1' */
  uint8_T out_cond;                    /* '<S44>/Chart2' */
  uint8_T u;
  uint8_T u1;
  uint8_T u2;
  uint8_T u3;
  uint8_T u4;
  uint8_T u5;
  boolean_T LogicalOperator1_l;        /* '<S24>/Logical Operator1' */
  boolean_T Compare_gw;                /* '<S57>/Compare' */
  boolean_T out_cond_k;                /* '<S95>/Chart2' */
  boolean_T out_cond_iu;               /* '<S95>/Chart1' */
  boolean_T out_cond_i;                /* '<S96>/Chart7' */
  boolean_T out_cond_aq;               /* '<S96>/Chart4' */
  boolean_T out_cond_a;                /* '<S96>/Chart5' */
  boolean_T out_cond_c4;               /* '<S96>/Chart13' */
  B_Planner_app_T Planner;             /* '<S112>/Planner' */
} B_app_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay9_DSTATE[9];             /* '<S24>/Delay9' */
  real_T Delay8_DSTATE[8];             /* '<S24>/Delay8' */
  real_T Delay7_DSTATE[7];             /* '<S24>/Delay7' */
  real_T Delay6_DSTATE[6];             /* '<S24>/Delay6' */
  real_T Delay5_DSTATE[5];             /* '<S24>/Delay5' */
  real_T Delay_DSTATE[4];              /* '<S24>/Delay' */
  real_T Delay1_DSTATE[3];             /* '<S24>/Delay1' */
  real_T Delay2_DSTATE[2];             /* '<S24>/Delay2' */
  real_T Delay3_DSTATE;                /* '<S24>/Delay3' */
  real_T Delay_DSTATE_j[4];            /* '<S23>/Delay' */
  real_T Delay1_DSTATE_p[3];           /* '<S23>/Delay1' */
  real_T Delay2_DSTATE_g[2];           /* '<S23>/Delay2' */
  real_T Delay3_DSTATE_m;              /* '<S23>/Delay3' */
  real32_T Delay_DSTATE_e;             /* '<S33>/Delay' */
  real32_T Delay_DSTATE_jg;            /* '<S29>/Delay' */
  real32_T Delay_DSTATE_l;             /* '<S30>/Delay' */
  real32_T Delay_DSTATE_jm;            /* '<S31>/Delay' */
  real32_T Delay_DSTATE_o;             /* '<S32>/Delay' */
  real32_T Delay_DSTATE_d;             /* '<S34>/Delay' */
  real32_T Delay_DSTATE_h;             /* '<S35>/Delay' */
  real32_T Delay_DSTATE_i;             /* '<S36>/Delay' */
  real32_T Delay_DSTATE_ok;            /* '<S37>/Delay' */
  real32_T Delay_DSTATE_lg[3];         /* '<S117>/Delay' */
  real32_T Delay_DSTATE_oa;            /* '<S189>/Delay' */
  real32_T Delay_DSTATE_n;             /* '<S193>/Delay' */
  real32_T Delay1_DSTATE_f;            /* '<S189>/Delay1' */
  real32_T Delay_DSTATE_k;             /* '<S192>/Delay' */
  real32_T Delay_DSTATE_a;             /* '<S283>/Delay' */
  real32_T Delay_DSTATE_l0;            /* '<S289>/Delay' */
  real32_T Delay_DSTATE_nx;            /* '<S287>/Delay' */
  real32_T Delay_DSTATE_c;             /* '<S293>/Delay' */
  real32_T Delay_DSTATE_ky;            /* '<S297>/Delay' */
  real32_T Delay1_DSTATE_j;            /* '<S293>/Delay1' */
  real32_T Delay2_DSTATE_m;            /* '<S293>/Delay2' */
  real32_T Delay_DSTATE_ic;            /* '<S317>/Delay' */
  real32_T Delay_DSTATE_k1;            /* '<S252>/Delay' */
  real32_T Delay_DSTATE_oy;            /* '<S256>/Delay' */
  real32_T UnitDelay_DSTATE;           /* '<S262>/Unit Delay' */
  real32_T Delay_DSTATE_p;             /* '<S268>/Delay' */
  real32_T Delay_DSTATE_jq;            /* '<S259>/Delay' */
  real32_T Delay1_DSTATE_a;            /* '<S259>/Delay1' */
  real32_T Delay_DSTATE_nv;            /* '<S246>/Delay' */
  real32_T Delay_DSTATE_a5;            /* '<S280>/Delay' */
  real32_T Delay_DSTATE_cc;            /* '<S190>/Delay' */
  real32_T Delay_DSTATE_om;            /* '<S238>/Delay' */
  real32_T Delay_DSTATE_lq;            /* '<S241>/Delay' */
  real32_T Delay_DSTATE_b;             /* '<S240>/Delay' */
  real32_T Delay_DSTATE_l5;            /* '<S222>/Delay' */
  real32_T Delay_DSTATE_e5;            /* '<S188>/Delay' */
  real32_T Delay1_DSTATE_e;            /* '<S188>/Delay1' */
  real32_T Delay_DSTATE_pa;            /* '<S217>/Delay' */
  real32_T local_time;                 /* '<S243>/Chart2' */
  real32_T P[4];                       /* '<S239>/Data Store Memory' */
  real32_T Divide_DWORK4;              /* '<S242>/Divide' */
  real32_T local_time_h;               /* '<S119>/Chart' */
  int_T CANUnpack_ModeSignalID;        /* '<S14>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S14>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_a;      /* '<S7>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_g;      /* '<S7>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_f;      /* '<S8>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_i;      /* '<S8>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_d;      /* '<S13>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_f;      /* '<S13>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_m;      /* '<S6>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_c;      /* '<S6>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_dv;     /* '<S5>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_e;      /* '<S5>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID;       /* '<S5>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S5>/CAN Unpack1' */
  int_T CANUnpack_ModeSignalID_h;      /* '<S22>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_n;      /* '<S22>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_l;      /* '<S21>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_en;     /* '<S21>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_dm;     /* '<S16>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_fz;     /* '<S16>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID_o;     /* '<S16>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_f;     /* '<S16>/CAN Unpack1' */
  int_T CANUnpack_ModeSignalID_c;      /* '<S19>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_cc;     /* '<S19>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID_p;     /* '<S19>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_e;     /* '<S19>/CAN Unpack1' */
  int_T CANUnpack_ModeSignalID_ay;     /* '<S12>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_a;      /* '<S12>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_me;     /* '<S20>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_o;      /* '<S20>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_mh;     /* '<S17>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_j;      /* '<S17>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_o;      /* '<S11>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_b;      /* '<S11>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID_c;     /* '<S11>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_b;     /* '<S11>/CAN Unpack1' */
  int_T CANUnpack_ModeSignalID_i;      /* '<S10>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_h;      /* '<S10>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_ie;     /* '<S9>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_ec;     /* '<S9>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_n;      /* '<S18>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_or;     /* '<S18>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID_g;     /* '<S15>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_h;     /* '<S15>/CAN Unpack1' */
  uint16_T local_count;                /* '<S94>/Chart1' */
  uint16_T tm_count;                   /* '<S94>/Chart1' */
  uint8_T DelayInput1_DSTATE;          /* '<S170>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S27>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_j;      /* '<S28>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S93>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_c;      /* '<S92>/Delay Input1' */
  boolean_T Delay_DSTATE_lz;           /* '<S94>/Delay' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S171>/Delay Input1' */
  uint8_T icLoad;                      /* '<S24>/Delay9' */
  uint8_T icLoad_p;                    /* '<S24>/Delay8' */
  uint8_T icLoad_a;                    /* '<S24>/Delay7' */
  uint8_T icLoad_d;                    /* '<S24>/Delay6' */
  uint8_T icLoad_g;                    /* '<S24>/Delay5' */
  uint8_T icLoad_pt;                   /* '<S24>/Delay' */
  uint8_T icLoad_n;                    /* '<S24>/Delay1' */
  uint8_T icLoad_b;                    /* '<S24>/Delay2' */
  uint8_T icLoad_gw;                   /* '<S24>/Delay3' */
  uint8_T icLoad_n4;                   /* '<S23>/Delay' */
  uint8_T icLoad_e;                    /* '<S23>/Delay1' */
  uint8_T icLoad_dc;                   /* '<S23>/Delay2' */
  uint8_T icLoad_l;                    /* '<S23>/Delay3' */
  uint8_T icLoad_m;                    /* '<S33>/Delay' */
  uint8_T icLoad_f;                    /* '<S29>/Delay' */
  uint8_T icLoad_c;                    /* '<S30>/Delay' */
  uint8_T icLoad_k;                    /* '<S31>/Delay' */
  uint8_T icLoad_cn;                   /* '<S32>/Delay' */
  uint8_T icLoad_dp;                   /* '<S34>/Delay' */
  uint8_T icLoad_nt;                   /* '<S35>/Delay' */
  uint8_T icLoad_dv;                   /* '<S36>/Delay' */
  uint8_T icLoad_fg;                   /* '<S37>/Delay' */
  uint8_T icLoad_mq;                   /* '<S117>/Delay' */
  uint8_T icLoad_i;                    /* '<S193>/Delay' */
  uint8_T icLoad_gn;                   /* '<S289>/Delay' */
  uint8_T icLoad_j;                    /* '<S287>/Delay' */
  uint8_T icLoad_mg;                   /* '<S297>/Delay' */
  uint8_T icLoad_px;                   /* '<S317>/Delay' */
  uint8_T icLoad_jh;                   /* '<S256>/Delay' */
  uint8_T icLoad_m2;                   /* '<S268>/Delay' */
  uint8_T icLoad_fy;                   /* '<S280>/Delay' */
  uint8_T is_active_c14_app;           /* '<S246>/Chart' */
  uint8_T is_c14_app;                  /* '<S246>/Chart' */
  uint8_T is_active_c12_app;           /* '<S243>/OvrdDely' */
  uint8_T is_c12_app;                  /* '<S243>/OvrdDely' */
  uint8_T is_active_c11_app;           /* '<S243>/Chart2' */
  uint8_T is_c11_app;                  /* '<S243>/Chart2' */
  uint8_T icLoad_pb;                   /* '<S190>/Delay' */
  uint8_T icLoad_g5;                   /* '<S238>/Delay' */
  uint8_T icLoad_g5p;                  /* '<S241>/Delay' */
  uint8_T icLoad_fgq;                  /* '<S240>/Delay' */
  uint8_T icLoad_gh;                   /* '<S222>/Delay' */
  uint8_T is_active_c5_app;            /* '<S112>/Planning_Scheduler' */
  uint8_T is_active_c1_app;            /* '<S119>/Chart' */
  uint8_T is_active_c46_app;           /* '<S94>/Chart1' */
  uint8_T is_c46_app;                  /* '<S94>/Chart1' */
  uint8_T is_OFF;                      /* '<S94>/Chart1' */
  uint8_T is_active_c45_app;           /* '<S39>/Chart' */
  uint8_T is_c45_app;                  /* '<S39>/Chart' */
  DW_Chart_app_go_T sf_Chart_b5;       /* '<S293>/Chart' */
  DW_Chart_app_go_T sf_Chart_o;        /* '<S283>/Chart' */
  DW_Chart_app_go_T sf_Chart_pw;       /* '<S252>/Chart' */
  DW_Chart4_app_T sf_Chart1_j;         /* '<S243>/Chart1' */
  DW_Chart_app_go_T sf_Chart_d;        /* '<S192>/Chart' */
  DW_Chart_app_go_T sf_Chart_fs;       /* '<S217>/Chart' */
  DW_Chart4_app_T sf_Chart7_o;         /* '<S119>/Chart7' */
  DW_Chart4_app_T sf_Chart2_n;         /* '<S119>/Chart2' */
  DW_Chart4_app_T sf_Chart1_c;         /* '<S119>/Chart1' */
  DW_Chart4_app_T sf_Chart7;           /* '<S96>/Chart7' */
  DW_Chart4_app_T sf_Chart6;           /* '<S96>/Chart6' */
  DW_Chart4_app_T sf_Chart5;           /* '<S96>/Chart5' */
  DW_Chart4_app_T sf_Chart4_i;         /* '<S96>/Chart4' */
  DW_Chart4_app_T sf_Chart13;          /* '<S96>/Chart13' */
  DW_Chart4_app_T sf_Chart3_c;         /* '<S95>/Chart3' */
  DW_Chart4_app_T sf_Chart2_a;         /* '<S95>/Chart2' */
  DW_Chart4_app_T sf_Chart1_h;         /* '<S95>/Chart1' */
  DW_Chart4_app_T sf_Chart4_a;         /* '<S42>/Chart4' */
  DW_Chart3_app_T sf_Chart4;           /* '<S4>/Chart4' */
  DW_Chart3_app_T sf_Chart3;           /* '<S4>/Chart3' */
} DW_app_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Delay_Reset_ZCE;          /* '<S117>/Delay' */
  ZCSigState Delay_Reset_ZCE_e;        /* '<S289>/Delay' */
  ZCSigState Delay_Reset_ZCE_b;        /* '<S287>/Delay' */
  ZCSigState Delay_Reset_ZCE_j;        /* '<S317>/Delay' */
  ZCSigState Delay_Reset_ZCE_l;        /* '<S256>/Delay' */
  ZCSigState Delay_Reset_ZCE_lg;       /* '<S280>/Delay' */
  ZCSigState Delay_Reset_ZCE_c;        /* '<S190>/Delay' */
  ZCSigState Delay_Reset_ZCE_o;        /* '<S241>/Delay' */
  ZCSigState Delay_Reset_ZCE_h;        /* '<S240>/Delay' */
} PrevZCX_app_T;

/* Invariant block signals for system '<S112>/Planner' */
typedef struct {
  const real32_T Gain;                 /* '<S123>/Gain' */
  const real32_T DataTypeConversion;   /* '<S124>/Data Type Conversion' */
  const real32_T Bias;                 /* '<S124>/Bias' */
  const real32_T Subtract;             /* '<S124>/Subtract' */
  const real32_T Divide;               /* '<S124>/Divide' */
  const real32_T DataTypeConversion_a; /* '<S125>/Data Type Conversion' */
  const real32_T Bias_i;               /* '<S125>/Bias' */
  const real32_T Subtract_k;           /* '<S125>/Subtract' */
  const real32_T Divide_d;             /* '<S125>/Divide' */
} ConstB_Planner_app_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint32_T DataTypeConversion;   /* '<S59>/Data Type Conversion' */
  const real32_T Gain1;                /* '<S33>/Gain1' */
  const real32_T Divide2;              /* '<S33>/Divide2' */
  const real32_T Add;                  /* '<S33>/Add' */
  const real32_T alpha;                /* '<S33>/Divide' */
  const real32_T ualpha;               /* '<S33>/Divide1' */
  const real32_T Gain1_i;              /* '<S29>/Gain1' */
  const real32_T Divide2_m;            /* '<S29>/Divide2' */
  const real32_T Add_l;                /* '<S29>/Add' */
  const real32_T alpha_b;              /* '<S29>/Divide' */
  const real32_T ualpha_g;             /* '<S29>/Divide1' */
  const real32_T Gain1_j;              /* '<S30>/Gain1' */
  const real32_T Divide2_c;            /* '<S30>/Divide2' */
  const real32_T Add_o;                /* '<S30>/Add' */
  const real32_T alpha_p;              /* '<S30>/Divide' */
  const real32_T ualpha_i;             /* '<S30>/Divide1' */
  const real32_T Gain1_d;              /* '<S31>/Gain1' */
  const real32_T Divide2_a;            /* '<S31>/Divide2' */
  const real32_T Add_m;                /* '<S31>/Add' */
  const real32_T alpha_c;              /* '<S31>/Divide' */
  const real32_T ualpha_n;             /* '<S31>/Divide1' */
  const real32_T Gain1_o;              /* '<S32>/Gain1' */
  const real32_T Divide2_g;            /* '<S32>/Divide2' */
  const real32_T Add_j;                /* '<S32>/Add' */
  const real32_T alpha_p3;             /* '<S32>/Divide' */
  const real32_T ualpha_a;             /* '<S32>/Divide1' */
  const real32_T Gain1_l;              /* '<S34>/Gain1' */
  const real32_T Divide2_h;            /* '<S34>/Divide2' */
  const real32_T Add_o1;               /* '<S34>/Add' */
  const real32_T alpha_j;              /* '<S34>/Divide' */
  const real32_T ualpha_l;             /* '<S34>/Divide1' */
  const real32_T Gain1_a;              /* '<S35>/Gain1' */
  const real32_T Divide2_d;            /* '<S35>/Divide2' */
  const real32_T Add_e;                /* '<S35>/Add' */
  const real32_T alpha_o;              /* '<S35>/Divide' */
  const real32_T ualpha_n1;            /* '<S35>/Divide1' */
  const real32_T Gain1_e;              /* '<S36>/Gain1' */
  const real32_T Divide2_cn;           /* '<S36>/Divide2' */
  const real32_T Add_d;                /* '<S36>/Add' */
  const real32_T alpha_a;              /* '<S36>/Divide' */
  const real32_T ualpha_j;             /* '<S36>/Divide1' */
  const real32_T Gain1_ou;             /* '<S37>/Gain1' */
  const real32_T Divide2_l;            /* '<S37>/Divide2' */
  const real32_T Add_b;                /* '<S37>/Add' */
  const real32_T alpha_l;              /* '<S37>/Divide' */
  const real32_T ualpha_k;             /* '<S37>/Divide1' */
  const real32_T UnaryMinus;           /* '<S191>/Unary Minus' */
  const real32_T Gain1_is;             /* '<S193>/Gain1' */
  const real32_T Add_f;                /* '<S193>/Add' */
  const real32_T alpha_os;             /* '<S193>/Divide' */
  const real32_T ualpha_jr;            /* '<S193>/Divide1' */
  const real32_T Add_n;                /* '<S243>/Add' */
  const real32_T Divide;               /* '<S243>/Divide' */
  const real32_T Product4;             /* '<S243>/Product4' */
  const real32_T Product;              /* '<S256>/Product' */
  const real32_T UnaryMinus_c;         /* '<S252>/Unary Minus' */
  const real32_T Product1;             /* '<S256>/Product1' */
  const real32_T UnaryMinus_g;         /* '<S262>/Unary Minus' */
  const real32_T Gain1_h;              /* '<S268>/Gain1' */
  const real32_T Add_os;               /* '<S268>/Add' */
  const real32_T alpha_g;              /* '<S268>/Divide' */
  const real32_T ualpha_n2;            /* '<S268>/Divide1' */
  const real32_T UnaryMinus_e;         /* '<S264>/Unary Minus' */
  const real32_T UnaryMinus_k;         /* '<S259>/Unary Minus' */
  const real32_T Product_h;            /* '<S280>/Product' */
  const real32_T UnaryMinus_j;         /* '<S247>/Unary Minus' */
  const real32_T Product1_j;           /* '<S280>/Product1' */
  const real32_T Product_o;            /* '<S289>/Product' */
  const real32_T UnaryMinus_h;         /* '<S285>/Unary Minus' */
  const real32_T Product1_l;           /* '<S289>/Product1' */
  const real32_T UnaryMinus_i;         /* '<S286>/Unary Minus' */
  const real32_T Gain1_ii;             /* '<S287>/Gain1' */
  const real32_T Add_fu;               /* '<S287>/Add' */
  const real32_T alpha_jw;             /* '<S287>/Divide' */
  const real32_T ualpha_ig;            /* '<S287>/Divide1' */
  const real32_T Abs;                  /* '<S300>/Abs' */
  const real32_T UnaryMinus_kn;        /* '<S300>/Unary Minus' */
  const real32_T UnaryMinus1;          /* '<S300>/Unary Minus1' */
  const real32_T UnaryMinus_gj;        /* '<S303>/Unary Minus' */
  const real32_T UnaryMinus_f;         /* '<S293>/Unary Minus' */
  const real32_T UnaryMinus1_m;        /* '<S293>/Unary Minus1' */
  const real32_T Gain1_jo;             /* '<S297>/Gain1' */
  const real32_T Divide2_j;            /* '<S297>/Divide2' */
  const real32_T Add_oa;               /* '<S297>/Add' */
  const real32_T alpha_ge;             /* '<S297>/Divide' */
  const real32_T ualpha_nu;            /* '<S297>/Divide1' */
  const real32_T Abs_b;                /* '<S216>/Abs' */
  const real32_T UnaryMinus_ck;        /* '<S216>/Unary Minus' */
  const real32_T Gain1_ax;             /* '<S238>/Gain1' */
  const real32_T Add_a;                /* '<S238>/Add' */
  const real32_T alpha_gu;             /* '<S238>/Divide' */
  const real32_T ualpha_o;             /* '<S238>/Divide1' */
  const real32_T TmpSignalConversionAtMathFu[2];
  const real32_T MathFunction[2];      /* '<S239>/Math Function' */
  const real32_T MathFunction1[2];     /* '<S239>/Math Function1' */
  const real32_T Gain1_b;              /* '<S240>/Gain1' */
  const real32_T Add_g;                /* '<S240>/Add' */
  const real32_T alpha_gg;             /* '<S240>/Divide' */
  const real32_T ualpha_f;             /* '<S240>/Divide1' */
  const real32_T Gain1_ag;             /* '<S241>/Gain1' */
  const real32_T Add_c;                /* '<S241>/Add' */
  const real32_T alpha_i;              /* '<S241>/Divide' */
  const real32_T ualpha_ip;            /* '<S241>/Divide1' */
  const real32_T Gain1_di;             /* '<S222>/Gain1' */
  const real32_T Add_p;                /* '<S222>/Add' */
  const real32_T alpha_pw;             /* '<S222>/Divide' */
  const real32_T ualpha_c;             /* '<S222>/Divide1' */
  const real32_T TmpSignalConversionAtMath_j[2];
  const real32_T MathFunction2[2];     /* '<S242>/Math Function2' */
  const real32_T MathFunction3[2];     /* '<S242>/Math Function3' */
  const uint16_T Product_i;            /* '<S80>/Product' */
  const uint8_T Divide_b;              /* '<S82>/Divide' */
  const uint8_T Divide1;               /* '<S82>/Divide1' */
  const uint8_T Mod;                   /* '<S82>/Mod' */
  const uint8_T Subtract;              /* '<S82>/Subtract' */
  const uint8_T Add_c1;                /* '<S82>/Add' */
  const uint8_T Divide_l;              /* '<S84>/Divide' */
  const uint8_T Divide1_g;             /* '<S84>/Divide1' */
  const uint8_T Mod_n;                 /* '<S84>/Mod' */
  const uint8_T Subtract_o;            /* '<S84>/Subtract' */
  const uint8_T Add_nm;                /* '<S84>/Add' */
  const uint8_T Divide_a;              /* '<S86>/Divide' */
  const uint8_T Divide1_i;             /* '<S86>/Divide1' */
  const uint8_T Mod_e;                 /* '<S86>/Mod' */
  const uint8_T Subtract_l;            /* '<S86>/Subtract' */
  const uint8_T Add_ml;                /* '<S86>/Add' */
  const uint8_T Divide_bs;             /* '<S88>/Divide' */
  const uint8_T Divide1_m;             /* '<S88>/Divide1' */
  const uint8_T Mod_eb;                /* '<S88>/Mod' */
  const uint8_T Subtract_e;            /* '<S88>/Subtract' */
  const uint8_T Add_ow;                /* '<S88>/Add' */
  const uint8_T Divide_k;              /* '<S90>/Divide' */
  const uint8_T Divide1_ma;            /* '<S90>/Divide1' */
  const uint8_T Mod_b;                 /* '<S90>/Mod' */
  const uint8_T Subtract_m;            /* '<S90>/Subtract' */
  const uint8_T Add_h;                 /* '<S90>/Add' */
  const uint8_T Divide_h;              /* '<S64>/Divide' */
  const uint8_T Divide1_ik;            /* '<S64>/Divide1' */
  const uint8_T Mod_et;                /* '<S64>/Mod' */
  const uint8_T Subtract_ms;           /* '<S64>/Subtract' */
  const uint8_T Add_cu;                /* '<S64>/Add' */
  const uint8_T Divide_e;              /* '<S66>/Divide' */
  const uint8_T Divide1_b;             /* '<S66>/Divide1' */
  const uint8_T Mod_c;                 /* '<S66>/Mod' */
  const uint8_T Subtract_p;            /* '<S66>/Subtract' */
  const uint8_T Add_k;                 /* '<S66>/Add' */
  const uint8_T Divide_ad;             /* '<S68>/Divide' */
  const uint8_T Divide1_i2;            /* '<S68>/Divide1' */
  const uint8_T Mod_l;                 /* '<S68>/Mod' */
  const uint8_T Subtract_lm;           /* '<S68>/Subtract' */
  const uint8_T Add_ps;                /* '<S68>/Add' */
  const uint8_T Divide_i;              /* '<S70>/Divide' */
  const uint8_T Divide1_l;             /* '<S70>/Divide1' */
  const uint8_T Mod_o;                 /* '<S70>/Mod' */
  const uint8_T Subtract_j;            /* '<S70>/Subtract' */
  const uint8_T Add_nd;                /* '<S70>/Add' */
  const boolean_T LogicalOperator6;    /* '<S191>/Logical Operator6' */
  const boolean_T Compare;             /* '<S304>/Compare' */
  const boolean_T LogicalOperator6_j;  /* '<S300>/Logical Operator6' */
  const boolean_T Compare_d;           /* '<S223>/Compare' */
  const boolean_T LogicalOperator6_n;  /* '<S216>/Logical Operator6' */
  ConstB_Planner_app_T Planner;        /* '<S112>/Planner' */
} ConstB_app_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S220>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData[8];

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S220>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData[8];

  /* Computed Parameter: uDLookupTable2_tableData
   * Referenced by: '<S220>/1-D Lookup Table2'
   */
  real32_T uDLookupTable2_tableData[8];

  /* Computed Parameter: uDLookupTable1_tableData_p
   * Referenced by: '<S219>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData_p[6];

  /* Computed Parameter: uDLookupTable2_tableData_i
   * Referenced by: '<S219>/1-D Lookup Table2'
   */
  real32_T uDLookupTable2_tableData_i[6];

  /* Pooled Parameter (Expression: [0,0.092917,0.24708,0.33952,0.4,0.4,0.5,0.5])
   * Referenced by:
   *   '<S188>/1-D Lookup Table1'
   *   '<S189>/1-D Lookup Table1'
   */
  real32_T pooled24[8];

  /* Pooled Parameter (Expression: [1,1,0.8,0.3,0.1,0])
   * Referenced by:
   *   '<S189>/1-D Lookup Table3'
   *   '<S190>/1-D Lookup Table3'
   */
  real32_T pooled25[6];

  /* Pooled Parameter (Expression: [0,0.5,1,1.5,2,3])
   * Referenced by:
   *   '<S189>/1-D Lookup Table3'
   *   '<S190>/1-D Lookup Table3'
   */
  real32_T pooled26[6];

  /* Pooled Parameter (Expression: [0,0.2,0.2,0.3,0.3,0.3,0.3,0.3])
   * Referenced by:
   *   '<S188>/1-D Lookup Table'
   *   '<S189>/Ki_'
   */
  real32_T pooled30[8];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S188>/1-D Lookup Table'
   *   '<S188>/1-D Lookup Table1'
   *   '<S189>/1-D Lookup Table1'
   *   '<S189>/Ki_'
   *   '<S220>/1-D Lookup Table'
   *   '<S220>/1-D Lookup Table1'
   *   '<S220>/1-D Lookup Table2'
   *   '<S284>/1-D Lookup Table'
   */
  real32_T pooled31[8];

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S190>/Constant'
   */
  real32_T Constant_Value_g[17];

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S205>/Constant'
   */
  real32_T Constant_Value_e[900];

  /* Pooled Parameter (Expression: [0.06:0.06:1.8])
   * Referenced by:
   *   '<S112>/reference_timeseries'
   *   '<S190>/reference_timeseries'
   */
  real32_T pooled32[30];

  /* Computed Parameter: uDLookupTable_tableData_h
   * Referenced by: '<S190>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_h[6];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S190>/1-D Lookup Table'
   *   '<S190>/1-D Lookup Table1'
   *   '<S190>/1-D Lookup Table2'
   *   '<S219>/1-D Lookup Table1'
   *   '<S219>/1-D Lookup Table2'
   *   '<S265>/1-D Lookup Table'
   */
  real32_T pooled33[6];

  /* Pooled Parameter (Expression: [1 1 1 1 1 1])
   * Referenced by:
   *   '<S190>/1-D Lookup Table1'
   *   '<S190>/1-D Lookup Table2'
   *   '<S260>/1-D Lookup Table1'
   *   '<S260>/1-D Lookup Table12'
   *   '<S260>/1-D Lookup Table2'
   *   '<S260>/1-D Lookup Table6'
   */
  real32_T pooled34[6];

  /* Pooled Parameter (Expression: [0,1,2,3,4,5])
   * Referenced by:
   *   '<S260>/1-D Lookup Table1'
   *   '<S260>/1-D Lookup Table12'
   *   '<S260>/1-D Lookup Table2'
   *   '<S260>/1-D Lookup Table6'
   */
  real32_T pooled38[6];

  /* Pooled Parameter (Expression: [4,4,2.7911,2.0063,1.4367,1.0443,0.55645,0.3771,0.3,0.3])
   * Referenced by:
   *   '<S260>/1-D Lookup Table13'
   *   '<S260>/1-D Lookup Table8'
   */
  real32_T pooled39[10];

  /* Pooled Parameter (Expression: [0,2,4,6,8,10,15,20,25,30])
   * Referenced by:
   *   '<S260>/1-D Lookup Table13'
   *   '<S260>/1-D Lookup Table8'
   */
  real32_T pooled40[10];

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S260>/1-D Lookup Table3'
   */
  real32_T uDLookupTable3_tableData[15];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S293>/KI_loTable'
   *   '<S293>/KP_loTable'
   *   '<S253>/1-D Lookup Table'
   *   '<S253>/1-D Lookup Table1'
   *   '<S260>/1-D Lookup Table10'
   *   '<S260>/1-D Lookup Table11'
   *   '<S260>/1-D Lookup Table3'
   *   '<S260>/1-D Lookup Table4'
   *   '<S260>/1-D Lookup Table5'
   *   '<S260>/1-D Lookup Table7'
   */
  real32_T pooled41[15];

  /* Pooled Parameter (Expression: [1,1.0522,1.2419,1.5065,1.8355,2.2871,2.6613,2.8226,3,3])
   * Referenced by:
   *   '<S260>/1-D Lookup Table14'
   *   '<S260>/1-D Lookup Table9'
   */
  real32_T pooled42[10];

  /* Pooled Parameter (Expression: [0,3,6,8,10,14,18,20,25,30])
   * Referenced by:
   *   '<S260>/1-D Lookup Table14'
   *   '<S260>/1-D Lookup Table9'
   */
  real32_T pooled43[10];

  /* Computed Parameter: uDLookupTable4_tableData
   * Referenced by: '<S260>/1-D Lookup Table4'
   */
  real32_T uDLookupTable4_tableData[15];

  /* Pooled Parameter (Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by:
   *   '<S260>/1-D Lookup Table11'
   *   '<S260>/1-D Lookup Table5'
   */
  real32_T pooled44[15];

  /* Pooled Parameter (Expression: [0.003,0.002,0.0014,0.001,0.001,0.0008,0.0008,0.0008,0.0008,0.0008,0.0008])
   * Referenced by:
   *   '<S260>/1-D Lookup Table15'
   *   '<S260>/1-D Lookup Table17'
   */
  real32_T pooled45[11];

  /* Pooled Parameter (Expression: [0,1,2,4,6,8,10,15,20,30,40])
   * Referenced by:
   *   '<S260>/1-D Lookup Table15'
   *   '<S260>/1-D Lookup Table17'
   */
  real32_T pooled46[11];

  /* Computed Parameter: uDLookupTable7_tableData
   * Referenced by: '<S260>/1-D Lookup Table7'
   */
  real32_T uDLookupTable7_tableData[15];

  /* Computed Parameter: uDLookupTable10_tableData
   * Referenced by: '<S260>/1-D Lookup Table10'
   */
  real32_T uDLookupTable10_tableData[15];

  /* Expression: single([1 1 1 0.9 0.7 0.2 0 0 0 0 0 0 0 0 0 0 0])
   * Referenced by: '<S243>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData_j[17];

  /* Expression: single([0 0.5 1 1.5 2 2.5 3 3.5 4 4.5 5 5.5 6 6.5 7 7.5 8])
   * Referenced by: '<S243>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_bp01Data[17];

  /* Computed Parameter: StrWhlAng_RateLmt_tableData
   * Referenced by: '<S313>/StrWhlAng_RateLmt'
   */
  real32_T StrWhlAng_RateLmt_tableData[16];

  /* Computed Parameter: StrWhlAng_RateLmt_bp01Data
   * Referenced by: '<S313>/StrWhlAng_RateLmt'
   */
  real32_T StrWhlAng_RateLmt_bp01Data[16];

  /* Computed Parameter: LUT_MaxLatAcc_tableData
   * Referenced by: '<S314>/LUT_MaxLatAcc'
   */
  real32_T LUT_MaxLatAcc_tableData[18];

  /* Computed Parameter: LUT_MaxLatAcc_bp01Data
   * Referenced by: '<S314>/LUT_MaxLatAcc'
   */
  real32_T LUT_MaxLatAcc_bp01Data[18];

  /* Computed Parameter: uDLookupTable_tableData_h4
   * Referenced by: '<S284>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_h4[8];

  /* Computed Parameter: KP_loTable_tableData
   * Referenced by: '<S293>/KP_loTable'
   */
  real32_T KP_loTable_tableData[15];

  /* Computed Parameter: KI_loTable_tableData
   * Referenced by: '<S293>/KI_loTable'
   */
  real32_T KI_loTable_tableData[15];

  /* Computed Parameter: uDLookupTable1_tableData_jx
   * Referenced by: '<S253>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData_jx[15];

  /* Computed Parameter: uDLookupTable_tableData_i
   * Referenced by: '<S253>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_i[15];

  /* Computed Parameter: uDLookupTable_tableData_g
   * Referenced by: '<S265>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_g[6];

  /* Pooled Parameter (Expression: zeros(1,64))
   * Referenced by:
   *   '<S44>/Constant13'
   *   '<S45>/Constant'
   */
  uint8_T pooled65[64];

  /* Pooled Parameter (Expression: [128 64 32 16 8 4 2 1])
   * Referenced by:
   *   '<S58>/Constant3'
   *   '<S71>/Constant3'
   */
  uint8_T pooled68[8];
} ConstP_app_T;

/* Real-time Model Data Structure */
struct tag_RTM_app_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_app_T app_B;

/* Block states (default storage) */
extern DW_app_T app_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_app_T app_PrevZCX;
extern const ConstB_app_T app_ConstB;  /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_app_T app_ConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T ChLKACtrlSts;            /* '<S14>/CAN Unpack' */
extern real_T ChLKARespToq;            /* '<S14>/CAN Unpack' */
extern real_T DrvrStrgDlvrdToq;        /* '<S14>/CAN Unpack' */
extern real_T StrgCustSetngDspCmd;     /* '<S14>/CAN Unpack' */
extern real_T LftStrLght_On;           /* '<S5>/CAN Unpack' */
extern real_T RghtStrLght_On;          /* '<S5>/CAN Unpack' */
extern real_T BrkPdlDrvrAppdPrs;       /* '<S16>/CAN Unpack' */
extern real_T TJAICASwReq;             /* '<S19>/CAN Unpack' */
extern real_T StrgWhlAngGrd;           /* '<S12>/CAN Unpack' */
extern real_T StrgWhlAng;              /* '<S12>/CAN Unpack' */
extern real_T CCSwStsCanclSwA;         /* '<S11>/CAN Unpack' */
extern real_T CCSwStsDistDecSw;        /* '<S11>/CAN Unpack' */
extern real_T CCSwStsDisIncSw;         /* '<S11>/CAN Unpack' */
extern real_T CCSwStsOnSw;             /* '<S11>/CAN Unpack' */
extern real_T CCSwStsRsmSw;            /* '<S11>/CAN Unpack' */
extern real_T CCSwStsSetSw;            /* '<S11>/CAN Unpack' */
extern real32_T VehCP_T_ChLKARespToq_sg;/* '<S14>/Data Type Conversion1' */
extern real32_T VehCP_T_DrvrStrgDlvrdToq_sg;/* '<S14>/Data Type Conversion2' */
extern real32_T PTAccToqReqResp;       /* '<S7>/CAN Unpack' */
extern real32_T VehDynYawRate;         /* '<S13>/CAN Unpack' */
extern real32_T AccelActuPos;          /* '<S6>/CAN Unpack' */
extern real32_T ACCDetObjExistPrblty;  /* '<S22>/CAN Unpack' */
extern real32_T ACCDetObjLatRltvDist;  /* '<S22>/CAN Unpack' */
extern real32_T ACCDetObjLongRltvDist; /* '<S22>/CAN Unpack' */
extern real32_T ACCDetObjLongRltvSpd;  /* '<S22>/CAN Unpack' */
extern real32_T VehCP_p_VrkPdlDrvrAppdPrs_sg;/* '<S16>/Data Type Conversion' */
extern real32_T VehSpdAvgDrvn;         /* '<S20>/CAN Unpack' */
extern real32_T VehSpdAvgNonDrvn;      /* '<S20>/CAN Unpack' */
extern real32_T VSELatAcc;             /* '<S9>/CAN Unpack' */
extern real32_T VSELongAcc;            /* '<S9>/CAN Unpack' */
extern real32_T ChACCAccReqResp;       /* '<S18>/CAN Unpack' */
extern real32_T APP_IN_yr_VehDynYawRate_sg;/* '<S4>/Signal Copy8' */
extern real32_T VehCP_yr_VehDynYawRate_sg;/* '<S33>/Sum' */
extern real32_T VehCP_prec_VehAccelPos_sg;/* '<S29>/Sum' */
extern real32_T VehCP_is_ACCDetObjExistProb_sg;/* '<S4>/Signal Copy11' */
extern real32_T VehCP_d_ACCDetObjLatRltvDist_sg;/* '<S4>/Signal Copy15' */
extern real32_T VehCP_d_ACCDetObjLongRltvDist_sg;/* '<S4>/Signal Copy22' */
extern real32_T VehCP_v_ACCDetObjLongRltvSpd_sg;/* '<S4>/Signal Copy26' */
extern real32_T VehCP_angD_StrgWhlAng_sg;/* '<S30>/Sum' */
extern real32_T VehCP_V_VehSpdAvgDrvn_sg;/* '<S4>/Saturation' */
extern real32_T VehCP_V_ClstDspdVehSpd_sg;/* '<S32>/Sum' */
extern real32_T VehCP_W_StrgWhlAngGrd_sg;/* '<S34>/Sum' */
extern real32_T VehCP_V_VehSpdAvgNonDrvn_sg;/* '<S4>/Saturation1' */
extern real32_T VehCP_a_VSELatAcc_sg;  /* '<S36>/Sum' */
extern real32_T VehCP_a_VSELongAcc_sg; /* '<S37>/Sum' */
extern real32_T YRC_angD_ReqStrgWhlAng_sg;/* '<S296>/Switch' */
extern real32_T LKA_ReqToq;            /* '<S114>/Saturation' */
extern uint16_T ClstDspdVehSpd;        /* '<S17>/CAN Unpack' */
extern uint8_T VehCP_n_ChLKACtrlSts_u8;/* '<S14>/Data Type Conversion' */
extern uint8_T VehCP_n_StrgCustSetngDspCmd_u8;/* '<S14>/Data Type Conversion3' */
extern uint8_T AccelOvrd;              /* '<S7>/CAN Unpack' */
extern uint8_T AirBagDplHS;            /* '<S8>/CAN Unpack' */
extern uint8_T DrvrSbltAtcHS;          /* '<S8>/CAN Unpack' */
extern uint8_T ABSActvSts;             /* '<S13>/CAN Unpack' */
extern uint8_T EnRunSts;               /* '<S6>/CAN Unpack' */
extern uint8_T BntOpenSts;             /* '<S5>/CAN Unpack' */
extern uint8_T DipdBeamLghtOn;         /* '<S5>/CAN Unpack' */
extern uint8_T DrvrDoorOpenSts;        /* '<S5>/CAN Unpack' */
extern uint8_T FrtPsngDoorOpenSts;     /* '<S5>/CAN Unpack' */
extern uint8_T MainBeamLghtOn;         /* '<S5>/CAN Unpack' */
extern uint8_T RLDoorOpenSts;          /* '<S5>/CAN Unpack' */
extern uint8_T RRDoorOpenSts;          /* '<S5>/CAN Unpack' */
extern uint8_T ACCDetObjID;            /* '<S22>/CAN Unpack' */
extern uint8_T LDWLKASwReq;            /* '<S21>/CAN Unpack' */
extern uint8_T RstrFctryDeftsReq;      /* '<S21>/CAN Unpack' */
extern uint8_T AEBSwReq;               /* '<S19>/CAN Unpack' */
extern uint8_T FCWSnstvLvlReq;         /* '<S19>/CAN Unpack' */
extern uint8_T FCWSwReq;               /* '<S19>/CAN Unpack' */
extern uint8_T LDWAdoWarnngReq;        /* '<S19>/CAN Unpack' */
extern uint8_T LDWLKAHapticWrnngReq;   /* '<S19>/CAN Unpack' */
extern uint8_T LDWSnstvtLvlReq;        /* '<S19>/CAN Unpack' */
extern uint8_T VehCP_n_TJAICASwReq_u8; /* '<S19>/CAN Unpack1' */
extern uint8_T FrtWiperSwSts;          /* '<S17>/CAN Unpack' */
extern uint8_T CCSwStsSpdDecSw;        /* '<S11>/CAN Unpack' */
extern uint8_T CCSwStsSpdIncSw;        /* '<S11>/CAN Unpack' */
extern uint8_T CCSwStsSwDataIntgty;    /* '<S11>/CAN Unpack' */
extern uint8_T TrEstdGear;             /* '<S10>/CAN Unpack' */
extern uint8_T TrShftLvrPos;           /* '<S10>/CAN Unpack' */
extern uint8_T VehCP_LeftBSD_Warnning_u8;/* '<S15>/Data Type Conversion' */
extern uint8_T VehCP_RightBSD_Warnning_u8;/* '<S15>/Data Type Conversion1' */
extern uint8_T VehCP_BSDStatus_u8;     /* '<S15>/Data Type Conversion2' */
extern uint8_T VehCP_n_LDWLKASwReq_u8; /* '<S4>/Signal Copy13' */
extern uint8_T VehCP_idx_ACCDetObjID_u8;/* '<S4>/Signal Copy18' */
extern uint8_T VehCP_n_RstrFctryDeftsReq_u8;/* '<S4>/Signal Copy23' */
extern uint8_T VehCP_n_LDWAdoWarnngReq_u8;/* '<S4>/Signal Copy30' */
extern uint8_T VehCP_n_LDWLKAHapticWrnngReq_u8;/* '<S4>/Signal Copy31' */
extern uint8_T VehCP_n_FrtWiperSwSts_u8;/* '<S4>/Signal Copy34' */
extern uint8_T VehCP_n_LDWSnstvtLvlReq_u8;/* '<S4>/Signal Copy35' */
extern uint8_T VehCP_n_TrEstdGear_u8;  /* '<S4>/Signal Copy39' */
extern uint8_T VehCP_n_TrShftLvrPos_u8;/* '<S4>/Signal Copy45' */
extern uint8_T LKA_ReqToqSts;          /* '<S114>/Switch1' */
extern uint8_T FVCM_EPS_Frame[8];      /* '<S45>/Signal Copy' */
extern uint8_T FVCM_HMI_Frame[8];      /* '<S44>/Signal Copy' */
extern boolean_T VehCP_is_VehDataValid_bl;/* '<S1>/Logical Operator' */
extern boolean_T VehCP_is_ABSActv_bl;  /* '<S4>/Data Type Conversion7' */
extern boolean_T VehCP_is_EngRun_bl;   /* '<S4>/Data Type Conversion8' */
extern boolean_T VehCP_is_DrvrSbltActv_bl;/* '<S4>/Data Type Conversion9' */
extern boolean_T VehCP_is_BntOpen_bl;  /* '<S4>/Data Type Conversion12' */
extern boolean_T VehCP_is_DipdBeamLghtOn_bl;/* '<S4>/Data Type Conversion14' */
extern boolean_T VehCP_is_DrvrDoorOpen_bl;/* '<S4>/Data Type Conversion16' */
extern boolean_T VehCP_is_FrtPsngDoorOpen_bl;/* '<S4>/Data Type Conversion18' */
extern boolean_T VehCP_is_MainBeamLghtOn_bl;/* '<S4>/Data Type Conversion22' */
extern boolean_T VehCP_is_RLDoorOpen_bl;/* '<S4>/Data Type Conversion26' */
extern boolean_T VehCP_is_RRDoorOpen_bl;/* '<S4>/Data Type Conversion27' */
extern boolean_T VehCP_is_CCSwStsCancl_bl;/* '<S4>/Data Type Conversion39' */
extern boolean_T VehCP_is_CCSwStsDistDec_bl;/* '<S4>/Data Type Conversion40' */
extern boolean_T VehCP_is_CCSwStsDisInc_bl;/* '<S4>/Data Type Conversion43' */
extern boolean_T VehCP_is_CCSwStsOn_bl;/* '<S4>/Data Type Conversion44' */
extern boolean_T VehCP_is_CCSwStsRsm_bl;/* '<S4>/Data Type Conversion45' */
extern boolean_T VehCP_is_CCSwStsSet_bl;/* '<S4>/Data Type Conversion46' */
extern boolean_T VehCP_is_CCSwStsSpdDec_bl;/* '<S4>/Data Type Conversion48' */
extern boolean_T VehCP_is_CCSwStsSpdInc_bl;/* '<S4>/Data Type Conversion50' */
extern boolean_T Arb_is_LatCtrlActv_bl;/* '<S39>/Signal Copy' */
extern boolean_T VehCP_is_RghtStrgLmpOn_bl;/* '<S4>/Chart4' */
extern boolean_T VehCP_is_LftStrgLmpOn_bl;/* '<S4>/Chart3' */

/* Model entry point functions */
extern void app_initialize(void);
extern void app_terminate(void);

/* Customized model step function */
extern void app_step(uint8_T arg_can_492[8], uint8_T arg_can_251[8], uint8_T
                     arg_can_355[8], uint8_T arg_can_489[8], uint8_T
                     arg_can_201[8], uint8_T arg_can_1130[8], uint8_T
                     arg_can_886[8], uint8_T arg_can_901[8], uint8_T
                     arg_can_532[8], uint8_T arg_can_485[8], uint8_T
                     arg_can_851[8], uint8_T arg_can_540[8], uint8_T
                     arg_can_758[8], uint8_T arg_can_404[8], uint8_T
                     arg_can_481[8], uint8_T arg_can_389[8], uint8_T
                     arg_can_593[8], uint8_T arg_can_516[8], real32_T
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
                     [17]);

/* Real-time Model object */
extern RT_MODEL_app_T *const app_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Display' : Unused code path elimination
 * Block '<S5>/Display' : Unused code path elimination
 * Block '<S5>/Scope' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<S9>/Display' : Unused code path elimination
 * Block '<S10>/Scope' : Unused code path elimination
 * Block '<S10>/Scope1' : Unused code path elimination
 * Block '<S11>/Display' : Unused code path elimination
 * Block '<S16>/Display' : Unused code path elimination
 * Block '<S16>/Scope' : Unused code path elimination
 * Block '<S17>/Display' : Unused code path elimination
 * Block '<S19>/Display' : Unused code path elimination
 * Block '<S19>/Scope' : Unused code path elimination
 * Block '<S21>/Display' : Unused code path elimination
 * Block '<S3>/Scope' : Unused code path elimination
 * Block '<S3>/Scope1' : Unused code path elimination
 * Block '<S38>/Constant' : Unused code path elimination
 * Block '<S38>/Constant3' : Unused code path elimination
 * Block '<S38>/Constant4' : Unused code path elimination
 * Block '<S38>/Constant5' : Unused code path elimination
 * Block '<S38>/Constant6' : Unused code path elimination
 * Block '<S43>/CAN Pack' : Unused code path elimination
 * Block '<S43>/Signal Copy' : Unused code path elimination
 * Block '<S49>/Add' : Unused code path elimination
 * Block '<S49>/Add1' : Unused code path elimination
 * Block '<S49>/Constant' : Unused code path elimination
 * Block '<S49>/Constant1' : Unused code path elimination
 * Block '<S49>/Constant2' : Unused code path elimination
 * Block '<S49>/Data Type Conversion' : Unused code path elimination
 * Block '<S49>/Data Type Conversion1' : Unused code path elimination
 * Block '<S49>/Data Type Conversion10' : Unused code path elimination
 * Block '<S49>/Data Type Conversion11' : Unused code path elimination
 * Block '<S49>/Data Type Conversion12' : Unused code path elimination
 * Block '<S49>/Data Type Conversion13' : Unused code path elimination
 * Block '<S49>/Data Type Conversion14' : Unused code path elimination
 * Block '<S49>/Data Type Conversion15' : Unused code path elimination
 * Block '<S49>/Data Type Conversion2' : Unused code path elimination
 * Block '<S49>/Data Type Conversion3' : Unused code path elimination
 * Block '<S49>/Data Type Conversion4' : Unused code path elimination
 * Block '<S49>/Data Type Conversion5' : Unused code path elimination
 * Block '<S49>/Data Type Conversion6' : Unused code path elimination
 * Block '<S49>/Data Type Conversion7' : Unused code path elimination
 * Block '<S49>/Data Type Conversion8' : Unused code path elimination
 * Block '<S49>/Data Type Conversion9' : Unused code path elimination
 * Block '<S50>/Shift Arithmetic' : Unused code path elimination
 * Block '<S50>/Shift Arithmetic1' : Unused code path elimination
 * Block '<S50>/Shift Arithmetic2' : Unused code path elimination
 * Block '<S50>/Shift Arithmetic3' : Unused code path elimination
 * Block '<S51>/Bias' : Unused code path elimination
 * Block '<S51>/Constant' : Unused code path elimination
 * Block '<S51>/Data Type Conversion' : Unused code path elimination
 * Block '<S51>/Divide' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic1' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic10' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic11' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic12' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic13' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic14' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic15' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic16' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic17' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic18' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic19' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic2' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic20' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic21' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic22' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic23' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic3' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic4' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic5' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic6' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic7' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic8' : Unused code path elimination
 * Block '<S51>/Shift Arithmetic9' : Unused code path elimination
 * Block '<S49>/Xor' : Unused code path elimination
 * Block '<S52>/Add' : Unused code path elimination
 * Block '<S52>/Constant' : Unused code path elimination
 * Block '<S52>/Constant1' : Unused code path elimination
 * Block '<S52>/Constant10' : Unused code path elimination
 * Block '<S52>/Constant11' : Unused code path elimination
 * Block '<S52>/Constant12' : Unused code path elimination
 * Block '<S52>/Constant13' : Unused code path elimination
 * Block '<S52>/Constant14' : Unused code path elimination
 * Block '<S52>/Constant15' : Unused code path elimination
 * Block '<S52>/Constant2' : Unused code path elimination
 * Block '<S52>/Constant3' : Unused code path elimination
 * Block '<S52>/Constant4' : Unused code path elimination
 * Block '<S52>/Constant5' : Unused code path elimination
 * Block '<S52>/Constant6' : Unused code path elimination
 * Block '<S52>/Constant7' : Unused code path elimination
 * Block '<S52>/Constant8' : Unused code path elimination
 * Block '<S52>/Constant9' : Unused code path elimination
 * Block '<S52>/Product1' : Unused code path elimination
 * Block '<S52>/Product10' : Unused code path elimination
 * Block '<S52>/Product11' : Unused code path elimination
 * Block '<S52>/Product12' : Unused code path elimination
 * Block '<S52>/Product13' : Unused code path elimination
 * Block '<S52>/Product14' : Unused code path elimination
 * Block '<S52>/Product15' : Unused code path elimination
 * Block '<S52>/Product2' : Unused code path elimination
 * Block '<S52>/Product3' : Unused code path elimination
 * Block '<S52>/Product4' : Unused code path elimination
 * Block '<S52>/Product5' : Unused code path elimination
 * Block '<S52>/Product6' : Unused code path elimination
 * Block '<S52>/Product7' : Unused code path elimination
 * Block '<S52>/Product8' : Unused code path elimination
 * Block '<S52>/Product9' : Unused code path elimination
 * Block '<S44>/Constant' : Unused code path elimination
 * Block '<S44>/Constant1' : Unused code path elimination
 * Block '<S44>/Constant10' : Unused code path elimination
 * Block '<S44>/Constant11' : Unused code path elimination
 * Block '<S44>/Constant12' : Unused code path elimination
 * Block '<S44>/Constant2' : Unused code path elimination
 * Block '<S44>/Constant4' : Unused code path elimination
 * Block '<S44>/Constant5' : Unused code path elimination
 * Block '<S44>/Constant8' : Unused code path elimination
 * Block '<S44>/Constant9' : Unused code path elimination
 * Block '<S96>/Logical Operator4' : Unused code path elimination
 * Block '<S96>/Logical Operator5' : Unused code path elimination
 * Block '<S96>/Logical Operator6' : Unused code path elimination
 * Block '<S112>/Add' : Unused code path elimination
 * Block '<S112>/Constant1' : Unused code path elimination
 * Block '<S125>/Constant2' : Unused code path elimination
 * Block '<S121>/Constant' : Unused code path elimination
 * Block '<S121>/Constant1' : Unused code path elimination
 * Block '<S121>/Constant2' : Unused code path elimination
 * Block '<S121>/Divide' : Unused code path elimination
 * Block '<S121>/Divide1' : Unused code path elimination
 * Block '<S121>/Divide2' : Unused code path elimination
 * Block '<S121>/Divide3' : Unused code path elimination
 * Block '<S121>/Divide4' : Unused code path elimination
 * Block '<S121>/Gain10' : Unused code path elimination
 * Block '<S121>/Gain11' : Unused code path elimination
 * Block '<S121>/Gain12' : Unused code path elimination
 * Block '<S121>/Gain13' : Unused code path elimination
 * Block '<S121>/Gain14' : Unused code path elimination
 * Block '<S121>/Gain15' : Unused code path elimination
 * Block '<S121>/Gain16' : Unused code path elimination
 * Block '<S121>/Gain17' : Unused code path elimination
 * Block '<S121>/Gain18' : Unused code path elimination
 * Block '<S121>/Gain7' : Unused code path elimination
 * Block '<S121>/Saturation' : Unused code path elimination
 * Block '<S175>/Add' : Unused code path elimination
 * Block '<S175>/Product' : Unused code path elimination
 * Block '<S175>/Product1' : Unused code path elimination
 * Block '<S175>/Product2' : Unused code path elimination
 * Block '<S176>/Add' : Unused code path elimination
 * Block '<S176>/Product' : Unused code path elimination
 * Block '<S176>/Product1' : Unused code path elimination
 * Block '<S176>/Product2' : Unused code path elimination
 * Block '<S177>/Add' : Unused code path elimination
 * Block '<S177>/Product' : Unused code path elimination
 * Block '<S177>/Product1' : Unused code path elimination
 * Block '<S177>/Product2' : Unused code path elimination
 * Block '<S122>/Constant' : Unused code path elimination
 * Block '<S122>/Constant1' : Unused code path elimination
 * Block '<S122>/Constant2' : Unused code path elimination
 * Block '<S122>/Divide' : Unused code path elimination
 * Block '<S122>/Divide1' : Unused code path elimination
 * Block '<S122>/Divide2' : Unused code path elimination
 * Block '<S122>/Divide3' : Unused code path elimination
 * Block '<S122>/Divide4' : Unused code path elimination
 * Block '<S122>/Gain10' : Unused code path elimination
 * Block '<S122>/Gain11' : Unused code path elimination
 * Block '<S122>/Gain12' : Unused code path elimination
 * Block '<S122>/Gain13' : Unused code path elimination
 * Block '<S122>/Gain14' : Unused code path elimination
 * Block '<S122>/Gain15' : Unused code path elimination
 * Block '<S122>/Gain16' : Unused code path elimination
 * Block '<S122>/Gain17' : Unused code path elimination
 * Block '<S122>/Gain18' : Unused code path elimination
 * Block '<S122>/Gain5' : Unused code path elimination
 * Block '<S122>/Gain6' : Unused code path elimination
 * Block '<S122>/Gain7' : Unused code path elimination
 * Block '<S122>/Gain8' : Unused code path elimination
 * Block '<S122>/Gain9' : Unused code path elimination
 * Block '<S122>/Saturation' : Unused code path elimination
 * Block '<S180>/Add' : Unused code path elimination
 * Block '<S180>/Product' : Unused code path elimination
 * Block '<S180>/Product1' : Unused code path elimination
 * Block '<S180>/Product2' : Unused code path elimination
 * Block '<S181>/Add' : Unused code path elimination
 * Block '<S181>/Product' : Unused code path elimination
 * Block '<S181>/Product1' : Unused code path elimination
 * Block '<S181>/Product2' : Unused code path elimination
 * Block '<S182>/Add' : Unused code path elimination
 * Block '<S182>/Product' : Unused code path elimination
 * Block '<S182>/Product1' : Unused code path elimination
 * Block '<S182>/Product2' : Unused code path elimination
 * Block '<S183>/Add' : Unused code path elimination
 * Block '<S183>/Product' : Unused code path elimination
 * Block '<S183>/Product1' : Unused code path elimination
 * Block '<S183>/Product2' : Unused code path elimination
 * Block '<S202>/Data Type Duplicate' : Unused code path elimination
 * Block '<S202>/Data Type Propagation' : Unused code path elimination
 * Block '<S215>/Check Signal Attributes' : Unused code path elimination
 * Block '<S231>/Data Type Duplicate' : Unused code path elimination
 * Block '<S231>/Data Type Propagation' : Unused code path elimination
 * Block '<S219>/1-D Lookup Table' : Unused code path elimination
 * Block '<S219>/Abs' : Unused code path elimination
 * Block '<S219>/Gain' : Unused code path elimination
 * Block '<S236>/Data Type Duplicate' : Unused code path elimination
 * Block '<S236>/Data Type Propagation' : Unused code path elimination
 * Block '<S237>/Data Type Duplicate' : Unused code path elimination
 * Block '<S237>/Data Type Propagation' : Unused code path elimination
 * Block '<S251>/Data Type Duplicate' : Unused code path elimination
 * Block '<S251>/Data Type Propagation' : Unused code path elimination
 * Block '<S252>/Scope1' : Unused code path elimination
 * Block '<S257>/Data Type Duplicate' : Unused code path elimination
 * Block '<S257>/Data Type Propagation' : Unused code path elimination
 * Block '<S253>/1-D Lookup Table2' : Unused code path elimination
 * Block '<S253>/Abs' : Unused code path elimination
 * Block '<S258>/Data Type Duplicate' : Unused code path elimination
 * Block '<S258>/Data Type Propagation' : Unused code path elimination
 * Block '<S267>/Data Type Duplicate' : Unused code path elimination
 * Block '<S267>/Data Type Propagation' : Unused code path elimination
 * Block '<S263>/1-D Lookup Table1' : Unused code path elimination
 * Block '<S263>/Abs' : Unused code path elimination
 * Block '<S263>/Gain' : Unused code path elimination
 * Block '<S263>/Product' : Unused code path elimination
 * Block '<S263>/Sign' : Unused code path elimination
 * Block '<S276>/Data Type Duplicate' : Unused code path elimination
 * Block '<S276>/Data Type Propagation' : Unused code path elimination
 * Block '<S277>/Data Type Duplicate' : Unused code path elimination
 * Block '<S277>/Data Type Propagation' : Unused code path elimination
 * Block '<S266>/Data Type Duplicate' : Unused code path elimination
 * Block '<S266>/Data Type Propagation' : Unused code path elimination
 * Block '<S260>/Constant' : Unused code path elimination
 * Block '<S246>/Scope1' : Unused code path elimination
 * Block '<S247>/Scope' : Unused code path elimination
 * Block '<S281>/Data Type Duplicate' : Unused code path elimination
 * Block '<S281>/Data Type Propagation' : Unused code path elimination
 * Block '<S288>/Data Type Duplicate' : Unused code path elimination
 * Block '<S288>/Data Type Propagation' : Unused code path elimination
 * Block '<S290>/Data Type Duplicate' : Unused code path elimination
 * Block '<S290>/Data Type Propagation' : Unused code path elimination
 * Block '<S291>/Data Type Duplicate' : Unused code path elimination
 * Block '<S291>/Data Type Propagation' : Unused code path elimination
 * Block '<S300>/Display' : Unused code path elimination
 * Block '<S310>/Data Type Duplicate' : Unused code path elimination
 * Block '<S310>/Data Type Propagation' : Unused code path elimination
 * Block '<S301>/Data Type Duplicate' : Unused code path elimination
 * Block '<S301>/Data Type Propagation' : Unused code path elimination
 * Block '<S302>/Data Type Duplicate' : Unused code path elimination
 * Block '<S302>/Data Type Propagation' : Unused code path elimination
 * Block '<S293>/Scope' : Unused code path elimination
 * Block '<S311>/Data Type Duplicate' : Unused code path elimination
 * Block '<S311>/Data Type Propagation' : Unused code path elimination
 * Block '<S294>/Constant3' : Unused code path elimination
 * Block '<S294>/Scope' : Unused code path elimination
 * Block '<S316>/Data Type Duplicate' : Unused code path elimination
 * Block '<S316>/Data Type Propagation' : Unused code path elimination
 * Block '<S318>/Data Type Duplicate' : Unused code path elimination
 * Block '<S318>/Data Type Propagation' : Unused code path elimination
 * Block '<Root>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<Root>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S23>/Delay4' : Eliminated Zero Delay block after compile
 * Block '<S24>/Delay4' : Eliminated Zero Delay block after compile
 * Block '<S4>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion10' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion11' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion13' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion20' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion21' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion24' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion25' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion28' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion29' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion30' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion32' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion33' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion34' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion35' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion36' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion37' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion38' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion41' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion42' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion47' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion49' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion51' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S4>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy10' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy12' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy14' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy16' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy17' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy19' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy20' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy21' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy24' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy25' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy27' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy28' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy29' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy32' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy33' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy36' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy37' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy38' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy40' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy41' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy42' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy43' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy44' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy46' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy47' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy48' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy6' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy7' : Eliminate redundant signal conversion block
 * Block '<S4>/Signal Copy9' : Eliminate redundant signal conversion block
 * Block '<S58>/Reshape' : Reshape block reduction
 * Block '<S58>/Reshape1' : Reshape block reduction
 * Block '<S58>/Reshape2' : Reshape block reduction
 * Block '<S58>/Reshape3' : Reshape block reduction
 * Block '<S58>/Reshape4' : Reshape block reduction
 * Block '<S58>/Reshape5' : Reshape block reduction
 * Block '<S58>/Reshape6' : Reshape block reduction
 * Block '<S58>/Reshape7' : Reshape block reduction
 * Block '<S58>/Reshape8' : Reshape block reduction
 * Block '<S71>/Reshape' : Reshape block reduction
 * Block '<S71>/Reshape1' : Reshape block reduction
 * Block '<S71>/Reshape2' : Reshape block reduction
 * Block '<S71>/Reshape3' : Reshape block reduction
 * Block '<S71>/Reshape4' : Reshape block reduction
 * Block '<S71>/Reshape5' : Reshape block reduction
 * Block '<S71>/Reshape6' : Reshape block reduction
 * Block '<S71>/Reshape7' : Reshape block reduction
 * Block '<S71>/Reshape8' : Reshape block reduction
 * Block '<S79>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S75>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S117>/Reshape' : Reshape block reduction
 * Block '<S129>/Reshape' : Reshape block reduction
 * Block '<S133>/Gain4' : Eliminated nontunable gain of 1
 * Block '<S139>/Gain' : Eliminated nontunable gain of 1
 * Block '<S139>/Gain2' : Eliminated nontunable gain of 1
 * Block '<S139>/Gain4' : Eliminated nontunable gain of 1
 * Block '<S139>/Gain6' : Eliminated nontunable gain of 1
 * Block '<S139>/Gain8' : Eliminated nontunable gain of 1
 * Block '<S139>/Reshape' : Reshape block reduction
 * Block '<S139>/Reshape1' : Reshape block reduction
 * Block '<S139>/Reshape2' : Reshape block reduction
 * Block '<S128>/Reshape12' : Reshape block reduction
 * Block '<S128>/Reshape13' : Reshape block reduction
 * Block '<S128>/Reshape14' : Reshape block reduction
 * Block '<S121>/Gain4' : Eliminated nontunable gain of 1
 * Block '<S122>/Gain4' : Eliminated nontunable gain of 1
 * Block '<S113>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S190>/Gain4' : Eliminated nontunable gain of 1
 * Block '<S190>/Reshape' : Reshape block reduction
 * Block '<S190>/Reshape1' : Reshape block reduction
 * Block '<S190>/Reshape2' : Reshape block reduction
 * Block '<S188>/Gain4' : Eliminated nontunable gain of 1
 * Block '<S220>/Reshape1' : Reshape block reduction
 * Block '<S220>/Reshape2' : Reshape block reduction
 * Block '<S220>/Reshape3' : Reshape block reduction
 * Block '<S40>/Signal Copy' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'app'
 * '<S1>'   : 'app/Subsystem'
 * '<S2>'   : 'app/main_func'
 * '<S3>'   : 'app/Subsystem/CAN_Data_Decoder2'
 * '<S4>'   : 'app/Subsystem/Vehicle_Bus_Process'
 * '<S5>'   : 'app/Subsystem/CAN_Data_Decoder2/ID_1130_Unpack'
 * '<S6>'   : 'app/Subsystem/CAN_Data_Decoder2/ID_201_Unpack'
 * '<S7>'   : 'app/Subsystem/CAN_Data_Decoder2/ID_251_Unpack'
 * '<S8>'   : 'app/Subsystem/CAN_Data_Decoder2/ID_355_Unpack'
 * '<S9>'   : 'app/Subsystem/CAN_Data_Decoder2/ID_389_Unpack'
 * '<S10>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_404_Unpack'
 * '<S11>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_481_Unpack'
 * '<S12>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_485_Unpack'
 * '<S13>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_489_Unpack'
 * '<S14>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_492_Unpack'
 * '<S15>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_516_'
 * '<S16>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_532_Unpack'
 * '<S17>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_540_Unpack'
 * '<S18>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_593_Unpack'
 * '<S19>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_758_Unpack'
 * '<S20>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_851_Unpack'
 * '<S21>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_886_Unpack'
 * '<S22>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_901_Unpack'
 * '<S23>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_485_Unpack/Node_Alive_Check'
 * '<S24>'  : 'app/Subsystem/CAN_Data_Decoder2/ID_492_Unpack/Node_Alive_Check'
 * '<S25>'  : 'app/Subsystem/Vehicle_Bus_Process/Chart3'
 * '<S26>'  : 'app/Subsystem/Vehicle_Bus_Process/Chart4'
 * '<S27>'  : 'app/Subsystem/Vehicle_Bus_Process/Detect Increase2'
 * '<S28>'  : 'app/Subsystem/Vehicle_Bus_Process/Detect Increase3'
 * '<S29>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter1'
 * '<S30>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter2'
 * '<S31>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter3'
 * '<S32>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter4'
 * '<S33>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter5'
 * '<S34>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter6'
 * '<S35>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter7'
 * '<S36>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter8'
 * '<S37>'  : 'app/Subsystem/Vehicle_Bus_Process/lowpassFilter9'
 * '<S38>'  : 'app/main_func/Signal_Process_OUT'
 * '<S39>'  : 'app/main_func/System_State_Machie'
 * '<S40>'  : 'app/main_func/vmc_controller'
 * '<S41>'  : 'app/main_func/Signal_Process_OUT/Chart'
 * '<S42>'  : 'app/main_func/Signal_Process_OUT/DrvrTkov_Dect'
 * '<S43>'  : 'app/main_func/Signal_Process_OUT/FDR_FVCM_Packer'
 * '<S44>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1'
 * '<S45>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1'
 * '<S46>'  : 'app/main_func/Signal_Process_OUT/DrvrTkov_Dect/Chart4'
 * '<S47>'  : 'app/main_func/Signal_Process_OUT/DrvrTkov_Dect/Compare To Constant3'
 * '<S48>'  : 'app/main_func/Signal_Process_OUT/FDR_FVCM_Packer/Chart'
 * '<S49>'  : 'app/main_func/Signal_Process_OUT/FDR_FVCM_Packer/Subsystem1'
 * '<S50>'  : 'app/main_func/Signal_Process_OUT/FDR_FVCM_Packer/Subsystem1/Subsystem'
 * '<S51>'  : 'app/main_func/Signal_Process_OUT/FDR_FVCM_Packer/Subsystem1/Subsystem1'
 * '<S52>'  : 'app/main_func/Signal_Process_OUT/FDR_FVCM_Packer/Subsystem1/bin2Dec'
 * '<S53>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/Chart1'
 * '<S54>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/Chart2'
 * '<S55>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/Compare To Constant'
 * '<S56>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/Compare To Constant1'
 * '<S57>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/Compare To Constant2'
 * '<S58>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/Subsystem'
 * '<S59>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE'
 * '<S60>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE1'
 * '<S61>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE2'
 * '<S62>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE3'
 * '<S63>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE/Chart'
 * '<S64>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE/Subsystem'
 * '<S65>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE1/Chart'
 * '<S66>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE1/Subsystem'
 * '<S67>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE2/Chart'
 * '<S68>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE2/Subsystem'
 * '<S69>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE3/Chart'
 * '<S70>'  : 'app/main_func/Signal_Process_OUT/FDR_HMI_Packer1/can_decoder_BE3/Subsystem'
 * '<S71>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/Subsystem'
 * '<S72>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/Subsystem1'
 * '<S73>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE'
 * '<S74>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE1'
 * '<S75>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE2'
 * '<S76>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE3'
 * '<S77>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE4'
 * '<S78>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/Subsystem1/Subsystem'
 * '<S79>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/Subsystem1/Subsystem1'
 * '<S80>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/Subsystem1/bin2Dec'
 * '<S81>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE/Chart'
 * '<S82>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE/Subsystem'
 * '<S83>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE1/Chart'
 * '<S84>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE1/Subsystem'
 * '<S85>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE2/Chart'
 * '<S86>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE2/Subsystem'
 * '<S87>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE3/Chart'
 * '<S88>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE3/Subsystem'
 * '<S89>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE4/Chart'
 * '<S90>'  : 'app/main_func/Signal_Process_OUT/FVCM_EPS_Frame_Packer1/can_decoder_BE4/Subsystem'
 * '<S91>'  : 'app/main_func/System_State_Machie/Chart'
 * '<S92>'  : 'app/main_func/System_State_Machie/Detect Increase'
 * '<S93>'  : 'app/main_func/System_State_Machie/Detect Increase1'
 * '<S94>'  : 'app/main_func/System_State_Machie/Driver_Detection'
 * '<S95>'  : 'app/main_func/System_State_Machie/HostLane_Detection'
 * '<S96>'  : 'app/main_func/System_State_Machie/Vehicle_Detection'
 * '<S97>'  : 'app/main_func/System_State_Machie/Driver_Detection/Chart1'
 * '<S98>'  : 'app/main_func/System_State_Machie/HostLane_Detection/Chart1'
 * '<S99>'  : 'app/main_func/System_State_Machie/HostLane_Detection/Chart2'
 * '<S100>' : 'app/main_func/System_State_Machie/HostLane_Detection/Chart3'
 * '<S101>' : 'app/main_func/System_State_Machie/HostLane_Detection/Compare To Constant'
 * '<S102>' : 'app/main_func/System_State_Machie/HostLane_Detection/Compare To Constant1'
 * '<S103>' : 'app/main_func/System_State_Machie/HostLane_Detection/Compare To Constant2'
 * '<S104>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Chart13'
 * '<S105>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Chart4'
 * '<S106>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Chart5'
 * '<S107>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Chart6'
 * '<S108>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Chart7'
 * '<S109>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Compare To Constant2'
 * '<S110>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Compare To Constant4'
 * '<S111>' : 'app/main_func/System_State_Machie/Vehicle_Detection/Compare To Constant8'
 * '<S112>' : 'app/main_func/vmc_controller/Path_Planning'
 * '<S113>' : 'app/main_func/vmc_controller/Path_Tracking'
 * '<S114>' : 'app/main_func/vmc_controller/SteeringAngle_Control'
 * '<S115>' : 'app/main_func/vmc_controller/Subsystem'
 * '<S116>' : 'app/main_func/vmc_controller/Yawrate_Control1'
 * '<S117>' : 'app/main_func/vmc_controller/Path_Planning/Initial_Lateral_Status_Caculation'
 * '<S118>' : 'app/main_func/vmc_controller/Path_Planning/Planner'
 * '<S119>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine'
 * '<S120>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Scheduler'
 * '<S121>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update'
 * '<S122>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update1'
 * '<S123>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem'
 * '<S124>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop'
 * '<S125>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem'
 * '<S126>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/If Action Subsystem'
 * '<S127>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function'
 * '<S128>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver'
 * '<S129>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/LinSpace_10Pnts'
 * '<S130>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Offset_Cost'
 * '<S131>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Offset_Cost1'
 * '<S132>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Offset_Cost2'
 * '<S133>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Subsystem'
 * '<S134>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Time_Cost'
 * '<S135>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/LinSpace_10Pnts/For Iterator Subsystem'
 * '<S136>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Subsystem/Subsystem1'
 * '<S137>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Subsystem/Subsystem2'
 * '<S138>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/cost_function/Subsystem/Subsystem3'
 * '<S139>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc'
 * '<S140>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem'
 * '<S141>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem1'
 * '<S142>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem2'
 * '<S143>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem3'
 * '<S144>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem4'
 * '<S145>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem5'
 * '<S146>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem6'
 * '<S147>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem7'
 * '<S148>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem8'
 * '<S149>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/ThreeOrderDet'
 * '<S150>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem/TwoOrderDet'
 * '<S151>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem1/TwoOrderDet'
 * '<S152>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem2/TwoOrderDet'
 * '<S153>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem3/TwoOrderDet'
 * '<S154>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem4/TwoOrderDet'
 * '<S155>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem5/TwoOrderDet'
 * '<S156>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem6/TwoOrderDet'
 * '<S157>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem7/TwoOrderDet'
 * '<S158>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/Subsystem8/TwoOrderDet'
 * '<S159>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/ThreeOrderDet/TwoOrderDet'
 * '<S160>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/ThreeOrderDet/TwoOrderDet1'
 * '<S161>' : 'app/main_func/vmc_controller/Path_Planning/Planner/Subsystem/PlannerLoop/For Iterator Subsystem/linear_Fiveorder_Solver/Matrix33_Inverse_Calc/ThreeOrderDet/TwoOrderDet2'
 * '<S162>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Chart'
 * '<S163>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Chart1'
 * '<S164>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Chart2'
 * '<S165>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Chart7'
 * '<S166>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Compare To Constant'
 * '<S167>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Compare To Constant1'
 * '<S168>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Compare To Constant2'
 * '<S169>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Compare To Constant3'
 * '<S170>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Detect Change'
 * '<S171>' : 'app/main_func/vmc_controller/Path_Planning/Planning_Reset_Determine/Detect Increase'
 * '<S172>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update/Subsystem1'
 * '<S173>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update/Subsystem2'
 * '<S174>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update/Subsystem3'
 * '<S175>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update/Subsystem4'
 * '<S176>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update/Subsystem5'
 * '<S177>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update/Subsystem6'
 * '<S178>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update1/Subsystem1'
 * '<S179>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update1/Subsystem2'
 * '<S180>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update1/Subsystem3'
 * '<S181>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update1/Subsystem4'
 * '<S182>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update1/Subsystem5'
 * '<S183>' : 'app/main_func/vmc_controller/Path_Planning/real_time_update1/Subsystem6'
 * '<S184>' : 'app/main_func/vmc_controller/Path_Tracking/Chart'
 * '<S185>' : 'app/main_func/vmc_controller/Path_Tracking/Compare To Constant'
 * '<S186>' : 'app/main_func/vmc_controller/Path_Tracking/MPC'
 * '<S187>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller'
 * '<S188>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1'
 * '<S189>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1'
 * '<S190>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2'
 * '<S191>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term'
 * '<S192>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/LatVel_Error_Calc'
 * '<S193>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/lowpassFilter2'
 * '<S194>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/merge'
 * '<S195>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Compare To Constant1'
 * '<S196>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Compare To Constant2'
 * '<S197>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Compare To Constant3'
 * '<S198>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Compare To Constant4'
 * '<S199>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Compare To Constant5'
 * '<S200>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Compare To Constant6'
 * '<S201>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Compare To Constant7'
 * '<S202>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/I_Term/Saturation Dynamic'
 * '<S203>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/Path_Tracking1/LatVel_Error_Calc/Chart'
 * '<S204>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/For Iterator Subsystem'
 * '<S205>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/Hissien_Matrix_Inverse'
 * '<S206>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/MPC_LatController'
 * '<S207>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/merge'
 * '<S208>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/For Iterator Subsystem/Subsystem1'
 * '<S209>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/For Iterator Subsystem/Subsystem1/Subsystem'
 * '<S210>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/For Iterator Subsystem/Subsystem1/Subsystem/moveThenRotate'
 * '<S211>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/For Iterator Subsystem/Subsystem1/Subsystem/rotateThenMove'
 * '<S212>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/Hissien_Matrix_Inverse/LU Solver'
 * '<S213>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/Hissien_Matrix_Inverse/LU Solver/Subsystem'
 * '<S214>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/Hissien_Matrix_Inverse/LU Solver/Subsystem1'
 * '<S215>' : 'app/main_func/vmc_controller/Path_Tracking/MPC_Controller/mpc_controller2/Hissien_Matrix_Inverse/LU Solver/Subsystem/Check Signal Attributes2'
 * '<S216>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term'
 * '<S217>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/LatVel_Error_Calc'
 * '<S218>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/desired_omga_caculation'
 * '<S219>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/error_caculation'
 * '<S220>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/feedBack_Caculation'
 * '<S221>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/feedForward_Caculation'
 * '<S222>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/lowpassFilter2'
 * '<S223>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant'
 * '<S224>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant1'
 * '<S225>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant2'
 * '<S226>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant3'
 * '<S227>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant4'
 * '<S228>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant5'
 * '<S229>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant6'
 * '<S230>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Compare To Constant7'
 * '<S231>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/I_Term/Saturation Dynamic'
 * '<S232>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/LatVel_Error_Calc/Chart'
 * '<S233>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/error_caculation/PolyVal3Order'
 * '<S234>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/error_caculation/PolyVal3Order1'
 * '<S235>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/error_caculation/PolyVal3Order2'
 * '<S236>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/error_caculation/Saturation Dynamic'
 * '<S237>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/error_caculation/Saturation Dynamic1'
 * '<S238>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/error_caculation/lowpassFilter3'
 * '<S239>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/feedBack_Caculation/LQR_Solve_2d'
 * '<S240>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/feedBack_Caculation/lowpassFilter1'
 * '<S241>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/feedBack_Caculation/lowpassFilter3'
 * '<S242>' : 'app/main_func/vmc_controller/Path_Tracking/Path_Tracking1/feedBack_Caculation/LQR_Solve_2d/For Iterator Subsystem'
 * '<S243>' : 'app/main_func/vmc_controller/SteeringAngle_Control/DOT'
 * '<S244>' : 'app/main_func/vmc_controller/SteeringAngle_Control/NolinearFix'
 * '<S245>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking'
 * '<S246>' : 'app/main_func/vmc_controller/SteeringAngle_Control/Torque_Ramp'
 * '<S247>' : 'app/main_func/vmc_controller/SteeringAngle_Control/Torque_Rate_Limit'
 * '<S248>' : 'app/main_func/vmc_controller/SteeringAngle_Control/DOT/Chart1'
 * '<S249>' : 'app/main_func/vmc_controller/SteeringAngle_Control/DOT/Chart2'
 * '<S250>' : 'app/main_func/vmc_controller/SteeringAngle_Control/DOT/OvrdDely'
 * '<S251>' : 'app/main_func/vmc_controller/SteeringAngle_Control/DOT/Saturation Dynamic'
 * '<S252>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc'
 * '<S253>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc1'
 * '<S254>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2'
 * '<S255>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc/Chart'
 * '<S256>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc/Subsystem'
 * '<S257>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc/Subsystem/Saturation Dynamic'
 * '<S258>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc1/Saturation Dynamic'
 * '<S259>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem'
 * '<S260>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem1'
 * '<S261>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/Compare To Constant'
 * '<S262>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/D_Term'
 * '<S263>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/ForwardFeed_Term'
 * '<S264>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term'
 * '<S265>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/P_Term'
 * '<S266>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/Saturation Dynamic'
 * '<S267>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/D_Term/Saturation Dynamic'
 * '<S268>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/D_Term/lowpassFilter3'
 * '<S269>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant1'
 * '<S270>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant2'
 * '<S271>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant3'
 * '<S272>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant4'
 * '<S273>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant5'
 * '<S274>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant6'
 * '<S275>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Compare To Constant7'
 * '<S276>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/I_Term/Saturation Dynamic'
 * '<S277>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem/P_Term/Saturation Dynamic'
 * '<S278>' : 'app/main_func/vmc_controller/SteeringAngle_Control/SteeringAngleTracking/StrgWhlAng_Error_Calc2/Subsystem1/Compare To Constant'
 * '<S279>' : 'app/main_func/vmc_controller/SteeringAngle_Control/Torque_Ramp/Chart'
 * '<S280>' : 'app/main_func/vmc_controller/SteeringAngle_Control/Torque_Rate_Limit/Subsystem'
 * '<S281>' : 'app/main_func/vmc_controller/SteeringAngle_Control/Torque_Rate_Limit/Subsystem/Saturation Dynamic'
 * '<S282>' : 'app/main_func/vmc_controller/Subsystem/Limiter'
 * '<S283>' : 'app/main_func/vmc_controller/Subsystem/Ramp'
 * '<S284>' : 'app/main_func/vmc_controller/Subsystem/Limiter/DesCurve_limiter'
 * '<S285>' : 'app/main_func/vmc_controller/Subsystem/Limiter/LatACC_limiter'
 * '<S286>' : 'app/main_func/vmc_controller/Subsystem/Limiter/LatACC_limiter1'
 * '<S287>' : 'app/main_func/vmc_controller/Subsystem/Limiter/lowpassFilter3'
 * '<S288>' : 'app/main_func/vmc_controller/Subsystem/Limiter/DesCurve_limiter/Saturation Dynamic'
 * '<S289>' : 'app/main_func/vmc_controller/Subsystem/Limiter/LatACC_limiter/Subsystem'
 * '<S290>' : 'app/main_func/vmc_controller/Subsystem/Limiter/LatACC_limiter/Subsystem/Saturation Dynamic'
 * '<S291>' : 'app/main_func/vmc_controller/Subsystem/Limiter/LatACC_limiter1/Saturation Dynamic'
 * '<S292>' : 'app/main_func/vmc_controller/Subsystem/Ramp/Chart'
 * '<S293>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control'
 * '<S294>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedForward_Control'
 * '<S295>' : 'app/main_func/vmc_controller/Yawrate_Control1/PinAngle_2_StrgWhlAng'
 * '<S296>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter'
 * '<S297>' : 'app/main_func/vmc_controller/Yawrate_Control1/lowpassFilter5'
 * '<S298>' : 'app/main_func/vmc_controller/Yawrate_Control1/sum'
 * '<S299>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/Chart'
 * '<S300>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term'
 * '<S301>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/Saturation Dynamic'
 * '<S302>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/Saturation Dynamic1'
 * '<S303>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/Subsystem'
 * '<S304>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term/Compare To Constant'
 * '<S305>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term/Compare To Constant1'
 * '<S306>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term/Compare To Constant3'
 * '<S307>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term/Compare To Constant4'
 * '<S308>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term/Compare To Constant6'
 * '<S309>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term/Compare To Constant7'
 * '<S310>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/I_Term/Saturation Dynamic'
 * '<S311>' : 'app/main_func/vmc_controller/Yawrate_Control1/FeedBack_Control/Subsystem/Saturation Dynamic'
 * '<S312>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter/SAAL'
 * '<S313>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter/SARL'
 * '<S314>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter/SAAL/StrgAngLmt_Generator_Module'
 * '<S315>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter/SAAL/StrgAngLmt_Module'
 * '<S316>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter/SAAL/StrgAngLmt_Module/Amplitude_Limiter'
 * '<S317>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter/SARL/Subsystem'
 * '<S318>' : 'app/main_func/vmc_controller/Yawrate_Control1/StrgWhlAng_Limiter/SARL/Subsystem/Saturation Dynamic'
 */
#endif                                 /* RTW_HEADER_app_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
