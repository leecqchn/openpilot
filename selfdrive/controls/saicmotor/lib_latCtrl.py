from  cffi import FFI
import os

latCtrl_file = '/data/openpilot/selfdrive/controls/saicmotor/zs11_build/libVLatC.so'
ffi = FFI()
ffi.cdef("""

      /*=======================================================================*
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
      extern real32_T YRC_angD_ReqStrgWhlAng_sg;/* '<S392>/Switch' */
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
       

          """)

latCtrl = ffi.dlopen(latCtrl_file)

