####################### initial the simulnik control model ##################

#-*-coding:utf-8-*
from ctypes import *
from ctypes import cdll
#from ctypes.wintypes import DWORD
import time
import zmq
import threading
from cereal import car, log
from common.params import Params
from common.realtime import Priority, config_realtime_process, Ratekeeper
from selfdrive.swaglog import cloudlog
from selfdrive.controls.lib.planner import Planner
from selfdrive.controls.lib.vehicle_model import VehicleModel
from selfdrive.controls.lib.pathplanner import PathPlanner
import cereal.messaging as messaging
from PP import PathPlanner
import socket


class control_in_bus(Structure):
    _fields_ = [('ID_492_Data',  c_ubyte * 8),
                ('ID_251_Data',  c_ubyte * 8),
                ('ID_355_Data',  c_ubyte * 8),
                ('ID_489_Data',  c_ubyte * 8),
                ('ID_201_Data',  c_ubyte * 8),
                ('ID_1130_Data', c_ubyte * 8),
                ('ID_886_Data',  c_ubyte * 8),
                ('ID_901_Data',  c_ubyte * 8),
                ('ID_532_Data',  c_ubyte * 8),
                ('ID_485_Data',  c_ubyte * 8),
                ('ID_851_Data',  c_ubyte * 8),
                ('ID_540_Data',  c_ubyte * 8),
                ('ID_758_Data',  c_ubyte * 8),
                ('ID_404_Data',  c_ubyte * 8),
                ('ID_481_Data',  c_ubyte * 8),
                ('ID_389_Data',  c_ubyte * 8),
                ('ID_593_Data',  c_ubyte * 8),
                ('ID_516_Data',  c_ubyte * 8),

                ('rolling_count', c_ubyte),
                ('lane0_poly', c_float*4),
                ('lane0_len', c_float),
                ('lane0_prob', c_float),

                ('lane1_poly', c_float*4),
                ('lane1_len', c_float),
                ('lane1_prob', c_float),

                ('lane2_poly', c_float*4),
                ('lane2_len', c_float),
                ('lane2_prob', c_float),

                ('lane3_poly', c_float*4),
                ('lane3_len', c_float),
                ('lane3_prob', c_float) ,

                ('path_poly', c_float*4),
                ('path_len', c_float),
                ('path_prob', c_float) ]

    def setdata(self,datalist):
        self.DataLen = len(datalist)
        for i in range(self.DataLen):
            self.Data[i] = datalist[i]

class control_out_bus(Structure):
    _fields_ = [('FVCM_EPS_Frame', c_ubyte * 8),
                ('FVCM_HMI_Frame', c_ubyte * 8),
                ('StrgWhlAng', c_float),
                ('is_ID492MsgValid_bl', c_ubyte)]


class Can_bus(Structure):
    _fields_ = [('ChLKACtrlSts',  c_ubyte),
                ('ChLKARespToq',  c_float),
                ('DrvrStrgDlvrdToq',  c_float),
                ('StrgCustSetngDspCmd',  c_ubyte),
                ('is_ID492MsgValid_bl',  c_ubyte),
                ('AccelOvrd', c_ubyte),
                ('AirBagDplHS',  c_ubyte),
                ('ABSActvSts',  c_ubyte),
                ('EnRunSts',  c_ubyte),
                ('PTAccToqReqResp',  c_float),
                ('DrvrSbltAtcHS',  c_ubyte),
                ('VehDynYawRate',  c_float),
                ('AccelActuPos',  c_float),
                ('BntOpenSts',  c_ubyte),
                ('ACCDetObjExistPrblty',  c_float),
                ('DipdBeamLghtOn',  c_ubyte),
                ('LDWLKASwReq',  c_ubyte),
                ('DrvrDoorOpenSts', c_ubyte),
                ('ACCDetObjLatRltvDist', c_float),
                ('FrtPsngDoorOpenSts', c_ubyte),
                ('LftStrLght_On', c_ubyte),
                ('ACCDetObjID', c_ubyte),
                ('BrkPdlDrvrAppdPrs', c_float),
                ('MainBeamLghtOn', c_ubyte),
                ('RghtStrLght_On', c_ubyte),
                ('ACCDetObjLongRltvDist', c_float),
                ('RstrFctryDeftsReq',  c_ubyte),
                ('RLDoorOpenSts',  c_ubyte),
                ('RRDoorOpenSts',  c_ubyte),
                ('ACCDetObjLongRltvSpd', c_float),
                ('AEBSwReq',  c_ubyte),
                ('StrgWhlAng',  c_float),
                ('VehSpdAvgDrvn',  c_float),
                ('FCWSnstvLvlReq',  c_ubyte),
                ('ClstDspdVehSpd',  c_uint16),
                ('FCWSwReq',  c_ubyte),
                ('LDWAdoWarnngReq',  c_ubyte),
                ('LDWLKAHapticWrnngReq',  c_ubyte),
                ('StrgWhlAngGrd',  c_float),
                ('VehSpdAvgNonDrvn',  c_float),
                ('FrtWiperSwSts',  c_ubyte),
                ('LDWSnstvtLvlReq', c_ubyte),
                ('TJAICASwReq', c_ubyte),
                ('CCSwStsCanclSwA', c_ubyte),
                ('CCSwStsDistDecSw', c_ubyte),
                ('TrEstdGear', c_ubyte),
                ('VSELatAcc', c_float),
                ('CCSwStsDisIncSw', c_ubyte),
                ('CCSwStsOnSw', c_ubyte),
                ('CCSwStsRsmSw', c_ubyte),
                ('ChACCAccReqResp', c_float),
                ('CCSwStsSetSw', c_ubyte),
                ('TrShftLvrPos', c_ubyte),
                ('CCSwStsSpdDecSw', c_ubyte),
                ('VSELongAcc', c_float),
                ('CCSwStsSpdIncSw', c_ubyte),
                ('CCSwStsSwDataIntgty', c_ubyte),
                ('LeftBSD_Warnning',  c_ubyte),
                ('RightBSD_Warnning', c_ubyte),
                ('BSD_Status',        c_ubyte) ]

class Debug_bus(Structure):
    _fields_ = [('DP_C0', c_float),
                ('DP_C1', c_float),
                ('DP_C2', c_float),
                ('DP_C3', c_float),
                ('current_yawrate_degps', c_float),
                ('VehSpd_Kph', c_float),
                ('Arb_is_LatCtrlActv_bl', c_float),
                ('desired_Yawrate_degps', c_float),
                ('desired_Yawrate_degps_aftLmt', c_float),
                ('YRC_angD_ReqStrgWhlAng_sg', c_float),
                ('current_StrgWhlAng_deg', c_float),
                ('current_StrgWhlAngGrd_degps', c_float),
                ('DrvrStrgDlvrdToq_Nm', c_float),
                ('LKA_ReqToq',  c_float),
                ('is_LftLampOn',      c_ubyte),
                ('is_RghtLampOn',     c_ubyte),
                ('is_LftBSDWrng_bl',  c_ubyte),
                ('is_RghtBSDWrng_bl', c_ubyte) ]




class lat_controller():
    def __init__(self):
        self.libzs11_ctrl = cdll.LoadLibrary('/data/openpilot/selfdrive/controls/zs11_build/lib/libzs11_ctrl.so')
        self.libzs11_ctrl.app_initialize()

        self.data_in = control_in_bus()
        self.data_out = control_out_bus()
        self.veh_data= Can_bus()

        self.debug_data= Debug_bus()
        self.rolling_count = 0
        self.active = False

        self.VM_data = {}
        self.VM_data['VehSpdMps'] = 0
        self.VM_data['isCtrlActv'] = 0
        self.VM_data['leftBlinker'] = 0
        self.VM_data['rightBlinker'] = 0
        self.VM_data['leftBlindspot'] = 0
        self.VM_data['rightBlindspot'] = 0



    def update(self, cali_perc,  model_data, pm, udp, driver_path):
        can_data = udp.can_data
        # mapping inputs vehicle can data
        for i in range(8):
            self.data_in.ID_492_Data[i] = can_data['492'][i]
            self.data_in.ID_251_Data[i] = can_data['251'][i]
            self.data_in.ID_355_Data[i] = can_data['355'][i]
            self.data_in.ID_489_Data[i] = can_data['489'][i]
            self.data_in.ID_201_Data[i] = can_data['201'][i]
            self.data_in.ID_1130_Data[i] = can_data['1130'][i]
            self.data_in.ID_886_Data[i] = can_data['886'][i]
            self.data_in.ID_901_Data[i] = can_data['901'][i]
            self.data_in.ID_532_Data[i] = can_data['532'][i]
            self.data_in.ID_485_Data[i] = can_data['485'][i]
            self.data_in.ID_851_Data[i] = can_data['851'][i]
            self.data_in.ID_540_Data[i] = can_data['540'][i]
            self.data_in.ID_758_Data[i] = can_data['758'][i]
            self.data_in.ID_404_Data[i] = can_data['404'][i]
            self.data_in.ID_481_Data[i] = can_data['481'][i]
            self.data_in.ID_389_Data[i] = can_data['389'][i]
            self.data_in.ID_593_Data[i] = can_data['593'][i]
            self.data_in.ID_516_Data[i] = can_data['516'][i]

        # mapping inputs sensor openpilot data
        self.data_in.rolling_count = self.rolling_count

        self.data_in.lane0_prob = float(0)#float(OpLane_data['msg']['lane1']['prob'])
        self.data_in.lane1_prob = float(model_data.leftLane.prob)
        self.data_in.lane2_prob =  float(model_data.rightLane.prob)
        self.data_in.lane3_prob =  float(0) #float(OpLane_data['msg']['lane3']['prob'])
        self.data_in.path_prob =  float(model_data.path.prob)


        self.data_in.lane0_len = float(0)#float(OpLane_data['msg']['lane1']['validLen'])
        self.data_in.lane1_len =  float(model_data.leftLane.validLen)
        self.data_in.lane2_len = float(model_data.rightLane.validLen)
        self.data_in.lane3_len =  float(0) # float(OpLane_data['msg']['lane3']['validLen'])
        self.data_in.path_len =  float(model_data.path.validLen)



        for i in range(4):

            self.data_in.lane0_poly[i] = float(0)#-float(OpLane_data['msg']['lane1']['poly'][i])
            tmp = list(model_data.leftLane.poly)
            self.data_in.lane1_poly[i] = float(tmp[i])

            tmp = list(model_data.rightLane.poly)
            self.data_in.lane2_poly[i] = float(tmp[i])
            self.data_in.lane3_poly[i] = float(0)

            #tmp = list(sm['model'].path.poly)
            ### driver path from path planning
            self.data_in.path_poly[i]  = float(driver_path[i])


        # step function
        self.libzs11_ctrl.app_step(byref(self.data_in), byref(self.data_out),byref(self.veh_data), byref(self.debug_data)) 


        # udp_send cmd to stm32
        s = list(self.data_out.FVCM_EPS_Frame)  + list(self.data_out.FVCM_HMI_Frame) + [self.rolling_count, 0, 0, 0]
        #print(s)
        udp.server.sendto(b''.join(map(lambda x:int.to_bytes(x,1,'little'),s)), ('192.168.5.12', 9999) )


        ### publish control state and car state
        # controlsState
        dat = messaging.new_message('controlsState')
        dat.valid = True
        controlsState = dat.controlsState
        controlsState.enabled = bool(self.debug_data.Arb_is_LatCtrlActv_bl)
        controlsState.active = bool(self.debug_data.Arb_is_LatCtrlActv_bl)
        controlsState.vEgo = float(self.debug_data.VehSpd_Kph)/3.6
        controlsState.angleSteers = float(self.debug_data.current_StrgWhlAng_deg)
        controlsState.curvature = float(0.001)
        controlsState.steerOverride = False
        controlsState.engageable = True
        controlsState.vCruise = cali_perc 
        controlsState.angleSteersDes = float(self.debug_data.YRC_angD_ReqStrgWhlAng_sg)
        controlsState.state = log.ControlsState.OpenpilotState.enabled
        controlsState.mapValid = True

        pm.send('controlsState', dat)

        # carState
        dat = messaging.new_message('carState')
        dat.valid = True
        carState = dat.carState
        carState.vEgo = float(self.debug_data.VehSpd_Kph)/3.6
        carState.yawRate = float(self.debug_data.current_yawrate_degps)
        carState.steeringAngle = float(self.debug_data.current_StrgWhlAng_deg)
        carState.steeringRate = float(self.debug_data.current_StrgWhlAngGrd_degps)
        carState.steeringTorque = float(self.debug_data.DrvrStrgDlvrdToq_Nm)
        pm.send('carState', dat)

        ### update vmdata for path planning
 
        self.VM_data['VehSpdMps'] = float(self.debug_data.VehSpd_Kph)/3.6
        self.VM_data['isCtrlActv'] = bool(self.debug_data.Arb_is_LatCtrlActv_bl)
        self.VM_data['leftBlinker'] = bool(self.debug_data.is_LftLampOn)
        self.VM_data['rightBlinker'] = bool(self.debug_data.is_RghtLampOn)
        self.VM_data['leftBlindspot'] = bool(self.debug_data.is_LftBSDWrng_bl)
        self.VM_data['rightBlindspot'] = bool(self.debug_data.is_RghtBSDWrng_bl)




        # update rolling counnter
        self.rolling_count += 1
        if self.rolling_count > 15:
            self.rolling_count = 0

### threading for connect stm32 hardware
class udp_sock_thread(threading.Thread):
    def __init__(self, ):
        super(udp_sock_thread, self).__init__()
        self.server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.server.bind( ('192.168.5.11', 8888))
        self.id_list = ['492', '251', '355', '489', '201', \
                        '1130', '886', '901', '532',  '485', \
                        '851', '540', '758', '404', '481', \
                        '389', '593', '516' ]

        self.can_data = {}
        for idx in self.id_list:
            self.can_data[idx] = [0,0,0,0,0,0,0,0]

    def run(self):
        while True:
            #print(self.can_data)
            data, addr= self.server.recvfrom(1024)
            data = list(data)
            #print(data)
            self.can_data['492'] = data[0:8]
            self.can_data['251'] = data[8:16]
            self.can_data['355'] = data[16:24]
            self.can_data['489'] = data[24:32]
            self.can_data['201'] = data[32:40]
            self.can_data['1130'] = data[40:48]
            self.can_data['886'] = data[48:56]
            self.can_data['901'] = data[56:64]
            self.can_data['532'] = data[64:72]
            self.can_data['485'] = data[72:80]
            self.can_data['851'] = data[80:88]
            self.can_data['540'] = data[88:96]
            self.can_data['758'] = data[96:104]
            self.can_data['404'] = data[104:112]
            self.can_data['481'] = data[112:120]
            self.can_data['389'] = data[120:128]
            self.can_data['593'] = data[128:136]
            self.can_data['516'] = data[136:144]

def main():
    #config_realtime_process(3, Priority.CTRL_HIGH)
    ### start sock zmq subscribe thread to update data
    udp_server = udp_sock_thread()
    udp_server.setDaemon(True)
    udp_server.start()

    latController = lat_controller()
    sm = messaging.SubMaster(['model', 'liveCalibration'])
    pm = messaging.PubMaster(['controlsState','pathPlan',  'carState'])
    pp = PathPlanner()

    ### tmp data for lateral controller task
    driver_path = None
    model_data = None
    cali_perc = 0

    ### ratekeeper
    rk = Ratekeeper(50, print_delay_threshold=None)
    while True:
        t = time.time()
        sm.update(0)

        ### update  model
        if sm.updated['model']:
          driver_path = list(pp.update(sm, pm, latController.VM_data))
          model_data = sm['model']
        if sm.updated['liveCalibration']:
          cali_perc = sm['liveCalibration'].calPerc
        ### update controller 
        if driver_path is not None and model_data is not None:
          latController.update(cali_perc, model_data, pm, udp_server, driver_path)

        ### udp send data


        dt = time.time() -t
        #print(dt)
        rk.keep_time()
if __name__ == "__main__":
    main()
