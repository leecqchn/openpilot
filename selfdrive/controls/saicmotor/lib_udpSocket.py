#!/usr/bin/env python3
import threading
import socket
import cereal.messaging as messaging
from common.params import Params, ParamKeyType
from common.realtime import sec_since_boot, config_realtime_process, Priority, Ratekeeper
from cereal import car, log

SafetyModel = car.CarParams.SafetyModel
UsbPowerMode = log.PeripheralState.UsbPowerMode
PandaType = log.PandaState.PandaType
HarnessStatus = log.PandaState.HarnessStatus
params = Params()


global CAN_BUFF
CAN_BUFF = [int(0) for i in range(160)]


### threading for connect stm32 hardware
class STM32UDP(threading.Thread):
    def __init__(self, ):
        super(STM32UDP, self).__init__()
        self.server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.status = False
        try:
          self.server.bind( ('192.168.5.11', 8888))
          self.status = True
        except:
          self.server.bind( ('0.0.0.0', 8889))

        self.id_list = ['492', '251', '355', '489', '201', \
                        '1130', '886', '901', '532',  '485', \
                        '851', '540', '758', '404', '481', \
                        '389', '593', '516', '582' ]

        self.can_data = {}
        for idx in self.id_list:
            self.can_data['ch_'+idx] = [0,0,0,0,0,0,0,0]

    def run(self):
        while True:
            #print(self.can_data)
            global CAN_BUFF
            data, addr= self.server.recvfrom(1024)
            CAN_BUFF = list(data)
            #print(data)
            self.can_data['ch_492']  = CAN_BUFF[0:8]
            self.can_data['ch_251']  = CAN_BUFF[8:16]
            self.can_data['ch_355']  = CAN_BUFF[16:24]
            self.can_data['ch_489']  = CAN_BUFF[24:32]
            self.can_data['ch_201']  = CAN_BUFF[32:40]
            self.can_data['ch_1130'] = CAN_BUFF[40:48]
            self.can_data['ch_886']  = CAN_BUFF[48:56]
            self.can_data['ch_901']  = CAN_BUFF[56:64]
            self.can_data['ch_532']  = CAN_BUFF[64:72]
            self.can_data['ch_485']  = CAN_BUFF[72:80]
            self.can_data['ch_851']  = CAN_BUFF[80:88]
            self.can_data['ch_540']  = CAN_BUFF[88:96]
            self.can_data['ch_758']  = CAN_BUFF[96:104]
            self.can_data['ch_404']  = CAN_BUFF[104:112]
            self.can_data['ch_481']  = CAN_BUFF[112:120]
            self.can_data['ch_389']  = CAN_BUFF[120:128]
            self.can_data['ch_593']  = CAN_BUFF[128:136]
            self.can_data['ch_516']  = CAN_BUFF[136:144]
            self.can_data['ch_582']  = CAN_BUFF[152:160]


