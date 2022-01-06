#！/usr/bin/env python3

#-*-coding:utf-8-*




def strarr2int(arr):
    data = [int(i) for i in arr ]
    data= "".join(map(lambda x:str(x), data))
    data = int(data, 2)

    return data


def data2msglist(data):
    msg = [0 for i in range(64)]
    for i in range(8):
        data0 = []
        data0 = bin(data[i]).replace('0b','')
        data0 = ['0' for i in range(8-len(data0))] + list(data0)

        msg[8*i:8*i+8] = data0
    return msg


def arr_to_canMsg(msg_data=None, type = "BE"):

    if msg_data is None:
        msg_data = []

    data = [0 for i in range(8)]
    if type == "BE":
        data[0] = strarr2int(msg_data[0:8])
        data[1] = strarr2int(msg_data[8:16])
        data[2] = strarr2int(msg_data[16:24])
        data[3] = strarr2int(msg_data[24:32])
        data[4] = strarr2int(msg_data[32:40])
        data[5] = strarr2int(msg_data[40:48])
        data[6] = strarr2int(msg_data[48:56])
        data[7] = strarr2int(msg_data[56:64])   
    elif type == "LE":
        data[0] = strarr2int((msg_data[0:8])[::-1] )
        data[1] = strarr2int((msg_data[7:16])[::-1] )
        data[2] = strarr2int((msg_data[15:24])[::-1] )
        data[3] = strarr2int((msg_data[23:32])[::-1] )
        data[4] = strarr2int((msg_data[31:40])[::-1] )
        data[5] = strarr2int((msg_data[39:48])[::-1] )
        data[6] = strarr2int((msg_data[47:56])[::-1] )
        data[7] = strarr2int((msg_data[55:64])[::-1] )
    else:
        raise ValueError("type must be BE or LE")

    return data



def lka_reqtoq_PV_calc(msg_array=None):

    if msg_array is None:
        msg_array = []

    PV_check = msg_array[35:37] + msg_array[5:16] + [msg_array[4]]
    #print(PV_check)

    PV_check = [int(i) for i in PV_check]
    PV_check = "".join(map(lambda x:str(x), PV_check))
    PV_check = int(PV_check, 2)

    #print(PV_check)
    rolling_cnt = [int(i) for i in msg_array[0:4]]
    rolling_cnt = "".join(map(lambda x:str(x), rolling_cnt))
    rolling_cnt = int(rolling_cnt, 2)    
    PV_check = PV_check + rolling_cnt
    #PV_check_bin = bin(PV_check).replace('0b','')
    #print(PV_check_bin)

    PV_check = PV_check ^ int("11111111111111", 2)
    #print( bin(PV_check).replace('0b',''))
    PV_check = PV_check + 1
    #print(PV_check)
    return PV_check


def can_encoder(msg=None, start_bit=0, length=1, value=0, factor=1, offset=0, type = "BE"):

    if msg is None:
        msg = []

    raw_value = int((value + offset)/factor)
    raw_value_bin = bin(raw_value).replace('0b','')
    raw_value_bin = [0 for i in range(length-len(raw_value_bin))] + list(raw_value_bin)

    idx  = start_bit//8
    offset = start_bit%8
    idx_ = idx*8 + 8 - offset

    if type == "BE":

        msg[idx_-length:idx_] = raw_value_bin
    elif type == "LE":

        msg[idx_+1:idx_+1+length] = raw_value_bin    
    else:
        raise ValueError("type must be BE or LE")

    return msg





def can_decoder(data=None, start_bit=0, length=1, factor=1, ofs=0, type = "BE"):
    if data is None:
        data = []

    msg = data2msglist(data)

    idx  = start_bit//8
    offset = start_bit%8
    idx_ = idx*8 + 8 - offset

    signal_raw_data = msg[idx_-length:idx_]

    signal_raw_data = strarr2int(signal_raw_data)

    print('sss', idx_, msg[idx_-length:idx_])
    signal_physical = signal_raw_data*factor - ofs

    return signal_physical






def FVCM_EPS_Packer(RC=0, lka_toq=0, lka_toq_valid=0, lka_toq_sts=0, lka_sys_sts = 0, drvr_tkov_req=0):
    msg = ['0' for i in range(64)]

    # LKA_Req_Toq
    can_encoder(msg, 8,  11, lka_toq, 0.01, 10.24)
    # LKA_Req_Toq Rolling counter
    can_encoder(msg, 4,  4,  RC ,  1,   0)
    # LKA_Req_Toq Status
    can_encoder(msg, 35, 2,  lka_toq_sts,  1, 0)
    # LKA_Req_Toq VALID
    can_encoder(msg, 3,  1,  lka_toq_valid,  1, 0)

    # LKA PV value
    lka_toq_pv = lka_reqtoq_PV_calc(msg)
    #print(lka_toq_pv)
    can_encoder(msg, 24,  14, lka_toq_pv, 1, 0)
    # LKA system status
    can_encoder(msg, 32,  3,  lka_sys_sts, 1, 0)
    # LKA Drvr Tkov sig
    can_encoder(msg, 46, 1,  drvr_tkov_req, 1, 0)

    # driver takover flag
    #can_encoder(msg=msg, start_bit=3,  length=1,  value=0,    factor=1,    offset=0, type = "BE")        
    #print('d', msg)

    can_data = arr_to_canMsg(msg)

    return can_data


def FVCM_IPK_Packer():
    msg = ['0' for i in range(64)]

    # autobeam
    can_encoder(msg, 14,  2, 1, 1, 0)
    # hand off req
    can_encoder(msg, 43,  2, 1, 1, 0)
    can_encoder(msg, 45,  1,  0, 1, 0)

    # LDWLKADSP CMD
    can_encoder(msg, 48,  3, 1, 1, 0)
    # LDWLKA Haptic WarngDspCmd
    can_encoder(msg, 62,  2, 1, 1, 0)
    # LDWLKALVsulznReq
    can_encoder(msg, 51,  3, 2, 1, 0)
    # LDWLKARVsulznReq
    can_encoder(msg, 40,  3, 2, 1, 0)
    # LDW SysFltSts
    can_encoder(msg, 37,  3, 0, 1, 0)
    # TJAICA DSp Cmd
    can_encoder(msg, 54,  2, 1, 1, 0)
    # TJAICA SysFltSts
    can_encoder(msg, 59,  3, 0, 1, 0)
    # TJAICASysSts
    can_encoder(msg, 56,  3, 2, 1, 0)

    can_data = arr_to_canMsg(msg)

    return can_data


def SAS_Frame_Unpacker(data=None):
    if data is None:
        data = []
    frame = {}
    frame['strgWhlAng'] = can_decoder(data, 16, 16, 0.0625, 2048)
    frame['strgWhlAng_Spd'] = can_decoder(data, 32, 12, 1, 2048)                

    return frame


def EPS_Frame_Unpacker(data=None):
    frame = {}
    if data is None:
        data = []

    frame['lka_ctrl_sts'] = can_decoder(data, 52, 3, 1, 0)
    frame['responseToq'] = can_decoder(data, 8, 11, 0.01, 10.24)
    frame['DrvrToq'] = can_decoder(data, 40, 11, 0.01, 10.24)
    frame['strgCustMod'] = can_decoder(data, 35, 2, 1, 0)

    return frame

def GW01_Frame_Unpacker(data=None):
    frame = {}
    if data is None:
        data = []

    frame['BntOpenSts'] = can_decoder(data, 46, 2, 1, 0)
    frame['DipBeamLghtOn'] = can_decoder(data, 13, 1, 1, 0)
    frame['DrvrDoorOpenSts'] = can_decoder(data, 0, 2, 1, 0)
    frame['FrtFogLghtOn'] = can_decoder(data, 14, 1, 1, 0)
    frame['RrFogLghtOn'] = can_decoder(data, 8, 1, 1, 0)

    frame['FstPsgnDoorOpenSts'] = can_decoder(data, 42, 2, 1, 0)
    frame['LftStrgLampOn'] = can_decoder(data, 11, 1, 1, 0)
    frame['RghtStrgLampOn'] = can_decoder(data, 9, 1, 1, 0)
    frame['RLDoorOpenSts'] = can_decoder(data, 40, 2, 1, 0)
    frame['RRDoorOpenSts'] = can_decoder(data, 4, 2, 1, 0)

    return frame

def SCS_FrP05_Frame_Unpacker(data=None):
    frame = {}
    if data is None:
        data = []

    frame['ABSActvSts'] = can_decoder(data, 30, 1, 1, 0)
    frame['ABSFltSts'] = can_decoder(data, 29, 1, 1, 0)
    frame['VehDynYawRate'] = can_decoder(data, 40, 12, 0.0625, 0)

    return frame


def SCS_FrP15_Frame_Unpacker(data=None):
    frame = {}
    if data is None:
        data = []

    frame['VehSpdAvgDrvn'] = can_decoder(data, 8, 15, 1.5625/100., 0)
    frame['VehSpdAvgNonDrvn'] = can_decoder(data, 40, 15, 1.5625/100., 0)

    return frame
