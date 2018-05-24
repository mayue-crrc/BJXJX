#ifndef MvbThread_H
#define MvbThread_H
#include <QtGui/QApplication>
#include <QThread>
#include <QByteArray>
#include <QMutex>
#include <QWaitCondition>
#include <QTimer>

#ifdef DEBUG
#include <QVariant>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#endif
#include "databuffer.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"
class MvbThread:public QThread
{
    Q_OBJECT
public:
    MvbThread();
    ~MvbThread();
    void render();
//signals:

//public slots:

private:
    bool restart;
    bool abort;
    QWaitCondition condition;
    QMutex mutex;



 //src
    //HMI is on MA
       PIXYMVB_Data srcPortData321;//0x321=801   IDU_HVAC(From MA)
       PIXYMVB_Data srcPortData200;//0x200=512   IDU_CCU(From MA)
    //HMI is on MB
       PIXYMVB_Data srcPortData322;//0x322=802   IDU_HVAC(From MB) 
       PIXYMVB_Data srcPortData201;//0x201=513   IDU_CCU(From MB)
 //snk
       //IDU to IDU
   //HMI is on MB
       PIXYMVB_Data snkPortData321;//0x321=801   IDU_HVAC(From MA)(For MB)
       PIXYMVB_Data snkPortData200;//0x200=512   IDU_CCU(From MA)(For MB)
   //HMI is on MA
       PIXYMVB_Data snkPortData322;//0x322=802   IDU_HVAC(From MB)(For MA)
       PIXYMVB_Data snkPortData201;//0x201=513   IDU_CCU(From MB)(For MA)

       //Door
       PIXYMVB_Data snkPortData051;//0x051=81    DoorMA_ALL
       PIXYMVB_Data snkPortData052;//0x052=82    DoorRA_ALL
       PIXYMVB_Data snkPortData053;//0x053=83    DoorRB_ALL
       PIXYMVB_Data snkPortData054;//0x054=84    DoorMB_ALL

       //HVAC_RA & HVAC_RB
       PIXYMVB_Data snkPortData061;//0x061=97     HVACRA_ALL
       PIXYMVB_Data snkPortData062;//0x062=98     HVACRB_ALL
       //Remote
       PIXYMVB_Data snkPortData064;//0x064=100    GTW_CCU
       PIXYMVB_Data snkPortData065;//0x065=101    CCU_GTW

       //PIXYMVB_Data snkPortData069;//0x069=105    CCU_GTW(R1_MVB_1 output from CCU on master TS)
       //PIXYMVB_Data snkPortData06a;//0x06a=106    CCU_GTW(R1_MVB_2 output from CCU on master TS)
       //PIXYMVB_Data snkPortData06b;//0x06b=107    CCU_GTW(R1_MVB_3 output from CCU on master TS)
       //PIXYMVB_Data snkPortData06c;//0x06c=108    CCU_GTW(R1_MVB_4 output from CCU on master TS)
       PIXYMVB_Data snkPortData06d;//0x06d=109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
       PIXYMVB_Data snkPortData06e;//0x06e=110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)

       //PIXYMVB_Data snkPortData073;//0x073=115    GTW_CCU(R1_MVB_REM_1 input for slave TS)
       //PIXYMVB_Data snkPortData074;//0x074=116    GTW_CCU(R1_MVB_REM_2 input for slave TS)
       //PIXYMVB_Data snkPortData075;//0x075=117    GTW_CCU(R1_MVB_REM_3 input for slave TS)
       //PIXYMVB_Data snkPortData076;//0x076=118    GTW_CCU(R1_MVB_REM_4 input for slave TS)

       PIXYMVB_Data snkPortData079;//0x079=121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
       PIXYMVB_Data snkPortData083;//0x083=131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)
       PIXYMVB_Data snkPortData08d;//0x08d=141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
       PIXYMVB_Data snkPortData097;//0x097=151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)

       PIXYMVB_Data snkPortData06f;//0x06f=111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                  //Status of the local Vehicle for IDU
       PIXYMVB_Data snkPortData070;//0x070=112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                  //Diagnostic data of local Vehicle for IDU

       //CCU to All
       PIXYMVB_Data snkPortData0fa;//0x0fa=250    CCU_All


       //BCU to CCU & CCU to BCU
       PIXYMVB_Data snkPortData100;//0x100=256    BCU1_CCU(P)
       PIXYMVB_Data snkPortData101;//0x101=257    BCU1_CCU(P)
       PIXYMVB_Data snkPortData102;//0x102=258    BCU1_CCU(P)
       PIXYMVB_Data snkPortData103;//0x103=259    BCU1_CCU(P)
       PIXYMVB_Data snkPortData104;//0x104=260    BCU2_CCU(MA)
       PIXYMVB_Data snkPortData105;//0x105=261    BCU2_CCU(MA)
       PIXYMVB_Data snkPortData107;//0x107=263    BCU2_CCU(MA)


       PIXYMVB_Data snkPortData170;//0x170=368    BCU3_CCU(MB)
       PIXYMVB_Data snkPortData171;//0x171=369    BCU3_CCU(MB)
       PIXYMVB_Data snkPortData173;//0x173=371    BCU3_CCU(MB)

       PIXYMVB_Data snkPortData177;//0x177=375    BCU2_CCU(MA) for test
       PIXYMVB_Data snkPortData178;//0x178=376    BCU1_CCU(P) for test
       PIXYMVB_Data snkPortData179;//0x179=377    BCU3_CCU(MB) for test


       PIXYMVB_Data snkPortData108;//0x108=264    CCU_BCU(Commands to BCU of MA,P,MB)
       PIXYMVB_Data snkPortData109;//0x109=265    CCU_BCU(Commands to BCU of MA,P,MB)
       PIXYMVB_Data snkPortData10a;//0x10a=266    CCU_BCU(Commands to BCU of MA,P,MB)
       PIXYMVB_Data snkPortData10b;//0x10b=267    TCU1_BCU
                                   //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
       PIXYMVB_Data snkPortData10c;//0x10c=268    TCU2_BCU
                                   //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
       PIXYMVB_Data snkPortData10d;//0x10d=269    TCU3_BCU
                                   //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
       PIXYMVB_Data snkPortData10e;//0x10e=270    TCU4_BCU
                                   //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))

       //TCU to CCU & CCU to TCU
       PIXYMVB_Data snkPortData12d;//0x12d=301    CCU_TCU1
       PIXYMVB_Data snkPortData12e;//0x12e=302    CCU_TCU2
       PIXYMVB_Data snkPortData12f;//0x12f=303    CCU_TCU3
       PIXYMVB_Data snkPortData130;//0x130=304    CCU_TCU4


       PIXYMVB_Data snkPortData191;//0x191=401    TCU1_CCU_1(TCU1 status)
       PIXYMVB_Data snkPortData192;//0x192=402    TCU2_CCU_1(TCU2 status)
       PIXYMVB_Data snkPortData193;//0x193=403    TCU3_CCU_1(TCU3 status)
       PIXYMVB_Data snkPortData194;//0x194=404    TCU4_CCU_1(TCU4 status)

       PIXYMVB_Data snkPortData19b;//0x19b=411    TCU1_CCU_2(TCU1 diagnostic codes and status)
       PIXYMVB_Data snkPortData19c;//0x19c=412    TCU2_CCU_2(TCU2 diagnostic codes and status)
       PIXYMVB_Data snkPortData19d;//0x19d=413    TCU3_CCU_2(TCU3 diagnostic codes and status)
       PIXYMVB_Data snkPortData19e;//0x19e=414    TCU4_CCU_2(TCU4 diagnostic codes and status)

       PIXYMVB_Data snkPortData1a5;//0x1a5=421    TCU1_CCU_3(TCU1 analog signals)
       PIXYMVB_Data snkPortData1a6;//0x1a6=422    TCU2_CCU_3(TCU2 analog signals)
       PIXYMVB_Data snkPortData1a7;//0x1a7=423    TCU3_CCU_3(TCU3 analog signals)
       PIXYMVB_Data snkPortData1a8;//0x1a8=424    TCU4_CCU_3(TCU4 analog signals)

       PIXYMVB_Data snkPortData1af;//0x1af=431    TCU1_CCU_4(TCU1 battery charger status)
       PIXYMVB_Data snkPortData1b0;//0x1b0=432    TCU2_CCU_4(TCU2 battery charger status)
       PIXYMVB_Data snkPortData1b1;//0x1b1=433    TCU3_CCU_4(TCU3 battery charger status)
       PIXYMVB_Data snkPortData1b2;//0x1b2=434    TCU4_CCU_4(TCU4 battery charger status)

       PIXYMVB_Data snkPortData1b9;//0x1b9=441    TCU1_CCU_5(TCU1 auxiliary convertor status)
       PIXYMVB_Data snkPortData1ba;//0x1ba=442    TCU2_CCU_5(TCU2 auxiliary convertor status)
       PIXYMVB_Data snkPortData1bb;//0x1bb=443    TCU3_CCU_5(TCU3 auxiliary convertor status)
       PIXYMVB_Data snkPortData1bc;//0x1bc=444    TCU4_CCU_5(TCU4 auxiliary convertor status)

       PIXYMVB_Data snkPortData1c3;//0x1c3=451    TCU1_CCU_5(TCU1 data and time information)
       PIXYMVB_Data snkPortData1c4;//0x1c4=452    TCU2_CCU_5(TCU2 data and time information)
       PIXYMVB_Data snkPortData1c5;//0x1c5=453    TCU3_CCU_5(TCU3 data and time information)
       PIXYMVB_Data snkPortData1c6;//0x1c6=454    TCU4_CCU_5(TCU4 data and time information)

       PIXYMVB_Data snkPortData1cd;//0x1cd=461    TCU1_CCU_6(TCU1 analog signals)
       PIXYMVB_Data snkPortData1ce;//0x1ce=462    TCU2_CCU_6(TCU2 analog signals)
       PIXYMVB_Data snkPortData1cf;//0x1cf=463    TCU3_CCU_6(TCU3 analog signals)
       PIXYMVB_Data snkPortData1d0;//0x1d0=464    TCU4_CCU_6(TCU4 analog signals)

       PIXYMVB_Data snkPortData1d7;//0x1d7=471    TCU1_CCU_7(TCU1 energy counters)
       PIXYMVB_Data snkPortData1d8;//0x1d8=472    TCU2_CCU_7(TCU2 energy counters)
       PIXYMVB_Data snkPortData1d9;//0x1d9=473    TCU3_CCU_7(TCU3 energy counters)
       PIXYMVB_Data snkPortData1da;//0x1da=474    TCU4_CCU_7(TCU4 energy counters)
//*********2014.11.24 MVB thread
       //LCU to CCU & CCU to LCU
       //R_S(01/03/04/05/08)(1) Master logic I/O status
       PIXYMVB_Data snkPortData38f;//0x38f=911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
       PIXYMVB_Data snkPortData399;//0x399=921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
       PIXYMVB_Data snkPortData3a3;//0x3a3=931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
       PIXYMVB_Data snkPortData3ad;//0x3ad=941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
       PIXYMVB_Data snkPortData3b7;//0x3b7=951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)

       //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
       PIXYMVB_Data snkPortData390;//0x390=912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
       PIXYMVB_Data snkPortData39a;//0x39a=922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
       PIXYMVB_Data snkPortData3a4;//0x3a4=932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
       PIXYMVB_Data snkPortData3ae;//0x3ae=942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
       PIXYMVB_Data snkPortData3b8;//0x3b8=952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)

       //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
       PIXYMVB_Data snkPortData391;//0x391=913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
       PIXYMVB_Data snkPortData39b;//0x39b=923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
       PIXYMVB_Data snkPortData3a5;//0x3a5=933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
       PIXYMVB_Data snkPortData3af;//0x3af=943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
       PIXYMVB_Data snkPortData3b9;//0x3b9=953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)

       //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
       PIXYMVB_Data snkPortData392;//0x392=914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
       PIXYMVB_Data snkPortData39c;//0x39c=924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
       PIXYMVB_Data snkPortData3a6;//0x3a6=934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
       PIXYMVB_Data snkPortData3b0;//0x3b0=944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
       PIXYMVB_Data snkPortData3ba;//0x3ba=954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)

       //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
       PIXYMVB_Data snkPortData393;//0x393=915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
       PIXYMVB_Data snkPortData39d;//0x39d=925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
       PIXYMVB_Data snkPortData3a7;//0x3a7=935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
       PIXYMVB_Data snkPortData3b1;//0x3b1=945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
       PIXYMVB_Data snkPortData3bb;//0x3bb=955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)


       //RSE to CCU & CCU to RSE
       //PIXYMVB_Data snkPortData2ee;//0x2ee=750   CCU_RSE(Status to RSE)
       PIXYMVB_Data snkPortData2ef;//0x2ef=751   RSE_CCU(Status from RSE)
       //PIXYMVB_Data snkPortData2f0;//0x2f0=752   RSE_CCU(Status from RSE)
       //PIXYMVB_Data snkPortData2f1;//0x2f1=753   RSE_CCU(Status from RSE)
       //PIXYMVB_Data snkPortData2f2;//0x2f2=754   RSE_CCU(Status from RSE)


       //PIDS to PA to IDU
       PIXYMVB_Data snkPortData258;//0x258=600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
       PIXYMVB_Data snkPortData259;//0x259=601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
       PIXYMVB_Data snkPortData25a;//0x25a=602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
       PIXYMVB_Data snkPortData2bc;//0x2bc=700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
       PIXYMVB_Data snkPortData2bd;//0x2bd=701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)

       PIXYMVB_Data snkPortData1f5;//0x1f5=501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
       PIXYMVB_Data snkPortData1f6;//0x1f6=502   SUPC(RB)_IDU(RB SuperCap Status) 32 1024

       //MVB_STAT  LCU_RA to IDU
       PIXYMVB_Data snkPortData226;//0x226=550   SMVB_STAT  LCU_RA to IDU  16 1024




    //*************************Function***************************

    bool init();
    void run();
    UNSIGNED16 highbyteLowbyteExchange(const UNSIGNED16 wordData);

};

#endif // MVBTHREAD_H
