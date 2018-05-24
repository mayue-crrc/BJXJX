#include "cglobal.h"
#include "cpage.h"
#include "databuffer.h"
BYTE receiveData[D_RECEIVE_BUFFER_SIZE];
BYTE sendData[D_SEND_BUFFER_SIZE];

//BYTE rs485sendData[D_485SEND_BUFFER_SIZE]; // 20131219 cancel


//********************************MVB*********************************


WORD g_dataBuffer[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_Display[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_R2_1_Master[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_1_Slave[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_R2_2_1_Master[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_2_1_Slave[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_2_2_Master[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_2_2_Slave[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_2_3_Master[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_2_3_Slave[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_2_4_Master[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_2_4_Slave[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_R2_3_Master[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_3_Slave[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_4_Master[D_DATA_BUFFER_SIZE];
WORD g_dataBuffer_R2_4_Slave[D_DATA_BUFFER_SIZE];


WORD g_dataBuffer_MVB_Master[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Slave[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page1[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page2[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page3[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page4[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page5[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page1_Master[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page2_Master[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page3_Master[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page4_Master[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page1_Slave[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page2_Slave[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page3_Slave[D_DATA_BUFFER_SIZE];

WORD g_dataBuffer_MVB_Page4_Slave[D_DATA_BUFFER_SIZE];



//WORD g_dataBuffer_temp[];

BYTE MVBsendData[D_SEND_DATA_BUFFER_SIZE ];

QString UDP_lable = "";

int m_TrainCoupleMode = 0;
int m_TrainCoupleActive = 0;
int m_TestNumber = 0;
int m_TestNum = 2;
int m_SettingMode = 0;
int T1_sendMethod = 0;
int T2_sendMethod = 0;
int m_TrainStart = 0;
bool key_MA_State_Old = false;
bool key_MB_State_Old = false;
int CCU_Lifesig_Old = 0;
bool CCU_CoummFault_flag = false;
int ATC_time_temp1 = 0;
int ATC_time_temp2 = 0;
int ATC_time_temp3 = 0;
int ATC_time_temp4 = 0;
int ATC_time_temp5 = 0;
int ATC_time_temp6 = 0;
int set_ModeEff = 0;
int set_PwdPageID = 0;
BYTE IDUCT_Year_U8 = 0;
BYTE IDUCT_Month_U8 = 0;
BYTE IDUCT_Day_U8 = 0;
BYTE IDUCT_Hour_U8 = 0;
BYTE IDUCT_Minute_U8 = 0;
BYTE IDUCT_Second_U8 = 0;
BYTE IDUCT_OpenTime_U8 = 0;
BYTE IDUCT_CloseTime_U8 = 0;
BYTE IDUCT_ObsDetNumOpen_U8 = 0;
BYTE IDUCT_ObsDetNumClose_U8 = 0;
BYTE IDUCT_CloseForce_U8 = 0;
int IDUCT_DTBDC_U8 = 0;
int IDUCT_DTBDO_U8 = 0;

bool IDUCT_TimeUpdate_B1 = false;
bool IDUCT_DiameterUpdate_B1 = false;
bool IDUCT_DoorUpdate_B1 = false;
bool IDUCT_DischargeReq_B1 = false;
bool IDUCT_Supercap_START = false;
bool IDUCT_Supercap_STOP = false;

BYTE IDUCT_MemErase_U8 = 0;
BYTE IDUCT_Chk_A2 = 0;
int  IDUCT_WheelDiamMa_U16 = 0;
int  IDUCT_WheelDiamP_U16 = 0;
int  IDUCT_WheelDiamMb_U16 = 0;
bool IDUCT_TcuTestRun_B1 = false;
bool IDUCT_TcuTestStop_B1 = false;
BYTE IDUCT_TestMode_A2 = 0;
BYTE IDUCT_LifeSignal_U8 = 0;

int IDUCT_ACCMILE_L_L_U8 = 0;
int IDUCT_ACCMILE_L_H_U8 = 0;
int IDUCT_ACCMILE_H_U16 = 0;
int IDUCT_TRAENERGYCONSUMPTION_L_U16 = 0;
int IDUCT_TRAENERGYCONSUMPTION_H_U16 = 0;
int IDUCT_ACUENERGYCONSUMPTION_L_L_U8 = 0;
int IDUCT_ACUENERGYCONSUMPTION_L_H_U8 = 0;
int IDUCT_ACUENERGYCONSUMPTION_H_U16 = 0;
int IDUCT_REGENERGYCONSUMPTION_L_U16 = 0;
int IDUCT_REGENERGYCONSUMPTION_H_U16 = 0;
bool IDUCT_timedepart1_B1 = false;
bool IDUCT_timedepart2_B1 = false;
bool IDUCT_ACCDATACALL_B1 = false;

//HVAC 801 802
int  IDUHVAC_PWeight_U16 = 0;
int  IDUHVAC_Speed_U16 = 0;
BYTE IDUHVAC_SetTempCold_U8 = 0;
BYTE IDUHVAC_SetTempWarm_U8 = 0;
bool IDUHVAC_EmegVent_B1 = false;
bool IDUHVAC_Vent_B1 = false;
bool IDUHVAC_AutoWarm_B1 = false;
bool IDUHVAC_AutoCold_B1 = false;
bool IDUHVAC_ManWarm_B1 = false;
bool IDUHVAC_ManCold_B1 = false;
bool IDUHVAC_ExitPre_B1 = false;
bool IDUHVAC_EmeVentTestStart_B1 = false;
bool IDUHVAC_EmeVentTestStop_B1 = false;
bool IDUHVAC_HvacTestStop_B1 = false;
bool IDUHVAC_Stop_B1 = false;
bool IDUHVAC_WarmTest_B1 = false;
bool IDUHVAC_ColdTest_B1 = false;
bool IDUHVAC_HvacModeEff_B1 = false;
bool IDUHVAC_SetTempEff_B1 = false;
bool IDUHVAC_DoorClose_B1 = false;
bool IDUHVAC_DoorOpen_B1 = false;
BYTE IDUHVAC_Chk_A2 = 0;
int HVAC_valid_timer = 0;
int DOOR_valid_timer = 0;
int DATE_valid_timer = 0;
int DCDC_valid_timer = 0;
int set_Temp = 0;
int set_ManCold = 0;
int set_ManWarm = 0;
int set_Mode = 0;
int set_Mode2 = 0;
int set_Mode3 = 0;
int set_Mode4 = 0;
int set_KeyState = 0;
int m_Test_DeviceID = 0;
QString pw_True_4Purview = "";
QString pw_True_6Purview = "";
QString pw_True_6MakeSure = "";
//*********************************************************************
WORD Change_BigEen(WORD val)
{
    uchar tmpChar1,tmpChar2;
    WORD temp_finish;
    tmpChar1=val/256;
    tmpChar2=val%256;
    temp_finish=tmpChar2*256+tmpChar1;
    return  temp_finish;
}

int sendDataCnt = 0;
int revDataCnt = 0;

int g_lightvalue = 7;

int g_history_faults_pagenum = 1;
int g_current_faults_pagenum = 1;
bool isNewFaultsOccurBool =  false;

E_LOGIN_TYPE g_login_type = ENUM_LOGIN_TYPE_DRIVER;
E_LOGIN_TYPE g_fault_recorder_login_type = ENUM_LOGIN_TYPE_ANONYMOUS;

bool g_communication_ok_flag = false;
int  g_loginIDPWDLen = 4;

QString     g_loginID = "0"; //"0"; //9527 //cancel test use 20120927
QString     g_fault_recorder_loginID = "0";
QString     g_car1CodeStr = "";
quint16     g_car1IDUint16 = 0;

QString g_car2CodeStr = "000";

QStringList g_stationNameLine1;
QStringList g_stationNameLine2;
QStringList g_stationNameLine3;
QStringList g_stationNameLine4;
QStringList g_stationNameLine5;

quint32  g_ParamSet_initAccumulateKms_Quint32 = 0x00000000;//Byte10,11,12,13


uchar    g_ParamSet_WheelDiameter_Uchar = 80; //Byte18
uchar    g_StationSet_DepartureStation_Uchar = 1;	//Byte19
uchar    g_StationSet_TerminalStation_Uchar = 1;	//Byte20
uchar    g_StationSet_CurrentStation_Uchar = 1;         //Byte21
quint16  g_ParamSet_CarCode_Uint = 0;	//Byte22,23
bool g_Vehicle_Codeset_enbale = false;

quint8 mc1_sgn_lifrsignal = 0;
quint8 mc1_ax_lifrsignal = 0;
quint8 mc1_di1_lifrsignal = 0;
quint8 mc1_di2_lifrsignal = 0;
quint8 mc1_do1_lifrsignal = 0;
quint8 mc1_do2_lifrsignal = 0;
quint8 mc2_sgn_lifrsignal = 0;
quint8 mc2_ax_lifrsignal = 0;
quint8 mc2_di1_lifrsignal = 0;
quint8 mc2_di2_lifrsignal = 0;
quint8 mc2_do1_lifrsignal = 0;
quint8 mc2_do2_lifrsignal = 0;
bool mc1_sgn_onLine = false;
bool mc1_ax_onLine = false;
bool mc1_di1_onLine = false;
bool mc1_di2_onLine = false;
bool mc1_do1_onLine = false;
bool mc1_do2_onLine = false;
bool mc2_sgn_onLine = false;
bool mc2_ax_onLine = false;
bool mc2_di1_onLine = false;
bool mc2_di2_onLine = false;
bool mc2_do1_onLine = false;
bool mc2_do2_onLine = false;

BYTE test_tempdata[128];
WORD TC1_HMI_ini = 5;
WORD TC2_HMI_ini = 5;
WORD TC1_HMI = 5;
WORD TC2_HMI = 5;

bool firstSetHvacSomethingCoolBool = false; // 20130122 add for hvac
int writeFileCnt = 0; // for save faults
quint8 gearLevel = 0; // 牵引制动级位 0:NP 1-7:制动 8:EP 11-14:牵引

WORD screenUpdateCnt = 1;
WORD screenUpdateCntBack = 0;

///add init coupledflag
bool IsNetstateCoupledFlag = 0;
bool IsAcustateCoupledFlag = 0;
bool IsBcustateCoupledFlag = 0;
bool IsTcustateCoupledFlag = 0;
bool IsDoorstateCoupledFlag = 0;

bool butteryContectorBreakCheckedBool = false; // 20140115 add 

bool g_popup_exist_flg = false;  // 20150507 add
int error_turnoff_timer = 0;


int currentLocoNum= 0;

QString currentLocoSide="0";

double  runningDistance= 0;
quint64  TcuEnergyConsumption = 0;
quint64  AcuEnergyConsumption = 0;
quint64  RegEnergyConsumption = 0;
int  BCEnergyConsumption = 0;
int  TcuEnergyConsumption_Pre = 0;
int  AcuEnergyConsumption_Pre = 0;
int  RegEnergyConsumption_Pre = 0;
int  BCEnergyConsumption_Pre = 0;
int  TcuEnergyConsumption_2 = 0;
int  AcuEnergyConsumption_2 = 0;
int  RegEnergyConsumption_2 = 0;
int  BCEnergyConsumption_2 = 0;
int  TcuEnergyConsumption_Pre_2 = 0;
int  AcuEnergyConsumption_Pre_2 = 0;
int  RegEnergyConsumption_Pre_2 = 0;
int  BCEnergyConsumption_Pre_2 = 0;
int  TcuEnergyConsumption_3 = 0;
int  AcuEnergyConsumption_3 = 0;
int  RegEnergyConsumption_3 = 0;
int  BCEnergyConsumption_3 = 0;
int  TcuEnergyConsumption_Pre_3 = 0;
int  AcuEnergyConsumption_Pre_3 = 0;
int  RegEnergyConsumption_Pre_3 = 0;
int  BCEnergyConsumption_Pre_3 = 0;
int  TcuEnergyConsumption_4 = 0;
int  AcuEnergyConsumption_4 = 0;
int  RegEnergyConsumption_4 = 0;
int  BCEnergyConsumption_4 = 0;
int  TcuEnergyConsumption_Pre_4 = 0;
int  AcuEnergyConsumption_Pre_4 = 0;
int  RegEnergyConsumption_Pre_4 = 0;
int  BCEnergyConsumption_Pre_4 = 0;
int m_saveCounter = 100;
double m_AccDistance_init = 0;
double m_TcuEnergyConsumption_init = 0;
double m_AcuEnergyConsumption_init = 0;
double m_RegEnergyConsumption_init = 0;
//QString currentEngineCode="0";

//QString currentTm1Code="0";

//QString currentTm2Code="0";

//QString currentTm3Code="0";

//QString currentTm4Code="0";

//QString currentAuxiliaryGeneratorCode="0";

//QString currentTb1MotorCode="0";

//QString currentTb2MotorCode="0";

//QString currentAirCompressorCode="0";

//QString currentCoolingFanCode="0";

//QString currentCoolingFanInverterCode="0";

//QString currentAirCompressorInverterCode="0";

//QString currentChargerCode="0";

//QString currentBrakeCabinetCode="0";

//QString currentChopperCode="0";

//int vigilance= 0;

//int vigilanceSpeed= 0;


QString mRound( qreal const fValue, int const bitNumber )
{
    QString resultStr = "";
    qreal value = qAbs( fValue );
    quint32 remainder;
    QVariant var;
    if( bitNumber < 0 )
        return "";

    if( fValue >= 0 )
        resultStr = "";
    else
        resultStr = "-";

    switch( bitNumber )
    {
    case 0:
        remainder = ( quint32 )( value * 10 ) - ( quint32 )value * 10;
        if( remainder > 4)
            var = ( quint32 )value + 1;
        else
            var = ( quint32 )value;
        resultStr = resultStr.append( var.toString() );
        break;
    case 1:
        remainder = ( quint32 )( value * 100 ) - ( quint32 )( value * 10 ) * 10;
        if( remainder > 4 )
            remainder = ( quint32 )( value * 10 )  + 1;
        else
            remainder = ( quint32 )( value * 10 );
        var = remainder / 10;
        resultStr = resultStr.append( var.toString() ) + ".";
        var = remainder % 10;
        resultStr = resultStr.append( var.toString() );
        break;
    case 2:
        remainder = ( quint32 )( value * 1000 ) - ( quint32 )( value * 100 ) * 10;
        if( remainder > 4 )
            remainder = ( quint32 )( value * 100 )  + 1;
        else
            remainder = ( quint32 )( value * 100 );
        var = remainder / 100;
        resultStr = resultStr.append( var.toString() ) + ".";
        remainder = remainder % 100;
        var = remainder;
        if(remainder<10)
            resultStr = resultStr.append( "0" + var.toString() );
        else
            resultStr = resultStr.append( var.toString() );
        break;
     default: // bitNumber = 3
         remainder = ( quint32 )( value * 10000 ) - ( quint32 )( value * 1000 ) * 10;
         if( remainder > 4 )
             remainder = ( quint32 )( value * 1000 )  + 1;
         else
             remainder = ( quint32 )( value * 1000 );
         var = remainder / 1000;
         resultStr = resultStr.append( var.toString() ) + ".";
         remainder = remainder % 1000;
         var = remainder;
         if(remainder<10)
            resultStr = resultStr.append( "00" + var.toString() );
         else if(remainder<100)
             resultStr = resultStr.append( "0" + var.toString() );
         else
             resultStr = resultStr.append( var.toString() );
         break;
        }//end

    return resultStr;
}

BYTE Bit(uint byte, uint bit)
{
    ASSERT((byte) < D_RECEIVE_BUFFER_SIZE);
    ASSERT(bit <= 7);
    BYTE flag = 0x01;
    flag = (flag << bit);
    return (receiveData[byte] & flag);
}
void SetINIInfo(QString keypath, QString str)
{
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );

    if ( inifile.exists( fileName ) )
    {
        if ( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings settings( fileName, QSettings::IniFormat );
            settings.setIniCodec(QTextCodec::codecForName("utf-8"));
            settings.setValue(keypath, str);
        }
    }
}

WORD Get_Bit_Set(WORD val, int startPoint, int endPoint)
{
    int bit[]=
    {
//        bit0,
//        bit1,
//        bit2,
//        bit3,
//        bit4,
//        bit5,
//        bit6,
//        bit7,
//        bit8,
//        bit9,
//        bit10,
//        bit11,
//        bit12,
//        bit13,
//        bit14,
//        bit15,
    };
    uchar tmpPoint;
    if(startPoint>endPoint)
    {
       tmpPoint=startPoint;
       startPoint = endPoint;
       endPoint = tmpPoint;
    }
    int j;
    uchar tmpChar;
    uchar tmp;
    tmp = 0;
    for (j=startPoint;j<=endPoint;j++)
    {
       tmpChar= val & bit[j];
       tmp = tmp+tmpChar;
    }
    return tmp;
}

void GetINIInfo()
{
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );
}

CGlobal::CGlobal()
{
}

//int  CGlobal::m_nCurPageIndex = PICTURE_INDEX(PAGE_ROM_INDEX_MAIN); // test use 20120927
int  CGlobal::m_nCurPageIndex = PICTURE_INDEX(PAGE_ROM_INDEX_MAIN);

void SetSystemTime(  int year, int mon, int day, int hour, int minute, int second )
{
    #ifndef windows_demo
//    time_t t;
//    struct tm nowtime;
//    nowtime.tm_sec = second; // second
//    nowtime.tm_min = minute; ///*       Minutes.[0-59]
//    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
//    nowtime.tm_mday = day;   ///*       Day.[1-31]
//    nowtime.tm_mon = mon - 1; ///*       Month.   [0-11]
//    nowtime.tm_year = year - 1900; ///*       Year-       1900.
//    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
//    t = mktime(&nowtime);
//    stime(&t);

    QDate date( year, mon, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    QString hwclockStr = "hwclock --set --date \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);
    #endif  //windows_demo


}
