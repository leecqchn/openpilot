import threading
import socket

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
                        '389', '593', '516' ]

        self.can_data = {}
        for idx in self.id_list:
            self.can_data['ch_'+idx] = [0,0,0,0,0,0,0,0]

    def run(self):
        while True:
            #print(self.can_data)
            data, addr= self.server.recvfrom(1024)
            data = list(data)
            #print(data)
            self.can_data['ch_492'] = data[0:8]
            self.can_data['ch_251'] = data[8:16]
            self.can_data['ch_355'] = data[16:24]
            self.can_data['ch_489'] = data[24:32]
            self.can_data['ch_201'] = data[32:40]
            self.can_data['ch_1130'] = data[40:48]
            self.can_data['ch_886'] = data[48:56]
            self.can_data['ch_901'] = data[56:64]
            self.can_data['ch_532'] = data[64:72]
            self.can_data['ch_485'] = data[72:80]
            self.can_data['ch_851'] = data[80:88]
            self.can_data['ch_540'] = data[88:96]
            self.can_data['ch_758'] = data[96:104]
            self.can_data['ch_404'] = data[104:112]
            self.can_data['ch_481'] = data[112:120]
            self.can_data['ch_389'] = data[120:128]
            self.can_data['ch_593'] = data[128:136]
            self.can_data['ch_516'] = data[136:144]


