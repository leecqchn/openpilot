from  cffi import FFI
import os

def get_sac():
  sac_file = '/data/openpilot/selfdrive/car/saicmotor/sac/libsac.so'
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


  """)

  sac = ffi.dlopen(sac_file)
  return sac, ffi
