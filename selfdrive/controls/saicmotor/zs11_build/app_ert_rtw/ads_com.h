#ifndef __RTE_TYPE_h__
#define __RTE_TYPE_h__

#include "Platform_Types.h"

/* global define */
#define PORTABLE_WORDSIZES 1



/* ConVersion for Constant Unit */
#define CV_kph2mps      0.2778
#define CV_mps2kph      3.6
#define CV_rad2deg      57.2958
#define CV_deg2rad      0.0175
#define CV_degps2radps  0.0175
#define CV_radps2degps  57.2958
#define CV_mps2g        0.1019
#define CV_g2mps        9.81

/* Constant for Vehicle Series Parameters */
#define C_AS21_VehParStrRatio_Num      20
#define C_AS21_VehParWhlBase_m      2.7
#define C_AS21_VehParUStrGrd_degpg      2.19
#define C_AS21_VehParVehWidth_m      1.8
#define C_AS21_CamPosOffst2Cent_m   0.04

#define C_EP21_VehParStrRatio_Num      15.2
#define C_EP21_VehParWhlBase_m      2.8
#define C_EP21_VehParUStrGrd_degpg      1.64
#define C_EP21_VehParVehWidth_m      1.8
#define C_EP21_CamPosOffst2Cent_m   0.175

#define C_IP31_VehParStrRatio_Num      15.2
#define C_IP31_VehParUStrGrd_degpg      2.19
#define C_IP31_VehParWhlBase_m      2.715
#define C_IP31_VehParVehWidth_m      1.835
#define C_IP31_CamPosOffst2Cent_m   0

#define C_IP32_VehParStrRatio_Num      15.2
#define C_IP32_VehParUStrGrd_degpg      2.19
#define C_IP32_VehParWhlBase_m      2.715
#define C_IP32_VehParVehWidth_m      1.848
#define C_IP32_CamPosOffst2Cent_m   0

/* /////////// Enumeration Definition /////////// */
/* enum define for eADI_AirBagDplIvn */
typedef enum {
    ADI_Airbag_Deployed =  0U, 
    ADI_No_Airbag_Deployed =  1U, 
} eADI_AirBagDplIvn;
                  
                  
/* enum define for eAEBFunType */
typedef enum {
    AEB_No_Fun =  0U, 
    AEB_C2C =  1U, 
    AEB_C2C_P =  2U, 
    AEB_C2C_P_Cyclist =  3U, 
} eAEBFunType;
                  
                  
/* enum define for eAEBPDS_AEBPedDftSw */
typedef enum {
    AEBPDS_Dft_ON =  0U, 
    AEBPDS_Dft_OFF =  1U, 
    AEBPDS_Dft_LstIgnCyclSts =  2U, 
    AEBPDS_Reversed =  3U, 
} eAEBPDS_AEBPedDftSw;
                  
                  
/* enum define for eAEBVCtrlSw */
typedef enum {
    AEBVSw_Unavailable =  0U, 
    AEBVSw_Off =  1U, 
    AEBVSw_On =  2U, 
} eAEBVCtrlSw;
                  
                  
/* enum define for eAFDS_AEBFCWDftSw */
typedef enum {
    AFDS_Dft_OFF =  0U, 
    AFDS_Dft_FCWON =  1U, 
    AFDS_Dft_AEBFCWON =  2U, 
    AFDS_Dft_LstIgnCyclSts =  3U, 
    AFDS_Reserved =  4U, 
} eAFDS_AEBFCWDftSw;
                  
                  
/* enum define for eAF_ActiveFunction */
typedef enum {
    No_VLatC =  0U, 
    LDP =  1U, 
    LKA =  2U, 
    TJA =  3U, 
    LCA =  4U, 
    ELK =  5U,
    PLT =  6U,
} eAF_ActiveFunction;
                  
                  
/* enum define for eAHR_AdoHptcReq */
typedef enum {
    AHR_NoReq =  0U, 
    AHR_Lvl1 =  1U, 
    AHR_Lvl2 =  2U, 
    AHR_Lvl3 =  3U, 
} eAHR_AdoHptcReq;
                  
                  
/* enum define for eAHWDS_AudHptcWrnngDftSw */
typedef enum {
    AHWDS_Dft_ON =  0U, 
    AHWDS_Dft_OFF =  1U, 
    AHWDS_Dft_LstIgnCyclSts =  2U, 
    AHWDS_Reversed =  3U, 
} eAHWDS_AudHptcWrnngDftSw;
                  
                  
/* enum define for eAHWR_AdoHptcWrnngReq */
typedef enum {
    AHWR_NoReq =  0U, 
    AHWR_Off =  1U, 
    AHWR_On =  2U, 
} eAHWR_AdoHptcWrnngReq;
                  
                  
/* enum define for eALCS_ALCState */
typedef enum {
    ALCS_LaneChangeInhibit =  0U, 
    ALCS_LaneFollow =  1U, 
    ALCS_LaneChangeWait =  2U, 
    ALCS_LeftLaneChange =  3U, 
    ALCS_RightLaneChange =  4U, 
    ALCS_LeftLaneReturn =  5U, 
    ALCS_RightLaneReturn =  6U, 
    ALCS_LaneChangeFinished =  7U, 
    ALCS_LaneReturnFinished =  8U, 
} eALCS_ALCState;
                  
                  
/* enum define for eAPA_ApaSts */
typedef enum {
    APA_Disable =  0U, 
    APA_Standby =  1U, 
    APA_SemiAPA_Active =  2U, 
    APA_FullyAPA_Active =  3U, 
    APA_Failed =  4U, 
} eAPA_ApaSts;
                  
                  
/* enum define for eAVH_AutoHoldSts */
typedef enum {
    AVH_Off =  0U, 
    AVH_Intervention =  1U, 
    AVH_Standby =  2U, 
    AVH_Error =  3U, 
} eAVH_AutoHoldSts;
                  
                  
/* enum define for eBDT_BrkDiscTm */
typedef enum {
    BDT_Not_High =  0U, 
    BDT_Temperature_Too_High =  1U, 
} eBDT_BrkDiscTm;
                  
                  
/* enum define for eBHAS_BrkHillAstSts */
typedef enum {
    BHAS_Inactive =  0U, 
    BHAS_BrakePressureHold =  1U, 
    BHAS_NormalPressureDecay =  2U, 
    BHAS_DriveoffPressureDecay =  3U, 
} eBHAS_BrkHillAstSts;
                  
                  
/* enum define for eBOS_BntOpen */
typedef enum {
    BOS_Bonnet_Closed =  0U, 
    BOS_Bonnet_Open =  1U, 
    BOS_Bonnet_Switch_Disconnect =  2U, 
} eBOS_BntOpen;
                  
                  
/* enum define for eBPL_BrkPdlApl */
typedef enum {
    BPL_Brake_Not_Applied =  0U, 
    BPL_Brake_Applied =  1U, 
} eBPL_BrkPdlApl;
                  
                  
/* enum define for eBSDW_BSDWarningSts */
typedef enum {
    BSDW_NoWarning =  0U, 
    BSDW_Warning_Level1 =  1U, 
    BSDW_Warning_Level2 =  2U, 
    BSDW_Reserved =  3U, 
} eBSDW_BSDWarningSts;
                  
                  
/* enum define for eCCR_ACCCancelReq */
typedef enum {
    CCR_NoCancl =  0U, 
    CCR_ManualCancl =  1U, 
    CCR_ACC_CondDissatf =  2U, 
} eCCR_ACCCancelReq;
                  
                  
/* enum define for eCDL_ACCDistLvl */
typedef enum {
    CDL_DistLvl0 =  0U, 
    CDL_DistLvl1 =  1U, 
    CDL_DistLvl2 =  2U, 
    CDL_DistLvl3 =  3U, 
    CDL_DistLvl4 =  4U, 
    CDL_DistLvl5 =  5U, 
} eCDL_ACCDistLvl;
                  
                  
/* enum define for eCDR_ACCDeclReq */
typedef enum {
    CDR_NoReq =  0U, 
    CDR_AccelReq =  1U, 
} eCDR_ACCDeclReq;
                  
                  
/* enum define for eCFS_CamrFltSts */
typedef enum {
    CFS_NoFault =  0U, 
    CFS_Fault =  1U, 
} eCFS_CamrFltSts;
                  
                  
/* enum define for eCGR_ACCGoReq */
typedef enum {
    CGR_NoReq =  0U, 
    CGR_Req =  1U, 
} eCGR_ACCGoReq;
                  
                  
/* enum define for eCLC_ChLkaCtrlSts */
typedef enum {
    CLC_NoReq =  0U, 
    CLC_ReqHonored =  1U, 
    CLC_LstArb =  2U, 
    CLC_CtrlNotAlldforFlt =  3U, 
    CLC_PreCondNotSatf =  4U, 
} eCLC_ChLkaCtrlSts;
                  
                  
/* enum define for eCLS_ACCObjClass */
typedef enum {
    CLS_Undermined =  0U, 
    CLS_Vehicle =  1U, 
    CLS_Motorcycle =  2U, 
    CLS_Truck =  3U, 
    CLS_Pedestrian =  4U, 
    CLS_NotSupptdPole =  5U, 
    CLS_NotSupptdTree =  6U, 
    CLS_Animal =  7U, 
    CLS_GenOnRoadObj =  8U, 
    CLS_Bicycle =  9U, 
    CLS_UnidentifiedVehicle =  10U, 
} eCLS_ACCObjClass;
                  
                  
/* enum define for eCMD_HMIDspCMD */
typedef enum {
    CMD_Unavailable =  0U, 
    CMD_Off =  1U, 
    CMD_On =  2U, 
} eCMD_HMIDspCMD;
                  
                  
/* enum define for eCMR_ACCMsg */
typedef enum {
    CMR_NoDsp =  0U, 
    CMR_UnablActACC =  1U, 
    CMR_ACCisCancl =  2U, 
    CMR_Active =  3U, 
    CMR_ACCinErrMod =  4U, 
    CMR_ACCSwtchOn =  5U, 
    CMR_ACCSwtchOff =  6U, 
    CMR_DrvrTkovReq =  7U, 
    CMR_SwitchGoReq =  8U, 
    CMR_RadarErr =  9U, 
    CMR_EngNotRun =  10U, 
    CMR_EPB_Applied =  11U, 
    CMR_ShiftNotD =  12U, 
    CMR_DoorBonnetOpen =  13U, 
    CMR_DrvrSbltRels =  14U, 
    CMR_DrvrModeNotSpot =  15U, 
} eCMR_ACCMsg;
                  
                  
/* enum define for eCMV_ACCObjMvSts */
typedef enum {
    CMV_Stationary =  0U, 
    CMV_TrckStpdFrmMvng =  1U, 
    CMV_TrackMoving =  2U, 
    CMV_TrackOncoming =  3U, 
    CMV_TrckStpdFrmOncmng =  4U, 
    CMV_NoTrack =  11U, 
    CMV_Error =  14U, 
    CMV_NotAvailable =  15U, 
    CMV_Reserved5 =  5U, 
    CMV_Reserved6 =  6U, 
    CMV_Reserved7 =  7U, 
    CMV_Reserved8 =  8U, 
    CMV_Reserved9 =  9U, 
    CMV_Reserved10 =  10U, 
    CMV_Reserved12 =  12U, 
    CMV_Reserved13 =  13U, 
} eCMV_ACCObjMvSts;
                  
                  
/* enum define for eCPR_PTCruzResp */
typedef enum {
    CPR_No_Request =  0U, 
    CPR_Request_Honored =  1U, 
    CPR_Lost_Arbitration =  2U, 
    CPR_Error =  3U, 
    CPR_Precondition_Not_Satisfied =  4U, 
} eCPR_PTCruzResp;
                  
                  
/* enum define for eCSNR_ACCObjSnsr */
typedef enum {
    CSNR_SingleTracklet =  0U, 
    CSNR_MultipleTracklets =  1U, 
    CSNR_VisionOnly =  2U, 
    CSNR_TrackletsAndVision =  3U, 
} eCSNR_ACCObjSnsr;
                  
                  
/* enum define for eCSRP_SCSReqRsp */
typedef enum {
    CSRP_No_request =  0U, 
    CSRP_Request_honored =  1U, 
    CSRP_Lost_Arbitration =  2U, 
    CSRP_Control_Not_Allowed_For_Error =  3U, 
    CSRP_PreCondition_Not_Satisfied =  4U, 
    CSRP_ReqReceived_NoFlt_NotHonored =  5U, 
} eCSRP_SCSReqRsp;
                  
                  
/* enum define for eCST_ACCSts */
typedef enum {
    CST_Off =  0U, 
    CST_Standby =  1U, 
    CST_Active =  2U, 
    CST_Override =  3U, 
    CST_BrakeOnly =  4U, 
    CST_StdStlActv =  5U, 
    CST_StdStlWait =  6U, 
} eCST_ACCSts;
                  
                  
/* enum define for eCSW_CCSwIntg */
typedef enum {
    CSW_Data_Valid =  0U, 
    CSW_Data_Invalid =  1U, 
    CSW_Failure_Detected =  2U, 
    CSW_Illegal_Range =  3U, 
} eCSW_CCSwIntg;
                  
                  
/* enum define for eCTRK_ACCObjTrackSts */
typedef enum {
    CTRK_Invalid =  0U, 
    CTRK_Merged =  1U, 
    CTRK_New =  2U, 
    CTRK_NewCoasted =  3U, 
    CTRK_NewUpdated =  4U, 
    CTRK_Updated =  5U, 
    CTRK_Coasted =  6U, 
} eCTRK_ACCObjTrackSts;
                  
                  
/* enum define for eCTR_ACCTorqReq */
typedef enum {
    CTR_NoReq =  0U, 
    CTR_TorqReq =  1U, 
} eCTR_ACCTorqReq;
                  
                  
/* enum define for eDCLS_DngrObjClass */
typedef enum {
    DCLS_Undermined =  0U, 
    DCLS_Vehicle =  1U, 
    DCLS_Motorcycle =  2U, 
    DCLS_Truck =  3U, 
    DCLS_Pedestrian =  4U, 
    DCLS_NotSupptdPole =  5U, 
    DCLS_NotSupptdTree =  6U, 
    DCLS_Animal =  7U, 
    DCLS_GenOnRoadObj =  8U, 
    DCLS_Bicycle =  9U, 
    DCLS_UnidentifiedVehicle =  10U, 
} eDCLS_DngrObjClass;
                  
                  
/* enum define for eDCM_DesCtrlMod */
typedef enum {
    DCM_NoneFol =  0U, 
    DCM_VehFol =  1U, 
    DCM_MergeFol =  2U, 
    DCM_PathFol =  3U, 
} eDCM_DesCtrlMod;
                  
                  
/* enum define for eDLS_DircnIndLamp */
typedef enum {
    DLS_Off =  0U, 
    DLS_LeftOn =  1U, 
    DLS_RightOn =  2U, 
} eDLS_DircnIndLamp;
                  
                  
/* enum define for eDMD_DrvMd */
typedef enum {
    DMD_No_Driving_Mode =  0U, 
    DMD_SuperECO =  1U, 
    DMD_ECO =  2U, 
    DMD_Normal =  3U, 
    DMD_Sport =  4U, 
    DMD_Super_Sport =  5U, 
    DMD_Customization_Mode =  7U, 
    DMD_Reserved6 =  6U, 
} eDMD_DrvMd;
                  
                  
/* enum define for eDMS_DspMeasSys */
typedef enum {
    DMS_kph =  0U, 
    DMS_mph =  1U, 
} eDMS_DspMeasSys;
                  
                  
/* enum define for eDMT_DtlMrgTyp */
typedef enum {
    DMT_NotAvlbl =  0U, 
    DMT_LeftMerge =  1U, 
    DMT_RightMerge =  2U, 
    DMT_MiddleLeftMerge =  3U, 
    DMT_MiddleRightMerge =  4U, 
    DMT_Unknown =  5U, 
} eDMT_DtlMrgTyp;
                  
                  
/* enum define for eDMV_DngrObjMvSts */
typedef enum {
    DMV_Stationary =  0U, 
    DMV_TrckStpdFrmMvng =  1U, 
    DMV_TrackMoving =  2U, 
    DMV_TrackOncoming =  3U, 
    DMV_TrckStpdFrmOncmng =  4U, 
    DMV_NoTrack =  11U, 
    DMV_Error =  14U, 
    DMV_NotAvailable =  15U, 
    DMV_Reserved5 =  5U, 
    DMV_Reserved6 =  6U, 
    DMV_Reserved7 =  7U, 
    DMV_Reserved8 =  8U, 
    DMV_Reserved9 =  9U, 
    DMV_Reserved10 =  10U, 
    DMV_Reserved12 =  12U, 
    DMV_Reserved13 =  13U, 
} eDMV_DngrObjMvSts;
                  
                  
/* enum define for eDOS_DoorOpenSts */
typedef enum {
    DOS_Closed =  0U, 
    DOS_Open =  1U, 
    DOS_Ajar =  2U, 
    DOS_Full_Open =  3U, 
} eDOS_DoorOpenSts;
                  
                  
/* enum define for eDSL_DrvrSetLvl */
typedef enum {
    DSL_DistLvl0 =  0U, 
    DSL_DistLvl1 =  1U, 
    DSL_DistLvl2 =  2U, 
    DSL_DistLvl3 =  3U, 
    DSL_DistLvl4 =  4U, 
    DSL_DistLvl5 =  5U, 
} eDSL_DrvrSetLvl;
                  
                  
/* enum define for eDSNR_DngrObjSnsr */
typedef enum {
    DSNR_SingleTracklet =  0U, 
    DSNR_MultipleTracklets =  1U, 
    DSNR_VisionOnly =  2U, 
    DSNR_TrackletsAndVision =  3U, 
} eDSNR_DngrObjSnsr;
                  
                  
/* enum define for eDST_DtlSpltTyp */
typedef enum {
    DST_NotAvlbl =  0U, 
    DST_LeftSplit =  1U, 
    DST_RightSplit =  2U, 
    DST_MiddleLeftSplit =  3U, 
    DST_MiddleRightSplit =  4U, 
    DST_Unknown =  5U, 
} eDST_DtlSpltTyp;
                  
                  
/* enum define for eDTRK_DngrObjTrackSts */
typedef enum {
    DTRK_Invalid =  0U, 
    DTRK_Merged =  1U, 
    DTRK_New =  2U, 
    DTRK_NewCoasted =  3U, 
    DTRK_NewUpdated =  4U, 
    DTRK_Updated =  5U, 
    DTRK_Coasted =  6U, 
} eDTRK_DngrObjTrackSts;
                  
                  
/* enum define for eEDR_AEBDclReq */
typedef enum {
    EDR_NoReq =  0U, 
    EDR_AEB_DeclReq =  1U, 
} eEDR_AEBDclReq;
                  
                  
/* enum define for eEHL_AEBHBALvl */
typedef enum {
    EHL_NoReq =  0U, 
    EHL_WarnngLvl1 =  1U, 
    EHL_WarnngLvl2 =  2U, 
    EHL_WarnngLvl3 =  3U, 
} eEHL_AEBHBALvl;
                  
                  
/* enum define for eEJR_FCWJrkLvl */
typedef enum {
    EJR_NoReq =  0U, 
    EJR_Lvl1 =  1U, 
    EJR_Lvl2 =  2U, 
    EJR_Lvl3 =  3U, 
} eEJR_FCWJrkLvl;
                  
                  
/* enum define for eELKDS_ELKDftSw */
typedef enum {
    ELKDS_Dft_ON =  0U, 
    ELKDS_Dft_OFF =  1U, 
    ELKDS_Dft_LstIgnCyclSts =  2U, 
    ELKDS_Reversed =  3U, 
} eELKDS_ELKDftSw;
                  
                  
/* enum define for eEMS_AEBMsg */
typedef enum {
    EMS_NoDsp =  0U, 
    EMS_UnablActAEB =  1U, 
    EMS_Active =  2U, 
    EMS_AEBinErrMod =  3U, 
    EMS_AEBSwtchOn =  4U, 
    EMS_AEBSwtchOff =  5U, 
    EMS_RadarErr =  6U, 
} eEMS_AEBMsg;
                  
                  
/* enum define for eENS_EngSpdSts */
typedef enum {
    ENS_NormalOperation =  0U, 
    ENS_DegradedOperation =  1U, 
    ENS_Reserved =  2U, 
    EMS_Invalid =  3U, 
} eENS_EngSpdSts;
                  
                  
/* enum define for eEPBF_EPBFlrSts */
typedef enum {
    EPBF_EPBNoError =  0U, 
    EPBF_EPBError =  1U, 
} eEPBF_EPBFlrSts;
                  
                  
/* enum define for eEPB_AppcnSts */
typedef enum {
    EPB_Unknown =  0U, 
    EPB_Applied =  1U, 
    EPS_Released =  2U, 
    EPB_In_Progress =  3U, 
} eEPB_AppcnSts;
                  
                  
/* enum define for eEP_AEBPedSts */
typedef enum {
    EP_Off =  0U, 
    EP_Standby =  1U, 
    EP_Disable =  2U, 
    EP_Override =  3U, 
    EP_Active =  4U, 
} eEP_AEBPedSts;
                  
                  
/* enum define for eERS_AEBDclResp */
typedef enum {
    ERS_NoReq =  0U, 
    ERS_ReqHonored =  1U, 
    ERS_LostArbitration =  2U, 
    ERS_CtrlNotAllowedForErr =  3U, 
    ERS_PreCondNotSatisfied =  4U, 
    ERS_DclReqRcvdNoFalt =  5U, 
} eERS_AEBDclResp;
                  
                  
/* enum define for eESL_FCWSnstLvl */
typedef enum {
    ESL_Unavailable =  0U, 
    ESL_Lvl1 =  1U, 
    ESL_Lvl2 =  2U, 
    ESL_Lvl3 =  3U, 
} eESL_FCWSnstLvl;
                  
                  
/* enum define for eESS_EnASSSta */
typedef enum {
    ESS_Engine_Off =  0U, 
    ESS_Engine_Running =  1U, 
    ESS_Engine_Starting =  2U, 
    ESS_Engine_Stopping =  3U, 
} eESS_EnASSSta;
                  
                  
/* enum define for eES_AEBSts */
typedef enum {
    ES_Off =  0U, 
    ES_On =  1U, 
    ES_Disable =  2U, 
    ES_Override =  3U, 
    ES_Active =  4U, 
} eES_AEBSts;
                  
                  
/* enum define for eETRF_EnToqRducnFlr */
typedef enum {
    ETRF_ToqRdctOK =  0U, 
    ETRF_ToqRdctTempFlr =  1U, 
    ETRF_ToqRdctPermFlr =  2U, 
    ETRF_ToqRdctLimited =  3U, 
    ETRF_ToqRdctCommFlr =  4U, 
} eETRF_EnToqRducnFlr;
                  
                  
/* enum define for eEWS_FCWSts */
typedef enum {
    EWS_NoReq =  0U, 
    EWS_WarnngLvl1 =  1U, 
    EWS_WarnngLvl2 =  2U, 
    EWS_WarnngLvl3 =  3U, 
} eEWS_FCWSts;
                  
                  
/* enum define for eFCD_FCWCnfdn */
typedef enum {
    eFCD_NotReliable =  0U, 
    eFCD_WarningReliable =  1U, 
} eFCD_FCWCnfdn;
                  
                  
/* enum define for eFCWCtrlSw */
typedef enum {
    FCWSw_Unavailable =  0U, 
    FCWSw_Off =  1U, 
    FCWSw_On =  2U, 
} eFCWCtrlSw;
                  
                  
/* enum define for eFLTS_FaultState */
typedef enum {
    FLTS_NoError =  0U, 
    FLTS_TmpUnavabl =  1U, 
    FLTS_ServReq =  2U, 
} eFLTS_FaultState;
                  
                  
/* enum define for eFLT_SysFltSts */
typedef enum {
    FLT_NoError =  0U, 
    FLT_PerfmDeGrad =  1U, 
    FLT_TmpUnavabl =  2U, 
    FLT_ServReq =  3U, 
} eFLT_SysFltSts;
                  
                  
/* enum define for eFSR_SnstvLvl */
typedef enum {
    FSR_NoReq =  0U, 
    FSR_Level1 =  1U, 
    FSR_Level2 =  2U, 
    FSR_Level3 =  3U, 
} eFSR_SnstvLvl;
                  
                  
/* enum define for eHDC_HDCSysSts */
typedef enum {
    HDC_Noraml =  0U, 
    HDC_Enabled =  1U, 
    HDC_Active =  2U, 
    HDC_Failed =  3U, 
    HDC_Temporarily_Inhibited =  4U, 
} eHDC_HDCSysSts;
                  
                  
/* enum define for eHOD_HandsOffDet */
typedef enum {
    HOD_HandsOff_Lvl1 =  0U, 
    HOD_HandsOn =  1U, 
    HOD_HandsOff_Lvl2 =  2U, 
    HOD_HandsOff_Lvl3 =  3U, 
} eHOD_HandsOffDet;
                  
                  
/* enum define for eHOS_HandsOnStates */
typedef enum {
    HOS_HandsOff =  0U, 
    HOS_HandsOn =  1U, 
} eHOS_HandsOnStates;
                  
                  
/* enum define for eHRS_HBAResp */
typedef enum {
    HRS_NoReq =  0U, 
    HRS_ReqHonored =  1U, 
    HRS_LostArbitration =  2U, 
    HRS_CtrlNotAllowedForErr =  3U, 
    HRS_PreCondNotSatisfied =  4U, 
    HRS_ReqRcvdNoFalt =  5U, 
} eHRS_HBAResp;
                  
                  
/* enum define for eJRS_JerkResp */
typedef enum {
    JRS_NoReq =  0U, 
    JRS_ReqHonored =  1U, 
    JRS_LostArbitration =  2U, 
    JRS_CtrlNotAllowedForErr =  3U, 
    JRS_PreCondNotSatisfied =  4U, 
    JRS_ReqRcvdNoFalt =  5U, 
} eJRS_JerkResp;
                  
                  
/* enum define for eLACS_LatCtrlSts */
typedef enum {
    LACS_Off =  0U, 
    LACS_Standby =  1U, 
    LACS_Active =  2U, 
    LACS_Override =  3U, 
} eLACS_LatCtrlSts;
                  
                  
/* enum define for eLCF_LaneCnfdn */
typedef enum {
    LCF_NotReliable =  0U, 
    LCF_RelbleforWrnng =  1U, 
    LCF_RelbleforInterv =  2U, 
    LCF_Reserve =  3U, 
} eLCF_LaneCnfdn;
                  
                  
/* enum define for eLCMD_LSSHMIDspCMD */
typedef enum {
    LCMD_Unavailable =  0U, 
    LCMD_Off =  1U, 
    LCMD_LDW =  2U, 
    LCMD_LDP =  3U, 
    LCMD_LKA =  4U, 
    LCMD_ELK =  5U,
} eLCMD_LSSHMIDspCMD;
                  
                  
/* enum define for eLCR_LaneColor */
typedef enum {
    LCR_Unknown =  0U, 
    LCR_Yellow =  1U, 
    LCR_White =  2U, 
    LCR_Blue =  3U, 
} eLCR_LaneColor;
                  
                  
/* enum define for eLC_LaneColour */
typedef enum {
    LC_White =  0U, 
    LC_LightGray =  1U, 
    LC_Gray =  2U, 
    LC_DarkGray =  3U, 
    LC_Black =  4U, 
    LC_Red =  5U, 
    LC_Yellow =  6U, 
    LC_Green =  7U, 
    LC_Cyan =  8U, 
    LC_Blue =  9U, 
    LC_Orange =  10U, 
    LC_Unknown =  15U, 
} eLC_LaneColour;
                  
                  
/* enum define for eLDPS_LDPState */
typedef enum {
    LDPS_OFF =  0U, 
    LDPS_STANDBY =  1U, 
    LDPS_PASSIVE =  2U, 
    LDPS_ACTIVE =  3U, 
    LDPS_OVERRIDE =  4U, 
    LDPS_SrvcRqd =  5U, 
    LDPS_SysTmpUnbl =  6U, 
} eLDPS_LDPState;
                  
                  
/* enum define for eLDWCM_LDWCtrlMod */
typedef enum {
    LDWCM_NoWarning =  0U, 
    LDWCM_Warning =  1U, 
} eLDWCM_LDWCtrlMod;
                  
                  
/* enum define for eLDWS_LDWState */
typedef enum {
    LDWS_OFF =  0U, 
    LDWS_STANDBY =  1U, 
    LDWS_PASSIVE =  2U, 
    LDWS_ACTIVE =  3U, 
    LDWS_Passive_Override =  4U, 
    LDWS_Active_Override =  5U, 
    LDWS_SrvcRqd =  6U, 
    LDWS_SysTmpUnbl =  7U, 
} eLDWS_LDWState;
                  
                  
/* enum define for eLKACM_LKACtrlMod */
typedef enum {
    LKACM_Disenable =  0U, 
    LKACM_EnableUnmanned =  1U, 
    LKACM_EnableManned =  2U, 
} eLKACM_LKACtrlMod;
                  
                  
/* enum define for eLKAS_LKAState */
typedef enum {
    LKAS_OFF =  0U, 
    LKAS_STANDBY =  1U, 
    LKAS_ACTIVE =  2U, 
    LKAS_OVERRIDE =  3U, 
    LKAS_TmpUnavabl =  4U, 
    LKAS_ServReq =  5U, 
} eLKAS_LKAState;
                  
                  
/* enum define for eLKSDS_LKSDftSw */
typedef enum {
    LKSDS_Dft_ON =  0U, 
    LKSDS_Dft_OFF =  1U, 
    LKSDS_Dft_LDWON =  2U, 
    LKSDS_Dft_LDPON =  3U, 
    LKSDS_Dft_LKAON =  4U, 
    LKSDS_Dft_LstIgnCyclSts =  5U, 
    LKSDS_Reversed =  6U, 
} eLKSDS_LKSDftSw;
                  
                  
/* enum define for eLLR_LkaLdwSwReq */
typedef enum {
    LLR_NoReq =  0U, 
    LLR_Off =  1U, 
    LLR_LDW =  2U, 
    LLR_LDP =  3U, 
    LLR_LKA =  4U, 
    LLR_ELK =  5U, 
} eLLR_LkaLdwSwReq;
                  
                  
/* enum define for eLMC_LaneMrkrColor */
typedef enum {
    LMC_NoLine =  0U, 
    LMC_White =  1U, 
    LMC_Red =  2U, 
    LMC_Yellow =  3U, 
} eLMC_LaneMrkrColor;
                  
                  
/* enum define for eLMT_LaneMrkrTyp */
typedef enum {
    LMT_NoLine =  0U, 
    LMT_Solid =  1U, 
    LMT_Dashed =  2U, 
    LMT_Curbstone =  3U, 
    LMT_Grass =  4U, 
    LMT_BotDott =  5U, 
} eLMT_LaneMrkrTyp;
                  
                  
/* enum define for eLOS_LdSpcOpen */
typedef enum {
    LOS_Load_Space_Closed =  0U, 
    LOS_Load_Space_Open =  1U, 
} eLOS_LdSpcOpen;
                  
                  
/* enum define for eLSDS_SnstvtLvlDftSw */
typedef enum {
    LSDS_Dft_LOW =  0U, 
    LSDS_Dft_STD =  1U, 
    LSDS_Dft_HGH =  2U, 
    LSDS_Dft_LstIgnCyclSts =  3U, 
    LSDS_Reserved =  4U, 
} eLSDS_SnstvtLvlDftSw;
                  
                  
/* enum define for eLSLR_SnstvtLvlReq */
typedef enum {
    LSLR_NoReq =  0U, 
    LSLR_Low =  1U, 
    LSLR_Standard =  2U, 
    LSLR_High =  3U, 
} eLSLR_SnstvtLvlReq;
                  
                  
/* enum define for eLTP_LaneType */
typedef enum {
    LTP_None =  0U, 
    LTP_Solid =  1U, 
    LTP_Dashed =  2U, 
    LTP_Botts_Dots =  4U, 
    LTP_Invalid =  6U, 
    LTP_Undecided =  7U, 
    LTP_DoublLanMarker =  8U, 
    LTP_Reserved3 =  3U, 
    LTP_Reserved5 =  5U, 
} eLTP_LaneType;
                  
                  
/* enum define for eLT_LaneType */
typedef enum {
    LT_Unknown =  0U, 
    LT_None =  1U, 
    LT_SolidLine =  2U, 
    LT_DashedLine =  3U, 
    LT_DoubleSolidLine =  4U, 
    LT_DoubleDashedLine =  5U, 
    LT_LeftSolidRightDashed =  6U, 
    LT_RightSolidLeftDashed =  7U, 
    LT_DashedBlocks =  8U, 
    LT_ShadedArea =  9U, 
    LT_PhysicalDivider =  10U, 
} eLT_LaneType;
                  
                  
/* enum define for eNCRT_NavCrntRoadTyp */
typedef enum {
    NCRT_Unknown =  0U, 
    NCRT_Highway =  1U, 
    NCRT_InterurbanRoads =  2U, 
    NCRT_CityRoads =  3U, 
    NCRT_Ramp =  4U, 
    NCRT_NationalRoad =  5U, 
    NCRT_ProvincialRoad =  6U, 
    NCRT_CountryRoad =  7U, 
    NCRT_VillageRoad =  8U, 
    NCRT_CityExpressWay =  9U, 
    NCRT_MajorUrbanRoad =  10U, 
    NCRT_SecondaryUrbanRoad =  11U, 
    NCRT_NormalUrbanRoad =  12U, 
    NCRT_NonNavigationRoad =  13U, 
} eNCRT_NavCrntRoadTyp;
                  
                  
/* enum define for eNDAB_AbnormBehvor */
typedef enum {
    eNDAB_Unknown =  0U, 
    eNDAB_NoAbnom =  1U, 
    eNDAB_PhoneCall =  2U, 
    eNDAB_Smoking =  3U, 
    eNDAB_Drink =  4U, 
    eNDAB_Eat =  5U, 
    eNDAB_6_Reserved =  6U, 
    eNDAB_7_Reserved =  7U, 
    eNDAB_8_Reserved =  8U, 
    eNDAB_9_Reserved =  9U, 
    eNDAB_A_Reserved =  10U, 
    eNDAB_B_Reserved =  11U, 
    eNDAB_C_Reserved =  12U, 
    eNDAB_D_Reserved =  13U, 
    eNDAB_E_Reserved =  14U, 
    eNDAB_F_Reserved =  15U, 
} eNDAB_AbnormBehvor;
                  
                  
/* enum define for eNDAR_AudReq */
typedef enum {
    eNDAR_NoReq =  0U, 
    eNDAR_Off =  1U, 
    eNDAR_On =  2U, 
} eNDAR_AudReq;
                  
                  
/* enum define for eNDAWD_AdoWrnDsp */
typedef enum {
    eNDAWD_Unavail =  0U, 
    eNDAWD_Off =  1U, 
    eNDAWD_On =  2U, 
    eNDAWD_LastSts =  3U, 
} eNDAWD_AdoWrnDsp;
                  
                  
/* enum define for eNDAWR_AdoWrnReq */
typedef enum {
    eNDAWR_NoReq =  0U, 
    eNDAWR_Off =  1U, 
    eNDAWR_On =  2U, 
} eNDAWR_AdoWrnReq;
                  
                  
/* enum define for eNDDC_DspCmd */
typedef enum {
    eNDDC_Unavail =  0U, 
    eNDDC_Off =  1U, 
    eNDDC_On =  2U, 
} eNDDC_DspCmd;
                  
                  
/* enum define for eNDDS_DstcnSts */
typedef enum {
    eNDDS_Unknown =  0U, 
    eNDDS_NoDstcn =  1U, 
    eNDDS_LowDstcn =  2U, 
    eNDDS_MidDstcn =  3U, 
    eNDDS_HighDstcn =  4U, 
    eNDDS_5_Reserved =  5U, 
    eNDDS_6_Reserved =  6U, 
    eNDDS_7_Reserved =  7U, 
} eNDDS_DstcnSts;
                  
                  
/* enum define for eNDFL_FtgLvl */
typedef enum {
    eNDFL_Unknown =  0U, 
    eNDFL_NoDrowsy =  1U, 
    eNDFL_LowDrowsy =  2U, 
    eNDFL_MidDrowsy =  3U, 
    eNDFL_HighDrowsy =  4U, 
    eNDFL_5_Reserved =  5U, 
    eNDFL_6_Reserved =  6U, 
    eNDFL_7_Reserved =  7U, 
} eNDFL_FtgLvl;
                  
                  
/* enum define for eNDGR_GazeRgn */
typedef enum {
    eNDGR_Unknown =  0U, 
    eNDGR_DrvrWin =  1U, 
    eNDGR_CoDrvrWin =  2U, 
    eNDGR_LRMirror =  3U, 
    eNDGR_RRMirror =  4U, 
    eNDGR_LWin =  5U, 
    eNDGR_RWin =  6U, 
    eNDGR_CRMirror =  7U, 
    eNDGR_SpdClustr =  8U, 
    eNDGR_HeadUp =  9U, 
    eNDGR_NaviDisp =  10U, 
    eNDGR_MidClustr =  11U, 
    eNDGR_StrgWhl =  12U, 
    eNDGR_LSeatFoot =  13U, 
    eNDGR_RSeatFoot =  14U, 
    eNDGR_LDrFoot =  15U, 
    eNDGR_RDrFoot =  16U, 
    eNDGR_11_Reserved =  17U, 
} eNDGR_GazeRgn;
                  
                  
/* enum define for eNDHWD_HapWrnDsp */
typedef enum {
    eNDHWD_Unavail =  0U, 
    eNDHWD_Off =  1U, 
    eNDHWD_On =  2U, 
    eNDHWD_LastSts =  3U, 
} eNDHWD_HapWrnDsp;
                  
                  
/* enum define for eNDHWR_HapWrnReq */
typedef enum {
    eNDHWR_NoReq =  0U, 
    eNDHWR_Off =  1U, 
    eNDHWR_On =  2U, 
} eNDHWR_HapWrnReq;
                  
                  
/* enum define for eNDLC_DircnLampCtrl */
typedef enum {
    NDLC_ReqNONE =  0U, 
    NDLC_ReqOFF =  1U, 
    NDLC_ReqON =  2U, 
} eNDLC_DircnLampCtrl;
                  
                  
/* enum define for eNDP_DrvrPrst */
typedef enum {
    eNDP_Unknown =  0U, 
    eNDP_NotPrst =  1U, 
    eNDP_Prst =  2U, 
} eNDP_DrvrPrst;
                  
                  
/* enum define for eNDSR_SwReq */
typedef enum {
    eNDSR_NoReq =  0U, 
    eNDSR_Off =  1U, 
    eNDSR_On =  2U, 
} eNDSR_SwReq;
                  
                  
/* enum define for eNDS_SysSts */
typedef enum {
    eNDS_Off =  0U, 
    eNDS_Stdby =  1U, 
    eNDS_Actv =  2U, 
    eNDS_CamBlk =  3U, 
    eNDS_SysTempUnavl =  4U, 
    eNDS_ServiceReq =  5U, 
    eNDS_Ini =  6U, 
    eNDS_Reserved =  7U, 
} eNDS_SysSts;
                  
                  
/* enum define for eNDVLR_VbnLvlReq */
typedef enum {
    eNDVLR_NoReq =  0U, 
    eNDVLR_Off =  1U, 
    eNDVLR_On =  2U, 
} eNDVLR_VbnLvlReq;
                  
                  
/* enum define for eNDWR_WrnReq */
typedef enum {
    eNDWR_NoReq =  0U, 
    eNDWR_FtgReq =  1U, 
    eNDWR_DstcnReq =  2U, 
} eNDWR_WrnReq;
                  
                  
/* enum define for eNES_EHRStat */
typedef enum {
    EHRS_NotReady =  0U, 
    EHRS_LineMss =  1U, 
    EHRS_LclECUNotReady =  2U, 
    EHRS_HSWErr =  3U, 
    EHRS_Others =  4U, 
} eNES_EHRStat;
                  
                  
/* enum define for eNHDG_DiagSts */
typedef enum {
    eNHDG_NoErr =  0U, 
    eNHDG_EEPROM =  1U, 
    eNHDG_ROMErr =  2U, 
    eNHDG_WDGErr =  3U, 
    eNHDG_CPUErr =  4U, 
    eNHDG_GuardErr =  5U, 
    eNHDG_SenseErr =  6U, 
    eNHDG_CPUDeftMatShotg =  7U, 
    eNHDG_UnderVoltage =  8U, 
    eNHDG_OverVoltage =  9U, 
    eNHDG_CodeErr =  10U, 
    eNHDG_SysErr =  11U, 
    eNHDG_C_Reserve =  12U, 
    eNHDG_D_Reserve =  13U, 
    eNHDG_E_Reserve =  14U, 
    eNHDG_F_Reserve =  15U, 
} eNHDG_DiagSts;
                  
                  
/* enum define for eNHDS_DetnSts */
typedef enum {
    eNHDS_Unknown =  0U, 
    eNHDS_NoVldContactDet =  1U, 
    eNHDS_VldContactDet =  2U, 
    eNHDS_3_Reserved =  3U, 
    eNHDS_4_Reserved =  4U, 
    eNHDS_5_Reserved =  5U, 
    eNHDS_6_Reserved =  6U, 
    eNHDS_7_Reserved =  7U, 
    eNHDS_8_Reserved =  8U, 
    eNHDS_9_Reserved =  9U, 
    eNHDS_A_Reserved =  10U, 
    eNHDS_B_Reserved =  11U, 
    eNHDS_C_Reserved =  12U, 
    eNHDS_D_Reserved =  13U, 
    eNHDS_E_Reserved =  14U, 
    eNHDS_F_Reserved =  15U, 
} eNHDS_DetnSts;
                  
                  
/* enum define for eNHSS_SysSts */
typedef enum {
    eNHSS_Avl =  0U, 
    eNHSS_Ini =  1U, 
    eNHSS_Flt =  2U, 
    eNHSS_OFF =  3U, 
    eNHSS_NtCal =  4U, 
    eNHSS_5_Reserve =  5U, 
    eNHSS_6_Reserve =  6U, 
    eNHSS_7_Reserve =  7U, 
} eNHSS_SysSts;
                  
                  
/* enum define for eNHTZ_TchSts */
typedef enum {
    eNHTZ_NoHdDet =  0U, 
    eNHTZ_HdDet =  1U, 
    eNHTZ_2_Reserve =  2U, 
    eNHTZ_3_Reserve =  3U, 
    eNHTZ_4_Reserve =  4U, 
    eNHTZ_5_Reserve =  5U, 
    eNHTZ_6_Reserve =  6U, 
} eNHTZ_TchSts;
                  
                  
/* enum define for eNIOR_IonRd */
typedef enum {
    eNIOR_Unavail =  0U, 
    eNIOR_OnRd =  1U, 
    eNIOR_OffRdDrivRgn =  2U, 
    eNIOR_OffRdNonDrivRgn =  3U, 
} eNIOR_IonRd;
                  
                  
/* enum define for eNNI_NavNewIcon */
typedef enum {
    NNI_Unknown =  0U, 
    NNI_Left =  1U, 
    NNI_Right =  2U, 
    NNI_LeftFront =  3U, 
    NNI_RightFront =  4U, 
    NNI_LeftRear =  5U, 
    NNI_RightRear =  6U, 
    NNI_Left_U_Turn =  7U, 
    NNI_Right_U_Turn =  8U, 
    NNI_GoStraight =  9U, 
    NNI_RoundaboutEntrance =  10U, 
    NNI_RoundaboutExit =  11U, 
    NNI_ServiceArea =  12U, 
    NNI_TollStation =  13U, 
    NNI_Tunnel =  14U, 
} eNNI_NavNewIcon;
                  
                  
/* enum define for eNOPSS_NOPSysSts */
typedef enum {
    eNOPSS_OFF =  0U, 
    eNOPSS_Passive =  1U, 
    eNOPSS_Stdby =  2U, 
    eNOPSS_HOActv =  3U, 
    eNOPSS_HFActv =  4U, 
    eNOPSS_Wait4Drvr =  5U, 
    eNOPSS_Ovrd =  6U, 
    eNOPSS_TOR =  7U, 
    eNOPSS_Prohibit =  8U, 
    eNOPSS_Fault =  9U, 
} eNOPSS_NOPSysSts;
                  
                  
/* enum define for eNPSS_PilotSysSts */
typedef enum {
    Pilot_OFF =  0U, 
    Pilot_Passive =  1U, 
    Pilot_Stdby =  2U, 
    Pilot_LonCtrlOnly =  3U, 
    Pilot_HOActv =  4U, 
    Pilot_HFRec =  5U, 
    Pilot_HFActv =  6U, 
    Pilot_Wait4Drvr =  7U, 
    Pilot_ALCActv =  8U, 
    Pilot_LonOvrdHO =  9U, 
    Pilot_LatOvrdHO =  10U, 
    Pilot_BothOvrdHO =  11U, 
    Pilot_TOR =  12U, 
    Pilot_Fault =  13U, 
    Pilot_Prohibit =  14U, 
} eNPSS_PilotSysSts;
                  
                  
/* enum define for eNRC_NRCDSts */
typedef enum {
    NRC_Inactive =  0U, 
    NRC_Active =  1U, 
    NRC_Semi_APA =  2U, 
    NRC_Fully_APA =  3U, 
} eNRC_NRCDSts;
                  
                  
/* enum define for eNRLC_ReqLneChng */
typedef enum {
    NRLC_None =  0U, 
    NRLC_LftLC =  1U, 
    NRLC_RghtLC =  2U, 
} eNRLC_ReqLneChng;
                  
                  
/* enum define for eNSFD_SpfngDet */
typedef enum {
    eNSFD_Unknown =  0U, 
    eNSFD_NotDet =  1U, 
    eNSFD_Det =  2U, 
} eNSFD_SpfngDet;
                  
                  
/* enum define for eNSHWASS_SHWASysSts */
typedef enum {
    eNSHWASS_OFF =  0U, 
    eNSHWASS_Passive =  1U, 
    eNSHWASS_Stdby =  2U, 
    eNSHWASS_Actv =  3U, 
    eNSHWASS_Ovrd =  4U, 
    eNSHWASS_TOR =  5U, 
    eNSHWASS_SafeStop =  6U, 
    eNSHWASS_Prohibit =  7U, 
} eNSHWASS_SHWASysSts;
                  
                  
/* enum define for eNSLS_NavSpdLmtValSts */
typedef enum {
    NSLS_Fault =  0U, 
    NSLS_Inactive =  1U, 
    NSLS_Active =  2U, 
} eNSLS_NavSpdLmtValSts;
                  
                  
/* enum define for eNSLT_NavSpdLmtTyp */
typedef enum {
    NSLT_NotSpecific =  0U, 
    NSLT_CameraDetection =  1U, 
    NSLT_IntervalSpeedDetection =  2U, 
} eNSLT_NavSpdLmtTyp;
                  
                  
/* enum define for eNSLU_NavSpdLmtValUnit */
typedef enum {
    NSLU_Unknown =  0U, 
    NSLU_mph =  1U, 
    NSLU_kph =  2U, 
} eNSLU_NavSpdLmtValUnit;
                  
                  
/* enum define for eNTRC_TrgtRdCatgr */
typedef enum {
    NTRC_NotAvlbl =  0U, 
    NTRC_RmpDvdRd =  1U, 
    NTRC_JCRd =  2U, 
    NTRC_ICRd =  3U, 
    NTRC_SpltMrgRd =  4U, 
    NTRC_VirtSpltRd =  5U, 
    NTRC_NormSpltRd =  6U, 
    NTRC_MrgCARd =  7U, 
    NTRC_NormMrgRd =  8U, 
} eNTRC_TrgtRdCatgr;
                  
                  
/* enum define for eNVS_NavSts */
typedef enum {
    NVS_Cruise =  0U, 
    NVS_Navigation =  1U, 
    NVS_Invalid =  2U, 
} eNVS_NavSts;
                  
                  
/* enum define for ePCLS_DngrPedClass */
typedef enum {
    PCLS_ObjectUndermined =  0U, 
    PCLS_Car =  1U, 
    PCLS_MotorCycle =  2U, 
    PCLS_Truck =  3U, 
    PCLS_Pedestrain =  4U, 
    PCLS_Bicycle =  9U, 
    PCLS_VehicleUnidentified =  10U, 
    PCLS_Reserved5 =  5U, 
    PCLS_Reserved6 =  6U, 
    PCLS_Reserved7 =  7U, 
    PCLS_Reserved8 =  8U, 
} ePCLS_DngrPedClass;
                  
                  
/* enum define for ePCS_PtCustSetngDspCmd */
typedef enum {
    PCS_Function_Disable =  0U, 
    PCS_Super_ECO =  1U, 
    PCS_ECO =  2U, 
    PCS_Normal =  3U, 
    PCS_Sport =  4U, 
    PCS_Super_Sport =  5U, 
} ePCS_PtCustSetngDspCmd;
                  
                  
/* enum define for ePRS_PrflResp */
typedef enum {
    PRS_NoReq =  0U, 
    PRS_ReqHonored =  1U, 
    PRS_LostArbitration =  2U, 
    PRS_CtrlNotAllowedForErr =  3U, 
    PRS_PreCondNotSatisfied =  4U, 
    PRS_ReqRcvdNoFalt =  5U, 
} ePRS_PrflResp;
                  
                  
/* enum define for ePSNR_DngrPedFusSrc */
typedef enum {
    PSNR_SingleTracklet =  0U, 
    PSNR_MultipleTracklets =  1U, 
    PSNR_VisionOnly =  2U, 
    PSNR_TrackletsAndVision =  3U, 
} ePSNR_DngrPedFusSrc;
                  
                  
/* enum define for ePSW_AEBPedSw */
typedef enum {
    PSW_NoReq =  0U, 
    PSW_Off =  1U, 
    PSW_On =  2U, 
} ePSW_AEBPedSw;
                  
                  
/* enum define for ePTRK_DngrPedSts */
typedef enum {
    PTRK_Invalid =  0U, 
    PTRK_Merged =  1U, 
    PTRK_New =  2U, 
    PTRK_NewCoasted =  3U, 
    PTRK_NewUpdated =  4U, 
    PTRK_Updated =  5U, 
    PTRK_Coasted =  6U, 
} ePTRK_DngrPedSts;
                  
                  
/* enum define for ePWR_PwrMd */
typedef enum {
    PWR_Off =  0U, 
    PWR_ACC =  1U, 
    PWR_Run =  2U, 
    PWR_CrankReq =  3U, 
} ePWR_PwrMd;
                  
                  
/* enum define for eRCR_RdrCalPrgs */
typedef enum {
    RCR_NoReq =  0U, 
    RCR_CalbStated =  1U, 
    RCR_CalbinProg =  2U, 
    RCR_CalbFnshSuc =  3U, 
    RCR_CalbFnshNeedAdj =  4U, 
    RCR_CalbFail =  5U, 
} eRCR_RdrCalPrgs;
                  
                  
/* enum define for eRDAS_RDASysStaELK */
typedef enum {
    RDAS_SensorBlockage =  3U, 
    RDAS_Disabled =  4U, 
    RDAS_Enabled =  5U, 
    RDAS_SystemError =  6U, 
    RDAS_Reserved0 =  0U, 
    RDAS_Reserved1 =  1U, 
    RDAS_Reserved2 =  2U, 
} eRDAS_RDASysStaELK;
                  
                  
/* enum define for eROST_RDASysObjStry */
typedef enum {
    ROST_Stationary =  0U, 
    ROST_NotStationary =  1U, 
} eROST_RDASysObjStry;
                  
                  
/* enum define for eROS_RDASysObjSts */
typedef enum {
    ROS_NoObject =  0U, 
    ROS_New =  1U, 
    ROS_Mature =  2U, 
    ROS_Coasted =  3U, 
} eROS_RDASysObjSts;
                  
                  
/* enum define for eROZ_RDASysObjZone */
typedef enum {
    ROZ_NoObject =  0U, 
    ROZ_ObjectInBSWZone =  1U, 
    ROZ_ObjectInCVWZone =  2U, 
    ROZ_ObjectInSharedZone =  3U, 
} eROZ_RDASysObjZone;
                  
                  
/* enum define for eRPLvl_ReplanLevel */
typedef enum {
    eRPLvl_ReplanLevel_RPLvl_Disable =  0U, 
    eRPLvl_ReplanLevel_RPLvl_Init =  1U, 
    eRPLvl_ReplanLevel_RPLvl_Replan =  2U, 
    eRPLvl_ReplanLevel_RPLvl_Normal =  3U, 
    eRPLvl_ReplanLevel_RPLvl_KeepTraj =  4U, 
} eRPLvl_ReplanLevel;
                  
                  
/* enum define for eRPL_RePlanLevel */
typedef enum {
    RPL_Disable =  0U, 
    RPL_Init =  1U, 
    RPL_RePlan =  2U, 
    RPL_Normal =  3U, 
    RPL_KeepTrj =  4U, 
} eRPL_RePlanLevel;
                  
                  
/* enum define for eRS_RampState */
typedef enum {
    RS_OFF =  1U, 
    RS_ON =  2U, 
    RS_RampUp =  3U, 
    RS_RampDown =  4U, 
} eRS_RampState;
                  
                  
/* enum define for eSAC_StrSnsrCali */
typedef enum {
    SAC_Unknow1 =  0U, 
    SAC_Estimated =  1U, 
    SAC_Calibrated =  2U, 
    SAC_Unknow2 =  3U, 
} eSAC_StrSnsrCali;
                  
                  
/* enum define for eSAM_SpdAstMd */
typedef enum {
    SAM_Off =  0U, 
    SAM_Slif =  1U, 
    SAM_Msa =  2U, 
    SAM_Isa =  3U, 
} eSAM_SpdAstMd;
                  
                  
/* enum define for eSAS_SpdAstSys */
typedef enum {
    SAS_Off =  0U, 
    SAS_ActLmt =  1U, 
    SAS_Standby =  2U, 
    SAS_EntryCondIncorrect =  3U, 
    SAS_OverSpeed =  4U, 
    SAS_Fault =  5U, 
    SAS_ActPassive =  6U, 
} eSAS_SpdAstSys;
                  
                  
/* enum define for eSLR_Sdlstl */
typedef enum {
    SLR_NoReq =  0U, 
    SLR_Req =  1U, 
} eSLR_Sdlstl;
                  
                  
/* enum define for eSMS_StrgModSet */
typedef enum {
    SMS_FuncDisable =  0U, 
    SMS_ComftMod =  1U, 
    SMS_NormMod =  2U, 
    SMS_SportMod =  3U, 
} eSMS_StrgModSet;
                  
                  
/* enum define for eSTVL_SnstvtLvl */
typedef enum {
    STVL_Unavailable =  0U, 
    STVL_Low =  1U, 
    STVL_Standard =  2U, 
    STVL_High =  3U, 
} eSTVL_SnstvtLvl;
                  
                  
/* enum define for eSWR_SwitchReq */
typedef enum {
    SWR_NoReq =  0U, 
    SWR_Off =  1U, 
    SWR_On =  2U, 
} eSWR_SwitchReq;
                  
                  
/* enum define for eTCSM_TCSMode */
typedef enum {
    TCSM_Off =  0U, 
    TCSM_Normal =  1U, 
    TCSM_Off_Road =  2U, 
} eTCSM_TCSMode;
                  
                  
/* enum define for eTCSS_TCSSts */
typedef enum {
    TCSS_Inactive =  0U, 
    TCSS_Active =  1U, 
    TCSS_Fault =  2U, 
} eTCSS_TCSSts;
                  
                  
/* enum define for eTDIR_TrShftDir */
typedef enum {
    TDIR_No_Shift =  0U, 
    TDIR_Up_Shift =  1U, 
    TDIR_Down_Shift =  2U, 
} eTDIR_TrShftDir;
                  
                  
/* enum define for eTGR_TrmGear */
typedef enum {
    TGR_Not_Supported =  0U, 
    TGR_First_Gear =  1U, 
    TGR_Second_Gear =  2U, 
    TGR_Third_Gear =  3U, 
    TGR_Fourth_Gear =  4U, 
    TGR_Fifth_Gear =  5U, 
    TGR_Sixth_Gear =  6U, 
    TGR_Seventh_Gear =  7U, 
    TGR_Eighth_Gear =  8U, 
    TGR_Neutral_Gear =  13U, 
    TGR_Rerverse_Gear =  14U, 
    TGR_Park_Gear =  15U, 
    TGR_Reserved9 =  9U, 
    TGR_Reserved10 =  10U, 
    TGR_Reserved11 =  11U, 
    TGR_Reserved12 =  12U, 
} eTGR_TrmGear;
                  
                  
/* enum define for eTIR_TJAICAReq */
typedef enum {
    TIR_NoReq =  0U, 
    TIR_Off =  1U, 
    TIR_On =  2U, 
} eTIR_TJAICAReq;
                  
                  
/* enum define for eTJACM_TJACtrlMod */
typedef enum {
    TJACM_Disenable =  0U, 
    TJACM_VehFolManned =  1U, 
    TJACM_VehFolUnmanned =  2U, 
    TJACM_MergeFolManned =  3U, 
    TJACM_MergeFolUnmanned =  4U, 
    TJACM_PathFolManned =  5U, 
    TJACM_PathFolUnmanned =  6U, 
} eTJACM_TJACtrlMod;
                  
                  
/* enum define for eTJADS_TJADftSw */
typedef enum {
    TJADS_Dft_ON =  0U, 
    TJADS_Dft_OFF =  1U, 
    TJADS_Dft_LstIgnCyclSts =  2U, 
    TJADS_Reversed =  3U, 
} eTJADS_TJADftSw;
                  
                  
/* enum define for eTJAS_TJAState */
typedef enum {
    TJAS_OFF =  0U, 
    TJAS_STANDBY =  1U, 
    TJAS_ACTIVE =  2U, 
    TJAS_OVERRIDE =  3U, 
    TJAS_FAIL_TmpUnavabl =  4U, 
    TJAS_FAIL_ServReq =  5U, 
} eTJAS_TJAState;
                  
                  
/* enum define for eTLP_ShftLvrPos */
typedef enum {
    TLP_Between_Ranges =  0U, 
    TLP_Park_Range =  1U, 
    TLP_Reverse_Range =  2U, 
    TLP_Neutral_Range =  3U, 
    TLP_Forward_Range_A =  4U, 
    TLP_Forward_Range_B =  5U, 
    TLP_Forward_Range_C =  6U, 
    TLP_Forward_Range_D =  7U, 
    TLP_Forward_Range_E =  8U, 
    TLP_Forward_Range_F =  9U, 
    TLP_Forward_Range_G =  10U, 
    TLP_Forward_Range_H =  11U, 
    TLP_Lever_Position_Unknown =  15U, 
    TLP_Reserved12 =  12U, 
    TLP_Reserved13 =  13U, 
    TLP_Reserved14 =  14U, 
} eTLP_ShftLvrPos;
                  
                  
/* enum define for eTMD_TCMTapMd */
typedef enum {
    TMD_NoAct =  0U, 
    TMD_DrvSftCtrlAct =  1U, 
    TMD_ElecRgeSelectAct =  2U, 
} eTMD_TCMTapMd;
                  
                  
/* enum define for eTRP_TrgtRdRltvPos */
typedef enum {
    TRP_NotAvlbl =  0U, 
    TRP_Left =  1U, 
    TRP_Right =  2U, 
    TRP_Middle =  3U, 
} eTRP_TrgtRdRltvPos;
                  
                  
/* enum define for eTRP_TrShftPtrn */
typedef enum {
    TRP_DftSftPttrnAct =  0U, 
    TRP_SftPttrn1Act =  1U, 
    TRP_SftPttrn2Act =  2U, 
    TRP_SftPttrn3Act =  3U, 
    TRP_SftPttrn4Act =  4U, 
    TRP_PTNonPrtPttrnAct =  5U, 
    TRP_PTPrtPttrnAct =  6U, 
} eTRP_TrShftPtrn;
                  
                  
/* enum define for eTRQR_TorqReq */
typedef enum {
    TRQR_NoReq =  0U, 
    TRQR_TorqReq =  1U, 
} eTRQR_TorqReq;
                  
                  
/* enum define for eTRT_TrgtRmpTyp */
typedef enum {
    TRT_NotAvlbl =  0U, 
    TRT_NonDirect =  1U, 
    TRT_Direct =  2U, 
} eTRT_TrgtRmpTyp;
                  
                  
/* enum define for eTSS_TgtSptSrcSts */
typedef enum {
    TSS_Undef =  0U, 
    TSS_Cam =  1U, 
    TSS_Navigation =  2U, 
    TSS_Fault =  3U, 
} eTSS_TgtSptSrcSts;
                  
                  
/* enum define for eUSR_UDWSwReq */
typedef enum {
    USR_NoReq =  0U, 
    USR_Off =  1U, 
    USR_On =  2U, 
} eUSR_UDWSwReq;
                  
                  
/* enum define for eUWR_UDWWrnngReq */
typedef enum {
    UWR_NoReq =  0U, 
    UWR_WrnngLvl1_Low =  1U, 
    UWR_WrnngLvl2_Mid =  2U, 
    UWR_WrnngLvl3_Hgh =  3U, 
} eUWR_UDWWrnngReq;
                  
                  
/* enum define for eVLD_ValidSts */
typedef enum {
    VLD_Valid =  0U, 
    VLD_Invalid =  1U, 
} eVLD_ValidSts;
                  
                  
/* enum define for eVSEM_VSEMode */
typedef enum {
    VSEM_Off =  0U, 
    VSEM_Normal =  1U, 
    VSEM_Competitive =  2U, 
} eVSEM_VSEMode;
                  
                  
/* enum define for eVSES_VSESts */
typedef enum {
    VSES_InAct =  0U, 
    VSES_Act =  1U, 
    VSES_Fault =  2U, 
    VSES_WarmingUp =  3U, 
    VSES_NotReady =  4U, 
} eVSES_VSESts;
                  
                  
/* enum define for eVSLR_VsulznReq */
typedef enum {
    VSLR_NoDsp =  0U, 
    VSLR_LinTrack =  1U, 
    VSLR_Intervention =  2U, 
    VSLR_Warning =  3U, 
    VSLR_IntervWrnng =  4U, 
} eVSLR_VsulznReq;
                  
                  
/* enum define for eVSL_StdStlSts */
typedef enum {
    VSL_Not_Standstill =  0U, 
    VSL_Standstill =  1U, 
    VSL_Invalid =  2U, 
} eVSL_StdStlSts;
                  
                  
/* enum define for eVSW_AEBVehSw */
typedef enum {
    VSW_NoReq =  0U, 
    VSW_Off =  1U, 
    VSW_On =  2U, 
} eVSW_AEBVehSw;
                  
                  
/* enum define for eVS_VehicleSeries */
typedef enum {
    VEH_AS21_iGS =  1U, 
    VEH_EP21 =  2U, 
    VEH_IP31 =  3U, 
    VEH_IP32 =  4U, 
} eVS_VehicleSeries;
                  
                  
/* enum define for eWPR_FrtWiperSw */
typedef enum {
    WPR_Wippers_Off =  0U, 
    WPR_Wippers_Intermittent =  1U, 
    WPR_Wippers_Slow =  2U, 
    WPR_Wippers_Fast =  3U, 
} eWPR_FrtWiperSw;
                  
                  
/* enum define for eWPS_BrkPreSts */
typedef enum {
    WPS_ExistBrkForce =  0U, 
    WPS_NoBrkForce =  1U, 
} eWPS_BrkPreSts;
                  
                  
/* enum define for eWRD_WhlRotDirc */
typedef enum {
    WRD_Unknown =  0U, 
    WRD_Forward =  1U, 
    WRD_Backward =  2U, 
    WRD_Initial_Invalid =  3U, 
} eWRD_WhlRotDirc;


/* enum define for E_ACCAccReqSts_t */
typedef enum {
    eACCAccelNoReq =  0U, 
    eACCAccelReq =  1U, 
} E_ACCAccReqSts_t;


/* enum define for E_ACCESPECMReqSts_t */
typedef enum {
    eACCReqActive =  0U, 
    eACCHighESPActv =  1U, 
    eACCHighIdle =  2U, 
    eACCHighECMActv =  3U, 
    eACCLowESPActv =  4U, 
    eACCLowIdle =  5U, 
    eACCLowECMActv =  6U, 
    eACCReqInactv =  7U, 
} E_ACCESPECMReqSts_t;
                  
      

/* enum define for E_ACCOAFSts_t */
typedef enum {
    eACCOAFOFF =  0U, 
    eACCOAFStdby =  1U, 
    eACCOAFActv =  2U, 
} E_ACCOAFSts_t;            


/* enum define for E_ACCReqSts_t */
typedef enum {
    eACCReqStsOff              =  0U, 
    eACCReqStsStandby           =  1U, 
    eACCReqStsActive            =  2U, 
    eACCReqStsActiveOverride     =  3U, 
    eACCReqStsBrkOnly            =  4U, 
    eStandStillActive             =  5U, 
    eStandStillWait               =  6U, 
    eCruiseCCC                    =  7U, 
    eCruiseACC                    =  8U, 
    eCruiseACCEmergency           =  9U, 
    eCruiseACCApproaching        =  10U, 
    eCruiseACCCurve               =  11U, 
    eACCReqStsInActive            =  12U, 
    eACCReqStsSleep              =  13U,    /* Default value */
    eACCRevsFault                =  14U, 
    eACCIRRevsFault               =  15U, 

} E_ACCReqSts_t;


/* enum define for E_ARBReqSts_t */
typedef enum {
    eARBStandBy =  0U, 
    eARBActive =  1U, 
} E_ARBReqSts_t;  


/* enum define for E_FCWWrngSts_t */
typedef enum {
    eFWrnNoReq =  0U, 
    eFWrnLvl1 =  1U, 
    eFWrnLvl2 =  2U, 
    eFWrnLvl13 =  3U,   
    eFWrnOff  =  4U,   
} E_FCWWrngSts_t;   

/* enum define for E_JerkLvlReq_t */
typedef enum {
    eJerkNoReq =  0U, 
    eJerkLvl1 =  1U, 
    eJerkLvl2 =  2U, 
    eJerkLvl3 =  3U,   
    eJerkWait  =  4U,   
    eJerkOff   =  5U,   
} E_JerkLvlReq_t;   



/* enum define for eTRPM_TrajPlnMd */
typedef enum {
    TRPM_OffMd =  0U,
    TRPM_CmfrtMd =  1U, 
    TRPM_EmrgncyMd =  2U,  
} eTRPM_TrajPlnMd;



/* enum define for eTLS_TrgtLaneSts */
typedef enum {
    TLS_TgtKeepingLane =  0U,
    TLS_TgtChangingLaneToLeft =  1U, 
    TLS_TgtChangingLaneToRight =  2U,  
} eTLS_TrgtLaneSts;



/* enum define for eTSQ_TrgtSelectQualty */
typedef enum {
    TSQ_ShortRange =  0U,
    TSQ_MediumRange =  1U, 
    TSQ_LongRange =  2U,  
} eTSQ_TrgtSelectQualty;


/* enum define for eOS_ObjSide */
typedef enum {
    OS_Rear =  0U,
    OS_Front =  1U, 
    OS_RightSide =  2U,  
    OS_LeftSide =  3U,
    OS_Unknown =  4U,
} eOS_ObjSide;

/* enum define for eOIT_ObjIndcrTurn */
typedef enum {
    OIT_NoIndcrn =  0U,
    OIT_LeftTurn =  1U, 
    OIT_RightTurn =  2U,  
    OIT_Unknown =  3U,
} eOIT_ObjIndcrTurn;

/* enum define for eOLS_ObjLightSts */
typedef enum {
    OLS_Unknown =  0U,
    OLS_Off =  1U, 
    OLS_On =  2U,  
} eOLS_ObjLightSts;

/* enum define for eSDS_SnsrDataSts */
typedef enum {
    SDS_Invld =  0U,
    SDS_Fusn =  1U, 
    SDS_New =  2U,
    SDS_PredNew =  3U,
    SDS_UpdNew =  4U,
    SDS_Upd =  5U,
    SDS_Pred =  6U,
} eSDS_SnsrDataSts;

/* enum define for eOR_ObjRebl */
typedef enum {
    OR_NotRelbl =  0U,
    OR_SoonNotRelbl =  1U,
    OR_CoastRelbl =  2U, 
    OR_LowRelbl =  3U,
    OR_HigherRelbl =  4U,
    OR_HighestRelbl =  5U,
    OR_BrkSpprtRelbl =  6U,
    OR_BrkgRelbl =  7U,
} eOR_ObjRebl;

/* enum define for ClassType */
typedef enum{
    ClsType_SOLID_LINE = 0U,
    ClsType_DASH_LINE = 1U,
    ClsType_SHORT_DASH_LINE = 2U,
    ClsType_SOLID_DOUBLE_LINE = 3U,
    ClsType_DASH_DOUBLE_LINE = 4U,
    ClsType_LEFT_SOLID_RIGHT_DASH = 5U,
    ClsType_LEFT_DASH_RIGHT_SOLID = 6U,
    ClsType_BARRIER = 7U,
    ClsType_CURB = 8U,
    ClsType_OTHER = 9U,
} ClassType;

/* enum define for ColorType */
typedef enum {
  ColorType_WHITE = 0U,                 
  ColorType_YELLOW = 1U,
  ColorType_ORANGE = 2U,
  ColorType_BLUE = 3U,
  ColorType_GEREEN = 4U,
  ColorType_GRAY = 5U,
  ColorType_LEFT_WHITE_RIGHT_YELLOW = 6U,
  ColorType_LEFT_YELLOW_RIGHT_WHITE = 7U,
  ColorType_YELLOW_GRAY_FUSION = 8U,
  ColorType_OTHER = 9U
} ColorType;

/* enum define for ObsType */
typedef enum {
  OT_UNKNOWN = 0,                      /* Default value */
  OT_UNKNOWN_UNMOVABLE,
  OT_PEDESTRIAN,
  OT_BICYCLE,
  OT_CAR,
  OT_TRUCK,
  OT_BUS,
  OT_MOTORCYCLE,
  OT_TRICYCLE,
  OT_CONE,
  OT_BAN,
  OT_STOPBAR,
  OT_SPEEDHUMP
} ObsType;

/* enum define for MaintenanceType */
typedef enum {
  MtT_New_Created = 1,                 /* Default value */
  MtT_Coasted,
  MtT_Merge,
  MtT_Tracked,
  MtT_Others
} MaintenanceType;

/* enum define for MotionType */
typedef enum {
  MT_UNKNOWN = 0,                      /* Default value */
  MT_MOVING_EGODIRECTION_DRIVING,
  MT_MOVING_EGODIRECTION_STOPPED,
  MT_MOVING_EGODIRECTION_REVERSING,
  MT_MOVING_ONCOMING,
  MT_MOVING_CROSSING,
  MT_STATIONARY
} MotionType;

/* enum define for MotionHistoryType */
typedef enum {
  MHT_UNKNOWN = 0,                     /* Default value */
  MHH_MOVING_EGODIRECTION_DRIVING,
  MHH_MOVING_EGODIRECTION_STOPPED,
  MHH_MOVING_EGODIRECTION_REVERSING,
  MHH_MOVING_ONCOMING,
  MHH_MOVING_CROSSING,
  MHH_STATIONARY
} MotionHistoryType;

/* enum define for SideType */
typedef enum {
  ST_FRONT = 0,                        /* Default value */
  ST_REAR,
  ST_RIGHTSIDE,
  ST_LEFTSIDE
} SideType;

/* enum define for eMS_MotionState */
typedef enum {
  Normal_Driving = 0,                        /* Default value */
  LowSpeed_Driving,
  LowSpeed2StandStill,
  StandStill2Driving,
  StandStill
} eMS_MotionState;



/* ///////////// BUS Definition /////////////// */

typedef struct {
    float LLI_d_LineLatPosA0_sg;
    float LLI_angR_LineHdAngA1_sg;
    float LLI_cv_LineCrvA2_sg; 
    float LLI_cvr_LineCrvRtA3_sg;
    float LLI_d_LineRngStart_sg;
    float LLI_d_LineRngEnd_sg; 
    eLCF_LaneCnfdn LLI_stat_LineQltyCnfd_eLCF; 
    eLCR_LaneColor LLI_stat_LineColor_eLCR;
    eLTP_LaneType LLI_stat_LineType_eLTP;
            
} B1_LaneLineInfo;
        
        
typedef struct {
    float REI_d_RdEdgeLatPosA0_sg;
    float REI_angR_RdEdgeHdAngA1_sg;
    float REI_cv_RdEdgeCrvA2_sg;
    float REI_cvr_RdEdgeCrvRtA3_sg;
    float REI_d_RdEdgeRngStart_sg;
    float REI_d_RdEdgeRngEnd_sg;
    eLCF_LaneCnfdn REI_stat_RdEdgeQltyCnfd_eLCF;
    unsigned char REI_stat_RdEdgeType_u8;
            
} B1_RdEdgeInfo;

typedef struct {
    float RBI_d_BarrierA0_sg;
    float RBI_angR_BarrierA1_sg;
    float RBI_cv_BarrierA2_sg;
    float RBI_cvr_BarrierA3_sg;
    float RBI_d_BarrierRngStart_sg;
    float RBI_d_BarrierRngEnd_sg;
    unsigned char RBI_indx_BarrierStatus_u8;
    eLCF_LaneCnfdn RBI_stat_BarriorQltyCnfd_eLCF;
            
} B1_RdBarriorInfo;


typedef struct {
    unsigned char     SOD_idx_ObjID_u8;     // object ID
    float             SOD_d_ObjOffset_sg;
    float             SOD_v_ObjOffsetDeriv_sg;
    float             SOD_v_ObjSpd_sg;
    float             SOD_a_ObjAccel_sg;
    float             SOD_angR_ObjHdAng_sg;
    float             SOD_d_ObjLgtPosn_sg;
    float             SOD_d_ObjLgtPosnStdDev_sg;
    float             SOD_d_ObjLatPosn_sg;
    unsigned char     SOD_idx_ObjType_u8;
    eTLS_TrgtLaneSts  SOD_sts_ObjLneChgTrnd_eTLS;
    unsigned char     SOD_idx_ObjTrfcJamAsstQlty_u8;
    eTSQ_TrgtSelectQualty SOD_sts_ObjSelctQlty_eTSQ;
    unsigned char     SOD_idx_ObjFusnSrc_u8;

} B1_SelObjData;



typedef struct {
    B1_SelObjData SOG_1stObj_bus;
    B1_SelObjData SOG_2ndObj_bus;
    B1_SelObjData SOG_3rdObj_bus;   
    B1_SelObjData SOG_4thObj_bus;   
    B1_SelObjData SOG_5thObj_bus;   
    B1_SelObjData SOG_6thObj_bus;   
    B1_SelObjData SOG_7thObj_bus;   
    B1_SelObjData SOG_8thObj_bus;   
    B1_SelObjData SOG_9thObj_bus;   
    B1_SelObjData SOG_10thObj_bus;   
    B1_SelObjData SOG_11thObj_bus;   
    B1_SelObjData SOG_12thObj_bus;   
    B1_SelObjData SOG_13thObj_bus;   
    B1_SelObjData SOG_14thObj_bus;   
    B1_SelObjData SOG_15thObj_bus;   

} B2_SelObjGroup;



// bus for target object trajectory processing
typedef struct {
    float OTI_d_ObjTraj1orderC0_sg;
    float OTI_angR_ObjTraj1orderC1_sg;
    float OTI_d_ObjTraj3orderC0_sg;
    float OTI_angR_ObjTraj3orderC1_sg;
    float OTI_cv_ObjTraj3orderC2_sg;
    float OTI_cvr_ObjTraj3orderC3_sg;
    boolean OTI_is_ObjTrajRst_bl;
    float OTI_arr_ObjTrajhistXPnts_sg[20];
    float OTI_arr_ObjTrajhistYPnts_sg[20];
    float OTI_k_ObjAvgMVSlope_sg;
    float OTI_cv_ObjAvgMVCrv_sg;
    boolean OTI_is_ObjTrajValid_bl;
    unsigned char OTI_perc_ObjTrajQlty_u8;

} B1_ObjTrajInfo;


typedef struct {
    unsigned char BLD_indx_RdTwoSidesBndryCase_u8;
    float BLD_d_LftLmRePosA0_sg;
    float BLD_angR_LftLmReHdAgA1_sg;
    float BLD_cv_LftLmReCrvA2_sg;
    float BLD_cvr_LftLmReCrvteRtA3_sg;
    float BLD_d_RghtLmRePosA0_sg;
    float BLD_angR_RghtLmReHdAgA1_sg;
    float BLD_cv_RghtLmReCrvA2_sg;
    float BLD_cvr_RghtLmReCrvteRtA3_sg;
    float BLD_d_EgoLaneWidth_sg;

} B1_BorderLaneData;


// outputs bus for EM
typedef struct {
boolean             EM_OUT_ABPR_is_HostLLneCoast_bl;
boolean             EM_OUT_ABPR_is_HostRLneCoast_bl;
boolean             EM_OUT_ABPR_is_NxtLLLneCoast_bl;
boolean             EM_OUT_ABPR_is_NxtRRLneCoast_bl;
boolean             EM_OUT_ABPR_is_LftRdEdgeCoast_bl;
boolean             EM_OUT_ABPR_is_RghtRdEdgeCoast_bl;
B1_LaneLineInfo     EM_OUT_ABPR_OrgHostLLne_bus;
B1_LaneLineInfo     EM_OUT_ABPR_LFHostLLne_bus;
B1_LaneLineInfo     EM_OUT_ABPR_OrgHostRLne_bus;
B1_LaneLineInfo     EM_OUT_ABPR_LFHostRLne_bus;
B1_LaneLineInfo     EM_OUT_ABPR_LFNxtLLLne_bus;
B1_LaneLineInfo     EM_OUT_ABPR_LFNxtRRLne_bus;
B1_RdEdgeInfo       EM_OUT_ABPR_OrgLftRdEdg_bus;
B1_RdEdgeInfo       EM_OUT_ABPR_OrgRghtRdEdg_bus;
float               EM_OUT_ABPR_cv_RoadAvgCvr_sg;
B1_RdEdgeInfo       EM_OUT_ABPR_EgdFLftRdEgd_bus;
B1_RdEdgeInfo       EM_OUT_ABPR_EgdFRghtRdEgd_bus;
B1_BorderLaneData   EM_OUT_ABPR_BrdrFHostBothLane_bus;
float               EM_OUT_RSE_a_EstdSlopeVal_sg;
float               EM_OUT_RSE_a_StcEstdSlopeVal_sg;
unsigned char       EM_OUT_RSE_indx_SubSctnSlpLvl_u8;
boolean             EM_OUT_RSE_is_UpHill_bl;
boolean             EM_OUT_RSE_is_DownHill_bl;
boolean             EM_OUT_RSE_is_UpHilLrgSlp_bl;
boolean             EM_OUT_RSE_is_UpHillNdAtn_bl;
unsigned char       EM_OUT_OS_idx_InTrgtIDLst_u8;
B1_SelObjData       EM_OUT_OS_CutINObj_bus;
B1_SelObjData       EM_OUT_OS_1stObj_bus;
B1_SelObjData       EM_OUT_OS_2ndObj_bus;
B1_SelObjData       EM_OUT_OS_3rdObj_bus;
B1_SelObjData       EM_OUT_OS_4thObj_bus;
B1_SelObjData       EM_OUT_OS_5thObj_bus;
B1_SelObjData       EM_OUT_OS_6thObj_bus;
B1_SelObjData       EM_OUT_OS_7thObj_bus;
B1_SelObjData       EM_OUT_OS_8thObj_bus;
B1_SelObjData       EM_OUT_OS_9thObj_bus;
B1_SelObjData       EM_OUT_OS_10thObj_bus;
B1_SelObjData       EM_OUT_OS_11thObj_bus;
B1_SelObjData       EM_OUT_OS_12thObj_bus;
B1_SelObjData       EM_OUT_OS13_thObj_bus;
B1_SelObjData       EM_OUT_OS_14thObj_bus;
B1_SelObjData       EM_OUT_OS_15thObj_bus;
float               EM_OUT_OS_d_CIPRltvDist_sg;
float               EM_OUT_OS_d_CIPRltvSpd_sg;
boolean             EM_OUT_OS_is_RstALLTrgts_bl;
B1_ObjTrajInfo      EM_OUT_ODPR_ObjTraj_bus;

} EM_Outputs;

// bus of ACC outputs
typedef struct 
{
    float                ACC_v_CSCMaxCrvteSpd_sg;
    boolean        ACC_is_CSCCtrlActv_bl;
    float               ACC_a_CSCAccel_sg;
    boolean        ACC_is_CSCActvRtLmtOff_bl;
    boolean        ACC_is_CSCActvRtLmtMstLgt_bl;
    float               ACC_a_FSCAccel_sg;
    float               ACC_a_FTCAccel_sg; 
    float               ACC_d_FTCLongtDsrdDist_sg;
    boolean        ACC_is_FTCStdy_bl;
    boolean        ACC_is_FTCSlideFlag_bl;
    float               ACC_d_FTCDsrdDistLvl1HMI_sg;
    float               ACC_d_FTCDsrdDistLvl2HMI_sg;
    float               ACC_d_FTCDsrdDistLvl3HMI_sg;
    float               ACC_a_FTCAccelDyn_sg;
    boolean        ACC_is_FTCDnSteepHill_bl;
    boolean        ACC_is_FTCUpSteepHill_bl;
    float               ACC_d_DistMinGap_sg;
    boolean        ACC_is_CBCActv_bl;
    float               ACC_a_MALTgtAccel_sg;
    float               ACC_a_MALTgtAccelRAW_sg;
    boolean        ACC_is_MALCSCAccelUsed_bl;
    float               ACC_a_MALTgtAccelDeadComp_sg;
} ACC_bus_ACCOutputs;

// bus of ARB outputs
typedef struct 
{
    float                ARB_T_PCTToqReqVal_sg;
    float                ARB_T_PCTTorqCmpVal_sg;
    float                ARB_T_PCTTorqSlpEstd_sg;
    float                ARB_indx_PCTWhlToq2PTRat_sg;
    float                ARB_a_PCTMaxSlideDecel_sg;
    boolean                ARB_is_PCTUphillBackSlidRisk_bl;
    E_ARBReqSts_t                ARB_indx_BPAARBReqSts_en; 
    float                ARB_a_BPADclReqVal_sg;
    float                ARB_T_BPAToqReqVal_sg;
    E_ACCESPECMReqSts_t        ARB_indx_BPAESPECMActvSts_en;
} ARB_bus_ARBOutputs;

// add bus of CTRL_Outputs
typedef struct 
{
    float                CTRL_OUT_yr_desYawRCmd_sg;
    float                CTRL_OUT_cv_DesPathCrv_sg;
    float                CTRL_OUT_d_CtrlPosErr_sg;
    float                CTRL_OUT_angD_CtrlHdAngErr_sg;
    ACC_bus_ACCOutputs                CTRL_OUT_bus_ACCOutputs;
    float                CTRL_OUT_reqStrgWhlOffstTorqCmd_sg;
    eRS_RampState                CTRL_OUT_sts_RampState_eRS; 
    boolean         CTRL_OUT_is_FunctionEnable_bl;
    float                CTRL_OUT_angD_reqStrgWhlAngCmd_sg;
    ARB_bus_ARBOutputs        CTRL_OUT_bus_ARBOutputs;
    float                CTRL_OUT_v_TmpACCFSCSetSpdErr_sg;
    float                CTRL_OUT_d_TmpACCFTCDeltDist_sg;
    float                CTRL_OUT_v_TmpACCFTCdeltaV_sg;
} CTRL_Outputs;

// add bus of B_ACCObjVldRaw
typedef struct 
{
    boolean DFIn_is_ACC01VldFlgRaw_bl;
    boolean DFIn_is_ACC02VldFlgRaw_bl;
    boolean DFIn_is_ACC03VldFlgRaw_bl;
    boolean DFIn_is_ACC04VldFlgRaw_bl;
    boolean DFIn_is_ACC05VldFlgRaw_bl;
    boolean DFIn_is_ACC06VldFlgRaw_bl;
    boolean DFIn_is_ACCStn01VldFlgRaw_bl;
    boolean DFIn_is_ACCStn02VldFlgRaw_bl;
    boolean DFIn_is_ACCStn03VldFlgRaw_bl;
    boolean DFIn_is_ACCStn04VldFlgRaw_bl;
    boolean DFIn_is_ACCStn05VldFlgRaw_bl;
    boolean DFIn_is_ACCStn06VldFlgRaw_bl;
}B_ACCObjVldRaw;

// add bus of B_ACCObjVldLv2
typedef struct 
{
    boolean ACC_is_ACC01VldLv2_bl;
    boolean ACC_is_ACC02VldLv2_bl;
    boolean ACC_is_ACC03VldLv2_bl;
    boolean ACC_is_ACC04VldLv2_bl;
    boolean ACC_is_ACC05VldLv2_bl;
    boolean ACC_is_ACC06VldLv2_bl;
    boolean ACC_is_ACCStn01VldLv2_bl;
    boolean ACC_is_ACCStn02VldLv2_bl;
    boolean ACC_is_ACCStn03VldLv2_bl;
    boolean ACC_is_ACCStn04VldLv2_bl;
    boolean ACC_is_ACCStn05VldLv2_bl;
    boolean ACC_is_ACCStn06VldLv2_bl;
}B_ACCObjVldLv2;

// add bus of FCT_Outputs
typedef struct
{
    boolean FCT_OUT_is_ByPassAct_bl;
    eALCS_ALCState FCT_OUT_sts_ALCState_eALCS;
    eTJACM_TJACtrlMod FCT_OUT_sts_CtrlMod_eTJACM;
    boolean FCT_OUT_is_ACCSGRGoReq_bl;
    boolean FCT_OUT_is_ACCSGRSdslReq_bl;
    E_ACCReqSts_t FCT_OUT_indx_ACCSMRSts_en;
    boolean FCT_OUT_is_VDPVehSdslSts_bl;
    boolean FCT_OUT_is_ALCPlanSucc_bl;
    boolean FCT_OUT_is_LDWMainSwitch_bl;
    boolean FCT_OUT_is_LDPMainSwitch_bl;
    boolean FCT_OUT_is_LKAMainSwitch_bl;
    boolean FCT_OUT_is_ELKMainSwitch_bl;
    boolean FCT_OUT_is_PLTMainSwitch_bl;
    boolean FCT_OUT_is_ACCMainSwitch_bl;
    eAF_ActiveFunction FCT_OUT_sts_ActLatCtrlFcn_eAF;
    eLACS_LatCtrlSts FCT_OUT_sts_ARBLKASysSts_eLACS;
    eFLT_SysFltSts FCT_OUT_sts_ARBLKASysFltSts_eFLT;
    eTRPM_TrajPlnMd FCT_OUT_sts_TRPMd_eTRPM;
    B1_LaneLineInfo FCT_OUT_bus_RefLne;
    eAHR_AdoHptcReq FCT_OUT_sts_LKSVbnLvlReq_eAHR;
    unsigned char FCT_OUT_num_LKAAlvRC_u8;
    float FCT_OUT_T_LKAReqToq_sg;
    unsigned short FCT_OUT_num_LKAReqToqPV_u16;
    eTRQR_TorqReq FCT_OUT_sts_LKAReqToqSts_eTRQR;
    eVLD_ValidSts FCT_OUT_sts_LKAReqToqV_eVLD;
    eFLT_SysFltSts FCT_OUT_sts_LKASysFltSts_eFLT;
    eLACS_LatCtrlSts FCT_OUT_sts_LKASysSts_eLACS;
    boolean FCT_OUT_is_DrvrTkovReq_bl;
    eLACS_LatCtrlSts FCT_OUT_sts_LDWSysSts_eLACS;
    eCFS_CamrFltSts FCT_OUT_sts_FVCMFltSts_eCFS;
    eSTVL_SnstvtLvl FCT_OUT_sts_SnstvtLvlDspCmd_eSTVL;
    eCMD_HMIDspCMD FCT_OUT_sts_AdoWrnngDspCmd_eCMD;
    boolean FCT_OUT_is_FVCMBlkd_bl;
    unsigned char FCT_OUT_num_AutoMainBeamLghtReq_u8;
    float FCT_OUT_d_DistSinceTrgtCamr_sg;
    float FCT_OUT_perc_FVCMCalPrgsReq_sg;
    eHOD_HandsOffDet FCT_OUT_stt_HandOffStrgWhlDetn_eHOD;
    eVLD_ValidSts FCT_OUT_sts_HandOffStrgWhlDetnStaV_eVLD;
    eLCMD_LSSHMIDspCMD FCT_OUT_sts_LDWLKADspCmd_eLCMD;
    eCMD_HMIDspCMD FCT_OUT_sts_HptcWrngDspCmd_eCMD;
    eVSLR_VsulznReq FCT_OUT_sts_LVsulznReq_eVSLR;
    eVSLR_VsulznReq FCT_OUT_sts_RVsulznReq_eVSLR;
    eFLT_SysFltSts FCT_OUT_sts_LDWSysFltSts_eFLT;
    eAHR_AdoHptcReq FCT_OUT_sts_LDWLKAAudReq_eAHR;
    eCMD_HMIDspCMD FCT_OUT_sts_TJAICADspCmd_eCMD;
    eLACS_LatCtrlSts FCT_OUT_sts_TJASysSts_eLACS;
    eFLT_SysFltSts FCT_OUT_sts_TJAICASysFltSts_eFLT;
    unsigned char FCT_OUT_V_TrgtSpdReqCamr_u8;
    eAF_ActiveFunction FCT_OUT_sts_ActiveFunction_eAF;
    boolean FCT_OUT_is_HdOffActExcdCntFlf_bl;
    boolean FCT_OUT_is_HdOffExcdTmFlf_bl;
    boolean FCT_OUT_is_TJAHdOffExt_bl;
    boolean FCT_OUT_is_LKAHdOffExt_bl;
    boolean FCT_OUT_is_HdOffExtFlg_bl;
    eCDL_ACCDistLvl FCT_OUT_sts_ACCDetObjDistLvl_eCDL;
    unsigned char FCT_OUT_indx_ACCSeldDistLvl_u8;
    eCCR_ACCCancelReq FCT_OUT_sts_ACCSysCanclReq_eCCR;
    eFLT_SysFltSts FCT_OUT_sts_ACCSysFltStsHMI_eFLT;
    eFLT_SysFltSts FCT_OUT_sts_ACCSysFltSts_eFLT;
    unsigned char FCT_OUT_indx_ACCAccReqSts_u8;
    E_ACCReqSts_t FCT_OUT_indx_ACCSysSts_u8;
    unsigned char FCT_OUT_is_ACCObjDet_u8;
    boolean FCT_OUT_is_ACCGoNotfr_bl;
    unsigned char FCT_OUT_is_ACCDrvrTkovReq_bl;
    unsigned char FCT_OUT_indx_ACCToqReqSts_u8;
    eCMR_ACCMsg FCT_OUT_indx_ACCMsgReq_u8;
    unsigned char FCT_OUT_indx_ACCRdrCalPrgsReq_u8;
    float FCT_OUT_V_ACCDISMemSpd_sg;
    float FCT_OUT_V_ACCDISSetSpdIPK_sg;
    float FCT_OUT_V_ACCDISSetSpdRAW_sg;
    float FCT_OUT_v_ACCDISSetSpd_sg;
    float FCT_OUT_V_ACCDISSetSpd_sg;
    unsigned char FCT_OUT_indx_ACCDISSwSts_u8;
    eDSL_DrvrSetLvl FCT_OUT_sts_ACCDISTmDistLvl_eDSL;
    boolean FCT_OUT_is_VDPACCSwOnSw_bl;
    boolean FCT_OUT_is_VDPACCSwSetSw_bl;
    boolean FCT_OUT_is_VDPACCSwCanclSw_bl;
    boolean FCT_OUT_is_VDPACCSwRsmSw_bl;
    boolean FCT_OUT_is_VDPACCSwSpdIncSw_bl;
    boolean FCT_OUT_is_VDPACCSwSpdDecSw_bl;
    boolean FCT_OUT_is_VDPACCSwSpdIncSwHldCmd_bl;
    boolean FCT_OUT_is_VDPACCSwSpdDecSwHldCmd_bl;
    boolean FCT_OUT_is_VDPACCSwSpdIncSwHld_bl;
    boolean FCT_OUT_is_VDPACCSwSpdDecSwHld_bl;
    boolean FCT_OUT_is_VDPACCSwDistIncSw_bl;
    boolean FCT_OUT_is_VDPACCSwDistDecSw_bl;
}FCT_Outputs;




typedef struct {
  boolean VCP_is_RoadBackAngValid_bl;
  float VCP_angD_RoadBankAng_sg;
  float VCP_v2_VehParSquVch_sg;
  float VCP_k_VehParStrStabFactK_sg;
  float VCP_kv_UStrGrdKv_sg;
} VCP_B_StateEst;

typedef struct {
  /* Target Road Category of Control Split Point */
  eNTRC_TrgtRdCatgr BE_sts_TrgtRoadCatgrCPnt_eNTRC;

  /* ID of Control Split Point */
  unsigned char BE_num_IDCPnt_u8;

  /* Target Lane ID of Control Split Point */
  char BE_indx_TrgtLaneNumCPnt_s8[4];

  /* Target Section ID of Control Split Point */
  unsigned int BE_indx_TrgtSectNumCPnt_u32;

  /* Target Road Speed Limit of Control Split Point */
  float BE_V_TrgtRoadSpdLmtCPnt_sg;

  /* Divide Roads Number of Control Split Point */
  unsigned char BE_num_DvdRoadsNumCPnt_u8;

  /* Target Road Relative Position of Control Split Point */
  eTRP_TrgtRdRltvPos BE_sts_TrgtRdRltvPosCPnt_eTRP;

  /* Distance between ID1 Solid Line Array Start Points and Control Split Point */
  float BE_d_ID1SolidLneStArrCPnt_sg[3];

  /* Distance between ID1 Solid Line Array End Points and Control Split Point */
  float BE_d_ID1SolidLneEndCPnt_sg[3];

  /* Distance between ID2 Solid Line Array Start Points and Control Split Point */
  float BE_d_ID2SolidLneStArrCPnt_sg[3];

  /* Distance between ID2 Solid Line Array End Points and Control Split Point */
  float BE_d_ID2SolidLneEndCPnt_sg[3];

  /* Distance between ID3 Solid Line Array Start Points and Control Split Point */
  float BE_d_ID3SolidLneStArrCPnt_sg[3];

  /* Distance between ID3 Solid Line Array End Points and Control Split Point */
  float BE_d_ID3SolidLneEndCPnt_sg[3];

  /* Distance between ID4 Solid Line Array Start Points and Control Split Point */
  float BE_d_ID4SolidLneStArrCPnt_sg[3];

  /* Distance between ID4 Solid Line Array End Points and Control Split Point */
  float BE_d_ID4SolidLneEndCPnt_sg[3];
  float BE_d_SpltPntSolidLineLenCPnt_sg;

  /* Distance between controlled vehicle and control split point */
  float BE_d_DstToSpltPntCPnt_sg;

  /* Section number array of channel 1 for control split point */
  unsigned int BE_indx_Chnl1SectNumArrCP_u32[20];

  /* Lane number array of channel 1 for control split point */
  char BE_indx_Chnl1LaneNumArrCP_s8[20];

  /* Section number array of channel 2 for control split point */
  unsigned int BE_indx_Chnl2SectNumArrCP_u32[20];

  /* Lane number array of channel 2 for control split point */
  char BE_indx_Chnl2LaneNumArrCP_s8[20];

  /* Section number array of channel 3 for control split point */
  unsigned int BE_indx_Chnl3SectNumArrCP_u32[20];

  /* Lane number array of channel 3 for control split point */
  char BE_indx_Chnl3LaneNumArrCP_s8[20];

  /* Section number array of channel 4 for control split point */
  unsigned int BE_indx_Chnl4SectNumArrCP_u32[20];

  /* Lane number array of channel 4 for control split point */
  char BE_indx_Chnl4LaneNumArrCP_s8[20];

  /* Section number array of channel 5 for control split point */
  unsigned int BE_indx_Chnl5SectNumArrCP_u32[20];

  /* Lane number array of channel 5 for control split point */
  char BE_indx_Chnl5LaneNumArrCP_s8[20];

  /* Section number array of channel 6 for control split point */
  unsigned int BE_indx_Chnl6SectNumArrCP_u32[20];

  /* Lane number array of channel 6 for control split point */
  char BE_indx_Chnl6LaneNumArrCP_s8[20];

  /* Section number array of channel 7 for control split point */
  unsigned int BE_indx_Chnl7SectNumArrCP_u32[20];

  /* Lane number array of channel 7 for control split point */
  char BE_indx_Chnl7LaneNumArrCP_s8[20];

  /* Section number array of channel 8 for control split point */
  unsigned int BE_indx_Chnl8SectNumArrCP_u32[20];

  /* Lane number array of channel 8 for control split point */
  char BE_indx_Chnl8LaneNumArrCP_s8[20];

  /* Section number array of channel 9 for control split point */
  unsigned int BE_indx_Chnl9SectNumArrCP_u32[20];

  /* Lane number array of channel 9 for control split point */
  char BE_indx_Chnl9LaneNumArrCP1_s8[20];

  /* Section number array of channel A for control split point */
  unsigned int BE_indx_ChnlASectNumArrCP_u32[20];

  /* Lane number array of channel A for control split point */
  char BE_indx_ChnlALaneNumArrCP_s8[20];

  /* Section numbers of split-type lane array for control split point */
  unsigned int BE_indx_SpltTypLnSectNumArrCP_u32[10];

  /* Lane numbers of split-type lane array for control split point */
  char BE_indx_SpltTypLnLaneNumArrCP_s8[10];

  /* Longitudinal distance along lane direction between split-type lanes start point and controlled vehicle for control split point */
  float BE_d_SpltTypLnStLgtDstArrCP_sg[10];

  /* Detailed split type for control split point */
  eDST_DtlSpltTyp BE_sts_DetailedSpltTypArrCP_eDST[10];

  /* Section numbers of merge-type lane array for control split point 1 */
  unsigned int BE_indx_MrgTypLnSectNumArrCP_u32[10];

  /* Lane numbers of merge-type lane array for control split point */
  char BE_indx_MrgTypLnLaneNumArrCP_s8[10];

  /* Longitudinal distance along lane direction between merge-type lanes end point and controlled vehicle for control split point */
  float BE_d_MrgTypLnEdLgtDstArrCP_sg[10];

  /* Detailed merge type for control split point */
  eDMT_DtlMrgTyp BE_sts_DetailedMrgTypArrCP_eDMT[10];
} B_CtrlSpltPntSet;

typedef struct {
  /* Current lane number */
  char BE_indx_CurLaneNum_u8;

  /* Current section number */
  unsigned int BE_indx_CurSectNum_u32;

  /* controlled vehicle is within the defined HF geographical fence or not. */
  boolean BE_is_HFGeoF_bl;

  /* Is SD-HD navi mapping available (i.e. successful mapping of SD/HD for navi rounte) */
  boolean BE_is_HDMapNaviAvlbly_bl;

  /* controlled vehicle is within the defined NOP geographical fence or not. */
  boolean BE_is_NOPGeoF_bl;

  /* Is host vehicle deviated from navigation route */
  boolean BE_is_NaviRouteDvt_bl;

  /* Total lane number in current section */
  char BE_num_TolLneNum_s8;

  /* Lane Speed Limit of Lane 1 in current section */
  float BE_V_LneSpdLmtID1_sg;

  /* Lane Speed Limit of Lane 2 in current section */
  float BE_V_LneSpdLmtID2_sg;

  /* Lane Speed Limit of Lane 3 in current section */
  float BE_V_LneSpdLmtID3_sg;

  /* Lane Speed Limit of Lane 4 in current section */
  float BE_V_LneSpdLmtID4_sg;

  /* Lane Speed Limit of Lane 5 in current section */
  float BE_V_LneSpdLmtID5_sg;

  /* Lane Speed Limit of Lane 6 in current section */
  float BE_V_LneSpdLmtID6_sg;
} B_VehPos;

typedef struct {
  float BE_d_PthSpltPntLonDst_sg;
  float BE_d_PthSpltPntLatDst_sg;
  float BE_d_LftLnSpltPntLonDst_sg;
  float BE_d_LftLnSpltPntLatDst_sg;
  float BE_d_RghtLnSpltPntLonDst_sg;
  float BE_d_RghtLnSpltPntLatDst_sg;
} B_HDMBaseInfo;

typedef struct {
  unsigned int BE_num_LnID_u32;
  unsigned char BE_cnt_LnAlvCnt_u8;
  unsigned char BE_num_LnLftLinShpPntVldNum_u8;
  unsigned char BE_num_LnRghtLinShpPntVldNum_u8;
  unsigned char BE_num_LnCrvVldNum_u8;
  float BE_d_LnLftLinShpPntLonDstArr_sg[150];
  float BE_d_LnLftLinShpPntLatDstArr_sg[150];
  float BE_d_LnRghtLinShpPntLonDstArr_sg[150];
  float BE_d_LnRghtLinShpPntLatDstArr_sg[150];
  float BE_cv_LnCrv_sg[15];
  float BE_d_LnLftLinTypStArr_sg[3];
  float BE_d_LnLftLinTypEndArr_sg[3];
  eLT_LaneType BE_sts_LnLftLinTyp1ValArr_eLT[3];
  float BE_d_LnRghtLinTypStArr_sg[3];
  float BE_d_LnRghtLinTypEndArr_sg[3];
  eLT_LaneType BE_sts_LnRghtLinTypValArr_eLT[3];
  float BE_d_LnLftLinClrStArr_sg[3];
  float BE_d_LnLftLinClrEndArr_sg[3];
  eLC_LaneColour BE_sts_LnLftLinClrValArr_eLC[3];
  float BE_d_LnRghtLinClrStArr_sg[3];
  float BE_d_LnRghtLinClrEndArr_sg[3];
  eLC_LaneColour BE_sts_LnRghtLinClrValArr_eLC[3];
} B_HDMLaneInfo;

typedef struct {
  /* 0x0=current out of GeoFencing (µ±Ç°³µÁ¾ÔÚµØÀíÎ§À¸Íâ);0x1=current in GeoFencing£¨µ±Ç°³µÁ¾ÔÚµØÀíÎ§À¸ÄÚ£© */
  boolean BE_is_GroFencingCurr_bl;
  unsigned int BE_indx_FencingCurrReasonArr1st_u32;
  unsigned int BE_indx_FencingCurrReasonArr2nd_u32;
  unsigned int BE_indx_WarningInfo1st_u32;
  unsigned int BE_indx_WarningInfo2nd_u32;

  /* Represents the distance from the vehicle to exit boundary of the geo-fencing,  Entry into the geographical fence is not counted. The exit boundary is defined in the function document.
     ±íÊ¾×Ô³µµ½Ê»³öµØÀíÎ§À¸±ß½çµÄ¾àÀë¡£²»¼ÆËã½øÈëµØÀíÎ§À¸±ß½ç¾àÀë¡£Ê»³ö±ß½ç¼û¹¦ÄÜÎÄµµÖÐ¶¨Òå¡£ */
  unsigned int BE_indx_WarningInfoCondiDistArr1st[32];
  unsigned int BE_indx_WarningInfoCondiDistArr2nd[32];
} B_HDMLnODDInfo;

typedef struct {
  float DA_IN_VSP_d_VehParWhlBase_sg;
  float DA_IN_VSP_K_VehParStrRatio_sg;
  float DA_IN_VSP_k_VehParUStrGrd_sg;
  float DA_IN_VSP_d_VehParVehWidth_sg;
  float DA_IN_VSP_d_CamPosOffst2Cent_sg;
} Inputs_VSP;

typedef struct {
  float DA_IN_VCP_angD_StrgWhlAng_sg;
  float DA_IN_VCP_wD_StrgWhlAngGrd_sg;
  float DA_IN_VCP_V_VehSpdAvgDrn_sg;
  float DA_IN_VCP_T_DrvrStrToq_sg;
  float DA_IN_VCP_yr_VehYawRate_sg;
  float DA_IN_VCP_a_VSELatAcc_sg;
  boolean DA_IN_VCP_is_strWhlAngValid_bl;
  boolean DA_IN_VCP_is_YawRtValid_bl;
  boolean DA_IN_VCP_is_LatAccValid_bl;
  boolean DA_IN_VCP_is_LgtAccValid_bl;
  float DA_IN_VCP_a_LgtAcc_sg;
  float DA_IN_VCP_rho_CurvTrjEst_sg;
  boolean DA_IN_VCP_is_EgoVehStatc_bl;
  float DA_IN_VCP_T_DrvrTorqEsti_sg;
  eHOS_HandsOnStates DA_IN_VCP_sts_DvrHndsOffDtcn_eHOS;
  boolean DA_IN_VCP_is_DrvrTorqEstiFail_bl;
  VCP_B_StateEst DA_IN_VCP_B_StateEst;
} Inputs_VCP;

typedef struct {
  boolean DA_IN_VDP_is_LDircnIO_bl;
  boolean DA_IN_VDP_is_RDircnIO_bl;
  boolean DA_IN_VDP_is_EngRunActv_bl;
  float DA_IN_VDP_a_VSELongtAccel_sg;
  float DA_IN_VDP_a_EstdVSELongtAccel_sg;
  eVLD_ValidSts DA_IN_VDP_sts_EgoVehSpdV_en;
  unsigned short int DA_IN_VDPEstdEgoVehSpdIPK_u16;
  boolean DA_IN_VDP_is_VehRolBck_bl;
  float DA_IN_VDP_v_EgoAvgVehSpd_sg;
} Inputs_VDP;

typedef struct {
  unsigned int DA_IN_indx_FuncConfDID_u32;
  unsigned int DA_IN_indx_SubFuncConfDID_u32;
  eLKSDS_LKSDftSw DA_IN_stat_LDWLDPDftSw_eLKSDS;
  eTJADS_TJADftSw DA_IN_stat_TJAICADftSw_eTJADS;
  eLSDS_SnstvtLvlDftSw DA_IN_stat_LACStvtLvlDftSw_eLSDS;
  eAHWDS_AudHptcWrnngDftSw DA_IN_stat_AudWrnngDftSw_eAHWDS;
  eAHWDS_AudHptcWrnngDftSw DA_IN_stat_HptcWrnngDftSw_eAHWDS;
  eAFDS_AEBFCWDftSw DA_IN_stat_AEBFCWDftSw_eAFDS;
  eAEBPDS_AEBPedDftSw DA_IN_stat_AEBPDftSw_eAEBPDS;
  eLSDS_SnstvtLvlDftSw DA_IN_stat_FCWStvtLvlDftSw_eLSDS;
  eELKDS_ELKDftSw DA_IN_stat_ELKDftSw_eELKDS;
  unsigned int DA_IN_indx_LstIgnCyclFuncSts_u32;
  unsigned char DA_IN_indx_reserve_u8;
} B_ConfgDID_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACC01ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACC01LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACC01LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACC01LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACC01LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACC01Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACC01Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACC01MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACC01LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACC01LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACC01Class_eCLS;

  /* Width of the target */
  float DA_IN_d_ACC01Width_sg;
} B_ACCObj01_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACC02ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACC02LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACC02LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACC02LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACC02LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACC02Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACC02Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACC02MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACC02LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACC02LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACC02Class_eCLS;

  /* Width of the target */
  float DA_IN_d_ACC02Width_sg;
} B_ACCObj02_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACC03ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACC03LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACC03LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACC03LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACC03LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACC03Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACC03Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACC03MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACC03LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACC03LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACC03Class_eCLS;

  /* Width of the target */
  float DA_IN_d_ACC03Width_sg;
} B_ACCObj03_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACC04ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACC04LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACC04LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACC04LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACC04LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACC04Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACC04Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACC04MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACC04LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACC04LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACC04Class_eCLS;

  /* Width of the target */
  float DA_IN_d_ACC04Width_sg;
} B_ACCObj04_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACC05ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACC05LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACC05LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACC05LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACC05LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACC05Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACC05Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACC05MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACC05LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACC05LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACC05Class_eCLS;

  /* Width of the target */
  float DA_IN_d_ACC05Width_sg;
} B_ACCObj05_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACC06ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACC06LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACC06LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACC06LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACC06LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACC06Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACC06Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACC06MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACC06LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACC06LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACC06Class_eCLS;

  /* Width of the target */
  float DA_IN_d_ACC06Width_sg;
} B_ACCObj06_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACCStn01ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACCStn01LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACCStn01LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACCStn01LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACCStn01LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACCStn01Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACCStn01Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACCStn01MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACCStn01LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACCStn01LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACCStn01Cls_eCLS;

  /* Width of the target */
  float DA_IN_d_ACCStn01Width_sg;
} B_ACCStnObj01_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACCStn02ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACCStn02LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACCStn02LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACCStn02LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACCStn02LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACCStn02Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACCStn02Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACCStn02MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACCStn02LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACCStn02LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACCStn02Cls_eCLS;

  /* Width of the target */
  float DA_IN_d_ACCStn02Width_sg;
} B_ACCStnObj02_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACCStn03ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACCStn03LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACCStn03LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACCStn03LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACCStn03LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACCStn03Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACCStn03Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACCStn03MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACCStn03LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACCStn03LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACCStn03Cls_eCLS;

  /* Width of the target */
  float DA_IN_d_ACCStn03Width_sg;
} B_ACCStnObj03_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACCStn04ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACCStn04LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACCStn04LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACCStn04LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACCStn04LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACCStn04Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACCStn04Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACCStn04MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACCStn04LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACCStn04LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACCStn04Cls_eCLS;

  /* Width of the target */
  float DA_IN_d_ACCStn04Width_sg;
} B_ACCStnObj04_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACCStn05ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACCStn05LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACCStn05LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACCStn05LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACCStn05LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACCStn05Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACCStn05Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACCStn05MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACCStn05LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACCStn05LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACCStn05Cls_eCLS;

  /* Width of the target */
  float DA_IN_d_ACCStn05Width_sg;
} B_ACCStnObj05_st;

typedef struct {
  /* Unique track ID of the target */
  unsigned char DA_IN_indx_ACCStn06ID_u8;

  /* Longitudinal velocity of the target relative to the ground */
  float DA_IN_v_ACCStn06LongtSpd_sg;

  /* Lateral velocity of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_v_ACCStn06LatSpd_sg;

  /* Longitudinal position of the target relative to front-centerline of host vehicle. */
  float DA_IN_d_ACCStn06LongtDist_sg;

  /* Lateral position of the target relative to front-centerline of host vehicle. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_d_ACCStn06LatDist_sg;

  /* Fused sensor sources: 0 = single tracklet 1 = multiple tracklets 2 = vision only 3 = tracklets and vision */
  eCSNR_ACCObjSnsr DA_IN_stat_ACCStn06Snsr_eCSNR;

  /* Track status as ermined by ETSEL: 0 = Invalid 1 = Merged 2 = New 3 = NewCoasted 4 = NewUpdated 5 = Updated 6 = Coasted 7 = Reserved */
  eCTRK_ACCObjTrackSts DA_IN_stat_ACCStn06Trk_eCTRK;

  /* Target¡¯s current movement. 0x0: Stationary 0x1:TrackStopppedFromMoving 0x2: TrackMoving 0x3: TrackOncoming 0x4:TrackStoppedFromOncoming 0x5-0xA: Reserved 0xB: NoTrack 0xC-0xD: Reserved 0xE: Error 0xF: NotAvailable */
  eCMV_ACCObjMvSts DA_IN_stat_ACCStn06MvSts_eCMV;

  /* Longitudinal acceleration of the target relative to the ground */
  float DA_IN_a_ACCStn06LongtAcc_sg;

  /* Lateral acceleration of the target relative to the ground. Lateral measures shall be reported based on ISO definition coordinate system */
  float DA_IN_a_ACCStn06LatAcc_sg;

  /* Class of ected object: Unermined (0x0) Vehicle (0x1) Motorcycle (0x2) Truck (0x3) Pedestrian (0x4) Not Supported (Pole) (0x5) Not Supported (Tree) (0x6) Animal (0x7) Gen_OnRoad_Obj (0x8) Bicycle (0x9) Unidentified_Vehicle (0xA) */
  eCLS_ACCObjClass DA_IN_stat_ACCStn06Cls_eCLS;

  /* Width of the target */
  float DA_IN_d_ACCStn06Width_sg;
} B_ACCStnObj06_st;

typedef struct {
  /* Distance Camera to Inner Edge of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_HostLLnePosA0_sg;

  /* Heading Angle of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_HostLLneHdAngA1_sg;

  /* Second order coefficient of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_HostLLneCrvteA2_sg;

  /* Third order coefficient of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_HostLLneCrvteRtA3_sg;

  /* Lane Change to the Left. */
  boolean DA_IN_is_HostLLneChgToLeft_bl;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_HostLLneRnge_sg;

  /* Lane Data Quality Left Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_HostLLneCnfdn_eLCF;

  /* Lane Marker Color, Left Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_HostLLneColor_eLCR;

  /* Lane Marker Type, Left Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_HostLLneType_eLTP;
} B_HostL_st;

typedef struct {
  /* Distance Camera to Inner Edge of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_HostRLnePosA0_sg;

  /* Heading Angle of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_HostRLneHdAngA1_sg;

  /* Second order coefficient of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_HostRLneCrvteA2_sg;

  /* Third order coefficient of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_HostRLneCrvteRtA3_sg;

  /* Lane Change to the Right. */
  boolean DA_IN_is_HostRLneChgToRght_bl;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_HostRLneRnge_sg;

  /* Lane Data Quality Right Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_HostRLneCnfdn_eLCF;

  /* Lane Marker Color, Right Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_HostRLneColor_eLCR;

  /* Lane Marker Type, Right Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_HostRLneType_eLTP;
} B_HostR_st;

typedef struct {
  /* Distance Camera to Inner Edge of nextLeftLeft Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_NextLLLnePosA0_sg;

  /* Heading Angle of nextLeftLeft Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_NextLLLneHdAngA1_sg;

  /* Second order coefficient of nextLeftLeft Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_NextLLLneCrvteA2_sg;

  /* Third order coefficient of nextLeftLeft Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_NextLLLneCrvteRtA3_sg;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_NextLLLneRnge_sg;

  /* Lane Data Quality nextLeftLeft Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_NextLLLneCnfdn_eLCF;

  /* Lane Marker Color, nextLeftLeft Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_NextLLLneColor_eLCR;

  /* Lane Marker Type, nextLeftLeft Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_NextLLLneType_eLTP;
} B_NextLL_st;

typedef struct {
  /* Distance Camera to Inner Edge of nextRightRight Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_NextRRLnePosA0_sg;

  /* Heading Angle of nextRightRight Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_NextRRLneHdAngA1_sg;

  /* Second order coefficient of nextRightRight Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_NextRRLneCrvteA2_sg;

  /* Third order coefficient of nextRightRight Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_NextRRLneCrvteRtA3_sg;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_NextRRLneRnge_sg;

  /* Lane Data Quality nextRightRight Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_NextRRLneCnfdn_eLCF;

  /* Lane Marker Color, nextRightRight Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_NextRRLneColor_eLCR;

  /* Lane Marker Type, nextRightRight Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_NextRRLneType_eLTP;
} B_NextRR_st;

typedef struct {
  /*   Unique track ID of the  ected Object */
  unsigned char DA_IN_indx_DngrObjID_u8;

  /* Longitudinal velocity of the ected Object relative to the ground */
  float DA_IN_v_DngrObjLongtSpd_sg;

  /* Lateral velocity of the ected Object relative to the ground */
  float DA_IN_v_DngrObjLatSpd_sg;

  /* Longitudinal position of the ected Object relative to front-centerline of host vehicle */
  float DA_IN_d_DngrObjLongtDist_sg;

  /* Lateral position of the ected Object relative to front-centerline of host vehicle */
  float DA_IN_d_DngrObjLatDist_sg;

  /* Fused sensor sources */
  eDSNR_DngrObjSnsr DA_IN_stat_DngrObjSnsr_eDSNR;

  /* Object Track status */
  eDTRK_DngrObjTrackSts DA_IN_stat_DngrObjTrk_eDTRK;

  /*  ected Object Target¡¯s current movement. */
  eDMV_DngrObjMvSts DA_IN_stat_DngrObjMvSts_eDMV;

  /* Longitudinal acceleration of the ected Object relative to the ground */
  float DA_IN_a_DngrObjLongtAcc_sg;

  /* Lateral acceleration of the ected Object relative to the ground */
  float DA_IN_a_DngrObjLatAcc_sg;

  /* Autonomous Emergency Brake System ected Object class */
  eDCLS_DngrObjClass DA_IN_stat_DngrObjClass_eDCLS;

  /* Width of the ected Object */
  float DA_IN_d_DngrObjWidth_sg;
} B_DngrObj_st;

typedef struct {
  /*   Unique track ID of the  Stationary Object */
  unsigned char DA_IN_indx_DngrStnObjID_u8;

  /* Longitudinal velocity of the Statonary  Object relative to the ground */
  float DA_IN_v_DngrStnObjLongtSpd_sg;

  /* Lateral velocity of the Statonary Object relative to the ground */
  float DA_IN_v_DngrStnObjLatSpd_sg;

  /* Longitudinal position of the Statonary Object relative to front-centerline of host vehicle */
  float DA_IN_d_DngrStnObjLongtDist_sg;

  /* Lateral position of the Statonary Object relative to front-centerline of host vehicle */
  float DA_IN_d_DngrStnObjLatDist_sg;

  /* Fused sensor sources */
  eDSNR_DngrObjSnsr DA_IN_stat_DngrStnObjSnsr_eDSNR;

  /*  Statonary Object Track status */
  eDTRK_DngrObjTrackSts DA_IN_stat_DngrStnObjTrk_eDTRK;

  /*   Statonary Object Target¡¯s current movement. */
  eDMV_DngrObjMvSts DA_IN_stat_DngrStnObjMvSts_eDMV;

  /* Longitudinal acceleration of the Statonary  Object relative to the ground */
  float DA_IN_a_DngrStnObjLongtAcc_sg;

  /* Lateral acceleration of the Statonary Object relative to the ground */
  float DA_IN_a_DngrStnObjLatAcc_sg;

  /* Autonomous Emergency Brake System Stationary Object class */
  eDCLS_DngrObjClass DA_IN_stat_DngrStnObjClass_eDCLS;

  /* Width of the  Statonary Object */
  float DA_IN_d_DngrStnObjWidth_sg;
} B_DngrStnObj_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed01LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed01LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed01LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed01LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed01LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed01LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed01ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed01Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed01Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed01Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed01Src_ePSNR;
} B_DngrPed01_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed02LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed02LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed02LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed02LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed02LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed02LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed02ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed02Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed02Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed02Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed02Src_ePSNR;
} B_DngrPed02_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed03LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed03LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed03LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed03LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed03LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed03LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed03ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed03Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed03Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed03Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed03Src_ePSNR;
} B_DngrPed03_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed04LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed04LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed04LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed04LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed04LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed04LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed04ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed04Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed04Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed04Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed04Src_ePSNR;
} B_DngrPed04_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed05LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed05LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed05LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed05LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed05LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed05LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed05ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed05Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed05Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed05Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed05Src_ePSNR;
} B_DngrPed05_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed06LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed06LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed06LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed06LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed06LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed06LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed06ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed06Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed06Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed06Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed06Src_ePSNR;
} B_DngrPed06_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed07LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed07LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed07LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed07LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed07LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed07LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed07ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed07Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed07Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed07Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed07Src_ePSNR;
} B_DngrPed07_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed08LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed08LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed08LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed08LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed08LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed08LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed08ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed08Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed08Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed08Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed08Src_ePSNR;
} B_DngrPed08_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed09LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed09LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed09LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed09LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed09LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed09LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed09ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed09Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed09Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed09Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed09Src_ePSNR;
} B_DngrPed09_st;

typedef struct {
  /* longitudinal position of the object from the host VCS origin */
  float DA_IN_d_DngrPed10LongtDist_sg;

  /* lateral position of the object from the host VCS origin */
  float DA_IN_d_DngrPed10LatDist_sg;

  /* longitudinal velocity of the ected vehicle */
  float DA_IN_v_DngrPed10LongtSpd_sg;

  /* longitudinal acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed10LongtAcc_sg;

  /* lateral velocity of the ected vehicle */
  float DA_IN_v_DngrPed10LatSpd_sg;

  /* lateral acceleration of the ected vehicle. */
  float DA_IN_a_DngrPed10LatAcc_sg;

  /* Unique track ID of the ected object */
  unsigned char DA_IN_indx_DngrPed10ID_u8;

  /* Track age in looks */
  unsigned short int DA_IN_indx_DngrPed10Age_u16;

  /* Indicates the status of the ected object. 0 = Invalid, 1 = Merged(means this track is from merge), 2 = New, 3 = New Coasted, 4 = New Updated, 5 = Updated(Same as mature), 6 = Coasted, 7 = Reserved */
  ePTRK_DngrPedSts DA_IN_stat_DngrPed10Sts_ePTRK;

  /* Indicates the type of Object fused 0=Object Unermined, 1=Car, 2=MotorCycle, 3=Truck , 4=Pedestrain, 5-8 reserved, 9=Bicycle, 10=Vehicle Unidentified */
  ePCLS_DngrPedClass DA_IN_stat_DngrPed10Class_ePCLS;

  /* Indicates Fused sensor sources 0 = single tracklet, 1 = multiple tracklets, 2 = vision only, 3 = tracklets and vision */
  ePSNR_DngrPedFusSrc DA_IN_stat_DngrPed10Src_ePSNR;
} B_DngrPed10_st;

typedef struct {
  /* ISO coordinate system:Distance Camera to Center Lane  is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a0 := offset */
  float DA_IN_d_CntrLnPosOffstA0_sg;

  /* ISO coordinate system:Distance Camera to Center Lane  is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a1 := tan(heading) */
  float DA_IN_angR_CntrLnHdAngA1_sg;

  /* ISO coordinate system:Distance Camera to Center Lane  is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a2 := curvature */
  float DA_IN_cv_CntrLnCurvA2_sg;

  /* ISO coordinate system:Distance Camera to Center Lane  is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a3 := curvature_rate */
  float DA_IN_cvr_CntrLndCurvA3_sg;

  /* Lane Data Quality Center Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_CntrLnMrkCnfdn_eLCF;
} B_CenterLine_st;

typedef struct {
  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a0 := offset */
  float DA_IN_d_LftRoadEdgeA0_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a1 := tan(heading) */
  float DA_IN_angR_LftRoadEdgeA1_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a2 := curvature */
  float DA_IN_cv_LftRoadEdgeA2_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a3 := curvature_rate */
  float DA_IN_cvr_LftRoadEdgeA3_sg;

  /* viewRange (Distance of how far the polynomial is valid) of Left Road edge */
  float DA_IN_d_LftRoadEdgeRangEnd_sg;

  /* Lane Data Quality Left Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_LftRoadEdgeCnfdn_eLCF;

  /* Lane Marker Color, Right Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_LftLneMrkColor_eLCR;
} B_LeftRoadEdge_st;

typedef struct {
  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a0 := offset */
  float DA_IN_d_RghtRoadEdgeA0_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a1 := tan(heading) */
  float DA_IN_angR_RghtRoadEdgeA1_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a2 := curvature */
  float DA_IN_cv_RghtRoadEdgeA2_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Road edge is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a3 := curvature_rate */
  float DA_IN_cvr_RghtRoadEdgeA3_sg;

  /* viewRange (Distance of how far the polynomial is valid) of Left Road edge */
  float DA_IN_d_RghtRoadEdgeRangEnd_sg;

  /* Lane Data Quality Left Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_RghtRoadEdgeCnfdn_eLCF;

  /* Lane Marker Color, Right Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_RghtLneMrkColor_eLCR;
} B_RightRoadEdge_st;

typedef struct {
  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a0 := offset */
  float DA_IN_d_LftBarrierA0_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a1 := tan(heading) */
  float DA_IN_angR_LftBarrierA1_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a2 := curvature */
  float DA_IN_cv_LftBarrierA2_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a3 := curvature_rate */
  float DA_IN_cvr_LftBarrierA3_sg;

  /* viewRange (Distance of how far the polynomial is valid) of Left Barrier. */
  float DA_IN_d_LftBarrierRangEnd_sg;
  unsigned char DA_IN_indx_LftBarrierStatus_u8;

  /* Lane Data Quality Left Individual Lane Marking:
     0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_LftBarrierCnfdn_eLCF;
} B_LeftBarrier_st;

typedef struct {
  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a0 := offset */
  float DA_IN_d_RghtBarrierA0_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a1 := tan(heading) */
  float DA_IN_angR_RghtBarrierA1_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a2 := curvature */
  float DA_IN_cv_RghtBarrierA2_sg;

  /* ISO coordinate system:Distance Camera to Inner Edge of Left Barrier is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a3 := curvature_rate */
  float DA_IN_cvr_RghtBarrierA3_sg;

  /* viewRange (Distance of how far the polynomial is valid) of Left Barrier. */
  float DA_IN_d_RghtBarrierRangEnd_sg;
  unsigned char DA_IN_indx_RghtBarrierStatus_u8;

  /* Lane Data Quality Left Individual Lane Marking:
     0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_RghtBarrierCnfdn_eLCF;
} B_RightBarrier_st;

typedef struct {
  /* ISO coordinate system:SPP Poly Coefficient is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a0 := offset */
  float DA_IN_d_SppPolyCoefA0_sg;

  /* ISO coordinate system:SPP Poly Coefficient is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a1 := tan(heading) */
  float DA_IN_angR_SppPolyCoefA1_sg;

  /* ISO coordinate system:SPP Poly Coefficient is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a2 := curvature */
  float DA_IN_cv_SppPolyCoefA2_sg;

  /* ISO coordinate system:SPP Poly Coefficient is modeled y = a/6*x^3+b/2*x^2+c^x+d,
     where, a = a3    curvature rate;  b = a2    curvature ; c =  a1   headangle;  d =  a0   posnoffset
     a3 := curvature_rate */
  float DA_IN_cvr_SppPolyCoefA3_sg;

  /* Lane Data Quality SPP 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_SppPolyCoefCnfdn_eLCF;
  unsigned char DA_IN_indx_SppPolyCoefType_u8;
} B_SppPolyCoeff_st;

typedef struct {
  /* Distance Camera to Inner Edge of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_HostRHSPPosA0_sg;

  /* Heading Angle of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_HostRHSPHdAngA1_sg;

  /* Second order coefficient of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_HostRHSPCrvteA2_sg;

  /* Third order coefficient of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_HostRHSPCrvteRtA3_sg;

  /* Lane Change to the Right. */
  boolean DA_IN_is_HostRHSPChgToRght_bl;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_HostRHSPRnge_sg;

  /* Lane Data Quality Right Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_HostRHSPCnfdn_eLCF;

  /* Lane Marker Color, Right Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_HostRHSPColor_eLCR;

  /* Lane Marker Type, Right Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_HostRHSPType_eLTP;
} B_HostRHSP_st;

typedef struct {
  /* Distance Camera to Inner Edge of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_HostLHSPPosA0_sg;

  /* Heading Angle of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_HostLHSPHdAngA1_sg;

  /* Second order coefficient of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_HostLHSPCrvteA2_sg;

  /* Third order coefficient of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_HostLHSPCrvteRtA3_sg;

  /* Lane Change to the Left. */
  boolean DA_IN_is_HostLHSPChgToLeft_bl;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_HostLHSPRnge_sg;

  /* Lane Data Quality Left Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_HostLHSPCnfdn_eLCF;

  /* Lane Marker Color, Left Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_HostLHSPColor_eLCR;

  /* Lane Marker Type, Left Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_HostLHSPType_eLTP;
} B_HostLHSP_st;

typedef struct {
  /* Distance Camera to Inner Edge of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_HostRIndPosA0_sg;

  /* Heading Angle of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_HostRIndHdAngA1_sg;

  /* Second order coefficient of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_HostRIndCrvteA2_sg;

  /* Third order coefficient of Right Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_HostRIndCrvteRtA3_sg;

  /* Lane Change to the Right. */
  boolean DA_IN_is_HostRIndChgToRght_bl;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_HostRIndRnge_sg;

  /* Lane Data Quality Right Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_HostRIndCnfdn_eLCF;

  /* Lane Marker Color, Right Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_HostRIndColor_eLCR;

  /* Lane Marker Type, Right Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_HostRIndType_eLTP;
} B_HostRInd_st;

typedef struct {
  /* Distance Camera to Inner Edge of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a0 := offset */
  float DA_IN_d_HostLIndPosA0_sg;

  /* Heading Angle of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a1 := tan(heading) */
  float DA_IN_angR_HostLIndHdAngA1_sg;

  /* Second order coefficient of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a2 := curvature */
  float DA_IN_cv_HostLIndCrvteA2_sg;

  /* Third order coefficient of Left Lane Marking Road edge is modeled y = a0 + a1*x + a2*x^2 + a3*x^3 a3 := curvature_rate */
  float DA_IN_cvr_HostLIndCrvteRtA3_sg;

  /* Lane Change to the Left. */
  boolean DA_IN_is_HostLIndChgToLeft_bl;

  /* viewRange (Distance of how far the polynomial is valid) of Right Lane Marking */
  float DA_IN_d_HostLIndRnge_sg;

  /* Lane Data Quality Left Individual Lane Marking 0: Not Reliable 1: Reliable for Warning 2: Reliable for Intervention */
  eLCF_LaneCnfdn DA_IN_stat_HostLIndCnfdn_eLCF;

  /* Lane Marker Color, Left Lane Marking 0 --> Unknown 1 --> Yellow 2 --> White 3 --> Blue */
  eLCR_LaneColor DA_IN_stat_HostLIndColor_eLCR;

  /* Lane Marker Type, Left Lane Marking 0 --> None 1 --> Solid 2 --> Dashed 3 --> Reserved 4 --> Botts Dots 5 --> Reserved 6 --> Invalid (No classification) 7 --> Undecided (solid, dashed or botts dots) 8 --> Double lane mark (including dashed on one side) */
  eLTP_LaneType DA_IN_stat_HostLIndType_eLTP;
} B_HostLInd_st;

typedef struct {
  eNDAWD_AdoWrnDsp BE_stat_DMSAdoWrnngDspCmd_eNDAWD;
  eNDAR_AudReq BE_stat_DMSAudReq_eNDAR;
  eNDDC_DspCmd BE_stat_DMSDspCmd_eNDDC;
  eNDHWD_HapWrnDsp BE_stat_DMSHapticWrnngDspCmd_eNDHWD;
  eNDS_SysSts BE_stat_DMSSts_eNDS;
  eNDVLR_VbnLvlReq BE_stat_DMSVbnLvlReq_eNDVLR;
  eNDWR_WrnReq BE_stat_DMSWrnngReq_eNDWR;
  eNDAWR_AdoWrnReq BE_stat_DMSAdoWrnngReq_eNDAWR;
  eNDHWR_HapWrnReq BE_stat_DMSHapticWrnngReq_eNDHWR;
  eNDSR_SwReq BE_stat_DMSSwReq_eNDSR;
  eNDAB_AbnormBehvor BE_stat_DrvrAbnormBehvor_eNDAB;
  eNDDS_DstcnSts BE_stat_DrvrDstcnSts_eNDDS;
  eNDFL_FtgLvl BE_stat_DrvrFtgLvl_eNDFL;
  eNDGR_GazeRgn BE_stat_DrvrGazeRgn_eNDGR;
  eNDP_DrvrPrst BE_stat_DrvrPrst_eNDP;
  eNIOR_IonRd BE_stat_EyeOnRoad_eNIOR;
  eNSFD_SpfngDet BE_stat_SpfngDet_eNSFD;
} B_DMSInfo;

typedef struct {
  /* Control point 1 */
  B_CtrlSpltPntSet BE_CtrlSpltPntSet01_bus;

  /* Control point 2 */
  B_CtrlSpltPntSet BE_CtrlSpltPntSet02_bus;

  /* Remind to change back to main road lanes point 1 */
  B_CtrlSpltPntSet BE_RmdSpltPntSet01_bus;
  B_VehPos BE_VehPos_Bus;
  B_HDMBaseInfo BE_HDMBaseInfo_Bus;
  B_HDMLaneInfo BE_CurLnInfo_Bus;
  B_HDMLaneInfo BE_LftLnInfo_Bus;
  B_HDMLaneInfo BE_RghtLnInfo_Bus;
  B_HDMLaneInfo BE_LftLftLnInfo_Bus;
  B_HDMLaneInfo BE_RghtRghtLnInfo_Bus;
  B_HDMLnODDInfo BE_CurLnODDInfo_Bus;
  B_HDMLnODDInfo BE_LftLnODDInfo_Bus;
  B_HDMLnODDInfo BE_RghtLnODDInfo_Bus;
  eFLT_SysFltSts BE_stat_EHRFltSts_eFLT;
  eNES_EHRStat BE_stat_EHRSysSts_eNES;
  eNVS_NavSts BE_stat_NavSts_eNVS;

  /* Target ramp type at first control point */
  eTRT_TrgtRmpTyp BE_stat_TrgtRampTypCPnt1_eTRT;
} B_EHRInfo;

typedef struct {
  /* Are left ALC lane change conditions satisfied */
  boolean BE_is_ALCLftLnChngCondOk_bl;

  /* Are right ALC lane change conditions satisfied */
  boolean BE_is_ALCRghtLnChngCondOk_bl;
} B_EnvInfo;

typedef struct {
  /* 0x0 HODDetnSts_0_Unknown

     0x1 HODDetnSts_1_No_valid_contact_detected

     0x2 HODDetnSts_2_Valid_contact_detected */
  eNHDS_DetnSts BE_stat_HODDetnSts_eNHDS;

  /* HOD diagnostic status */
  eNHDG_DiagSts BE_stat_HODdiagSts_eNHDG;

  /* 0x0=Available;

     0x1=Initial Status;

     0x2=Fault;

     0x3=Shutdown;

     0x4=Not Calibration; */
  eNHSS_SysSts BE_stat_HODSysStat_eNHSS;

  /* HOD touch zone 1 status */
  eNHTZ_TchSts BE_stat_HODTchZone1Sts_eNHTZ;

  /* HOD touch zone 1 value */
  unsigned char BE_Num_HODTchZone1Sts_u8;

  /* HOD touch zone 2 status */
  eNHTZ_TchSts BE_stat_HODTchZone2Sts_eNHTZ;

  /* HOD touch zone 2 value */
  unsigned char BE_Num_HODTchZone2Sts_u8;

  /* HOD touch zone 3 status */
  eNHTZ_TchSts BE_stat_HODTchZone3Sts_eNHTZ;

  /* HOD touch zone 3 value */
  unsigned char BE_Num_HODTchZone3Sts_u8;
} B_HODInfo;



typedef struct {
  unsigned char Adptr_Out_FLC_ADAS_SndCtrl_LKA_OnOff_fbk;
  unsigned char Adptr_Out_FLC_Fr01_Checksum;
  unsigned char Adptr_Out_FLC_Fr01_MsgCounter;
  unsigned char Adptr_Out_FLC_LDWLKA_LHWarning;
  unsigned char Adptr_Out_FLC_LDWLKA_Mode;
  unsigned char Adptr_Out_FLC_LDWLKA_RHWarning;
  unsigned char Adptr_Out_FLC_LDWLKA_Recog_SysState;
  unsigned char Adptr_Out_FLC_LDWLKA_Symbol;
  unsigned char Adptr_Out_FLC_LDWLKA_WarnSetSta;
  unsigned char Adptr_Out_FLC_LKA_HandsOffSndWaring;
  unsigned char Adptr_Out_FLC_LKA_HandsOffWarning;
  float Adptr_Out_FLC_LKA_StrToqReq;
  unsigned char Adptr_Out_FLC_LKA_TOIAct;
  unsigned char Adptr_Out_FLC_LKA_TOIFault;
  unsigned char Adptr_Out_FLC_Status;
  unsigned char Adptr_Out_FLC_TJA_SysState;
  unsigned char Adptr_Out_FLC_TJA_SysWarning;
} ApdtrOut_Lat_0xEA;

typedef struct {
  float Apdtr_Out_FLR_ACC_ComfortBandLower;
  float Apdtr_Out_FLR_ACC_ComfortBandUpper;
  float Apdtr_Out_FLR_ACC_JerkLowerLimit;
  float Apdtr_Out_FLR_ACC_JerkUpperLimit;
  float Apdtr_Out_FLR_ACC_RequiredAccel;
  unsigned char Apdtr_Out_FLR_ACC_StopReq;
  unsigned char Apdtr_Out_FLR_SndCtrl_ACC_OnOff_fbk;
  unsigned char Apdtr_Out_FLR_Fr01_Checksum;
  unsigned char Apdtr_Out_FLR_ACC_msgCntr;
  unsigned char Apdtr_Out_FLR_SndCtrlAccActivtDriver_fdk;
} ApdtrOut_Lgt_0x216;

typedef struct {
  unsigned char Apdtr_Out_FLR_ACC_Mode;
  unsigned char Apdtr_Out_FLR_ACC_SetDistance;
  float Apdtr_Out_FLR_ACC_SetSpeed;
  unsigned char Apdtr_Out_FLR_ACC_SysFailure;
  unsigned char Apdtr_Out_FLR_ACC_SysInfo;
  unsigned char Apdtr_Out_FLR_ACC_SystemState;
  unsigned char Apdtr_Out_FLR_ACC_TargetValidity;
  unsigned char Apdtr_Out_FLR_Fr02_Checksum;
  unsigned char Apdtr_Out_FLR_ACC_msgCntr;
  unsigned char Apdtr_Out_FLR_IHUSndCtrlACCActivtReqt;
  float Apdtr_Out_SCC_ObjRelSpd;
  unsigned char Apdtr_Out_SCC_ObjStatus;
} ApdtrOut_Lgt_0x219;

typedef struct {
  unsigned char Apdtr_Out_FLR_AEB_DBSLevel;
  float Apdtr_Out_FLR_AEB_DecCmd;
  unsigned char Apdtr_Out_FLR_AEB_Failinfo;
  unsigned char Apdtr_Out_FLR_AEB_FullAct;
  unsigned char Apdtr_Out_FLR_AEB_OnOffSta;
  unsigned char Apdtr_Out_FLR_AEB_PartialAct;
  unsigned char Apdtr_Out_FLR_AEB_Prefill;
  unsigned char Apdtr_Out_FLR_AEB_StopReq;
  unsigned char Apdtr_Out_FLR_AEB_Warn;
  unsigned char Apdtr_Out_FLR_AEB_WarnSetSta;
  unsigned char Apdtr_Out_FLR_Fr03_Checksum;
  unsigned char Apdtr_Out_FLR_Fr03_MsgCounter;
  float Apdtr_Out_FLR_SCC_ObjDist;
  float Apdtr_Out_FLR_SCC_ObjLatPos;
} ApdtrOut_Lgt_0x20A;

typedef struct {
  unsigned char APA_FPAS_SensorFaultStsFLC;
  unsigned char APA_FPAS_SensorFaultStsFLM;
  unsigned char APA_FPAS_SensorFaultStsFRC;
  unsigned char APA_FPAS_SensorFaultStsFRM;
  unsigned char APA_FPAS_SensorFaultStsSFL;
  unsigned char APA_FPAS_SensorFaultStsSFR;
  unsigned char APA_FPAS_WorkSts;
  unsigned char APA_PAS_ObjectSts_FLC;
  unsigned char APA_PAS_ObjectSts_FLM;
  unsigned char APA_PAS_ObjectSts_FRC;
  unsigned char APA_PAS_ObjectSts_FRM;  
  unsigned char APA_PAS_ObjectSts_RLC;
  unsigned char APA_PAS_ObjectSts_RLM;
  unsigned char APA_PAS_ObjectSts_RRC; 
  unsigned char APA_PAS_ObjectSts_RRM;
  unsigned char APA_PAS_ObjectSts_SFL;
  unsigned char APA_PAS_ObjectSts_SFR;
  unsigned char APA_PAS_ObjectSts_SRL;
  unsigned char APA_PAS_ObjectSts_SRR;
  unsigned char APA_RPAS_SensorFaultStsRLC;
  unsigned char APA_RPAS_SensorFaultStsRLM;
  unsigned char APA_RPAS_SensorFaultStsRRC;
  unsigned char APA_RPAS_SensorFaultStsRRM;
  unsigned char APA_RPAS_SensorFaultStsSRL;
  unsigned char APA_RPAS_SensorFaultStsSRR;
  unsigned char APA_RPAS_WorkSts;
} APA_Fr01_35D;

typedef struct {
  unsigned char APA_EPSAngleReq;
  unsigned char APA_EPSAngleReqValidity;
  float APA_EPSAngleValueReq;
  unsigned char APA_Fr02_Checksum;
  unsigned char APA_Fr02_MsgCounter;
  unsigned char APA_InfoDisplayReq;
  unsigned char APA_ParkBarPercent;
  unsigned char APA_Sound_Location;
  unsigned char APA_SysSoundIndication;
  unsigned char APA_TurnLightReq;
  unsigned char APA_WorkSts_CH;  
  unsigned char PAS_SoundIndication;
} APA_Fr02_2BA;

typedef struct {
  unsigned char APA_Fr03_Checksum;
  unsigned char APA_Fr03_MsgCounter;
  unsigned char APA_GearPosReq;
  unsigned char APA_GearPosReqValidity;
  unsigned char APA_TorqReq;
  unsigned char APA_TorqReqValidity;
  float APA_TorqReqValue;
} APA_Fr03_27B;

typedef struct {
  unsigned char APA_ApaBrkMod;
  unsigned char APA_ApaEpbReq;
  float APA_ApaMaxSpd;
  unsigned char APA_ApaMod;
  unsigned char APA_ApaStopReq;
  float APA_ApaTarDecel;
  unsigned char APA_Fr04_Checksum;
  unsigned char APA_Fr04_MsgCounter;
  unsigned char BSD_SysSts;
  unsigned char BSD_warningReqLeft;
  unsigned char BSD_warningReqRight;
  unsigned char BsdSetFd;
  unsigned char RCW_warningReq;
} APA_Fr04_253;

typedef struct {
  APA_Fr01_35D APA_Fr01_0x35D;
  APA_Fr02_2BA APA_Fr02_0x2BA;
  APA_Fr03_27B APA_Fr03_0x27B;
  APA_Fr04_253 APA_Fr04_0x253;
} AdptrOut_Parking_Outputs;

typedef struct {
  ApdtrOut_Lat_0xEA ApdtrOut_Lat_EA;
  ApdtrOut_Lgt_0x216 ApdtrOut_Lgt_216;
  ApdtrOut_Lgt_0x219 ApdtrOut_Lgt_219;
  ApdtrOut_Lgt_0x20A ApdtrOut_Lgt_20A;
} AdptrOut_Cruising_Outputs;

typedef struct {
  float A0;
  float A1;
  float A2;
  float A3;
  float A4;
  float A5;
} HafLonTrajParam;

//add bus of PLN_Outputs 
typedef struct
{
    boolean             PLN_OUT_ACC_is_CLDPLaneErr_bl;
    float               PLN_OUT_ACC_r_CLDPLaneRadius_sg;
    float               PLN_OUT_cv_CLDPDynTrajParA2_sg;
    float               PLN_OUT_cvr_CLDPDynTrajParA3_sg;
    boolean             PLN_OUT_ACC_is_CLDPEmgrLneChgRAW_bl;
    boolean             PLN_OUT_ACC_is_CLDPEmgrLneChg_bl;
    boolean             PLN_OUT_is_CLDPLftLneCrosBgn_bl;
    boolean             PLN_OUT_is_CLDPRgtLneCrosBgn_bl;
    boolean             PLN_OUT_is_CLDPLftLneCrosEnd_bl;
    boolean             PLN_OUT_is_CLDPRgtLneCrosEnd_bl;
    boolean             PLN_OUT_is_CODPFoloTgtExist_bl;
    float               PLN_OUT_d_CODPFMRdrLatDist_sg;
    float               PLN_OUT_v_CODPACCLongtRltvSpd_sg;
    float               PLN_OUT_v_CODPACCHdVehSpd_sg;
    float               PLN_OUT_d_CODPACCFMRdrLongtDist_sg;
    unsigned char       PLN_OUT_indx_CODPACCTgtID_u8;
    float               PLN_OUT_v_ACCHdVehLatSpd_sg;
    float               PLN_OUT_a_ACCHdVehLgtAcc_sg;
    float               PLN_OUT_a_ACCHdVehLatAcc_sg;
    float               PLN_OUT_d_ACCHdVehWidth_sg;
    eCSNR_ACCObjSnsr    PLN_OUT_indx_ACCObjSnsr_en;
    eCTRK_ACCObjTrackSts PLN_OUT_indx_ACCObjTrackSts_en;
    eCMV_ACCObjMvSts    PLN_OUT_indx_ACCObjMvSts_en;
    eCLS_ACCObjClass    PLN_OUT_indx_ACCObjClass_en;
    B_ACCObjVldLv2      PLN_OUT_CODP_bus_ACCObjVldLv2;
    B_ACCObj03_st       PLN_OUT_DA_IN_bus_ACCObj03;
    B_ACCObj04_st       PLN_OUT_DA_IN_bus_ACCObj04;
    B_ACCStnObj03_st    PLN_OUT_DA_IN_bus_ACCStnObj03;
    B_ACCStnObj04_st    PLN_OUT_DA_IN_bus_ACCStnObj04;
    B_ACCObjVldRaw      PLN_OUT_CODP_bus_ACCObjVldRaw;
    boolean             PLN_OUT_DFIn_is_MovObjPrtctWrn_bl;
    boolean             PLN_OUT_DFIn_is_StnObjPrtctWrn_bl;
    boolean             PLN_OUT_DFIn_is_CODPPedWrn_bl;
    float               PLN_OUT_DFIn_t_ACCMovTTC_sg;
    float               PLN_OUT_DFIn_t_ACCStnTTC_sg;
    boolean             PLN_OUT_ACC_is_VldMovObjTurnDscrd_bl;
    boolean             PLN_OUT_VldMovObjDscrdExit_bl;
    boolean             PLN_OUT_ACC_is_VldStnObjTurnDscrd_bl;
    boolean             PLN_OUT_ACC_is_VldStnObjDscrdExit_bl;
    boolean             PLN_OUT_DFIn_is_CODPObjNSL_bl;
    boolean             PLN_OUT_DFIn_is_TgtLgtDisNdF_bl;
    boolean             PLN_OUT_DFIn_is_CODPLgtFtEX_bl;
    boolean             PLN_OUT_ACC_is_ACC03CutinSure_bl;
    boolean             PLN_OUT_ACC_is_ACC04CutinSure_bl;
    float               PLN_OUT_K_DesTrajC0_sg;
    float               PLN_OUT_K_DesTrajC1_sg;
    float               PLN_OUT_K_DesTrajC2_sg;
    float               PLN_OUT_K_DesTrajC3_sg;
    float               PLN_OUT_K_DesTrajC4_sg;
    float               PLN_OUT_K_DesTrajC5_sg;
    float               PLN_OUT_d_DesTrajSend_sg;
    float               PLN_OUT_d_DesTrajSego_sg;
    eRPL_RePlanLevel    PLN_OUT_sts_ReplnLvl_eRPL;
    float               PLN_OUT_m_STrajError_sg;
    float               PLN_OUT_v_SpdTrajCmd_sg;
    float               PLN_OUT_a_AccTrajCmd_sg;
    unsigned char       PLN_OUT_is_LongTraj_Replan_Level;
    HafLonTrajParam     PLN_OUT_bus_HafLonTrajParam;   
} PLN_Outputs;

//add bus of Fusion Objects Data

typedef struct {
  float PosnLgt;
  float PosnLat;
  float Spd;
  float VLgt;
  float VLat;
  float A;
  float ALgt;
  float ALat;
  float AgDir;
  float Crvt;
} B1_ObjEstimn;

typedef struct {
  eCLS_ACCObjClass Typ;
  float Width;
  float Hei;
  eOS_ObjSide SideNear;
  eOIT_ObjIndcrTurn IndcrTurn;
  eOLS_ObjLightSts IndcrBrkLi;
  eOLS_ObjLightSts IndcrHzrdLi;
  eCMV_ACCObjMvSts MtnPat;
  eCMV_ACCObjMvSts MtnPatHist;
  float DstLatFromMidOfLaneSelf;
} B1_ObjInfo;

typedef struct {
  unsigned char Idn;
  unsigned char VisnId;
  eSDS_SnsrDataSts Sts;
  eOR_ObjRebl CllsnMtgtnByBrkgPrimQly;
  eOR_ObjRebl CllsnMtgtnByBrkgSecQly;
  eOR_ObjRebl CllsnWarnFwdQly;
  eOR_ObjRebl DstLatFromMidOfLaneSelfQly;
  float PosnLgtStdDe;
  float PosnLatStdDe;
  float AgDirStdDe;
  float SpdStdDe;
  float AStdDe;
  unsigned char FusnSrc;
} B1_ObjPpty;

typedef struct {
  B1_ObjEstimn OG_ObjEstimn_bus;
  B1_ObjInfo OG_ObjInfo_bus;
  B1_ObjPpty OG_ObjPpty_bus;
} B2_ObjGroup;

typedef struct {
  B2_ObjGroup FRD_ObjGroup_bus;
  unsigned char FRD_ObjNumber_u8;
} B3_FuseRdrData;

typedef struct {
  float x;
  float y;
  float z;
} Point3D_COM;

typedef struct {
  Point3D_COM Center;
  Point3D_COM CenterStdDev;
  Point3D_COM SizeLWH;
  Point3D_COM SizeStdDev;
  float Orientation;
  float OrientationStdDev;
} HafRect3D_COM;

typedef struct {
  float x;
  float y;
} Point2D_COM;

typedef struct {
  unsigned int sec;
  unsigned int nsec;
} HafTime_COM;

typedef struct {
  unsigned char ObjectID;
  unsigned char Class;
  unsigned int DetectSensor_Current;
  unsigned int DetectSensor_History;
  unsigned char MaintenanceStatus;

  /* range(0-100) */
  unsigned char ClassConfidence;

  /* range(0-100) */
  unsigned char ExistenceProbability;
  HafRect3D_COM RectInfo;
  Point2D_COM VelocityAbs;
  Point2D_COM AccelerationAbs;
  HafTime_COM TimeCreation;
  HafTime_COM LastUpdatedTime;
  unsigned char MotionPattern;
  unsigned char MotionPatternHistory;
  unsigned char BrakeLightSt;
  unsigned char TurnLightSt;
  unsigned char NearSide;
} HafFusionOut_COM;

//Definition of ADAS_Inputs bus
typedef struct {
  Inputs_VSP Inputs_VSP;
  Inputs_VCP Inputs_VCP;
  Inputs_VDP Inputs_VDP;
  boolean DA_IN_is_FaultBit_bl[208];

  /* System Backup Power Mode status
     0x0:PWR_Off
     0x1:PWR_ACC
     0x2:PWR_Run
     0x3_PWR_CrankReq */
  ePWR_PwrMd DA_IN_stat_SysPwrMd_ePWR;

  /* Lateral Control System Status
     0x0:LACS_Off
     0x1:LACS_Standby
     0x2:LACS_Active
     0x3:LACS_Override */
  eLACS_LatCtrlSts DA_IN_stat_TJAICASysSts_eLACS;

  /* ACC System Status
     0x0:CST_Off
     0x1:CST_Standby
     0x2:CST_Active
     0x3:CST_Override
     0x4:CST_BrakeOnly
     0x5:CST_StdStlActv
     0x6:CST_StdStlWait */
  eCST_ACCSts DA_IN_stat_ACCSysSts_eCST;

  /* ACC System Fault Status
     0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_ACCSysFltSts_eFLT;

  /* AEB System Status
     0x0:ES_Off
     0x1:ES_On
     0x2:ES_Disable
     0x3:ES_Override
     0x4:ES_Active */
  eES_AEBSts DA_IN_stat_AEBSysSts_eES;

  /* AEB Pedestrians System Status
     0x0:EP_Off
     0x1:EP_Standby
     0x2:EP_Disable
     0x3:EP_Override
     0x4:EP_Active */
  eEP_AEBPedSts DA_IN_stat_AEBPedtrnSysSts_eEP;

  /* AEB Pedestrians System Fault Status
     0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_AEBPedSysFlt_eFLT;

  /* AEB System Fault Status
     0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_AEBSysFltSts_eFLT;
  float DA_IN_a_AEBDclReqVal_sg;
  boolean DA_IN_is_AEBPrflReq_bl;

  /* 0x0:EHL_NoReq
     0x0:EHL_WarnngLvl1
     0x0:EHL_WarnngLvl2
     0x0:EHL_WarnngLvl3 */
  eEHL_AEBHBALvl DA_IN_stat_AEBHBALvlReq_eEHL;

  /* 0x0:EDR_NoReq
     0x1:EDR_AEB_DeclReq */
  eEDR_AEBDclReq DA_IN_stat_AEBDclReqSts_eEDR;

  /* 0x0:EMS_NoDsp
     0x1:EMS_UnablActAEB
     0x2:EMS_Active
     0x3:EMS_AEBErrMod
     0x4:EMS_AEBSwtchOn
     0x5:EMS_AEBSwtchOff
     0x6:EMS_RadarErr */
  eEMS_AEBMsg DA_IN_stat_AEBMsgReq_eEMS;

  /* 0x0:EJR_NoReq
     0x1:EJR_Lvl1
     0x2:EJR_Lvl2
     0x3:EJR_Lvl3 */
  eEJR_FCWJrkLvl DA_IN_stat_FCWJerkLvlReq_eEJR;

  /* 0x0:EWS_NoReq
     0x0:EWS_WarnngLvl1
     0x0:EWS_WarnngLvl2
     0x0:EWS_WarnngLvl3 */
  eEWS_FCWSts DA_IN_stat_FCWrnngSts_eEWS;

  /* 0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_FCWSysFltSts_eFLT;

  /* ABS Active */
  boolean DA_IN_is_ABSActive_bl;

  /* ABS Failure */
  boolean DA_IN_is_ABSFailure_bl;

  /* Acutal acceleration pedal position */
  float DA_IN_perc_AccelActuPos_sg;

  /* Acutal acceleration pedal position Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_AccelActuPosV_eVLD;

  /* Effective acceleration pedal position */
  float DA_IN_perc_AccelEfctvPos_sg;

  /* Acceleration override flag */
  boolean DA_IN_is_AccelOvrd_bl;

  /* Airbag status */
  boolean DA_IN_is_AirbagDpl_bl;

  /* Airbag Deployed Inversion
     0x0:ADI_Airbag_Deployed
     0x1:ADI_No_Airbag_Deployed */
  eADI_AirBagDplIvn DA_IN_stat_AirbagDplInvsn_eADI;

  /* Advance Park Assist Status, Optional: based on APA configration
     0x0:APA_Disable
     0x1:APA_Standby
     0x2:APA_Semi-APA_Active
     0x3:APA_Fully-APA_Active
     0x4:APA_Failed */
  eAPA_ApaSts DA_IN_stat_APASts_eAPA;

  /* Automatic Transmission Gear Shift Direction Failure */
  boolean DA_IN_is_TrGearShftDircnF_bl;

  /* Automatic Transmission Gear Shift Direction
     0x0:TDIR_No_Shift
     0x1:TDIR_Up_Shift
     0x2:TDIR_Down_Shift */
  eTDIR_TrShftDir DA_IN_stat_TrShftDircn_eTDIR;

  /* BCM availability */
  boolean DA_IN_is_BCMAvlbly_bl;

  /* Bonnet Open Status
     0x0:BOS_Bonnet_Closed
     0x1:BOS_Bonnet_Open
     0x2:BOS_Bonnet_Switch_Disconnect */
  eBOS_BntOpen DA_IN_stat_BntOpenSts_eBOS;

  /* Backup Power Mode Master availability */
  boolean DA_IN_is_BPMMstrAvlbly_bl;

  /* Brake disc temperature status
     0x0 Not high
     0x1 Temperature too high */
  eBDT_BrkDiscTm DA_IN_stat_BrkDiscTemSts_eBDT;

  /* as a pre-condition whether the brake is pressed
     0x0  brake pedal is not applied
     0x1  brake pedal applied  */
  eBPL_BrkPdlApl DA_IN_stat_PtBrkPdlSts_eBPL;

  /* Powertrain Brake Pedal Discrete Input Status Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_PtBrkPdlStsV_eVLD;

  /* Pressure applied by driver mannual force, 1Mpa = 1000 Kpa = 10 bar */
  float DA_IN_p_BrkAppdPrs_sg;

  /* Brake pedal driver applied pressue Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_BrkAppdPrsV_eVLD;

  /* brake pedal position */
  float DA_IN_perc_BrkPdlPos_sg;

  /* brake pedal position Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_BrkPdlPosV_eVLD;

  /* CalendarSecond */
  unsigned char DA_IN_indx_CalendarSec_u8;

  /* CalendarMinute */
  unsigned char DA_IN_indx_CalendarMin_u8;

  /* CalendarHour */
  unsigned char DA_IN_indx_CalendarHour_u8;

  /* CalendarDay */
  unsigned char DA_IN_indx_CalendarDay_u8;

  /* CalendarMonth */
  unsigned char DA_IN_indx_CalendarMonth_u8;

  /* CalendarYear */
  unsigned short int DA_IN_indx_CalendarYear_u16;

  /* Cruise Control Swith Cancel Switch Active */
  boolean DA_IN_is_CCSwStsCanclSwA_bl;

  /* Cruise Control Swith Distance Decrease Switch Active */
  boolean DA_IN_is_CCSwStsDistDecSwA_bl;

  /* Cruise Control Swith Distance Increase Switch Active */
  boolean DA_IN_is_CCSwStsDistIncSwA_bl;

  /* Cruise Control Swith On Switch Active */
  boolean DA_IN_is_CCSwStsOnSwA_bl;

  /* Cruise Control Swith Resume Switch Active */
  boolean DA_IN_is_CCSwStsRsmSwA_bl;

  /* Cruise Control Swith Set Switch Active */
  boolean DA_IN_is_CCSwStsSetSwA_bl;

  /* Cruise Control Swith Speed Decrease Switch Active */
  boolean DA_IN_is_CCSwStsSpdDecSwA_bl;

  /* Cruise Control Swith Speed Increase Switch Active */
  boolean DA_IN_is_CCSwStsSpdIncSwA_bl;

  /* Cruise Control Swith Status Switch Data Integrity
     0x0:CSW_Data_Valid
     0x1:CSW_Data_Invalid
     0x2:CSW_Failure_Detected
     0x3:CSW_Illegal_Range */
  eCSW_CCSwIntg DA_IN_stat_CCSwDataIntgty_eCSW;

  /* ACC Accessory Request Responds,the signal is the response from SCS about whether is request is executed
     0x0:CSRP_No_request
     0x1:CSRP_Request_honored
     0x2:CSRP_Lost_Arbitration
     0x3:CSRP_Control_Not_Allowed_For_Error
     0x4:CSRP_Pre-condition_Not_Satisfied */
  eCSRP_SCSReqRsp DA_IN_stat_ACCAccReqResp_eCSRP;

  /* HMI speed */
  float DA_IN_V_ClstrDspdVehSpd_sg;

  /* Dipped Beam Light On */
  boolean DA_IN_is_DipdBeamLghtOn_bl;

  /* Driver door open status
     0x0:DOS_Closed
     0x1:DOS_Open
     0x2:DOS_Ajar
     0x3:DOS_Full_Open */
  eDOS_DoorOpenSts DA_IN_stat_DrvrDoorOpenSts_eDOS;

  /* Driver Seatbelt Active */
  boolean DA_IN_is_DrvrSbltAtc_bl;

  /* Driver Seatbelt Active Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_DrvrSbltAtcV_eVLD;

  /* Display Measurement System
     0x0:DMS_kph
     0x1:DMS_mph */
  eDMS_DspMeasSys DA_IN_stat_DspMeasSys_eDMS;

  /* Engine Auto Stop Start State
     0x0:ESS_Engine_Off
     0x1:ESS_Engine_Running
     0x2:ESS_Engine_Starting
     0x3:ESS_Engine_Stopping */
  eESS_EnASSSta DA_IN_stat_EnASSSta_eESS;

  /* Engine Run Active */
  boolean DA_IN_is_EngRunActive_bl;

  /* Engine Speed */
  float DA_IN_n_EnSpd_sg;

  /* Engine Torque actual */
  float DA_IN_T_EnToqActu_sg;

  /* Drive mode for display
     0x0:PCS_Function_Disable
     0x1:PCS_Super_ECO
     0x2:PCS_ECO
     0x3:PCS_Normal
     0x4:PCS_Sport
     0x5:PCS_Super_Sport */
  ePCS_PtCustSetngDspCmd DA_IN_stat_PtCustSetCmd_ePCS;

  /* Powertrain shaft output torque Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_EnToqActuRngV_eVLD;

  /* Engine Torque actual Max extented Range */
  float DA_IN_T_EnToqMaxExtdRng_sg;

  /* Engine Torque actual Max extented Range Validity
     0x0:Valid
     0x1:Invalid */
  eVLD_ValidSts DA_IN_stat_EnToqMaxRngV_eVLD;

  /* Engine Torque actual Min extented Range */
  float DA_IN_T_EnToqMinExtdRng_sg;

  /* Engine Torque actual Min extented Range Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_EnToqMinRngV_eVLD;

  /* Electric Park Brake Application Status
     0x0:EPB_Unknown
     0x1:EPB_Applied
     0x2:EPS_Released
     0x3:EPB_In_Progress */
  eEPB_AppcnSts DA_IN_stat_EPBAppcnSts_eEPB;

  /* EPB Cruise Control Cancel Required */
  boolean DA_IN_is_EPBCCCanclReqd_bl;

  /* Front Infotainment Control Module Availability */
  boolean DA_IN_is_FICMAvlbly_bl;

  /* Front Fog Light On */
  boolean DA_IN_is_FrtFogLghtOn_bl;

  /* Front Passenger Door Open Status
     0x0:DOS_Closed
     0x1:DOS_Open
     0x2:DOS_Ajar
     0x3:DOS_Full_Open */
  eDOS_DoorOpenSts DA_IN_stat_FrtPsngDoorSts_eDOS;

  /* Front Wiper Park Position Active
     Wiper Park Position for the Front wiper */
  boolean DA_IN_is_FrtWiperParkPosA_bl;

  /* Front Wiper Switch Stauts
     0x0:WPR_Wippers_Off
     0x1:WPR_Wippers_In_Intermittent_Mode
     0x2:WPR_Wippers_In_Slow_Mode
     0x3:WPR_Wippers_In_Fast_Mode */
  eWPR_FrtWiperSw DA_IN_stat_FrtWiperSwSts_eWPR;

  /* Front Washer Pump Active */
  boolean DA_IN_is_FrtWshrPumpA_bl;

  /* Hill Descent Control System Status
     When  initialization or bus off or time out or signal invalid, it shall be set to default value 0x3 Failed
     0x0:HDC_Noraml
     0x1:HDC_Enabled
     0x2:HDC_Active
     0x3:HDC_Failed
     0x4:HDC_Temporarily_Inhibited */
  eHDC_HDCSysSts DA_IN_stat_HDCSysSts_eHDC;

  /* Instrument Cluster Availability */
  boolean DA_IN_is_IPCAvlbly_bl;

  /* Left Direction Indication Light Failed */
  boolean DA_IN_is_LDircnIndLghtF_bl;

  /* Left Direction Indication On */
  boolean DA_IN_is_LDircnIO_bl;

  /* Left Driven Wheel Rotational Direction
     0x0:WRD_Unknown
     0x1:WRD_Forward
     0x2:WRD_Backward
     0x3:WRD_Initial_Invalid */
  eWRD_WhlRotDirc DA_IN_stat_LDrvnDircn_eWRD;

  /* Left Driven Wheel Rotational Distance Pulse Counter */
  unsigned short int DA_IN_indx_LDrvnDistPlsCtr_u16;

  /* Left Driven Wheel Rotational Distance Timestamp  */
  unsigned short int DA_IN_indx_LDrvnDistTmsp_u16;

  /* Left Driven Wheel Rotational Distance Timestamp Rollover Counter  */
  unsigned char DA_IN_indx_LDrvnDistTRC_u8;

  /* Left Driven Wheel Rotational Distance Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_LDrvnDistV_eVLD;

  /* Left Driven Wheel Rotational Reset Occurred   */
  boolean DA_IN_is_LDrvnRstOcd_bl;

  /* Left Driven Wheel Rotational Sequence Number */
  unsigned char DA_IN_indx_LDrvnSeqNum_u8;

  /* Right Driven Wheel Rotational Direction
     0x0:WRD_Unknown
     0x1:WRD_Forward
     0x2:WRD_Backward
     0x3:WRD_Initial_Invalid */
  eWRD_WhlRotDirc DA_IN_stat_RDrvnDircn_eWRD;

  /* Right  Driven Wheel Rotational Distance Pulse Counter */
  unsigned short int DA_IN_indx_RDrvnDistPlsCtr_u16;

  /* Right Driven Wheel Rotational Distance Timestamp  */
  unsigned short int DA_IN_indx_RDrvnDistTmsp_u16;

  /* Right Driven Wheel Rotational Distance Timestamp Rollover Counter   */
  unsigned char DA_IN_indx_RDrvnDistTRC_u8;

  /* Right Driven Wheel Rotational Distance Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_RDrvnDistV_eVLD;

  /* Right Driven Wheel Rotational Reset Occurred      */
  boolean DA_IN_is_RDrvnRstOcd_bl;

  /* Right Driven Wheel Rotational Sequence Number */
  unsigned char DA_IN_indx_RDrvnSeqNum_u8;

  /* Left NonDriven Wheel Rotational Direction
     0x0:WRD_Unknown
     0x1:WRD_Forward
     0x2:WRD_Backward
     0x3:WRD_Initial_Invalid */
  eWRD_WhlRotDirc DA_IN_stat_LNonDrvnDircn_eWRD;

  /* Left  NonDriven Wheel Rotational Distance Pulse Counter */
  unsigned short int DA_IN_indx_LNonDrvnDistPC_u16;

  /* Left  NonDriven Wheel Rotational Distance Timestamp  */
  unsigned short int DA_IN_indx_LNonDrvnDistT_u16;

  /* Left  NonDriven Wheel Rotational Distance Timestamp Rollover Counter   */
  unsigned char DA_IN_indx_LNonDrvnDistTRC_u8;

  /* Left  NonDriven Wheel Rotational Distance Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_LNonDrvnDistV_eVLD;

  /* Left  NonDriven Wheel Rotational Reset Occurred      */
  boolean DA_IN_is_LNonDrvnRstOcd_bl;

  /* Left  NonDriven Wheel Rotational Sequence Number */
  unsigned char DA_IN_indx_LNonDrvnSeqNum_u8;

  /* Right NonDriven Wheel Rotational Direction
     0x0:WRD_Unknown
     0x1:WRD_Forward
     0x2:WRD_Backward
     0x3:WRD_Initial_Invalid */
  eWRD_WhlRotDirc DA_IN_stat_RNonDrvnDircn_eWRD;

  /* Right Non Driven Wheel Rotational Distance Pulse Counter */
  unsigned short int DA_IN_indx_RNonDrvnDistPC_u16;

  /* Right Non Driven Wheel Rotational Distance Timestamp  */
  unsigned short int DA_IN_indx_RNonDrvnDistT_u16;

  /* Right Non Driven Wheel Rotational Distance Timestamp Rollover Counter   */
  unsigned char DA_IN_indx_RNonDrvnDistTRC_u8;

  /* Right Non Driven Wheel Rotational Distance Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_RNonDrvnDistV_eVLD;

  /* Right Non Driven Wheel Rotational Reset Occurred      */
  boolean DA_IN_is_RNonDrvnRstOcd_bl;

  /* Right Non Driven Wheel Rotational Sequence Number */
  unsigned char DA_IN_indx_RNonDrvnSeqNum_u8;

  /* Loadspace Open Status
     0x0:LOS_Load_Space_Closed
     0x1:LOS_Load_Space_Open */
  eLOS_LdSpcOpen DA_IN_stat_LdSpcOpenSts_eLOS;

  /* Near Range Control Drive Status
     0x0:NRC_Inactive
     0x1:NRC_Active
     0x2:NRC_Semi_APA
     0x3:NRC_Fully_APA */
  eNRC_NRCDSts DA_IN_stat_NRCDSts_eNRC;

  /* Powertrain ACC Toqure Request Respond
     0x0:CPR_No_Request
     0x1:CPR_Request_Honored
     0x2:CPR_Lost_Arbitration
     0x3:CPR_Error
     0x4:CPR_Pre-Condition_Not_Satisfied */
  eCPR_PTCruzResp DA_IN_stat_PtACCToqReqResp_eCPR;

  /* Right Direction Indication Light Failed */
  boolean DA_IN_is_RDircnIndLghtF_bl;
  boolean DA_IN_is_RDircnIO_bl;

  /* Rear Left Door Open Status
     0x0:DOS_Closed
     0x1:DOS_Open
     0x2:DOS_Ajar
     0x3:DOS_Full_Open */
  eDOS_DoorOpenSts DA_IN_stat_RLDoorOpenSts_eDOS;

  /* Rear Right Door Open Status
     0x0:DOS_Closed
     0x1:DOS_Open
     0x2:DOS_Ajar
     0x3:DOS_Full_Open */
  eDOS_DoorOpenSts DA_IN_stat_RRDoorOpenSts_eDOS;

  /* Rear Fog Light On */
  boolean DA_IN_is_RrFogLghtOn_bl;

  /* Steering Wheel Angle Gradient */
  float DA_IN_wD_StrgWhlAngGrd_sg;

  /* Steering Wheel Angle  */
  float DA_IN_angD_StrgWhlAng_sg;

  /* Steering Wheel Angle Sensor Calibration Status
     0x0:SAC_Unknow
     0x1:SAC_Estimated
     0x2:SAC_Calibrated
     0x3:SAC_Unknow */
  eSAC_StrSnsrCali DA_IN_stat_StrWhAngSnsrCal_eSAC;

  /* Steering Wheel Angle Sensor Fault */
  boolean DA_IN_is_StrgWhlAngSnsrFlt_bl;

  /* Steering Wheel Angle Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_StrgWhlAngV_eVLD;

  /* System Backup Power Mode Enabled */
  boolean DA_IN_is_SysBPMEnbd_bl;

  /* System Backup Power Mode status
     0x0:PWR_Off
     0x1:PWR_ACC
     0x2:PWR_Run
     0x3_PWR_CrankReq */
  ePWR_PwrMd DA_IN_stat_SysBPM_ePWR;

  /* Traction Control System Operating Mode
     When  initialization or bus off or time out or signal invalid, it shall be set to default value 0x1 OFF
     0x0:TCSM_Off
     0x1:TCSM_Normal
     0x2:TCSM_Off_Road */
  eTCSM_TCSMode DA_IN_stat_TCSOpngMd_eTCSM;

  /* Traction Control System Operating Status
     0x0:TCSS_Inactive
     0x1:TCSS_Active
     0x2:TCSS_Fault */
  eTCSS_TCSSts DA_IN_stat_TCSOpngSts_eTCSS;

  /* Transmission Cruise Control Cancel Request */
  boolean DA_IN_is_TrCCCanclReq_bl;

  /* Transmission Estimated Gear, implying the specific gear position.
     0x0:TGR_Not_Supported
     0x1:TGR_First_Gear
     0x2:TGR_Second_Gear
     0x3:TGR_Third_Gear
     0x4:TGR_Fourth_Gear
     0x5:TGR_Fifth_Gear
     0x6:TGR_Sixth_Gear
     0x7:TGR_Seventh_Gear
     0x8:TGR_Eighth_Gear
     0xD:TGR_Neutral_Gear
     0xE:TGR_Rerverse_Gear
     0xF:TGR_Park_Gear */
  eTGR_TrmGear DA_IN_stat_TrEstdGear_eTGR;

  /* Transmission Estimated Gear Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_TrEstdGearV_eVLD;

  /* Transmission Shift Lever Position
     0x0:TLP_Between_Ranges
     0x1:TLP_Park_Range
     0x2:TLP_Reverse_Range
     0x3:TLP_Neutral_Range
     0x4:TLP_Forward_Range_A
     0x5:TLP_Forward_Range_B
     0x6:TLP_Forward_Range_C
     0x7:TLP_Forward_Range_D
     0x8:TLP_Forward_Range_E
     0x9:TLP_Forward_Range_F
     0xA:TLP_Forward_Range_G
     0xB:TLP_Forward_Range_H
     0xF:TLP_Lever_Position_Unknown */
  eTLP_ShftLvrPos DA_IN_stat_TrShftLvrPos_eTLP;

  /* Transmission Shift Lever Position Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_TrShftLvrPosV_eVLD;

  /* Vehicle Driving Mode, when ==0x7, using signal SPP_stat_PtCustSetngDspCmd_en to judge the driving mode witch selected by driver
     0x0:DMD_No_Driving_Mode
     0x1:DMD_SuperECO
     0x2:DMD_ECO
     0x3:DMD_Normal
     0x4:DMD_Sport
     0x5:DMD_Super_Sport
     0x7:DMD_Customization_Mode */
  eDMD_DrvMd DA_IN_stat_VehDrvngMd_eDMD;

  /* Vehicle Dynamic Yaw Rate */
  float DA_IN_yr_VehDynYawRate_sg;

  /* Vehicle Dynamic Yaw Rate Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_VehDynYawRateV_eVLD;

  /* Vehicle Odometer  */
  float DA_IN_D_VehOdo_sg;

  /* Vehicle Odometer Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_VehOdoV_eVLD;

  /* Vehicle Standstill Status
     0x0:VSL_Not_Standstill
     0x1:VSL_Standstill
     0x2:VSL_Invalid */
  eVSL_StdStlSts DA_IN_stat_VehStdStlSts_eVSL;

  /* FCW Sensitivity Level Request
     0x0:FSR_NoReq
     0x1:FSR_Level1
     0x2:FSR_Level2
     0x3:FSR_Level3 */
  eFSR_SnstvLvl DA_IN_stat_FCWSnstvtLvlReq_eFSR;

  /* FCW Switch Request
     0x0:SWR_NoReq
     0x1:SWR_Off
     0x2:SWR_On */
  eSWR_SwitchReq DA_IN_stat_FCWSwReq_eSWR;

  /* Vehicle Speed Average Driven */
  float DA_IN_V_VehSpdAvgDrvn_sg;

  /* Vehicle Speed Average Driven Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid   */
  eVLD_ValidSts DA_IN_stat_VehSpdAvgDrvnV_eVLD;

  /* Vehicle Speed Average */
  float DA_IN_V_VehSpdAvg_sg;

  /* Vehicle Speed Average Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid   */
  eVLD_ValidSts DA_IN_stat_VehSpdAvgV_eVLD;

  /* Vehicle Stability Enhancement Lateral Acceleration */
  float DA_IN_a_VSELatAcc_sg;

  /* Vehicle Stability Enhancement Lateral Acceleration Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_VSELatAccV_eVLD;

  /* Vehicle Stability Enhancement Long Acceleration */
  float DA_IN_a_VSELongtAcc_sg;

  /* Vehicle Stability Enhancement Long Acceleration
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_VSELongtAccV_eVLD;

  /* Vehicle Stability Enhancement Mode
     0x0:VSEM_Off
     0x1:VSEM_Normal
     0x2:VSEM_Competitive */
  eVSEM_VSEMode DA_IN_stat_VSEMd_eVSEM;

  /* Vehicle Stability Enhancement Status,
     When initialization or bus off or time out or signal invalid, it shall be set to default value 0x2 Fault*
     0x0:VSES_InAct
     0x1:VSES_Act
     0x2:VSES_Fault
     0x3:VSES_WarmingUp
     0x4:VSES_NotReady */
  eVSES_VSESts DA_IN_stat_VSESts_eVSES;

  /* Wheel Brake Pressure Status
     0x0 Exist brake force
     0x1 No barke force */
  eWPS_BrkPreSts DA_IN_stat_WhlBrkPrsSts_eWPS;

  /* Wheel Ground Velocity Left Driven */
  float DA_IN_V_WhlVelLDrvn_sg;

  /* Wheel Ground Velocity Left Driven Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_WhlVelLDrvnV_eVLD;

  /* Wheel Ground Velocity Left NonDriven */
  float DA_IN_V_WhlVelLNonDrvn_sg;

  /* Wheel Ground Velocity Left NonDriven Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_WhlVelLNonDrvnV_eVLD;

  /* Wheel Ground Velocity Right Driven */
  float DA_IN_V_WhlVelRDrvn_sg;

  /* Wheel Ground Velocity Right Driven Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_WhlVelRDrvnV_eVLD;

  /* Wheel Ground Velocity Right NonDriven */
  float DA_IN_V_WhlVelRNonDrvn_sg;

  /* Wheel Ground Velocity Right NonDriven Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_WhlVelRNonDrvnV_eVLD;

  /* AEB pedestrian function switch status
     0x0:PSW_NoReq
     0x1:PSW_Off
     0x2:PSW_On */
  ePSW_AEBPedSw DA_IN_stat_AEBPedtrnSwReq_ePSW;

  /* AEB  function switch status
     0x0:VSW_NoReq
     0x1:VSW_Off
     0x2:VSW_On */
  eVSW_AEBVehSw DA_IN_stat_AEBSwReq_eVSW;

  /* The response from chassis scs to evaluate whether the jerk is achieved
     0x0:JRS_NoReq
     0x1:JRS_ReqHonored
     0x2:JRS_LostArbitration
     0x3:JRS_CtrlNotAllowedForErr
     0x4:JRS_PreCondNotSatisfied */
  eJRS_JerkResp DA_IN_stat_AEBJerkReqResp_eJRS;

  /* AEBDclReqResp is the response from SCS about whether is request is executed
     0x0:ERS_NoReq
     0x1:ERS_ReqHonored
     0x2:ERS_LostArbitration
     0x3:ERS_CtrlNotAllowedForErr
     0x4:ERS_PreCondNotSatisfied */
  eERS_AEBDclResp DA_IN_stat_AEBDclReqResp_eERS;

  /* AEB Hydraulic Brake assist Request Respond status
     0x0:HRS_NoReq
     0x1:HRS_ReqHonored
     0x2:HRS_LostArbitration
     0x3:HRS_CtrlNotAllowedForErr
     0x4:HRS_PreCondNotSatisfied */
  eHRS_HBAResp DA_IN_stat_AEBHBAReqResp_eHRS;

  /* The signal is the response from SCS about whether is request is executed
     0x0:PRS_NoReq
     0x1:PRS_ReqHonored
     0x2:PRS_LostArbitration
     0x3:PRS_CtrlNotAllowedForErr
     0x4:PRS_PreCondNotSatisfied */
  ePRS_PrflResp DA_IN_stat_AEBPrflReqResp_ePRS;

  /* Steering Wheel Angle Sensor Initialized */
  boolean DA_IN_is_StrgWhlAngSnsrInid_bl;

  /* Transmission Non Emissions Related Malfunction Active */
  boolean DA_IN_is_TrNonEmsnRltdMalfA_bl;

  /* Transmission Emissions Related Malfunction Active */
  boolean DA_IN_is_TrEmsnRltdMalfA_bl;

  /* Outside Air Temperature Corrected Value */
  float DA_IN_C_OtsdAirTemCrVal_sg;

  /* Outside Air Temperature Corrected Value Validity
     0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_OtsdAirTemValV_eVLD;

  /* Engine Non Emissions Related Malfunction Active */
  boolean DA_IN_is_EnNonEmsnRltdMalfA_bl;

  /* Engine Emissions Related Malfunction Active */
  boolean DA_IN_is_EnEmsnRltdMalfA_bl;

  /* Speed Assist System Status
     0x0:SAS_Off
     0x1:SAS_ActLmt
     0x2:SAS_Standby
     0x3:SAS_EntryCondIncorrect
     0x4:SAS_OverSpeed
     0x5:SAS_Fault
     0x6:SAS_ActPassive
   */
  eSAS_SpdAstSys DA_IN_stat_SpdAstSysSts_eSAS;

  /* Target Speed SRC Status
     0x0:TSS_Undef
     0x1:TSS_Cam
     0x2:TSS_Navigation
     0x3:TSS_Fault */
  eTSS_TgtSptSrcSts DA_IN_stat_TrgtSpdSrcSts_eTSS;

  /* Speed Assist System Target Speed */
  float DA_IN_V_SpdAstSysTrgtSpd_sg;

  /* Speed Assist System Mode
     0x0:ENS_NormalOperation
     0x1:ENS_DegradedOperation
     0x2:ENS_Reserved
     0x3:EMS_Invalid */
  eSAM_SpdAstMd DA_IN_stat_SpdAstMd_eSAM;

  /* Navigation position signal */
  float DA_IN_d_FICMPosngSysDircn_sg;

  /* Engine Speed Status
     0x0:ENS_NormalOperation
     0x1:ENS_DegradedOperation
     0x2:ENS_Reserved
     0x3:EMS_Invalid */
  eENS_EngSpdSts DA_IN_stat_EnSpdSts_eENS;

  /* Cruise Control Enabled */
  boolean DA_IN_is_CCEnbd_bl;

  /* Cruise Control Active */
  boolean DA_IN_is_CCA_bl;

  /* Transmission Shift Pattern Active Status
     0x0:TRP_DftSftPttrnAct
     0x1:TRP_SftPttrn1Act
     0x2:TRP_SftPttrn2Act
     0x3:TRP_SftPttrn3Act
     0x4:TRP_SftPttrn4Act
     0x5:TRP_PTNonPrtPttrnAct
     0x6:TRP_PTPrtPttrnAct */
  eTRP_TrShftPtrn DA_IN_stat_TrShftPtrnASts_eTRP;

  /* Transmission Tap Up Tap Down Mode Status
     0x0:TMD_NoAct
     0x1:TMD_DrvSftCtrlAct
     0x2:TMD_ElecRgeSelectAct */
  eTMD_TCMTapMd DA_IN_stat_TCMTapMdSts_eTMD;

  /* Direction indicator Lamp Switch Status
     0x0:DLS_Off
     0x1:DLS_LeftOn
     0x2:DLS_RightOn */
  eDLS_DircnIndLamp DA_IN_stat_DircnIndLampSw_eDLS;

  /* Main Beam Light On */
  boolean DA_IN_is_MainBeamLghtOn_bl;

  /* TJA ICA switch Request
     0x0:TIR_NoReq
     0x1:TIR_Off
     0x2:TIR_On */
  eTIR_TJAICAReq DA_IN_stat_TJAICASwReq_eTIR;

  /* Front Infotainment Control Module Position System lateral distance */
  float DA_IN_d_FICMPosngSysLatd_sg;

  /* Front Infotainment Control Module Position System long distance */
  float DA_IN_d_FICMPosngSysLongd_sg;

  /* Automatic Transmission Commanded Gear
     0x0:TGR_Not_Supported
     0x1:TGR_First_Gear
     0x2:TGR_Second_Gear
     0x3:TGR_Third_Gear
     0x4:TGR_Fourth_Gear
     0x5:TGR_Fifth_Gear
     0x6:TGR_Sixth_Gear
     0x7:TGR_Seventh_Gear
     0x8:TGR_Eighth_Gear
     0xD:TGR_Neutral_Gear
     0xE:TGR_Rerverse_Gear
     0xF:TGR_Park_Gear */
  eTGR_TrmGear DA_IN_stat_AutocTrCmddGear_eTGR;
  boolean DA_IN_is_EnDragToqRducnA_bl;
  float DA_IN_V_VehSpdNonDrvn_sg;
  eVLD_ValidSts DA_IN_stat_VehSpdNonDrvnV_eVLD;
  boolean DA_IN_is_RstrFctryReq_bl;
  eCLC_ChLkaCtrlSts DA_IN_stat_ChsLKACtrlSts_eCLC;
  float DA_IN_T_ChsLKARespToq_sg;
  eVLD_ValidSts DA_IN_stat_ChsLKARespToqV_eVLD;
  float DA_IN_T_DrvrStrDlvrdToq_sg;
  eVLD_ValidSts DA_IN_stat_DrvStrDlvrdToqV_eVLD;
  eSMS_StrgModSet DA_IN_stat_StrgCustSetng_eSMS;
  eLLR_LkaLdwSwReq DA_IN_stat_LDWLKASwReq_eLLR;
  eAHWR_AdoHptcWrnngReq DA_IN_stat_LSSHptcWrngReq_eAHWR;
  eLSLR_SnstvtLvlReq DA_IN_stat_LDWSnstLvlReq_eLSLR;
  eAHWR_AdoHptcWrnngReq DA_IN_stat_LDWAdoWrnngReq_eAHWR;
  boolean DA_IN_is_EnSpReqToTr_bl;
  eETRF_EnToqRducnFlr DA_IN_stat_EnToqRducnFlr_eETRF;
  eVLD_ValidSts DA_IN_stat_EnToqDrvrReqd_eVLD;
  float DA_IN_T_EnToqDrvrReqd_sg;
  eEPBF_EPBFlrSts DA_IN_stat_EPBFlrSts_eEPBF;
  eAVH_AutoHoldSts DA_IN_stat_AutoHoldSysSts_eAVH;

  /* Unsteady Driving Warning Warning Request :0x0:no request 0x1:warning level1(low) 0x2:warning level2(middle) 0x3:warning level3(high) 0x4:reserved 0x5:reserved 0x6:reserved 0x7:reserved */
  eUWR_UDWWrnngReq DA_IN_stat_UDWWrnngReq_eUWR;

  /* 0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_UDWSysFltSts_eFLT;

  /* 0x0:STVL_Unavailable
     0x1:STVL_Low
     0x2:STVL_Standard
     0x3:STVL_High */
  eSTVL_SnstvtLvl DA_IN_stat_UDWSnstvtLvl_eSTVL;

  /* 0x0:CMD_Unavailable
     0x1:CMD_Off
     0x2:CMD_On */
  eCMD_HMIDspCMD DA_IN_stat_UDWDspCmd_eCMD;

  /* 0x0:LMT_NoLine
     0x1:LMT_Solid
     0x2:LMT_Dashed
     0x3:LMT_Curbstone
     0x4:LMT_Grass
     0x5:LMT_BotDott */
  eLMT_LaneMrkrTyp DA_IN_stat_RLaneMrkrTyp_eLMT;

  /* 0x0:LMC_NoLine
     0x1:LMC_White
     0x2:LMC_Red
     0x3:LMC_Yellow */
  eLMC_LaneMrkrColor DA_IN_stat_RLaneMrkrColor_eLMC;

  /* 0x0:LMT_NoLine
     0x1:LMT_Solid
     0x2:LMT_Dashed
     0x3:LMT_Curbstone
     0x4:LMT_Grass
     0x5:LMT_BotDott */
  eLMT_LaneMrkrTyp DA_IN_stat_LLaneMrkrTyp_eLMT;

  /* 0x0:LMC_NoLine
     0x1:LMC_White
     0x2:LMC_Red
     0x3:LMC_Yellow */
  eLMC_LaneMrkrColor DA_IN_stat_LLaneMrkrColor_eLMC;

  /* 0x0:NVS_Cruise
     0x1:NVS_Navigation
     0x2:NVS_Invalid */
  eNVS_NavSts DA_IN_stat_NavSts_eNVS;

  /* 0x0:USR_NoReq
     0x1:USR_Off
     0x2:USR_On */
  eUSR_UDWSwReq DA_IN_stat_UDWSwReq_eUSR;

  /* 0x0:LSLR_NoReq
     0x1:LSLR_Low
     0x2:LSLR_Standard
     0x3:LSLR_High */
  eLSLR_SnstvtLvlReq DA_IN_stat_UDWSnstLvlReq_eLSLR;

  /* 0x0:NoNewIconAhead
     0x1:0x01~0x1F:E=N*0.1
     0x15:over 2.0km */
  unsigned char DA_IN_indx_NavNewIconDis_u8;

  /* 0x0:NNI_Unknown
     0x1:NNI_Left
     0x2:NNI_Right
     0x3:NNI_LeftFront
     0x4:NNI_RightFront
     0x5:NNI_LeftRear
     0x6:NNI_RightRear
     0x7:NNI_Left_U_Turn
     0x8:NNI_Right_U_Turn
     0x9:NNI_GoStraight
     0xA:NNI_RoundaboutEntrance
     0xB:NNI_RoundaboutExit
     0xC:NNI_ServiceArea
     0xD:NNI_TollStation
     0xE:NNI_Tunnel */
  eNNI_NavNewIcon DA_IN_stat_NavNewIconDis_eNNID;

  /* 0x0:not in ISD
     0x1:0x01~0xC8:E=N*0.1
     0x2:E=N*0.1
     0x3:E=N*0.1
     0xC9:0xC9~0xFA:Linear:E=N-180
     0xFB:over 70Km */
  unsigned short int DA_IN_indx_NISDDRetDis_u16;

  /* 0x0:no SLC ahead
     0x1:0x01~0x3C:E=N*0.1
     0x3D:over 6.0km */
  unsigned char DA_IN_indx_NavDisFromFEE_u8;

  /* 0x0:NCRT_Unknown
     0x1:NCRT_Highway
     0x2:NCRT_InterurbanRoads
     0x3:NCRT_CityRoads
     0x4:NCRT_Ramp
     0x5:NCRT_NationalRoad
     0x6:NCRT_ProvincialRoad
     0x7:NCRT_CountryRoad
     0x8:NCRT_VillageRoad
     0x9:NCRT_CityExpressWay
     0xA:NCRT_MajorUrbanRoad
     0xB:NCRT_SecondaryUrbanRoad
     0xC:NCRT_NormalUrbanRoad
     0xD:NCRT_NonNavigationRoad */
  eNCRT_NavCrntRoadTyp DA_IN_stat_NavCrntRdTyp_eNCRT;
  unsigned char DA_IN_indx_NavCountryCode_u8;

  /* 0x0:NSLU_Unknown
     0x1:NSLU_mph
     0x2:NSLU_kph */
  eNSLU_NavSpdLmtValUnit DA_IN_stat_NavSpdLmtUnit_eNSLU;

  /* 0x0:NSLS_Fault
     0x1:NSLS_Inactive
     0x2:NSLS_Active */
  eNSLS_NavSpdLmtValSts DA_IN_stat_NavSpdLmtSts_eNSLS;
  float DA_IN_V_NavSpdLmtVal_sg;

  /* 0x0:NSLT_NotSpecific
     0x1:NSLS_CameraDetection
     0x2:NSLS_IntervalSpeedDetection */
  eNSLT_NavSpdLmtTyp DA_IN_stat_NavSpdLmtTyp_eNSLT;
  float DA_IN_t_RDALObjTimeToCol_sg;
  float DA_IN_v_RDALObjLongtRltvVel_sg;
  float DA_IN_d_RDALObjLongtRltvDist_sg;
  float DA_IN_v_RDALObjLatRltvVel_sg;
  float DA_IN_d_RDALObjLatRltvDist_sg;
  unsigned char DA_IN_indx_RDALObjId_u8;
  float DA_IN_t_RDARObjTimeToCol_sg;
  float DA_IN_v_RDARObjLongtRltvVel_sg;
  float DA_IN_d_RDARObjLongtRltvDist_sg;
  float DA_IN_v_RDARObjLatRltvVel_sg;
  float DA_IN_d_RDARObjLatRltvDist_sg;
  unsigned char DA_IN_indx_RDARObjId_u8;

  /* 0x3:RDAS_SensorBlockage
     0x4:RDAS_Disabled
     0x5:RDAS_Enabled
     0x6:RDAS_SystemError */
  eRDAS_RDASysStaELK DA_IN_stat_RDAStaELK_eRDAS;

  /* 0x0:ROZ_NoObject
     0x1:ROZ_ObjectInBSWZone
     0x2:ROZ_ObjectInCVWZone
     0x3:ROZ_ObjectInSharedZone */
  eROZ_RDASysObjZone DA_IN_stat_RDARObjZone_eROZ;
  float DA_IN_d_RDARObjWidth_sg;

  /* 0x0:ROS_NoObject
     0x1:ROS_New
     0x2:ROS_Mature
     0x3:ROS_Coasted */
  eROS_RDASysObjSts DA_IN_stat_RDARObjSts_eROS;

  /* 0x0:ROST_Stationary
     0x1:ROST_NotStationary */
  eROST_RDASysObjStry DA_IN_stat_RDARObjStry_eROST;
  float DA_IN_d_RDARObjLength_sg;

  /* 0x0:ROZ_NoObject
     0x1:ROZ_ObjectInBSWZone
     0x2:ROZ_ObjectInCVWZone
     0x3:ROZ_ObjectInSharedZone */
  eROZ_RDASysObjZone DA_IN_stat_RDASysLObjZone_eRSOZ;
  float DA_IN_d_RDASysRObjWidth_sg;

  /* 0x0:ROS_NoObject
     0x1:ROS_New
     0x2:ROS_Mature
     0x3:ROS_Coasted */
  eROS_RDASysObjSts DA_IN_stat_RDASysLObjSts_eRSOS;

  /* 0x0:ROST_Stationary
     0x1:ROST_NotStationary */
  eROST_RDASysObjStry DA_IN_stat_RDASysLObjStry_eROST;
  float DA_IN_d_RDASysLObjLength_sg;

  /* 0x0:BHAS_Inactive
     0x1:BHAS_BrakePressureHold
     0x2:BHAS_NormalPressureDecay
     0x3:BHAS_DriveoffPressureDecay */
  eBHAS_BrkHillAstSts DA_IN_stat_BrkHillAstSts_eBHAS;
  boolean DA_IN_is_StrgWhlAngSnsrMltCp_bl;

  /* 0x0:BSDW_NoWarning
     0x1:BSDW_Warning_Level1
     0x2:BSDW_Warning_Level2
     0x3:BSDW_Warning_Level3 */
  eBSDW_BSDWarningSts DA_IN_stat_LBSDLCAWrnng_eBSDW;

  /* 0x0:BSDW_NoWarning
     0x1:BSDW_Warning_Level1
     0x2:BSDW_Warning_Level2
     0x3:BSDW_Warning_Level3 */
  eBSDW_BSDWarningSts DA_IN_stat_RBSDLCAWrnng_eBSDW;

  /* FCW Confidence
     0x0:eFCD_NotReliable
     0x1:eFCD_WarningReliable */
  eFCD_FCWCnfdn DA_IN_stat_FCWConfidence_eFCD;
  float DA_IN_T_LKAReqToq_sg;

  /* 0x0:TRQR_NoReq
     0x1:TRQR_TorqReq */
  eTRQR_TorqReq DA_IN_stat_LKAReqToqSts_eTRQR;

  /* 0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_LKAReqToqV_eVLD;

  /* 0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_LKASysFltSts_eFLT;

  /* 0x0:LACS_Off
     0x1:LACS_Standby
     0x2:LACS_Active
     0x3:LACS_Override */
  eLACS_LatCtrlSts DA_IN_stat_LKASysSts_eLACS;
  boolean DA_IN_is_LKADrvrTkovReq_bl;

  /* 0x0:LACS_Off
     0x1:LACS_Standby
     0x2:LACS_Active
     0x3:LACS_Override */
  eLACS_LatCtrlSts DA_IN_stat_LDWSysSts_eLACS;

  /* 0x0:CFS_NoFault
     0x1:CFS_Fault */
  eCFS_CamrFltSts DA_IN_stat_FVCMFltSts_eCFS;

  /* 0x0:STVL_Unavaible
     0x1:STVL_Low
     0x2:STVL_Standard
     0x3:STVL_High */
  eSTVL_SnstvtLvl DA_IN_stat_LDWSnstvtLvl_eSTVL;

  /* 0x0:CMD_Unavailable
     0x1:CMD_Off
     0x2:CMD_On */
  eCMD_HMIDspCMD DA_IN_stat_LDWAdoWrDspCmd_eCMD;
  boolean DA_IN_is_FVCMBlkd_bl;

  /* 0x0:HOD_HandsOff_Lvl1
     0x0:HOD_HandsOn
     0x0:HOD_HandsOff_Lvl2
     0x0:HOD_HandsOff_Lvl3 */
  eHOD_HandsOffDet DA_IN_stat_HandOffDetnSta_eHOD;

  /* 0x0:VLD_Valid
     0x1:VLD_Invalid */
  eVLD_ValidSts DA_IN_stat_HandOffDetnStaV_eVLD;

  /* 0x0:LCMD_Unavailable
     0x1:LCMD_Off
     0x2:LCMD_LDW
     0x3:LCMD_LDP
     0x4:LCMD_LKA */
  eLCMD_LSSHMIDspCMD DA_IN_stat_LSSDspCmd_eLCMD;

  /* 0x0:CMD_Unavailable
     0x1:CMD_Off
     0x2:CMD_On */
  eCMD_HMIDspCMD DA_IN_stat_LSSHpcWrDspCmd_eCMD;

  /* 0x0:VSLR_NoDsp
     0x1:VSLR_LinTrack
     0x2:VSLR_Intervention
     0x3:VSLR_Warning
     0x4:VSLR_IntervWrnng */
  eVSLR_VsulznReq DA_IN_stat_LSSLVsulznReq_eVSLR;

  /* 0x0:VSLR_NoDsp
     0x1:VSLR_LinTrack
     0x2:VSLR_Intervention
     0x3:VSLR_Warning
     0x4:VSLR_IntervWrnng */
  eVSLR_VsulznReq DA_IN_stat_LSSRVsulznReq_eVSLR;

  /* 0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_LDWSysFltSts_eFLT;

  /* 0x0:AHR_NoReq
     0x1:AHR_Lvl1
     0x2:AHR_Lvl2
     0x3:AHR_Lvl3 */
  eAHR_AdoHptcReq DA_IN_stat_LSSAdoReq_eAHR;

  /* 0x0:CMD_Unavailable
     0x1:CMD_Off
     0x2:CMD_On */
  eCMD_HMIDspCMD DA_IN_stat_TJAICADspCmd_eCMD;

  /* 0x0:FLT_NoError
     0x1:FLT_PerfmDeGrad
     0x2:FLT_TmpUnavabl
     0x3:FLT_ServReq */
  eFLT_SysFltSts DA_IN_stat_TJAICASysFltSts_eFLT;
  unsigned int DA_IN_indx_LDWInhibit7664_u32;
  unsigned int DA_IN_indx_LDWInhibit7665_u32;
  unsigned int DA_IN_indx_LDWInhibit7666_u32;
  unsigned int DA_IN_indx_LDWInhibit7667_u32;
  unsigned int DA_IN_indx_LDWInhibit7668_u32;
  unsigned int DA_IN_indx_LDPInhibit7669_u32;
  unsigned int DA_IN_indx_LDPInhibit766A_u32;
  unsigned int DA_IN_indx_LDPInhibit766B_u32;
  unsigned int DA_IN_indx_LDPInhibit766C_u32;
  unsigned int DA_IN_indx_LDPInhibit766D_u32;
  unsigned int DA_IN_indx_LKAInhibit766E_u32;
  unsigned int DA_IN_indx_LKAInhibit766F_u32;
  unsigned int DA_IN_indx_LKAInhibit7670_u32;
  unsigned int DA_IN_indx_LKAInhibit7671_u32;
  unsigned int DA_IN_indx_LKAInhibit7672_u32;
  unsigned int DA_IN_indx_TJAInhibit7673_u32;
  unsigned int DA_IN_indx_TJAInhibit7674_u32;
  unsigned int DA_IN_indx_TJAInhibit7675_u32;
  unsigned int DA_IN_indx_TJAInhibit7676_u32;
  unsigned int DA_IN_indx_TJAInhibit7677_u32;
  unsigned int DA_IN_indx_TJAInhibit7678_u32;

  /* 0x0:CMD_Unavailable
     0x1:CMD_Off
     0x2:CMD_On */
  eCMD_HMIDspCMD DA_IN_stat_AEBPedDspCmd_eCMD;

  /* 0x0:CMD_Unavailable
     0x1:CMD_Off
     0x2:CMD_On */
  eCMD_HMIDspCMD DA_IN_stat_AEBDspCmd_eCMD;

  /* 0x0:CMD_Unavailable
     0x1:CMD_Off
     0x2:CMD_On */
  eCMD_HMIDspCMD DA_IN_stat_FCWDspCmd_eCMD;
  unsigned char DA_IN_indx_BufSmpSntNum_u8;
  unsigned char DA_IN_indx_BufSmpVldNum_u8;
  unsigned char DA_IN_test_BackUp1_u8;
  unsigned char DA_IN_test_BackUp2_u8;
  unsigned char DA_IN_test_BackUp3_u8;
  unsigned char DA_IN_test_BackUp4_u8;
  float DA_IN_T_SCSBrkToqVal_sg;
  B_ConfgDID_st DA_IN_bus_ConfgDID;
  
  // B3_FuseRdrData DA_IN_bus_FusnObjData;
  
  B_ACCObj01_st DA_IN_bus_ACCObj01;
  B_ACCObj02_st DA_IN_bus_ACCObj02;
  B_ACCObj03_st DA_IN_bus_ACCObj03;
  B_ACCObj04_st DA_IN_bus_ACCObj04;
  B_ACCObj05_st DA_IN_bus_ACCObj05;
  B_ACCObj06_st DA_IN_bus_ACCObj06;
  B_ACCStnObj01_st DA_IN_bus_ACCStnObj01;
  B_ACCStnObj02_st DA_IN_bus_ACCStnObj02;
  B_ACCStnObj03_st DA_IN_bus_ACCStnObj03;
  B_ACCStnObj04_st DA_IN_bus_ACCStnObj04;
  B_ACCStnObj05_st DA_IN_bus_ACCStnObj05;
  B_ACCStnObj06_st DA_IN_bus_ACCStnObj06;
  B_HostL_st DA_IN_bus_HostL;
  B_HostR_st DA_IN_bus_HostR;
  B_NextLL_st DA_IN_bus_NextLL;
  B_NextRR_st DA_IN_bus_NextRR;
  B_DngrObj_st DA_IN_bus_DngrObj;
  B_DngrStnObj_st DA_IN_bus_DngrStnObj;
  B_DngrPed01_st DA_IN_bus_DngrPed01;
  B_DngrPed02_st DA_IN_bus_DngrPed02;
  B_DngrPed03_st DA_IN_bus_DngrPed03;
  B_DngrPed04_st DA_IN_bus_DngrPed04;
  B_DngrPed05_st DA_IN_bus_DngrPed05;
  B_DngrPed06_st DA_IN_bus_DngrPed06;
  B_DngrPed07_st DA_IN_bus_DngrPed07;
  B_DngrPed08_st DA_IN_bus_DngrPed08;
  B_DngrPed09_st DA_IN_bus_DngrPed09;
  B_DngrPed10_st DA_IN_bus_DngrPed10;
  B_CenterLine_st DA_IN_bus_CenterLine;
  B_LeftRoadEdge_st DA_IN_bus_LeftRoadEdge;
  B_RightRoadEdge_st DA_IN_bus_RightRoadEdge;
  B_LeftBarrier_st DA_IN_bus_LeftBarrier;
  B_RightBarrier_st DA_IN_bus_RightBarrier;
  B_SppPolyCoeff_st DA_IN_bus_SppPolyCoeff;
  B_HostRHSP_st DA_IN_bus_HostR_HSP;
  B_HostLHSP_st DA_IN_bus_HostL_HSP;
  B_HostRInd_st DA_IN_bus_HostR_Ind;
  B_HostLInd_st DA_IN_bus_HostL_Ind;

  /* Information from DMS */
  // B_DMSInfo DA_IN_bus_DMSInfo;

  /* Information from EHR */
  // B_EHRInfo DA_IN_bus_EHRInfo;

  /* Information from CEM */
  // B_EnvInfo DA_IN_Bus_EnvInfo;
       
  /* Information from HOD */
  // B_HODInfo DA_IN_bus_HODInfo;
  // B_ACCObj03_st DA_IN_bus_SDAObj01;
  // B_ACCObj04_st DA_IN_bus_SDAObj02;
  // B_ACCObj05_st DA_IN_bus_SDAObj03;
  // B_ACCObj06_st DA_IN_bus_SDAObj04;

  /* Information from 64 Fusion Objs */
  HafFusionOut_COM DA_IN_bus_ObjFusionOutArray[64];
} ADAS_Inputs;

typedef struct {
  unsigned int sec;
  unsigned int nsec;
} HafTime;

typedef struct {
  unsigned int seq;
  unsigned char frameID[20];
  HafTime timestamp;
  HafTime gnssStamp;
} HafHeader;

typedef struct {
  float A0;
  float A1;
  float A2;
  float A3;
} HafTrajParam;

typedef struct {
  unsigned char is_LCCActive_bl;
  HafTrajParam TrajParam;
  unsigned char TRP_Replan_Level;
  unsigned char DA_IN_is_HostLIndChgToLeft_bl;
  unsigned char DA_IN_is_HostRIndChgToRght_bl;
} HafTrajCoeff;

typedef struct {
  unsigned char ACCSystemState;
  unsigned char ACCStopReq;
  float DeltaVelocity;
  float DeltaDist;
  float ACC_V_DrvrSelTrgtSpd_sg;
  float ACC_indx_SMRSts_u8;
  float PLN_OUT_m_STrajError_sg;
  float PLN_OUT_v_SpdTrajCmd_sg;
  float PLN_OUT_a_AccTrajCmd_sg;
  unsigned char PLN_OUT_is_LongTraj_Replan_Level;
  HafLonTrajParam TrajParamLong;
} HafACCCmd;

typedef struct {
  unsigned char advise;
  unsigned char reason[20];
} HafEngageAdvice;

typedef struct {
  unsigned char TurnSignal;
  unsigned char HighBeam;
  unsigned char LowBeam;
  unsigned char Horn;
  unsigned char EmergencyLight;
} HafVehicleSignal;

typedef struct {
  double x;
  double y;
  double z;
} Point3d;


typedef struct {
  float x;
  float y;
  float z;
  float w;
} HafQuaterion;


typedef struct {
  Point3d position;
  HafQuaterion quaternion;
  Point3d eulerAngle;
  Point3d rotationVRF;
  float heading;
} HafPose;

typedef struct {
  HafPose poseWGS;
  HafPose poseLOCAL;
  HafPose poseGCJ02;
} HafPoseWithCovariance;

typedef struct {
  Point3d linearVRF;
  Point3d angularVRF;
} HafTwist;

typedef struct {
  HafTwist twistVRF;
} HafTwistWithCovariance;

typedef struct {
  Point3d linearVRF;
  Point3d angularVRF;
} HafAccel;


typedef struct {
  HafAccel accelVRF;
} HafAccelWithCovariance;


typedef struct {
  HafHeader header;
  unsigned int gpsWeek;
  double gpsSec;
  HafPoseWithCovariance pose;
  HafTwistWithCovariance velocity;
  HafAccelWithCovariance acceleration;
  unsigned char coordinateType;
  unsigned char rtkStatus;
  unsigned char locationState;
  unsigned char isValid;
} HafLocation;


typedef struct {
  double x;
  double y;
  double z;
  double theta;
  float curvature;
  float s;
  float deltaCurvature;
  double deltaX;
  double deltaY;
} HafWayPoint;



typedef struct {
  double speed;
  double acc;
  double timeRelative;
  double deltaAcc;
  double steerAngle;
  HafWayPoint wayPoint;
} HafTrajectoryPoint;


typedef struct {
  unsigned char isEstop;
  unsigned char description[20];
  HafHeader header;
} HafEstop;

typedef struct {
  HafHeader header;
  unsigned int locSeq;
  double trajectoryLength;
  double trajectoryPeriod;
  HafTrajectoryPoint trajectoryPoints[60];
  unsigned int trajectoryValidPointsSize;
  HafEstop estop;
  unsigned char isReplanning;
  unsigned char gear;
  HafHeader routingHeader;
  unsigned int selfLaneId;
  unsigned int trajectoryType;
  unsigned int targetLaneId;
  HafEngageAdvice engageState;
  HafVehicleSignal vehicleSignal;
  unsigned char isValid;
} HafEgoTrajectory;

typedef struct {
  HafHeader header;
  unsigned char ctrlRequestMode;
  float targetSpeed;
  float targetAcc;
  unsigned char parkingBrake;
  unsigned char resetModel;
  unsigned char engineOnOff;
  unsigned char drivingMode;
  HafVehicleSignal vehicleSignal;
  HafEngageAdvice engageAdvice;
  unsigned char isInSafeMode;
} CtrlDecSysCmd;

typedef struct {
  unsigned char isValid;
  HafHeader header;
  unsigned char ctrlRequestMode;
  float throttle;
  float brake;
  float torque;
  float steering_angle_rate;
  float steering_angle;
  float steering_torque;
  unsigned char parking_brake;
  float speed;
  float acceleration;
  unsigned char reset_model;
  unsigned char engine_on_off;
  unsigned char driving_mode;
  unsigned char gear_position;
  HafVehicleSignal vehicle_signal;
  HafEngageAdvice engage_advice;
  unsigned char is_in_safe_mode;
} HafControlCommand;

#endif     
