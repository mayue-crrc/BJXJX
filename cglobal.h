#ifndef CGLOBAL_H
#define CGLOBAL_H

#include <qdebug.h>
#include <assert.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>
#include <qpoint.h>
#include <map>
#include <qmessagebox.h>
//#include <QDataTime>//Q1124.1

#include "clog.h"

using namespace std;

#define DEBUG_MODE

//serial data macro
#if 1
#define USE_RAND_DATA
#endif

#if 0
#define USE_SERIAL_DATA
#endif

#if 0
#define USE_MVB_DATA
#endif

#if 0
#define USE_MVB_DATA_LUM
#endif

#if 0
#define windows_demo
#endif


#define __in
#define __out
#define ASSERT(T)    \
        if(!(T))     \
            QMessageBox::warning(NULL,                                                                              \
                      QString("ASSERT"),                                                                            \
                      QString("An Error at: \nFile:") +__FILE__+ QString("\n Line:") +QString::number(__LINE__),    \
                      QMessageBox::Ok,QMessageBox::Ok);                                                             \
        assert(T);

#define  TRUE   true
#define  FALSE  false
#define  SAFE_DELETE(T) if(T != NULL) {delete T; T = NULL;}

#define QSTR(T) QString::fromUtf8(T)

#define BKSURFACENUM 50///max page number


//用于切换分辨率 1:  800×600  ； 1.28:  1024×768
#define SCREEN_factor 1

//时间因子： 用于页面定时 刷新时间为   200ms：  #define times_n 5
//                                400ms：  #define times_n 2.5
//                                500ms：  #define times_n 2
#define times_n 5


#define SCREEN_W 800
#define SCREEN_H 600


typedef uchar BYTE;
typedef quint16 WORD;

typedef int WPARAM;
typedef int LPARAM;

#define WM_LBUTTONDOWN   0x00000001
#define WM_LBUTTONUP     0x00000002
#define WM_UPDATEPAGE    0x00000003
#define WM_SHOWPAGE      0x00000004

class CGlobal
{
public:
    CGlobal();
public:
    static int m_nCurPageIndex;
};

template<class T>
class Delegrate
{
public:
    typedef void (T::*delegratefunc)();
    Delegrate(){}
    Delegrate(T* delegrateCls, delegratefunc pFunc)
    {
        __this = delegrateCls;
        _delegratefunc = pFunc;
    }
    void execute()
    {
        (__this->*_delegratefunc)();
    }

private:
    T* __this;
    delegratefunc _delegratefunc;
};

template<class T>
class MSGINFO
{
public:
    int nMsgMacro;
    Delegrate<T> delegrate;

    MSGINFO(){}
    MSGINFO(int _nMsgMacro, Delegrate<T> _delegrate)
    {
        nMsgMacro = _nMsgMacro;
        delegrate = _delegrate;
    }
};

template<class T>
struct CONTROLMSG
{
    int m_nCtrlID;
    MSGINFO<T> m_msgInfo;

    CONTROLMSG(){}
    CONTROLMSG(int nCtrlID, MSGINFO<T> msginfo)
    {
        m_nCtrlID = nCtrlID;
        m_msgInfo = msginfo;
    }
};

template<class parentT,class mapT>
class CONNECTMSGMAP
{
public:
    CONNECTMSGMAP(parentT* pthis, int nMsg)
    {
        m_pthis = pthis;
        m_nMsg = nMsg;
    }
    void operator()(mapT it, QPoint pt)const
    {
        int nMsg = -1;
        int nMsgListSize = m_pthis->m_MsgList.size();

        for(int i = 0; i < nMsgListSize; i++)
        {
            nMsg = m_pthis->m_MsgList[i].m_msgInfo.nMsgMacro;
            if(m_nMsg == nMsg
                && m_pthis->m_MsgList[i].m_nCtrlID == it->GetCtrlID()
                && it->GetCtrlRect().contains(pt,true))
            {
                m_pthis->m_MsgList[i].m_msgInfo.delegrate.execute();
                m_pthis->GetParentDlg()->update();
                break;
            }
        }
    }
    void operator()()const
    {
        int nMsg = -1;
        int nMsgListSize = m_pthis->m_MsgList.size();

        for(int i = 0; i < nMsgListSize; i++)
        {
            nMsg = m_pthis->m_MsgList[i].m_msgInfo.nMsgMacro;
            if(m_nMsg == nMsg)
            {
                m_pthis->m_MsgList[i].m_msgInfo.delegrate.execute();
                m_pthis->GetParentDlg()->update();
                break;
            }
        }
    }
private:
    parentT* m_pthis;
    int m_nMsg;
};

// picture index begin with 0
#define PICTURE_INDEX(T) T
// rom index begin with 0
#define ROM_INDEX(T) T

#define DECLEAR_MESSAGE_MAP(T)                                            \
                public:                                                   \
                   vector< CONTROLMSG<T> > m_MsgList;                     \
                   void ConnectEvent(__in QPoint pt,__in int nMsg);       \
                   void ConnectEvent(__in int nMsg);                      \
                   void InitMsgList();

#define CONNECTEVENT(classname)                                            \
                    void classname::ConnectEvent(QPoint pt, int nMsg)      \
                    {                                                      \
                        CONNECTMSGMAP<classname, CControlInterface* > g(this,nMsg);         \
                        map<int,CControlInterface*>::iterator it;           \
                        for(it =m_ctrlmap.begin();it!= m_ctrlmap.end();++it)\
                        {                                                   \
                           g(it->second, pt);                               \
                        }                                                   \
                    }                                                       \
                    void classname::ConnectEvent(int nMsg)                  \
                    {                                                       \
                        CONNECTMSGMAP<classname, CControlInterface* > g(this,nMsg);         \
                        map<int,CControlInterface*>::iterator it;           \
                        g();                                                \
                    }

#define BEGIN_MESSAGE_MAP(classname,baseclass)                             \
                    typedef classname ThisClass;                           \
                    CONNECTEVENT(ThisClass)                                \
                    void classname::InitMsgList(){                         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_MAIN,OnCommonMainButtonDown)                         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_NET, OnCommonNETButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_TCU, OnCommonTCUButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_APS, OnCommonAPSButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_BRAKE,OnCommonBRAKEButtonDown)                       \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_PIS, OnCommonDCDCButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVAC,OnCommonHVACButtonDown)                         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_MAINTAIN, OnCommonMAINTAINButtonDown)                \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVACSTATE,OnCommonHVACSTATEButtonDown)               \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVACPARAMSET,OnCommonHVACPARAMSETButtonDown)         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVACTEST,OnCommonHVACTESTButtonDown        )         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_PARAMSET,OnCommonPARAMSETButtonDown)                 \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_INSTRUCTIONTEST,OnCommonINSTRUCTIONTESTButtonDown)   \
                    ON_LBUTTONDOWN(ID_COM_WARNING,OnCommonCURRENTFAULTLISTButtonDown) \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HISTROYFAULTLIST,OnCommonHISTROYFAULTLISTButtonDown) \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_DOOR,OnCommonDOORButtonDown)                         \
                    ON_LBUTTONDOWN(IDLB_COM_DATE,OnCommonDATEButtonDown)                              \
                    ON_LBUTTONDOWN(IDLB_COM_TIME,OnCommonTIMEButtonDown)                              \
                    ON_LBUTTONDOWN(ID_COM_HELP,OnCommonHELPButtonDown)                                \
                    ON_LBUTTONDOWN(IDLB_COM_NETVOLTAGE,OnSerialDialogClk)


#define END_MESSAGE_MAP()   }

#define ON_CONTROL(msgname,nCtrlID,EventProc)                             \
                    CONTROLMSG<ThisClass>  msgname##nCtrlID##Msg;         \
                    memset(&(msgname##nCtrlID##Msg), '\0', sizeof(CONTROLMSG<ThisClass>)); \
                    (msgname##nCtrlID##Msg).m_nCtrlID = nCtrlID;                           \
                    (msgname##nCtrlID##Msg).m_msgInfo.nMsgMacro = msgname;                 \
                    (msgname##nCtrlID##Msg).m_msgInfo.delegrate = Delegrate<ThisClass>(this,&ThisClass::EventProc);\
                    m_MsgList.push_back(msgname##nCtrlID##Msg);


#define ON_LBUTTONDOWN(nCtrlID,EventProc)                         \
                 ON_CONTROL(WM_LBUTTONDOWN, nCtrlID,EventProc)

#define ON_LBUTTONUP(nCtrlID,EventProc)                           \
                 ON_CONTROL(WM_LBUTTONUP, nCtrlID,EventProc)

#define ON_UPDATE_PAGE()                                       \
                 ON_CONTROL(WM_UPDATEPAGE,0,OnUpdatePage)

#define ON_SHOWPAGE()                                             \
                 ON_CONTROL(WM_SHOWPAGE,0,OnShowPage)

// page manage macro
#define DECLEAR_PAGE_MANAGE()        \
            private:                 \
                void CreateAllPage();

#define IMPLEMENT_PAGE_MANAGE() \
                CreateAllPage();

#define BEGIN_PAGE_MANAGE() void Dialog::CreateAllPage(){

#define ADD_PAGE(classname,rom_index)                               \
    classname* pPage_##classname = new classname();                 \
    (pPage_##classname)->InitPage(SCREEN_W, SCREEN_H, rom_index,this);\
    (pPage_##classname)->DrawByRom(g_PicRom[rom_index]);            \
    (pPage_##classname)->InitMsgList();                             \
    g_PageVec[rom_index] = dynamic_cast<CPage*>(pPage_##classname);

#define END_PAGE_MANAGE() }


//control type  enum
enum CONTROLTYPEENUM
{
 CONTROL_BUTTON  =  0,
 CONTROL_BMPBUTTON,
 CONTROL_EDIT,
 CONTROL_LABEL,
 CONTROL_LISTBOX,
 CONTROL_COUNTDOWN,
 CONTROL_SPEED,
 CONTROL_CAPACITANCE,
 CONTROL_PANTOGRAPHSTATE,
 CONTROL_IMAGE,
 CONTROL_TRIANGLE,
 CONTROL_LINE,
 CONTROL_CIRCLE,
 CONTROL_CHECKBOX,
 CONTROL_SLIDER,
 CONTROL_TRAINDIAGRAM,
 CONTROL_BAR
};

// login type
enum E_LOGIN_TYPE
{
    ENUM_LOGIN_TYPE_DRIVER = 0,
    ENUM_LOGIN_TYPE_MAINTAINER,
    ENUM_LOGIN_TYPE_ANONYMOUS
};

template<class T>
class DELOBJ:public unary_function<T, void>
{
public:
    void operator()(T& it)
    {
        SAFE_DELETE(it);
    }
};

template<class T>
class DELMAPOBJ:public unary_function<T, void>
{
public:
    void operator()(T it)
    {
        SAFE_DELETE(it.second);
    }
};

template<class T>
class CONTROLFINDIF : public binary_function<T,int,bool>
{
public:
    bool operator()(T& it, int nConditonID)const
    {
        if(it->GetCtrlID() == nConditonID)
        {
           return true;
        }

        return false;
    }
};

template<class T>
class FINDKEY:public binary_function<T,int,bool>
{
public:
    bool operator()(T it,int nID)const
    {
        if(it.first == nID)
        {
            return true;
        }
        return false;
    }
};

#define D_RECEIVE_BUFFER_SIZE       420
#define D_SEND_BUFFER_SIZE          40

//#define D_485RECEIVE_BUFFER_SIZE    32 // 20131219 cancel
//#define D_485SEND_BUFFER_SIZE       2 // 20131219 cancel

extern BYTE receiveData[D_RECEIVE_BUFFER_SIZE];
extern BYTE sendData[D_SEND_BUFFER_SIZE];

//extern BYTE rs485sendData[D_485SEND_BUFFER_SIZE]; // 20131219 cancel
extern int sendDataCnt;
extern int revDataCnt;
//********************MVB**************************************
#define D_DATA_BUFFER_SIZE                6000
#define D_SEND_DATA_BUFFER_SIZE           128
#define D_DATA_BUFFER_SIZE_REMOTE         200

extern void GetINIInfo();
extern WORD g_dataBuffer[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_Display[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_R2_1_Master[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_1_Slave[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_1_Master[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_1_Slave[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_2_Master[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_2_Slave[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_3_Master[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_3_Slave[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_4_Master[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_2_4_Slave[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_3_Master[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_3_Slave[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_4_Master[D_DATA_BUFFER_SIZE];
extern WORD g_dataBuffer_R2_4_Slave[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Master[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Slave[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page1[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page2[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page3[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page4[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page5[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page1_Master[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page2_Master[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page3_Master[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page4_Master[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page1_Slave[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page2_Slave[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page3_Slave[D_DATA_BUFFER_SIZE];

extern WORD g_dataBuffer_MVB_Page4_Slave[D_DATA_BUFFER_SIZE];

extern BYTE MVBsendData[D_SEND_DATA_BUFFER_SIZE ];

extern WORD g_dataBuffer_MVB_REMOTE_PAGE[D_DATA_BUFFER_SIZE_REMOTE];

extern WORD Get_Bit_Set(WORD val, int startPoint, int endPoint);

extern  int m_TrainCoupleMode;
extern  int m_TrainCoupleActive;
extern  int m_TestNumber;
extern  int m_TestNum;
extern  int m_SettingMode;
extern  int T1_sendMethod;
extern  int T2_sendMethod;
extern  int set_Temp;
extern  int set_ManCold;
extern  int set_ManWarm;
extern  int set_Mode;
extern  int set_Mode2;
extern  int set_Mode3;
extern  int set_Mode4;
extern  int set_KeyState;
extern  int m_TrainStart;
extern  bool key_MA_State_Old;
extern  bool key_MB_State_Old;
extern  int CCU_Lifesig_Old;
extern  bool CCU_CoummFault_flag;
extern  int ATC_time_temp1;
extern  int ATC_time_temp2;
extern  int ATC_time_temp3;
extern  int ATC_time_temp4;
extern  int ATC_time_temp5;
extern  int ATC_time_temp6;
extern  int set_ModeEff;
extern  int m_Test_DeviceID;
extern  int set_PwdPageID;
extern  QString pw_True_4Purview;
extern  QString pw_True_6Purview;
extern  QString pw_True_6MakeSure;
//***************************BJXJ_
extern WORD Change_BigEen(WORD val);


extern BYTE IDUCT_Year_U8;
extern BYTE IDUCT_Month_U8;
extern BYTE IDUCT_Day_U8;
extern BYTE IDUCT_Hour_U8;
extern BYTE IDUCT_Minute_U8;
extern BYTE IDUCT_Second_U8;
extern BYTE IDUCT_OpenTime_U8;
extern BYTE IDUCT_CloseTime_U8;
extern BYTE IDUCT_ObsDetNumOpen_U8;
extern BYTE IDUCT_ObsDetNumClose_U8;
extern BYTE IDUCT_CloseForce_U8;
extern int IDUCT_DTBDC_U8;
extern int IDUCT_DTBDO_U8;

extern bool IDUCT_TimeUpdate_B1;
extern bool IDUCT_DiameterUpdate_B1;
extern bool IDUCT_DoorUpdate_B1;
extern bool IDUCT_DischargeReq_B1;
extern bool IDUCT_Supercap_START;
extern bool IDUCT_Supercap_STOP;

extern BYTE IDUCT_MemErase_U8;
extern BYTE IDUCT_Chk_A2;
extern int  IDUCT_WheelDiamMa_U16;
extern int  IDUCT_WheelDiamP_U16;
extern int  IDUCT_WheelDiamMb_U16;
extern bool IDUCT_TcuTestRun_B1;
extern bool IDUCT_TcuTestStop_B1;
extern BYTE IDUCT_TestMode_A2;
extern BYTE IDUCT_LifeSignal_U8;
// ADD HMItoHMI data AND time depart flg
extern bool IDUCT_timedepart1_B1;
extern bool IDUCT_timedepart2_B1;
extern int IDUCT_ACCMILE_L_L_U8;
extern int IDUCT_ACCMILE_L_H_U8;
extern int IDUCT_ACCMILE_H_U16;
extern int IDUCT_TRAENERGYCONSUMPTION_L_U16;
extern int IDUCT_TRAENERGYCONSUMPTION_H_U16;

extern int IDUCT_ACUENERGYCONSUMPTION_L_L_U8;
extern int IDUCT_ACUENERGYCONSUMPTION_L_H_U8;
extern int IDUCT_ACUENERGYCONSUMPTION_H_U16;
extern int IDUCT_REGENERGYCONSUMPTION_L_U16;
extern int IDUCT_REGENERGYCONSUMPTION_H_U16;
extern bool IDUCT_ACCDATACALL_B1;
//HVAC 801 802
extern int  IDUHVAC_PWeight_U16;
extern int  IDUHVAC_Speed_U16;
extern BYTE IDUHVAC_SetTempCold_U8;
extern BYTE IDUHVAC_SetTempWarm_U8;
extern bool IDUHVAC_EmegVent_B1;
extern bool IDUHVAC_Vent_B1;
extern bool IDUHVAC_AutoWarm_B1;
extern bool IDUHVAC_AutoCold_B1;
extern bool IDUHVAC_ManWarm_B1;
extern bool IDUHVAC_ManCold_B1;
extern bool IDUHVAC_ExitPre_B1;
extern bool IDUHVAC_EmeVentTestStart_B1;
extern bool IDUHVAC_EmeVentTestStop_B1;
extern bool IDUHVAC_HvacTestStop_B1;
extern bool IDUHVAC_Stop_B1;
extern bool IDUHVAC_WarmTest_B1;
extern bool IDUHVAC_ColdTest_B1;
extern bool IDUHVAC_HvacModeEff_B1;
extern bool IDUHVAC_SetTempEff_B1;
extern bool IDUHVAC_DoorClose_B1;
extern bool IDUHVAC_DoorOpen_B1;
extern BYTE IDUHVAC_Chk_A2;
extern int DATE_valid_timer;
extern int HVAC_valid_timer;
extern int DOOR_valid_timer;
extern int DCDC_valid_timer;
//**************************************************************
extern int g_history_faults_pagenum;
extern int g_current_faults_pagenum;
extern bool isNewFaultsOccurBool;

extern E_LOGIN_TYPE g_login_type, g_fault_recorder_login_type;

extern bool g_communication_ok_flag;

extern int         g_loginIDPWDLen;
extern QString     g_loginID, g_fault_recorder_loginID;
extern QString     g_car1CodeStr;
extern quint16     g_car1IDUint16;

extern QString     g_car2CodeStr;

extern QStringList g_stationNameLine1;
extern QStringList g_stationNameLine2;
extern QStringList g_stationNameLine3;
extern QStringList g_stationNameLine4;
extern QStringList g_stationNameLine5;

extern quint32 g_ParamSet_initAccumulateKms_Quint32;//Byte10,11,12,13

extern uchar g_ParamSet_WheelDiameter_Uchar; //Byte18
extern uchar g_StationSet_DepartureStation_Uchar;	//Byte19
extern uchar g_StationSet_TerminalStation_Uchar;	//Byte20
extern uchar g_StationSet_CurrentStation_Uchar;	        //Byte21
extern quint16 g_ParamSet_CarCode_Uint;	//Byte22,23


extern QString mRound( qreal const fValue, int const bitNumber );

extern BYTE Bit(uint byte, uint bit);

extern quint8 mc1_sgn_lifrsignal;
extern quint8 mc1_ax_lifrsignal;
extern quint8 mc1_di1_lifrsignal;
extern quint8 mc1_di2_lifrsignal;
extern quint8 mc1_do1_lifrsignal;
extern quint8 mc1_do2_lifrsignal;
extern quint8 mc2_sgn_lifrsignal;
extern quint8 mc2_ax_lifrsignal;
extern quint8 mc2_di1_lifrsignal;
extern quint8 mc2_di2_lifrsignal;
extern quint8 mc2_do1_lifrsignal;
extern quint8 mc2_do2_lifrsignal;

extern bool mc1_sgn_onLine;
extern bool mc1_ax_onLine;
extern bool mc1_di1_onLine;
extern bool mc1_di2_onLine;
extern bool mc1_do1_onLine;
extern bool mc1_do2_onLine;
extern bool mc2_sgn_onLine;
extern bool mc2_ax_onLine;
extern bool mc2_di1_onLine;
extern bool mc2_di2_onLine;
extern bool mc2_do1_onLine;
extern bool mc2_do2_onLine;

extern bool optDebugBool;
extern int  g_lightvalue;
extern BYTE test_tempdata[128];
extern WORD TC1_HMI_ini;
extern WORD TC2_HMI_ini;
extern WORD TC1_HMI;
extern WORD TC2_HMI;


extern bool firstSetHvacSomethingCoolBool; // 20130122 add for hvac
extern int writeFileCnt; // for save faults
extern void SetINIInfo(QString keypath, QString str);

extern quint8 gearLevel; // 牵引制动级位 0:NP 1-7:制动 8:EP 11-14:牵引

extern WORD screenUpdateCnt, screenUpdateCntBack;
extern bool butteryContectorBreakCheckedBool; // 20140115 add
///2014-5-6 add iscoupledflag
extern bool IsNetstateCoupledFlag;
extern bool IsAcustateCoupledFlag;
extern bool IsBcustateCoupledFlag;
extern bool IsTcustateCoupledFlag;
extern bool IsDoorstateCoupledFlag;

extern QString UDP_lable;


extern bool g_popup_exist_flg;
extern int error_turnoff_timer;

extern int currentLocoNum;

extern QString currentLocoSide;

extern double  runningDistance;
extern quint64  TcuEnergyConsumption;
extern quint64  AcuEnergyConsumption;
extern quint64  RegEnergyConsumption;
extern int  BCEnergyConsumption;
extern int  TcuEnergyConsumption_Pre;
extern int  AcuEnergyConsumption_Pre;
extern int  RegEnergyConsumption_Pre;
extern int  BCEnergyConsumption_Pre;
extern int  TcuEnergyConsumption_2;
extern int  AcuEnergyConsumption_2;
extern int  RegEnergyConsumption_2;
extern int  BCEnergyConsumption_2;
extern int  TcuEnergyConsumption_Pre_2;
extern int  AcuEnergyConsumption_Pre_2;
extern int  RegEnergyConsumption_Pre_2;
extern int  BCEnergyConsumption_Pre_2;
extern int  TcuEnergyConsumption_3;
extern int  AcuEnergyConsumption_3;
extern int  RegEnergyConsumption_3;
extern int  BCEnergyConsumption_3;
extern int  TcuEnergyConsumption_Pre_3;
extern int  AcuEnergyConsumption_Pre_3;
extern int  RegEnergyConsumption_Pre_3;
extern int  BCEnergyConsumption_Pre_3;
extern int  TcuEnergyConsumption_4;
extern int  AcuEnergyConsumption_4;
extern int  RegEnergyConsumption_4;
extern int  BCEnergyConsumption_4;
extern int  TcuEnergyConsumption_Pre_4;
extern int  AcuEnergyConsumption_Pre_4;
extern int  RegEnergyConsumption_Pre_4;
extern int  BCEnergyConsumption_Pre_4;
extern int m_saveCounter;
extern double m_AccDistance_init;
extern double m_TcuEnergyConsumption_init;
extern double m_AcuEnergyConsumption_init;
extern double m_RegEnergyConsumption_init;
//extern QString currentEngineCode;

//extern QString currentTm1Code;

//extern QString currentTm2Code;

//extern QString currentTm3Code;

//extern QString currentTm4Code;

//extern QString currentAuxiliaryGeneratorCode;

//extern QString currentTb1MotorCode;

//extern QString currentTb2MotorCode;

//extern QString currentAirCompressorCode;

//extern QString currentCoolingFanCode;

//extern QString currentCoolingFanInverterCode;

//extern QString currentAirCompressorInverterCode;

//extern QString currentChargerCode;

//extern QString currentBrakeCabinetCode;

//extern QString currentChopperCode;

//extern int vigilance;

//extern int vigilanceSpeed;

extern void SetSystemTime( int year, int mon, int day, int hour, int minute, int second );



#endif // CGLOBAL_H
