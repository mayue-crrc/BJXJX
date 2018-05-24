#include "mvbthread.h"
#include "cglobal.h"
#include "stdio.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"
#include "databuffer.h"

MvbThread::MvbThread()
{
}

MvbThread::~MvbThread()
{
}

bool MvbThread::init()
{

#ifndef windows_demo
    UNSIGNED16 RetVal = 0;
     restart = false;
     abort = false;

   // Initialize MVB
   // PIXYMVB_MIN_TMMODEL or PIXYMVB_MAX_TMMODEL
   // PIXYMVB_MIN_TMMODEL equals to 64KB of MVB Traffic Store,
   // the default. PIXYMVB_MAX_TMMODEL is equal to 256KB of MVB Traffic Store.
   // PIXYMVB_PHY_OFG is an OFG Interface Opto Port
   // PIXYMVB_PHY_ESD is an ESD(+) Interface
   // PIXYMVB_PHY_EMD is an EMD Interface
   // deviceID:
   // snkTmeSupvIntv:0 = Inactive, 1 = 1 ms, 2 = 2 ms, 3 = 4 ms, 4 = 8 ms, 5 = 16 ms,
   // 6 = 32 ms, 7 = 64 ms, 8 = 128 ms, 9 = 256 ms
   //qDebug() <<"TC1_HMI:"<<TC1_HMI<<"TC2_HMI:"<<TC2_HMI;

 //Initialize
 //Initialize MVB  pixymvb_CfgHWInit()

     if(TC1_HMI==1)
      {
         m_Test_DeviceID = 1;
          RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x7, 1 );

          #ifdef LOG_OPEN
          qDebug() <<"TC1_HMI:"<<"pixymvb_CfgHWInit Tc1:"<<RetVal;
          #endif

      }
      else
      {
          if(TC2_HMI==1)
          {
              m_Test_DeviceID = 2;
              RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x8, 1 );

              #ifdef LOG_OPEN
              qDebug() <<"TC2_HMI:"<<"pixymvb_CfgHWInit Tc2:"<<RetVal;
              #endif
          }
          else
          {
              m_Test_DeviceID = 3;
              //*******************2015.12.4
              // RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x8, 1 );
              RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x7, 1 );

              #ifdef LOG_OPEN
              qDebug() <<"TC1_HMI:"<<"pixymvb_CfgHWInit Tc1:"<<RetVal;
              #endif
          }
      }

      if ( PIXYMVB_OK != RetVal )
         {
             return(false);
         }


     //src
      memset( srcPortData321,0,sizeof(srcPortData321)); // 801   IDU_HVAC(From MA)
      memset( srcPortData322,0,sizeof(srcPortData322)); // 802   IDU_HVAC(From MB)
      memset( srcPortData200,0,sizeof(srcPortData200)); // 512   IDU_CCU(From MA)
      memset( srcPortData201,0,sizeof(srcPortData201)); // 513   IDU_CCU(From MB)
     //snk
           //IDU to IDU
      memset( snkPortData321,0,sizeof(snkPortData321)); // 801   IDU_HVAC(From MA)(For MB)
      memset( snkPortData322,0,sizeof(snkPortData322)); // 802   IDU_HVAC(From MB)(For MA)
      memset( snkPortData200,0,sizeof(snkPortData200)); // 512   IDU_CCU(From MA)(For MB)
      memset( snkPortData201,0,sizeof(snkPortData201)); // 513   IDU_CCU(From MB)(For MA)

           //Door
      memset( snkPortData051,0,sizeof(snkPortData051)); // 81    DoorMA_ALL
      memset( snkPortData052,0,sizeof(snkPortData052)); // 82    DoorRA_ALL
      memset( snkPortData053,0,sizeof(snkPortData053)); // 83    DoorRB_ALL
      memset( snkPortData054,0,sizeof(snkPortData054)); // 84    DoorMB_ALL

           //HVAC_RA & HVAC_RB
      memset( snkPortData061,0,sizeof(snkPortData061)); // 97     HVACRA_ALL
      memset( snkPortData062,0,sizeof(snkPortData062)); // 98     HVACRB_ALL
           //Remote
      memset( snkPortData064,0,sizeof(snkPortData064)); // 100    GTW_CCU
      memset( snkPortData065,0,sizeof(snkPortData065)); // 101    CCU_GTW

      memset( snkPortData06d,0,sizeof(snkPortData06d)); // 109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
      memset( snkPortData06e,0,sizeof(snkPortData06e)); // 110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)



      memset( snkPortData079,0,sizeof(snkPortData079)); // 121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
      memset( snkPortData083,0,sizeof(snkPortData083)); // 131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)
      memset( snkPortData08d,0,sizeof(snkPortData08d)); // 141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
      memset( snkPortData097,0,sizeof(snkPortData097)); // 151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)

      memset( snkPortData06f,0,sizeof(snkPortData06f)); // 111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                      //Status of the local Vehicle for IDU
      memset( snkPortData070,0,sizeof(snkPortData070)); // 112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                      //Diagnostic data of local Vehicle for IDU

           //CCU to All
      memset( snkPortData0fa,0,sizeof(snkPortData0fa)); // 250    CCU_All


           //BCU to CCU & CCU to BCU
      memset( snkPortData100,0,sizeof(snkPortData100)); // 256    BCU1_CCU(P)
      memset( snkPortData101,0,sizeof(snkPortData101)); // 257    BCU1_CCU(P)
      memset( snkPortData102,0,sizeof(snkPortData102)); // 258    BCU1_CCU(P)
      memset( snkPortData103,0,sizeof(snkPortData103)); // 259    BCU1_CCU(P)
      memset( snkPortData104,0,sizeof(snkPortData104)); // 260    BCU2_CCU(MA)
      memset( snkPortData105,0,sizeof(snkPortData105)); // 261    BCU2_CCU(MA)
      memset( snkPortData107,0,sizeof(snkPortData107)); // 263    BCU2_CCU(MA)
      memset( snkPortData170,0,sizeof(snkPortData170)); // 368    BCU3_CCU(MB)
      memset( snkPortData171,0,sizeof(snkPortData171)); // 369    BCU3_CCU(MB)
      memset( snkPortData173,0,sizeof(snkPortData173)); // 371    BCU3_CCU(MB)

      memset( snkPortData177,0,sizeof(snkPortData177)); // 375    BCU2_CCU(MA) for test
      memset( snkPortData178,0,sizeof(snkPortData178)); // 376    BCU1_CCU(P) for test
      memset( snkPortData179,0,sizeof(snkPortData179)); // 377    BCU3_CCU(MB) for test


      memset( snkPortData108,0,sizeof(snkPortData108)); // 264    CCU_BCU(Commands to BCU of MA,P,MB)
      memset( snkPortData109,0,sizeof(snkPortData109)); // 265    CCU_BCU(Commands to BCU of MA,P,MB)
      memset( snkPortData10a,0,sizeof(snkPortData10a)); // 266    CCU_BCU(Commands to BCU of MA,P,MB)
      memset( snkPortData10b,0,sizeof(snkPortData10b)); // 267    TCU1_BCU
                                       //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
      memset( snkPortData10c,0,sizeof(snkPortData10c)); // 268    TCU2_BCU
                                       //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
      memset( snkPortData10d,0,sizeof(snkPortData10d)); // 269    TCU3_BCU
                                       //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
      memset( snkPortData10e,0,sizeof(snkPortData10e)); // 270    TCU4_BCU
                                       //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))

           //TCU to CCU & CCU to TCU
      memset( snkPortData12d,0,sizeof(snkPortData12d)); // 301    CCU_TCU1
      memset( snkPortData12e,0,sizeof(snkPortData12e)); // 302    CCU_TCU2
      memset( snkPortData12f,0,sizeof(snkPortData12f)); // 303    CCU_TCU3
      memset( snkPortData130,0,sizeof(snkPortData130)); // 304    CCU_TCU4


      memset( snkPortData191,0,sizeof(snkPortData191)); // 401    TCU1_CCU_1(TCU1 status)
      memset( snkPortData192,0,sizeof(snkPortData192)); // 402    TCU2_CCU_1(TCU2 status)
      memset( snkPortData193,0,sizeof(snkPortData193)); // 403    TCU3_CCU_1(TCU3 status)
      memset( snkPortData194,0,sizeof(snkPortData194)); // 404    TCU4_CCU_1(TCU4 status)

      memset( snkPortData19b,0,sizeof(snkPortData19b)); // 411    TCU1_CCU_2(TCU1 diagnostic codes and status)
      memset( snkPortData19c,0,sizeof(snkPortData19c)); // 412    TCU2_CCU_2(TCU2 diagnostic codes and status)
      memset( snkPortData19d,0,sizeof(snkPortData19d)); // 413    TCU3_CCU_2(TCU3 diagnostic codes and status)
      memset( snkPortData19e,0,sizeof(snkPortData19e)); // 414    TCU4_CCU_2(TCU4 diagnostic codes and status)

      memset( snkPortData1a5,0,sizeof(snkPortData1a5)); // 421    TCU1_CCU_3(TCU1 analog signals)
      memset( snkPortData1a6,0,sizeof(snkPortData1a6)); // 422    TCU2_CCU_3(TCU2 analog signals)
      memset( snkPortData1a7,0,sizeof(snkPortData1a7)); // 423    TCU3_CCU_3(TCU3 analog signals)
      memset( snkPortData1a8,0,sizeof(snkPortData1a8)); // 424    TCU4_CCU_3(TCU4 analog signals)

      memset( snkPortData1af,0,sizeof(snkPortData1af)); // 431    TCU1_CCU_4(TCU1 battery charger status)
      memset( snkPortData1b0,0,sizeof(snkPortData1b0)); // 432    TCU2_CCU_4(TCU2 battery charger status)
      memset( snkPortData1b1,0,sizeof(snkPortData1b1)); // 433    TCU3_CCU_4(TCU3 battery charger status)
      memset( snkPortData1b2,0,sizeof(snkPortData1b2)); // 434    TCU4_CCU_4(TCU4 battery charger status)

      memset( snkPortData1b9,0,sizeof(snkPortData1b9)); // 441    TCU1_CCU_5(TCU1 auxiliary convertor status)
      memset( snkPortData1ba,0,sizeof(snkPortData1ba)); // 442    TCU2_CCU_5(TCU2 auxiliary convertor status)
      memset( snkPortData1bb,0,sizeof(snkPortData1bb)); // 443    TCU3_CCU_5(TCU3 auxiliary convertor status)
      memset( snkPortData1bc,0,sizeof(snkPortData1bc)); // 444    TCU4_CCU_5(TCU4 auxiliary convertor status)

      memset( snkPortData1c3,0,sizeof(snkPortData1c3)); // 451    TCU1_CCU_5(TCU1 data and time information)
      memset( snkPortData1c4,0,sizeof(snkPortData1c4)); // 452    TCU2_CCU_5(TCU2 data and time information)
      memset( snkPortData1c5,0,sizeof(snkPortData1c5)); // 453    TCU3_CCU_5(TCU3 data and time information)
      memset( snkPortData1c6,0,sizeof(snkPortData1c6)); // 454    TCU4_CCU_5(TCU4 data and time information)

      memset( snkPortData1cd,0,sizeof(snkPortData1cd)); // 461    TCU1_CCU_6(TCU1 analog signals)
      memset( snkPortData1ce,0,sizeof(snkPortData1ce)); // 462    TCU2_CCU_6(TCU2 analog signals)
      memset( snkPortData1cf,0,sizeof(snkPortData1cf)); // 463    TCU3_CCU_6(TCU3 analog signals)
      memset( snkPortData1d0,0,sizeof(snkPortData1d0)); // 464    TCU4_CCU_6(TCU4 analog signals)

      memset( snkPortData1d7,0,sizeof(snkPortData1d7)); // 471    TCU1_CCU_7(TCU1 energy counters)
      memset( snkPortData1d8,0,sizeof(snkPortData1d8)); // 472    TCU2_CCU_7(TCU2 energy counters)
      memset( snkPortData1d9,0,sizeof(snkPortData1d9)); // 473    TCU3_CCU_7(TCU3 energy counters)
      memset( snkPortData1da,0,sizeof(snkPortData1da)); // 474    TCU4_CCU_7(TCU4 energy counters)
    //*********2014.11.24 MVB thread
           //LCU to CCU & CCU to LCU
           //R_S(01/03/04/05/08)(1) Master logic I/O status
      memset( snkPortData38f,0,sizeof(snkPortData38f)); // 911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
      memset( snkPortData399,0,sizeof(snkPortData399)); // 921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
      memset( snkPortData3a3,0,sizeof(snkPortData3a3)); // 931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
      memset( snkPortData3ad,0,sizeof(snkPortData3ad)); // 941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
      memset( snkPortData3b7,0,sizeof(snkPortData3b7)); // 951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)

           //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
      memset( snkPortData390,0,sizeof(snkPortData390)); // 912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
      memset( snkPortData39a,0,sizeof(snkPortData39a)); // 922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
      memset( snkPortData3a4,0,sizeof(snkPortData3a4)); // 932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
      memset( snkPortData3ae,0,sizeof(snkPortData3ae)); // 942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
      memset( snkPortData3b8,0,sizeof(snkPortData3b8)); // 952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)

           //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
      memset( snkPortData391,0,sizeof(snkPortData391)); // 913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
      memset( snkPortData39b,0,sizeof(snkPortData39b)); // 923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
      memset( snkPortData3a5,0,sizeof(snkPortData3a5)); // 933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
      memset( snkPortData3af,0,sizeof(snkPortData3af)); // 943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
      memset( snkPortData3b9,0,sizeof(snkPortData3b9)); // 953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)

           //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
      memset( snkPortData392,0,sizeof(snkPortData392)); // 914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
      memset( snkPortData39c,0,sizeof(snkPortData39c)); // 924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
      memset( snkPortData3a6,0,sizeof(snkPortData3a6)); // 934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
      memset( snkPortData3b0,0,sizeof(snkPortData3b0)); // 944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
      memset( snkPortData3ba,0,sizeof(snkPortData3ba)); // 954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)

           //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
      memset( snkPortData393,0,sizeof(snkPortData393)); // 915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
      memset( snkPortData39d,0,sizeof(snkPortData39d)); // 925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
      memset( snkPortData3a7,0,sizeof(snkPortData3a7)); // 935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
      memset( snkPortData3b1,0,sizeof(snkPortData3b1)); // 945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
      memset( snkPortData3bb,0,sizeof(snkPortData3bb)); // 955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)


           //RSE to CCU & CCU to RSE
      //memset( snkPortData2ee,0,sizeof(snkPortData2ee)); // 750   CCU_RSE(Status to RSE)
      memset( snkPortData2ef,0,sizeof(snkPortData2ef)); // 751   RSE_CCU(Status from RSE)
      //memset( snkPortData2f0,0,sizeof(snkPortData2f0)); // 752   RSE_CCU(Status from RSE)
      //memset( snkPortData2f1,0,sizeof(snkPortData2f1)); // 753   RSE_CCU(Status from RSE)
      //memset( snkPortData2f2,0,sizeof(snkPortData2f2)); // 754   RSE_CCU(Status from RSE)


           //PIDS to PA to IDU
      memset( snkPortData258,0,sizeof(snkPortData258)); // 600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
      memset( snkPortData259,0,sizeof(snkPortData259)); // 601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
      memset( snkPortData25a,0,sizeof(snkPortData25a)); // 602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
      memset( snkPortData2bc,0,sizeof(snkPortData2bc)); // 700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
      memset( snkPortData2bd,0,sizeof(snkPortData2bd)); // 701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)
            //SUPC to IDU
      memset( snkPortData1f5,0,sizeof(snkPortData1f5)); // 501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
      memset( snkPortData1f6,0,sizeof(snkPortData1f6)); // 502   SUPC(RB)_IDU(RB SuperCap Status) 32 1024

            //MVB_STAT LCU_RA to IDU
      memset( snkPortData226,0,sizeof(snkPortData226)); // 550   MVB_STAT LCU_RA to IDU 16 1024

    //Configuration
    //Initialize MVB sink and source ports   pixymvb_AddPort()
    //SRC
      if(TC1_HMI==1)
      {
      // HMI tc1 add src port
      RetVal = pixymvb_AddPort( 0x200, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData200 ); // Src Port FC 4
      #ifdef LOG_OPEN
      qDebug() <<"TC1_HMI:"<<"pixymvb_AddPort: SRC 200:"<<RetVal;
      #endif
      if ( PIXYMVB_OK != RetVal )
      {
          return(false);
      }
      pixymvb_AddPort( 0x321, PIXYMVB_SRCPORT, 8, (PIXYMVB_Data *) srcPortData321 ); // Src Port FC 4
      }
     else
    {   // HMI tc2 add src port
         if(TC2_HMI==1)
         {
              RetVal = pixymvb_AddPort( 0x201, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData201 ); // Src Port FC 4
              #ifdef LOG_OPEN
              qDebug() <<"TC2_HMI:"<<"pixymvb_AddPort: SRC 201:"<<RetVal;
              #endif
              if ( PIXYMVB_OK != RetVal )
              {
                  return(false);
              }
               pixymvb_AddPort( 0x322, PIXYMVB_SRCPORT, 8, (PIXYMVB_Data *) srcPortData322 ); // Src Port FC 4
          }
        else
        {
              // HMI tc1 add src port
              RetVal = pixymvb_AddPort( 0x200, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData200 ); // Src Port FC 4
              #ifdef LOG_OPEN
              qDebug() <<"TC1_HMI:"<<"pixymvb_AddPort: SRC 200:"<<RetVal;
              #endif
              if ( PIXYMVB_OK != RetVal )
              {
                  return(false);
              }
               pixymvb_AddPort( 0x321, PIXYMVB_SRCPORT, 8, (PIXYMVB_Data *) srcPortData321 ); // Src Port FC 4
         }
    }
    //SNK
                //IDU to IDU
          if(TC1_HMI==1)
          {
              pixymvb_AddPort( 0x322,PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData322); // 802   IDU_HVAC(From MB)(For MA)
              pixymvb_AddPort( 0x201,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData201); // 513   IDU_CCU(From MB)(For MA)
          }
          else
          {
            if(TC2_HMI==1)
              {
                pixymvb_AddPort( 0x321,PIXYMVB_SNKPORT, 8, (PIXYMVB_Data *) snkPortData321); // 801   IDU_HVAC(From MA)(For MB)
                pixymvb_AddPort( 0x200,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData200); // 512   IDU_CCU(From MA)(For MB)
               }
          }
               //Test

               //Door
      pixymvb_AddPort( 0x051,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData051); // 81    DoorMA_ALL
      pixymvb_AddPort( 0x052,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData052); // 82    DoorRA_ALL
      pixymvb_AddPort( 0x053,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData053); // 83    DoorRB_ALL
      pixymvb_AddPort( 0x054,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData054); // 84    DoorMB_ALL

                //HVAC_RA & HVAC_RB
      pixymvb_AddPort( 0x061,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData061); // 97     HVACRA_ALL
      pixymvb_AddPort( 0x062,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData062); // 98     HVACRB_ALL
                //Remote
      pixymvb_AddPort( 0x064,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData064); // 100    GTW_CCU
      pixymvb_AddPort( 0x065,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData065); // 101    CCU_GTW

      pixymvb_AddPort( 0x06d,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData06d); // 109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
      pixymvb_AddPort( 0x06e,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData06e); // 110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)

      pixymvb_AddPort( 0x079,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData079); // 121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
      pixymvb_AddPort( 0x083,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData083); // 131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)
      pixymvb_AddPort( 0x08d,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData08d); // 141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
      pixymvb_AddPort( 0x097,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData097); // 151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)

      pixymvb_AddPort( 0x06f,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData06f); // 111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                           //Status of the local Vehicle for IDU
      pixymvb_AddPort( 0x070,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData070); // 112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                           //Diagnostic data of local Vehicle for IDU

                //CCU to All
      pixymvb_AddPort( 0x0fa,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData0fa); // 250    CCU_All


                //BCU to CCU & CCU to BCU
      pixymvb_AddPort( 0x100,PIXYMVB_SNKPORT, 2, (PIXYMVB_Data *) snkPortData100); // 256    BCU1_CCU(P)
      pixymvb_AddPort( 0x101,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData101); // 257    BCU1_CCU(P)
      pixymvb_AddPort( 0x102,PIXYMVB_SNKPORT, 1 , (PIXYMVB_Data *) snkPortData102); // 258    BCU1_CCU(P)
      pixymvb_AddPort( 0x103,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData103); // 259    BCU1_CCU(P)
      pixymvb_AddPort( 0x104,PIXYMVB_SNKPORT, 2 , (PIXYMVB_Data *) snkPortData104); // 260    BCU2_CCU(MA)
      pixymvb_AddPort( 0x105,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData105); // 261    BCU2_CCU(MA)
      pixymvb_AddPort( 0x107,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData107); // 263    BCU2_CCU(MA)
      pixymvb_AddPort( 0x170,PIXYMVB_SNKPORT, 2 , (PIXYMVB_Data *) snkPortData170); // 368    BCU3_CCU(MB)
      pixymvb_AddPort( 0x171,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData171); // 369    BCU3_CCU(MB)
      pixymvb_AddPort( 0x173,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData173); // 371    BCU3_CCU(MB)

      pixymvb_AddPort( 0x177,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData177); // 375    BCU2_CCU(MA) for test
      pixymvb_AddPort( 0x178,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData178); // 376    BCU1_CCU(P) for test
      pixymvb_AddPort( 0x179,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData179); // 377    BCU3_CCU(MB) for test


      pixymvb_AddPort( 0x108,PIXYMVB_SNKPORT, 1 , (PIXYMVB_Data *) snkPortData108); // 264    CCU_BCU(Commands to BCU of MA,P,MB)
      pixymvb_AddPort( 0x109,PIXYMVB_SNKPORT, 2 , (PIXYMVB_Data *) snkPortData109); // 265    CCU_BCU(Commands to BCU of MA,P,MB)
      pixymvb_AddPort( 0x10a,PIXYMVB_SNKPORT, 1 , (PIXYMVB_Data *) snkPortData10a); // 266    CCU_BCU(Commands to BCU of MA,P,MB)
      pixymvb_AddPort( 0x10b,PIXYMVB_SNKPORT, 1 , (PIXYMVB_Data *) snkPortData10b); // 267    TCU1_BCU
                                            //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
      pixymvb_AddPort( 0x10c,PIXYMVB_SNKPORT, 1 , (PIXYMVB_Data *) snkPortData10c); // 268    TCU2_BCU
                                            //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
      pixymvb_AddPort( 0x10d,PIXYMVB_SNKPORT, 1 , (PIXYMVB_Data *) snkPortData10d); // 269    TCU3_BCU
                                            //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
      pixymvb_AddPort( 0x10e,PIXYMVB_SNKPORT, 1 , (PIXYMVB_Data *) snkPortData10e); // 270    TCU4_BCU
                                            //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))

                //TCU to CCU & CCU to TCU
      pixymvb_AddPort( 0x12d,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData12d); // 301    CCU_TCU1
      pixymvb_AddPort( 0x12e,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData12e); // 302    CCU_TCU2
      pixymvb_AddPort( 0x12f,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData12f); // 303    CCU_TCU3
      pixymvb_AddPort( 0x130,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData130); // 304    CCU_TCU4


      pixymvb_AddPort( 0x191,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData191); // 401    TCU1_CCU_1(TCU1 status)
      pixymvb_AddPort( 0x192,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData192); // 402    TCU2_CCU_1(TCU2 status)
      pixymvb_AddPort( 0x193,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData193); // 403    TCU3_CCU_1(TCU3 status)
      pixymvb_AddPort( 0x194,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData194); // 404    TCU4_CCU_1(TCU4 status)

      pixymvb_AddPort( 0x19b,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData19b); // 411    TCU1_CCU_2(TCU1 diagnostic codes and status)
      pixymvb_AddPort( 0x19c,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData19c); // 412    TCU2_CCU_2(TCU2 diagnostic codes and status)
      pixymvb_AddPort( 0x19d,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData19d); // 413    TCU3_CCU_2(TCU3 diagnostic codes and status)
      pixymvb_AddPort( 0x19e,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData19e); // 414    TCU4_CCU_2(TCU4 diagnostic codes and status)

      pixymvb_AddPort( 0x1a5,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1a5); // 421    TCU1_CCU_3(TCU1 analog signals)
      pixymvb_AddPort( 0x1a6,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1a6); // 422    TCU2_CCU_3(TCU2 analog signals)
      pixymvb_AddPort( 0x1a7,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1a7); // 423    TCU3_CCU_3(TCU3 analog signals)
      pixymvb_AddPort( 0x1a8,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1a8); // 424    TCU4_CCU_3(TCU4 analog signals)

      pixymvb_AddPort( 0x1af,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1af); // 431    TCU1_CCU_4(TCU1 battery charger status)
      pixymvb_AddPort( 0x1b0,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1b0); // 432    TCU2_CCU_4(TCU2 battery charger status)
      pixymvb_AddPort( 0x1b1,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1b1); // 433    TCU3_CCU_4(TCU3 battery charger status)
      pixymvb_AddPort( 0x1b2,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1b2); // 434    TCU4_CCU_4(TCU4 battery charger status)

      pixymvb_AddPort( 0x1b9,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1b9); // 441    TCU1_CCU_5(TCU1 auxiliary convertor status)
      pixymvb_AddPort( 0x1ba,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1ba); // 442    TCU2_CCU_5(TCU2 auxiliary convertor status)
      pixymvb_AddPort( 0x1bb,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1bb); // 443    TCU3_CCU_5(TCU3 auxiliary convertor status)
      pixymvb_AddPort( 0x1bc,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1bc); // 444    TCU4_CCU_5(TCU4 auxiliary convertor status)

      pixymvb_AddPort( 0x1c3,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1c3); // 451    TCU1_CCU_5(TCU1 data and time information)
      pixymvb_AddPort( 0x1c4,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1c4); // 452    TCU2_CCU_5(TCU2 data and time information)
      pixymvb_AddPort( 0x1c5,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1c5); // 453    TCU3_CCU_5(TCU3 data and time information)
      pixymvb_AddPort( 0x1c6,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1c6); // 454    TCU4_CCU_5(TCU4 data and time information)

      pixymvb_AddPort( 0x1cd,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1cd); // 461    TCU1_CCU_6(TCU1 analog signals)
      pixymvb_AddPort( 0x1ce,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1ce); // 462    TCU2_CCU_6(TCU2 analog signals)
      pixymvb_AddPort( 0x1cf,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1cf); // 463    TCU3_CCU_6(TCU3 analog signals)
      pixymvb_AddPort( 0x1d0,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1d0); // 464    TCU4_CCU_6(TCU4 analog signals)

      pixymvb_AddPort( 0x1d7,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1d7); // 471    TCU1_CCU_7(TCU1 energy counters)
      pixymvb_AddPort( 0x1d8,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1d8); // 472    TCU2_CCU_7(TCU2 energy counters)
      pixymvb_AddPort( 0x1d9,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1d9); // 473    TCU3_CCU_7(TCU3 energy counters)
      pixymvb_AddPort( 0x1da,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData1da); // 474    TCU4_CCU_7(TCU4 energy counters)
         //*********2014.11.24 MVB thread
                //LCU to CCU & CCU to LCU
                //R_S(01/03/04/05/08)(1) Master logic I/O status
      pixymvb_AddPort( 0x38f,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData38f); // 911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
      pixymvb_AddPort( 0x399,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData399); // 921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
      pixymvb_AddPort( 0x3a3,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3a3); // 931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
      pixymvb_AddPort( 0x3ad,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3ad); // 941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
      pixymvb_AddPort( 0x3b7,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3b7); // 951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)

                //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
      pixymvb_AddPort( 0x390,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData390); // 912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
      pixymvb_AddPort( 0x39a,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData39a); // 922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
      pixymvb_AddPort( 0x3a4,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3a4); // 932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
      pixymvb_AddPort( 0x3ae,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3ae); // 942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
      pixymvb_AddPort( 0x3b8,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3b8); // 952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)

                //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
      pixymvb_AddPort( 0x391,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData391); // 913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
      pixymvb_AddPort( 0x39b,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData39b); // 923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
      pixymvb_AddPort( 0x3a5,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3a5); // 933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
      pixymvb_AddPort( 0x3af,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3af); // 943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
      pixymvb_AddPort( 0x3b9,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3b9); // 953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)

                //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
      pixymvb_AddPort( 0x392,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData392); // 914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
      pixymvb_AddPort( 0x39c,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData39c); // 924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
      pixymvb_AddPort( 0x3a6,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3a6); // 934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
      pixymvb_AddPort( 0x3b0,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3b0); // 944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
      pixymvb_AddPort( 0x3ba,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData3ba); // 954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)

                //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
      pixymvb_AddPort( 0x393,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData393); // 915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
      pixymvb_AddPort( 0x39d,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData39d); // 925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
      pixymvb_AddPort( 0x3a7,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData3a7); // 935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
      pixymvb_AddPort( 0x3b1,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData3b1); // 945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
      pixymvb_AddPort( 0x3bb,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData3bb); // 955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)


                //RSE to CCU & CCU to RSE
      //pixymvb_AddPort( 0x2ee,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData2ee); // 750   CCU_RSE(Status to RSE)
      pixymvb_AddPort( 0x2ef,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData2ef); // 751   RSE_CCU(Status from RSE)
      //pixymvb_AddPort( 0x2f0,PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData2f0); // 752   RSE_CCU(Status from RSE)
      //pixymvb_AddPort( 0x2f1,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData2f1); // 753   RSE_CCU(Status from RSE)
      //pixymvb_AddPort( 0x2f2,PIXYMVB_SNKPORT, 4 , (PIXYMVB_Data *) snkPortData2f2); // 754   RSE_CCU(Status from RSE)


                //PIDS to PA to IDU
      pixymvb_AddPort( 0x258,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData258); // 600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
      pixymvb_AddPort( 0x259,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData259); // 601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
      pixymvb_AddPort( 0x25a,PIXYMVB_SNKPORT, 4 , (PIXYMVB_Data *) snkPortData25a); // 602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
      pixymvb_AddPort( 0x2bc,PIXYMVB_SNKPORT, 16 , (PIXYMVB_Data *) snkPortData2bc); // 700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
      pixymvb_AddPort( 0x2bd,PIXYMVB_SNKPORT, 16 , (PIXYMVB_Data *) snkPortData2bd); // 701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)

      pixymvb_AddPort( 0x1f5,PIXYMVB_SNKPORT, 16 , (PIXYMVB_Data *) snkPortData1f5); // 501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
      pixymvb_AddPort( 0x1f6,PIXYMVB_SNKPORT, 16 , (PIXYMVB_Data *) snkPortData1f6); // 502   SUPC(RB)_IDU(RB SuperCap Status) 32 1024

      pixymvb_AddPort( 0x226,PIXYMVB_SNKPORT, 8 , (PIXYMVB_Data *) snkPortData226); // 502   SUPC(RB)_IDU(RB SuperCap Status) 32 1024

  //Start operation mode   pixymvb_ChangeState()
      RetVal = pixymvb_ChangeState(PIXYMVB_OPERATION_STATE); // OP Mode

      #ifdef LOG_OPEN
         qDebug() <<"pixymvb_ChangeState:"<<RetVal;
      #endif


         if ( PIXYMVB_OK != RetVal )
         {
             return(false);
         }

         return true;
      #endif  //windows_demo
}

void MvbThread::render()
{
    if( !isRunning() ) {
            start();
        }else{
            restart = true;
            condition.wakeOne();
        } //end
}


void MvbThread::run()
{

#ifndef windows_demo
   UNSIGNED16 snkTmeSup = 0;
   UNSIGNED16 RetVal = 0;
   UNSIGNED16 i = 0;

if(init())
   {
       forever
       {
           //Operation
           //Write MVB source ports   pixymvb_PutPort()
           if(TC1_HMI==1)
           {
                for(i=0;i<16;i++)
                {
                    srcPortData200[i] = UNSIGNED16(MVBsendData[i*2]<<8) + UNSIGNED16(MVBsendData[i*2+1]) ;
                }
                for(i = 0 ; i < 8 ; i++)
                {
                    srcPortData321[i] = UNSIGNED16(MVBsendData[32+i*2]<< 8) + UNSIGNED16(MVBsendData[32+i*2+1]) ;
                }
                pixymvb_PutPort(0x200, (PIXYMVB_Data *) &(srcPortData200[0]));
                pixymvb_PutPort(0x321, (PIXYMVB_Data *) &(srcPortData321[0]));
           }
           else
           {
               if(TC2_HMI==1)
               {
                   for(i=0;i<16;i++)
                   {
                       srcPortData201[i] = UNSIGNED16(MVBsendData[i*2]<<8) + UNSIGNED16(MVBsendData[i*2+1]) ;
                   }
                   for(i = 0 ; i < 8 ; i++)
                   {
                       srcPortData322[i] = UNSIGNED16(MVBsendData[32+i*2]<< 8) + UNSIGNED16(MVBsendData[32+i*2+1]) ;
                   }
                   pixymvb_PutPort(0x201, (PIXYMVB_Data *) &(srcPortData201[0]));
                   pixymvb_PutPort(0x322, (PIXYMVB_Data *) &(srcPortData322[0]));
                   }
               else
               {

               }
           }

           //Read MVB sink ports
                 //IDU to IDU
                 if(TC1_HMI==1)
                 {
                     for (i=0;i<16;i++)
                     {
                      g_dataBuffer_MVB[32+i] = highbyteLowbyteExchange(snkPortData321[i]);
                      g_dataBuffer_MVB[48+i] = highbyteLowbyteExchange(snkPortData200[i]);

                      }
                     pixymvb_GetPort( 0x322, &snkPortData322, &refresh_time_322   );// 802   IDU_HVAC(From MB)(For MA)
                     for (i=0;i<16;i++)
                     {
                      g_dataBuffer_MVB[64+i] = highbyteLowbyteExchange(snkPortData322[i]);
                     }

                     pixymvb_GetPort( 0x201, &snkPortData201, &refresh_time_201   );// 513   IDU_CCU(From MB)(For MA)
                     for (i=0;i<16;i++)
                     {
                      g_dataBuffer_MVB[80+i] = highbyteLowbyteExchange(snkPortData201[i]);
                     }
                 }
                 else
                 {
                     if(TC2_HMI==1)
                     {
                         for (i=0;i<16;i++)
                         {
                          g_dataBuffer_MVB[64+i] = highbyteLowbyteExchange(snkPortData322[i]);
                          g_dataBuffer_MVB[80+i] = highbyteLowbyteExchange(snkPortData201[i]);

                          }
                         pixymvb_GetPort( 0x321, &snkPortData321, &refresh_time_321   );// 802   IDU_HVAC(From MB)(For MA)
                         for (i=0;i<16;i++)
                         {
                          g_dataBuffer_MVB[32+i] = highbyteLowbyteExchange(snkPortData321[i]);
                         }
                         pixymvb_GetPort( 0x200, &snkPortData200, &refresh_time_200   );// 513   IDU_CCU(From MB)(For MA)
                         for (i=0;i<16;i++)
                         {
                          g_dataBuffer_MVB[48+i] = highbyteLowbyteExchange(snkPortData200[i]);
                         }
                     }
                 }

                              //Door
          pixymvb_GetPort( 0x051, &snkPortData051, &refresh_time_051   );// 81    DoorMA_ALL
          for (i=0;i<16;i++)
                    {
                        g_dataBuffer_MVB[160+i] = highbyteLowbyteExchange(snkPortData051[i]);
                    }
          pixymvb_GetPort( 0x052, &snkPortData052, &refresh_time_052   );// 82    DoorRA_ALL
          for (i=0;i<16;i++)
                    {
                        g_dataBuffer_MVB[176+i] = highbyteLowbyteExchange(snkPortData052[i]);
                    }
          pixymvb_GetPort( 0x053, &snkPortData053, &refresh_time_053   );// 83    DoorRB_ALL
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[192+i] = highbyteLowbyteExchange(snkPortData053[i]);
                   }
          pixymvb_GetPort( 0x054, &snkPortData054, &refresh_time_054   );// 84    DoorMB_ALL
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[208+i] = highbyteLowbyteExchange(snkPortData054[i]);
                   }
                               //HVAC_RA & HVAC_RB
          pixymvb_GetPort( 0x061, &snkPortData061, &refresh_time_061   );// 97     HVACRA_ALL
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[224+i] = highbyteLowbyteExchange(snkPortData061[i]);
                   }
          pixymvb_GetPort( 0x062, &snkPortData062, &refresh_time_062   );// 98     HVACRB_ALL
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[240+i] = highbyteLowbyteExchange(snkPortData062[i]);
                   }
                                //Remote
          pixymvb_GetPort( 0x064, &snkPortData064, &refresh_time_064   );// 100    GTW_CCU
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[256+i] = highbyteLowbyteExchange(snkPortData064[i]);
                   }
          pixymvb_GetPort( 0x065, &snkPortData065, &refresh_time_065   );// 101    CCU_GTW
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[272+i] = highbyteLowbyteExchange(snkPortData065[i]);
                   }
//          pixymvb_GetPort( 0x069, &snkPortData069, &refresh_time_069   );// 105    CCU_GTW(R1_MVB_1 output from CCU on master TS)
//          for (i=0;i<16;i++)
//                   {
//                        g_dataBuffer_MVB[288+i] = highbyteLowbyteExchange(snkPortData069[i]);
//                   }
//          pixymvb_GetPort( 0x06a, &snkPortData06a, &refresh_time_06a   );// 106    CCU_GTW(R1_MVB_2 output from CCU on master TS)
//          for (i=0;i<16;i++)
//                   {
//                        g_dataBuffer_MVB[304+i] = highbyteLowbyteExchange(snkPortData06a[i]);
//                   }
//          pixymvb_GetPort( 0x06b, &snkPortData06b, &refresh_time_06b   );// 107    CCU_GTW(R1_MVB_3 output from CCU on master TS)
//          for (i=0;i<16;i++)
//                   {
//                        g_dataBuffer_MVB[320+i] = highbyteLowbyteExchange(snkPortData06b[i]);
//                   }
//          pixymvb_GetPort( 0x06c, &snkPortData06c, &refresh_time_06c   );// 108    CCU_GTW(R1_MVB_4 output from CCU on master TS)
//          for (i=0;i<16;i++)
//                   {
//                        g_dataBuffer_MVB[336+i] = highbyteLowbyteExchange(snkPortData06c[i]);
//                   }
          pixymvb_GetPort( 0x06d, &snkPortData06d, &refresh_time_06d   );// 109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
          for (i=0;i<16;i++)
           {
                g_dataBuffer_MVB[352+i] = highbyteLowbyteExchange(snkPortData06d[i]);
           }
          pixymvb_GetPort( 0x06e, &snkPortData06e, &refresh_time_06e   );// 110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)
       for (i=0;i<16;i++)
       {
            g_dataBuffer_MVB[368+i] = highbyteLowbyteExchange(snkPortData06e[i]);
            //port 110 CCU->GTW NO TIMING FUNCTION!!

        }

          pixymvb_GetPort( 0x079, &snkPortData079, &refresh_time_079   );// 121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[448+i] = highbyteLowbyteExchange(snkPortData079[i]);
                   }
          pixymvb_GetPort( 0x083, &snkPortData083, &refresh_time_083   );// 131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)

          for (i=0;i<16;i++)
          {
               g_dataBuffer_MVB[464+i] = highbyteLowbyteExchange(snkPortData083[i]);
           }

          pixymvb_GetPort( 0x08d, &snkPortData08d, &refresh_time_08d   );// 141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[480+i] = highbyteLowbyteExchange(snkPortData08d[i]);
                   }
          pixymvb_GetPort( 0x097, &snkPortData097, &refresh_time_097   );// 151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[496+i] = highbyteLowbyteExchange(snkPortData097[i]);
                   }
          pixymvb_GetPort( 0x06f, &snkPortData06f, &refresh_time_06f   );// 111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                                          //Status of the local Vehicle for IDU
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[512+i] = highbyteLowbyteExchange(snkPortData06f[i]);
                   }
          pixymvb_GetPort( 0x070, &snkPortData070, &refresh_time_070   );// 112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                                          //Diagnostic data of local Vehicle for IDU
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[528+i] = highbyteLowbyteExchange(snkPortData070[i]);
                   }
                               //CCU to All
          pixymvb_GetPort( 0x0fa, &snkPortData0fa, &refresh_time_0fa   );// 250    CCU_All
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[544+i] = highbyteLowbyteExchange(snkPortData0fa[i]);
                   }

                               //BCU to CCU & CCU to BCU
          pixymvb_GetPort( 0x100, &snkPortData100, &refresh_time_100   );// 256    BCU1_CCU(P)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[560+i] = highbyteLowbyteExchange(snkPortData100[i]);
                   }
          pixymvb_GetPort( 0x101, &snkPortData101, &refresh_time_101   );// 257    BCU1_CCU(P)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[576+i] = highbyteLowbyteExchange(snkPortData101[i]);
                   }
          pixymvb_GetPort( 0x102, &snkPortData102, &refresh_time_102   );// 258    BCU1_CCU(P)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[592+i] = highbyteLowbyteExchange(snkPortData102[i]);
                    }
          pixymvb_GetPort( 0x103, &snkPortData103, &refresh_time_103   );// 259    BCU1_CCU(P)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[608+i] = highbyteLowbyteExchange(snkPortData103[i]);
                   }
          pixymvb_GetPort( 0x104, &snkPortData104, &refresh_time_104   );// 260    BCU2_CCU(MA)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[624+i] = highbyteLowbyteExchange(snkPortData104[i]);
                   }
          pixymvb_GetPort( 0x105, &snkPortData105, &refresh_time_105   );// 261    BCU2_CCU(MA)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[640+i] = highbyteLowbyteExchange(snkPortData105[i]);
                   }
          pixymvb_GetPort( 0x107, &snkPortData107, &refresh_time_107   );// 263    BCU2_CCU(MA)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[656+i] = highbyteLowbyteExchange(snkPortData107[i]);
                   }
          pixymvb_GetPort( 0x170, &snkPortData170, &refresh_time_170   );// 368    BCU3_CCU(MB)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[672+i] = highbyteLowbyteExchange(snkPortData170[i]);
                   }
          pixymvb_GetPort( 0x171, &snkPortData171, &refresh_time_171   );// 369    BCU3_CCU(MB)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[688+i] = highbyteLowbyteExchange(snkPortData171[i]);
                   }
          pixymvb_GetPort( 0x173, &snkPortData173, &refresh_time_173   );// 371    BCU3_CCU(MB)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[704+i] = highbyteLowbyteExchange(snkPortData173[i]);
                   }

          pixymvb_GetPort( 0x177, &snkPortData177, &refresh_time_177   );// 375    BCU2_CCU(MA) for test
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[720+i] = highbyteLowbyteExchange(snkPortData177[i]);
                   }
          pixymvb_GetPort( 0x178, &snkPortData178, &refresh_time_178   );// 376    BCU1_CCU(P) for test
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[736+i] = highbyteLowbyteExchange(snkPortData178[i]);
                   }
          pixymvb_GetPort( 0x179, &snkPortData179, &refresh_time_179   );// 377    BCU3_CCU(MB) for test
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[752+i] = highbyteLowbyteExchange(snkPortData179[i]);
                   }

          pixymvb_GetPort( 0x108, &snkPortData108, &refresh_time_108   );// 264    CCU_BCU(Commands to BCU of MA,P,MB)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[768+i] = highbyteLowbyteExchange(snkPortData108[i]);
                   }
          pixymvb_GetPort( 0x109, &snkPortData109, &refresh_time_109   );// 265    CCU_BCU(Commands to BCU of MA,P,MB)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[784+i] = highbyteLowbyteExchange(snkPortData109[i]);
                   }
          pixymvb_GetPort( 0x10a, &snkPortData10a, &refresh_time_10a   );// 266    CCU_BCU(Commands to BCU of MA,P,MB)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[800+i] = highbyteLowbyteExchange(snkPortData10a[i]);
                   }
          pixymvb_GetPort( 0x10b, &snkPortData10b, &refresh_time_10b   );// 267    TCU1_BCU
                                                                         //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[816+i] = highbyteLowbyteExchange(snkPortData10b[i]);
                   }

          pixymvb_GetPort( 0x10c, &snkPortData10c, &refresh_time_10c   );// 268    TCU2_BCU
                                                                         //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[832+i] = highbyteLowbyteExchange(snkPortData10c[i]);
                   }
          pixymvb_GetPort( 0x10d, &snkPortData10d, &refresh_time_10d   );// 269    TCU3_BCU
                                                                         //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[848+i] = highbyteLowbyteExchange(snkPortData10d[i]);
                   }
          pixymvb_GetPort( 0x10e, &snkPortData10e, &refresh_time_10e   );// 270    TCU4_BCU
                                                                         //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[864+i] = highbyteLowbyteExchange(snkPortData10e[i]);
                   }
                               //TCU to CCU & CCU to TCU
          pixymvb_GetPort( 0x12d, &snkPortData12d, &refresh_time_12d   );// 301    CCU_TCU1
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[880+i] = highbyteLowbyteExchange(snkPortData12d[i]);
                   }
          pixymvb_GetPort( 0x12e, &snkPortData12e, &refresh_time_12e   );// 302    CCU_TCU2
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[896+i] = highbyteLowbyteExchange(snkPortData12e[i]);
                   }
          pixymvb_GetPort( 0x12f, &snkPortData12f, &refresh_time_12f   );// 303    CCU_TCU3
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[912+i] = highbyteLowbyteExchange(snkPortData12f[i]);
                   }
          pixymvb_GetPort( 0x130, &snkPortData130, &refresh_time_130   );// 304    CCU_TCU4
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[928+i] = highbyteLowbyteExchange(snkPortData130[i]);
                   }

          pixymvb_GetPort( 0x191, &snkPortData191, &refresh_time_191   );// 401    TCU1_CCU_1(TCU1 status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[944+i] = highbyteLowbyteExchange(snkPortData191[i]);
                   }
          pixymvb_GetPort( 0x192, &snkPortData192, &refresh_time_192   );// 402    TCU2_CCU_1(TCU2 status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[960+i] = highbyteLowbyteExchange(snkPortData192[i]);
                   }
          pixymvb_GetPort( 0x193, &snkPortData193, &refresh_time_193   );// 403    TCU3_CCU_1(TCU3 status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[976+i] = highbyteLowbyteExchange(snkPortData193[i]);
                   }
          pixymvb_GetPort( 0x194, &snkPortData194, &refresh_time_194   );// 404    TCU4_CCU_1(TCU4 status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[992+i] = highbyteLowbyteExchange(snkPortData194[i]);
                   }

          pixymvb_GetPort( 0x19b, &snkPortData19b, &refresh_time_19b  );// 411    TCU1_CCU_2(TCU1 diagnostic codes and status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1008+i] = highbyteLowbyteExchange(snkPortData19b[i]);
                   }
          pixymvb_GetPort( 0x19c, &snkPortData19c, &refresh_time_19c   );// 412    TCU2_CCU_2(TCU2 diagnostic codes and status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1024+i] = highbyteLowbyteExchange(snkPortData19c[i]);
                   }
          pixymvb_GetPort( 0x19d, &snkPortData19d, &refresh_time_19d   );// 413    TCU3_CCU_2(TCU3 diagnostic codes and status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1040+i] = highbyteLowbyteExchange(snkPortData19d[i]);
                   }
          pixymvb_GetPort( 0x19e, &snkPortData19e, &refresh_time_19e   );// 414    TCU4_CCU_2(TCU4 diagnostic codes and status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1056+i] = highbyteLowbyteExchange(snkPortData19e[i]);
                   }

          pixymvb_GetPort( 0x1a5, &snkPortData1a5, &refresh_time_1a5   );// 421    TCU1_CCU_3(TCU1 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1072+i] = highbyteLowbyteExchange(snkPortData1a5[i]);
                   }
          pixymvb_GetPort( 0x1a6, &snkPortData1a6, &refresh_time_1a6   );// 422    TCU2_CCU_3(TCU2 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1088+i] = highbyteLowbyteExchange(snkPortData1a6[i]);
                   }
          pixymvb_GetPort( 0x1a7, &snkPortData1a7, &refresh_time_1a7   );// 423    TCU3_CCU_3(TCU3 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1104+i] = highbyteLowbyteExchange(snkPortData1a7[i]);
                   }
          pixymvb_GetPort( 0x1a8, &snkPortData1a8, &refresh_time_1a8   );// 424    TCU4_CCU_3(TCU4 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1120+i] = highbyteLowbyteExchange(snkPortData1a8[i]);
                   }

          pixymvb_GetPort( 0x1af, &snkPortData1af, &refresh_time_1af   );// 431    TCU1_CCU_4(TCU1 battery charger status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1136+i] = highbyteLowbyteExchange(snkPortData1af[i]);
                   }
          pixymvb_GetPort( 0x1b0, &snkPortData1b0, &refresh_time_1b0   );// 432    TCU2_CCU_4(TCU2 battery charger status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1152+i] = highbyteLowbyteExchange(snkPortData1b0[i]);
                   }
          pixymvb_GetPort( 0x1b1, &snkPortData1b1, &refresh_time_1b1   );// 433    TCU3_CCU_4(TCU3 battery charger status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1168+i] = highbyteLowbyteExchange(snkPortData1b1[i]);
                   }
          pixymvb_GetPort( 0x1b2, &snkPortData1b2, &refresh_time_1b2   );// 434    TCU4_CCU_4(TCU4 battery charger status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1184+i] = highbyteLowbyteExchange(snkPortData1b2[i]);
                   }

          pixymvb_GetPort( 0x1b9, &snkPortData1b9, &refresh_time_1b9   );// 441    TCU1_CCU_5(TCU1 auxiliary convertor status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1200+i] = highbyteLowbyteExchange(snkPortData1b9[i]);
                   }
          pixymvb_GetPort( 0x1ba, &snkPortData1ba, &refresh_time_1ba   );// 442    TCU2_CCU_5(TCU2 auxiliary convertor status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1216+i] = highbyteLowbyteExchange(snkPortData1ba[i]);
                   }
          pixymvb_GetPort( 0x1bb, &snkPortData1bb, &refresh_time_1bb   );// 443    TCU3_CCU_5(TCU3 auxiliary convertor status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1232+i] = highbyteLowbyteExchange(snkPortData1bb[i]);
                   }
          pixymvb_GetPort( 0x1bc, &snkPortData1bc, &refresh_time_1bc   );// 444    TCU4_CCU_5(TCU4 auxiliary convertor status)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1248+i] = highbyteLowbyteExchange(snkPortData1bc[i]);
                   }

          pixymvb_GetPort( 0x1c3, &snkPortData1c3, &refresh_time_1c3   );// 451    TCU1_CCU_5(TCU1 data and time information)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1264+i] = highbyteLowbyteExchange(snkPortData1c3[i]);
                   }
          pixymvb_GetPort( 0x1c4, &snkPortData1c4, &refresh_time_1c4   );// 452    TCU2_CCU_5(TCU2 data and time information)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1280+i] = highbyteLowbyteExchange(snkPortData1c4[i]);
                   }
          pixymvb_GetPort( 0x1c5, &snkPortData1c5, &refresh_time_1c5   );// 453    TCU3_CCU_5(TCU3 data and time information)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1296+i] = highbyteLowbyteExchange(snkPortData1c5[i]);
                   }
          pixymvb_GetPort( 0x1c6, &snkPortData1c6, &refresh_time_1c6   );// 454    TCU4_CCU_5(TCU4 data and time information)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1312+i] = highbyteLowbyteExchange(snkPortData1c6[i]);
                   }

          pixymvb_GetPort( 0x1cd, &snkPortData1cd, &refresh_time_1cd   );// 461    TCU1_CCU_6(TCU1 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1328+i] = highbyteLowbyteExchange(snkPortData1cd[i]);
                   }
          pixymvb_GetPort( 0x1ce, &snkPortData1ce, &refresh_time_1ce   );// 462    TCU2_CCU_6(TCU2 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1344+i] = highbyteLowbyteExchange(snkPortData1ce[i]);
                   }
          pixymvb_GetPort( 0x1cf, &snkPortData1cf, &refresh_time_1cf   );// 463    TCU3_CCU_6(TCU3 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1360+i] = highbyteLowbyteExchange(snkPortData1cf[i]);
                   }
          pixymvb_GetPort( 0x1d0, &snkPortData1d0, &refresh_time_1d0   );// 464    TCU4_CCU_6(TCU4 analog signals)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1376+i] = highbyteLowbyteExchange(snkPortData1d0[i]);
                   }

          pixymvb_GetPort( 0x1d7, &snkPortData1d7, &refresh_time_1d7   );// 471    TCU1_CCU_7(TCU1 energy counters)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1392+i] = highbyteLowbyteExchange(snkPortData1d7[i]);
                   }
          pixymvb_GetPort( 0x1d8, &snkPortData1d8, &refresh_time_1d8   );// 472    TCU2_CCU_7(TCU2 energy counters)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1408+i] = highbyteLowbyteExchange(snkPortData1d8[i]);
                   }
          pixymvb_GetPort( 0x1d9, &snkPortData1d9, &refresh_time_1d9   );// 473    TCU3_CCU_7(TCU3 energy counters)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1424+i] = highbyteLowbyteExchange(snkPortData1d9[i]);
                   }
          pixymvb_GetPort( 0x1da, &snkPortData1da, &refresh_time_1da   );// 474    TCU4_CCU_7(TCU4 energy counters)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1440+i] = highbyteLowbyteExchange(snkPortData1da[i]);
                   }
          //*********2014.11.24 MVB thread
                               //LCU to CCU & CCU to LCU
                               //R_S(01/03/04/05/08)(1) Master logic I/O status
          pixymvb_GetPort( 0x38f, &snkPortData38f, &refresh_time_38f   );// 911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1456+i] = highbyteLowbyteExchange(snkPortData38f[i]);
                   }
          pixymvb_GetPort( 0x399, &snkPortData399, &refresh_time_399   );// 921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1472+i] = highbyteLowbyteExchange(snkPortData399[i]);
                   }
          pixymvb_GetPort( 0x3a3, &snkPortData3a3, &refresh_time_3a3   );// 931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1488+i] = highbyteLowbyteExchange(snkPortData3a3[i]);
                   }
          pixymvb_GetPort( 0x3ad, &snkPortData3ad, &refresh_time_3ad   );// 941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1504+i] = highbyteLowbyteExchange(snkPortData3ad[i]);
                   }
          pixymvb_GetPort( 0x3b7, &snkPortData3b7, &refresh_time_3b7   );// 951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1520+i] = highbyteLowbyteExchange(snkPortData3b7[i]);
                   }

                               //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
          pixymvb_GetPort( 0x390, &snkPortData390, &refresh_time_390   );// 912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1536+i] = highbyteLowbyteExchange(snkPortData390[i]);
                   }
          pixymvb_GetPort( 0x39a, &snkPortData39a, &refresh_time_39a   );// 922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1552+i] = highbyteLowbyteExchange(snkPortData39a[i]);
                   }
          pixymvb_GetPort( 0x3a4, &snkPortData3a4, &refresh_time_3a4   );// 932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1568+i] = highbyteLowbyteExchange(snkPortData3a4[i]);
                   }
          pixymvb_GetPort( 0x3ae, &snkPortData3ae, &refresh_time_3ae   );// 942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1584+i] = highbyteLowbyteExchange(snkPortData3ae[i]);
                   }
          pixymvb_GetPort( 0x3b8, &snkPortData3b8, &refresh_time_3b7   );// 952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1600+i] = highbyteLowbyteExchange(snkPortData3b7[i]);
                   }

                               //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
          pixymvb_GetPort( 0x391, &snkPortData391, &refresh_time_391   );// 913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1616+i] = highbyteLowbyteExchange(snkPortData391[i]);
                   }
          pixymvb_GetPort( 0x39b, &snkPortData39b, &refresh_time_39b   );// 923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1632+i] = highbyteLowbyteExchange(snkPortData39b[i]);
                   }
          pixymvb_GetPort( 0x3a5, &snkPortData3a5, &refresh_time_3a5   );// 933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1648+i] = highbyteLowbyteExchange(snkPortData3a5[i]);
                   }
          pixymvb_GetPort( 0x3af, &snkPortData3af, &refresh_time_3af   );// 943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1664+i] = highbyteLowbyteExchange(snkPortData3af[i]);
                   }
          pixymvb_GetPort( 0x3b9, &snkPortData3b9, &refresh_time_3b9   );// 953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)
          for (i=0;i<16;i++)
                   {
                        g_dataBuffer_MVB[1680+i] = highbyteLowbyteExchange(snkPortData3b9[i]);
                   }

                               //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
          pixymvb_GetPort( 0x392, &snkPortData392, &refresh_time_392   );// 914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
          for (i=0;i<16;i++)
           {
                g_dataBuffer_MVB[1696+i] = highbyteLowbyteExchange(snkPortData392[i]);
           }
          pixymvb_GetPort( 0x39c, &snkPortData39c, &refresh_time_39c   );// 924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
          for (i=0;i<16;i++)
          {
              g_dataBuffer_MVB[1712+i] = highbyteLowbyteExchange(snkPortData39c[i]);
          }
          pixymvb_GetPort( 0x3a6, &snkPortData3a6, &refresh_time_3a6   );// 934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1728+i] = highbyteLowbyteExchange(snkPortData3a6[i]);
                             }
          pixymvb_GetPort( 0x3b0, &snkPortData3b0, &refresh_time_3b0   );// 944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1744+i] = highbyteLowbyteExchange(snkPortData3b0[i]);
                             }
          pixymvb_GetPort( 0x3ba, &snkPortData3ba, &refresh_time_3ba   );// 954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1760+i] = highbyteLowbyteExchange(snkPortData3ba[i]);
                             }

                               //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
          pixymvb_GetPort( 0x393, &snkPortData393, &refresh_time_393   );// 915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1776+i] = highbyteLowbyteExchange(snkPortData393[i]);
                             }
          pixymvb_GetPort( 0x39d, &snkPortData39d, &refresh_time_39d   );// 925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1792+i] = highbyteLowbyteExchange(snkPortData39d[i]);
                             }
          pixymvb_GetPort( 0x3a7, &snkPortData3a7, &refresh_time_3a7   );// 935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1808+i] = highbyteLowbyteExchange(snkPortData3a7[i]);
                             }
          pixymvb_GetPort( 0x3b1, &snkPortData3b1, &refresh_time_3b1   );// 945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1824+i] = highbyteLowbyteExchange(snkPortData3b1[i]);
                             }
          pixymvb_GetPort( 0x3bb, &snkPortData3bb, &refresh_time_3bb   );// 955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1840+i] = highbyteLowbyteExchange(snkPortData3bb[i]);
                             }


                               //RSE to CCU & CCU to RSE
//          pixymvb_GetPort( 0x2ee, &snkPortData2ee, &refresh_time_2ee   );// 750   CCU_RSE(Status to RSE)
//          for (i=0;i<16;i++)
//                             {
//                                  g_dataBuffer_MVB[1856+i] = highbyteLowbyteExchange(snkPortData2ee[i]);
//                             }
          pixymvb_GetPort( 0x2ef, &snkPortData2ef, &refresh_time_2ef   );// 751   RSE_CCU(Status from RSE)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1872+i] = highbyteLowbyteExchange(snkPortData2ef[i]);
                             }
//          pixymvb_GetPort( 0x2f0, &snkPortData2f0, &refresh_time_2f0   );// 752   RSE_CCU(Status from RSE)
//          for (i=0;i<16;i++)
//                             {
//                                  g_dataBuffer_MVB[1888+i] = highbyteLowbyteExchange(snkPortData2f0[i]);
//                             }
//          pixymvb_GetPort( 0x2f1, &snkPortData2f1, &refresh_time_2f1   );// 753   RSE_CCU(Status from RSE)
//          for (i=0;i<16;i++)
//                             {
//                                  g_dataBuffer_MVB[1904+i] = highbyteLowbyteExchange(snkPortData2f1[i]);
//                             }
//          pixymvb_GetPort( 0x2f2, &snkPortData2f2, &refresh_time_2f2   );// 754   RSE_CCU(Status from RSE)
//          for (i=0;i<16;i++)
//                             {
//                                  g_dataBuffer_MVB[1920+i] = highbyteLowbyteExchange(snkPortData2f2[i]);
//                             }


                               //PIDS to PA to IDU
          pixymvb_GetPort( 0x258, &snkPortData258, &refresh_time_258   );// 600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1936+i] = highbyteLowbyteExchange(snkPortData258[i]);
                             }
          pixymvb_GetPort( 0x259, &snkPortData259, &refresh_time_259   );// 601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1952+i] = highbyteLowbyteExchange(snkPortData259[i]);
                             }
          pixymvb_GetPort( 0x25a, &snkPortData25a, &refresh_time_25a   );// 602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1968+i] = highbyteLowbyteExchange(snkPortData25a[i]);
                             }
          pixymvb_GetPort( 0x2bc, &snkPortData2bc, &refresh_time_2bc   );// 700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[1984+i] = highbyteLowbyteExchange(snkPortData2bc[i]);
                             }
          pixymvb_GetPort( 0x2bd, &snkPortData2bd, &refresh_time_2bd   );// 701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[2000+i] = highbyteLowbyteExchange(snkPortData2bd[i]);
                             }
          pixymvb_GetPort( 0x1f5, &snkPortData1f5, &refresh_time_1f5   );// 501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[2016+i] = highbyteLowbyteExchange(snkPortData1f5[i]);
                             }
          pixymvb_GetPort( 0x1f6, &snkPortData1f6, &refresh_time_1f6   );// 502   SUPC(RB)_IDU(RB SuperCap Status) 32 1024
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[2032+i] = highbyteLowbyteExchange(snkPortData1f6[i]);
                             }

          pixymvb_GetPort( 0x226, &snkPortData226, &refresh_time_226   );// 550   MVB_STAT LCU_RA to IDU 16 1024
          for (i=0;i<16;i++)
                             {
                                  g_dataBuffer_MVB[2048+i] = highbyteLowbyteExchange(snkPortData226[i]);
                             }


            msleep(100);

        } // end

    }
    else
    {
        #ifdef LOG_OPEN
        qDebug() <<"pixymvb init() not OK!!!!!";
        #endif
    }



    mutex.lock();
    if( !restart )
        condition.wait( &mutex );
    restart = false;
    mutex.unlock();
#endif  //windows_demo
}

UNSIGNED16 MvbThread::highbyteLowbyteExchange(const UNSIGNED16 wordData )
{
    //return wordData;
    return(((wordData&0x00FF)<<8)|((wordData&0xFF00)>>8));
}

#ifdef DEBUG
void MvbThread::writeDebugLog( const QString str, const SIGNED16 state )
{
    QFile file("debugLog.txt");
    if (!file.open(QIODevice::Append))
    {
        qDebug("debugLog.txt open failed\n");
        return;
    }
    QTextStream out(&file);
    out << str << ": ";
    switch(state)
    {
    case PIXYMVB_OK:
        out << "PIXYMVB_OK";
        break;
    case PIXYMVB_FAILED:
        out << "PIXYMVB_FAILED";
        break;
    case PIXYMVB_PARAMERR:
        out << "PIXYMVB_PARAMERR";
        break;
    case PIXYMVB_STATEERR:
        out << "PIXYMVB_STATEERR";
        break;
    default:
        out << "UNKNOW_ERROR";
        break;
    }
    out << "!\n";
    file.close();
}

#endif
