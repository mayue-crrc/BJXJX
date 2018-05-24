#ifndef C_DEBUG_REFRESH_TIME_H
#define C_DEBUG_REFRESH_TIME_H


#include "cpage.h"
#include "databuffer.h"


//snk
      //IDU to IDU
     #define ID_PIBRT_LABEL_321TIME     0x2b00   //0x321=801   IDU_HVAC(From MA)(For MB)
     #define ID_PIBRT_LABEL_322TIME     0x2b01   //0x322=802   IDU_HVAC(From MB)(For MA)
     #define ID_PIBRT_LABEL_200TIME     0x2b02   //0x200=512   IDU_CCU(From MA)(For MB)
     #define ID_PIBRT_LABEL_201TIME     0x2b03   //0x201=513   IDU_CCU(From MB)(For MA)

      //Door
     #define ID_PIBRT_LABEL_051TIME     0x2b04   //0x051=81    DoorMA_ALL
     #define ID_PIBRT_LABEL_052TIME     0x2b05   //0x052=82    DoorRA_ALL
     #define ID_PIBRT_LABEL_053TIME     0x2b06   //0x053=83    DoorRB_ALL
     #define ID_PIBRT_LABEL_054TIME     0x2b07   //0x054=84    DoorMB_ALL

      //HVAC_RA & HVAC_RB
     #define ID_PIBRT_LABEL_061TIME     0x2b08   //0x061=97     HVACRA_ALL
     #define ID_PIBRT_LABEL_062TIME     0x2b09   //0x062=98     HVACRB_ALL
      //Remote
     #define ID_PIBRT_LABEL_064TIME     0x2b0a   //0x064=100    GTW_CCU
     #define ID_PIBRT_LABEL_065TIME     0x2b0b   //0x065=101    CCU_GTW
     //#define ID_PIBRT_LABEL_069TIME     0x2b0c   //0x069=105    CCU_GTW(R1_MVB_1 output from CCU on master TS)
     //#define ID_PIBRT_LABEL_06aTIME     0x2b0d   //0x06a=106    CCU_GTW(R1_MVB_2 output from CCU on master TS)
     //#define ID_PIBRT_LABEL_06bTIME     0x2b0e   //0x06b=107    CCU_GTW(R1_MVB_3 output from CCU on master TS)
     //#define ID_PIBRT_LABEL_06cTIME     0x2b0f   //0x06c=108    CCU_GTW(R1_MVB_4 output from CCU on master TS)
     #define ID_PIBRT_LABEL_06dTIME     0x2b10   //0x06d=109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
     #define ID_PIBRT_LABEL_06eTIME     0x2b12   //0x06e=110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)

//     #define ID_PIBRT_LABEL_073TIME     0x2b13   //0x073=115    GTW_CCU(R1_MVB_REM_1 input for slave TS)
//     #define ID_PIBRT_LABEL_074TIME     0x2b14   //0x074=116    GTW_CCU(R1_MVB_REM_2 input for slave TS)
//     #define ID_PIBRT_LABEL_075TIME     0x2b15   //0x075=117    GTW_CCU(R1_MVB_REM_3 input for slave TS)
//     #define ID_PIBRT_LABEL_076TIME     0x2b16   //0x076=118    GTW_CCU(R1_MVB_REM_4 input for slave TS)

     #define ID_PIBRT_LABEL_079TIME     0x2b17   //0x079=121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
     #define ID_PIBRT_LABEL_083TIME     0x2b18   //0x083=131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)
     #define ID_PIBRT_LABEL_08dTIME     0x2b19   //0x08d=141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
     #define ID_PIBRT_LABEL_097TIME     0x2b1a   //0x097=151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)

     #define ID_PIBRT_LABEL_06fTIME     0x2b1b   //0x06f=111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                 //Status of the local Vehicle for IDU
     #define ID_PIBRT_LABEL_070TIME     0x2b1c   //0x070=112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                 //Diagnostic data of local Vehicle for IDU

      //CCU to All
     #define ID_PIBRT_LABEL_0faTIME     0x2b1d   //0x0fa=250    CCU_All

      //BCU to CCU & CCU to BCU
     #define ID_PIBRT_LABEL_100TIME     0x2b1e   //0x100=256    BCU1_CCU(P)
     #define ID_PIBRT_LABEL_101TIME     0x2b1f   //0x101=257    BCU1_CCU(P)
     #define ID_PIBRT_LABEL_102TIME     0x2b20   //0x102=258    BCU1_CCU(P)
     #define ID_PIBRT_LABEL_103TIME     0x2b21   //0x103=259    BCU1_CCU(P)
     #define ID_PIBRT_LABEL_104TIME     0x2b22   //0x104=260    BCU2_CCU(MA)
     #define ID_PIBRT_LABEL_105TIME     0x2b23   //0x105=261    BCU2_CCU(MA)
     #define ID_PIBRT_LABEL_107TIME     0x2b24   //0x107=263    BCU2_CCU(MA)
     #define ID_PIBRT_LABEL_170TIME     0x2b25   //0x170=368    BCU3_CCU(MB)
     #define ID_PIBRT_LABEL_171TIME     0x2b26   //0x171=369    BCU3_CCU(MB)
     #define ID_PIBRT_LABEL_173TIME     0x2b27   //0x173=371    BCU3_CCU(MB)

     #define ID_PIBRT_LABEL_177TIME     0x2b28   //0x177=375    BCU2_CCU(MA) for test
     #define ID_PIBRT_LABEL_178TIME     0x2b29   //0x178=376    BCU1_CCU(P) for test
     #define ID_PIBRT_LABEL_179TIME     0x2b2a   //0x179=377    BCU3_CCU(MB) for test


     #define ID_PIBRT_LABEL_108TIME     0x2b2b   //0x108=264    CCU_BCU(Commands to BCU of MA,P,MB)
     #define ID_PIBRT_LABEL_109TIME     0x2b2c   //0x109=265    CCU_BCU(Commands to BCU of MA,P,MB)
     #define ID_PIBRT_LABEL_10aTIME     0x2b2d   //0x10a=266    CCU_BCU(Commands to BCU of MA,P,MB)
     #define ID_PIBRT_LABEL_10bTIME     0x2b2e   //0x10b=267    TCU1_BCU
                                  //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
     #define ID_PIBRT_LABEL_10cTIME     0x2b2f   //0x10c=268    TCU2_BCU
                                  //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
     #define ID_PIBRT_LABEL_10dTIME     0x2b30   //0x10d=269    TCU3_BCU
                                  //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
     #define ID_PIBRT_LABEL_10eTIME     0x2b31   //0x10e=270    TCU4_BCU
                                  //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))

      //TCU to CCU & CCU to TCU
     #define ID_PIBRT_LABEL_12dTIME     0x2b32   //0x12d=301    CCU_TCU1
     #define ID_PIBRT_LABEL_12eTIME     0x2b33   //0x12e=302    CCU_TCU2
     #define ID_PIBRT_LABEL_12fTIME     0x2b34   //0x12f=303    CCU_TCU3
     #define ID_PIBRT_LABEL_130TIME     0x2b35   //0x130=304    CCU_TCU4


     #define ID_PIBRT_LABEL_191TIME     0x2b36   //0x191=401    TCU1_CCU_1(TCU1 status)
     #define ID_PIBRT_LABEL_192TIME     0x2b37   //0x192=402    TCU2_CCU_1(TCU2 status)
     #define ID_PIBRT_LABEL_193TIME     0x2b38   //0x193=403    TCU3_CCU_1(TCU3 status)
     #define ID_PIBRT_LABEL_194TIME     0x2b39   //0x194=404    TCU4_CCU_1(TCU4 status)

     #define ID_PIBRT_LABEL_19bTIME     0x2b3a   //0x19b=411    TCU1_CCU_2(TCU1 diagnostic codes and status)
     #define ID_PIBRT_LABEL_19cTIME     0x2b3b   //0x19c=412    TCU2_CCU_2(TCU2 diagnostic codes and status)
     #define ID_PIBRT_LABEL_19dTIME     0x2b3c   //0x19d=413    TCU3_CCU_2(TCU3 diagnostic codes and status)
     #define ID_PIBRT_LABEL_19eTIME     0x2b3d   //0x19e=414    TCU4_CCU_2(TCU4 diagnostic codes and status)

     #define ID_PIBRT_LABEL_1a5TIME     0x2b3e   //0x1a5=421    TCU1_CCU_3(TCU1 analog signals)
     #define ID_PIBRT_LABEL_1a6TIME     0x2b3f   //0x1a6=422    TCU2_CCU_3(TCU2 analog signals)
     #define ID_PIBRT_LABEL_1a7TIME     0x2b40   //0x1a7=423    TCU3_CCU_3(TCU3 analog signals)
     #define ID_PIBRT_LABEL_1a8TIME     0x2b41   //0x1a8=424    TCU4_CCU_3(TCU4 analog signals)

     #define ID_PIBRT_LABEL_1afTIME     0x2b42   //0x1af=431    TCU1_CCU_4(TCU1 battery charger status)
     #define ID_PIBRT_LABEL_1b0TIME     0x2b43   //0x1b0=432    TCU2_CCU_4(TCU2 battery charger status)
     #define ID_PIBRT_LABEL_1b1TIME     0x2b44   //0x1b1=433    TCU3_CCU_4(TCU3 battery charger status)
     #define ID_PIBRT_LABEL_1b2TIME     0x2b45   //0x1b2=434    TCU4_CCU_4(TCU4 battery charger status)

     #define ID_PIBRT_LABEL_1b9TIME     0x2b46   //0x1b9=441    TCU1_CCU_5(TCU1 auxiliary convertor status)
     #define ID_PIBRT_LABEL_1baTIME     0x2b47   //0x1ba=442    TCU2_CCU_5(TCU2 auxiliary convertor status)
     #define ID_PIBRT_LABEL_1bbTIME     0x2b48   //0x1bb=443    TCU3_CCU_5(TCU3 auxiliary convertor status)
     #define ID_PIBRT_LABEL_1bcTIME     0x2b49   //0x1bc=444    TCU4_CCU_5(TCU4 auxiliary convertor status)

     #define ID_PIBRT_LABEL_1c3TIME     0x2b4a   //0x1c3=451    TCU1_CCU_5(TCU1 data and time information)
     #define ID_PIBRT_LABEL_1c4TIME     0x2b4b   //0x1c4=452    TCU2_CCU_5(TCU2 data and time information)
     #define ID_PIBRT_LABEL_1c5TIME     0x2b4c   //0x1c5=453    TCU3_CCU_5(TCU3 data and time information)
     #define ID_PIBRT_LABEL_1c6TIME     0x2b4d   //0x1c6=454    TCU4_CCU_5(TCU4 data and time information)

     #define ID_PIBRT_LABEL_1cdTIME     0x2b4e  //0x1cd=461    TCU1_CCU_6(TCU1 analog signals)
     #define ID_PIBRT_LABEL_1ceTIME     0x2b4f   //0x1ce=462    TCU2_CCU_6(TCU2 analog signals)
     #define ID_PIBRT_LABEL_1cfTIME     0x2b50   //0x1cf=463    TCU3_CCU_6(TCU3 analog signals)
     #define ID_PIBRT_LABEL_1d0TIME     0x2b51   //0x1d0=464    TCU4_CCU_6(TCU4 analog signals)

     #define ID_PIBRT_LABEL_1d7TIME     0x2b52   //0x1d7=471    TCU1_CCU_7(TCU1 energy counters)
     #define ID_PIBRT_LABEL_1d8TIME     0x2b53   //0x1d8=472    TCU2_CCU_7(TCU2 energy counters)
     #define ID_PIBRT_LABEL_1d9TIME     0x2b54   //0x1d9=473    TCU3_CCU_7(TCU3 energy counters)
     #define ID_PIBRT_LABEL_1daTIME     0x2b55   //0x1da=474    TCU4_CCU_7(TCU4 energy counters)
//*********2014.11.24 MVB thread
      //LCU to CCU & CCU to LCU
      //R_S(01/03/04/05/08)(1) Master logic I/O status
     #define ID_PIBRT_LABEL_38fTIME     0x2b56   //0x38f=911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
     #define ID_PIBRT_LABEL_399TIME     0x2b57   //0x399=921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
     #define ID_PIBRT_LABEL_3a3TIME     0x2b58   //0x3a3=931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
     #define ID_PIBRT_LABEL_3adTIME     0x2b59   //0x3ad=941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
     #define ID_PIBRT_LABEL_3b7TIME     0x2b5a   //0x3b7=951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)

      //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
     #define ID_PIBRT_LABEL_390TIME     0x2b5b   //0x390=912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
     #define ID_PIBRT_LABEL_39aTIME     0x2b5c   //0x39a=922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
     #define ID_PIBRT_LABEL_3a4TIME     0x2b5d   //0x3a4=932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
     #define ID_PIBRT_LABEL_3aeTIME     0x2b5e   //0x3ae=942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
     #define ID_PIBRT_LABEL_3b8TIME     0x2b5f   //0x3b8=952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)

      //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
     #define ID_PIBRT_LABEL_391TIME     0x2b60   //0x391=913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
     #define ID_PIBRT_LABEL_39bTIME     0x2b61   //0x39b=923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
     #define ID_PIBRT_LABEL_3a5TIME     0x2b62   //0x3a5=933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
     #define ID_PIBRT_LABEL_3afTIME     0x2b63   //0x3af=943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
     #define ID_PIBRT_LABEL_3b9TIME     0x2b64   //0x3b9=953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)

      //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
     #define ID_PIBRT_LABEL_392TIME     0x2b65   //0x392=914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
     #define ID_PIBRT_LABEL_39cTIME     0x2b66   //0x39c=924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
     #define ID_PIBRT_LABEL_3a6TIME     0x2b67   //0x3a6=934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
     #define ID_PIBRT_LABEL_3b0TIME     0x2b68   //0x3b0=944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
     #define ID_PIBRT_LABEL_3baTIME     0x2b69   //0x3ba=954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)

      //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
     #define ID_PIBRT_LABEL_393TIME     0x2b6a   //0x393=915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
     #define ID_PIBRT_LABEL_39dTIME     0x2b6b   //0x39d=925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
     #define ID_PIBRT_LABEL_3a7TIME     0x2b6c   //0x3a7=935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
     #define ID_PIBRT_LABEL_3b1TIME     0x2b6d   //0x3b1=945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
     #define ID_PIBRT_LABEL_3bbTIME     0x2b6e   //0x3bb=955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)


      //RSE to CCU & CCU to RSE
     //#define ID_PIBRT_LABEL_2eeTIME     0x2b6f   //0x2ee=750   CCU_RSE(Status to RSE)
     #define ID_PIBRT_LABEL_2efTIME     0x2b70   //0x2ef=751   RSE_CCU(Status from RSE)
//     #define ID_PIBRT_LABEL_2f0TIME     0x2b71   //0x2f0=752   RSE_CCU(Status from RSE)
//     #define ID_PIBRT_LABEL_2f1TIME     0x2b72   //0x2f1=753   RSE_CCU(Status from RSE)
//     #define ID_PIBRT_LABEL_2f2TIME     0x2b73   //0x2f2=754   RSE_CCU(Status from RSE)

      //PIDS to PA to IDU
     #define ID_PIBRT_LABEL_258TIME     0x2b74   //0x258=600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
     #define ID_PIBRT_LABEL_259TIME     0x2b75   //0x259=601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
     #define ID_PIBRT_LABEL_25aTIME     0x2b76   //0x25a=602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
     #define ID_PIBRT_LABEL_2bcTIME     0x2b77   //0x2bc=700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
     #define ID_PIBRT_LABEL_2bdTIME     0x2b78   //0x2bd=701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)

      //SUPC to IDU
     #define ID_PIBRT_LABEL_1f5TIME     0x2b79   //0x1f5=501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
     #define ID_PIBRT_LABEL_1f6TIME     0x2b7a   //0x1f6=502   SUPC(RB)_IDU(RA SuperCap Status) 32 1024

      //MVB_STAT  LCU_RA to IDU
     #define ID_PIBRT_LABEL_226TIME     0x2b7b   //0x226=550   SUPC(RB)_IDU(RA SuperCap Status) 32 1024


#define  ID_PIBRT_LABEL_BACK         0x2ba5
#define  ID_PIBRT_LABEL_DEBUG         0x2ba3

#define ID_PIBRT_LABEL_HEAD          0x2ba4

extern vector<CPage*>  g_PageVec;





class CRefreshTimePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CRefreshTimePage)
public:
    CRefreshTimePage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void UpdateRefreshTime();
    void SetRefreshTimeLabelString(int id, int DataVal);
    void UpdateTimeoutRemind();
    void SetTimeoutRemind_0(int id, int DataVal);
    void SetTimeoutRemind_1(int id, int DataVal);
    void SetTimeoutRemind_2(int id, int DataVal);
    void SetTimeoutRemind_3(int id, int DataVal);
    void SetTimeoutRemind_4(int id, int DataVal);
    void SetTimeoutRemind_5(int id, int DataVal);
};


#endif // C_DEBUG_REFRESH_TIME_H
