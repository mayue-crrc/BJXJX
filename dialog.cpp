#include "dialog.h"
#include "ui_dialog.h"
#include "QDebug"
#include "databuffer.h"

#include "QDebug"
//const quint32 BACKLIGHTTIME = 180; //second
int i = 0;
vector<CPage*>  g_PageVec(BKSURFACENUM);

BEGIN_PAGE_MANAGE()
        ADD_PAGE(CSysLoginPage,                ROM_INDEX(PAGE_ROM_INDEX_SYSLOGIN))
        ADD_PAGE(CMainPage,                    ROM_INDEX(PAGE_ROM_INDEX_MAIN))
        ADD_PAGE(CNetStatePage,                ROM_INDEX(PAGE_ROM_INDEX_NETSTATE))
        ADD_PAGE(CTcuStatePage,                ROM_INDEX(PAGE_ROM_INDEX_TCUSTATE))
        ADD_PAGE(CAcuStatePage,                ROM_INDEX(PAGE_ROM_INDEX_ACUSTATE))
        ADD_PAGE(CBcuStatePage,                ROM_INDEX(PAGE_ROM_INDEX_BCUSTATE))
        ADD_PAGE(CDcdcStatePage,               ROM_INDEX(PAGE_ROM_INDEX_DCDCSTATE))
        ADD_PAGE(CPisPage,                     ROM_INDEX(PAGE_ROM_INDEX_PIS))
        ADD_PAGE(CStartStationSetPage,         ROM_INDEX(PAGE_ROM_INDEX_STARTSTATIONSET))
        ADD_PAGE(CEndStationSetPage,           ROM_INDEX(PAGE_ROM_INDEX_ENDSTATIONSET))
        //ADD_PAGE(CCurrentStationSetPage,       ROM_INDEX(PAGE_ROM_INDEX_CURRENTSTATIONSET))
        ADD_PAGE(CHvacStatePage,               ROM_INDEX(PAGE_ROM_INDEX_HVACSTATE))
        ADD_PAGE(CHvacParameterSetPage,        ROM_INDEX(PAGE_ROM_INDEX_HVACPARAMETERSET))
        ADD_PAGE(CHvacTestPage,                ROM_INDEX(PAGE_ROM_INDEX_HVACTEST))
        ADD_PAGE(CParameterSetPage,            ROM_INDEX(PAGE_ROM_INDEX_PARAMETERSET))
        ADD_PAGE(CSysTimeSetPage,              ROM_INDEX(PAGE_ROM_INDEX_SYSTIMESET))
        ADD_PAGE(CCarCodeSetPage,              ROM_INDEX(PAGE_ROM_INDEX_CARCODESET))
        ADD_PAGE(CWheelDiameterSetPage,        ROM_INDEX(PAGE_ROM_INDEX_WHEELDIAMETERSET))
        ADD_PAGE(CLuminanceSetPage,            ROM_INDEX(PAGE_ROM_INDEX_LUMINANCESET))
        ADD_PAGE(CDriverCodeManagePage,        ROM_INDEX(PAGE_ROM_INDEX_DRIVERCODEMANAGE))
        ADD_PAGE(CVersionPage,                 ROM_INDEX(PAGE_ROM_INDEX_VERSION))
        ADD_PAGE(CDriverCodeListPage,          ROM_INDEX(PAGE_ROM_INDEX_DRIVERCODELIST))
        ADD_PAGE(CMaintainerManagePage,        ROM_INDEX(PAGE_ROM_INDEX_MAINTAINERMANAGE))
        ADD_PAGE(CMaintainerIDListPage,        ROM_INDEX(PAGE_ROM_INDEX_MAINTAINERLIST))
        ADD_PAGE(CModifyAccumulateMilePage,    ROM_INDEX(PAGE_ROM_INDEX_MODIFYACCUMULATEMILE))
        ADD_PAGE(CInstructionTestPage,         ROM_INDEX(PAGE_ROM_INDEX_INSTRUCTIONTEST))
        ADD_PAGE(CCurrentFaultListPage,        ROM_INDEX(PAGE_ROM_INDEX_CURRENTFAULTLIST))
        ADD_PAGE(CHistoryFaultListPage,        ROM_INDEX(PAGE_ROM_INDEX_HISTORYFAULTLIST))
        ADD_PAGE(CDeviceSelectPage,            ROM_INDEX(PAGE_ROM_INDEX_DEVICESELECT))
        ADD_PAGE(CGradeSelectPage,             ROM_INDEX(PAGE_ROM_INDEX_GRADESELECT))
        ADD_PAGE(CStartTimeSetPage,            ROM_INDEX(PAGE_ROM_INDEX_STARTTIMESET))
        ADD_PAGE(CEndTimeSetPage,              ROM_INDEX(PAGE_ROM_INDEX_ENDTIMESET))
        ADD_PAGE(CDoorPage,                    ROM_INDEX(PAGE_ROM_INDEX_DOOR))
        ADD_PAGE(CLocalIOPage,                 ROM_INDEX(PAGE_ROM_INDEX_LOCALIO))
        ADD_PAGE(CMainControlCmdPage,          ROM_INDEX(PAGE_ROM_INDEX_MAINCONTROLCMD))
        ADD_PAGE(cnetstatepagecoupled,          ROM_INDEX(PAGE_ROM_INDEX_NETSTATECOUPLED))
        ADD_PAGE(CAcuStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED))
        ADD_PAGE(CTcuStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_TCUSTATEPAGECOUPLED))
        ADD_PAGE(CBcuStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_BCUSTATEPAGECOUPLED))
        ADD_PAGE(CHvacStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_HVACSTATEPAGECOUPLED))
        ADD_PAGE(CSerialDataPage,              ROM_INDEX(PAGE_ROM_INDEX_SERIALDATA))

        ADD_PAGE(CMyaddpage,          ROM_INDEX(PAGE_ROM_INDEX_MYTEST))
        ADD_PAGE(CUdpDataPage1,         ROM_INDEX(PAGE_ROM_INDEX_UDPDATAPAGE1))
        ADD_PAGE(CRefreshTimePage,      ROM_INDEX(PAGE_ROM_INDEX_REFRESHTIME))
        ADD_PAGE(cdcdcstatepagecoupled,               ROM_INDEX(PAGE_ROM_INDEX_DCDCSTATECOUPLED))
        ADD_PAGE(c_debugriomdetialpage,               ROM_INDEX( PAGE_ROM_INDEX_DEBUGRIOMDETIALPAGE))
        ADD_PAGE(CFaultAlarmPage,              ROM_INDEX(PAGE_ROM_INDEX_FAULTALARM))
        ADD_PAGE(CPagePasswordset,               ROM_INDEX( PAGE_PASSWORD_SET))
        END_PAGE_MANAGE()

        Dialog::Dialog(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::Dialog),
        m_serialThread232(NULL),
//        m_serialThread485(NULL),// 20131219 cancel
        m_nRs232RevErrorNum(0),
//        m_nRs485RevErrorNum(0),// 20131219 cancel
        //m_nPreCLKtime(0),
        isOpen(false)

{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    QDesktopWidget* pDesktop = QApplication::desktop();
    int nScrW = pDesktop->width(), nScrH = pDesktop->height();
    if(nScrW == SCREEN_W && nScrH == SCREEN_H)
    {
        this->showFullScreen();
    }
    else
    {
        this->setFixedSize(SCREEN_W, SCREEN_H);
        int x = (nScrW - this->width())/2;
        int y = (nScrH - this->height())/2;
        this->move(x,y);
    }
    //iAdjustSystemTimeCnt = 0;
    oldADJUSTTIME_ENABLE_BOOL = false;
    //init global
    globalDataInit();
    getDefaultParameter();
#ifndef USE_RAND_DATA
//    HMI_Initial_Set();
//    SetWarningTemperature();
//    BackLightCtrl(1);
#endif


    H8::initH8("/dev/ttyUSB_SC");

#ifdef USE_MVB_DATA
    m_mvbthread = new MvbThread;
    m_mvbthread ->render();
    //HMI_Initial_Set();
#endif

    //rand seed
    #ifndef windows_demo
    srand((unsigned int)time(NULL));
    #endif  //windows_demo
    //system.ini
//if(LCUCCU_3_MA_DI_2_CH18_B1||LCUCCU_3_MB_DI_2_CH18_B1)
  //  {
    //T1_sendMethod = 20;
   //}
    //ReadFaultsHistory();

    //init page
    IMPLEMENT_PAGE_MANAGE()
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ChangePage(CGlobal::m_nCurPageIndex);//modify 20120927 PAGE_ROM_INDEX_SYSLOGIN

#ifdef USE_SERIAL_DATA
    //init serial thread232
    m_serialThread232 = new SerialThread232();
    m_serialThread232->render();
    connect(m_serialThread232, SIGNAL(SendReadData(const QByteArray&, int)),
            this, SLOT(get232RevDataSlot(const QByteArray&, int)));
// 20131219 cancel
    //init serial thread485
//    m_serialThread485 = new SerialThread485();
//    m_serialThread485->render();
//    connect(m_serialThread485, SIGNAL(SendReadData(const QByteArray&, int)),
//            this, SLOT(get485RevDataSlot(const QByteArray&, int)));
#endif

    settingDataBase = PSettingDataBase::getPSettingDataBaseInstance();


    //update serial data
    connect(&Time_Init_Timer,SIGNAL(timeout()),this,SLOT(InitTime()));//上电初始化为CCU校时，校时仅一次，
    Time_Init_Timer.start(1000);
    connect(&HVAC_Start_Timer,SIGNAL(timeout()),this,SLOT(StartHVAC()));//上电后，400ms周期延时等待，当任意一端钥匙激活，则执行一次空调状态同步，此后再不执行。
    HVAC_Start_Timer.start(400);
    connect(&UpdateDataTimer,SIGNAL(timeout()),this,SLOT(OnUpdateData()));//代码周期基础循环，400ms
    UpdateDataTimer.start(400); // refresh screen
    //connect(&recorderThread,SIGNAL(restartScreenUptateSignal()),this,SLOT(restartScreenUptateSlot()));
    //recorderThread.render();
    connect(&timer_settingHVAC,SIGNAL(timeout()),this,SLOT(InitHVACSet()));//程序循环周期中，执行空调同步逻辑的定时器
    //connect(&Time_Update_Timer,SIGNAL(timeout()),this,SLOT(OnUpdateDate()));

    connect(&riomBoardOnLineTestTimer,SIGNAL(timeout()),this,SLOT(testRiomBoardOnLineSlot()));
    riomBoardOnLineTestTimer.start(2000);
    connect(&Device_Online_Timer,SIGNAL(timeout()),this,SLOT(OnUpdateDeviceOnline()));//检测CCU生命信号 400ms周期
    Device_Online_Timer.start(400);

    oldMAIN_INNOPOWERAREA_BOOL = false;
    oldMAIN_INLARGENOPOWERAREA_BOOL = false;
    oldMAIN_OUTNOPOWERAREA_BOOL = false;
    oldMAIN_CURRENTINLARGENOPOWERAREA_BOOL = false;
    m_FaultDlgFlag = false;
    timer5scount = 0;
    m_oldCCUtimeflg = false;

    // init distance and consumption
    runningDistance = m_AccDistance_init = settingDataBase->getRunningDistance();
    m_TcuEnergyConsumption_init = settingDataBase->getTcuEnergyConsumption();
    m_AcuEnergyConsumption_init = settingDataBase->getAcuEnergyConsumption();
    m_RegEnergyConsumption_init = settingDataBase->getRegEnergyConsumption();
    if(bool(TC1_HMI == 1) && bool (TC2_HMI == 0))
    {
        settingDataBase->setLocoASide();
    }else if(bool(TC1_HMI == 0) && bool (TC2_HMI == 1))
    {
        settingDataBase->setLocoBSide();
    }
}

Dialog::~Dialog()
{
    SAFE_DELETE(m_serialThread232);
//    SAFE_DELETE(m_serialThread485);// 20131219 cancel
    for_each(g_PageVec.begin(), g_PageVec.end(), DELOBJ<CPage*>());
    delete ui;
}

// call this function when serial have data.
void Dialog::get232RevDataSlot( const QByteArray &data, int length )
{
    if(length == 0)
    {
        m_nRs232RevErrorNum++;
        if(m_nRs232RevErrorNum >= 4)
        {
//            g_communication_ok_flag = false;
////            m_serialThread485->setPermitWork(true);
//            if(m_nRs232RevErrorNum>50000)
//                m_nRs232RevErrorNum = 4;
////            if(m_nRs485RevErrorNum>=4)
////            {
//                if( !m_CriticalWarningDlg.GetComBreakFlag() )
//                {
//                    m_CriticalWarningDlg.SetComBreakFlag( true );
//                    ClearAllCurrentFaults();
//                    //m_CriticalWarningDlg.SetFaultText("");
//                    m_CriticalWarningDlg.SetWarningStr(QSTR("Communication\nDisconnected"));
//                    m_CriticalWarningDlg.setGeometry(this->x(),this->y(),this->width(),this->height());
//                    m_CriticalWarningDlg.SetWarningLabel();
//                    m_CriticalWarningDlg.show();
 //               }
////            }
        }
        return;
    }
    else
    {
        g_communication_ok_flag = true;
        m_CriticalWarningDlg.SetComBreakFlag( false );
//        if (DOUBLECABACTIVED_BOOL)
//        {
//            if( !m_CriticalWarningDlg.GetComBreakFlag() )
//            {
//                m_CriticalWarningDlg.SetWarningStr(QSTR("两端司机室激活"));
//                m_CriticalWarningDlg.setGeometry(this->x()+int((this->width()-500)/2),this->y()+int((this->height()-120)/2),500,120);
//                m_CriticalWarningDlg.SetWarningLabel();
//                m_CriticalWarningDlg.show();
//            }
//        }
//        else
//        {
            if(m_CriticalWarningDlg.isVisible())
            {
                m_CriticalWarningDlg.hide();
            }
//        }

//        m_serialThread485->setPermitWork(false);// 20131219 cancel
//        m_nRs485RevErrorNum = 0;// 20131219 cancel
        m_nRs232RevErrorNum = 0;

    }
//分成2个包接受数据
    uchar tmpChar[length];
    for( int i=0; i<length; i++ )
        tmpChar[i] = data.at(i);

    unsigned short CRC16;
    if(length==225)
    {
        if( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xDC ) )
        {
            CRC16 = m_serialThread232->GetCRC16( tmpChar, length-2  );
            uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
            uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
            if( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] )
            {
                // exchange hibyte and lobyte
                for( int i=0; i<((length-5)/2); i++ )
                {
                    receiveData[i*2] = tmpChar[3+i*2+1];
                    receiveData[i*2+1] = tmpChar[3+i*2];
                } //end
            }//end
        }//end
    }
    else if(length==205)
    {
        if( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xC8 ) )
        {
            CRC16 = m_serialThread232->GetCRC16( tmpChar, length-2  );
            uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
            uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
            if( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] )
            {
                // exchange hibyte and lobyte
                for( int i=0; i<((length-5)/2); i++ )
                {
                    receiveData[220+i*2] = tmpChar[3+i*2+1];
                    receiveData[220+i*2+1] = tmpChar[3+i*2];
                } // end
            }//end
        }//end
    }

}



void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

QString Dialog::carIDToString(__in quint16 data)
{
    QVariant  var = data;

    if( data < 10 )
    {
        return ( "0" + var.toString() );
    }
    else
    {
        return ( var.toString() );
    }
}

//*****************************************BJXJ_数据
void Dialog::OnUpdateData()
{



    screenUpdateCnt++;
    m_UpdateMutex.lock();

    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];

    if(pPage == NULL)
        return;
    SetTrainCoupleMode();
    SetKeyStateMode();
    if(timer_settingHVAC.isActive())
    {

    }
    else
    {
         if(   set_ModeEff
           || IDU2_HVAC_HvacModeEff_B1
           || IDU1_HVAC_HvacModeEff_B1
           || R2_MVB_1_AirConModeEff_B1_Master)
         {
            UpdateHVACSet();
            timer_settingHVAC.start(5000);
         }

    }

    if((bool(CCUALL_TimeUpdate_B1)!=bool(m_oldCCUtimeflg))&&bool(CCUALL_TimeUpdate_B1) == true)
    {

        ATC_time_temp1 = CCUALL_Year_U8+2000;
        ATC_time_temp2 = CCUALL_Month_U8;
        ATC_time_temp3 = CCUALL_Day_U8;
        ATC_time_temp4 = CCUALL_Hour_U8;
        ATC_time_temp5 = CCUALL_Minute_U8;
        ATC_time_temp6 = CCUALL_Second_U8;

        if(ATC_time_temp1<2038)
        {
            setScreenTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);
        }


    }else
    {
        T1_sendMethod = 0;
    }
    m_oldCCUtimeflg = CCUALL_TimeUpdate_B1;

    initReceiveData();
     CreateSendData();

    //**********************BJXJ_运行数据********************************

     if(TC1_HMI == 1 ) // CAR1 RECORD THE DATA AND SEND DATA TO CAR5
     {
         if(IDU2_CCU_ACCDATACALL_B1)
         {
             //receive IDU2 data,when call send to IDU1, vars take IDU2 data as real data,record in xml right now
             if(bool(IDU2_CCU_TIMEDEPART1_B1) && !bool(IDU2_CCU_TIMEDEPART2_B1))
             {
                 runningDistance = IDU2_CCU_ACCDATA1_L_L_U8+
                                   IDU2_CCU_ACCDATA1_L_H_U8 *256 +
                                   IDU2_CCU_ACCDATA1_H_U16 * 65536;
                 TcuEnergyConsumption = IDU2_CCU_ACCDATA2_L_U16 +
                                        IDU2_CCU_ACCDATA2_H_U16 *65536;
             }else if(bool(IDU2_CCU_TIMEDEPART2_B1) && !bool(IDU2_CCU_TIMEDEPART1_B1))
             {
                 AcuEnergyConsumption = IDU2_CCU_ACCDATA1_L_L_U8+
                                   IDU2_CCU_ACCDATA1_L_H_U8 *256 +
                                   IDU2_CCU_ACCDATA1_H_U16 * 65536;
                 RegEnergyConsumption = IDU2_CCU_ACCDATA2_L_U16 +
                                        IDU2_CCU_ACCDATA2_H_U16 *65536;
             }
             m_TcuEnergyConsumption_init = TcuEnergyConsumption;
             m_AcuEnergyConsumption_init = AcuEnergyConsumption;
             m_RegEnergyConsumption_init = RegEnergyConsumption;

             settingDataBase->setRunningDistance(runningDistance);
             settingDataBase->setTcuEnergyConsumption(TcuEnergyConsumption);
             settingDataBase->setAcuEnergyConsumption(AcuEnergyConsumption);
             settingDataBase->setRegEnergyConsumption(RegEnergyConsumption);
              settingDataBase->saveFile();

         }else
         {
             //when no call send to IDU1, vars take usual data as real data,record in xml every 40s
             runningDistance += R2_MVB_3_VehSpeed_U16 *(0.1/9000);//(km)
             TcuEnergyConsumption = m_TcuEnergyConsumption_init+
                                    TCU1CCU_7_TcuEnergyConsump_U16+
                                    TCU2CCU_7_TcuEnergyConsump_U16+
                                    TCU3CCU_7_TcuEnergyConsump_U16+
                                    TCU4CCU_7_TcuEnergyConsump_U16;
             AcuEnergyConsumption = m_AcuEnergyConsumption_init+
                                    TCU1CCU_7_AcuEnergyConsump_U16+  //acu+bc = acutotal
                                    TCU3CCU_7_AcuEnergyConsump_U16+
                                    TCU1CCU_7_BCEnergyConsump_U16+
                                    TCU3CCU_7_BCEnergyConsump_U16;
             RegEnergyConsumption = m_RegEnergyConsumption_init+
                                    TCU1CCU_7_RegEnergyConsump_U16+
                                    TCU2CCU_7_RegEnergyConsump_U16+
                                    TCU3CCU_7_RegEnergyConsump_U16+
                                    TCU4CCU_7_RegEnergyConsump_U16;
         }


         IDUCT_ACCMILE_L_L_U8 = (quint64)runningDistance%65536%256;
         IDUCT_ACCMILE_L_H_U8 = (quint64)runningDistance%65536/256;
         IDUCT_ACCMILE_H_U16 = (quint64)runningDistance/65536;
         IDUCT_TRAENERGYCONSUMPTION_L_U16 = TcuEnergyConsumption%65536;
         IDUCT_TRAENERGYCONSUMPTION_H_U16 = TcuEnergyConsumption/65536;

         IDUCT_ACUENERGYCONSUMPTION_L_L_U8 = AcuEnergyConsumption%65536%256;
         IDUCT_ACUENERGYCONSUMPTION_L_H_U8 = AcuEnergyConsumption%65536/256;
         IDUCT_ACUENERGYCONSUMPTION_H_U16 = AcuEnergyConsumption/65536;
         IDUCT_REGENERGYCONSUMPTION_L_U16 = RegEnergyConsumption%65536;
         IDUCT_REGENERGYCONSUMPTION_H_U16 = RegEnergyConsumption/65536;

     }else if(TC2_HMI == 1)// CAR5 RECEIVE CAR1 DATA
     {
         if(bool(IDU1_CCU_TIMEDEPART1_B1) && !bool(IDU1_CCU_TIMEDEPART2_B1))
         {
             runningDistance = IDU1_CCU_ACCDATA1_L_L_U8+
                               IDU1_CCU_ACCDATA1_L_H_U8 *256 +
                               IDU1_CCU_ACCDATA1_H_U16 * 65536;
             TcuEnergyConsumption = IDU1_CCU_ACCDATA2_L_U16 +
                                    IDU1_CCU_ACCDATA2_H_U16 *65536;
         }else if(bool(IDU1_CCU_TIMEDEPART2_B1) && !bool(IDU1_CCU_TIMEDEPART1_B1))
         {
             AcuEnergyConsumption = IDU1_CCU_ACCDATA1_L_L_U8+
                               IDU1_CCU_ACCDATA1_L_H_U8 *256 +
                               IDU1_CCU_ACCDATA1_H_U16 * 65536;
             RegEnergyConsumption = IDU1_CCU_ACCDATA2_L_U16 +
                                    IDU1_CCU_ACCDATA2_H_U16 *65536;
         }
     }


    // record every 40s
    if( m_saveCounter>100)
    {

        settingDataBase->setRunningDistance(runningDistance);
        settingDataBase->setTcuEnergyConsumption(TcuEnergyConsumption);
        settingDataBase->setAcuEnergyConsumption(AcuEnergyConsumption);
        settingDataBase->setRegEnergyConsumption(RegEnergyConsumption);
         settingDataBase->saveFile();
         m_saveCounter=0;
    }
    else
    {
         m_saveCounter++;
    }


    //settingDatabase->saveFile();

    //**********************BJXJ_更新接收数据********************************


    // 20121227 add begin
    // car code can not be zero
    // MC1 key actived, MC2 HMI sync MC1 car code
    // MC2 key actived, MC1 HMI sync MC2 car code
    // others: use local car code

//    if(CARCODE_SYNC_MAIN_BOOL)
//    {

//                if( g_car1IDUint16 != (quint16)(CARCODE_MAIN_WORD) )
//                {
//                    g_car1IDUint16 = (quint16)(CARCODE_MAIN_WORD);
//                    g_car1CodeStr.sprintf("%03d", g_car1IDUint16);
//                    //add slave number
//                    SetINIInfo("CARCODE",g_car1CodeStr);
//                }
//    }
//       g_car1CodeStr.sprintf("%03d", g_car1IDUint16);
//       g_car2CodeStr.sprintf("%03d",(quint16)(CARCODE_SLAVE_WORD));

    //2014-5-27 add ht clash signal
       //CWarningDialog ClashfaultDlg;




      if(MAIN_HEADTAILCLASH_BOOL)
     {
          if( !m_FaultDlg.GetComBreakFlag() )
          {
              m_FaultDlg.SetComBreakFlag( true );
              m_FaultDlg.SetWarningStr(QSTR("Head tail switch conflict!"));
              m_FaultDlg.setGeometry(((this->width()-400)/2+this->x()),this->y()+int((this->height()-120)/2),400,120);
              m_FaultDlg.SetWarningLabel();
              m_FaultDlg.show();
          }

     }
     else
     {
         m_FaultDlg.close();
         m_FaultDlg.SetComBreakFlag(false);
        //ChangePage(PAGE_ROM_INDEX_MAIN);
     }



    // 20121227 add end

    pPage->UpdateCommonLabel();
    pPage->UpdatePage();
    UpdateTimers();

#ifdef USE_RAND_DATA
    //test data
//    for(int i = 0; i < D_RECEIVE_BUFFER_SIZE; i++)
    //    {
//        //if(!optDebugBool)receiveData[i]=rand()%255;
//        if(!optDebugBool)
//            receiveData[i]++;
//        //receiveData[i] = 0x00;
//    }
#endif

    QVariant var;
    quint16 loginIDuint16;
    g_fault_recorder_loginID = g_loginID;
    var = g_fault_recorder_loginID;
    loginIDuint16 = var.toUInt();
    if( loginIDuint16<1 )
        g_fault_recorder_login_type = ENUM_LOGIN_TYPE_ANONYMOUS;
    else if( loginIDuint16>0 && loginIDuint16<9000 )
        g_fault_recorder_login_type = ENUM_LOGIN_TYPE_DRIVER;
    else
        g_fault_recorder_login_type = ENUM_LOGIN_TYPE_MAINTAINER;

    writeFileCnt++; // for save faults


    int ret = FaultsScanning();
    if( writeFileCnt>24 )
        writeFileCnt = 0;

    if (0 != ret)
    {
#ifdef USE_SERIAL_DATA
        //ShowWarnningDialog(ret);
#endif
    }

    pPage->ConnectEvent(WM_UPDATEPAGE);
    m_UpdateMutex.unlock();

}


void Dialog::initReceiveData()
{
    //pid master/slave
    if((g_dataBuffer_MVB[1936+2] & B1_00)
    {

    }else if((g_dataBuffer_MVB[1952+2] & B1_00)
    {
        for(int i = 0; i < 16 ; i++)
        {
            g_dataBuffer_MVB[1936+i] = g_dataBuffer_MVB[1952+i];
        }
    }else
    {
        g_dataBuffer_MVB[1936+i] = 0;
    }
    // pa master/slave
    if(PA1All_Master_B1)
    {
        for(int i = 0; i < 16 ; i++)
        {
            g_dataBuffer_MVB[1984+i] = g_dataBuffer_MVB[1984+i];
        }
    }else if(PA2All_Master_B1)
    {
        for(int i = 0; i < 16 ; i++)
        {
            g_dataBuffer_MVB[1984+i] = g_dataBuffer_MVB[2000+i];
        }
    }else
    {
        for(int i = 0; i < 16 ; i++)
        {
            g_dataBuffer_MVB[1984+i] = 0;
        }
    }

}



/*
send data process
*/
void Dialog::CreateSendData()
{



    //    QDate date = QDate::currentDate();
    //    QString str;
    //    str = QString::number(date.year()) + QObject::trUtf8("-")+
    //          QString::number(date.month()) + QObject::trUtf8("-")+
    //          QString::number(date.day()) + QObject::trUtf8("");
    //    qDebug()<<str;
    QDate date = QDate::currentDate();
    //
    IDUCT_Year_U8 = QString::number(date.year()).toInt()-2000;
    IDUCT_Month_U8 = date.month();
    IDUCT_Day_U8   = date.day();
    QTime time = QTime::currentTime();
    IDUCT_Hour_U8   = time.hour();
    IDUCT_Minute_U8 = time.minute();
    IDUCT_Second_U8 = time.second();

    //qDebug()<<IDUCT_Year_U8<<IDUCT_Month_U8<<IDUCT_Day_U8<<IDUCT_Hour_U8<<IDUCT_Minute_U8<<IDUCT_Second_U8;


    if (MVBsendData[30] == 255)
    {
        MVBsendData[30] = 0;
    }
    else
    {
       MVBsendData[30]=MVBsendData[30]+1;
    }


    if (MVBsendData[32+14] == 255)
    {
        MVBsendData[32+14] = 0;
    }
    else
    {
       MVBsendData[32+14]=MVBsendData[32+14]+1;
    }

//    if (MVBsendData[32+30] == 255)
//    {
//        MVBsendData[32+30] = 0;
//    }
//    else
//    {
//       MVBsendData[32+30]=MVBsendData[32+30]+1;
//    }

    MVBsendData[31] = 0x40 ;
    MVBsendData[32+15] = 0x40;//    MVBsendData[31] = IDUCT_Chk_A2 *64;
//    MVBsendData[32+15] = IDUHVAC_Chk_A2 *64;

//    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);

    MVBsendData[0] = IDUCT_Year_U8;
    MVBsendData[1] = IDUCT_Month_U8;
    MVBsendData[2] = IDUCT_Day_U8;
    MVBsendData[3] = IDUCT_Hour_U8;
    MVBsendData[4] = IDUCT_Minute_U8;
    MVBsendData[5] = IDUCT_Second_U8;
    MVBsendData[6] = IDUCT_OpenTime_U8;
    MVBsendData[7] = IDUCT_CloseTime_U8;
    MVBsendData[8] = IDUCT_ObsDetNumClose_U8;
    MVBsendData[9] = IDUCT_ObsDetNumOpen_U8;
    MVBsendData[10] = IDUCT_CloseForce_U8;
    MVBsendData[11] = IDUCT_DTBDC_U8;
    MVBsendData[12] = IDUCT_DTBDO_U8;

    MVBsendData[14] = IDUCT_MemErase_U8;
    //MVBsendData[15] = IDUCT_Chk_A2 *64;
    MVBsendData[16] = IDUCT_WheelDiamMa_U16/256;
    MVBsendData[17] = IDUCT_WheelDiamMa_U16%256;
    MVBsendData[18] = IDUCT_WheelDiamP_U16/256;
    MVBsendData[19] = IDUCT_WheelDiamP_U16%256;
    MVBsendData[20] = IDUCT_WheelDiamMb_U16/256;
    MVBsendData[21] = IDUCT_WheelDiamMb_U16%256;


    // time depart static flg
    static bool flg = false;
    flg = !flg;
    if(flg)
    {
        MVBsendData[15] = IDUCT_ACCMILE_L_L_U8;
        MVBsendData[28] = IDUCT_ACCMILE_L_H_U8;
        MVBsendData[22] = IDUCT_ACCMILE_H_U16/256;
        MVBsendData[23] = IDUCT_ACCMILE_H_U16%256;
        MVBsendData[24] = IDUCT_TRAENERGYCONSUMPTION_L_U16/256;
        MVBsendData[25] = IDUCT_TRAENERGYCONSUMPTION_L_U16%256;
        MVBsendData[26] = IDUCT_TRAENERGYCONSUMPTION_H_U16/256;
        MVBsendData[27] = IDUCT_TRAENERGYCONSUMPTION_H_U16%256;

        IDUCT_timedepart1_B1 = true;
        IDUCT_timedepart2_B1 = false;

    }else
    {
        MVBsendData[15] = IDUCT_ACUENERGYCONSUMPTION_L_L_U8;
        MVBsendData[28] = IDUCT_ACUENERGYCONSUMPTION_L_H_U8;
        MVBsendData[22] = IDUCT_ACUENERGYCONSUMPTION_H_U16/256;
        MVBsendData[23] = IDUCT_ACUENERGYCONSUMPTION_H_U16%256;
        MVBsendData[24] = IDUCT_REGENERGYCONSUMPTION_L_U16/256;
        MVBsendData[25] = IDUCT_REGENERGYCONSUMPTION_L_U16%256;
        MVBsendData[26] = IDUCT_REGENERGYCONSUMPTION_H_U16/256;
        MVBsendData[27] = IDUCT_REGENERGYCONSUMPTION_H_U16%256;
        IDUCT_timedepart1_B1 = false;
        IDUCT_timedepart2_B1 = true;
    }


    MVBsendData[13] = IDUCT_TimeUpdate_B1     * 1
                     + IDUCT_DiameterUpdate_B1* 2
                     + IDUCT_DoorUpdate_B1    * 4
                     + IDUCT_DischargeReq_B1  * 8
                     + IDUCT_timedepart1_B1   *16
                     + IDUCT_timedepart2_B1   *32
                     + IDUCT_Supercap_START   *64
                     + IDUCT_Supercap_STOP    *128;
    MVBsendData[29] = IDUCT_TcuTestRun_B1    *1
                    + IDUCT_TcuTestStop_B1   *2
                    + IDUCT_TestMode_A2      *4
                    + IDUCT_ACCDATACALL_B1 *16;
    //MVBsendData[30] = IDUCT_LifeSignal_U8;
    //MVBsendData[31] =

    MVBsendData[32+0] = BCUCCU3_P_Load_U16/256;
    MVBsendData[32+1] = BCUCCU3_P_Load_U16%256;
    // MVBsendData[32+2] =
    // MVBsendData[32+3] =
    MVBsendData[32+4] = IDUHVAC_Speed_U16/256;
    MVBsendData[32+5] = IDUHVAC_Speed_U16%256;
    MVBsendData[32+6] = IDUHVAC_SetTempCold_U8;
    MVBsendData[32+7] = IDUHVAC_SetTempWarm_U8;
    MVBsendData[32+8] = IDUHVAC_EmegVent_B1   *1
                      + IDUHVAC_Vent_B1       *2
                      + IDUHVAC_AutoWarm_B1   *8
                      + IDUHVAC_AutoCold_B1   *16
                      + IDUHVAC_ManWarm_B1    *32
                      + IDUHVAC_ManCold_B1    *64
                      + IDUHVAC_ExitPre_B1    *128;
    MVBsendData[32+9] = IDUHVAC_EmeVentTestStart_B1   *1
                      + IDUHVAC_EmeVentTestStop_B1    *2
                      + IDUHVAC_HvacTestStop_B1       *4
                      + IDUHVAC_Stop_B1               *8
                    //+                               *16
                    //+ IDUHVAC_EmeVentTestStop_B1    *32
                      + IDUHVAC_WarmTest_B1           *64
                      + IDUHVAC_ColdTest_B1           *128;
    MVBsendData[32+10] =
                    + IDUHVAC_HvacModeEff_B1          *2
                    //                                *4
                    + IDUHVAC_SetTempEff_B1           *8

                    + IDUHVAC_DoorClose_B1            *64
                    + IDUHVAC_DoorOpen_B1             *128;
    + IDUHVAC_DoorOpen_B1*128;

    SerialDebug();

}
void Dialog::UpdateHVACSet()//记录空调指令，不同情况取不同的值
{

     if( set_KeyState==1)
    {  

        if( set_ModeEff == 1)
        {
            QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
             ConfigIniRead->setValue("/HVAC/Mode",set_Mode);
             if(set_Mode==2)
             {
                 ConfigIniRead->setValue("/HVAC/SetTempCold",set_Temp);

             }
             if(set_Mode==6)
             {
                 ConfigIniRead->setValue("/HVAC/SetTempWarm",set_Temp);
             }
              delete ConfigIniRead;
        }
    }
     if((set_KeyState==2)||(set_KeyState==3))
     {
       if(IDU2_HVAC_HvacModeEff_B1)
       {

           QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);

           set_Mode2 = IDU2_HVAC_EmegVent_B1*4
                     + IDU2_HVAC_Vent_B1*3
                     + IDU2_HVAC_AutoWarm_B1*5
                     + IDU2_HVAC_AutoCold_B1*1
                     + IDU2_HVAC_ManWarm_B1*6
                     + IDU2_HVAC_ManCold_B1*2
                     + IDU2_HVAC_ExitPre_B1*8
                     + IDU2_HVAC_Stop_B1*7;
           ConfigIniRead->setValue("/HVAC/Mode",set_Mode2);
           ConfigIniRead->setValue("/HVAC/SetTempCold",IDU2_HVAC_SetTempCold_U8);
           ConfigIniRead->setValue("/HVAC/SetTempWarm",IDU2_HVAC_SetTempWarm_U8);
     delete ConfigIniRead;
     }
     }
    if((set_KeyState==4)||(set_KeyState==5))
     {
       if(IDU1_HVAC_HvacModeEff_B1)
       {
           QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);

           set_Mode3 = IDU1_HVAC_EmegVent_B1*4
                     + IDU1_HVAC_Vent_B1*3
                     + IDU1_HVAC_AutoWarm_B1*5
                     + IDU1_HVAC_AutoCold_B1*1
                     + IDU1_HVAC_ManWarm_B1*6
                     + IDU1_HVAC_ManCold_B1*2
                     + IDU1_HVAC_ExitPre_B1*8
                     + IDU1_HVAC_Stop_B1*7;
           ConfigIniRead->setValue("/HVAC/Mode",set_Mode3);
           ConfigIniRead->setValue("/HVAC/SetTempCold",IDU1_HVAC_SetTempCold_U8);
           ConfigIniRead->setValue("/HVAC/SetTempWarm",IDU1_HVAC_SetTempWarm_U8);

           delete ConfigIniRead;
       }
     }
    if( set_KeyState==6)
    {
       if(R2_MVB_1_AirConModeEff_B1_Master)
        {
            QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);

            set_Mode4 = R2_MVB_1_EmergVentCmd_B1_Master*4
                      + R2_MVB_1_VentCmd_B1_Master*3
                      + R2_MVB_1_AutoWarmCmd_B1_Master*5
                      + R2_MVB_1_AutoColdCmd_B1_Master*1
                      + R2_MVB_1_ManuWarmCmd_B1_Master*6
                      + R2_MVB_1_ManuColdCmd_B1_Master*2
                      + R2_MVB_1_ExitPreColdWarmCmd_B1_Master*8
                      + R2_MVB_1_StopCmd_B1_Master*7;
            ConfigIniRead->setValue("/HVAC/Mode",set_Mode4);
            ConfigIniRead->setValue("/HVAC/SetTempCold",R2_MVB_1_SetTempCold_U8_Master);
            ConfigIniRead->setValue("/HVAC/SetTempWarm",R2_MVB_1_SetTempWarm_U8_Master);
            delete ConfigIniRead;
       }

    }
}

 void  Dialog::sendHVACSet()//发送空调指令，从记录文件中读取
 {
     QSettings* settings = new QSettings("./system.ini",QSettings::IniFormat,0);

     set_Mode =  settings->value( "/HVAC/Mode" ).toInt();
     switch(set_Mode)
      {
      case 1:
          IDUHVAC_EmegVent_B1 = false;
          IDUHVAC_Vent_B1 = false;
          IDUHVAC_AutoWarm_B1 = false;
          IDUHVAC_AutoCold_B1 = true;
          IDUHVAC_ManWarm_B1 = false;
          IDUHVAC_ManCold_B1 = false;
          IDUHVAC_ExitPre_B1 = false;
          IDUHVAC_Stop_B1 = false;
          break;
      case 2:
          IDUHVAC_EmegVent_B1 = false;
          IDUHVAC_Vent_B1 = false;
          IDUHVAC_AutoWarm_B1 = false;
          IDUHVAC_AutoCold_B1 = false;
          IDUHVAC_ManWarm_B1 = false;
          IDUHVAC_ManCold_B1 = true;
          IDUHVAC_ExitPre_B1 = false;
          IDUHVAC_Stop_B1 = false;
         // IDUHVAC_SetTempCold_U8 = set_Temp;
          break;
      case 3:
          IDUHVAC_EmegVent_B1 = false;
          IDUHVAC_Vent_B1 = true;
          IDUHVAC_AutoWarm_B1 = false;
          IDUHVAC_AutoCold_B1 = false;
          IDUHVAC_ManWarm_B1 = false;
          IDUHVAC_ManCold_B1 = false;
          IDUHVAC_ExitPre_B1 = false;
          IDUHVAC_Stop_B1 = false;
          break;
      case 4:
          IDUHVAC_EmegVent_B1 = true;
          IDUHVAC_Vent_B1 = false;
          IDUHVAC_AutoWarm_B1 = false;
          IDUHVAC_AutoCold_B1 = false;
          IDUHVAC_ManWarm_B1 = false;
          IDUHVAC_ManCold_B1 = false;
          IDUHVAC_ExitPre_B1 = false;
          IDUHVAC_Stop_B1 = false;
          break;
      case 5:
          IDUHVAC_EmegVent_B1 = false;
          IDUHVAC_Vent_B1 = false;
          IDUHVAC_AutoWarm_B1 = true;
          IDUHVAC_AutoCold_B1 = false;
          IDUHVAC_ManWarm_B1 = false;
          IDUHVAC_ManCold_B1 = false;
          IDUHVAC_ExitPre_B1 = false;
          IDUHVAC_Stop_B1 = false;
          break;
      case 6:
          IDUHVAC_EmegVent_B1 = false;
          IDUHVAC_Vent_B1 = false;
          IDUHVAC_AutoWarm_B1 = false;
          IDUHVAC_AutoCold_B1 = false;
          IDUHVAC_ManWarm_B1 = true;
          IDUHVAC_ManCold_B1 = false;
          IDUHVAC_ExitPre_B1 = false;
          IDUHVAC_Stop_B1 = false;
          //IDUHVAC_SetTempWarm_U8 = set_Temp;
          break;
      case 7:
          IDUHVAC_EmegVent_B1 = false;
          IDUHVAC_Vent_B1 = false;
          IDUHVAC_AutoWarm_B1 = false;
          IDUHVAC_AutoCold_B1 = false;
          IDUHVAC_ManWarm_B1 = false;
          IDUHVAC_ManCold_B1 = false;
          IDUHVAC_ExitPre_B1 = false;
          IDUHVAC_Stop_B1 = true;
          break;
      case 8:
          IDUHVAC_EmegVent_B1 = false;
          IDUHVAC_Vent_B1 = false;
          IDUHVAC_AutoWarm_B1 = false;
          IDUHVAC_AutoCold_B1 = false;
          IDUHVAC_ManWarm_B1 = false;
          IDUHVAC_ManCold_B1 = false;
          IDUHVAC_ExitPre_B1 = true;
          IDUHVAC_Stop_B1 = false;
          break;
      default:
          break;
      }
            IDUHVAC_SetTempCold_U8 = settings->value( "/HVAC/SetTempCold" ).toInt();
            IDUHVAC_SetTempWarm_U8 = settings->value( "/HVAC/SetTempWarm" ).toInt();

            delete settings;


 }

void Dialog::InitHVACSet()
{

    sendHVACSet();
     timer_settingHVAC.stop();



}

void Dialog::endInitTime()
{
     IDUCT_TimeUpdate_B1  = false;
     Time_Eff_Timer.stop();
}
void Dialog::OnUpdateDeviceOnline()
{
    if(CCU_Lifesig_Old==CCUALL_LifeSig_U8)
    {
        CCU_CoummFault_flag= true;
    }
    else
    {
        CCU_CoummFault_flag = false;
        CCU_Lifesig_Old = CCUALL_LifeSig_U8;
    }

}

void Dialog::StartHVAC()
{

    if((key_MA_State_Old==0)&&(key_MB_State_Old==0))
    {
        key_MA_State_Old = LCUCCU_3_MA_DI_2_CH18_B1;
        key_MB_State_Old = LCUCCU_3_MB_DI_2_CH18_B1;
    }
    else
    {
        if(set_KeyState==1)
        {
            sendHVACSet();
            IDUHVAC_HvacModeEff_B1 = true;

            connect(&HVAC_Eff_Timer,SIGNAL(timeout()),this,SLOT(endInitHVACSet()));
            HVAC_Eff_Timer.start(10000);
        }
        HVAC_Start_Timer.stop();
    }
}
void Dialog::endInitHVACSet()
{
    IDUHVAC_HvacModeEff_B1 = false;
     HVAC_Eff_Timer.stop();

 }
void Dialog::InitTime()
{

    if(CCU_CoummFault_flag)
    {
        T2_sendMethod=T2_sendMethod+1;
    }
    else
    {
        if(set_KeyState == 1)
        {
            T2_sendMethod=12;
            QDate date = QDate::currentDate();
            IDUCT_Year_U8  = date.year();
            IDUCT_Month_U8 = date.month();
            IDUCT_Day_U8   = date.day();
            QTime time = QTime::currentTime();
            IDUCT_Hour_U8   = time.hour();
            IDUCT_Minute_U8 = time.minute();
            IDUCT_Second_U8 = time.second();
            IDUCT_TimeUpdate_B1 = true;
            connect(&Time_Eff_Timer,SIGNAL(timeout()),this,SLOT(endInitTime()));
            Time_Eff_Timer.start(5000);

            Time_Init_Timer.stop();
        }



    }
}

void Dialog::SetKeyStateMode()
{

    if((m_TestNum == 2)||(m_TestNum == 3))//非重联或重联状态下主车
    {
        if(((TC1_HMI==1)&&(LCUCCU_3_MA_DI_2_CH18_B1))||((TC2_HMI==1)&&(LCUCCU_3_MB_DI_2_CH18_B1)))
        {
                        set_KeyState = 1;//本端钥匙激活
        }
       else
        {
           if(TC1_HMI==1)
           {
                   if(LCUCCU_3_MB_DI_2_CH18_B1)
                   {
                       set_KeyState = 2; //本端为MA，钥匙在MB端激活
                   }
                   else
                   {
                       set_KeyState = 3; //本端为MA，钥匙未激活
                   }

            }
           if(TC2_HMI==1)
           {
                   if(LCUCCU_3_MA_DI_2_CH18_B1)
                   {
                       set_KeyState = 4; //本端为MB，钥匙在MA端激活
                   }
                   else
                   {
                       set_KeyState = 5; //本端为MB，钥匙未激活
                   }
           }
        }
    }
    else
    {
        set_KeyState = 6; //本端在从车上
    }
//   }

}


void Dialog::setScreenTime( int year, int mon, int day, int hour, int minute, int second )
{

    if(QDate::isValid( year, mon, day ) && QTime::isValid( hour, minute, second ))
    {
        T1_sendMethod = 45;

        #ifndef windows_demo
        time_t t;
        struct tm nowtime;
        nowtime.tm_sec = second; // second
        nowtime.tm_min = minute; ///*       Minutes.[0-59]
        nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
        nowtime.tm_mday = day;   ///*       Day.[1-31]
        nowtime.tm_mon = mon - 1; ///*       Month.   [0-11]
        nowtime.tm_year = year - 1900; ///*       Year-       1900.
        nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
        t = mktime(&nowtime);
        stime(&t);

        QDate date( year, mon, day );
        QTime time( hour, minute, second );
        QString dateStr = date.toString( "yyyy-MM-dd" );
        QString timeStr = time.toString( "hh:mm:ss" );
        QString hwclockStr = "hwclock --set --date \"";
        //QString hwclockStr = "date -s \"";
        dateStr.replace(QRegExp("-"), "");
        timeStr.replace(QRegExp("-"), ":");
        hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
        char *c=hwclockStr.toAscii().data();
        system(c);

        //system("hwclock -w");
        #endif  //windows_demo

    }else
    {
        T1_sendMethod = 43;

    }



}

void Dialog::OnUpdateDate()
{
     Time_Update_Timer.stop();
 }
    /*
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];

    if(pPage->TestControlExists(IDLB_COM_TIME))
    {
        //if()

        //if (!g_communication_ok_flag)

          if(0)
        {
              //T2_sendMethod=30;

            QDate date = QDate::currentDate();
            QString str1;
            str1 = QString::number(date.year()) + QObject::trUtf8("-")+
                  QString::number(date.month()) + QObject::trUtf8("-")+
                  QString::number(date.day()) + QObject::trUtf8("");
            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str1);

            QString time1 = QDateTime::currentDateTime().toString("HH:mm:ss");
            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time1);
        }
        else
        //qDebug()<<"2";
        {
            //T2_sendMethod=100;
            QString str,Month,Day;
            Month.sprintf("%02d",CCUALL_Month_U8);
            Day.sprintf("%02d",CCUALL_Day_U8);
            str = QString::number(CCUALL_Year_U8+2000) + tr("-")+
                  Month + tr("-")+
                  Day;
    //                str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
    //                      Month + QObject::trUtf8("-")+
    //                      Day;
            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


            QString time ,Hour,Minute,Second;
            Hour.sprintf("%02d",CCUALL_Hour_U8);
            Minute.sprintf("%02d",CCUALL_Minute_U8);
            Second.sprintf("%02d",CCUALL_Second_U8);
            time = Hour + QObject::trUtf8(":")+
                  Minute+ QObject::trUtf8(":")+
                  Second;
            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
        }

        //this->update();
    }


    // cancel for shenyang prj
    //if current page is system login page, then close back light
    //   if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_SYSLOGIN)
    //   {
    //       m_nPreCLKtime++;
    //       if( m_nPreCLKtime >= BACKLIGHTTIME )
    //       {
    //           BackLightCtrl(false);
    //       }

    //   }else
    //   {
    //       m_nPreCLKtime = 0;
    //   }
*/


void Dialog::paintEvent(QPaintEvent* e)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    ASSERT(pPage!= NULL);
    ASSERT(pPage->GetPixmap() != NULL);
    if(pPage->TestControlExists(IDLB_COM_TIME))
    {

        //if (!g_communication_ok_flag)
        if(1)
        {
           // T2_sendMethod=15;
            QDate date = QDate::currentDate();
            QString str1;
            str1 = QString::number(date.year()) + QObject::trUtf8("-")+
                  QString::number(date.month()) + QObject::trUtf8("-")+
                  QString::number(date.day()) + QObject::trUtf8("");
            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str1);

            QString time1 = QDateTime::currentDateTime().toString("HH:mm:ss");
            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time1);
        }
        //else
        //qDebug()<<"2";
        if(0)
        {

            QString str,Month,Day;
            Month.sprintf("%02d",CCUALL_Month_U8);
            Day.sprintf("%02d",CCUALL_Day_U8);
            str = QString::number(CCUALL_Year_U8+2000) + tr("-")+
                  Month + tr("-")+
                  Day;
    //                str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
    //                      Month + QObject::trUtf8("-")+
    //                      Day;
            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


            QString time ,Hour,Minute,Second;
            Hour.sprintf("%02d",CCUALL_Hour_U8);
            Minute.sprintf("%02d",CCUALL_Minute_U8);
            Second.sprintf("%02d",CCUALL_Second_U8);
            time = Hour + QObject::trUtf8(":")+
                  Minute+ QObject::trUtf8(":")+
                  Second;
            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
        }
    }
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,0,*(pPage->GetPixmap()));
    painter.end();

}

void Dialog::keyPressEvent( QKeyEvent * event )
{
#ifdef DEBUG_MODE
    if(event->key() == Qt::Key_F) //(event->modifiers() & Qt::ControlModifier) &&
    {
        CDebugDialog dbgDlg;
        if(dbgDlg.exec() == QDialog::Accepted)
        {
            this->update();
        }
    }
    else if(event->key() == Qt::Key_S)
    {
        CSetCarsDirDlg dbgDlg;
        if(dbgDlg.exec() == QDialog::Accepted)
        {
            //this->update();
        }
    }
    else if(event->key() == Qt::Key_D)
    {
        CConfirmDialog dlg;
        dlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        dlg.SetConfirmStr("debug mode");
        dlg.exec();
    }
    else if(event->key() == Qt::Key_Escape)
    {
        this->close();
    }
#endif
}

void Dialog::mousePressEvent(QMouseEvent * event)
{
    if(event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(), WM_LBUTTONDOWN);
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent* event)
{
    if(event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(),WM_LBUTTONUP);
        pPage->ResetButtonState();
        update();
        //if back light is off, then open back light
//        if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_SYSLOGIN)
//        {
//            BackLightCtrl(true);
//            m_nPreCLKtime = 0;
//        }
        if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_CURRENTFAULTLIST)
        {
            ((CCurrentFaultListPage*)(g_PageVec[PAGE_ROM_INDEX_CURRENTFAULTLIST]))->ResetAllLabelState();
        }
    }
}

void Dialog::closeEvent(QCloseEvent* e)
{
    //SaveFaultsHistory();

    system("killall cnr_idu");
}

void Dialog::globalDataInit()
{

    //GetINIInfo();
    StationSettedSuccess_Cnt = 0;
    SkipStationSettedSuccess_Cnt = 0;
    Main_AccumulateKmSettedFlag_Cnt = 0;
    lightOn_Cnt = 0;
    g_Vehicle_CodeSet_enable_cnt = 0;
    InstructionTest11_Cnt = 0;
    InstructionTest12_Cnt = 0;
    InstructionTest13_Cnt = 0;
    InstructionTest14_Cnt = 0;
    InstructionTest15_Cnt = 0;
    InstructionTest18_Cnt = 0;
    InstructionTest19_Cnt = 0;
    systemTimeSet_Cnt = 0;

    g_login_type = ENUM_LOGIN_TYPE_DRIVER;

    memset(receiveData, 0, D_RECEIVE_BUFFER_SIZE);
    memset(sendData, 0, D_SEND_BUFFER_SIZE);

    g_history_faults_pagenum = 1;
    g_current_faults_pagenum = 1;
    HistoryFaultsListInit();

    memset(&g_antiShakingVect0, 0, sizeof(g_antiShakingVect0));
    memset(&g_antiShakingVect1, 0, sizeof(g_antiShakingVect1));

    g_stationNameLine1.clear();
    g_stationNameLine2.clear();
    g_stationNameLine3.clear();
    g_stationNameLine4.clear();
    g_stationNameLine5.clear();

    // 1
    g_stationNameLine1 << QSTR( "香山" ) << QSTR( "1" ) << QSTR( "2" ) << QSTR( "3" ) << QSTR( "4" ) << QSTR( "5" ) << QSTR( "6" )
             << QSTR( "7" ) << QSTR( "8" ) << QSTR( "9" )
             << QSTR( "10" ) << QSTR( "11" ) << QSTR( "12" )
             << QSTR( "13" ) << QSTR( "14" ) << QSTR( "15" ) << QSTR( "16" ) << QSTR( "17" ) << QSTR( "18" )
              << QSTR( "19" ) << QSTR( "20" ) << QSTR( "21" ) << QSTR( "22" ) << QSTR( "植物园" );
    // 2
    g_stationNameLine2 << QSTR( "1" ) << QSTR( "2" ) << QSTR( "3" ) << QSTR( "4" ) << QSTR( "5" ) << QSTR( "6" )
            << QSTR( "7" ) << QSTR( "8" ) << QSTR( "9" ) << QSTR( "10" ) << QSTR( "11" )
             << QSTR( "12" ) << QSTR( "13" ) << QSTR( "14" ) << QSTR( "15" );
    // 3
    g_stationNameLine3  << QSTR( "1" ) << QSTR( "2" ) << QSTR( "3" ) << QSTR( "4" )
            << QSTR( "5" ) << QSTR( "6" ) << QSTR( "7" )
            << QSTR( "8" ) << QSTR( "9" ) << QSTR( "10" )
            << QSTR( "11" ) << QSTR( "12" );
    // 4
    //g_stationNameLine4 << QSTR( "浑南四路站" ) << QSTR( "天元街站" ) << QSTR( "奥体北站" );
    // 5
    g_stationNameLine5 << QSTR( "1" ) << QSTR( "2" ) << QSTR( "3" ) << QSTR( "4" ) << QSTR( "5" )
            << QSTR( "6" ) << QSTR( "7" ) << QSTR( "8" ) << QSTR( "9" )
            << QSTR( "10" ) << QSTR( "11" ) << QSTR( "12" ) << QSTR( "13" ) << QSTR( "14" )
            << QSTR( "15" ) << QSTR( "16" ) << QSTR( "17" ) << QSTR( "18" ) << QSTR( "19" )
            << QSTR( "20" ) << QSTR( "21" ) << QSTR( "22" );

    //qDebug() << g_stationNameLine1 << "\n" << g_stationNameLine2 << "\n" << g_stationNameLine3 << "\n" << g_stationNameLine4 << "\n" << g_stationNameLine5;
    //qDebug() << g_stationNameLine1.size() << "\n" << g_stationNameLine2.size() << "\n" << g_stationNameLine3.size() << "\n" << g_stationNameLine4.size() << "\n" << g_stationNameLine5.size();
    return;
}

//*********************************************************************************
//m_TestNum 主从信号均取自
//2      非重联
//3      重联，本车为主
//4      重联，本车为从
//5      UIC Address 错误
//6      Number of Vehicle 错误

//BJXJ_待定
//m_TrainCouple=1;  单车
//m_TrainCouple=2;  重联 1212
//m_TrainCouple=3;  重联 1221
//m_TrainCouple=4;  重联 2112
//m_TrainCouple=5;  重联 2121

void Dialog::SetTrainCoupleMode()
{

    if(GTWCCU_NUMBER_VEHICLE_B8  == 0) //**********非重联
    {
        m_TestNum = 2;     //非重联
        for(int i=0;i<16;i++)
        {
             g_dataBuffer_R2_1_Master[i]=g_dataBuffer_MVB[352+i];
             g_dataBuffer_R2_1_Slave[i]=0;
             g_dataBuffer_R2_2_1_Master[i]=0;
             g_dataBuffer_R2_2_1_Slave[i]=0;
             g_dataBuffer_R2_2_2_Master[i]=0;
             g_dataBuffer_R2_2_2_Slave[i]=0;
             g_dataBuffer_R2_2_3_Master[i]=0;
             g_dataBuffer_R2_2_3_Slave[i]=0;
             g_dataBuffer_R2_2_4_Master[i]=0;
             g_dataBuffer_R2_2_4_Slave[i]=0;
             g_dataBuffer_R2_3_Master[i]=g_dataBuffer_MVB[512+i];
             g_dataBuffer_R2_3_Slave[i]=0;
             g_dataBuffer_R2_4_Master[i]=g_dataBuffer_MVB[528+i];
             g_dataBuffer_R2_4_Slave[i]=0;
        }
    }
    else if(GTWCCU_NUMBER_VEHICLE_B8  == 2) //***********重联
    {
        //他车分时数据
        for(int i = 0; i < 16 ; i++)
        {
            if(g_dataBuffer_MVB[464+15]%256==16)
            {
                g_dataBuffer_MVB[2080+i+16] = g_dataBuffer_MVB[464+i];
            }
            else if(g_dataBuffer_MVB[464+15]%256==32)
            {
                 g_dataBuffer_MVB[2080+32+i+16] = g_dataBuffer_MVB[464+i];
            }
            else if(g_dataBuffer_MVB[464+15]%256==48)
            {
                 g_dataBuffer_MVB[2080+64+i+16] = g_dataBuffer_MVB[464+i];
            }
            else if(g_dataBuffer_MVB[464+15]%256==64)
            {
                 g_dataBuffer_MVB[2080+96+i+16] = g_dataBuffer_MVB[464+i];
            }
        }
        //本车分时数据
        for(int i = 0; i < 16 ; i++)
        {
            if(g_dataBuffer_MVB[368+15]%256==16)
            {
                g_dataBuffer_MVB[2080+i+32] = g_dataBuffer_MVB[368+i];
            }
            else if(g_dataBuffer_MVB[368+15]%256==32)
            {
                 g_dataBuffer_MVB[2080+32+i+32] = g_dataBuffer_MVB[368+i];
            }
            else if(g_dataBuffer_MVB[368+15]%256==48)
            {
                 g_dataBuffer_MVB[2080+64+i+32] = g_dataBuffer_MVB[368+i];
            }
            else if(g_dataBuffer_MVB[368+15]%256==64)
            {
                 g_dataBuffer_MVB[2080+96+i+32] = g_dataBuffer_MVB[368+i];
            }
        }


        if(bool ( LCUCCU_3_MA_DI_2_CH18_B1) || bool ( LCUCCU_3_MB_DI_2_CH18_B1)) //******************本车为主车
        {

            m_TestNum = 3;    //重联，本车为主
            for(int i=0;i<16;i++)
            {
                g_dataBuffer_R2_1_Master[i]=g_dataBuffer_MVB[352+i];
                g_dataBuffer_R2_1_Slave[i] =g_dataBuffer_MVB[448+i];
                g_dataBuffer_R2_2_1_Master[i]=g_dataBuffer_MVB[2080+ 0+i+32];
                g_dataBuffer_R2_2_2_Master[i]=g_dataBuffer_MVB[2080+32+i+32];
                g_dataBuffer_R2_2_3_Master[i]=g_dataBuffer_MVB[2080+64+i+32];
                g_dataBuffer_R2_2_4_Master[i]=g_dataBuffer_MVB[2080+96+i+32];

                g_dataBuffer_R2_2_1_Slave[i] =g_dataBuffer_MVB[2080+ 0+i+16];
                g_dataBuffer_R2_2_2_Slave[i] =g_dataBuffer_MVB[2080+32+i+16];
                g_dataBuffer_R2_2_3_Slave[i] =g_dataBuffer_MVB[2080+64+i+16];
                g_dataBuffer_R2_2_4_Slave[i] =g_dataBuffer_MVB[2080+96+i+16];

                g_dataBuffer_R2_3_Master[i]=g_dataBuffer_MVB[512+i];
                g_dataBuffer_R2_3_Slave[i] =g_dataBuffer_MVB[480+i];
                g_dataBuffer_R2_4_Master[i]=g_dataBuffer_MVB[528+i];
                g_dataBuffer_R2_4_Slave[i] =g_dataBuffer_MVB[496+i];
            }

        }
        else //*******************本车为从车
        {
            m_TestNum = 4;   //重联，本车为从
            for(int i=0;i<16;i++)
            {
                g_dataBuffer_R2_1_Slave[i]=g_dataBuffer_MVB[352+i];
                g_dataBuffer_R2_1_Master[i] =g_dataBuffer_MVB[448+i];

                g_dataBuffer_R2_2_1_Master[i] =g_dataBuffer_MVB[2080+i+16];
                g_dataBuffer_R2_2_2_Master[i] =g_dataBuffer_MVB[2080+32+i+16];
                g_dataBuffer_R2_2_3_Master[i] =g_dataBuffer_MVB[2080+64+i+16];
                g_dataBuffer_R2_2_4_Master[i] =g_dataBuffer_MVB[2080+96+i+16];

                g_dataBuffer_R2_2_1_Slave[i]=g_dataBuffer_MVB[2080+ 0+i+32];
                g_dataBuffer_R2_2_2_Slave[i]=g_dataBuffer_MVB[2080+ 32+i+32];
                g_dataBuffer_R2_2_3_Slave[i]=g_dataBuffer_MVB[2080+ 64+i+32];
                g_dataBuffer_R2_2_4_Slave[i]=g_dataBuffer_MVB[2080+ 96+i+32];


                g_dataBuffer_R2_3_Slave[i]=g_dataBuffer_MVB[512+i];
                g_dataBuffer_R2_3_Master[i] =g_dataBuffer_MVB[480+i];
                g_dataBuffer_R2_4_Slave[i]=g_dataBuffer_MVB[528+i];
                g_dataBuffer_R2_4_Master[i] =g_dataBuffer_MVB[496+i];
            }
        }

    }
    else
    {
          m_TestNum = 6;   //错误，
          for(int i=0;i<16;i++)
          {
             g_dataBuffer_R2_1_Master[i]=g_dataBuffer_MVB[352+i];
             g_dataBuffer_R2_1_Slave[i]=0;
             g_dataBuffer_R2_2_1_Master[i]=0;
             g_dataBuffer_R2_2_1_Slave[i]=0;
             g_dataBuffer_R2_2_2_Master[i]=0;
             g_dataBuffer_R2_2_2_Slave[i]=0;
             g_dataBuffer_R2_2_3_Master[i]=0;
             g_dataBuffer_R2_2_3_Slave[i]=0;
             g_dataBuffer_R2_2_4_Master[i]=0;
             g_dataBuffer_R2_2_4_Slave[i]=0;
             g_dataBuffer_R2_3_Master[i]=g_dataBuffer_MVB[512+i];
             g_dataBuffer_R2_3_Slave[i]=0;
             g_dataBuffer_R2_4_Master[i]=g_dataBuffer_MVB[528+i];
             g_dataBuffer_R2_4_Slave[i]=0;
          }
    }
    //BJXJ_待定
    //m_TrainCoupleMode=1;  单车
    //m_TrainCoupleMode=2;  重联 1212
    //m_TrainCoupleMode=3;  重联 1221
    //m_TrainCoupleMode=4;  重联 2112
    //m_TrainCoupleMode=5;  重联 2121

    if(GTWCCU_NUMBER_VEHICLE_B8== 2)
    {
        m_TrainCoupleActive = 2;
        if(R2_MVB_3_MasterVehCoupMA_B1_Master)
        {
            if(R2_MVB_3_SlaveVehCoupMA_B1_Slave )
            {
             m_TrainCoupleMode = 4;//BA-AB
            }else if(R2_MVB_3_SlaveVehCoupMB_B1_Slave)
            {
             m_TrainCoupleMode = 5;//BA-BA
            }else
            {
                m_TrainCoupleMode = 2;//ABAB
            }
        }else if(R2_MVB_3_MasterVehCoupMB_B1_Master)
        {
            if(R2_MVB_3_SlaveVehCoupMA_B1_Slave )
            {
             m_TrainCoupleMode = 2;//AB-AB
            }else if(R2_MVB_3_SlaveVehCoupMB_B1_Slave)
            {
             m_TrainCoupleMode = 3;//AB-BA
            }else
            {
                m_TrainCoupleMode = 2;//ABAB
            }
        }else
        {
            m_TrainCoupleMode = 2;//when couple mode are all 0 ,default show AB-AB
        }


    }
    else if(GTWCCU_NUMBER_VEHICLE_B8== 0)
    {
         m_TrainCoupleMode = 1;
         m_TrainCoupleActive = 1;
    }
    else
    {
        //when couple vehicle num is not 0,2 .show the signal train.
        m_TrainCoupleMode = 1;
        m_TrainCoupleActive = 1;


    }

}
void Dialog::SerialDebug()
{
    if(serialDebugDlg.serialSetList.length() != 0)
    {
        int nOperation = 0;
        for(int i = 0; i < serialDebugDlg.serialSetList.length(); i++)
        {
            nOperation = serialDebugDlg.serialSetList[i].nOperation;
            if(nOperation == 0)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
                else
                    MVBsendData[serialDebugDlg.serialSetList[i].nArrayIndex] |= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 1)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
                else
                    MVBsendData[serialDebugDlg.serialSetList[i].nArrayIndex] &= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 2)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
                else
                    MVBsendData[serialDebugDlg.serialSetList[i].nArrayIndex] ^= serialDebugDlg.serialSetList[i].nNum;
            }
            else if(nOperation == 3)
            {
                if(serialDebugDlg.serialSetList[i].bSetRevData)
                    g_dataBuffer_MVB[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
                else
                    MVBsendData[serialDebugDlg.serialSetList[i].nArrayIndex] = serialDebugDlg.serialSetList[i].nNum;
            }
        }
    }
}



//*********************************************************************************
void Dialog::UpdateTimers()
{
    if(MAIN_SKIPSTATIONSETTEDSUCCESS_BOOL)
    {
        SkipStationSettedSuccess_Cnt = 0;
        Main_SkipStationInstruction_Bool = false;
    }

    if( Main_SkipStationInstruction_Bool )
    {
        if( SkipStationSettedSuccess_Cnt<25 )
        {
            SkipStationSettedSuccess_Cnt++;
        }
        else
        {
            SkipStationSettedSuccess_Cnt = 0;
            Main_SkipStationInstruction_Bool = false;
        }
    }//end

    if( StationSettedFlag_Bool )
    {
        if( StationSettedSuccess_Cnt<5 )
        {
            StationSettedSuccess_Cnt++;
        }
        else
        {
            StationSettedSuccess_Cnt = 0;
            StationSettedFlag_Bool = false;
        }
    }//end

    if(  Main_AccumulateKmSettedFlag_Bool )
    {
        if( Main_AccumulateKmSettedFlag_Cnt<5 )
        {
            Main_AccumulateKmSettedFlag_Cnt++;
        }
        else
        {
            Main_AccumulateKmSettedFlag_Cnt = 0;
            Main_AccumulateKmSettedFlag_Bool = false;
        }
    }//end

    if( g_Vehicle_CodeSet_enable )
    {
        if( g_Vehicle_CodeSet_enable_cnt<5 )
        {
            g_Vehicle_CodeSet_enable_cnt++;
        }
        else
        {
            g_Vehicle_CodeSet_enable_cnt = 0;
            g_Vehicle_CodeSet_enable = false;
        }
    }//end
    if( InstructionTest11_Bool )
    {
        if( InstructionTest11_Cnt<5 )
        {
            InstructionTest11_Cnt++;
        }
        else
        {
            InstructionTest11_Cnt = 0;
            InstructionTest11_Bool = false;
        }
    }//end
    if( InstructionTest12_Bool )
    {
        if( InstructionTest12_Cnt<5 )
        {
            InstructionTest12_Cnt++;
        }
        else
        {
            InstructionTest12_Cnt = 0;
            InstructionTest12_Bool = false;
        }
    }//end
    if( InstructionTest13_Bool )
    {
        if( InstructionTest13_Cnt<5 )
        {
            InstructionTest13_Cnt++;
        }
        else
        {
            InstructionTest13_Cnt = 0;
            InstructionTest13_Bool = false;
        }
    }//end
    if( InstructionTest14_Bool )
    {
        if( InstructionTest14_Cnt<5 )
        {
            InstructionTest14_Cnt++;
        }
        else
        {
            InstructionTest14_Cnt = 0;
            InstructionTest14_Bool = false;
        }
    }//end
    if( InstructionTest15_Bool )
    {
        if( InstructionTest15_Cnt<5 )
        {
            InstructionTest15_Cnt++;
        }
        else
        {
            InstructionTest15_Cnt = 0;
            InstructionTest15_Bool = false;
        }
    }//end
    if( InstructionTest18_Bool )
    {
        if( InstructionTest18_Cnt<5 )
        {
            InstructionTest18_Cnt++;
        }
        else
        {
            InstructionTest18_Cnt = 0;
            InstructionTest18_Bool = false;
        }
    }//end
    if( InstructionTest19_Bool )
    {
        if( InstructionTest19_Cnt<5 )
        {
            InstructionTest19_Cnt++;
        }
        else
        {
            InstructionTest19_Cnt = 0;
            InstructionTest19_Bool = false;
        }
    }//end
    if( LightOn_Bool )
    {
        if( lightOn_Cnt<5 )
        {
            lightOn_Cnt++;
        }
        else
        {
            lightOn_Cnt = 0;
            LightOn_Bool = false;
        }
    }//end


    // 20130121 modify
    if( g_SystemTimeSetEn_Bool )
    {

        if( systemTimeSet_Cnt<25 )
        {
            systemTimeSet_Cnt++;
        }
        else
        {
            systemTimeSet_Cnt = 0;
            g_SystemTimeSetEn_Bool = false;

        }
    }//end
}

void Dialog::ReadFaultsDef()
{
    QString path = qApp->applicationDirPath();
    QString fName = path + "/faultsdef.csv";
    QFile f(fName);

    if (!f.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return;
    }

    QTextStream stream(&f);

    QString line;
    QStringList list;
    QString code, grade, position, name, advice, device;
    FAULTS_ROM_DATA *pdata;
    int i = 0;
    while (NULL != (line = stream.readLine(0)))
    {
        list = line.split(",", QString::SkipEmptyParts);
        code = list[0].simplified();
        grade = list[1].simplified();
        device = list[2].simplified();
        position = list[3].simplified();
        name = list[4].simplified();
        advice = list[5].simplified();

        pdata = &g_faultsrom[0];
        for (i=0; i<g_faultsRomLen; i++)
        {
            if (code.toInt() == pdata->code)
            {
                pdata->grade = GetGradeValFromStr(grade);
                pdata->device = GetDeviceValFromStr(device);
                pdata->position = GetPositionValFromStr(position);
                pdata->name = name;
                pdata->advice = advice;
            }
            pdata++;
        }
    }

    stream.flush();
    f.close();

    return;
}

void Dialog::getDefaultParameter()
{

    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system_init.ini";
    QFile inifile( fileName );
    if( inifile.exists( fileName ) )
    {
        if( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings *settings = new QSettings( fileName, QSettings::IniFormat );
            pw_True_4Purview = settings->value( "/Password/Password_4Purview", "0" ).toString();
            pw_True_6Purview = settings->value( "/Password/Password_6Purview", "0" ).toString();
            pw_True_6MakeSure = settings->value( "/Password/Password_6MakeSure", "0" ).toString();

            TC1_HMI =  settings->value( "/HMI/TC1").toInt();
            TC2_HMI =  settings->value( "/HMI/TC2").toInt();


            delete settings;
        }
    }
    else
    {
        CWarningDialog wDlg;
        wDlg.SetWarningStr(QSTR("system_init.ini文件不存在！"));
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }

    //QString path = qApp->applicationDirPath();
    QString fileNama = path + "/system.ini";
    QFile inifila( fileNama );
    if( inifila.exists( fileNama ) )
    {
        if( inifila.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings *setting = new QSettings( fileNama, QSettings::IniFormat );
            g_car1IDUint16 = setting->value( "CARCODE" ).toUInt();
            g_car1CodeStr.sprintf("%03d", g_car1IDUint16);

            g_ParamSet_CarCode_Uint = g_car1IDUint16;
            IDUCT_WheelDiamMa_U16 =setting->value( "/WheelDiameter/Wheela" ).toInt()  ;
            IDUCT_WheelDiamP_U16 =  setting->value( "/WheelDiameter/Wheelp" ).toInt()  ;
            IDUCT_WheelDiamMb_U16 = setting->value( "/WheelDiameter/Wheelb" ).toInt()  ;



            delete setting;
        }
    }
    else
    {
        CWarningDialog wDlg;
        wDlg.SetWarningStr(QSTR("system.ini文件不存在！"));
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
}

void Dialog::ShowWarnningDialog(int retVal)
{
    CWarningDialog wDlg;
    QString str = "";

//    if (D_FAULTS_SCANNING_CODE15 & retVal)
//    {
//        str = QSTR("两端司机室激活");
////        wDlg.SetWarningStr(str);
////        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
////        wDlg.exec();
//        m_CriticalWarningDlg.SetWarningStr(str);
//        //m_CriticalWarningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
//        m_CriticalWarningDlg.move(this->x(),this->y());
//        if(!m_CriticalWarningDlg.isVisible())
//        {
//            m_CriticalWarningDlg.show();
//        }
//    }
//    else
//    {
//        if(m_CriticalWarningDlg.isVisible())
//        {
//            str = QSTR("通信中断");
//            m_CriticalWarningDlg.SetWarningStr(str);
//            m_CriticalWarningDlg.hide();
//        }
//    }
    if (D_FAULTS_SCANNING_CODE17 & retVal)
    {
        str = "Both Direction Actived!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
    if (D_FAULTS_SCANNING_CODE18 & retVal)
    {
        str = "Both Traction and Brake Actived!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
    if (D_FAULTS_SCANNING_CODE25 & retVal)
    {
        str = "Head&Tail switch confict!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
    if (D_FAULTS_SCANNING_CODE27 & retVal)
    {
        str = "Deadman event!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
}

int Dialog::InitSerialPort()
{
    BAUDRATE = B9600;
    MODEMDEVICE = "/dev/ttyS2";
    DATABITS = CS8;
    PARITYTYPE = 0;
    STOPBITS = 1;

    if ((fd = ::open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
        return 1;
    }

    int status;
    struct termios Opt;
    tcgetattr(fd, &Opt);
    tcflush(fd, TCIOFLUSH);
    cfsetispeed(&Opt, BAUDRATE);
    cfsetospeed(&Opt, BAUDRATE);
    status =  tcsetattr(fd ,TCSANOW, &Opt);
    if (status != 0)
    {
        return 2;
    }
    tcflush(fd, TCIOFLUSH);

    struct termios options;
    if (tcgetattr( fd, &options ) != 0 )
    {
        return 3;
    }
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= DATABITS;
    options.c_cflag &= ~PARENB;
    options.c_iflag &= ~INPCK;
    options.c_cflag &= ~CSTOPB;

    tcflush(fd, TCIFLUSH);

    options.c_lflag = 0;
    options.c_oflag = 0;
    options.c_iflag &= ~( ICRNL|IXON);
    options.c_cc[VTIME] = 1;
    options.c_cc[VMIN] = 0;
    if(tcsetattr(fd, TCSANOW,&options) != 0)
    {
        return 4;
    }
    isOpen = true;
    return 0;
}

void Dialog::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    ::close(fd);
    isOpen = false;
}

int Dialog::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

int Dialog::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData, 100);
    }
    mutexRead.unlock();
    return nread;
}

void Dialog::BackLightCtrl(bool bOpen)
{
    char open_cmd[] = {0x1B,0x23,0x30,0x32,0x2C,0x31,0x0D};
    char close_cmd[] = {0x1B,0x23,0x30,0x32,0x2C,0x30,0x0D};

    if(InitSerialPort() != 0 )
        return;

    if(bOpen)
        ComWrite(open_cmd, sizeof(open_cmd)/sizeof(char));
    else
        ComWrite(close_cmd, sizeof(close_cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
void Dialog::SetWarningTemperature()
{
    char cmd[] = {0x1B,0x23,0x32,0x39,0x2C,0x38,0x30,0x0D}; // cmd 29,temperatue 80

    if(InitSerialPort() != 0 )
        return;
    ComWrite(cmd, sizeof(cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
// set HMI in Tc1 or Tc2 ? and set IP address
void Dialog::HMI_Initial_Set()
{
    /*

        char cmd[20] ; // cmd 94,device address
        cmd[0] = 0x1B;
        cmd[1] = 0x23;
        cmd[2] = 0x39;
        cmd[3] = 0x34;
        cmd[4] = 0x0D;
        int len = 0;
        int timer1 = 0;
        int power_id_ok=0;

       // system("setserial /dev/ttyS2 irq 10");
        if(InitSerialPort() != 0 )
        {
            return;
        }
        //读电源ID编码3次，有返回值则跳出for循环
        for(int i=0;i<3;i++)
        {
                timer1=0;
                if( ComWrite( cmd, 5 ) == 5 )
                {
                    //发送读取电源编码命令成功，则进入循环等待h8返回的数据
                    while(1)
                    {
                        len = ComRead( cmd );
                        usleep(300);

                        if(timer1>180)
                        {
                            break;    //while
                        }
                        else
                        {
                            timer1++;
                        }
                        if( len==8 )
                        {
                            for(int j=0;j<len;j++)
                            {
                                test_tempdata[j]=cmd[j];
                            }
                            if( cmd[1]==0x01 && cmd[2]==0x23 && cmd[3]==0x39 && cmd[4]==0x34 && cmd[5]==0x2C )
                            {
                                if((cmd[6]==0x31)||(cmd[6]==0x30))
                                {
                                    if(cmd[6]==0x31)
                                    {
                                        TC1_HMI=0;
                                        TC2_HMI=1;
                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));

                                        power_id_ok=1;
                                    }
                                    if(cmd[6]==0x30)
                                    {
                                        TC1_HMI=1;
                                        TC2_HMI=0;
                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));

                                        power_id_ok=1;
                                    }
                                }

                            }
                            break;   //while
                        }

                    }

                    if(power_id_ok==1)
                    {
                        test_tempdata[64]=i;
                        test_tempdata[65]=power_id_ok;
                        test_tempdata[66]=timer1;
                        break;   //for
                    }
                }
                else
                {
                    usleep(300);
                    //continue;
                }
        }
        //没有正确读到电源编码，则使用上次正确读取编码时的数值
        if(power_id_ok==0)
        {
            if(TC1_HMI_ini==1)
            {
                TC1_HMI=1;
                TC2_HMI=0;
            }
            else
            {
                if(TC2_HMI_ini==1)
                {
                        TC2_HMI=1;
                        TC1_HMI=0;
                }
                else
                {
                    TC2_HMI=0;
                    TC1_HMI=0;
                }
            }

            //test_tempdata[64]=i;
            test_tempdata[65]=power_id_ok;
            test_tempdata[66]=timer1;

        }
        usleep(200);
        CloseSerialPort();
        */

}
void Dialog::testRiomBoardOnLineSlot()
{
    if(mc1_sgn_lifrsignal!=SGNLIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_sgn_lifrsignal = SGNLIFESIGNAL_MC1_RIOM_BYTE;
        mc1_sgn_onLine = true;
    }
    else
    {
        mc1_sgn_onLine = false;
    }

    if(mc1_ax_lifrsignal!=AXLIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_ax_lifrsignal = AXLIFESIGNAL_MC1_RIOM_BYTE;
        mc1_ax_onLine = true;
    }
    else
    {
        mc1_ax_onLine = false;
    }

    if(mc1_di1_lifrsignal!=DI1LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_di1_lifrsignal = DI1LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_di1_onLine = true;
    }
    else
    {
        mc1_di1_onLine = false;
    }

    if(mc1_di2_lifrsignal!=DI2LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_di2_lifrsignal = DI2LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_di2_onLine = true;
    }
    else
    {
        mc1_di2_onLine = false;
    }

    if(mc1_do1_lifrsignal!=DO1LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_do1_lifrsignal = DO1LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_do1_onLine = true;
    }
    else
    {
        mc1_do1_onLine = false;
    }

    if(mc1_do2_lifrsignal!=DO2LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_do2_lifrsignal = DO2LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_do2_onLine = true;
    }
    else
    {
        mc1_do2_onLine = false;
    }

    if(mc2_sgn_lifrsignal!=SGNLIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_sgn_lifrsignal = SGNLIFESIGNAL_MC2_RIOM_BYTE;
        mc2_sgn_onLine = true;
    }
    else
    {
        mc2_sgn_onLine = false;
    }

    if(mc2_ax_lifrsignal!=AXLIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_ax_lifrsignal = AXLIFESIGNAL_MC2_RIOM_BYTE;
        mc2_ax_onLine = true;
    }
    else
    {
        mc2_ax_onLine = false;
    }

    if(mc2_di1_lifrsignal!=DI1LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_di1_lifrsignal = DI1LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_di1_onLine = true;
    }
    else
    {
        mc2_di1_onLine = false;
    }

    if(mc2_di2_lifrsignal!=DI2LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_di2_lifrsignal = DI2LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_di2_onLine = true;
    }
    else
    {
        mc2_di2_onLine = false;
    }

    if(mc2_do1_lifrsignal!=DO1LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_do1_lifrsignal = DO1LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_do1_onLine = true;
    }
    else
    {
        mc2_do1_onLine = false;
    }

    if(mc2_do2_lifrsignal!=DO2LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_do2_lifrsignal = DO2LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_do2_onLine = true;
    }
    else
    {
        mc2_do2_onLine = false;
    }
}
void Dialog::restartScreenUptateSlot()
{
    screenUpdateCntBack = 0;
    screenUpdateCnt = 1;
    UpdateDataTimer.stop();
    UpdateDataTimer.start(400);
}
