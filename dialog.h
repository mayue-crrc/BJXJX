#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <qevent.h>
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qdebug.h>
#include <qprocess.h>
#include <QPalette>
#include <QColor>

#include "cpage.h"
#include "cglobal.h"
#include "serialthread232.h"
//#include "serialthread485.h"// 20131219 cancel
#include "faultcommonprocess.h"

//add by lsz 2016-1-19
#include "h8.h"

#include "cmainhelpdialog.h"
#include "cdebugdialog.h"
#include "csetcarsdirdlg.h"

#include "recorderthread.h"

//page head file
#include "cacustatepage.h"
#include "cbcustatepage.h"
#include "cdcdcstatepage.h"
#include "ccarcodesetpage.h"
#include "ccurrentfaultlistpage.h"
//#include "ccurrentstationsetpage.h"
#include "cdeviceselectpage.h"
#include "cdrivercodelistpage.h"
#include "cdrivercodemanagepage.h"
#include "cendtimesetpage.h"
#include "cendstationsetpage.h"
#include "cfaultalarmpage.h"
#include "cgradeselectpage.h"
#include "chistoryfaultlistpage.h"
#include "chvacparametersetpage.h"
#include "chvactestpage.h"
#include "chvacstatepage.h"
#include "cinstructiontestpage.h"
#include "cluminancesetpage.h"
#include "cmainpage.h"
#include "cmaintaineridlistpage.h"
#include "cmaintainermanagepage.h"
#include "cmodifyaccumulatemilepage.h"
#include "cnetstatepage.h"
#include "cdoorpage.h"
#include "cpantographstatectrl.h"
#include "cparametersetpage.h"
#include "cpispage.h"
#include "cstartstationsetpage.h"
#include "cstarttimesetpage.h"
#include "csysloginpage.h"
#include "csystimesetpage.h"
#include "ctcustatepage.h"
#include "cwheeldiametersetpage.h"
#include "cserialdatapage.h"
#include "cversionpage.h"
#include "ccriticalwarningdialog.h"
#include "clocaliopage.h"
#include "cmaincontrolcmdpage.h"
#include "cnetstatepagecoupled.h"
#include "cacustatepagecoupled.h"
#include "ctcustatepagecoupled.h"
#include "cbcustatepagecoupled.h"
#include "chvacstatepagecoupled.h"
#include "cfaultdlg.h"
#include "cmyaddpage.h"
#include "cudpdatapage1.h"
#include "C_Debug_Refresh_Time.h"
#include "CSerialDebugDialog.h"
#include "cdcdcstatepagecoupled.h"
#include "c_debugriomdetialpage.h"
#include "cwarningdialog.h"
#ifdef USE_MVB_DATA
#include "mvbthread.h"
#endif
#include "CRealTimeFaultsWarnningDialog.h"
#include "cpagepasswordset.h"
// add by lishizhi 2015-6-1
class PSettingDataBase;
#include "psettingdatabase.h"

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
    DECLEAR_PAGE_MANAGE()
public:
    Dialog(QWidget *parent = 0);
    CSerialDebugDialog serialDebugDlg;
    CRealTimeFaultsWarnningDialog dlg;
    ~Dialog();

protected slots:
    void OnUpdateData();
     void StartHVAC();
     void InitTime();
     void endInitHVACSet();
     void endInitTime();
     void InitHVACSet();
    void OnUpdateDate();
    void OnUpdateDeviceOnline();
    void get232RevDataSlot( const QByteArray &data, int length );
//    void get485RevDataSlot( const QByteArray &data, int length );// 20131219 cancel
    void testRiomBoardOnLineSlot();
    void restartScreenUptateSlot();
protected:
    void keyPressEvent( QKeyEvent * event );
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);
    void closeEvent (QCloseEvent* e);

private:

#ifdef USE_MVB_DATA
    MvbThread *m_mvbthread;
#endif


    //***************************************MVB*************************************
    void SetTrainCoupleMode();

    void initReceiveData();
    void SerialDebug();

    //*******************************************************************************
    //int iAdjustSystemTimeCnt; // 500m          gs count++,every minute adjust idu time to vcu time
    void setScreenTime(int year, int mon, int day, int hour, int minute, int second);
    bool oldADJUSTTIME_ENABLE_BOOL;
    Ui::Dialog *ui;
    RecorderThread recorderThread;
    unsigned int m_nRs232RevErrorNum/*,m_nRs485RevErrorNum*/;// 20131219 cancel
    CCriticalWarningDialog m_CriticalWarningDlg;
    CFaultDlg m_FaultDlg;

    //QTimer dateTimer;
    QTimer UpdateDataTimer;
    QTimer timer_settingHVAC;
    SerialThread232 *m_serialThread232;

    PSettingDataBase* settingDataBase;
//    SerialThread485 *m_serialThread485;// 20131219 cancel
    void UpdateTimers();
    void getDefaultParameter();
    void ReadFaultsDef();
    void CreateSendData();
    void UpdateHVACSet();
    void sendHVACSet();



    void SetKeyStateMode();
    void ShowWarnningDialog(int retVal);
    void ShowWarnningDialog();
    void globalDataInit();
    //screen serial
    int fd;
    int InitSerialPort();
    void CloseSerialPort();
    int ComWrite(char *writeData, int len);
    int ComRead(char *readData);
    void BackLightCtrl(bool bOpen);
    void SetWarningTemperature();
    void HMI_Initial_Set();
    bool isOpen;
    int BAUDRATE;
    const char *MODEMDEVICE;
    int DATABITS;
    int PARITYTYPE;
    int STOPBITS;
    QMutex mutexRead, mutexWrite;

    QString carIDToString(__in quint16 data);
    QMutex m_UpdateMutex;

    //quint32 m_nPreCLKtime;

    int StationSettedSuccess_Cnt;
    int SkipStationSettedSuccess_Cnt;
    int Main_AccumulateKmSettedFlag_Cnt;
    int lightOn_Cnt;
    int g_Vehicle_CodeSet_enable_cnt;
    int InstructionTest11_Cnt;
    int InstructionTest12_Cnt;
    int InstructionTest13_Cnt;
    int InstructionTest14_Cnt;
    int InstructionTest15_Cnt;
    int InstructionTest18_Cnt;
    int InstructionTest19_Cnt;
    int systemTimeSet_Cnt;

    QTimer riomBoardOnLineTestTimer;
    QTimer HVAC_Eff_Timer;
    QTimer Time_Eff_Timer;
    QTimer HVAC_Start_Timer;
    QTimer Time_Init_Timer;
    QTimer Device_Online_Timer;
    QTimer Time_Update_Timer;

    CWarningDialog warningDlg;
    bool oldMAIN_INNOPOWERAREA_BOOL;
    bool oldMAIN_INLARGENOPOWERAREA_BOOL;
    bool oldMAIN_OUTNOPOWERAREA_BOOL;
    bool oldMAIN_CURRENTINLARGENOPOWERAREA_BOOL;
    //2014-5-28 add faultdlgflag
    bool m_FaultDlgFlag;
    int timer5scount;
    bool m_oldCCUtimeflg;
    QDialog*        m_pDlg;



};

#endif // DIALOG_H
