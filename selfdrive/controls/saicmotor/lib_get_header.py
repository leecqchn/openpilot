import os
import time
import re
from cffi import FFI

def get_header():
  ffi = FFI()
  header = '''/*=======================================================================*
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
  extern void SVDC_VLatC_CtrlMdl_initialize(void);
  extern void app_terminate(void);

  /* Customized model step function */
  extern void SVDC_VLatC_CtrlMdl_update(uint8_T arg_can_msg_454[8], uint8_T
    arg_can_msg_768[8], uint8_T arg_can_msg_537[8], uint8_T arg_can_msg_657[8],
    uint8_T arg_can_msg_1067[8], uint8_T arg_can_msg_481[8], uint8_T
    arg_can_msg_225[8], uint8_T arg_can_msg_825[8], uint8_T arg_can_msg_601[8],
    uint8_T arg_can_msg_563[8], uint8_T arg_can_msg_229[8], uint8_T
    arg_can_msg_547[8], uint8_T arg_can_msg_622[8], uint8_T arg_can_msg_654[8],
    uint8_T arg_can_msg_638[8], uint8_T arg_can_msg_1792[8], uint8_T
    arg_can_msg_1793[8], uint8_T arg_can_msg_1795[8], uint8_T arg_can_msg_1796[8],
    uint8_T arg_can_msg_1798[8], uint8_T arg_can_msg_1799[8], uint8_T
    arg_can_msg_1801[8], uint8_T arg_can_msg_1802[8], uint8_T arg_can_msg_1804[8],
    uint8_T arg_can_msg_1805[8], uint8_T arg_can_msg_1700[8], uint8_T
    arg_can_msg_1708[8], uint8_T arg_can_msg_1707[8], uint8_T arg_can_msg_1705[8],
    uint8_T arg_can_msg_1704[8]);


    '''
  filepath = "/data/openpilot/selfdrive/controls/saicmotor/zs11_build/include/app.h"
  with open(filepath, "r") as h:
    txt = h.read()
  para_list = re.findall("extern real.*;|extern int.*;|extern uint.*;|extern boolean_T .*;", txt)
  parameters ='\n'.join(para_list)
  print(parameters)

  ffi.cdef(header + parameters)
  return ffi

get_header()
