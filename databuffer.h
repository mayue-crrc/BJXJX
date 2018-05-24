#ifndef DATABUFFER_H
#define DATABUFFER_H

#include "cglobal.h"

//faultCompressor
#define bit0     0x0001    //0000 0000 0000 0001    B1_00
#define bit1     0x0002    //0000 0000 0000 0010    B1_01
#define bit2     0x0004    //0000 0000 0000 0100    B1_02
#define bit3     0x0008    //0000 0000 0000 1000    B1_03
#define bit4     0x0010    //0000 0000 0001 0000    B1_04
#define bit5     0x0020    //0000 0000 0010 0000    B1_05
#define bit6     0x0040    //0000 0000 0100 0000    B1_06
#define bit7     0x0080    //0000 0000 1000 0000    B1_07
#define bit8     0x0100    //0000 0001 0000 0000    B1_10
#define bit9     0x0200    //0000 0010 0000 0000    B1_11
#define bitA     0x0400    //0000 0100 0000 0000    B1_12
#define bitB     0x0800    //0000 1000 0000 0000    B1_13
#define bitC     0x1000    //0001 0000 0000 0000    B1_14
#define bitD     0x2000    //0010 0000 0000 0000    B1_15
#define bitE     0x4000    //0100 0000 0000 0000    B1_16
#define bitF     0x8000    //1000 0000 0000 0000    B1_17

#define DoorBit1             0x2   // 0010    Isolated        Gray(10)
#define DoorBit0             0x1   // 0001    Emergency       Red Cross(9)
//#define sdew                                Fault           Red(2)
#define DoorBit2             0x4   // 0100    Open            Cyan(6)
#define DoorBit3             0x8   // 1000    Closed          Green(5)
//                                 //
#define U8_0                 %256)
#define U8_1                 /256)
#define BigU8_1                 /256)
#define BigU8_0                 %256)

//Normal Data Current
//******************************************(/256)****(%256)**********************
//                         *****************Byte1****Byte0***********************
//                         ***************     7654 3210 7654 3210 *********************
#define B1_10               0x0100)/256      //0000 0001 0000 0000
#define B1_11               0x0200)/512      //0000 0010 0000 0000
#define B1_12               0x0400)/1024     //0000 0100 0000 0000
#define B1_13               0x0800)/2048     //0000 1000 0000 0000
#define B1_14               0x1000)/4096     //0001 0000 0000 0000
#define B1_15               0x2000)/8192     //0010 0000 0000 0000
#define B1_16               0x4000)/16384    //0100 0000 0000 0000
#define B1_17               0x8000)/32768    //1000 0000 0000 0000
#define B1_00               0x0001)/1        //0000 0000 0000 0001
#define B1_01               0x0002)/2        //0000 0000 0000 0010
#define B1_02               0x0004)/4        //0000 0000 0000 0100
#define B1_03               0x0008)/8        //0000 0000 0000 1000
#define B1_04               0x0010)/16       //0000 0000 0001 0000
#define B1_05               0x0020)/32       //0000 0000 0010 0000
#define B1_06               0x0040)/64       //0000 0000 0100 0000
#define B1_07               0x0080)/128      //0000 0000 1000 0000

//                         *****************                       Byte1****Byte0***********************
//                         ***************                       7654 3210 7654 3210*********************
#define A2_10_11            0x0300)/256   //0xc000)/16384      //0000 0011 0000 0000
#define A2_11_12            0x0600)/512   //0x6000)/8192       //0000 0110 0000 0000
#define A2_12_13            0x0c00)/1024  //0x3000)/4096       //0000 1100 0000 0000
#define A2_13_14            0x1800)/2048  //0x1800)/2048       //0001 1000 0000 0000
#define A2_14_15            0x3000)/4096  //0x0c00)/1024       //0011 0000 0000 0000
#define A2_15_17            0x6000)/8192  //0x0600)/512        //0110 0000 0000 0000
#define A2_16_17            0xc000)/16384 //0x0300)/256        //1100 0000 0000 0000
//#define A2_17_00            0x0003)/1     //0X0180)/128        //1000 0000 0000 0001      //NOT INCLUDE OF DATA CURRENT
#define A2_00_01            0x0003)/1     //0x00c0)/64         //0000 0000 0000 0011
#define A2_01_02            0x0006)/2     //0x0060)/32         //0000 0000 0000 0110
#define A2_02_03            0x000c)/4     //0x0030)/16         //0000 0000 0000 1100
#define A2_03_04            0x0018)/8     //0x0018)/8          //0000 0000 0001 1000
#define A2_04_05            0x0030)/16    //0x000c)/4          //0000 0000 0011 0000
#define A2_05_07            0x0060)/32    //0x0006)/2          //0000 0000 0110 0000
#define A2_06_07            0x00c0)/64    //0x0003)/1          //0000 0000 1100 0000

//                         *******************Byte1****Byte0***********************
//                         *****************       7654 3210 7654 3210********************
#define E4_10_13            0x0f00)/256  //0xf000)/4096       // 0000 1111 0000 0000
#define E4_11_14            0x1e00)/512  //0x7800)/2048       // 0001 1110 0000 0000
#define E4_12_15            0x3c00)/1024 //0x3c00)/1024       // 0011 1100 0000 0000
#define E4_13_16            0x7800)/2048 //0x1e00)/512        // 0111 1000 0000 0000
#define E4_14_17            0xf000)/4096 //0x0f00)/256        // 1111 0000 0000 0000
//#define E4_15_00            0x0780)/128        // 0000 0111 1000 0000
//#define E4_16_01            0x03c0)/64         // 0000 0011 1100 0000
//#define E4_17_02            0x01e0)/32         // 0000 0001 1110 0000
#define E4_00_03            0x000f)/1    //0x00f0)/16         // 0000 0000 0000 1111
#define E4_01_04            0x001e)/2    //0x0078)/8          // 0000 0000 0001 1110
#define E4_02_05            0x003c)/4    //0x003c)/4          // 0000 0000 0011 1100
#define E4_03_06            0x0078)/8    //0x001e)/2          // 0000 0000 0111 1000
#define E4_04_07            0x00f0)/16   //0x000f)/1          // 0000 0000 1111 0000





/*
//Normal Data Current
//******************************************(/256)****(%256)**********************
//                         *****************Byte1****Byte0***********************
//                         ***************7654 3210 7654 3210 *********************
#define B1_10               0x0100      //0000 0001 0000 0000
#define B1_11               0x0200      //0000 0010 0000 0000
#define B1_12               0x0400      //0000 0100 0000 0000
#define B1_13               0x0800      //0000 1000 0000 0000
#define B1_14               0x1000      //0001 0000 0000 0000
#define B1_15               0x2000      //0010 0000 0000 0000
#define B1_16               0x4000      //0100 0000 0000 0000
#define B1_17               0x8000      //1000 0000 0000 0000
#define B1_00               0x0001      //0000 0000 0000 0001
#define B1_01               0x0002      //0000 0000 0000 0010
#define B1_02               0x0004      //0000 0000 0000 0100
#define B1_03               0x0008      //0000 0000 0000 1000
#define B1_04               0x0010      //0000 0000 0001 0000
#define B1_05               0x0020      //0000 0000 0010 0000
#define B1_06               0x0040      //0000 0000 0100 0000
#define B1_07               0x0080      //0000 0000 1000 0000

//                         *****************                       Byte1****Byte0***********************
//                         ***************                       7654 3210 7654 3210*********************
#define A2_10_11            0x0300)/256   //0xc000)/16384      //0000 0011 0000 0000
#define A2_11_12            0x0600)/512   //0x6000)/8192       //0000 0110 0000 0000
#define A2_12_13            0x0c00)/1024  //0x3000)/4096       //0000 1100 0000 0000
#define A2_13_14            0x1800)/2048  //0x1800)/2048       //0001 1000 0000 0000
#define A2_14_15            0x3000)/4096  //0x0c00)/1024       //0011 0000 0000 0000
#define A2_15_17            0x6000)/8192  //0x0600)/512        //0110 0000 0000 0000
#define A2_16_17            0xc000)/16384 //0x0300)/256        //1100 0000 0000 0000
//#define A2_17_00            0x0003)/1     //0X0180)/128        //1000 0000 0000 0001      //NOT INCLUDE OF DATA CURRENT
#define A2_00_01            0x0003)/1     //0x00c0)/64         //0000 0000 0000 0011
#define A2_01_02            0x0006)/2     //0x0060)/32         //0000 0000 0000 0110
#define A2_02_03            0x000c)/4     //0x0030)/16         //0000 0000 0000 1100
#define A2_03_04            0x0018)/8     //0x0018)/8          //0000 0000 0001 1000
#define A2_04_05            0x0030)/16    //0x000c)/4          //0000 0000 0011 0000
#define A2_05_07            0x0060)/32    //0x0006)/2          //0000 0000 0110 0000
#define A2_06_07            0x00c0)/64    //0x0003)/1          //0000 0000 1100 0000

//                         *******************Byte1****Byte0***********************
//                         *****************       7654 3210 7654 3210********************
#define E4_10_13            0x0f00)/256  //0xf000)/4096       // 0000 1111 0000 0000
#define E4_11_14            0x1e00)/512  //0x7800)/2048       // 0001 1110 0000 0000
#define E4_12_15            0x3c00)/1024 //0x3c00)/1024       // 0011 1100 0000 0000
#define E4_13_16            0x7800)/2048 //0x1e00)/512        // 0111 1000 0000 0000
#define E4_14_17            0xf000)/4096 //0x0f00)/256        // 1111 0000 0000 0000
//#define E4_15_00            0x0780)/128        // 0000 0111 1000 0000
//#define E4_16_01            0x03c0)/64         // 0000 0011 1100 0000
//#define E4_17_02            0x01e0)/32         // 0000 0001 1110 0000
#define E4_00_03            0x000f)/1    //0x00f0)/16         // 0000 0000 0000 1111
#define E4_01_04            0x001e)/2    //0x0078)/8          // 0000 0000 0001 1110
#define E4_02_05            0x003c)/4    //0x003c)/4          // 0000 0000 0011 1100
#define E4_03_06            0x0078)/8    //0x001e)/2          // 0000 0000 0111 1000
#define E4_04_07            0x00f0)/16   //0x000f)/1          // 0000 0000 1111 0000


*/



#define BigB1_10               0x0100)/256       //0000 0001 0000 0000
#define BigB1_11               0x0200)/512       //0000 0010 0000 0000
#define BigB1_12               0x0400)/1024      //0000 0100 0000 0000
#define BigB1_13               0x0800)/2048      //0000 1000 0000 0000
#define BigB1_14               0x1000)/4096      //0001 0000 0000 0000
#define BigB1_15               0x2000)/8192      //0010 0000 0000 0000
#define BigB1_16               0x4000)/16384     //0100 0000 0000 0000
#define BigB1_17               0x8000)/32768     //1000 0000 0000 0000
#define BigB1_00               0x0001)/1         //0000 0000 0000 0001
#define BigB1_01               0x0002)/2         //0000 0000 0000 0010
#define BigB1_02               0x0004)/4         //0000 0000 0000 0100
#define BigB1_03               0x0008)/8         //0000 0000 0000 1000
#define BigB1_04               0x0010)/16        //0000 0000 0001 0000
#define BigB1_05               0x0020)/32        //0000 0000 0010 0000
#define BigB1_06               0x0040)/64        //0000 0000 0100 0000
#define BigB1_07               0x0080)/128       //0000 0000 1000 0000

//                         *****************                       Byte1****Byte0***********************
//                         ***************                       7654 3210 7654 3210*********************
#define BigA2_10_11            0x0300)/256   //0xc000)/16384      //0000 0011 0000 0000
#define BigA2_11_12            0x0600)/512   //0x6000)/8192       //0000 0110 0000 0000
#define BigA2_12_13            0x0c00)/1024  //0x3000)/4096       //0000 1100 0000 0000
#define BigA2_13_14            0x1800)/2048  //0x1800)/2048       //0001 1000 0000 0000
#define BigA2_14_15            0x3000)/4096  //0x0c00)/1024       //0011 0000 0000 0000
#define BigA2_15_17            0x6000)/8192  //0x0600)/512        //0110 0000 0000 0000
#define BigA2_16_17            0xc000)/16384 //0x0300)/256        //1100 0000 0000 0000
//#define BigA2_17_00            0x0003)/1     //0X0180)/128        //1000 0000 0000 0001      //NOT INCLUDE OF DATA CURRENT
#define BigA2_00_01            0x0003)/1     //0x00c0)/64         //0000 0000 0000 0011
#define BigA2_01_02            0x0006)/2     //0x0060)/32         //0000 0000 0000 0110
#define BigA2_02_03            0x000c)/4     //0x0030)/16         //0000 0000 0000 1100
#define BigA2_03_04            0x0018)/8     //0x0018)/8          //0000 0000 0001 1000
#define BigA2_04_05            0x0030)/16    //0x000c)/4          //0000 0000 0011 0000
#define BigA2_05_07            0x0060)/32    //0x0006)/2          //0000 0000 0110 0000
#define BigA2_06_07            0x00c0)/64    //0x0003)/1          //0000 0000 1100 0000

//                         *******************Byte1****Byte0***********************
//                         *****************       7654 3210 7654 3210********************
#define BigE4_10_13            0x0f00)/256  //0xf000)/4096       // 0000 1111 0000 0000
#define BigE4_11_14            0x1e00)/512  //0x7800)/2048       // 0001 1110 0000 0000
#define BigE4_12_15            0x3c00)/1024 //0x3c00)/1024       // 0011 1100 0000 0000
#define BigE4_13_16            0x7800)/2048 //0x1e00)/512        // 0111 1000 0000 0000
#define BigE4_14_17            0xf000)/4096 //0x0f00)/256        // 1111 0000 0000 0000
//#define BigE4_15_00            0x0780)/128        // 0000 0111 1000 0000
//#define BigE4_16_01            0x03c0)/64         // 0000 0011 1100 0000
//#define BigE4_17_02            0x01e0)/32         // 0000 0001 1110 0000
#define BigE4_00_03            0x000f)/1    //0x00f0)/16         // 0000 0000 0000 1111
#define BigE4_01_04            0x001e)/2    //0x0078)/8          // 0000 0000 0001 1110
#define BigE4_02_05            0x003c)/4    //0x003c)/4          // 0000 0000 0011 1100
#define BigE4_03_06            0x0078)/8    //0x001e)/2          // 0000 0000 0111 1000
#define BigE4_04_07            0x00f0)/16   //0x000f)/1          // 0000 0000 1111 0000




//IDU_MVBsendData
#define sendB1_00            *1             // 0000 0001
#define sendB1_01            *2             // 0000 0010
#define sendB1_02            *4             // 0000 0100
#define sendB1_03            *8             // 0000 1000
#define sendB1_04            *16            // 0001 0000
#define sendB1_05            *32            // 0010 0000
#define sendB1_06            *64            // 0100 0000
#define sendB1_07            *128           // 1000 0000



//Big Data Current
//*********************************************(/256)****(%256)**********************
//                         ********************Byte0****Byte1***********************
//                         ******************0123 4567 0123 4567*********************
/*
#define BigB1_07               0x8000      //1000 0000 0000 0000
#define BigB1_06               0x4000      //0100 0000 0000 0000
#define BigB1_05               0x2000      //0010 0000 0000 0000
#define BigB1_04               0x1000      //0001 0000 0000 0000
#define BigB1_03               0x0800      //0000 1000 0000 0000
#define BigB1_02               0x0400      //0000 0100 0000 0000
#define BigB1_01               0x0200      //0000 0010 0000 0000
#define BigB1_00               0x0100      //0000 0001 0000 0000
#define BigB1_17               0x0080      //0000 0000 1000 0000
#define BigB1_16               0x0040      //0000 0000 0100 0000
#define BigB1_15               0x0020      //0000 0000 0010 0000
#define BigB1_14               0x0010      //0000 0000 0001 0000
#define BigB1_13               0x0008      //0000 0000 0000 1000
#define BigB1_12               0x0004      //0000 0000 0000 0100
#define BigB1_11               0x0002      //0000 0000 0000 0010
#define BigB1_10               0x0001      //0000 0000 0000 0001

//                         *******************Byte0** /**Byte1***********************/
//                         ******************       0123 4567 0123 4567********************
/*
#define BigA2_00_01            0xc000)/16384      //1100 0000 0000 0000
#define BigA2_01_02            0x6000)/8192       //0110 0000 0000 0000
#define BigA2_02_03            0x3000)/4096       //0011 0000 0000 0000
#define BigA2_03_04            0x1800)/2048       //0001 1000 0000 0000
#define BigA2_04_05            0x0c00)/1024       //0000 1100 0000 0000
#define BigA2_05_07            0x0600)/512        //0000 0110 0000 0000
#define BigA2_06_07            0x0300)/256        //0000 0011 0000 0000
#define BigA2_07_10            0X0180)/128        //0000 0001 1000 0000      //NOT INCLUDE OF DATA CURRENT
#define BigA2_10_11            0x00c0)/64         //0000 0000 1100 0000
#define BigA2_11_12            0x0060)/32         //0000 0000 0110 0000
#define BigA2_12_13            0x0030)/16         //0000 0000 0011 0000
#define BigA2_13_14            0x0018)/8          //0000 0000 0001 1000
#define BigA2_14_15            0x000c)/4          //0000 0000 0000 1100
#define BigA2_15_17            0x0006)/2          //0000 0000 0000 0110
#define BigA2_16_17            0x0003)/1          //0000 0000 0000 0011

//                         **********************Byte0** /**Byte1***********************/
//                         ********************0123 4567 0123 4567********************
/*
#define BigE4_00_03            0xf000)/4096       // 1111 0000 0000 0000
#define BigE4_01_04            0x7800)/2048       // 0111 1000 0000 0000
#define BigE4_02_05            0x3c00)/1024       // 0011 1100 0000 0000
#define BigE4_03_06            0x1e00)/512        // 0001 1110 0000 0000
#define BigE4_04_07            0x0f00)/256        // 0000 1111 0000 0000
#define BigE4_05_10            0x0780)/128        // 0000 0111 1000 0000
#define BigE4_06_11            0x03c0)/64         // 0000 0011 1100 0000
#define BigE4_07_12            0x01e0)/32         // 0000 0001 1110 0000
#define BigE4_10_13            0x00f0)/16         // 0000 0000 1111 0000
#define BigE4_11_14            0x0078)/8          // 0000 0000 0111 1000
#define BigE4_12_15            0x003c)/4          // 0000 0000 0011 1100
#define BigE4_13_16            0x001e)/2          // 0000 0000 0001 1110
#define BigE4_14_17            0x000f)/1          // 0000 0000 0000 1111



#define E4_24_17               0x0f00 )/256

*/



////src
//      PIXYMVB_Data srcPortData321;//0x321=801   IDU_HVAC(From MA)
//      PIXYMVB_Data srcPortData322;//0x322=802   IDU_HVAC(From MB)
//      PIXYMVB_Data srcPortData200;//0x200=512   IDU_CCU(From MA)
//      PIXYMVB_Data srcPortData201;//0x201=513   IDU_CCU(From MB)
//snk
      //IDU to IDU
      extern WORD refresh_time_321;//0x321=801   IDU_HVAC(From MA)(For MB)
      extern WORD refresh_time_322;//0x322=802   IDU_HVAC(From MB)(For MA)
      extern WORD refresh_time_200;//0x200=512   IDU_CCU(From MA)(For MB)
      extern WORD refresh_time_201;//0x201=513   IDU_CCU(From MB)(For MA)

      //Door
      extern WORD refresh_time_051;//0x051=81    DoorMA_ALL
      extern WORD refresh_time_052;//0x052=82    DoorRA_ALL
      extern WORD refresh_time_053;//0x053=83    DoorRB_ALL
      extern WORD refresh_time_054;//0x054=84    DoorMB_ALL

      //HVAC_RA & HVAC_RB
      extern WORD refresh_time_061;//0x061=97     HVACRA_ALL
      extern WORD refresh_time_062;//0x062=98     HVACRB_ALL
      //Remote
      extern WORD refresh_time_064;//0x064=100    GTW_CCU
      extern WORD refresh_time_065;//0x065=101    CCU_GTW
      //extern WORD refresh_time_069;//0x069=105    CCU_GTW(R1_MVB_1 output from CCU on master TS)
      //extern WORD refresh_time_06a;//0x06a=106    CCU_GTW(R1_MVB_2 output from CCU on master TS)
      //extern WORD refresh_time_06b;//0x06b=107    CCU_GTW(R1_MVB_3 output from CCU on master TS)
      //extern WORD refresh_time_06c;//0x06c=108    CCU_GTW(R1_MVB_4 output from CCU on master TS)
      extern WORD refresh_time_06d;//0x06d=109    CCU_GTW(R2_MVB_1 output from CCU on slave TS)
      extern WORD refresh_time_06e;//0x06e=110    CCU_GTW(R2_MVB_2 output from CCU on slave TS)

      //extern WORD refresh_time_073;//0x073=115    GTW_CCU(R1_MVB_REM_1 input for slave TS)
      //extern WORD refresh_time_074;//0x074=116    GTW_CCU(R1_MVB_REM_2 input for slave TS)
      //extern WORD refresh_time_075;//0x075=117    GTW_CCU(R1_MVB_REM_3 input for slave TS)
      //extern WORD refresh_time_076;//0x076=118    GTW_CCU(R1_MVB_REM_4 input for slave TS)

      extern WORD refresh_time_079;//0x079=121    GTW_CCU(R2_MVB_REM_1_1 input from GTWA of TS)
      extern WORD refresh_time_083;//0x083=131    GTW_CCU(R2_MVB_REM_1_2 input from GTWA of TS)
      extern WORD refresh_time_08d;//0x08d=141    GTW_CCU(R2_MVB_REM_1_3 input from GTWA of TS)
      extern WORD refresh_time_097;//0x097=151    GTW_CCU(R2_MVB_REM_1_4 input from GTWA of TS)

      extern WORD refresh_time_06f;//0x06f=111   CCU_GTW/IDU(R2_MVB_3 output from CCU on any TS)
                                                 //Status of the local Vehicle for IDU
      extern WORD refresh_time_070;//0x070=112   CCU_GTW/IDU(R2_MVB_4 output from CCU on any TS)
                                                 //Diagnostic data of local Vehicle for IDU

      //CCU to All
      extern WORD refresh_time_0fa;//0x0fa=250    CCU_All


      //BCU to CCU & CCU to BCU
      extern WORD refresh_time_100;//0x100=256    BCU1_CCU(P)
      extern WORD refresh_time_101;//0x101=257    BCU1_CCU(P)
      extern WORD refresh_time_102;//0x102=258    BCU1_CCU(P)
      extern WORD refresh_time_103;//0x103=259    BCU1_CCU(P)
      extern WORD refresh_time_104;//0x104=260    BCU2_CCU(MA)
      extern WORD refresh_time_105;//0x105=261    BCU2_CCU(MA)
      extern WORD refresh_time_107;//0x107=263    BCU2_CCU(MA)
      extern WORD refresh_time_170;//0x170=368    BCU3_CCU(MB)
      extern WORD refresh_time_171;//0x171=369    BCU3_CCU(MB)
      extern WORD refresh_time_173;//0x173=371    BCU3_CCU(MB)

      extern WORD refresh_time_177;//0x177=375    BCU2_CCU(MA) for test
      extern WORD refresh_time_178;//0x178=376    BCU1_CCU(P) for test
      extern WORD refresh_time_179;//0x179=377    BCU3_CCU(MB) for test


      extern WORD refresh_time_108;//0x108=264    CCU_BCU(Commands to BCU of MA,P,MB)
      extern WORD refresh_time_109;//0x109=265    CCU_BCU(Commands to BCU of MA,P,MB)
      extern WORD refresh_time_10a;//0x10a=266    CCU_BCU(Commands to BCU of MA,P,MB)
      extern WORD refresh_time_10b;//0x10b=267    TCU1_BCU
                                  //(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
      extern WORD refresh_time_10c;//0x10c=268    TCU2_BCU
                                  //(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
      extern WORD refresh_time_10d;//0x10d=269    TCU3_BCU
                                  //(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
      extern WORD refresh_time_10e;//0x10e=270    TCU4_BCU
                                  //(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))

      //TCU to CCU & CCU to TCU
      extern WORD refresh_time_12d;//0x12d=301    CCU_TCU1
      extern WORD refresh_time_12e;//0x12e=302    CCU_TCU2
      extern WORD refresh_time_12f;//0x12f=303    CCU_TCU3
      extern WORD refresh_time_130;//0x130=304    CCU_TCU4


      extern WORD refresh_time_191;//0x191=401    TCU1_CCU_1(TCU1 status)
      extern WORD refresh_time_192;//0x192=402    TCU2_CCU_1(TCU2 status)
      extern WORD refresh_time_193;//0x193=403    TCU3_CCU_1(TCU3 status)
      extern WORD refresh_time_194;//0x194=404    TCU4_CCU_1(TCU4 status)

      extern WORD refresh_time_19b;//0x19b=411    TCU1_CCU_2(TCU1 diagnostic codes and status)
      extern WORD refresh_time_19c;//0x19c=412    TCU2_CCU_2(TCU2 diagnostic codes and status)
      extern WORD refresh_time_19d;//0x19d=413    TCU3_CCU_2(TCU3 diagnostic codes and status)
      extern WORD refresh_time_19e;//0x19e=414    TCU4_CCU_2(TCU4 diagnostic codes and status)

      extern WORD refresh_time_1a5;//0x1a5=421    TCU1_CCU_3(TCU1 analog signals)
      extern WORD refresh_time_1a6;//0x1a6=422    TCU2_CCU_3(TCU2 analog signals)
      extern WORD refresh_time_1a7;//0x1a7=423    TCU3_CCU_3(TCU3 analog signals)
      extern WORD refresh_time_1a8;//0x1a8=424    TCU4_CCU_3(TCU4 analog signals)

      extern WORD refresh_time_1af;//0x1af=431    TCU1_CCU_4(TCU1 battery charger status)
      extern WORD refresh_time_1b0;//0x1b0=432    TCU2_CCU_4(TCU2 battery charger status)
      extern WORD refresh_time_1b1;//0x1b1=433    TCU3_CCU_4(TCU3 battery charger status)
      extern WORD refresh_time_1b2;//0x1b2=434    TCU4_CCU_4(TCU4 battery charger status)

      extern WORD refresh_time_1b9;//0x1b9=441    TCU1_CCU_5(TCU1 auxiliary convertor status)
      extern WORD refresh_time_1ba;//0x1ba=442    TCU2_CCU_5(TCU2 auxiliary convertor status)
      extern WORD refresh_time_1bb;//0x1bb=443    TCU3_CCU_5(TCU3 auxiliary convertor status)
      extern WORD refresh_time_1bc;//0x1bc=444    TCU4_CCU_5(TCU4 auxiliary convertor status)

      extern WORD refresh_time_1c3;//0x1c3=451    TCU1_CCU_5(TCU1 data and time information)
      extern WORD refresh_time_1c4;//0x1c4=452    TCU2_CCU_5(TCU2 data and time information)
      extern WORD refresh_time_1c5;//0x1c5=453    TCU3_CCU_5(TCU3 data and time information)
      extern WORD refresh_time_1c6;//0x1c6=454    TCU4_CCU_5(TCU4 data and time information)

      extern WORD refresh_time_1cd;//0x1cd=461    TCU1_CCU_6(TCU1 analog signals)
      extern WORD refresh_time_1ce;//0x1ce=462    TCU2_CCU_6(TCU2 analog signals)
      extern WORD refresh_time_1cf;//0x1cf=463    TCU3_CCU_6(TCU3 analog signals)
      extern WORD refresh_time_1d0;//0x1d0=464    TCU4_CCU_6(TCU4 analog signals)

      extern WORD refresh_time_1d7;//0x1d7=471    TCU1_CCU_7(TCU1 energy counters)
      extern WORD refresh_time_1d8;//0x1d8=472    TCU2_CCU_7(TCU2 energy counters)
      extern WORD refresh_time_1d9;//0x1d9=473    TCU3_CCU_7(TCU3 energy counters)
      extern WORD refresh_time_1da;//0x1da=474    TCU4_CCU_7(TCU4 energy counters)
//*********2014.11.24 MVB thread
      //LCU to CCU & CCU to LCU
      //R_S(01/03/04/05/08)(1) Master logic I/O status
      extern WORD refresh_time_38f;//0x38f=911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
      extern WORD refresh_time_399;//0x399=921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
      extern WORD refresh_time_3a3;//0x3a3=931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
      extern WORD refresh_time_3ad;//0x3ad=941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
      extern WORD refresh_time_3b7;//0x3b7=951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)

      //R_AI(01/03/04/05/08)(2) Master logic I/O analog input
      extern WORD refresh_time_390;//0x390=912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
      extern WORD refresh_time_39a;//0x39a=922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
      extern WORD refresh_time_3a4;//0x3a4=932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
      extern WORD refresh_time_3ae;//0x3ae=942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
      extern WORD refresh_time_3b8;//0x3b8=952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)

      //R_DI(01/03/04/05/08)(3) Master logic I/O digital input
      extern WORD refresh_time_391;//0x391=913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
      extern WORD refresh_time_39b;//0x39b=923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
      extern WORD refresh_time_3a5;//0x3a5=933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
      extern WORD refresh_time_3af;//0x3af=943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
      extern WORD refresh_time_3b9;//0x3b9=953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)

      //R_DO(01/03/04/05/08)(4) Master logic I/O digital output
      extern WORD refresh_time_392;//0x392=914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
      extern WORD refresh_time_39c;//0x39c=924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
      extern WORD refresh_time_3a6;//0x3a6=934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
      extern WORD refresh_time_3b0;//0x3b0=944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
      extern WORD refresh_time_3ba;//0x3ba=954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)

      //R_SwRel(01/03/04/05/08)(5) RW Release Data Set
      extern WORD refresh_time_393;//0x393=915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
      extern WORD refresh_time_39d;//0x39d=925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
      extern WORD refresh_time_3a7;//0x3a7=935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
      extern WORD refresh_time_3b1;//0x3b1=945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
      extern WORD refresh_time_3bb;//0x3bb=955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)


      //RSE to CCU & CCU to RSE
      //extern WORD refresh_time_2ee;//0x2ee=750   CCU_RSE(Status to RSE)
      extern WORD refresh_time_2ef;//0x2ef=751   RSE_CCU(Status from RSE)
      //extern WORD refresh_time_2f0;//0x2f0=752   RSE_CCU(Status from RSE)
      //extern WORD refresh_time_2f1;//0x2f1=753  RSE_CCU(Status from RSE)
      //extern WORD refresh_time_2f2;//0x2f2=754   RSE_CCU(Status from RSE)


      //PIDS to PA to IDU
      extern WORD refresh_time_258;//0x258=600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)
      extern WORD refresh_time_259;//0x259=601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)
      extern WORD refresh_time_25a;//0x25a=602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
      extern WORD refresh_time_2bc;//0x2bc=700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
      extern WORD refresh_time_2bd;//0x2bd=701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)

      extern WORD refresh_time_1f5;//0x1f5=501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
      extern WORD refresh_time_1f6;//0x1f6=502   SUPC(RB)_IDU(RA SuperCap Status) 32 1024

      //MVB_STAT  LCU_RA to IDU
      extern WORD refresh_time_226;//0x226=550   SMVB_STAT  LCU_RA to IDU  16 1024


 // 命名原则：srcsnk_example_数据类型

 //  if(TC1_HMI==1)
      //g_dataBuffer_MVB[80+i] = (snkPortData201[i]);
      //0x201 IDU2 to IDU1(about CCU)
      #define IDU2_CCU_Year_U8                       (g_dataBuffer_MVB[80   ] U8_0
      #define IDU2_CCU_Month_U8                      (g_dataBuffer_MVB[80   ] U8_1
      #define IDU2_CCU_Day_U8                        (g_dataBuffer_MVB[80+1 ] U8_0
      #define IDU2_CCU_Hour_U8                       (g_dataBuffer_MVB[80+1 ] U8_1
      #define IDU2_CCU_Minute_U8                     (g_dataBuffer_MVB[80+2 ] U8_0
      #define IDU2_CCU_Second_U8                     (g_dataBuffer_MVB[80+2 ] U8_1
      #define IDU2_CCU_OpenTime_U8                   (g_dataBuffer_MVB70[80+3 ] U8_0
      #define IDU2_CCU_CloseTime_U8                  (g_dataBuffer_MVB[80+3 ] U8_1
      #define IDU2_CCU_ObsDetNumClose_U8             (g_dataBuffer_MVB[80+4 ] U8_0
      #define IDU2_CCU_ObsDetNumOpen_U8              (g_dataBuffer_MVB[80+4 ] U8_1
      #define IDU2_CCU_CloseForce_U8                 (g_dataBuffer_MVB[80+5 ] U8_0
      #define IDU2_CCU_DTBDC_U8                      (g_dataBuffer_MVB[80+5 ] U8_1
      #define IDU2_CCU_DTBDO_U8                      (g_dataBuffer_MVB[80+6 ] U8_0
      #define IDU2_CCU_TimeUpdate_B1                 (g_dataBuffer_MVB[80+6 ] & B1_10
      #define IDU2_CCU_DiameterUpdate_B1             (g_dataBuffer_MVB[80+6 ] & B1_11
      #define IDU2_CCU_DoorUpdate_B1                 (g_dataBuffer_MVB[80+6 ] & B1_12
      #define IDU2_CCU_DischargeReq_B1               (g_dataBuffer_MVB[80+6 ] & B1_13
      #define IDU2_CCU_MemErase_U8                   (g_dataBuffer_MVB[80+7 ] U8_0
      #define IDU2_CCU_WheelDiamMa_U16                Change_BigEen(g_dataBuffer_MVB[80+8 ])
      #define IDU2_CCU_WheelDiamP_U16                 Change_BigEen(g_dataBuffer_MVB[80+9 ])
      #define IDU2_CCU_WheelDiamMb_U16                Change_BigEen(g_dataBuffer_MVB[80+10])
      #define IDU2_CCU_TcuTestRun_B1                 (g_dataBuffer_MVB[80+14] & B1_10
      #define IDU2_CCU_TcuTestStop_B1                (g_dataBuffer_MVB[80+14] & B1_11
      #define IDU2_CCU_TestMode_A2                   (g_dataBuffer_MVB[80+14] & A2_12_13
      #define IDU2_CCU_LifeSignal_U8                 (g_dataBuffer_MVB[80+15] U8_0

      // add IDU 1 TO IDU 2 ACC DATA
       #define IDU2_CCU_TIMEDEPART1_B1                   (g_dataBuffer_MVB[80+6] & B1_14
       #define IDU2_CCU_TIMEDEPART2_B1                   (g_dataBuffer_MVB[80+6] & B1_15
      #define IDU2_CCU_ACCDATA1_L_L_U8                   (g_dataBuffer_MVB[80+7] U8_1
      #define IDU2_CCU_ACCDATA1_L_H_U8                   (g_dataBuffer_MVB[80+14] U8_0
      #define IDU2_CCU_ACCDATA1_H_U16                   Change_BigEen(g_dataBuffer_MVB[80+11])
      #define IDU2_CCU_ACCDATA2_L_U16                   Change_BigEen(g_dataBuffer_MVB[80+12])
      #define IDU2_CCU_ACCDATA2_H_U16                   Change_BigEen(g_dataBuffer_MVB[80+13])
      #define IDU2_CCU_ACCDATACALL_B1                   (g_dataBuffer_MVB[80+14] & B1_14


       //HVAC 801 802//*********************
       //0x322   IDU2 to IDU1(about HVAC)
#define IDU2_HVAC_PWeight_U16                        Change_BigEen(g_dataBuffer_MVB[64])
#define IDU2_HVAC_Speed_U16                          Change_BigEen(g_dataBuffer_MVB[64+2])
#define IDU2_HVAC_SetTempCold_U8                    (g_dataBuffer_MVB[64+3] BigU8_0
#define IDU2_HVAC_SetTempWarm_U8                    (g_dataBuffer_MVB[64+3] BigU8_1
#define IDU2_HVAC_EmegVent_B1                       (g_dataBuffer_MVB[64+4] & BigB1_00
#define IDU2_HVAC_Vent_B1                           (g_dataBuffer_MVB[64+4] & BigB1_01
#define IDU2_HVAC_AutoWarm_B1                       (g_dataBuffer_MVB[64+4] & BigB1_03
#define IDU2_HVAC_AutoCold_B1                       (g_dataBuffer_MVB[64+4] & BigB1_04
#define IDU2_HVAC_ManWarm_B1                        (g_dataBuffer_MVB[64+4] & BigB1_05
#define IDU2_HVAC_ManCold_B1                        (g_dataBuffer_MVB[64+4] & BigB1_06
#define IDU2_HVAC_ExitPre_B1                        (g_dataBuffer_MVB[64+4] & BigB1_07
#define IDU2_HVAC_EmeVentTestStart_B1               (g_dataBuffer_MVB[64+4] & BigB1_10
#define IDU2_HVAC_EmeVentTestStop_B1                (g_dataBuffer_MVB[64+4] & BigB1_11
#define IDU2_HVAC_HvacTestStop_B1                   (g_dataBuffer_MVB[64+4] & BigB1_12
#define IDU2_HVAC_Stop_B1                           (g_dataBuffer_MVB[64+4] & BigB1_13
#define IDU2_HVAC_WarmTest_B1                       (g_dataBuffer_MVB[64+4] & BigB1_16
#define IDU2_HVAC_ColdTest_B1                       (g_dataBuffer_MVB[64+4] & BigB1_17
#define IDU2_HVAC_HvacModeEff_B1                    (g_dataBuffer_MVB[64+5] & BigB1_01
#define IDU2_HVAC_SetTempEff_B1                     (g_dataBuffer_MVB[64+5] & BigB1_03
#define IDU2_HVAC_DoorClose_B1                      (g_dataBuffer_MVB[64+5] & BigB1_06
#define IDU2_HVAC_DoorOpen_B1                       (g_dataBuffer_MVB[64+5] & BigB1_07
#define IDU2_HVAC_Chk_A2                            (g_dataBuffer_MVB[64+7] & BigA2_16_17




      //  if(TC2_HMI==1)
      //g_dataBuffer_MVB[48+i] = (snkPortData200[i]);
      //0x200 IDU1 to IDU2(about CCU)
           #define IDU1_CCU_Year_U8                       (g_dataBuffer_MVB[48   ] U8_0
           #define IDU1_CCU_Month_U8                      (g_dataBuffer_MVB[48   ] U8_1
           #define IDU1_CCU_Day_U8                        (g_dataBuffer_MVB[48+1 ] U8_0
           #define IDU1_CCU_Hour_U8                       (g_dataBuffer_MVB[48+1 ] U8_1
           #define IDU1_CCU_Minute_U8                     (g_dataBuffer_MVB[48+2 ] U8_0
           #define IDU1_CCU_Second_U8                     (g_dataBuffer_MVB[48+2 ] U8_1
           #define IDU1_CCU_OpenTime_U8                   (g_dataBuffer_MVB[48+3 ] U8_0
           #define IDU1_CCU_CloseTime_U8                  (g_dataBuffer_MVB[48+3 ] U8_1
           #define IDU1_CCU_ObsDetNumClose_U8             (g_dataBuffer_MVB[48+4 ] U8_0
           #define IDU1_CCU_ObsDetNumOpen_U8              (g_dataBuffer_MVB[48+4 ] U8_1
           #define IDU1_CCU_CloseForce_U8                 (g_dataBuffer_MVB[48+5]  U8_0
           #define IDU1_CCU_DTBDC_U8                      (g_dataBuffer_MVB[48+5]  U8_1
           #define IDU1_CCU_DTBDO_U8                      (g_dataBuffer_MVB[48+6]  U8_0
           #define IDU1_CCU_TimeUpdate_B1                 (g_dataBuffer_MVB[48+6 ] & B1_10
           #define IDU1_CCU_DiameterUpdate_B1             (g_dataBuffer_MVB[48+6 ] & B1_11
           #define IDU1_CCU_DoorUpdate_B1                 (g_dataBuffer_MVB[48+6 ] & B1_12
           #define IDU1_CCU_DischargeReq_B1               (g_dataBuffer_MVB[48+6 ] & B1_13
           #define IDU1_CCU_MemErase_U8                   (g_dataBuffer_MVB[48+7 ] U8_0
           #define IDU1_CCU_WheelDiamMa_U16                Change_BigEen(g_dataBuffer_MVB[48+8 ])
           #define IDU1_CCU_WheelDiamP_U16                 Change_BigEen(g_dataBuffer_MVB[48+9 ])
           #define IDU1_CCU_WheelDiamMb_U16                Change_BigEen(g_dataBuffer_MVB[48+10])
           #define IDU1_CCU_TcuTestRun_B1                 (g_dataBuffer_MVB[48+14] & B1_10
           #define IDU1_CCU_TcuTestStop_B1                (g_dataBuffer_MVB[48+14] & B1_11
           #define IDU1_CCU_TestMode_A2                   (g_dataBuffer_MVB[48+14] & A2_12_13
           #define IDU1_CCU_LifeSignal_U8                 (g_dataBuffer_MVB[48+15] U8_0

           // add IDU 1 TO IDU 2 ACC DATA
            #define IDU1_CCU_TIMEDEPART1_B1                   (g_dataBuffer_MVB[48+6] & B1_14
            #define IDU1_CCU_TIMEDEPART2_B1                   (g_dataBuffer_MVB[48+6] & B1_15
           #define IDU1_CCU_ACCDATA1_L_L_U8                   (g_dataBuffer_MVB[48+7] U8_1
           #define IDU1_CCU_ACCDATA1_L_H_U8                   (g_dataBuffer_MVB[48+14] U8_0
           #define IDU1_CCU_ACCDATA1_H_U16                   Change_BigEen(g_dataBuffer_MVB[48+11])
           #define IDU1_CCU_ACCDATA2_L_U16                   Change_BigEen(g_dataBuffer_MVB[48+12])
           #define IDU1_CCU_ACCDATA2_H_U16                   Change_BigEen(g_dataBuffer_MVB[48+13])
           #define IDU1_CCU_ACCDATACALL_B1                   (g_dataBuffer_MVB[48+14] & B1_14



      //g_dataBuffer_MVB[32+i] = (snkPortData321[i]);
      //0x321   IDU1 to IDU1(about HVAC)
     #define IDU1_HVAC_PWeight_U16                       Change_BigEen(g_dataBuffer_MVB[32])
     #define IDU1_HVAC_Speed_U16                         Change_BigEen(g_dataBuffer_MVB[32+2])
     #define IDU1_HVAC_SetTempCold_U8                    (g_dataBuffer_MVB[32+3] BigU8_0
     #define IDU1_HVAC_SetTempWarm_U8                    (g_dataBuffer_MVB[32+3] BigU8_1
     #define IDU1_HVAC_EmegVent_B1                       (g_dataBuffer_MVB[32+4] & BigB1_00
     #define IDU1_HVAC_Vent_B1                           (g_dataBuffer_MVB[32+4] & BigB1_01
     #define IDU1_HVAC_AutoWarm_B1                       (g_dataBuffer_MVB[32+4] & BigB1_03
     #define IDU1_HVAC_AutoCold_B1                       (g_dataBuffer_MVB[32+4] & BigB1_04
     #define IDU1_HVAC_ManWarm_B1                        (g_dataBuffer_MVB[32+4] & BigB1_05
     #define IDU1_HVAC_ManCold_B1                        (g_dataBuffer_MVB[32+4] & BigB1_06
     #define IDU1_HVAC_ExitPre_B1                        (g_dataBuffer_MVB[32+4] & BigB1_07
     #define IDU1_HVAC_EmeVentTestStart_B1               (g_dataBuffer_MVB[32+4] & BigB1_10
     #define IDU1_HVAC_EmeVentTestStop_B1                (g_dataBuffer_MVB[32+4] & BigB1_11
     #define IDU1_HVAC_HvacTestStop_B1                   (g_dataBuffer_MVB[32+4] & BigB1_12
     #define IDU1_HVAC_Stop_B1                           (g_dataBuffer_MVB[32+4] & BigB1_13
     #define IDU1_HVAC_WarmTest_B1                       (g_dataBuffer_MVB[32+4] & BigB1_16
     #define IDU1_HVAC_ColdTest_B1                       (g_dataBuffer_MVB[32+4] & BigB1_17
     #define IDU1_HVAC_HvacModeEff_B1                    (g_dataBuffer_MVB[32+5] & BigB1_01
     #define IDU1_HVAC_SetTempEff_B1                     (g_dataBuffer_MVB[32+5] & BigB1_03
     #define IDU1_HVAC_DoorClose_B1                      (g_dataBuffer_MVB[32+5] & BigB1_06
     #define IDU1_HVAC_DoorOpen_B1                       (g_dataBuffer_MVB[32+5] & BigB1_07
     #define IDU1_HVAC_Chk_A2                            (g_dataBuffer_MVB[32+7] & BigA2_16_17

//Door
//0x051＝81    DoorMA_ALL                 (g_dataBuffer_MVB[160+i]


      #define DOORMAALL_D1_LOCKED_M_B1                    (g_dataBuffer_MVB[160] & B1_00
      #define DOORMAALL_D1_OPEN_M_B1                      (g_dataBuffer_MVB[160] & B1_01
      #define DOORMAALL_D1_EME_M_B1                       (g_dataBuffer_MVB[160] & B1_02
      #define DOORMAALL_D1_ISO_M_B1                       (g_dataBuffer_MVB[160] & B1_03
      #define DOORMAALL_D1_MINF_M_B1                      (g_dataBuffer_MVB[160] & B1_10
      #define DOORMAALL_D1_MAJF_M_B1                      (g_dataBuffer_MVB[160] & B1_11
      #define DOORMAALL_D1_MCF_B1                         (g_dataBuffer_MVB[160] & B1_12
      #define DOORMAALL_D1_DCUF_B1                        (g_dataBuffer_MVB[160] & B1_13
      #define DOORMAALL_D1_DLSF_B1                        (g_dataBuffer_MVB[160] & B1_14
      #define DOORMAALL_D1_DCSF_B1                        (g_dataBuffer_MVB[160] & B1_15
      #define DOORMAALL_D1_BUZZERF_B1                     (g_dataBuffer_MVB[160] & B1_16
      #define DOORMAALL_D1_INDICATOR1F_B1                 (g_dataBuffer_MVB[160] & B1_17
      #define DOORMAALL_D1_FTL_B1                         (g_dataBuffer_MVB[160+1] B1_00
      #define DOORMAALL_D1_DFTCBO_B1                      (g_dataBuffer_MVB[160+1] & B1_01
      #define DOORMAALL_D1_DFTOBO_B1                      (g_dataBuffer_MVB[160+1] & B1_02
      #define DOORMAALL_D1_DOTE_B1                        (g_dataBuffer_MVB[160+1] & B1_03
      #define DOORMAALL_D1_DCTE_B1                        (g_dataBuffer_MVB[160+1] & B1_04
      #define DOORMAALL_D1_UU_B1                          (g_dataBuffer_MVB[160+1] & B1_05
      #define DOORMAALL_D1_INDICATOR2F_B1                 (g_dataBuffer_MVB[160+1] & B1_06
      #define DOORMAALL_D1_INDICATOR3F_B1                 (g_dataBuffer_MVB[160+1] & B1_07
      #define DOORMAALL_D1_LSTLF_B1                       (g_dataBuffer_MVB[160+1] & B1_10
      #define DOORMAALL_D1_ETLF_B1                        (g_dataBuffer_MVB[160+1] & B1_11
      #define DOORMAALL_D1_OTLF_B1                        (g_dataBuffer_MVB[160+1] & B1_12
      #define DOORMAALL_D1_CTLF_B1                        (g_dataBuffer_MVB[160+1] & B1_13
      #define DOORMAALL_D1_DFS_B1                         (g_dataBuffer_MVB[160+1] & B1_14
      #define DOORMAALL_D1_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[160+2] U8_0
      #define DOORMAALL_D1_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[160+2] U8_1
      #define DOORMAALL_D1_LIFE_U8                        (g_dataBuffer_MVB[160+3] U8_0




#define DOORMAALL_D2_LOCKED_M_B1                    (g_dataBuffer_MVB[160+3] & B1_10
#define DOORMAALL_D2_OPEN_M_B1                      (g_dataBuffer_MVB[160+3] & B1_11
#define DOORMAALL_D2_EME_M_B1                       (g_dataBuffer_MVB[160+3] & B1_12
#define DOORMAALL_D2_ISO_M_B1                       (g_dataBuffer_MVB[160+3] & B1_13
#define DOORMAALL_D2_MINF_M_B1                      (g_dataBuffer_MVB[160+4] & B1_00
#define DOORMAALL_D2_MAJF_M_B1                      (g_dataBuffer_MVB[160+4] & B1_01
#define DOORMAALL_D2_MCF_B1                         (g_dataBuffer_MVB[160+4] & B1_02
#define DOORMAALL_D2_DCUF_B1                        (g_dataBuffer_MVB[160+4] & B1_03
#define DOORMAALL_D2_DLSF_B1                        (g_dataBuffer_MVB[160+4] & B1_04
#define DOORMAALL_D2_DCSF_B1                        (g_dataBuffer_MVB[160+4] & B1_05
#define DOORMAALL_D2_BUZZERF_B1                     (g_dataBuffer_MVB[160+4] & B1_06
#define DOORMAALL_D2_INDICATOR1F_B1                 (g_dataBuffer_MVB[160+4] & B1_07
#define DOORMAALL_D2_FTL_B1                         (g_dataBuffer_MVB[160+4] & B1_10
#define DOORMAALL_D2_DFTCBO_B1                      (g_dataBuffer_MVB[160+4] & B1_11
#define DOORMAALL_D2_DFTOBO_B1                      (g_dataBuffer_MVB[160+4] & B1_12
#define DOORMAALL_D2_DOTE_B1                        (g_dataBuffer_MVB[160+4] & B1_13
#define DOORMAALL_D2_DCTE_B1                        (g_dataBuffer_MVB[160+4] & B1_14
#define DOORMAALL_D2_UU_B1                          (g_dataBuffer_MVB[160+4] & B1_15
#define DOORMAALL_D2_INDICATOR2F_B1                 (g_dataBuffer_MVB[160+4] & B1_16
#define DOORMAALL_D2_INDICATOR3F_B1                 (g_dataBuffer_MVB[160+4] & B1_17
#define DOORMAALL_D2_LSTLF_B1                       (g_dataBuffer_MVB[160+5] & B1_00
#define DOORMAALL_D2_ETLF_B1                        (g_dataBuffer_MVB[160+5] & B1_01
#define DOORMAALL_D2_OTLF_B1                        (g_dataBuffer_MVB[160+5] & B1_02
#define DOORMAALL_D2_CTLF_B1                        (g_dataBuffer_MVB[160+5] & B1_03
#define DOORMAALL_D2_DFS_B1                         (g_dataBuffer_MVB[160+5] & B1_04
#define DOORMAALL_D2_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[160+5] U8_1
#define DOORMAALL_D2_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[160+6] U8_0
#define DOORMAALL_D2_LIFE_U8                        (g_dataBuffer_MVB[160+6] U8_1

#define DOORMAALL_D1_RS485VALID_B1                  (g_dataBuffer_MVB[160+14] & B1_00
#define DOORMAALL_D2_RS485VALID_B1                  (g_dataBuffer_MVB[160+14] & B1_01
//#define DOORMAALL_D3_RS485VALID_B1                  (g_dataBuffer_MVB[160+14] & B1_02
//#define DOORMAALL_D4_RS485VALID_B1                  (g_dataBuffer_MVB[160+14] & B1_03

#define DOORMAALL_D4_CHK_B1                          (g_dataBuffer_MVB[160+15] & A2_16_17

//0x052=82    DoorRA_ALL                  (g_dataBuffer_MVB[176+i]




#define DOORRAALL_D1_LOCKED_M_B1                    (g_dataBuffer_MVB[176] & B1_00
#define DOORRAALL_D1_OPEN_M_B1                      (g_dataBuffer_MVB[176] & B1_01
#define DOORRAALL_D1_EME_M_B1                       (g_dataBuffer_MVB[176] & B1_02
#define DOORRAALL_D1_ISO_M_B1                       (g_dataBuffer_MVB[176] & B1_03
#define DOORRAALL_D1_MINF_M_B1                      (g_dataBuffer_MVB[176] & B1_10
#define DOORRAALL_D1_MAJF_M_B1                      (g_dataBuffer_MVB[176] & B1_11
#define DOORRAALL_D1_MCF_B1                         (g_dataBuffer_MVB[176] & B1_12
#define DOORRAALL_D1_DCUF_B1                        (g_dataBuffer_MVB[176] & B1_13
#define DOORRAALL_D1_DLSF_B1                        (g_dataBuffer_MVB[176] & B1_14
#define DOORRAALL_D1_DCSF_B1                        (g_dataBuffer_MVB[176] & B1_15
#define DOORRAALL_D1_BUZZERF_B1                     (g_dataBuffer_MVB[176] & B1_16
#define DOORRAALL_D1_INDICATOR1F_B1                 (g_dataBuffer_MVB[176] & B1_17
#define DOORRAALL_D1_FTL_B1                         (g_dataBuffer_MVB[176+1] B1_00
#define DOORRAALL_D1_DFTCBO_B1                      (g_dataBuffer_MVB[176+1] & B1_01
#define DOORRAALL_D1_DFTOBO_B1                      (g_dataBuffer_MVB[176+1] & B1_02
#define DOORRAALL_D1_DOTE_B1                        (g_dataBuffer_MVB[176+1] & B1_03
#define DOORRAALL_D1_DCTE_B1                        (g_dataBuffer_MVB[176+1] & B1_04
#define DOORRAALL_D1_UU_B1                          (g_dataBuffer_MVB[176+1] & B1_05
#define DOORRAALL_D1_INDICATOR2F_B1                 (g_dataBuffer_MVB[176+1] & B1_06
#define DOORRAALL_D1_INDICATOR3F_B1                 (g_dataBuffer_MVB[176+1] & B1_07
#define DOORRAALL_D1_LSTLF_B1                       (g_dataBuffer_MVB[176+1] & B1_10
#define DOORRAALL_D1_ETLF_B1                        (g_dataBuffer_MVB[176+1] & B1_11
#define DOORRAALL_D1_OTLF_B1                        (g_dataBuffer_MVB[176+1] & B1_12
#define DOORRAALL_D1_CTLF_B1                        (g_dataBuffer_MVB[176+1] & B1_13
#define DOORRAALL_D1_DFS_B1                         (g_dataBuffer_MVB[176+1] & B1_14
#define DOORRAALL_D1_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[176+2] U8_0
#define DOORRAALL_D1_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[176+2] U8_1
#define DOORRAALL_D1_LIFE_U8                        (g_dataBuffer_MVB[176+3] U8_0



#define DOORRAALL_D2_LOCKED_M_B1                    (g_dataBuffer_MVB[176+3] & B1_10
#define DOORRAALL_D2_OPEN_M_B1                      (g_dataBuffer_MVB[176+3] & B1_11
#define DOORRAALL_D2_EME_M_B1                       (g_dataBuffer_MVB[176+3] & B1_12
#define DOORRAALL_D2_ISO_M_B1                       (g_dataBuffer_MVB[176+3] & B1_13
#define DOORRAALL_D2_MINF_M_B1                      (g_dataBuffer_MVB[176+4] & B1_00
#define DOORRAALL_D2_MAJF_M_B1                      (g_dataBuffer_MVB[176+4] & B1_01
#define DOORRAALL_D2_MCF_B1                         (g_dataBuffer_MVB[176+4] & B1_02
#define DOORRAALL_D2_DCUF_B1                        (g_dataBuffer_MVB[176+4] & B1_03
#define DOORRAALL_D2_DLSF_B1                        (g_dataBuffer_MVB[176+4] & B1_04
#define DOORRAALL_D2_DCSF_B1                        (g_dataBuffer_MVB[176+4] & B1_05
#define DOORRAALL_D2_BUZZERF_B1                     (g_dataBuffer_MVB[176+4] & B1_06
#define DOORRAALL_D2_INDICATOR1F_B1                 (g_dataBuffer_MVB[176+4] & B1_07
#define DOORRAALL_D2_FTL_B1                         (g_dataBuffer_MVB[176+4] & B1_10
#define DOORRAALL_D2_DFTCBO_B1                      (g_dataBuffer_MVB[176+4] & B1_11
#define DOORRAALL_D2_DFTOBO_B1                      (g_dataBuffer_MVB[176+4] & B1_12
#define DOORRAALL_D2_DOTE_B1                        (g_dataBuffer_MVB[176+4] & B1_13
#define DOORRAALL_D2_DCTE_B1                        (g_dataBuffer_MVB[176+4] & B1_14
#define DOORRAALL_D2_UU_B1                          (g_dataBuffer_MVB[176+4] & B1_15
#define DOORRAALL_D2_INDICATOR2F_B1                 (g_dataBuffer_MVB[176+4] & B1_16
#define DOORRAALL_D2_INDICATOR3F_B1                 (g_dataBuffer_MVB[176+4] & B1_17
#define DOORRAALL_D2_LSTLF_B1                       (g_dataBuffer_MVB[176+5] & B1_00
#define DOORRAALL_D2_ETLF_B1                        (g_dataBuffer_MVB[176+5] & B1_01
#define DOORRAALL_D2_OTLF_B1                        (g_dataBuffer_MVB[176+5] & B1_02
#define DOORRAALL_D2_CTLF_B1                        (g_dataBuffer_MVB[176+5] & B1_03
#define DOORRAALL_D2_DFS_B1                         (g_dataBuffer_MVB[176+5] & B1_04
#define DOORRAALL_D2_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[176+5] U8_1
#define DOORRAALL_D2_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[176+6] U8_0
#define DOORRAALL_D2_LIFE_U8                        (g_dataBuffer_MVB[176+6] U8_1


#define DOORRAALL_D3_LOCKED_M_B1                    (g_dataBuffer_MVB[176+7] & B1_00
#define DOORRAALL_D3_OPEN_M_B1                      (g_dataBuffer_MVB[176+7] & B1_01
#define DOORRAALL_D3_EME_M_B1                       (g_dataBuffer_MVB[176+7] & B1_02
#define DOORRAALL_D3_ISO_M_B1                       (g_dataBuffer_MVB[176+7] & B1_03
#define DOORRAALL_D3_MINF_M_B1                      (g_dataBuffer_MVB[176+7] & B1_10
#define DOORRAALL_D3_MAJF_M_B1                      (g_dataBuffer_MVB[176+7] & B1_11
#define DOORRAALL_D3_MCF_B1                         (g_dataBuffer_MVB[176+7] & B1_12
#define DOORRAALL_D3_DCUF_B1                        (g_dataBuffer_MVB[176+7] & B1_13
#define DOORRAALL_D3_DLSF_B1                        (g_dataBuffer_MVB[176+7] & B1_14
#define DOORRAALL_D3_DCSF_B1                        (g_dataBuffer_MVB[176+7] & B1_15
#define DOORRAALL_D3_BUZZERF_B1                     (g_dataBuffer_MVB[176+7] & B1_16
#define DOORRAALL_D3_INDICATOR1F_B1                 (g_dataBuffer_MVB[176+7] & B1_17
#define DOORRAALL_D3_FTL_B1                         (g_dataBuffer_MVB[176+7+1] B1_00
#define DOORRAALL_D3_DFTCBO_B1                      (g_dataBuffer_MVB[176+7+1] & B1_01
#define DOORRAALL_D3_DFTOBO_B1                      (g_dataBuffer_MVB[176+7+1] & B1_02
#define DOORRAALL_D3_DOTE_B1                        (g_dataBuffer_MVB[176+7+1] & B1_03
#define DOORRAALL_D3_DCTE_B1                        (g_dataBuffer_MVB[176+7+1] & B1_04
#define DOORRAALL_D3_UU_B1                          (g_dataBuffer_MVB[176+7+1] & B1_05
#define DOORRAALL_D3_INDICATOR2F_B1                 (g_dataBuffer_MVB[176+7+1] & B1_06
#define DOORRAALL_D3_INDICATOR3F_B1                 (g_dataBuffer_MVB[176+7+1] & B1_07
#define DOORRAALL_D3_LSTLF_B1                       (g_dataBuffer_MVB[176+7+1] & B1_10
#define DOORRAALL_D3_ETLF_B1                        (g_dataBuffer_MVB[176+7+1] & B1_11
#define DOORRAALL_D3_OTLF_B1                        (g_dataBuffer_MVB[176+7+1] & B1_12
#define DOORRAALL_D3_CTLF_B1                        (g_dataBuffer_MVB[176+7+1] & B1_13
#define DOORRAALL_D3_DFS_B1                         (g_dataBuffer_MVB[176+7+1] & B1_14
#define DOORRAALL_D3_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[176+9] U8_0
#define DOORRAALL_D3_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[176+9] U8_1
#define DOORRAALL_D3_LIFE_U8                        (g_dataBuffer_MVB[176+10] U8_0


#define DOORRAALL_D4_LOCKED_M_B1                    (g_dataBuffer_MVB[176+7+3] & B1_10
#define DOORRAALL_D4_OPEN_M_B1                      (g_dataBuffer_MVB[176+7+3] & B1_11
#define DOORRAALL_D4_EME_M_B1                       (g_dataBuffer_MVB[176+7+3] & B1_12
#define DOORRAALL_D4_ISO_M_B1                       (g_dataBuffer_MVB[176+7+3] & B1_13
#define DOORRAALL_D4_MINF_M_B1                      (g_dataBuffer_MVB[176+7+4] & B1_00
#define DOORRAALL_D4_MAJF_M_B1                      (g_dataBuffer_MVB[176+7+4] & B1_01
#define DOORRAALL_D4_MCF_B1                         (g_dataBuffer_MVB[176+7+4] & B1_02
#define DOORRAALL_D4_DCUF_B1                        (g_dataBuffer_MVB[176+7+4] & B1_03
#define DOORRAALL_D4_DLSF_B1                        (g_dataBuffer_MVB[176+7+4] & B1_04
#define DOORRAALL_D4_DCSF_B1                        (g_dataBuffer_MVB[176+7+4] & B1_05
#define DOORRAALL_D4_BUZZERF_B1                     (g_dataBuffer_MVB[176+7+4] & B1_06
#define DOORRAALL_D4_INDICATOR1F_B1                 (g_dataBuffer_MVB[176+7+4] & B1_07
#define DOORRAALL_D4_FTL_B1                         (g_dataBuffer_MVB[176+7+4] & B1_10
#define DOORRAALL_D4_DFTCBO_B1                      (g_dataBuffer_MVB[176+7+4] & B1_11
#define DOORRAALL_D4_DFTOBO_B1                      (g_dataBuffer_MVB[176+7+4] & B1_12
#define DOORRAALL_D4_DOTE_B1                        (g_dataBuffer_MVB[176+7+4] & B1_13
#define DOORRAALL_D4_DCTE_B1                        (g_dataBuffer_MVB[176+7+4] & B1_14
#define DOORRAALL_D4_UU_B1                          (g_dataBuffer_MVB[176+7+4] & B1_15
#define DOORRAALL_D4_INDICATOR2F_B1                 (g_dataBuffer_MVB[176+7+4] & B1_16
#define DOORRAALL_D4_INDICATOR3F_B1                 (g_dataBuffer_MVB[176+7+4] & B1_17
#define DOORRAALL_D4_LSTLF_B1                       (g_dataBuffer_MVB[176+7+5] & B1_00
#define DOORRAALL_D4_ETLF_B1                        (g_dataBuffer_MVB[176+7+5] & B1_01
#define DOORRAALL_D4_OTLF_B1                        (g_dataBuffer_MVB[176+7+5] & B1_02
#define DOORRAALL_D4_CTLF_B1                        (g_dataBuffer_MVB[176+7+5] & B1_03
#define DOORRAALL_D4_DFS_B1                         (g_dataBuffer_MVB[176+7+5] & B1_04
#define DOORRAALL_D4_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[176+12] U8_1
#define DOORRAALL_D4_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[176+13] U8_0
#define DOORRAALL_D4_LIFE_U8                        (g_dataBuffer_MVB[176+13] U8_1



#define DOORRAALL_D1_RS485VALID_B1                  (g_dataBuffer_MVB[176+14] & B1_00
#define DOORRAALL_D4_RS485VALID_B1                  (g_dataBuffer_MVB[176+14] & B1_01
#define DOORRAALL_D3_RS485VALID_B1                  (g_dataBuffer_MVB[176+14] & B1_02
#define DOORRAALL_D4_RS485VALID_B1                  (g_dataBuffer_MVB[176+14] & B1_03

#define DOORRAALL_D4_CHK_B1                          (g_dataBuffer_MVB[176+15] & A2_16_17


//0x053=83    DoorRB_ALL                  (g_dataBuffer_MVB[192+i]

#define DOORRBALL_D1_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[192+2] U8_0
#define DOORRBALL_D1_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[192+2] U8_1
#define DOORRBALL_D1_LIFE_U8                        (g_dataBuffer_MVB[192+3] U8_0
#define DOORRBALL_D2_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[192+5] U8_1
#define DOORRBALL_D2_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[192+6] U8_0
#define DOORRBALL_D2_LIFE_U8                        (g_dataBuffer_MVB[192+6] U8_1
#define DOORRBALL_D3_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[192+9] U8_0
#define DOORRBALL_D3_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[192+9] U8_1
#define DOORRBALL_D3_LIFE_U8                        (g_dataBuffer_MVB[192+10] U8_0
#define DOORRBALL_D4_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[192+12] U8_1
#define DOORRBALL_D4_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[192+13] U8_0
#define DOORRBALL_D4_LIFE_U8                        (g_dataBuffer_MVB[192+13] U8_1

#define DOORRBALL_D1_LOCKED_M_B1                    (g_dataBuffer_MVB[192] & B1_00
#define DOORRBALL_D1_OPEN_M_B1                      (g_dataBuffer_MVB[192] & B1_01
#define DOORRBALL_D1_EME_M_B1                       (g_dataBuffer_MVB[192] & B1_02
#define DOORRBALL_D1_ISO_M_B1                       (g_dataBuffer_MVB[192] & B1_03
#define DOORRBALL_D1_MINF_M_B1                      (g_dataBuffer_MVB[192] & B1_10
#define DOORRBALL_D1_MAJF_M_B1                      (g_dataBuffer_MVB[192] & B1_11
#define DOORRBALL_D1_MCF_B1                         (g_dataBuffer_MVB[192] & B1_12
#define DOORRBALL_D1_DCUF_B1                        (g_dataBuffer_MVB[192] & B1_13
#define DOORRBALL_D1_DLSF_B1                        (g_dataBuffer_MVB[192] & B1_14
#define DOORRBALL_D1_DCSF_B1                        (g_dataBuffer_MVB[192] & B1_15
#define DOORRBALL_D1_BUZZERF_B1                     (g_dataBuffer_MVB[192] & B1_16
#define DOORRBALL_D1_INDICATOR1F_B1                 (g_dataBuffer_MVB[192] & B1_17
#define DOORRBALL_D1_FTL_B1                         (g_dataBuffer_MVB[192+1] B1_00
#define DOORRBALL_D1_DFTCBO_B1                      (g_dataBuffer_MVB[192+1] & B1_01
#define DOORRBALL_D1_DFTOBO_B1                      (g_dataBuffer_MVB[192+1] & B1_02
#define DOORRBALL_D1_DOTE_B1                        (g_dataBuffer_MVB[192+1] & B1_03
#define DOORRBALL_D1_DCTE_B1                        (g_dataBuffer_MVB[192+1] & B1_04
#define DOORRBALL_D1_UU_B1                          (g_dataBuffer_MVB[192+1] & B1_05
#define DOORRBALL_D1_INDICATOR2F_B1                 (g_dataBuffer_MVB[192+1] & B1_06
#define DOORRBALL_D1_INDICATOR3F_B1                 (g_dataBuffer_MVB[192+1] & B1_07
#define DOORRBALL_D1_LSTLF_B1                       (g_dataBuffer_MVB[192+1] & B1_10
#define DOORRBALL_D1_ETLF_B1                        (g_dataBuffer_MVB[192+1] & B1_11
#define DOORRBALL_D1_OTLF_B1                        (g_dataBuffer_MVB[192+1] & B1_12
#define DOORRBALL_D1_CTLF_B1                        (g_dataBuffer_MVB[192+1] & B1_13
#define DOORRBALL_D1_DFS_B1                         (g_dataBuffer_MVB[192+1] & B1_14
#define DOORRBALL_D1_SW_VERS_U8                     (g_dataBuffer_MVB[192+2] U8_0
#define DOORRBALL_D1_LIFE_U8                        (g_dataBuffer_MVB[192+2] U8_1




#define DOORRBALL_D2_LOCKED_M_B1                    (g_dataBuffer_MVB[192+3] & B1_10
#define DOORRBALL_D2_OPEN_M_B1                      (g_dataBuffer_MVB[192+3] & B1_11
#define DOORRBALL_D2_EME_M_B1                       (g_dataBuffer_MVB[192+3] & B1_12
#define DOORRBALL_D2_ISO_M_B1                       (g_dataBuffer_MVB[192+3] & B1_13
#define DOORRBALL_D2_MINF_M_B1                      (g_dataBuffer_MVB[192+4] & B1_00
#define DOORRBALL_D2_MAJF_M_B1                      (g_dataBuffer_MVB[192+4] & B1_01
#define DOORRBALL_D2_MCF_B1                         (g_dataBuffer_MVB[192+4] & B1_02
#define DOORRBALL_D2_DCUF_B1                        (g_dataBuffer_MVB[192+4] & B1_03
#define DOORRBALL_D2_DLSF_B1                        (g_dataBuffer_MVB[192+4] & B1_04
#define DOORRBALL_D2_DCSF_B1                        (g_dataBuffer_MVB[192+4] & B1_05
#define DOORRBALL_D2_BUZZERF_B1                     (g_dataBuffer_MVB[192+4] & B1_06
#define DOORRBALL_D2_INDICATOR1F_B1                 (g_dataBuffer_MVB[192+4] & B1_07
#define DOORRBALL_D2_FTL_B1                         (g_dataBuffer_MVB[192+4] & B1_10
#define DOORRBALL_D2_DFTCBO_B1                      (g_dataBuffer_MVB[192+4] & B1_11
#define DOORRBALL_D2_DFTOBO_B1                      (g_dataBuffer_MVB[192+4] & B1_12
#define DOORRBALL_D2_DOTE_B1                        (g_dataBuffer_MVB[192+4] & B1_13
#define DOORRBALL_D2_DCTE_B1                        (g_dataBuffer_MVB[192+4] & B1_14
#define DOORRBALL_D2_UU_B1                          (g_dataBuffer_MVB[192+4] & B1_15
#define DOORRBALL_D2_INDICATOR2F_B1                 (g_dataBuffer_MVB[192+4] & B1_16
#define DOORRBALL_D2_INDICATOR3F_B1                 (g_dataBuffer_MVB[192+4] & B1_17
#define DOORRBALL_D2_LSTLF_B1                       (g_dataBuffer_MVB[192+5] & B1_00
#define DOORRBALL_D2_ETLF_B1                        (g_dataBuffer_MVB[192+5] & B1_01
#define DOORRBALL_D2_OTLF_B1                        (g_dataBuffer_MVB[192+5] & B1_02
#define DOORRBALL_D2_CTLF_B1                        (g_dataBuffer_MVB[192+5] & B1_03
#define DOORRBALL_D2_DFS_B1                         (g_dataBuffer_MVB[192+5] & B1_04
#define DOORRBALL_D2_SW_VERS_U8                     (g_dataBuffer_MVB[192+5] U8_1
#define DOORRBALL_D2_LIFE_U8                        (g_dataBuffer_MVB[192+6] U8_0


#define DOORRBALL_D3_LOCKED_M_B1                    (g_dataBuffer_MVB[192+7] & B1_00
#define DOORRBALL_D3_OPEN_M_B1                      (g_dataBuffer_MVB[192+7] & B1_01
#define DOORRBALL_D3_EME_M_B1                       (g_dataBuffer_MVB[192+7] & B1_02
#define DOORRBALL_D3_ISO_M_B1                       (g_dataBuffer_MVB[192+7] & B1_03
#define DOORRBALL_D3_MINF_M_B1                      (g_dataBuffer_MVB[192+7] & B1_10
#define DOORRBALL_D3_MAJF_M_B1                      (g_dataBuffer_MVB[192+7] & B1_11
#define DOORRBALL_D3_MCF_B1                         (g_dataBuffer_MVB[192+7] & B1_12
#define DOORRBALL_D3_DCUF_B1                        (g_dataBuffer_MVB[192+7] & B1_13
#define DOORRBALL_D3_DLSF_B1                        (g_dataBuffer_MVB[192+7] & B1_14
#define DOORRBALL_D3_DCSF_B1                        (g_dataBuffer_MVB[192+7] & B1_15
#define DOORRBALL_D3_BUZZERF_B1                     (g_dataBuffer_MVB[192+7] & B1_16
#define DOORRBALL_D3_INDICATOR1F_B1                 (g_dataBuffer_MVB[192+7] & B1_17
#define DOORRBALL_D3_FTL_B1                         (g_dataBuffer_MVB[192+7+1] B1_00
#define DOORRBALL_D3_DFTCBO_B1                      (g_dataBuffer_MVB[192+7+1] & B1_01
#define DOORRBALL_D3_DFTOBO_B1                      (g_dataBuffer_MVB[192+7+1] & B1_02
#define DOORRBALL_D3_DOTE_B1                        (g_dataBuffer_MVB[192+7+1] & B1_03
#define DOORRBALL_D3_DCTE_B1                        (g_dataBuffer_MVB[192+7+1] & B1_04
#define DOORRBALL_D3_UU_B1                          (g_dataBuffer_MVB[192+7+1] & B1_05
#define DOORRBALL_D3_INDICATOR2F_B1                 (g_dataBuffer_MVB[192+7+1] & B1_06
#define DOORRBALL_D3_INDICATOR3F_B1                 (g_dataBuffer_MVB[192+7+1] & B1_07
#define DOORRBALL_D3_LSTLF_B1                       (g_dataBuffer_MVB[192+7+1] & B1_10
#define DOORRBALL_D3_ETLF_B1                        (g_dataBuffer_MVB[192+7+1] & B1_11
#define DOORRBALL_D3_OTLF_B1                        (g_dataBuffer_MVB[192+7+1] & B1_12
#define DOORRBALL_D3_CTLF_B1                        (g_dataBuffer_MVB[192+7+1] & B1_13
#define DOORRBALL_D3_DFS_B1                         (g_dataBuffer_MVB[192+7+1] & B1_14
#define DOORRBALL_D3_SW_VERS_U8                     (g_dataBuffer_MVB[192+7+2] U8_0
#define DOORRBALL_D3_LIFE_U8                        (g_dataBuffer_MVB[192+7+2] U8_1




#define DOORRBALL_D4_LOCKED_M_B1                    (g_dataBuffer_MVB[192+7+3] & B1_10
#define DOORRBALL_D4_OPEN_M_B1                      (g_dataBuffer_MVB[192+7+3] & B1_11
#define DOORRBALL_D4_EME_M_B1                       (g_dataBuffer_MVB[192+7+3] & B1_12
#define DOORRBALL_D4_ISO_M_B1                       (g_dataBuffer_MVB[192+7+3] & B1_13
#define DOORRBALL_D4_MINF_M_B1                      (g_dataBuffer_MVB[192+7+4] & B1_00
#define DOORRBALL_D4_MAJF_M_B1                      (g_dataBuffer_MVB[192+7+4] & B1_01
#define DOORRBALL_D4_MCF_B1                         (g_dataBuffer_MVB[192+7+4] & B1_02
#define DOORRBALL_D4_DCUF_B1                        (g_dataBuffer_MVB[192+7+4] & B1_03
#define DOORRBALL_D4_DLSF_B1                        (g_dataBuffer_MVB[192+7+4] & B1_04
#define DOORRBALL_D4_DCSF_B1                        (g_dataBuffer_MVB[192+7+4] & B1_05
#define DOORRBALL_D4_BUZZERF_B1                     (g_dataBuffer_MVB[192+7+4] & B1_06
#define DOORRBALL_D4_INDICATOR1F_B1                 (g_dataBuffer_MVB[192+7+4] & B1_07
#define DOORRBALL_D4_FTL_B1                         (g_dataBuffer_MVB[192+7+4] & B1_10
#define DOORRBALL_D4_DFTCBO_B1                      (g_dataBuffer_MVB[192+7+4] & B1_11
#define DOORRBALL_D4_DFTOBO_B1                      (g_dataBuffer_MVB[192+7+4] & B1_12
#define DOORRBALL_D4_DOTE_B1                        (g_dataBuffer_MVB[192+7+4] & B1_13
#define DOORRBALL_D4_DCTE_B1                        (g_dataBuffer_MVB[192+7+4] & B1_14
#define DOORRBALL_D4_UU_B1                          (g_dataBuffer_MVB[192+7+4] & B1_15
#define DOORRBALL_D4_INDICATOR2F_B1                 (g_dataBuffer_MVB[192+7+4] & B1_16
#define DOORRBALL_D4_INDICATOR3F_B1                 (g_dataBuffer_MVB[192+7+4] & B1_17
#define DOORRBALL_D4_LSTLF_B1                       (g_dataBuffer_MVB[192+7+5] & B1_00
#define DOORRBALL_D4_ETLF_B1                        (g_dataBuffer_MVB[192+7+5] & B1_01
#define DOORRBALL_D4_OTLF_B1                        (g_dataBuffer_MVB[192+7+5] & B1_02
#define DOORRBALL_D4_CTLF_B1                        (g_dataBuffer_MVB[192+7+5] & B1_03
#define DOORRBALL_D4_DFS_B1                         (g_dataBuffer_MVB[192+7+5] & B1_04
#define DOORRBALL_D4_SW_VERS_U8                     (g_dataBuffer_MVB[192+7+5] U8_1
#define DOORRBALL_D4_LIFE_U8                        (g_dataBuffer_MVB[192+7+6] U8_0


#define DOORRBALL_D1_RS485VALID_B1                  (g_dataBuffer_MVB[192+14] & B1_00
#define DOORRBALL_D4_RS485VALID_B1                  (g_dataBuffer_MVB[192+14] & B1_01
#define DOORRBALL_D3_RS485VALID_B1                  (g_dataBuffer_MVB[192+14] & B1_02
#define DOORRBALL_D4_RS485VALID_B1                  (g_dataBuffer_MVB[192+14] & B1_03

#define DOORRBALL_D4_CHK_B1                          (g_dataBuffer_MVB[192+15] & A2_16_17






 //0x054=84    DoorMB_ALL                 (g_dataBuffer_MVB[208+i]
#define DOORMBALL_D1_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[208+2] U8_0
#define DOORMBALL_D1_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[208+2] U8_1
#define DOORMBALL_D1_LIFE_U8                        (g_dataBuffer_MVB[208+3] U8_0
#define DOORMBALL_D2_SW_VERS_MAJOR_U8                     (g_dataBuffer_MVB[208+5] U8_1
#define DOORMBALL_D2_SW_VERS_MINOR_U8                     (g_dataBuffer_MVB[208+6] U8_0
#define DOORMBALL_D2_LIFE_U8                        (g_dataBuffer_MVB[208+6] U8_1


#define DOORMBALL_D1_LOCKED_M_B1                    (g_dataBuffer_MVB[208] & B1_00
#define DOORMBALL_D1_OPEN_M_B1                      (g_dataBuffer_MVB[208] & B1_01
#define DOORMBALL_D1_EME_M_B1                       (g_dataBuffer_MVB[208] & B1_02
#define DOORMBALL_D1_ISO_M_B1                       (g_dataBuffer_MVB[208] & B1_03
#define DOORMBALL_D1_MINF_M_B1                      (g_dataBuffer_MVB[208] & B1_10
#define DOORMBALL_D1_MAJF_M_B1                      (g_dataBuffer_MVB[208] & B1_11
#define DOORMBALL_D1_MCF_B1                         (g_dataBuffer_MVB[208] & B1_12
#define DOORMBALL_D1_DCUF_B1                        (g_dataBuffer_MVB[208] & B1_13
#define DOORMBALL_D1_DLSF_B1                        (g_dataBuffer_MVB[208] & B1_14
#define DOORMBALL_D1_DCSF_B1                        (g_dataBuffer_MVB[208] & B1_15
#define DOORMBALL_D1_BUZZERF_B1                     (g_dataBuffer_MVB[208] & B1_16
#define DOORMBALL_D1_INDICATOR1F_B1                 (g_dataBuffer_MVB[208] & B1_17
#define DOORMBALL_D1_FTL_B1                         (g_dataBuffer_MVB[208+1] B1_00
#define DOORMBALL_D1_DFTCBO_B1                      (g_dataBuffer_MVB[208+1] & B1_01
#define DOORMBALL_D1_DFTOBO_B1                      (g_dataBuffer_MVB[208+1] & B1_02
#define DOORMBALL_D1_DOTE_B1                        (g_dataBuffer_MVB[208+1] & B1_03
#define DOORMBALL_D1_DCTE_B1                        (g_dataBuffer_MVB[208+1] & B1_04
#define DOORMBALL_D1_UU_B1                          (g_dataBuffer_MVB[208+1] & B1_05
#define DOORMBALL_D1_INDICATOR2F_B1                 (g_dataBuffer_MVB[208+1] & B1_06
#define DOORMBALL_D1_INDICATOR3F_B1                 (g_dataBuffer_MVB[208+1] & B1_07
#define DOORMBALL_D1_LSTLF_B1                       (g_dataBuffer_MVB[208+1] & B1_10
#define DOORMBALL_D1_ETLF_B1                        (g_dataBuffer_MVB[208+1] & B1_11
#define DOORMBALL_D1_OTLF_B1                        (g_dataBuffer_MVB[208+1] & B1_12
#define DOORMBALL_D1_CTLF_B1                        (g_dataBuffer_MVB[208+1] & B1_13
#define DOORMBALL_D1_DFS_B1                         (g_dataBuffer_MVB[208+1] & B1_14
#define DOORMBALL_D1_SW_VERS_U8                     (g_dataBuffer_MVB[208+2] U8_0
#define DOORMBALL_D1_LIFE_U8                        (g_dataBuffer_MVB[208+2] U8_1




#define DOORMBALL_D2_LOCKED_M_B1                    (g_dataBuffer_MVB[208+3] & B1_10
#define DOORMBALL_D2_OPEN_M_B1                      (g_dataBuffer_MVB[208+3] & B1_11
#define DOORMBALL_D2_EME_M_B1                       (g_dataBuffer_MVB[208+3] & B1_12
#define DOORMBALL_D2_ISO_M_B1                       (g_dataBuffer_MVB[208+3] & B1_13
#define DOORMBALL_D2_MINF_M_B1                      (g_dataBuffer_MVB[208+4] & B1_00
#define DOORMBALL_D2_MAJF_M_B1                      (g_dataBuffer_MVB[208+4] & B1_01
#define DOORMBALL_D2_MCF_B1                         (g_dataBuffer_MVB[208+4] & B1_02
#define DOORMBALL_D2_DCUF_B1                        (g_dataBuffer_MVB[208+4] & B1_03
#define DOORMBALL_D2_DLSF_B1                        (g_dataBuffer_MVB[208+4] & B1_04
#define DOORMBALL_D2_DCSF_B1                        (g_dataBuffer_MVB[208+4] & B1_05
#define DOORMBALL_D2_BUZZERF_B1                     (g_dataBuffer_MVB[208+4] & B1_06
#define DOORMBALL_D2_INDICATOR1F_B1                 (g_dataBuffer_MVB[208+4] & B1_07
#define DOORMBALL_D2_FTL_B1                         (g_dataBuffer_MVB[208+4] & B1_10
#define DOORMBALL_D2_DFTCBO_B1                      (g_dataBuffer_MVB[208+4] & B1_11
#define DOORMBALL_D2_DFTOBO_B1                      (g_dataBuffer_MVB[208+4] & B1_12
#define DOORMBALL_D2_DOTE_B1                        (g_dataBuffer_MVB[208+4] & B1_13
#define DOORMBALL_D2_DCTE_B1                        (g_dataBuffer_MVB[208+4] & B1_14
#define DOORMBALL_D2_UU_B1                          (g_dataBuffer_MVB[208+4] & B1_15
#define DOORMBALL_D2_INDICATOR2F_B1                 (g_dataBuffer_MVB[208+4] & B1_16
#define DOORMBALL_D2_INDICATOR3F_B1                 (g_dataBuffer_MVB[208+4] & B1_17
#define DOORMBALL_D2_LSTLF_B1                       (g_dataBuffer_MVB[208+5] & B1_00
#define DOORMBALL_D2_ETLF_B1                        (g_dataBuffer_MVB[208+5] & B1_01
#define DOORMBALL_D2_OTLF_B1                        (g_dataBuffer_MVB[208+5] & B1_02
#define DOORMBALL_D2_CTLF_B1                        (g_dataBuffer_MVB[208+5] & B1_03
#define DOORMBALL_D2_DFS_B1                         (g_dataBuffer_MVB[208+5] & B1_04
#define DOORMBALL_D2_SW_VERS_U8                     (g_dataBuffer_MVB[208+5] U8_1
#define DOORMBALL_D2_LIFE_U8                        (g_dataBuffer_MVB[208+6] U8_0

#define DOORMBALL_D1_RS485VALID_B1                  (g_dataBuffer_MVB[208+14] & B1_00
#define DOORMBALL_D2_RS485VALID_B1                  (g_dataBuffer_MVB[208+14] & B1_01
//#define DOORMBALL_D3_RS485VALID_B1                  (g_dataBuffer_MVB[208+14] & B1_02
//#define DOORMBALL_D4_RS485VALID_B1                  (g_dataBuffer_MVB[208+14] & B1_03

#define DOORMBALL_D4_CHK_B1                          (g_dataBuffer_MVB[208+15] & A2_16_17





//HVAC_RA & HVAC_RB
//0x061=97     HVACRA_ALL                  (g_dataBuffer_MVB[224+i]
 #define HVACRAALL_AC_TEST_MODE_B1                    (g_dataBuffer_MVB[224] &  BigB1_00
 #define HVACRAALL_STOP_MODE_B1                      (g_dataBuffer_MVB[224] &  BigB1_01
 #define HVACRAALL_VENTILATION_MODE_B1               (g_dataBuffer_MVB[224] &  BigB1_02
 #define HVACRAALL_PRE_WARM_MODE_B1                  (g_dataBuffer_MVB[224] &  BigB1_03
 #define HVACRAALL_AUTO_COLD_MODE_B1                 (g_dataBuffer_MVB[224] &  BigB1_04
 #define HVACRAALL_MANU_WARM_MODE_B1                 (g_dataBuffer_MVB[224] &  BigB1_05
 #define HVACRAALL_MANU_COLD_MODE_B1                 (g_dataBuffer_MVB[224] &  BigB1_06
 #define HVACRAALL_PRE_COLD_MODE_B1                  (g_dataBuffer_MVB[224] &  BigB1_07
 #define HVACRAALL_AUTO_WARM_MODE_B1                 (g_dataBuffer_MVB[224] &  BigB1_13
 #define HVACRAALL_START_MODE_B1                     (g_dataBuffer_MVB[224] &  BigB1_14
 #define HVACRAALL_EMER_VENT_MODE_B1                 (g_dataBuffer_MVB[224] &  BigB1_17
 #define HVACRAALL_LOCAL_CONTROL_B1                  (g_dataBuffer_MVB[224+1] &  BigB1_01
 #define HVACRAALL_CENTR_CONTROL_B1                  (g_dataBuffer_MVB[224+1] &  BigB1_02
 #define HVACRAALL_PRE_COLD_STOP_B1                  (g_dataBuffer_MVB[224+1] &  BigB1_05
 #define HVACRAALL_EMER_VENT_TEST_B1                 (g_dataBuffer_MVB[224+1] &  BigB1_06
 #define HVACRAALL_ELECTRIC_HEATER_2_B1              (g_dataBuffer_MVB[224+1] &  BigB1_10
 #define HVACRAALL_ELECTRIC_HEATER_1_B1              (g_dataBuffer_MVB[224+1] &  BigB1_11
 #define HVACRAALL_FAN_RUN_B1                        (g_dataBuffer_MVB[224+1] &  BigB1_13
 #define HVACRAALL_CONDENCER_FAN_RUN_B1              (g_dataBuffer_MVB[224+1] &  BigB1_15
 #define HVACRAALL_COMPRESS_2_RUN_B1                 (g_dataBuffer_MVB[224+1] &  BigB1_16
 #define HVACRAALL_COMPRESS_1_RUN_B1                 (g_dataBuffer_MVB[224+1] &  BigB1_17

 #define HVACRAALL_ARIFRE_2_OPEN75_B1                (g_dataBuffer_MVB[224+2] &  BigB1_02
 #define HVACRAALL_ARIFRE_1_OPEN75_B1                (g_dataBuffer_MVB[224+2] &  BigB1_03
 #define HVACRAALL_ARIFRE_2_OPEN50_B1                (g_dataBuffer_MVB[224+2] &  BigB1_06
 #define HVACRAALL_ARIFRE_1_OPEN50_B1                (g_dataBuffer_MVB[224+2] &  BigB1_07
 #define HVACRAALL_ARIFRE_2_OPEN25_B1                (g_dataBuffer_MVB[224+2] &  BigB1_12
 #define HVACRAALL_ARIFRE_1_OPEN25_B1                (g_dataBuffer_MVB[224+2] &  BigB1_13
 #define HVACRAALL_ARIFRE_2_OPEN100_B1               (g_dataBuffer_MVB[224+2] &  BigB1_16
 #define HVACRAALL_ARIFRE_1_OPEN100_B1               (g_dataBuffer_MVB[224+2] &  BigB1_17

 #define HVACRAALL_ARIREFLOW_VALVE_OPEN_B1           (g_dataBuffer_MVB[224+3] &  BigB1_00
 #define HVACRAALL_ARIREFLOW_VALVE_CLOSE_B1          (g_dataBuffer_MVB[224+3] &  BigB1_02
 #define HVACRAALL_CONFANINVERTER_PROTEC_B1          (g_dataBuffer_MVB[224+3] &  BigB1_12
 #define HVACRAALL_VENFANINVERTER_PROTEC_B1          (g_dataBuffer_MVB[224+3] &  BigB1_13
 #define HVACRAALL_ARIFRE_2_CLOSE100_B1              (g_dataBuffer_MVB[224+3] &  BigB1_16
 #define HVACRAALL_ARIFRE_1_CLOSE100_B1              (g_dataBuffer_MVB[224+3] &  BigB1_17

 #define HVACRAALL_FREAIRSEN_F_B1                    (g_dataBuffer_MVB[224+4] &  BigB1_02
 #define HVACRAALL_REFLOWAIRSEN_F_B1                 (g_dataBuffer_MVB[224+4] &  BigB1_03
 #define HVACRAALL_EMERVENTINV_B1                    (g_dataBuffer_MVB[224+4] &  BigB1_05
 #define HVACRAALL_EMERVENTINV_COMM_F_B1             (g_dataBuffer_MVB[224+4] &  BigB1_13

 #define HVACRAALL_COMP_2_LOWPRES_F_B1               (g_dataBuffer_MVB[224+5] &  BigB1_00
 #define HVACRAALL_COMP_1_LOWPRES_F_B1               (g_dataBuffer_MVB[224+5] &  BigB1_01
 #define HVACRAALL_COMP_2_HIGHPRES_F_B1              (g_dataBuffer_MVB[224+5] &  BigB1_02
 #define HVACRAALL_COMP_1_HIGHPRES_F_B1              (g_dataBuffer_MVB[224+5] &  BigB1_03
 #define HVACRAALL_COMP_2_OVERLOAD_B1                (g_dataBuffer_MVB[224+5] &  BigB1_04
 #define HVACRAALL_COMP_1_OVERLOAD_B1                (g_dataBuffer_MVB[224+5] &  BigB1_05
 #define HVACRAALL_COMP_2_INVPROTC_B1                (g_dataBuffer_MVB[224+5] &  BigB1_06
 #define HVACRAALL_COMP_1_INVPROTC_B1                (g_dataBuffer_MVB[224+5] &  BigB1_07
 #define HVACRAALL_REFLOWAIRVOL_F_B1                 (g_dataBuffer_MVB[224+5] &  BigB1_15
 #define HVACRAALL_FRESHAIRVOL_F_B1                  (g_dataBuffer_MVB[224+5] &  BigB1_17

 #define HVACRAALL_COMP_2_INVCOM_FAIL_B1             (g_dataBuffer_MVB[224+6] &  BigB1_04
 #define HVACRAALL_COMP_1_INVCOM_FAIL_B1             (g_dataBuffer_MVB[224+6] &  BigB1_05
 #define HVACRAALL_IO_BOARD_COM_FAIL_B1              (g_dataBuffer_MVB[224+6] &  BigB1_06
 #define HVACRAALL_DETECT_BOARD_COM_FAIL_B1          (g_dataBuffer_MVB[224+6] &  BigB1_07
 #define HVACRAALL_CONFANINVERTER_COM_FAIL_B1        (g_dataBuffer_MVB[224+6] &  BigB1_10
 #define HVACRAALL_VENFANINVERTER_COM_FAIL_B1        (g_dataBuffer_MVB[224+6] &  BigB1_11
 #define HVACRAALL_DCPOWER_SUPPLY_UNIT_FAIL_B1       (g_dataBuffer_MVB[224+6] &  BigB1_12
 #define HVACRAALL_ELECTRIC_HEATER_2_F_B1            (g_dataBuffer_MVB[224+6] &  BigB1_13
 #define HVACRAALL_ELECTRIC_HEATER_1_F_B1            (g_dataBuffer_MVB[224+6] &  BigB1_14

 #define HVACRAALL_HVAC_LIFE_U8                      (g_dataBuffer_MVB[224+7] BigU8_0
 #define HVACRAALL_HVAC_SW_VERS_L_U8                 (g_dataBuffer_MVB[224+7] BigU8_1
 #define HVACRAALL_HVAC_SW_VERS_H_U8                 (g_dataBuffer_MVB[224+8] BigU8_0
 #define HVACRAALL_HVAC_SW_VERS_U16                  Change_BigEen((g_dataBuffer_MVB[224+7] BigU8_1 + (g_dataBuffer_MVB[224+8] BigU8_0) * 256)

 #define HVACRAALL_SET_TEMP_WARM_U8                  (g_dataBuffer_MVB[224+8] BigU8_1     //17
 #define HVACRAALL_SET_TEMP_COLD_U8                  (g_dataBuffer_MVB[224+9] BigU8_0     //18
 #define HVACRAALL_INSIDE_TEMP_U8                    (g_dataBuffer_MVB[224+9] BigU8_1     //19
 #define HVACRAALL_OUTDOOR_TEMP_U8                   (g_dataBuffer_MVB[224+10] BigU8_0    //20

 #define HVACRAALL_CHECKVARIABLE_A2                   (g_dataBuffer_MVB[224+6] & A2_16_17






//0x062=98     HVACRB_ALL                 (g_dataBuffer_MVB[240+i]
       #define HVACRBALL_AC_TEST_MODE_B1                    (g_dataBuffer_MVB[240] &  BigB1_00
       #define HVACRBALL_STOP_MODE_B1                      (g_dataBuffer_MVB[240] &  BigB1_01
       #define HVACRBALL_VENTILATION_MODE_B1               (g_dataBuffer_MVB[240] &  BigB1_02
       #define HVACRBALL_PRE_WARM_MODE_B1                  (g_dataBuffer_MVB[240] &  BigB1_03
       #define HVACRBALL_AUTO_COLD_MODE_B1                 (g_dataBuffer_MVB[240] &  BigB1_04
       #define HVACRBALL_MANU_WARM_MODE_B1                 (g_dataBuffer_MVB[240] &  BigB1_05
       #define HVACRBALL_MANU_COLD_MODE_B1                 (g_dataBuffer_MVB[240] &  BigB1_06
       #define HVACRBALL_PRE_COLD_MODE_B1                  (g_dataBuffer_MVB[240] &  BigB1_07
       #define HVACRBALL_AUTO_WARM_MODE_B1                 (g_dataBuffer_MVB[240] &  BigB1_13
       #define HVACRBALL_START_MODE_B1                     (g_dataBuffer_MVB[240] &  BigB1_14
       #define HVACRBALL_EMER_VENT_MODE_B1                 (g_dataBuffer_MVB[240] &  BigB1_17
       #define HVACRBALL_LOCAL_CONTROL_B1                  (g_dataBuffer_MVB[240+1] &  BigB1_01
       #define HVACRBALL_CENTR_CONTROL_B1                  (g_dataBuffer_MVB[240+1] &  BigB1_02
       #define HVACRBALL_PRE_COLD_STOP_B1                  (g_dataBuffer_MVB[240+1] &  BigB1_05
       #define HVACRBALL_EMER_VENT_TEST_B1                 (g_dataBuffer_MVB[240+1] &  BigB1_06
       #define HVACRBALL_ELECTRIC_HEATER_2_B1              (g_dataBuffer_MVB[240+1] &  BigB1_10
       #define HVACRBALL_ELECTRIC_HEATER_1_B1              (g_dataBuffer_MVB[240+1] &  BigB1_11
       #define HVACRBALL_FAN_RUN_B1                        (g_dataBuffer_MVB[240+1] &  BigB1_13
       #define HVACRBALL_CONDENCER_FAN_RUN_B1              (g_dataBuffer_MVB[240+1] &  BigB1_15
       #define HVACRBALL_COMPRESS_2_RUN_B1                 (g_dataBuffer_MVB[240+1] &  BigB1_16
       #define HVACRBALL_COMPRESS_1_RUN_B1                 (g_dataBuffer_MVB[240+1] &  BigB1_17

       #define HVACRBALL_ARIFRE_2_OPEN75_B1                (g_dataBuffer_MVB[240+2] &  BigB1_02
       #define HVACRBALL_ARIFRE_1_OPEN75_B1                (g_dataBuffer_MVB[240+2] &  BigB1_03
       #define HVACRBALL_ARIFRE_2_OPEN50_B1                (g_dataBuffer_MVB[240+2] &  BigB1_06
       #define HVACRBALL_ARIFRE_1_OPEN50_B1                (g_dataBuffer_MVB[240+2] &  BigB1_07
       #define HVACRBALL_ARIFRE_2_OPEN25_B1                (g_dataBuffer_MVB[240+2] &  BigB1_12
       #define HVACRBALL_ARIFRE_1_OPEN25_B1                (g_dataBuffer_MVB[240+2] &  BigB1_13
       #define HVACRBALL_ARIFRE_2_OPEN100_B1               (g_dataBuffer_MVB[240+2] &  BigB1_16
       #define HVACRBALL_ARIFRE_1_OPEN100_B1               (g_dataBuffer_MVB[240+2] &  BigB1_17

       #define HVACRBALL_ARIREFLOW_VALVE_OPEN_B1           (g_dataBuffer_MVB[240+3] &  BigB1_00
       #define HVACRBALL_ARIREFLOW_VALVE_CLOSE_B1          (g_dataBuffer_MVB[240+3] &  BigB1_02
       #define HVACRBALL_CONFANINVERTER_PROTEC_B1          (g_dataBuffer_MVB[240+3] &  BigB1_12
       #define HVACRBALL_VENFANINVERTER_PROTEC_B1          (g_dataBuffer_MVB[240+3] &  BigB1_13
       #define HVACRBALL_ARIFRE_2_CLOSE100_B1              (g_dataBuffer_MVB[240+3] &  BigB1_16
       #define HVACRBALL_ARIFRE_1_CLOSE100_B1              (g_dataBuffer_MVB[240+3] &  BigB1_17

       #define HVACRBALL_FREAIRSEN_F_B1                    (g_dataBuffer_MVB[240+4] &  BigB1_02
       #define HVACRBALL_REFLOWAIRSEN_F_B1                 (g_dataBuffer_MVB[240+4] &  BigB1_03
       #define HVACRBALL_EMERVENTINV_B1                    (g_dataBuffer_MVB[240+4] &  BigB1_05
       #define HVACRBALL_EMERVENTINV_COMM_F_B1             (g_dataBuffer_MVB[240+4] &  BigB1_13

       #define HVACRBALL_COMP_2_LOWPRES_F_B1               (g_dataBuffer_MVB[240+5] &  BigB1_00
       #define HVACRBALL_COMP_1_LOWPRES_F_B1               (g_dataBuffer_MVB[240+5] &  BigB1_01
       #define HVACRBALL_COMP_2_HIGHPRES_F_B1              (g_dataBuffer_MVB[240+5] &  BigB1_02
       #define HVACRBALL_COMP_1_HIGHPRES_F_B1              (g_dataBuffer_MVB[240+5] &  BigB1_03
       #define HVACRBALL_COMP_2_OVERLOAD_B1                (g_dataBuffer_MVB[240+5] &  BigB1_04
       #define HVACRBALL_COMP_1_OVERLOAD_B1                (g_dataBuffer_MVB[240+5] &  BigB1_05
       #define HVACRBALL_COMP_2_INVPROTC_B1                (g_dataBuffer_MVB[240+5] &  BigB1_06
       #define HVACRBALL_COMP_1_INVPROTC_B1                (g_dataBuffer_MVB[240+5] &  BigB1_07
       #define HVACRBALL_REFLOWAIRVOL_F_B1                 (g_dataBuffer_MVB[240+5] &  BigB1_15
       #define HVACRBALL_FRESHAIRVOL_F_B1                  (g_dataBuffer_MVB[240+5] &  BigB1_17

       #define HVACRBALL_COMP_2_INVCOM_FAIL_B1             (g_dataBuffer_MVB[240+6] &  BigB1_04
       #define HVACRBALL_COMP_1_INVCOM_FAIL_B1             (g_dataBuffer_MVB[240+6] &  BigB1_05
       #define HVACRBALL_IO_BOARD_COM_FAIL_B1              (g_dataBuffer_MVB[240+6] &  BigB1_06
       #define HVACRBALL_DETECT_BOARD_COM_FAIL_B1          (g_dataBuffer_MVB[240+6] &  BigB1_07
       #define HVACRBALL_CONFANINVERTER_COM_FAIL_B1        (g_dataBuffer_MVB[240+6] &  BigB1_10
       #define HVACRBALL_VENFANINVERTER_COM_FAIL_B1        (g_dataBuffer_MVB[240+6] &  BigB1_11
       #define HVACRBALL_DCPOWER_SUPPLY_UNIT_FAIL_B1       (g_dataBuffer_MVB[240+6] &  BigB1_12
       #define HVACRBALL_ELECTRIC_HEATER_2_F_B1            (g_dataBuffer_MVB[240+6] &  BigB1_13
       #define HVACRBALL_ELECTRIC_HEATER_1_F_B1            (g_dataBuffer_MVB[240+6] &  BigB1_14

       #define HVACRBALL_HVAC_LIFE_U8                      (g_dataBuffer_MVB[240+7] BigU8_0
       #define HVACRBALL_HVAC_SW_VERS_L_U8                 (g_dataBuffer_MVB[240+7] BigU8_1
       #define HVACRBALL_HVAC_SW_VERS_H_U8                 (g_dataBuffer_MVB[240+8] BigU8_0
       #define HVACRBALL_HVAC_SW_VERS_U16                  Change_BigEen((g_dataBuffer_MVB[240+7] BigU8_1 + (g_dataBuffer_MVB[240+8] BigU8_0) * 256)

       #define HVACRBALL_SET_TEMP_WARM_U8                  (g_dataBuffer_MVB[240+8] BigU8_1
       #define HVACRBALL_SET_TEMP_COLD_U8                  (g_dataBuffer_MVB[240+9] BigU8_0
       #define HVACRBALL_INSIDE_TEMP_U8                    (g_dataBuffer_MVB[240+9] BigU8_1
       #define HVACRBALL_OUTDOOR_TEMP_U8                   (g_dataBuffer_MVB[240+10] BigU8_0

       #define HVACRBALL_CHECKVARIABLE_A2                   (g_dataBuffer_MVB[240+6] & A2_16_17

//Remote
//0x064=100    GTW_CCU                    (g_dataBuffer_MVB[256+i]
  #define GTWCCU_NUMBER_VEHICLE_B8                    (g_dataBuffer_MVB[256+1] U8_1
  #define GTWCCU_GTWSTATUS_STANDBY_E4                  (g_dataBuffer_MVB[256+3] & E4_00_03//6_0,1,2,3
  #define GTWCCU_DRIVING_DIRECTION_A2                  (g_dataBuffer_MVB[256+3] & A2_06_07      // reference to the UIC Address 01 Vehicle
  #define GTWCCU_MVB_RED_E4                            (g_dataBuffer_MVB[256+6] & E4_00_03
  #define GTWCCU_UWTM_UIC_ADDRESS_ID_U8               (g_dataBuffer_MVB[256+6] U8_1
  #define GTWCCU_UWTM_WTB_A1D_ID_B1                   (g_dataBuffer_MVB[256+7] & B1_10
  #define GTWCCU_UWTM_WTB_A2D_ID_B1                   (g_dataBuffer_MVB[256+7] & B1_11
  #define GTWCCU_UWTM_WTB_B1D_ID_B1                   (g_dataBuffer_MVB[256+7] & B1_12
  #define GTWCCU_UWTM_WTB_B2D_ID_B1                   (g_dataBuffer_MVB[256+7] & B1_13
  #define GTWCCU_UWTM_WTB_HFA_ID_B1                   (g_dataBuffer_MVB[256+7] & B1_14
  #define GTWCCU_UWTM_WTB_HFB_ID_B1                   (g_dataBuffer_MVB[256+7] & B1_15
  #define GTWCCU_UWTM_WTB_INAUGURATED                 (g_dataBuffer_MVB[256+7] & B1_16
  #define GTWCCU_GTW_LIFESIGNAL_U8                    (g_dataBuffer_MVB[256+15] U8_0
  #define GTWCCU_CHK_VARIABLE_A2                       (g_dataBuffer_MVB[256+15] & A2_16_17


//0x065=101    CCU_GTW                    (g_dataBuffer_MVB[272+i]
#define CCUGTW_GTW_LIFESIGNAL_U8                      (g_dataBuffer_MVB[272+1] U8_0
#define CCUGTW_GTW_OPMODE_SELECT_E4                    (g_dataBuffer_MVB[272+1] & E4_10_13
#define CCUGTW_chk_A2                                  (g_dataBuffer_MVB[272+7] & A2_16_17





      //g_dataBuffer_R2_1_Master[i]
      //Command from Master V
#define R2_MVB_1_R1TwCmd_A2_Master              (g_dataBuffer_R2_1_Master[1] & A2_00_01
#define R2_MVB_1_R1PantoCmd_A2_Master           (g_dataBuffer_R2_1_Master[1] & A2_02_03
#define R2_MVB_1_R1ScStopStart_A2_Master        (g_dataBuffer_R2_1_Master[1] & A2_04_05
#define R2_MVB_1_R1PantoTramwaveSel_A2_Master   (g_dataBuffer_R2_1_Master[1] & A2_06_07
#define R2_MVB_1_CmdTFCs_U8_Master             (g_dataBuffer_R2_1_Master[1] U8_1
#define R2_MVB_1_patt_B1_Master                (g_dataBuffer_R2_1_Master[2] & B1_00
#define R2_MVB_1_Stopping_B1_Master            (g_dataBuffer_R2_1_Master[2] & B1_01
#define R2_MVB_1_cab_remota_B1_Master          (g_dataBuffer_R2_1_Master[2] & B1_02
#define R2_MVB_1_master_go_B1_Master           (g_dataBuffer_R2_1_Master[2] & B1_03
#define R2_MVB_1_frem_one_B1_Master            (g_dataBuffer_R2_1_Master[2] & B1_04
#define R2_MVB_1_booster_B1_Master             (g_dataBuffer_R2_1_Master[2] & B1_05
#define R2_MVB_1_BcuMask_B1_Master             (g_dataBuffer_R2_1_Master[2] & B1_06
#define R2_MVB_1_Dir_A2_Master                  (g_dataBuffer_R2_1_Master[2] & A2_10_11
#define R2_MVB_1_RifMan_U16_Master             Change_BigEen(g_dataBuffer_R2_1_Master[3])
#define R2_MVB_1_CarVar_U16_Master             Change_BigEen(g_dataBuffer_R2_1_Master[4])
#define R2_MVB_1_SpeedLimit_U8_Master          (g_dataBuffer_R2_1_Master[5] U8_0
#define R2_MVB_1_Year_U8_Master                (g_dataBuffer_R2_1_Master[5] U8_1
#define R2_MVB_1_Month_U8_Master               (g_dataBuffer_R2_1_Master[6] U8_0
#define R2_MVB_1_Day_U8_Master                 (g_dataBuffer_R2_1_Master[6] U8_1
#define R2_MVB_1_Hour_U8_Master                (g_dataBuffer_R2_1_Master[7] U8_0
#define R2_MVB_1_Minute_U8_Master              (g_dataBuffer_R2_1_Master[7] U8_1
#define R2_MVB_1_Second_U8_Master              (g_dataBuffer_R2_1_Master[8] U8_0
#define R2_MVB_1_SetTempCold_U8_Master         (g_dataBuffer_R2_1_Master[8] U8_1
#define R2_MVB_1_SetTempWarm_U8_Master         (g_dataBuffer_R2_1_Master[9] U8_0
#define R2_MVB_1_EmergVentCmd_B1_Master        (g_dataBuffer_R2_1_Master[9] & B1_10
#define R2_MVB_1_VentCmd_B1_Master             (g_dataBuffer_R2_1_Master[9] & B1_11
#define R2_MVB_1_ReservedCmd_B1_Master         (g_dataBuffer_R2_1_Master[9] & B1_12
#define R2_MVB_1_AutoWarmCmd_B1_Master         (g_dataBuffer_R2_1_Master[9] & B1_13
#define R2_MVB_1_AutoColdCmd_B1_Master         (g_dataBuffer_R2_1_Master[9] & B1_14
#define R2_MVB_1_ManuWarmCmd_B1_Master         (g_dataBuffer_R2_1_Master[9] & B1_15
#define R2_MVB_1_ManuColdCmd_B1_Master         (g_dataBuffer_R2_1_Master[9] & B1_16
#define R2_MVB_1_ExitPreColdWarmCmd_B1_Master  (g_dataBuffer_R2_1_Master[9] & B1_17

#define R2_MVB_1_StopCmd_B1_Master             (g_dataBuffer_R2_1_Master[10] & B1_00
#define R2_MVB_1_AirConModeEff_B1_Master       (g_dataBuffer_R2_1_Master[10] & B1_01
#define R2_MVB_1_SetTempEff_B1_Master          (g_dataBuffer_R2_1_Master[10] & B1_02
#define R2_MVB_1_DoorCloseCmd_B1_Master        (g_dataBuffer_R2_1_Master[10] & B1_03
#define R2_MVB_1_DoorOpenCmd_B1_Master         (g_dataBuffer_R2_1_Master[10] & B1_04
#define R2_MVB_1_TimeUpdateSig_B1_Master       (g_dataBuffer_R2_1_Master[10] & B1_05

#define R2_MVB_1_ServLight_B1_Master           (g_dataBuffer_R2_1_Master[11] & B1_00
#define R2_MVB_1_EmeLight_B1_Master            (g_dataBuffer_R2_1_Master[11] & B1_01

#define R2_MVB_1_DeskAEnable_B1_Master         (g_dataBuffer_R2_1_Master[11] & B1_10
#define R2_MVB_1_DeskBEnable_B1_Master         (g_dataBuffer_R2_1_Master[11] & B1_11
#define R2_MVB_1_RearDrivEnable_B1_Master      (g_dataBuffer_R2_1_Master[11] & B1_12
#define R2_MVB_1_ZeroSpeedByp_B1_Master        (g_dataBuffer_R2_1_Master[11] & B1_13
#define R2_MVB_1_DrSafeDevByp_B1_Master        (g_dataBuffer_R2_1_Master[11] & B1_14
#define R2_MVB_1_RearFogLights_B1_Master       (g_dataBuffer_R2_1_Master[11] & B1_15

#define R2_MVB_1_DoorEnab_B1_Master            (g_dataBuffer_R2_1_Master[12] & B1_00
#define R2_MVB_1_LeftDoorEnab_B1_Master        (g_dataBuffer_R2_1_Master[12] & B1_01
#define R2_MVB_1_RightDoorEnab_B1_Master       (g_dataBuffer_R2_1_Master[12] & B1_02
#define R2_MVB_1_DoorTrBlock_B1_Master         (g_dataBuffer_R2_1_Master[12] & B1_03
#define R2_MVB_1_RollBack_B1_Master            (g_dataBuffer_R2_1_Master[12] & B1_04

#define R2_MVB_1_PosLightCmd_B1_Master         (g_dataBuffer_R2_1_Master[12] & B1_10
#define R2_MVB_1_LowBeamCmd_B1_Master          (g_dataBuffer_R2_1_Master[12] & B1_11
#define R2_MVB_1_HighBeamCmd_B1_Master         (g_dataBuffer_R2_1_Master[12] & B1_12
#define R2_MVB_1_LeftDirLight_B1_Master        (g_dataBuffer_R2_1_Master[12] & B1_13
#define R2_MVB_1_RightDirLight_B1_Master       (g_dataBuffer_R2_1_Master[12] & B1_14
#define R2_MVB_1_Pos4LightCmd_B1_Master        (g_dataBuffer_R2_1_Master[12] & B1_15

#define R2_MVB_1_AllDoorsClosed_B1_Master      (g_dataBuffer_R2_1_Master[13] & B1_00
#define R2_MVB_1_SandingCmd_B1_Master          (g_dataBuffer_R2_1_Master[13] & B1_01

#define R2_MVB_1_TracConf_U8_Master            (g_dataBuffer_R2_1_Master[13] U8_1

#define R2_MVB_1_EmeBrk_B1_Master              (g_dataBuffer_R2_1_Master[15] & B1_00
#define R2_MVB_1_SecurityBrk_B1_Master         (g_dataBuffer_R2_1_Master[15] & B1_01
#define R2_MVB_1_Washing_B1_Master             (g_dataBuffer_R2_1_Master[15] & B1_02
#define R2_MVB_1_EmeDriving_B1_Master          (g_dataBuffer_R2_1_Master[15] & B1_04


#define R2_MVB_1_LifeChk1_U8_Master            (g_dataBuffer_R2_1_Master[15] U8_1


      //g_dataBuffer_R2_1_Slave[i] =g_dataBuffer_MVB[448+i];

#define R2_MVB_1_SandingReq_B1_Slave         (g_dataBuffer_R2_1_Slave[1] & B1_00
#define R2_MVB_1_TrBlockBypAct_B1_Slave      (g_dataBuffer_R2_1_Slave[1] & B1_02
#define R2_MVB_1_DrivDirOk_B1_Slave          (g_dataBuffer_R2_1_Slave[1] & B1_05
#define R2_MVB_1_DrivDirKo_B1_Slave          (g_dataBuffer_R2_1_Slave[1] & B1_06
#define R2_MVB_1_DrivDirNull_B1_Slave        (g_dataBuffer_R2_1_Slave[1] & B1_07
#define R2_MVB_1_TrBlockBraked_B1_Slave      (g_dataBuffer_R2_1_Slave[1] & B1_10
#define R2_MVB_1_VlinePresence_B1_Slave      (g_dataBuffer_R2_1_Slave[1] & B1_11
#define R2_MVB_1_TcuEffort_S16_Slave         (int16_t)(g_dataBuffer_R2_1_Slave[2]
#define R2_MVB_1_J_A2_Slave                   (g_dataBuffer_R2_1_Slave[5] & A2_06_07
#define R2_MVB_1_SpeedLim_U8_Slave           (g_dataBuffer_R2_1_Slave[5] U8_1
#define R2_MVB_1_LifeChk1_U8_Slave           (g_dataBuffer_R2_1_Slave[15] U8_1



//     (g_dataBuffer_R2_2_1_Master[i]=g_dataBuffer_MVB_Page1[i];
      //Master
      //Page1
     #define R2_MVB_2_FreqMotor1_S8_Master1         (g_dataBuffer_R2_2_1_Master[0] U8_1
     #define R2_MVB_2_FreqMotor2_S8_Master1         (g_dataBuffer_R2_2_1_Master[1] U8_0
     #define R2_MVB_2_FreqMotor3_S8_Master1         (g_dataBuffer_R2_2_1_Master[1] U8_1
     #define R2_MVB_2_FreqMotor4_S8_Master1         (g_dataBuffer_R2_2_1_Master[2] U8_0

     #define R2_MVB_2_FilterVol1_S8_Master1         (int8_t)((g_dataBuffer_R2_2_1_Master[2] U8_1)
     #define R2_MVB_2_FilterVol2_S8_Master1         (int8_t)((g_dataBuffer_R2_2_1_Master[3] U8_0)
     #define R2_MVB_2_FilterVol3_S8_Master1         (int8_t)((g_dataBuffer_R2_2_1_Master[3] U8_1)
     #define R2_MVB_2_FilterVol4_S8_Master1         (int8_t)((g_dataBuffer_R2_2_1_Master[4] U8_0)

     #define R2_MVB_2_LineVol1_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[4] U8_1)
     #define R2_MVB_2_LineVol2_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[5] U8_0)
     #define R2_MVB_2_LineVol3_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[5] U8_1)
     #define R2_MVB_2_LineVol4_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[6] U8_0)

     #define R2_MVB_2_LineCur1_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[6] U8_1)
     #define R2_MVB_2_LineCur2_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[7] U8_0)
     #define R2_MVB_2_LineCur3_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[7] U8_1)
     #define R2_MVB_2_LineCur4_S8_Master1           (int8_t)((g_dataBuffer_R2_2_1_Master[8] U8_0)

     #define R2_MVB_2_MoterCur1_U8_Master1          (g_dataBuffer_R2_2_1_Master[8] U8_1
     #define R2_MVB_2_MoterCur2_U8_Master1          (g_dataBuffer_R2_2_1_Master[9] U8_0
     #define R2_MVB_2_MoterCur3_U8_Master1          (g_dataBuffer_R2_2_1_Master[9] U8_1
     #define R2_MVB_2_MoterCur4_U8_Master1          (g_dataBuffer_R2_2_1_Master[10] U8_0

     #define R2_MVB_2_AppliedEff1_U8_Master1        (g_dataBuffer_R2_2_1_Master[10] U8_1
     #define R2_MVB_2_AppliedEff2_U8_Master1        (g_dataBuffer_R2_2_1_Master[11] U8_0
     #define R2_MVB_2_AppliedEff3_U8_Master1        (g_dataBuffer_R2_2_1_Master[11] U8_1
     #define R2_MVB_2_AppliedEff4_U8_Master1        (g_dataBuffer_R2_2_1_Master[12] U8_0

     #define R2_MVB_2_Acceleration1_U8_Master1      (g_dataBuffer_R2_2_1_Master[12] U8_1
     #define R2_MVB_2_Acceleration2_U8_Master1      (g_dataBuffer_R2_2_1_Master[13] U8_0
     #define R2_MVB_2_Acceleration3_U8_Master1      (g_dataBuffer_R2_2_1_Master[13] U8_1
     #define R2_MVB_2_Acceleration4_U8_Master1      (g_dataBuffer_R2_2_1_Master[14] U8_0

     #define R2_MVB_2_PageID_E4_Master1             (g_dataBuffer_R2_2_1_Master[15] & E4_04_07
      //     (g_dataBuffer_R2_2_1_Slave[i] =g_dataBuffer_MVB_Page1[16+i];

      //Slave
      //Page1
     #define R2_MVB_2_FreqMotor1_S8_Slave1         (g_dataBuffer_R2_2_1_Slave[0] U8_1
     #define R2_MVB_2_FreqMotor2_S8_Slave1         (g_dataBuffer_R2_2_1_Slave[1] U8_0
     #define R2_MVB_2_FreqMotor3_S8_Slave1         (g_dataBuffer_R2_2_1_Slave[1] U8_1
     #define R2_MVB_2_FreqMotor4_S8_Slave1         (g_dataBuffer_R2_2_1_Slave[2] U8_0

     #define R2_MVB_2_FilterVol1_S8_Slave1         (int8_t)((g_dataBuffer_R2_2_1_Slave[2] U8_1)
     #define R2_MVB_2_FilterVol2_S8_Slave1         (int8_t)((g_dataBuffer_R2_2_1_Slave[3] U8_0)
     #define R2_MVB_2_FilterVol3_S8_Slave1         (int8_t)((g_dataBuffer_R2_2_1_Slave[3] U8_1)
     #define R2_MVB_2_FilterVol4_S8_Slave1         (int8_t)((g_dataBuffer_R2_2_1_Slave[4] U8_0)

     #define R2_MVB_2_LineVol1_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[4] U8_1)
     #define R2_MVB_2_LineVol2_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[5] U8_0)
     #define R2_MVB_2_LineVol3_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[5] U8_1)
     #define R2_MVB_2_LineVol4_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[6] U8_0)

     #define R2_MVB_2_LineCur1_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[6] U8_1)
     #define R2_MVB_2_LineCur2_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[7] U8_0)
     #define R2_MVB_2_LineCur3_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[7] U8_1)
     #define R2_MVB_2_LineCur4_S8_Slave1           (int8_t)((g_dataBuffer_R2_2_1_Slave[8] U8_0)

     #define R2_MVB_2_MoterCur1_U8_Slave1          (g_dataBuffer_R2_2_1_Slave[8] U8_1
     #define R2_MVB_2_MoterCur2_U8_Slave1          (g_dataBuffer_R2_2_1_Slave[9] U8_0
     #define R2_MVB_2_MoterCur3_U8_Slave1          (g_dataBuffer_R2_2_1_Slave[9] U8_1
     #define R2_MVB_2_MoterCur4_U8_Slave1          (g_dataBuffer_R2_2_1_Slave[10] U8_0

     #define R2_MVB_2_AppliedEff1_U8_Slave1        (g_dataBuffer_R2_2_1_Slave[10] U8_1
     #define R2_MVB_2_AppliedEff2_U8_Slave1        (g_dataBuffer_R2_2_1_Slave[11] U8_0
     #define R2_MVB_2_AppliedEff3_U8_Slave1        (g_dataBuffer_R2_2_1_Slave[11] U8_1
     #define R2_MVB_2_AppliedEff4_U8_Slave1        (g_dataBuffer_R2_2_1_Slave[12] U8_0

     #define R2_MVB_2_Acceleration1_U8_Slave1      (g_dataBuffer_R2_2_1_Slave[12] U8_1
     #define R2_MVB_2_Acceleration2_U8_Slave1      (g_dataBuffer_R2_2_1_Slave[13] U8_0
     #define R2_MVB_2_Acceleration3_U8_Slave1      (g_dataBuffer_R2_2_1_Slave[13] U8_1
     #define R2_MVB_2_Acceleration4_U8_Slave1      (g_dataBuffer_R2_2_1_Slave[14] U8_0

     #define R2_MVB_2_PageID_E4_Slave1              (g_dataBuffer_R2_2_1_Slave[15] & E4_04_07

      //g_dataBuffer_R2_2_2_Master[i]=g_dataBuffer_MVB_Page2[i];
     //Master
      //Page2
     #define R2_MVB_2_TcuMotorTorq1_S8_Master2        (int8_t)((g_dataBuffer_R2_2_2_Master[0] U8_1)
     #define R2_MVB_2_TcuMotorTorq2_S8_Master2        (int8_t)((g_dataBuffer_R2_2_2_Master[1] U8_0)
     #define R2_MVB_2_TcuMotorTorq3_S8_Master2        (int8_t)((g_dataBuffer_R2_2_2_Master[1] U8_1)
     #define R2_MVB_2_TcuMotorTorq4_S8_Master2        (int8_t)((g_dataBuffer_R2_2_2_Master[2] U8_0)

     #define R2_MVB_2_TcuMotor1Temp_U8_Master2        (g_dataBuffer_R2_2_2_Master[2] U8_1
     #define R2_MVB_2_TcuMotor2Temp_U8_Master2        (g_dataBuffer_R2_2_2_Master[3] U8_0
     #define R2_MVB_2_TcuMotor3Temp_U8_Master2        (g_dataBuffer_R2_2_2_Master[3] U8_1
     #define R2_MVB_2_TcuMotor4Temp_U8_Master2        (g_dataBuffer_R2_2_2_Master[4] U8_0

     #define R2_MVB_2_AcuIFVolMa_U8_Master2       (g_dataBuffer_R2_2_2_Master[4] U8_1
     #define R2_MVB_2_AcuIFVolMb_U8_Master2       (g_dataBuffer_R2_2_2_Master[5] U8_0

     #define R2_MVB_2_AcuILCurMa_U8_Master2       (g_dataBuffer_R2_2_2_Master[5] U8_1
     #define R2_MVB_2_AcuILCurMb_U8_Master2       (g_dataBuffer_R2_2_2_Master[6] U8_0

     #define R2_MVB_2_AcuLCurrMa_U8_Master2      (g_dataBuffer_R2_2_2_Master[6] U8_1
     #define R2_MVB_2_AcuLCurrMb_U8_Master2      (g_dataBuffer_R2_2_2_Master[7] U8_0

     #define R2_MVB_2_AcuFreqMa_U8_Master2         (g_dataBuffer_R2_2_2_Master[7] U8_1
     #define R2_MVB_2_AcuFreqMb_U8_Master2         (g_dataBuffer_R2_2_2_Master[8] U8_0

     #define R2_MVB_2_AcuIRmsVolMa_U8_Master2      (g_dataBuffer_R2_2_2_Master[8] U8_1
     #define R2_MVB_2_AcuIRmsVolMb_U8_Master2      (g_dataBuffer_R2_2_2_Master[9] U8_0

     #define R2_MVB_2_BcFVoltMa_U8_Master2          (g_dataBuffer_R2_2_2_Master[9] U8_1
     #define R2_MVB_2_BcFVoltMb_U8_Master2          (g_dataBuffer_R2_2_2_Master[10] U8_0

     #define R2_MVB_2_BCLinCurMa_U8_Master2          (g_dataBuffer_R2_2_2_Master[10] U8_1
     #define R2_MVB_2_BCLinCurMb_U8_Master2          (g_dataBuffer_R2_2_2_Master[11] U8_0

     #define R2_MVB_2_BcBattVoltMa_U8_Master2           (g_dataBuffer_R2_2_2_Master[11] U8_1
     #define R2_MVB_2_BcBattVoltMb_U8_Master2           (g_dataBuffer_R2_2_2_Master[12] U8_0

     #define R2_MVB_2_BcBattChCurrMa_U8_Master2        (g_dataBuffer_R2_2_2_Master[12] U8_1
     #define R2_MVB_2_BcBattChCurrMb_U8_Master2        (g_dataBuffer_R2_2_2_Master[13] U8_0

     #define R2_MVB_2_BcBattSuppCurrMa_U8_Master2        (g_dataBuffer_R2_2_2_Master[13] U8_1
     #define R2_MVB_2_BcBattSuppCurrMb_U8_Master2        (g_dataBuffer_R2_2_2_Master[14] U8_0

     #define R2_MVB_2_BattTempMa_U8_Master2           (g_dataBuffer_R2_2_2_Master[14] U8_1
     #define R2_MVB_2_BattTempMb_U8_Master2           (g_dataBuffer_R2_2_2_Master[15] U8_1

     #define R2_MVB_2_PageID_E4_Master2                (g_dataBuffer_R2_2_2_Master[15] & E4_04_07

      //     (g_dataBuffer_R2_2_2_Slave[i] =g_dataBuffer_MVB_Page2[16+i];
      //Slave
       //Page2
      #define R2_MVB_2_TcuMotorTorq1_S8_Slave2        (int8_t)((g_dataBuffer_R2_2_2_Slave[0] U8_1)
      #define R2_MVB_2_TcuMotorTorq2_S8_Slave2        (int8_t)((g_dataBuffer_R2_2_2_Slave[1] U8_0)
      #define R2_MVB_2_TcuMotorTorq3_S8_Slave2        (int8_t)((g_dataBuffer_R2_2_2_Slave[1] U8_1)
      #define R2_MVB_2_TcuMotorTorq4_S8_Slave2        (int8_t)((g_dataBuffer_R2_2_2_Slave[2] U8_0)

      #define R2_MVB_2_TcuMotor1Temp_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[2] U8_1
      #define R2_MVB_2_TcuMotor2Temp_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[3] U8_0
      #define R2_MVB_2_TcuMotor3Temp_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[3] U8_1
      #define R2_MVB_2_TcuMotor4Temp_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[4] U8_0

      #define R2_MVB_2_AcuIFVolMa_U8_Slave2       (g_dataBuffer_R2_2_2_Slave[4] U8_1
      #define R2_MVB_2_AcuIFVolMb_U8_Slave2       (g_dataBuffer_R2_2_2_Slave[5] U8_0

      #define R2_MVB_2_AcuILCurMa_U8_Slave2       (g_dataBuffer_R2_2_2_Slave[5] U8_1
      #define R2_MVB_2_AcuILCurMb_U8_Slave2       (g_dataBuffer_R2_2_2_Slave[6] U8_0

      #define R2_MVB_2_AcuLCurrMa_U8_Slave2      (g_dataBuffer_R2_2_2_Slave[6] U8_1
      #define R2_MVB_2_AcuLCurrMb_U8_Slave2      (g_dataBuffer_R2_2_2_Slave[7] U8_0

      #define R2_MVB_2_AcuFreqMa_U8_Slave2         (g_dataBuffer_R2_2_2_Slave[7] U8_1
      #define R2_MVB_2_AcuFreqMb_U8_Slave2         (g_dataBuffer_R2_2_2_Slave[8] U8_0

      #define R2_MVB_2_AcuIRmsVolMa_U8_Slave2      (g_dataBuffer_R2_2_2_Slave[8] U8_1
      #define R2_MVB_2_AcuIRmsVolMb_U8_Slave2      (g_dataBuffer_R2_2_2_Slave[9] U8_0

      #define R2_MVB_2_BcFVoltMa_U8_Slave2          (g_dataBuffer_R2_2_2_Slave[9] U8_1
      #define R2_MVB_2_BcFVoltMb_U8_Slave2          (g_dataBuffer_R2_2_2_Slave[10] U8_0

      #define R2_MVB_2_BCLinCurMa_U8_Slave2          (g_dataBuffer_R2_2_2_Slave[10] U8_1
      #define R2_MVB_2_BCLinCurMb_U8_Slave2          (g_dataBuffer_R2_2_2_Slave[11] U8_0

      #define R2_MVB_2_BcBattVoltMa_U8_Slave2           (g_dataBuffer_R2_2_2_Slave[11] U8_1
      #define R2_MVB_2_BcBattVoltMb_U8_Slave2           (g_dataBuffer_R2_2_2_Slave[12] U8_0

      #define R2_MVB_2_BcBattChCurrMa_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[12] U8_1
      #define R2_MVB_2_BcBattChCurrMb_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[13] U8_0

      #define R2_MVB_2_BcBattSuppCurrMa_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[13] U8_1
      #define R2_MVB_2_BcBattSuppCurrMb_U8_Slave2        (g_dataBuffer_R2_2_2_Slave[14] U8_0

      #define R2_MVB_2_BattTempMa_U8_Slave2           (g_dataBuffer_R2_2_2_Slave[14] U8_1
      #define R2_MVB_2_BattTempMb_U8_Slave2           (g_dataBuffer_R2_2_2_Slave[15] U8_1

      #define R2_MVB_2_PageID_E4_Slave2                (g_dataBuffer_R2_2_2_Slave[15] & E4_04_07

      //     (g_dataBuffer_R2_2_3_Master[i]=g_dataBuffer_MVB_Page3[i];
      //Master
           //Page3
     #define R2_MVB_2_BCUWeight_U8_Master3           (g_dataBuffer_R2_2_3_Master[0] U8_1
     #define R2_MVB_2_BCUEhForceMa_U8_Master3    (g_dataBuffer_R2_2_3_Master[1] U8_0
     #define R2_MVB_2_BCUEhForceP_U8_Master3     (g_dataBuffer_R2_2_3_Master[1] U8_1
     #define R2_MVB_2_BCUEhForceMb_U8_Master3    (g_dataBuffer_R2_2_3_Master[2] U8_0

     #define R2_MVB_2_ScuCurrPantRa_S8_Master3          (int8_t)((g_dataBuffer_R2_2_3_Master[2] U8_1)
     #define R2_MVB_2_ScuCurrCapRa_S8_Master3           (int8_t)((g_dataBuffer_R2_2_3_Master[3] U8_0)
     #define R2_MVB_2_ScuFilterVoltRa_S8_Master3        (int8_t)((g_dataBuffer_R2_2_3_Master[3] U8_1)
     #define R2_MVB_2_ScuVoltRa_S8_Master3              (int8_t)((g_dataBuffer_R2_2_3_Master[4] U8_0)
     #define R2_MVB_2_ScuRaCapacity_U8_Master3          (g_dataBuffer_R2_2_3_Master[4] U8_1
     #define R2_MVB_2_ScuRaEnCons_U16_Master3           Change_BigEen(g_dataBuffer_R2_2_3_Master[5])

     #define R2_MVB_2_ScuCurrPantRb_S8_Master3          (int8_t)((g_dataBuffer_R2_2_3_Master[6] U8_1)
     #define R2_MVB_2_ScuCurrCapRb_S8_Master3           (int8_t)((g_dataBuffer_R2_2_3_Master[7] U8_0)
     #define R2_MVB_2_ScuFilterVoltRb_S8_Master3        (int8_t)((g_dataBuffer_R2_2_3_Master[7] U8_1)
     #define R2_MVB_2_ScuVoltRb_S8_Master3              (int8_t)((g_dataBuffer_R2_2_3_Master[8] U8_0)
     #define R2_MVB_2_ScuRbCapacity_U8_Master3          (g_dataBuffer_R2_2_3_Master[8] U8_1
     #define R2_MVB_2_ScuRbEnCons_U16_Master3           Change_BigEen(g_dataBuffer_R2_2_3_Master[9])

     #define R2_MVB_2_ScuRbEnRet_U16_Master3           Change_BigEen(g_dataBuffer_R2_2_3_Master[10])
     #define R2_MVB_2_ScuRaEnRet_U16_Master3           Change_BigEen(g_dataBuffer_R2_2_3_Master[11])

     #define R2_MVB_2_PageID_E4_Master3                 (g_dataBuffer_R2_2_3_Master[15] & E4_04_07
     #define R2_MVB_2_Life_U8_Master3                  (g_dataBuffer_R2_2_3_Master[15] U8_1


      //     (g_dataBuffer_R2_2_3_Slave[i] =g_dataBuffer_MVB_Page3[16+i];
      //Slave
           //Page3
     #define R2_MVB_2_BCUWeight_U8_Slave3           (g_dataBuffer_R2_2_3_Slave[0] U8_1
     #define R2_MVB_2_BCUEhForceMa_U8_Slave3    (g_dataBuffer_R2_2_3_Slave[1] U8_0
     #define R2_MVB_2_BCUEhForceP_U8_Slave3     (g_dataBuffer_R2_2_3_Slave[1] U8_1
     #define R2_MVB_2_BCUEhForceMb_U8_Slave3    (g_dataBuffer_R2_2_3_Slave[2] U8_0

     #define R2_MVB_2_ScuCurrPantRa_S8_Slave3          (int8_t)((g_dataBuffer_R2_2_3_Slave[2] U8_1)
     #define R2_MVB_2_ScuCurrCapRa_S8_Slave3           (int8_t)((g_dataBuffer_R2_2_3_Slave[3] U8_0)
     #define R2_MVB_2_ScuFilterVoltRa_S8_Slave3        (int8_t)((g_dataBuffer_R2_2_3_Slave[3] U8_1)
     #define R2_MVB_2_ScuVoltRa_S8_Slave3              (int8_t)((g_dataBuffer_R2_2_3_Slave[4] U8_0)
     #define R2_MVB_2_ScuRaCapacity_U8_Slave3          (g_dataBuffer_R2_2_3_Slave[4] U8_1
     #define R2_MVB_2_ScuRaEnCons_U16_Slave3           Change_BigEen(g_dataBuffer_R2_2_3_Slave[5])

     #define R2_MVB_2_ScuCurrPantRb_S8_Slave3          (int8_t)((g_dataBuffer_R2_2_3_Slave[6] U8_1)
     #define R2_MVB_2_ScuCurrCapRb_S8_Slave3           (int8_t)((g_dataBuffer_R2_2_3_Slave[7] U8_0)
     #define R2_MVB_2_ScuFilterVoltRb_S8_Slave3        (int8_t)((g_dataBuffer_R2_2_3_Slave[7] U8_1)
     #define R2_MVB_2_ScuVoltRb_S8_Slave3              (int8_t)((g_dataBuffer_R2_2_3_Slave[8] U8_0)
     #define R2_MVB_2_ScuRbCapacity_U8_Slave3          (g_dataBuffer_R2_2_3_Slave[8] U8_1
     #define R2_MVB_2_ScuRbEnCons_U16_Slave3           Change_BigEen(g_dataBuffer_R2_2_3_Slave[9])

     #define R2_MVB_2_ScuRbEnRet_U16_Slave3           Change_BigEen(g_dataBuffer_R2_2_3_Slave[10])
     #define R2_MVB_2_ScuRaEnRet_U16_Slave3           Change_BigEen(g_dataBuffer_R2_2_3_Slave[11])

     #define R2_MVB_2_PageID_E4_Slave3                 (g_dataBuffer_R2_2_3_Slave[15] & E4_04_07
     #define R2_MVB_2_Life_U8_Slave3                  (g_dataBuffer_R2_2_3_Slave[15] U8_1

      //     (g_dataBuffer_R2_2_3_Master[i]=g_dataBuffer_MVB_Page4[i];
       //Master
      //Page4
     #define R2_MVB_2_StopRa_B1_Master4                     (g_dataBuffer_R2_2_4_Master[0] & B1_00
     #define R2_MVB_2_StopRb_B1_Master4                     (g_dataBuffer_R2_2_4_Master[0] & B1_01
     #define R2_MVB_2_VentRa_B1_Master4                     (g_dataBuffer_R2_2_4_Master[0] & B1_02
     #define R2_MVB_2_VentRb_B1_Master4                     (g_dataBuffer_R2_2_4_Master[0] & B1_03
     #define R2_MVB_2_PreWarmRa_B1_Master4                  (g_dataBuffer_R2_2_4_Master[0] & B1_04
     #define R2_MVB_2_PreWarmRb_B1_Master4                  (g_dataBuffer_R2_2_4_Master[0] & B1_05
     #define R2_MVB_2_AutoColdRa_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_06
     #define R2_MVB_2_AutoColdRb_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_07
     #define R2_MVB_2_ManuWarmRa_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_10
     #define R2_MVB_2_ManuWarmRb_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_11
     #define R2_MVB_2_ManuColdRa_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_12
     #define R2_MVB_2_ManuColdRb_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_13
     #define R2_MVB_2_PreColdRa_B1_Master4                  (g_dataBuffer_R2_2_4_Master[0] & B1_14
     #define R2_MVB_2_PreColdRb_B1_Master4                  (g_dataBuffer_R2_2_4_Master[0] & B1_15
     #define R2_MVB_2_AutoWarmRa_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_16
     #define R2_MVB_2_AutoWarmRb_B1_Master4                 (g_dataBuffer_R2_2_4_Master[0] & B1_17


     #define R2_MVB_2_StartRa_B1_Master4                    (g_dataBuffer_R2_2_4_Master[2] & B1_00
     #define R2_MVB_2_StartRb_B1_Master4                    (g_dataBuffer_R2_2_4_Master[2] & B1_01
     #define R2_MVB_2_EmeVentRa_B1_Master4                  (g_dataBuffer_R2_2_4_Master[2] & B1_02
     #define R2_MVB_2_EmeVentRb_B1_Master4                  (g_dataBuffer_R2_2_4_Master[2] & B1_03
     #define R2_MVB_2_LocContrRa_B1_Master4                 (g_dataBuffer_R2_2_4_Master[2] & B1_04
     #define R2_MVB_2_LocContrRb_B1_Master4                 (g_dataBuffer_R2_2_4_Master[2] & B1_05
     #define R2_MVB_2_CentrContrRa_B1_Master4               (g_dataBuffer_R2_2_4_Master[2] & B1_06
     #define R2_MVB_2_CentrContrRb_B1_Master4               (g_dataBuffer_R2_2_4_Master[2] & B1_07

     #define R2_MVB_2_PassTempRa_U8_Master4               (g_dataBuffer_R2_2_4_Master[5] U8_0
     #define R2_MVB_2_PassTempRb_U8_Master4               (g_dataBuffer_R2_2_4_Master[5] U8_1
     #define R2_MVB_2_OutTempRa_U8_Master4                (g_dataBuffer_R2_2_4_Master[6] U8_0
     #define R2_MVB_2_OutTempRb_U8_Master4                (g_dataBuffer_R2_2_4_Master[6] U8_1
     #define R2_MVB_2_PageID_E4_Master4                    (g_dataBuffer_R2_2_4_Master[15] & E4_04_07
     #define R2_MVB_2_LifeChk_U8_Master4                   (g_dataBuffer_R2_2_4_Master[15] U8_1


      //     (g_dataBuffer_R2_2_4_Slave[i] =g_dataBuffer_MVB_Page4[16+i];
      //Slave
     //Page4
    #define R2_MVB_2_StopRa_B1_Slave4                     (g_dataBuffer_R2_2_4_Slave[0] & B1_00
    #define R2_MVB_2_StopRb_B1_Slave4                     (g_dataBuffer_R2_2_4_Slave[0] & B1_01
    #define R2_MVB_2_VentRa_B1_Slave4                     (g_dataBuffer_R2_2_4_Slave[0] & B1_02
    #define R2_MVB_2_VentRb_B1_Slave4                     (g_dataBuffer_R2_2_4_Slave[0] & B1_03
    #define R2_MVB_2_PreWarmRa_B1_Slave4                  (g_dataBuffer_R2_2_4_Slave[0] & B1_04
    #define R2_MVB_2_PreWarmRb_B1_Slave4                  (g_dataBuffer_R2_2_4_Slave[0] & B1_05
    #define R2_MVB_2_AutoColdRa_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_06
    #define R2_MVB_2_AutoColdRb_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_07
    #define R2_MVB_2_ManuWarmRa_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_10
    #define R2_MVB_2_ManuWarmRb_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_11
    #define R2_MVB_2_ManuColdRa_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_12
    #define R2_MVB_2_ManuColdRb_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_13
    #define R2_MVB_2_PreColdRa_B1_Slave4                  (g_dataBuffer_R2_2_4_Slave[0] & B1_14
    #define R2_MVB_2_PreColdRb_B1_Slave4                  (g_dataBuffer_R2_2_4_Slave[0] & B1_15
    #define R2_MVB_2_AutoWarmRa_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_16
    #define R2_MVB_2_AutoWarmRb_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[0] & B1_17


    #define R2_MVB_2_StartRa_B1_Slave4                    (g_dataBuffer_R2_2_4_Slave[2] & B1_00
    #define R2_MVB_2_StartRb_B1_Slave4                    (g_dataBuffer_R2_2_4_Slave[2] & B1_01
    #define R2_MVB_2_EmeVentRa_B1_Slave4                  (g_dataBuffer_R2_2_4_Slave[2] & B1_02
    #define R2_MVB_2_EmeVentRb_B1_Slave4                  (g_dataBuffer_R2_2_4_Slave[2] & B1_03
    #define R2_MVB_2_LocContrRa_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[2] & B1_04
    #define R2_MVB_2_LocContrRb_B1_Slave4                 (g_dataBuffer_R2_2_4_Slave[2] & B1_05
    #define R2_MVB_2_CentrContrRa_B1_Slave4               (g_dataBuffer_R2_2_4_Slave[2] & B1_06
    #define R2_MVB_2_CentrContrRb_B1_Slave4               (g_dataBuffer_R2_2_4_Slave[2] & B1_07

    #define R2_MVB_2_PassTempRa_U8_Slave4               (g_dataBuffer_R2_2_4_Slave[5] U8_0
    #define R2_MVB_2_PassTempRb_U8_Slave4               (g_dataBuffer_R2_2_4_Slave[5] U8_1
    #define R2_MVB_2_OutTempRa_U8_Slave4                (g_dataBuffer_R2_2_4_Slave[6] U8_0
    #define R2_MVB_2_OutTempRb_U8_Slave4                (g_dataBuffer_R2_2_4_Slave[6] U8_1
    #define R2_MVB_2_PageID_E4_Slave4                    (g_dataBuffer_R2_2_4_Slave[15] & E4_04_07
    #define R2_MVB_2_LifeChk_U8_Slave4                   (g_dataBuffer_R2_2_4_Slave[15] U8_1



      //     (g_dataBuffer_R2_3_Master[i]=g_dataBuffer_MVB[512+i];
      #define R2_MVB_3_LineVolt_U16                   Change_BigEen(g_dataBuffer_MVB[512+0])
      #define R2_MVB_3_LineCurr_U16                  Change_BigEen(g_dataBuffer_MVB[512+1])
      #define R2_MVB_3_VehSpeed_U16                  Change_BigEen(g_dataBuffer_MVB[512+2])
      #define R2_MVB_3_Effort_U16                    Change_BigEen(g_dataBuffer_MVB[512+3])

      #define R2_MVB_3_Tcu1Status_A2                     (g_dataBuffer_MVB[512+4] & A2_00_01
      #define R2_MVB_3_Tcu2Status_A2                     (g_dataBuffer_MVB[512+4] & A2_02_03
      #define R2_MVB_3_Tcu3Status_A2                     (g_dataBuffer_MVB[512+4] & A2_04_05
      #define R2_MVB_3_Tcu4Status_A2                     (g_dataBuffer_MVB[512+4] & A2_06_07
      #define R2_MVB_3_Aux1Status_A2                     (g_dataBuffer_MVB[512+4] & A2_10_11
      #define R2_MVB_3_Aux2Status_A2                     (g_dataBuffer_MVB[512+4] & A2_12_13
      #define R2_MVB_3_Bc1Status_A2                      (g_dataBuffer_MVB[512+4] & A2_14_15
      #define R2_MVB_3_Bc2Status_A2                      (g_dataBuffer_MVB[512+4] & A2_16_17

      #define R2_MVB_3_CcuMaSt_A2                     (g_dataBuffer_MVB[512+5] & A2_00_01
      #define R2_MVB_3_LcuMaSt_A2                     (g_dataBuffer_MVB[512+5] & A2_02_03
      #define R2_MVB_3_LcuRaSt_A2                     (g_dataBuffer_MVB[512+5] & A2_04_05
      #define R2_MVB_3_CcuMbSt_A2                     (g_dataBuffer_MVB[512+5] & A2_10_11
      #define R2_MVB_3_LcuMbSt_A2                     (g_dataBuffer_MVB[512+5] & A2_12_13
      #define R2_MVB_3_LcuRbSt_A2                     (g_dataBuffer_MVB[512+5] & A2_14_15
      #define R2_MVB_3_HvacRaSt_A2                    (g_dataBuffer_MVB[512+5] & A2_16_17

      #define R2_MVB_3_BcuPSt_A2                      (g_dataBuffer_MVB[512+6] & A2_00_01
      #define R2_MVB_3_BcuMaSt_A2                     (g_dataBuffer_MVB[512+6] & A2_02_03
      #define R2_MVB_3_BcuMbSt_A2                     (g_dataBuffer_MVB[512+6] & A2_04_05
      #define R2_MVB_3_HvacRbSt_A2                    (g_dataBuffer_MVB[512+6] & A2_06_07
      #define R2_MVB_3_SPU_B1                        (g_dataBuffer_MVB[512+6] & B1_10
      #define R2_MVB_3_SPD_B1                        (g_dataBuffer_MVB[512+6] & B1_11
      #define R2_MVB_3_StHscb_B1                     (g_dataBuffer_MVB[512+6] & B1_12
      #define R2_MVB_3_BogieMaIsol_B1                (g_dataBuffer_MVB[512+6] & B1_13
      #define R2_MVB_3_BogiePIsol_B1                 (g_dataBuffer_MVB[512+6] & B1_14
      #define R2_MVB_3_BogieMbIsol_B1                (g_dataBuffer_MVB[512+6] & B1_15
      #define R2_MVB_3_LcuPSt_A2                      (g_dataBuffer_MVB[512+6] & A2_16_17


      #define R2_MVB_3_IduMaSt_A2                    (g_dataBuffer_MVB[512+7] & A2_00_01
      #define R2_MVB_3_IduMbSt_A2                    (g_dataBuffer_MVB[512+7] & A2_02_03
      #define R2_MVB_3_S_TR_light_B1                (g_dataBuffer_MVB[512+7] & B1_04
      #define R2_MVB_3_S_TL_light_B1                (g_dataBuffer_MVB[512+7] & B1_05
      #define R2_MVB_3_PidsMaSt_A2                   (g_dataBuffer_MVB[512+7] & A2_10_11
      #define R2_MVB_3_PidsMbSt_A2                   (g_dataBuffer_MVB[512+7] & A2_12_13
      #define R2_MVB_3_PaMaSt_A2                     (g_dataBuffer_MVB[512+7] & A2_14_15
      #define R2_MVB_3_PaMbSt_A2                     (g_dataBuffer_MVB[512+7] & A2_16_17

      #define R2_MVB_3_RdeSt_A2                      (g_dataBuffer_MVB[512+8] & A2_00_01
      #define R2_MVB_3_DsdSt_B1                     (g_dataBuffer_MVB[512+8] & B1_02
      #define R2_MVB_3_ZeroSpeedSt_B1               (g_dataBuffer_MVB[512+8] & B1_04
      #define R2_MVB_3_GapCrossing_B1               (g_dataBuffer_MVB[512+8] & B1_05
      #define R2_MVB_3_GtwSt_A2                      (g_dataBuffer_MVB[512+8] & A2_06_07




      #define R2_MVB_3_D1MaCode_E4                     (g_dataBuffer_MVB[512+8] & E4_10_13
      #define R2_MVB_3_D2MaCode_E4                     (g_dataBuffer_MVB[512+8] & E4_14_17

      #define R2_MVB_3_D1RaCode_E4                     (g_dataBuffer_MVB[512+9] & E4_00_03
      #define R2_MVB_3_D2RaCode_E4                     (g_dataBuffer_MVB[512+9] & E4_04_07
      #define R2_MVB_3_D3RaCode_E4                     (g_dataBuffer_MVB[512+9] & E4_10_13
      #define R2_MVB_3_D4RaCode_E4                     (g_dataBuffer_MVB[512+9] & E4_14_17

      #define R2_MVB_3_D1RbCode_E4                     (g_dataBuffer_MVB[512+10] & E4_00_03
      #define R2_MVB_3_D2RbCode_E4                     (g_dataBuffer_MVB[512+10] & E4_04_07
      #define R2_MVB_3_D3RbCode_E4                     (g_dataBuffer_MVB[512+10] & E4_10_13
      #define R2_MVB_3_D4RbCode_E4                     (g_dataBuffer_MVB[512+10] & E4_14_17


      #define R2_MVB_3_D1MbCode_E4                     (g_dataBuffer_MVB[512+11] & E4_00_03
      #define R2_MVB_3_D2MbCode_E4                     (g_dataBuffer_MVB[512+11] & E4_04_07
      #define R2_MVB_3_Veh_Status_E4                   (g_dataBuffer_MVB[512+11] & E4_10_13
      #define R2_MVB_3_Drv_Status_E4                   (g_dataBuffer_MVB[512+11] & E4_14_17




      #define R2_MVB_3_ScMaMajor_B1                    (g_dataBuffer_MVB[512+12] & B1_00
      #define R2_MVB_3_ScMaMinor_B1                    (g_dataBuffer_MVB[512+12] & B1_01
      #define R2_MVB_3_ScMbMajor_B1                    (g_dataBuffer_MVB[512+12] & B1_03
      #define R2_MVB_3_ScMbMinor_B1                    (g_dataBuffer_MVB[512+12] & B1_04
      #define R2_MVB_3_AllBcuByp_B1                    (g_dataBuffer_MVB[512+12] & B1_05
      #define R2_MVB_3_ParkBrakeP_B1                   (g_dataBuffer_MVB[512+12] & B1_06
      #define R2_MVB_3_ParkBrakeMa_B1                  (g_dataBuffer_MVB[512+12] & B1_07
      #define R2_MVB_3_ParkBrakeMb_B1                  (g_dataBuffer_MVB[512+12] & B1_11
      #define R2_MVB_3_GtwStandbySt_B1                 (g_dataBuffer_MVB[512+12] & B1_12
      #define R2_MVB_3_LcuMaStandbySt_B1               (g_dataBuffer_MVB[512+12] & B1_13
      #define R2_MVB_3_LcuMbStandbySt_B1               (g_dataBuffer_MVB[512+12] & B1_14
      #define R2_MVB_3_PantoUp_B1                      (g_dataBuffer_MVB[512+12] & B1_16
      #define R2_MVB_3_PantoLow_B1                     (g_dataBuffer_MVB[512+12] & B1_17





      #define R2_MVB_3_st_08k01_MA_B1                    (g_dataBuffer_MVB[512+13] & B1_00
      #define R2_MVB_3_st_08k02_P_B1                     (g_dataBuffer_MVB[512+13] & B1_02
      #define R2_MVB_3_st_08k01_MB_B1                    (g_dataBuffer_MVB[512+13] & B1_04
      #define R2_MVB_3_St_Ktp_B1                         (g_dataBuffer_MVB[512+13] & B1_16
      #define R2_MVB_3_St_Ktw_B1                         (g_dataBuffer_MVB[512+13] & B1_17

      #define R2_MVB_3_MtbReq_B1                         (g_dataBuffer_MVB[512+14] & B1_00
      #define R2_MVB_3_St_MtbCntMA_B1                    (g_dataBuffer_MVB[512+14] & B1_01
      #define R2_MVB_3_St_MtbCntMB_B1                    (g_dataBuffer_MVB[512+14] & B1_02
      #define R2_MVB_3_St_MtbCntP_B1                     (g_dataBuffer_MVB[512+14] & B1_03
      #define R2_MVB_3_BrakeActMA_B1                     (g_dataBuffer_MVB[512+14] & B1_04
      #define R2_MVB_3_BrakeActP_B1                      (g_dataBuffer_MVB[512+14] & B1_05
      #define R2_MVB_3_BrakeActMB_B1                     (g_dataBuffer_MVB[512+14] & B1_06

      #define R2_MVB_3_MasterVehCoupMA_B1                (g_dataBuffer_MVB[512+14] & B1_10
      #define R2_MVB_3_MasterVehCoupMB_B1                (g_dataBuffer_MVB[512+14] & B1_11
      #define R2_MVB_3_SlaveVehCoupMA_B1                 (g_dataBuffer_MVB[512+14] & B1_12
      #define R2_MVB_3_SlaveVehCoupMB_B1                 (g_dataBuffer_MVB[512+14] & B1_13

      #define R2_MVB_3_DoorClosedEnab_B1                 (g_dataBuffer_MVB[512+14] & B1_15
      #define R2_MVB_3_DoorOpen_B1                       (g_dataBuffer_MVB[512+14] & B1_16

      #define R2_MVB_3_LifeDiag1_U8                      (g_dataBuffer_MVB[512+15] U8_0
            //?????????????????????????????????
      #define R2_MVB_3_ChkDiag1_A2                        (g_dataBuffer_MVB[512+15] & A2_16_17
      //??????? //#define R2_MVB_3_ChkDiag1_A2                        (g_dataBuffer_MVB[512+15] & A2_13_14



//     (g_dataBuffer_R2_3_Master[i]=g_dataBuffer_MVB[512+i];
#define R2_MVB_3_LineVolt_U16_Master                    Change_BigEen(g_dataBuffer_R2_3_Master[0])
#define R2_MVB_3_LineCurr_U16_Master                   Change_BigEen(g_dataBuffer_R2_3_Master[1])
#define R2_MVB_3_VehSpeed_U16_Master                   Change_BigEen(g_dataBuffer_R2_3_Master[2])
#define R2_MVB_3_Effort_U16_Master                     Change_BigEen(g_dataBuffer_R2_3_Master[3])

#define R2_MVB_3_Tcu1Status_A2_Master                      (g_dataBuffer_R2_3_Master[4] & A2_00_01
#define R2_MVB_3_Tcu2Status_A2_Master                      (g_dataBuffer_R2_3_Master[4] & A2_02_03
#define R2_MVB_3_Tcu3Status_A2_Master                      (g_dataBuffer_R2_3_Master[4] & A2_04_05
#define R2_MVB_3_Tcu4Status_A2_Master                      (g_dataBuffer_R2_3_Master[4] & A2_06_07
#define R2_MVB_3_Aux1Status_A2_Master                      (g_dataBuffer_R2_3_Master[4] & A2_10_11
#define R2_MVB_3_Aux2Status_A2_Master                      (g_dataBuffer_R2_3_Master[4] & A2_12_13
#define R2_MVB_3_Bc1Status_A2_Master                       (g_dataBuffer_R2_3_Master[4] & A2_14_15
#define R2_MVB_3_Bc2Status_A2_Master                       (g_dataBuffer_R2_3_Master[4] & A2_16_17

#define R2_MVB_3_CcuMaSt_A2_Master                      (g_dataBuffer_R2_3_Master[5] & A2_00_01
#define R2_MVB_3_LcuMaSt_A2_Master                      (g_dataBuffer_R2_3_Master[5] & A2_02_03
#define R2_MVB_3_LcuRaSt_A2_Master                      (g_dataBuffer_R2_3_Master[5] & A2_04_05
#define R2_MVB_3_CcuMbSt_A2_Master                      (g_dataBuffer_R2_3_Master[5] & A2_10_11
#define R2_MVB_3_LcuMbSt_A2_Master                      (g_dataBuffer_R2_3_Master[5] & A2_12_13
#define R2_MVB_3_LcuRbSt_A2_Master                      (g_dataBuffer_R2_3_Master[5] & A2_14_15
#define R2_MVB_3_HvacRaSt_A2_Master                     (g_dataBuffer_R2_3_Master[5] & A2_16_17

#define R2_MVB_3_BcuPSt_A2_Master                       (g_dataBuffer_R2_3_Master[6] & A2_00_01
#define R2_MVB_3_BcuMaSt_A2_Master                      (g_dataBuffer_R2_3_Master[6] & A2_02_03
#define R2_MVB_3_BcuMbSt_A2_Master                      (g_dataBuffer_R2_3_Master[6] & A2_04_05
#define R2_MVB_3_HvacRbSt_A2_Master                     (g_dataBuffer_R2_3_Master[6] & A2_06_07
#define R2_MVB_3_SPUA_B1_Master                         (g_dataBuffer_R2_3_Master[6] & B1_10
#define R2_MVB_3_SPDA_B1_Master                         (g_dataBuffer_R2_3_Master[6] & B1_11
#define R2_MVB_3_StHscb_B1_Master                      (g_dataBuffer_R2_3_Master[6] & B1_12
#define R2_MVB_3_BogieMaIsol_B1_Master                 (g_dataBuffer_R2_3_Master[6] & B1_13
#define R2_MVB_3_BogiePIsol_B1_Master                  (g_dataBuffer_R2_3_Master[6] & B1_14
#define R2_MVB_3_BogieMbIsol_B1_Master                 (g_dataBuffer_R2_3_Master[6] & B1_15
#define R2_MVB_3_LcuPSt_A2_Master                       (g_dataBuffer_R2_3_Master[6] & A2_16_17


#define R2_MVB_3_IduMaSt_A2_Master                     (g_dataBuffer_R2_3_Master[7] & A2_00_01
#define R2_MVB_3_IduMbSt_A2_Master                     (g_dataBuffer_R2_3_Master[7] & A2_02_03
#define R2_MVB_3_S_TR_light_B1_Master                 (g_dataBuffer_R2_3_Master[7] & B1_04
#define R2_MVB_3_S_TL_light_B1_Master                 (g_dataBuffer_R2_3_Master[7] & B1_05
#define R2_MVB_3_PidsMaSt_A2_Master                    (g_dataBuffer_R2_3_Master[7] & A2_10_11
#define R2_MVB_3_PidsMbSt_A2_Master                    (g_dataBuffer_R2_3_Master[7] & A2_12_13
#define R2_MVB_3_PaMaSt_A2_Master                      (g_dataBuffer_R2_3_Master[7] & A2_14_15
#define R2_MVB_3_PaMbSt_A2_Master                      (g_dataBuffer_R2_3_Master[7] & A2_16_17

#define R2_MVB_3_RdeSt_A2_Master                       (g_dataBuffer_R2_3_Master[8] & A2_00_01
#define R2_MVB_3_DsdSt_B1_Master                      (g_dataBuffer_R2_3_Master[8] & B1_02
#define R2_MVB_3_ZeroSpeedSt_B1_Master                (g_dataBuffer_R2_3_Master[8] & B1_04
#define R2_MVB_3_GapCrossing_B1_Master                (g_dataBuffer_R2_3_Master[8] & B1_05
#define R2_MVB_3_GtwSt_A2_Master                       (g_dataBuffer_R2_3_Master[8] & A2_06_07




#define R2_MVB_3_D1MaCode_E4_Master                      (g_dataBuffer_R2_3_Master[8] & E4_10_13
#define R2_MVB_3_D2MaCode_E4_Master                      (g_dataBuffer_R2_3_Master[8] & E4_14_17

#define R2_MVB_3_D1RaCode_E4_Master                      (g_dataBuffer_R2_3_Master[9] & E4_00_03
#define R2_MVB_3_D2RaCode_E4_Master                      (g_dataBuffer_R2_3_Master[9] & E4_04_07
#define R2_MVB_3_D3RaCode_E4_Master                      (g_dataBuffer_R2_3_Master[9] & E4_10_13
#define R2_MVB_3_D4RaCode_E4_Master                      (g_dataBuffer_R2_3_Master[9] & E4_14_17

#define R2_MVB_3_D1RbCode_E4_Master                      (g_dataBuffer_R2_3_Master[10] & E4_00_03
#define R2_MVB_3_D2RbCode_E4_Master                      (g_dataBuffer_R2_3_Master[10] & E4_04_07
#define R2_MVB_3_D3RbCode_E4_Master                      (g_dataBuffer_R2_3_Master[10] & E4_10_13
#define R2_MVB_3_D4RbCode_E4_Master                      (g_dataBuffer_R2_3_Master[10] & E4_14_17


#define R2_MVB_3_D1MbCode_E4_Master                      (g_dataBuffer_R2_3_Master[11] & E4_00_03
#define R2_MVB_3_D2MbCode_E4_Master                      (g_dataBuffer_R2_3_Master[11] & E4_04_07
#define R2_MVB_3_Veh_Status_E4_Master                    (g_dataBuffer_R2_3_Master[11] & E4_10_13
#define R2_MVB_3_Drv_Status_E4_Master                    (g_dataBuffer_R2_3_Master[11] & E4_14_17




#define R2_MVB_3_ScMaMajor_B1_Master                     (g_dataBuffer_R2_3_Master[12] & B1_00
#define R2_MVB_3_ScMaMinor_B1_Master                     (g_dataBuffer_R2_3_Master[12] & B1_01
#define R2_MVB_3_ScMbMajor_B1_Master                     (g_dataBuffer_R2_3_Master[12] & B1_03
#define R2_MVB_3_ScMbMinor_B1_Master                     (g_dataBuffer_R2_3_Master[12] & B1_04
#define R2_MVB_3_AllBcuByp_B1_Master                     (g_dataBuffer_R2_3_Master[12] & B1_05
#define R2_MVB_3_ParkBrakeP_B1_Master                    (g_dataBuffer_R2_3_Master[12] & B1_06
#define R2_MVB_3_ParkBrakeMa_B1_Master                   (g_dataBuffer_R2_3_Master[12] & B1_07
#define R2_MVB_3_ParkBrakeMb_B1_Master                   (g_dataBuffer_R2_3_Master[12] & B1_11
#define R2_MVB_3_GtwStandbySt_B1_Master                  (g_dataBuffer_R2_3_Master[12] & B1_12
#define R2_MVB_3_LcuMaStandbySt_B1_Master                (g_dataBuffer_R2_3_Master[12] & B1_13
#define R2_MVB_3_LcuMbStandbySt_B1_Master                (g_dataBuffer_R2_3_Master[12] & B1_14
#define R2_MVB_3_PantoUp_B1_Master                       (g_dataBuffer_R2_3_Master[12] & B1_16
#define R2_MVB_3_PantoLow_B1_Master                      (g_dataBuffer_R2_3_Master[12] & B1_17





#define R2_MVB_3_st_08k01_MA_B1_Master                     (g_dataBuffer_R2_3_Master[13] & B1_00
#define R2_MVB_3_st_08k02_P_B1_Master                      (g_dataBuffer_R2_3_Master[13] & B1_02
#define R2_MVB_3_st_08k01_MB_B1_Master                     (g_dataBuffer_R2_3_Master[13] & B1_04
#define R2_MVB_3_SPUB_B1_Master                            (g_dataBuffer_R2_3_Master[13] & B1_06
#define R2_MVB_3_SafetyBrakeApply_B1_Master                (g_dataBuffer_R2_3_Master[13] & B1_05
#define R2_MVB_3_SPDB_B1_Master                            (g_dataBuffer_R2_3_Master[13] & B1_07
#define R2_MVB_3_St_EMBrake_MA_Master                      (g_dataBuffer_R2_3_Master[13] & B1_14
#define R2_MVB_3_St_EMBrake_MB_Master                      (g_dataBuffer_R2_3_Master[13] & B1_15
#define R2_MVB_3_St_Ktp_B1_Master                          (g_dataBuffer_R2_3_Master[13] & B1_16
#define R2_MVB_3_St_Ktw_B1_Master                          (g_dataBuffer_R2_3_Master[13] & B1_17
#define R2_MVB_3_St_KtwMB_B1_Master                        (g_dataBuffer_R2_3_Master[14] & B1_07

#define R2_MVB_3_MtbReq_B1_Master                          (g_dataBuffer_R2_3_Master[14] & B1_00
#define R2_MVB_3_St_MtbCntMA_B1_Master                     (g_dataBuffer_R2_3_Master[14] & B1_01
#define R2_MVB_3_St_MtbCntMB_B1_Master                     (g_dataBuffer_R2_3_Master[14] & B1_02
#define R2_MVB_3_St_MtbCntP_B1_Master                      (g_dataBuffer_R2_3_Master[14] & B1_03
#define R2_MVB_3_BrakeActMA_B1_Master                      (g_dataBuffer_R2_3_Master[14] & B1_04
#define R2_MVB_3_BrakeActP_B1_Master                       (g_dataBuffer_R2_3_Master[14] & B1_05
#define R2_MVB_3_BrakeActMB_B1_Master                      (g_dataBuffer_R2_3_Master[14] & B1_06

#define R2_MVB_3_MasterVehCoupMA_B1_Master                 (g_dataBuffer_R2_3_Master[14] & B1_10
#define R2_MVB_3_MasterVehCoupMB_B1_Master                 (g_dataBuffer_R2_3_Master[14] & B1_11
#define R2_MVB_3_SlaveVehCoupMA_B1_Master                  (g_dataBuffer_R2_3_Master[14] & B1_12
#define R2_MVB_3_SlaveVehCoupMB_B1_Master                  (g_dataBuffer_R2_3_Master[14] & B1_13

#define R2_MVB_3_DoorClosedEnab_B1_Master                  (g_dataBuffer_R2_3_Master[14] & B1_15
#define R2_MVB_3_DoorOpen_B1_Master                        (g_dataBuffer_R2_3_Master[14] & B1_16

#define R2_MVB_3_LifeDiag1_U8_Master                       (g_dataBuffer_R2_3_Master[15] U8_0
      //?????????????????????????????????
#define R2_MVB_3_ChkDiag1_A2_Master                         (g_dataBuffer_R2_3_Master[15] & A2_16_17
//??????? //#define R2_MVB_3_ChkDiag1_A2_Master                         (g_dataBuffer_R2_3_Master[15] & A2_13_14


//     (g_dataBuffer_R2_3_Slave[i] =g_dataBuffer_MVB[480+i];
      #define R2_MVB_3_LineVolt_U16_Slave                    Change_BigEen(g_dataBuffer_R2_3_Slave[0])
      #define R2_MVB_3_LineCurr_U16_Slave                   Change_BigEen(g_dataBuffer_R2_3_Slave[1])
      #define R2_MVB_3_VehSpeed_U16_Slave                   Change_BigEen(g_dataBuffer_R2_3_Slave[2])
      #define R2_MVB_3_Effort_U16_Slave                     Change_BigEen(g_dataBuffer_R2_3_Slave[3])

      #define R2_MVB_3_Tcu1Status_A2_Slave                      (g_dataBuffer_R2_3_Slave[4] & A2_00_01
      #define R2_MVB_3_Tcu2Status_A2_Slave                      (g_dataBuffer_R2_3_Slave[4] & A2_02_03
      #define R2_MVB_3_Tcu3Status_A2_Slave                      (g_dataBuffer_R2_3_Slave[4] & A2_04_05
      #define R2_MVB_3_Tcu4Status_A2_Slave                      (g_dataBuffer_R2_3_Slave[4] & A2_06_07
      #define R2_MVB_3_Aux1Status_A2_Slave                      (g_dataBuffer_R2_3_Slave[4] & A2_10_11
      #define R2_MVB_3_Aux2Status_A2_Slave                      (g_dataBuffer_R2_3_Slave[4] & A2_12_13
      #define R2_MVB_3_Bc1Status_A2_Slave                       (g_dataBuffer_R2_3_Slave[4] & A2_14_15
      #define R2_MVB_3_Bc2Status_A2_Slave                       (g_dataBuffer_R2_3_Slave[4] & A2_16_17

      #define R2_MVB_3_CcuMaSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[5] & A2_00_01
      #define R2_MVB_3_LcuMaSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[5] & A2_02_03
      #define R2_MVB_3_LcuRaSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[5] & A2_04_05
      #define R2_MVB_3_CcuMbSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[5] & A2_10_11
      #define R2_MVB_3_LcuMbSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[5] & A2_12_13
      #define R2_MVB_3_LcuRbSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[5] & A2_14_15
      #define R2_MVB_3_HvacRaSt_A2_Slave                     (g_dataBuffer_R2_3_Slave[5] & A2_16_17

      #define R2_MVB_3_BcuPSt_A2_Slave                       (g_dataBuffer_R2_3_Slave[6] & A2_00_01
      #define R2_MVB_3_BcuMaSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[6] & A2_02_03
      #define R2_MVB_3_BcuMbSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[6] & A2_04_05
      #define R2_MVB_3_HvacRbSt_A2_Slave                     (g_dataBuffer_R2_3_Slave[6] & A2_06_07
      #define R2_MVB_3_SPUA_B1_Slave                          (g_dataBuffer_R2_3_Slave[6] & B1_10
      #define R2_MVB_3_SPDA_B1_Slave                         (g_dataBuffer_R2_3_Slave[6] & B1_11
      #define R2_MVB_3_StHscb_B1_Slave                      (g_dataBuffer_R2_3_Slave[6] & B1_12
      #define R2_MVB_3_BogieMaIsol_B1_Slave                 (g_dataBuffer_R2_3_Slave[6] & B1_13
      #define R2_MVB_3_BogiePIsol_B1_Slave                  (g_dataBuffer_R2_3_Slave[6] & B1_14
      #define R2_MVB_3_BogieMbIsol_B1_Slave                 (g_dataBuffer_R2_3_Slave[6] & B1_15
      #define R2_MVB_3_LcuPSt_A2_Slave                       (g_dataBuffer_R2_3_Slave[6] & A2_16_17


      #define R2_MVB_3_IduMaSt_A2_Slave                     (g_dataBuffer_R2_3_Slave[7] & A2_00_01
      #define R2_MVB_3_IduMbSt_A2_Slave                     (g_dataBuffer_R2_3_Slave[7] & A2_02_03
      #define R2_MVB_3_S_TR_light_B1_Slave                 (g_dataBuffer_R2_3_Slave[7] & B1_04
      #define R2_MVB_3_S_TL_light_B1_Slave                 (g_dataBuffer_R2_3_Slave[7] & B1_05
      #define R2_MVB_3_PidsMaSt_A2_Slave                    (g_dataBuffer_R2_3_Slave[7] & A2_10_11
      #define R2_MVB_3_PidsMbSt_A2_Slave                    (g_dataBuffer_R2_3_Slave[7] & A2_12_13
      #define R2_MVB_3_PaMaSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[7] & A2_14_15
      #define R2_MVB_3_PaMbSt_A2_Slave                      (g_dataBuffer_R2_3_Slave[7] & A2_16_17

      #define R2_MVB_3_RdeSt_A2_Slave                       (g_dataBuffer_R2_3_Slave[8] & A2_00_01
      #define R2_MVB_3_DsdSt_B1_Slave                      (g_dataBuffer_R2_3_Slave[8] & B1_02
      #define R2_MVB_3_ZeroSpeedSt_B1_Slave                (g_dataBuffer_R2_3_Slave[8] & B1_04
      #define R2_MVB_3_GapCrossing_B1_Slave                (g_dataBuffer_R2_3_Slave[8] & B1_05
      #define R2_MVB_3_GtwSt_A2_Slave                       (g_dataBuffer_R2_3_Slave[8] & A2_06_07




      #define R2_MVB_3_D1MaCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[8] & E4_10_13
      #define R2_MVB_3_D2MaCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[8] & E4_14_17

      #define R2_MVB_3_D1RaCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[9] & E4_00_03
      #define R2_MVB_3_D2RaCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[9] & E4_04_07
      #define R2_MVB_3_D3RaCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[9] & E4_10_13
      #define R2_MVB_3_D4RaCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[9] & E4_14_17

      #define R2_MVB_3_D1RbCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[10] & E4_00_03
      #define R2_MVB_3_D2RbCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[10] & E4_04_07
      #define R2_MVB_3_D3RbCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[10] & E4_10_13
      #define R2_MVB_3_D4RbCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[10] & E4_14_17


      #define R2_MVB_3_D1MbCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[11] & E4_00_03
      #define R2_MVB_3_D2MbCode_E4_Slave                      (g_dataBuffer_R2_3_Slave[11] & E4_04_07
      #define R2_MVB_3_Veh_Status_E4_Slave                    (g_dataBuffer_R2_3_Slave[11] & E4_10_13
      #define R2_MVB_3_Drv_Status_E4_Slave                    (g_dataBuffer_R2_3_Slave[11] & E4_14_17




      #define R2_MVB_3_ScMaMajor_B1_Slave                     (g_dataBuffer_R2_3_Slave[12] & B1_00
      #define R2_MVB_3_ScMaMinor_B1_Slave                     (g_dataBuffer_R2_3_Slave[12] & B1_01
      #define R2_MVB_3_ScMbMajor_B1_Slave                     (g_dataBuffer_R2_3_Slave[12] & B1_03
      #define R2_MVB_3_ScMbMinor_B1_Slave                     (g_dataBuffer_R2_3_Slave[12] & B1_04
      #define R2_MVB_3_AllBcuByp_B1_Slave                     (g_dataBuffer_R2_3_Slave[12] & B1_05
      #define R2_MVB_3_ParkBrakeP_B1_Slave                    (g_dataBuffer_R2_3_Slave[12] & B1_06
      #define R2_MVB_3_ParkBrakeMa_B1_Slave                   (g_dataBuffer_R2_3_Slave[12] & B1_07
      #define R2_MVB_3_ParkBrakeMb_B1_Slave                   (g_dataBuffer_R2_3_Slave[12] & B1_11
      #define R2_MVB_3_GtwStandbySt_B1_Slave                  (g_dataBuffer_R2_3_Slave[12] & B1_12
      #define R2_MVB_3_LcuMaStandbySt_B1_Slave                (g_dataBuffer_R2_3_Slave[12] & B1_13
      #define R2_MVB_3_LcuMbStandbySt_B1_Slave                (g_dataBuffer_R2_3_Slave[12] & B1_14
      #define R2_MVB_3_PantoUp_B1_Slave                       (g_dataBuffer_R2_3_Slave[12] & B1_16
      #define R2_MVB_3_PantoLow_B1_Slave                      (g_dataBuffer_R2_3_Slave[12] & B1_17





      #define R2_MVB_3_st_08k01_MA_B1_Slave                     (g_dataBuffer_R2_3_Slave[13] & B1_00
      #define R2_MVB_3_st_08k02_P_B1_Slave                      (g_dataBuffer_R2_3_Slave[13] & B1_02
      #define R2_MVB_3_st_08k01_MB_B1_Slave                     (g_dataBuffer_R2_3_Slave[13] & B1_04
      #define R2_MVB_3_SPUB_B1_Slave                             (g_dataBuffer_R2_3_Slave[13] & B1_06
    #define R2_MVB_3_SafetyBrakeApply_B1_Slave                (g_dataBuffer_R2_3_Slave[13] & B1_05
    #define R2_MVB_3_St_EMBrake_MA_Slave                      (g_dataBuffer_R2_3_Slave[13] & B1_14
    #define R2_MVB_3_St_EMBrake_MB_Slave                      (g_dataBuffer_R2_3_Slave[13] & B1_15
      #define R2_MVB_3_SPDB_B1_Slave                             (g_dataBuffer_R2_3_Slave[13] & B1_07
      #define R2_MVB_3_St_Ktp_B1_Slave                          (g_dataBuffer_R2_3_Slave[13] & B1_16
      #define R2_MVB_3_St_Ktw_B1_Slave                          (g_dataBuffer_R2_3_Slave[13] & B1_17
      #define R2_MVB_3_St_KtwMB_B1_Slave                        (g_dataBuffer_R2_3_Slave[14] & B1_07

      #define R2_MVB_3_MtbReq_B1_Slave                          (g_dataBuffer_R2_3_Slave[14] & B1_00
      #define R2_MVB_3_St_MtbCntMA_B1_Slave                     (g_dataBuffer_R2_3_Slave[14] & B1_01
      #define R2_MVB_3_St_MtbCntMB_B1_Slave                     (g_dataBuffer_R2_3_Slave[14] & B1_02
      #define R2_MVB_3_St_MtbCntP_B1_Slave                      (g_dataBuffer_R2_3_Slave[14] & B1_03
      #define R2_MVB_3_BrakeActMA_B1_Slave                      (g_dataBuffer_R2_3_Slave[14] & B1_04
      #define R2_MVB_3_BrakeActP_B1_Slave                       (g_dataBuffer_R2_3_Slave[14] & B1_05
      #define R2_MVB_3_BrakeActMB_B1_Slave                      (g_dataBuffer_R2_3_Slave[14] & B1_06

      #define R2_MVB_3_MasterVehCoupMA_B1_Slave                 (g_dataBuffer_R2_3_Slave[14] & B1_10
      #define R2_MVB_3_MasterVehCoupMB_B1_Slave                 (g_dataBuffer_R2_3_Slave[14] & B1_11
      #define R2_MVB_3_SlaveVehCoupMA_B1_Slave                  (g_dataBuffer_R2_3_Slave[14] & B1_12
      #define R2_MVB_3_SlaveVehCoupMB_B1_Slave                  (g_dataBuffer_R2_3_Slave[14] & B1_13

      #define R2_MVB_3_DoorClosedEnab_B1_Slave                  (g_dataBuffer_R2_3_Slave[14] & B1_15
      #define R2_MVB_3_DoorOpen_B1_Slave                        (g_dataBuffer_R2_3_Slave[14] & B1_16

      #define R2_MVB_3_LifeDiag1_U8_Slave                       (g_dataBuffer_R2_3_Slave[15] U8_0
            //?????????????????????????????????
      #define R2_MVB_3_ChkDiag1_A2_Slave                         (g_dataBuffer_R2_3_Slave[15] & A2_16_17
      //??????? //#define R2_MVB_3_ChkDiag1_A2_Slave                         (g_dataBuffer_R2_3_Slave[15] & A2_13_14


      //(g_dataBuffer_R2_4_Master[i]=g_dataBuffer_MVB[528+i];
            //Master
           #define R2_MVB_4_ScuRaCommFlt_B1                 (g_dataBuffer_MVB[528+0] & B1_00
           #define R2_MVB_4_ScuRaCommFlt_B1                 (g_dataBuffer_MVB[528+0] & B1_01
           #define R2_MVB_4_ScuFaultMinor_B1                (g_dataBuffer_MVB[528+0] & B1_02
           #define R2_MVB_4_KtpFault_B1                     (g_dataBuffer_MVB[528+0] & B1_03
           #define R2_MVB_4_KtwFault_B1                     (g_dataBuffer_MVB[528+0] & B1_04
           #define R2_MVB_4_RostroAFault_B1                 (g_dataBuffer_MVB[528+0] & B1_05
           #define R2_MVB_4_RostroBFault_B1                 (g_dataBuffer_MVB[528+0] & B1_06
           #define R2_MVB_4_FrameFault_B1                   (g_dataBuffer_MVB[528+0] & B1_07

           #define R2_MVB_4_ScuMajorFault_B1                (g_dataBuffer_MVB[528+0] & B1_10
           #define R2_MVB_4_MtbMaFault_B1                   (g_dataBuffer_MVB[528+0] & B1_11
           #define R2_MVB_4_MtbPFault_B1                    (g_dataBuffer_MVB[528+0] & B1_12
           #define R2_MVB_4_MtbMbFault_B1                   (g_dataBuffer_MVB[528+0] & B1_13
           #define R2_MVB_4_TwNotUpFault_B1                 (g_dataBuffer_MVB[528+0] & B1_14
           #define R2_MVB_4_PantoNotDownFault_B1            (g_dataBuffer_MVB[528+0] & B1_15
           #define R2_MVB_4_SpeedNotZeroFault_B1            (g_dataBuffer_MVB[528+0] & B1_16
           #define R2_MVB_4_ManualModeRequest_B1            (g_dataBuffer_MVB[528+0] & B1_17

           #define R2_MVB_4_BcuMaMinorMismatch_B1            (g_dataBuffer_MVB[528+1] & B1_00
           #define R2_MVB_4_BcuMbMinorMismatch_B1            (g_dataBuffer_MVB[528+1] & B1_01
           #define R2_MVB_4_BcuPMinorMismatch_B1             (g_dataBuffer_MVB[528+1] & B1_02
           #define R2_MVB_4_BcuMaMajorMismatch_B1            (g_dataBuffer_MVB[528+1] & B1_03
           #define R2_MVB_4_BcuMbMajorMismatch_B1            (g_dataBuffer_MVB[528+1] & B1_04
           #define R2_MVB_4_BcuPMajorMismatch_B1             (g_dataBuffer_MVB[528+1] & B1_05
           #define R2_MVB_4_ShoeFault_B1                     (g_dataBuffer_MVB[528+1] & B1_06
           #define R2_MVB_4_TwPumpFault_B1                   (g_dataBuffer_MVB[528+1] & B1_07


           #define R2_MVB_4_Mb9f01Fault_B1                   (g_dataBuffer_MVB[528+1] & B1_11
           #define R2_MVB_4_Mb7f05Fault_B1                   (g_dataBuffer_MVB[528+1] & B1_12
           #define R2_MVB_4_Mb9f07Fault_B1                   (g_dataBuffer_MVB[528+1] & B1_13
           #define R2_MVB_4_Mb9f10Fault_B1                   (g_dataBuffer_MVB[528+1] & B1_14
           #define R2_MVB_4_Mb6f03Fault_B1                   (g_dataBuffer_MVB[528+1] & B1_15
           #define R2_MVB_4_Mb8f01Fault_B1                   (g_dataBuffer_MVB[528+1] & B1_16


           #define R2_MVB_4_TfcFaultCa_B1                    (g_dataBuffer_MVB[528+2] & B1_01
           #define R2_MVB_4_EncoFaultCa_B1                   (g_dataBuffer_MVB[528+2] & B1_02
           #define R2_MVB_4_TFCFaulCb_B1                     (g_dataBuffer_MVB[528+2] & B1_03
           #define R2_MVB_4_EncoFaultCb_B1                   (g_dataBuffer_MVB[528+2] & B1_04
           #define R2_MVB_4_DisDisabled_B1                   (g_dataBuffer_MVB[528+2] & B1_05
           #define R2_MVB_4_DisOkey_B1                       (g_dataBuffer_MVB[528+2] & B1_06
           #define R2_MVB_4_DisFail_B1                       (g_dataBuffer_MVB[528+2] & B1_07

           #define R2_MVB_4_Ma8k01Fault_B1                   (g_dataBuffer_MVB[528+2] & B1_11

           #define R2_MVB_4_Mb8k01Fault_B1                   (g_dataBuffer_MVB[528+2] & B1_13
           #define R2_MVB_4_P8k01Fault_B1                    (g_dataBuffer_MVB[528+2] & B1_14
           #define R2_MVB_4_TwUp2DwFault_B1                  (g_dataBuffer_MVB[528+2] & B1_15
           #define R2_MVB_4_TwDw2UpFault_B1                  (g_dataBuffer_MVB[528+2] & B1_16


           #define R2_MVB_4_PantoNotHighFault_B1             (g_dataBuffer_MVB[528+3] & B1_00
           #define R2_MVB_4_PantoNotLowFault_B1              (g_dataBuffer_MVB[528+3] & B1_01
           #define R2_MVB_4_HscbNotClosedFault_B1            (g_dataBuffer_MVB[528+3] & B1_02
           #define R2_MVB_4_HscbNotOpenFault_B1              (g_dataBuffer_MVB[528+3] & B1_03
           #define R2_MVB_4_BogieBlockMa_B1                  (g_dataBuffer_MVB[528+3] & B1_13
           #define R2_MVB_4_BogieBlockP_B1                   (g_dataBuffer_MVB[528+3] & B1_14
           #define R2_MVB_4_BogieBlockMb_B1                  (g_dataBuffer_MVB[528+3] & B1_15




           #define R2_MVB_4_BcMaFault_B1                     (g_dataBuffer_MVB[528+4] & B1_02
           #define R2_MVB_4_BcMbFault_B1                     (g_dataBuffer_MVB[528+4] & B1_03
           #define R2_MVB_4_FltFrame_B1                      (g_dataBuffer_MVB[528+4] & B1_04
           #define R2_MVB_4_FltRostroA_B1                    (g_dataBuffer_MVB[528+4] & B1_05
           #define R2_MVB_4_FltRostroB_B1                    (g_dataBuffer_MVB[528+4] & B1_06
           #define R2_MVB_4_FltShoe_B1                       (g_dataBuffer_MVB[528+4] & B1_07
           #define R2_MVB_4_MvDoubleFault_B1                 (g_dataBuffer_MVB[528+4] & B1_10
           #define R2_MVB_4_DirFault_B1                      (g_dataBuffer_MVB[528+4] & B1_11
           #define R2_MVB_4_ApsMaFault_B1                    (g_dataBuffer_MVB[528+4] & B1_13
           #define R2_MVB_4_ApsMbFault_B1                    (g_dataBuffer_MVB[528+4] & B1_14

           #define R2_MVB_4_CcuSFault_B1                     (g_dataBuffer_MVB[528+5] & B1_00
           #define R2_MVB_4_LcuMaSFault_B1                   (g_dataBuffer_MVB[528+5] & B1_01
           #define R2_MVB_4_GtwSFault_B1                     (g_dataBuffer_MVB[528+5] & B1_02
           #define R2_MVB_4_LcuMbSFault_B1                   (g_dataBuffer_MVB[528+5] & B1_05
           #define R2_MVB_4_J_R2_DSx_Page_B1                  (g_dataBuffer_MVB[528+5] & A2_06_07
           #define R2_MVB_4_DsdIntervention_B1               (g_dataBuffer_MVB[528+5] & B1_15

           #define R2_MVB_4_Door1MaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_00_01
           #define R2_MVB_4_Door2MaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_02_03
           #define R2_MVB_4_Door3MaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_04_05
           #define R2_MVB_4_Door4MaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_06_07
           #define R2_MVB_4_Door1RaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_10_11
           #define R2_MVB_4_Door2RaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_12_13
           #define R2_MVB_4_Door3RaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_14_15
           #define R2_MVB_4_Door4RaSt_A2                     (g_dataBuffer_MVB[528+6] & A2_16_17

           #define R2_MVB_4_Door1RbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_00_01
           #define R2_MVB_4_Door2RbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_02_03
           #define R2_MVB_4_Door3RbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_04_05
           #define R2_MVB_4_Door4RbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_06_07
           #define R2_MVB_4_Door1MbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_10_11
           #define R2_MVB_4_Door2MbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_12_13
           #define R2_MVB_4_Door3MbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_14_15
           #define R2_MVB_4_Door4MbSt_A2                     (g_dataBuffer_MVB[528+7] & A2_16_17


           #define R2_MVB_4_Ma9f01Fault_B1                  (g_dataBuffer_MVB[528+8] & B1_01
           #define R2_MVB_4_Ma7f05Fault_B1                  (g_dataBuffer_MVB[528+8] & B1_02
           #define R2_MVB_4_Ma9f07Fault_B1                  (g_dataBuffer_MVB[528+8] & B1_03
           #define R2_MVB_4_Ma9f10Fault_B1                  (g_dataBuffer_MVB[528+8] & B1_04
           #define R2_MVB_4_Ma6f03Fault_B1                  (g_dataBuffer_MVB[528+8] & B1_05
           #define R2_MVB_4_Ma8f01Fault_B1                  (g_dataBuffer_MVB[528+8] & B1_06





           #define R2_MVB_4_LeftSandFltCa_B1                  (g_dataBuffer_MVB[528+10] & B1_10
           #define R2_MVB_4_RightSandFltCa_B1                 (g_dataBuffer_MVB[528+10] & B1_11
           #define R2_MVB_4_LeftSandFltCb_B1                  (g_dataBuffer_MVB[528+10] & B1_12
           #define R2_MVB_4_RightSandFltCb_B1                 (g_dataBuffer_MVB[528+10] & B1_13

           #define R2_MVB_4_PtTwSelFaultCa_B1                 (g_dataBuffer_MVB[528+11] & B1_00
           #define R2_MVB_4_ScStopStartSelFaultCa_B1          (g_dataBuffer_MVB[528+11] & B1_01
           #define R2_MVB_4_PantoUpDwSelFaultCa_B1            (g_dataBuffer_MVB[528+11] & B1_02
           #define R2_MVB_4_TwUpDwSelFaultCa_B1               (g_dataBuffer_MVB[528+11] & B1_03
           #define R2_MVB_4_PtTwSelFaultCb_B1                 (g_dataBuffer_MVB[528+11] & B1_04
           #define R2_MVB_4_ScStopStartSelFaultCb_B1          (g_dataBuffer_MVB[528+11] & B1_05
           #define R2_MVB_4_PantoUpDwSelFaultCb_B1            (g_dataBuffer_MVB[528+11] & B1_06
           #define R2_MVB_4_TwUpDwSelFaultCb_B1               (g_dataBuffer_MVB[528+11] & B1_07





           #define R2_MVB_4_TrBlockDoorLoop_B1                    (g_dataBuffer_MVB[528+14] & B1_10
           #define R2_MVB_4_TrBlockDoorEnab_B1                    (g_dataBuffer_MVB[528+14] & B1_12
           #define R2_MVB_4_TrBlockHscb_B1                        (g_dataBuffer_MVB[528+14] & B1_13
           #define R2_MVB_4_TrBlockDoorClose_B1                   (g_dataBuffer_MVB[528+14] & B1_14
           #define R2_MVB_4_TrBlockTwPanto_B1                     (g_dataBuffer_MVB[528+14] & B1_15
           #define R2_MVB_4_RollBack_B1                           (g_dataBuffer_MVB[528+14] & B1_16

           #define R2_MVB_4_LifeDiag2_U8                          (g_dataBuffer_MVB[528+15] U8_0
           #define R2_MVB_4_Check_A2                               (g_dataBuffer_MVB[528+15] & A2_16_17


//     (g_dataBuffer_R2_4_Master[i]=g_dataBuffer_MVB[528+i];
      //Master
     #define R2_MVB_4_ScuRaCommFlt_B1_Master                  (g_dataBuffer_R2_4_Master[0] & B1_00
     #define R2_MVB_4_ScuRbCommFlt_B1_Master                  (g_dataBuffer_R2_4_Master[0] & B1_01
     #define R2_MVB_4_ScuFaultMinor_B1_Master                 (g_dataBuffer_R2_4_Master[0] & B1_02
     #define R2_MVB_4_KtpFault_B1_Master                      (g_dataBuffer_R2_4_Master[0] & B1_03
     #define R2_MVB_4_KtwFault_B1_Master                      (g_dataBuffer_R2_4_Master[0] & B1_04
     #define R2_MVB_4_RostroAFault_B1_Master                  (g_dataBuffer_R2_4_Master[0] & B1_05
     #define R2_MVB_4_RostroBFault_B1_Master                  (g_dataBuffer_R2_4_Master[0] & B1_06
     #define R2_MVB_4_FrameFault_B1_Master                    (g_dataBuffer_R2_4_Master[0] & B1_07

     #define R2_MVB_4_ScuMajorFault_B1_Master                 (g_dataBuffer_R2_4_Master[0] & B1_10
     #define R2_MVB_4_MtbMaFault_B1_Master                    (g_dataBuffer_R2_4_Master[0] & B1_11
     #define R2_MVB_4_MtbPFault_B1_Master                     (g_dataBuffer_R2_4_Master[0] & B1_12
     #define R2_MVB_4_MtbMbFault_B1_Master                    (g_dataBuffer_R2_4_Master[0] & B1_13
     #define R2_MVB_4_TwNotUpFault_B1_Master                  (g_dataBuffer_R2_4_Master[0] & B1_14
     #define R2_MVB_4_PantoNotDownFault_B1_Master             (g_dataBuffer_R2_4_Master[0] & B1_15
     #define R2_MVB_4_SpeedNotZeroFault_B1_Master             (g_dataBuffer_R2_4_Master[0] & B1_16
     #define R2_MVB_4_ManualModeRequest_B1_Master             (g_dataBuffer_R2_4_Master[0] & B1_17

     #define R2_MVB_4_BcuMaMinorMismatch_B1_Master             (g_dataBuffer_R2_4_Master[1] & B1_00
     #define R2_MVB_4_BcuMbMinorMismatch_B1_Master             (g_dataBuffer_R2_4_Master[1] & B1_01
     #define R2_MVB_4_BcuPMinorMismatch_B1_Master              (g_dataBuffer_R2_4_Master[1] & B1_02
     #define R2_MVB_4_BcuMaMajorMismatch_B1_Master             (g_dataBuffer_R2_4_Master[1] & B1_03
     #define R2_MVB_4_BcuMbMajorMismatch_B1_Master             (g_dataBuffer_R2_4_Master[1] & B1_04
     #define R2_MVB_4_BcuPMajorMismatch_B1_Master              (g_dataBuffer_R2_4_Master[1] & B1_05
     #define R2_MVB_4_ShoeFault_B1_Master                      (g_dataBuffer_R2_4_Master[1] & B1_06
     #define R2_MVB_4_TwPumpFault_B1_Master                    (g_dataBuffer_R2_4_Master[1] & B1_07


     #define R2_MVB_4_Mb9f01Fault_B1_Master                    (g_dataBuffer_R2_4_Master[1] & B1_11
     #define R2_MVB_4_Mb7f05Fault_B1_Master                    (g_dataBuffer_R2_4_Master[1] & B1_12
     #define R2_MVB_4_Mb9f07Fault_B1_Master                    (g_dataBuffer_R2_4_Master[1] & B1_13
     #define R2_MVB_4_Mb9f10Fault_B1_Master                    (g_dataBuffer_R2_4_Master[1] & B1_14
     #define R2_MVB_4_Mb6f03Fault_B1_Master                    (g_dataBuffer_R2_4_Master[1] & B1_15
     #define R2_MVB_4_Mb8f01Fault_B1_Master                    (g_dataBuffer_R2_4_Master[1] & B1_16


     #define R2_MVB_4_TfcFaultCa_B1_Master                     (g_dataBuffer_R2_4_Master[2] & B1_01
     #define R2_MVB_4_EncoFaultCa_B1_Master                    (g_dataBuffer_R2_4_Master[2] & B1_02
     #define R2_MVB_4_TFCFaulCb_B1_Master                      (g_dataBuffer_R2_4_Master[2] & B1_03
     #define R2_MVB_4_EncoFaultCb_B1_Master                    (g_dataBuffer_R2_4_Master[2] & B1_04
     #define R2_MVB_4_DisDisabled_B1_Master                    (g_dataBuffer_R2_4_Master[2] & B1_05
     #define R2_MVB_4_DisOkey_B1_Master                        (g_dataBuffer_R2_4_Master[2] & B1_06
     #define R2_MVB_4_DisFail_B1_Master                        (g_dataBuffer_R2_4_Master[2] & B1_07

     #define R2_MVB_4_Ma8k01Fault_B1_Master                    (g_dataBuffer_R2_4_Master[2] & B1_11

     #define R2_MVB_4_Mb8k01Fault_B1_Master                    (g_dataBuffer_R2_4_Master[2] & B1_13
     #define R2_MVB_4_P8k01Fault_B1_Master                     (g_dataBuffer_R2_4_Master[2] & B1_14
     #define R2_MVB_4_TwUp2DwFault_B1_Master                   (g_dataBuffer_R2_4_Master[2] & B1_15
     #define R2_MVB_4_TwDw2UpFault_B1_Master                   (g_dataBuffer_R2_4_Master[2] & B1_16


     #define R2_MVB_4_PantoNotHighFault_B1_Master              (g_dataBuffer_R2_4_Master[3] & B1_00
     #define R2_MVB_4_PantoNotLowFault_B1_Master               (g_dataBuffer_R2_4_Master[3] & B1_01
     #define R2_MVB_4_HscbNotClosedFault_B1_Master             (g_dataBuffer_R2_4_Master[3] & B1_02
     #define R2_MVB_4_HscbNotOpenFault_B1_Master               (g_dataBuffer_R2_4_Master[3] & B1_03
     #define R2_MVB_4_BogieBlockMa_B1_Master                   (g_dataBuffer_R2_4_Master[3] & B1_13
     #define R2_MVB_4_BogieBlockP_B1_Master                    (g_dataBuffer_R2_4_Master[3] & B1_14
     #define R2_MVB_4_BogieBlockMb_B1_Master                   (g_dataBuffer_R2_4_Master[3] & B1_15




     #define R2_MVB_4_BcMaFault_B1_Master                      (g_dataBuffer_R2_4_Master[4] & B1_02
     #define R2_MVB_4_BcMbFault_B1_Master                      (g_dataBuffer_R2_4_Master[4] & B1_03
     #define R2_MVB_4_FltFrame_B1_Master                       (g_dataBuffer_R2_4_Master[4] & B1_04
     #define R2_MVB_4_FltRostroA_B1_Master                     (g_dataBuffer_R2_4_Master[4] & B1_05
     #define R2_MVB_4_FltRostroB_B1_Master                     (g_dataBuffer_R2_4_Master[4] & B1_06
     #define R2_MVB_4_FltShoe_B1_Master                        (g_dataBuffer_R2_4_Master[4] & B1_07
     #define R2_MVB_4_MvDoubleFault_B1_Master                  (g_dataBuffer_R2_4_Master[4] & B1_10
     #define R2_MVB_4_DirFault_B1_Master                       (g_dataBuffer_R2_4_Master[4] & B1_11
     #define R2_MVB_4_ApsMaFault_B1_Master                     (g_dataBuffer_R2_4_Master[4] & B1_13
     #define R2_MVB_4_ApsMbFault_B1_Master                     (g_dataBuffer_R2_4_Master[4] & B1_14

     #define R2_MVB_4_CcuSFault_B1_Master                      (g_dataBuffer_R2_4_Master[5] & B1_00
     #define R2_MVB_4_LcuMaSFault_B1_Master                    (g_dataBuffer_R2_4_Master[5] & B1_01
     #define R2_MVB_4_GtwSFault_B1_Master                      (g_dataBuffer_R2_4_Master[5] & B1_02
     #define R2_MVB_4_LcuMbSFault_B1_Master                    (g_dataBuffer_R2_4_Master[5] & B1_05
     #define R2_MVB_4_J_R2_DSx_Page_B1_Master                   (g_dataBuffer_R2_4_Master[5] & A2_06_07
     #define R2_MVB_4_DsdIntervention_B1_Master                (g_dataBuffer_R2_4_Master[5] & B1_15

     #define R2_MVB_4_Door1MaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_00_01
     #define R2_MVB_4_Door2MaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_02_03
     #define R2_MVB_4_Door3MaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_04_05
     #define R2_MVB_4_Door4MaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_06_07
     #define R2_MVB_4_Door1RaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_10_11
     #define R2_MVB_4_Door2RaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_12_13
     #define R2_MVB_4_Door3RaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_14_15
     #define R2_MVB_4_Door4RaSt_A2_Master                      (g_dataBuffer_R2_4_Master[6] & A2_16_17

     #define R2_MVB_4_Door1RbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_00_01
     #define R2_MVB_4_Door2RbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_02_03
     #define R2_MVB_4_Door3RbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_04_05
     #define R2_MVB_4_Door4RbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_06_07
     #define R2_MVB_4_Door1MbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_10_11
     #define R2_MVB_4_Door2MbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_12_13
     #define R2_MVB_4_Door3MbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_14_15
     #define R2_MVB_4_Door4MbSt_A2_Master                      (g_dataBuffer_R2_4_Master[7] & A2_16_17


     #define R2_MVB_4_Ma9f01Fault_B1_Master                   (g_dataBuffer_R2_4_Master[8] & B1_01
     #define R2_MVB_4_Ma7f05Fault_B1_Master                   (g_dataBuffer_R2_4_Master[8] & B1_02
     #define R2_MVB_4_Ma9f07Fault_B1_Master                   (g_dataBuffer_R2_4_Master[8] & B1_03
     #define R2_MVB_4_Ma9f10Fault_B1_Master                   (g_dataBuffer_R2_4_Master[8] & B1_04
     #define R2_MVB_4_Ma6f03Fault_B1_Master                   (g_dataBuffer_R2_4_Master[8] & B1_05
     #define R2_MVB_4_Ma8f01Fault_B1_Master                   (g_dataBuffer_R2_4_Master[8] & B1_06





     #define R2_MVB_4_LeftSandFltCa_B1_Master                   (g_dataBuffer_R2_4_Master[10] & B1_10
     #define R2_MVB_4_RightSandFltCa_B1_Master                  (g_dataBuffer_R2_4_Master[10] & B1_11
     #define R2_MVB_4_LeftSandFltCb_B1_Master                   (g_dataBuffer_R2_4_Master[10] & B1_12
     #define R2_MVB_4_RightSandFltCb_B1_Master                  (g_dataBuffer_R2_4_Master[10] & B1_13

     #define R2_MVB_4_PtTwSelFaultCa_B1_Master                  (g_dataBuffer_R2_4_Master[11] & B1_00
     #define R2_MVB_4_ScStopStartSelFaultCa_B1_Master           (g_dataBuffer_R2_4_Master[11] & B1_01
     #define R2_MVB_4_PantoUpDwSelFaultCa_B1_Master             (g_dataBuffer_R2_4_Master[11] & B1_02
     #define R2_MVB_4_TwUpDwSelFaultCa_B1_Master                (g_dataBuffer_R2_4_Master[11] & B1_03
     #define R2_MVB_4_PtTwSelFaultCb_B1_Master                  (g_dataBuffer_R2_4_Master[11] & B1_04
     #define R2_MVB_4_ScStopStartSelFaultCb_B1_Master           (g_dataBuffer_R2_4_Master[11] & B1_05
     #define R2_MVB_4_PantoUpDwSelFaultCb_B1_Master             (g_dataBuffer_R2_4_Master[11] & B1_06
     #define R2_MVB_4_TwUpDwSelFaultCb_B1_Master                (g_dataBuffer_R2_4_Master[11] & B1_07





     #define R2_MVB_4_TrBlockDoorLoop_B1_Master                     (g_dataBuffer_R2_4_Master[14] & B1_10
     #define R2_MVB_4_TrBlockDoorEnab_B1_Master                     (g_dataBuffer_R2_4_Master[14] & B1_12
     #define R2_MVB_4_TrBlockHscb_B1_Master                         (g_dataBuffer_R2_4_Master[14] & B1_13
     #define R2_MVB_4_TrBlockDoorClose_B1_Master                    (g_dataBuffer_R2_4_Master[14] & B1_14
     #define R2_MVB_4_TrBlockTwPanto_B1_Master                      (g_dataBuffer_R2_4_Master[14] & B1_15
     #define R2_MVB_4_RollBack_B1_Master                            (g_dataBuffer_R2_4_Master[14] & B1_16

     #define R2_MVB_4_LifeDiag2_U8_Master                           (g_dataBuffer_R2_4_Master[15] U8_0
     #define R2_MVB_4_Check_A2_Master                                (g_dataBuffer_R2_4_Master[15] & A2_16_17


//     (g_dataBuffer_R2_4_Slave[i] =g_dataBuffer_MVB[496+i];
      //Slave
     #define R2_MVB_4_ScuRaCommFlt_B1_Slave                  (g_dataBuffer_R2_4_Slave[0] & B1_00
     #define R2_MVB_4_ScuRbCommFlt_B1_Slave                  (g_dataBuffer_R2_4_Slave[0] & B1_01
     #define R2_MVB_4_ScuFaultMinor_B1_Slave                 (g_dataBuffer_R2_4_Slave[0] & B1_02
     #define R2_MVB_4_KtpFault_B1_Slave                      (g_dataBuffer_R2_4_Slave[0] & B1_03
     #define R2_MVB_4_KtwFault_B1_Slave                      (g_dataBuffer_R2_4_Slave[0] & B1_04
     #define R2_MVB_4_RostroAFault_B1_Slave                  (g_dataBuffer_R2_4_Slave[0] & B1_05
     #define R2_MVB_4_RostroBFault_B1_Slave                  (g_dataBuffer_R2_4_Slave[0] & B1_06
     #define R2_MVB_4_FrameFault_B1_Slave                    (g_dataBuffer_R2_4_Slave[0] & B1_07

     #define R2_MVB_4_ScuMajorFault_B1_Slave                 (g_dataBuffer_R2_4_Slave[0] & B1_10
     #define R2_MVB_4_MtbMaFault_B1_Slave                    (g_dataBuffer_R2_4_Slave[0] & B1_11
     #define R2_MVB_4_MtbPFault_B1_Slave                     (g_dataBuffer_R2_4_Slave[0] & B1_12
     #define R2_MVB_4_MtbMbFault_B1_Slave                    (g_dataBuffer_R2_4_Slave[0] & B1_13
     #define R2_MVB_4_TwNotUpFault_B1_Slave                  (g_dataBuffer_R2_4_Slave[0] & B1_14
     #define R2_MVB_4_PantoNotDownFault_B1_Slave             (g_dataBuffer_R2_4_Slave[0] & B1_15
     #define R2_MVB_4_SpeedNotZeroFault_B1_Slave             (g_dataBuffer_R2_4_Slave[0] & B1_16
     #define R2_MVB_4_ManualModeRequest_B1_Slave             (g_dataBuffer_R2_4_Slave[0] & B1_17

     #define R2_MVB_4_BcuMaMinorMismatch_B1_Slave             (g_dataBuffer_R2_4_Slave[1] & B1_00
     #define R2_MVB_4_BcuMbMinorMismatch_B1_Slave             (g_dataBuffer_R2_4_Slave[1] & B1_01
     #define R2_MVB_4_BcuPMinorMismatch_B1_Slave              (g_dataBuffer_R2_4_Slave[1] & B1_02
     #define R2_MVB_4_BcuMaMajorMismatch_B1_Slave             (g_dataBuffer_R2_4_Slave[1] & B1_03
     #define R2_MVB_4_BcuMbMajorMismatch_B1_Slave             (g_dataBuffer_R2_4_Slave[1] & B1_04
     #define R2_MVB_4_BcuPMajorMismatch_B1_Slave              (g_dataBuffer_R2_4_Slave[1] & B1_05
     #define R2_MVB_4_ShoeFault_B1_Slave                      (g_dataBuffer_R2_4_Slave[1] & B1_06
     #define R2_MVB_4_TwPumpFault_B1_Slave                    (g_dataBuffer_R2_4_Slave[1] & B1_07


     #define R2_MVB_4_Mb9f01Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[1] & B1_11
     #define R2_MVB_4_Mb7f05Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[1] & B1_12
     #define R2_MVB_4_Mb9f07Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[1] & B1_13
     #define R2_MVB_4_Mb9f10Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[1] & B1_14
     #define R2_MVB_4_Mb6f03Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[1] & B1_15
     #define R2_MVB_4_Mb8f01Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[1] & B1_16


     #define R2_MVB_4_TfcFaultCa_B1_Slave                     (g_dataBuffer_R2_4_Slave[2] & B1_01
     #define R2_MVB_4_EncoFaultCa_B1_Slave                    (g_dataBuffer_R2_4_Slave[2] & B1_02
     #define R2_MVB_4_TFCFaulCb_B1_Slave                      (g_dataBuffer_R2_4_Slave[2] & B1_03
     #define R2_MVB_4_EncoFaultCb_B1_Slave                    (g_dataBuffer_R2_4_Slave[2] & B1_04
     #define R2_MVB_4_DisDisabled_B1_Slave                    (g_dataBuffer_R2_4_Slave[2] & B1_05
     #define R2_MVB_4_DisOkey_B1_Slave                        (g_dataBuffer_R2_4_Slave[2] & B1_06
     #define R2_MVB_4_DisFail_B1_Slave                        (g_dataBuffer_R2_4_Slave[2] & B1_07

     #define R2_MVB_4_Ma8k01Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[2] & B1_11

     #define R2_MVB_4_Mb8k01Fault_B1_Slave                    (g_dataBuffer_R2_4_Slave[2] & B1_13
     #define R2_MVB_4_P8k01Fault_B1_Slave                     (g_dataBuffer_R2_4_Slave[2] & B1_14
     #define R2_MVB_4_TwUp2DwFault_B1_Slave                   (g_dataBuffer_R2_4_Slave[2] & B1_15
     #define R2_MVB_4_TwDw2UpFault_B1_Slave                   (g_dataBuffer_R2_4_Slave[2] & B1_16


     #define R2_MVB_4_PantoNotHighFault_B1_Slave              (g_dataBuffer_R2_4_Slave[3] & B1_00
     #define R2_MVB_4_PantoNotLowFault_B1_Slave               (g_dataBuffer_R2_4_Slave[3] & B1_01
     #define R2_MVB_4_HscbNotClosedFault_B1_Slave             (g_dataBuffer_R2_4_Slave[3] & B1_02
     #define R2_MVB_4_HscbNotOpenFault_B1_Slave               (g_dataBuffer_R2_4_Slave[3] & B1_03
     #define R2_MVB_4_BogieBlockMa_B1_Slave                   (g_dataBuffer_R2_4_Slave[3] & B1_13
     #define R2_MVB_4_BogieBlockP_B1_Slave                    (g_dataBuffer_R2_4_Slave[3] & B1_14
     #define R2_MVB_4_BogieBlockMb_B1_Slave                   (g_dataBuffer_R2_4_Slave[3] & B1_15




     #define R2_MVB_4_BcMaFault_B1_Slave                      (g_dataBuffer_R2_4_Slave[4] & B1_02
     #define R2_MVB_4_BcMbFault_B1_Slave                      (g_dataBuffer_R2_4_Slave[4] & B1_03
     #define R2_MVB_4_FltFrame_B1_Slave                       (g_dataBuffer_R2_4_Slave[4] & B1_04
     #define R2_MVB_4_FltRostroA_B1_Slave                     (g_dataBuffer_R2_4_Slave[4] & B1_05
     #define R2_MVB_4_FltRostroB_B1_Slave                     (g_dataBuffer_R2_4_Slave[4] & B1_06
     #define R2_MVB_4_FltShoe_B1_Slave                        (g_dataBuffer_R2_4_Slave[4] & B1_07
     #define R2_MVB_4_MvDoubleFault_B1_Slave                  (g_dataBuffer_R2_4_Slave[4] & B1_10
     #define R2_MVB_4_DirFault_B1_Slave                       (g_dataBuffer_R2_4_Slave[4] & B1_11
     #define R2_MVB_4_ApsMaFault_B1_Slave                     (g_dataBuffer_R2_4_Slave[4] & B1_13
     #define R2_MVB_4_ApsMbFault_B1_Slave                     (g_dataBuffer_R2_4_Slave[4] & B1_14

     #define R2_MVB_4_CcuSFault_B1_Slave                      (g_dataBuffer_R2_4_Slave[5] & B1_00
     #define R2_MVB_4_LcuMaSFault_B1_Slave                    (g_dataBuffer_R2_4_Slave[5] & B1_01
     #define R2_MVB_4_GtwSFault_B1_Slave                      (g_dataBuffer_R2_4_Slave[5] & B1_02
     #define R2_MVB_4_LcuMbSFault_B1_Slave                    (g_dataBuffer_R2_4_Slave[5] & B1_05
     #define R2_MVB_4_J_R2_DSx_Page_B1_Slave                   (g_dataBuffer_R2_4_Slave[5] & A2_06_07
     #define R2_MVB_4_DsdIntervention_B1_Slave                (g_dataBuffer_R2_4_Slave[5] & B1_15

     #define R2_MVB_4_Door1MaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_00_01
     #define R2_MVB_4_Door2MaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_02_03
     #define R2_MVB_4_Door3MaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_04_05
     #define R2_MVB_4_Door4MaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_06_07
     #define R2_MVB_4_Door1RaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_10_11
     #define R2_MVB_4_Door2RaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_12_13
     #define R2_MVB_4_Door3RaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_14_15
     #define R2_MVB_4_Door4RaSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[6] & A2_16_17

     #define R2_MVB_4_Door1RbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_00_01
     #define R2_MVB_4_Door2RbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_02_03
     #define R2_MVB_4_Door3RbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_04_05
     #define R2_MVB_4_Door4RbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_06_07
     #define R2_MVB_4_Door1MbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_10_11
     #define R2_MVB_4_Door2MbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_12_13
     #define R2_MVB_4_Door3MbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_14_15
     #define R2_MVB_4_Door4MbSt_A2_Slave                      (g_dataBuffer_R2_4_Slave[7] & A2_16_17


     #define R2_MVB_4_Ma9f01Fault_B1_Slave                   (g_dataBuffer_R2_4_Slave[8] & B1_01
     #define R2_MVB_4_Ma7f05Fault_B1_Slave                   (g_dataBuffer_R2_4_Slave[8] & B1_02
     #define R2_MVB_4_Ma9f07Fault_B1_Slave                   (g_dataBuffer_R2_4_Slave[8] & B1_03
     #define R2_MVB_4_Ma9f10Fault_B1_Slave                   (g_dataBuffer_R2_4_Slave[8] & B1_04
     #define R2_MVB_4_Ma6f03Fault_B1_Slave                   (g_dataBuffer_R2_4_Slave[8] & B1_05
     #define R2_MVB_4_Ma8f01Fault_B1_Slave                   (g_dataBuffer_R2_4_Slave[8] & B1_06





     #define R2_MVB_4_LeftSandFltCa_B1_Slave                   (g_dataBuffer_R2_4_Slave[10] & B1_10
     #define R2_MVB_4_RightSandFltCa_B1_Slave                  (g_dataBuffer_R2_4_Slave[10] & B1_11
     #define R2_MVB_4_LeftSandFltCb_B1_Slave                   (g_dataBuffer_R2_4_Slave[10] & B1_12
     #define R2_MVB_4_RightSandFltCb_B1_Slave                  (g_dataBuffer_R2_4_Slave[10] & B1_13

     #define R2_MVB_4_PtTwSelFaultCa_B1_Slave                  (g_dataBuffer_R2_4_Slave[11] & B1_00
     #define R2_MVB_4_ScStopStartSelFaultCa_B1_Slave           (g_dataBuffer_R2_4_Slave[11] & B1_01
     #define R2_MVB_4_PantoUpDwSelFaultCa_B1_Slave             (g_dataBuffer_R2_4_Slave[11] & B1_02
     #define R2_MVB_4_TwUpDwSelFaultCa_B1_Slave                (g_dataBuffer_R2_4_Slave[11] & B1_03
     #define R2_MVB_4_PtTwSelFaultCb_B1_Slave                  (g_dataBuffer_R2_4_Slave[11] & B1_04
     #define R2_MVB_4_ScStopStartSelFaultCb_B1_Slave           (g_dataBuffer_R2_4_Slave[11] & B1_05
     #define R2_MVB_4_PantoUpDwSelFaultCb_B1_Slave             (g_dataBuffer_R2_4_Slave[11] & B1_06
     #define R2_MVB_4_TwUpDwSelFaultCb_B1_Slave                (g_dataBuffer_R2_4_Slave[11] & B1_07





     #define R2_MVB_4_TrBlockDoorLoop_B1_Slave                     (g_dataBuffer_R2_4_Slave[14] & B1_10
     #define R2_MVB_4_TrBlockDoorEnab_B1_Slave                     (g_dataBuffer_R2_4_Slave[14] & B1_12
     #define R2_MVB_4_TrBlockHscb_B1_Slave                         (g_dataBuffer_R2_4_Slave[14] & B1_13
     #define R2_MVB_4_TrBlockDoorClose_B1_Slave                    (g_dataBuffer_R2_4_Slave[14] & B1_14
     #define R2_MVB_4_TrBlockTwPanto_B1_Slave                      (g_dataBuffer_R2_4_Slave[14] & B1_15
     #define R2_MVB_4_RollBack_B1_Slave                            (g_dataBuffer_R2_4_Slave[14] & B1_16

     #define R2_MVB_4_LifeDiag2_U8_Slave                           (g_dataBuffer_R2_4_Slave[15] U8_0
     #define R2_MVB_4_Check_A2_Slave                                (g_dataBuffer_R2_4_Slave[15] & A2_16_17






//CCU to All
//0x0fa=250    CCU_All                   //g_dataBuffer_MVB[544+i] revesel
#define CCUALL_Year_U8                   (g_dataBuffer_MVB[544+0] U8_0
#define CCUALL_Month_U8                  (g_dataBuffer_MVB[544+0] U8_1
#define CCUALL_Day_U8                    (g_dataBuffer_MVB[544+1] U8_0
#define CCUALL_Hour_U8                   (g_dataBuffer_MVB[544+1] U8_1
#define CCUALL_Minute_U8                 (g_dataBuffer_MVB[544+2] U8_0
#define CCUALL_Second_U8                 (g_dataBuffer_MVB[544+2] U8_1

#define CCUALL_TwOpen_B1                 (g_dataBuffer_MVB[544+4] & B1_10
#define CCUALL_TwClose_B1                (g_dataBuffer_MVB[544+4] & B1_11
#define CCUALL_GapCross_B1               (g_dataBuffer_MVB[544+4] & B1_12
#define CCUALL_ScChargeEn_B1             (g_dataBuffer_MVB[544+4] & B1_13
#define CCUALL_ScDischarge_B1            (g_dataBuffer_MVB[544+4] & B1_14
#define CCUALL_VehicleSpeed_U8           (g_dataBuffer_MVB[544+5] U8_0
#define CCUALL_LifeSig_U8                (g_dataBuffer_MVB[544+7] U8_0
#define CCUALL_Chk_A2                     (g_dataBuffer_MVB[544+7] & A2_16_17
#define CCUALL_TimeUpdate_B1              (g_dataBuffer_MVB[544+4] & B1_00


//BCU to CCU & CCU to BCU
//0x100=256    BCU1_CCU(P)                (g_dataBuffer_MVB[560+i]
#define BCUCCU1_P_MinorEvent_B1          (g_dataBuffer_MVB[560+0] & B1_00
#define BCUCCU1_P_MajorEvent_B1          (g_dataBuffer_MVB[560+0] & B1_01
#define BCUCCU1_P_HoldStep_B1            (g_dataBuffer_MVB[560+0] & B1_02
#define BCUCCU1_P_BrkRelease_B1          (g_dataBuffer_MVB[560+0] & B1_03
#define BCUCCU1_P_WSPOn_B1               (g_dataBuffer_MVB[560+0] & B1_06
#define BCUCCU1_P_LifeSig_U8             (g_dataBuffer_MVB[560+0] U8_1
#define BCUCCU1_P_Brking_B1              (g_dataBuffer_MVB[560+1] & B1_00
#define BCUCCU1_P_StopBrk_B1             (g_dataBuffer_MVB[560+1] & B1_01
#define BCUCCU1_P_EmegBrk_B1             (g_dataBuffer_MVB[560+1] & B1_02
#define BCUCCU1_P_SecurityBrk_B1         (g_dataBuffer_MVB[560+1] & B1_03
#define BCUCCU1_P_TrackBrkOn_B1          (g_dataBuffer_MVB[560+1] & B1_04
#define BCUCCU1_P_EDBrkOff_B1            (g_dataBuffer_MVB[560+1] & B1_05
#define BCUCCU1_P_BCU_ID_A2              (g_dataBuffer_MVB[560+1] & A2_06_07



//0x104=260    BCU2_CCU(MA)               (g_dataBuffer_MVB[624+i]
#define BCUCCU1_MA_MinorEvent_B1          (g_dataBuffer_MVB[624+0] & B1_00
#define BCUCCU1_MA_MajorEvent_B1          (g_dataBuffer_MVB[624+0] & B1_01
#define BCUCCU1_MA_HoldStep_B1            (g_dataBuffer_MVB[624+0] & B1_02
#define BCUCCU1_MA_BrkRelease_B1          (g_dataBuffer_MVB[624+0] & B1_03
#define BCUCCU1_MA_WSPOn_B1               (g_dataBuffer_MVB[624+0] & B1_06
#define BCUCCU1_MA_LifeSig_U8             (g_dataBuffer_MVB[624+0] U8_1
#define BCUCCU1_MA_Brking_B1              (g_dataBuffer_MVB[624+1] & B1_00
#define BCUCCU1_MA_StopBrk_B1             (g_dataBuffer_MVB[624+1] & B1_01
#define BCUCCU1_MA_EmegBrk_B1             (g_dataBuffer_MVB[624+1] & B1_02
#define BCUCCU1_MA_SecurityBrk_B1         (g_dataBuffer_MVB[624+1] & B1_03
#define BCUCCU1_MA_TrackBrkOn_B1          (g_dataBuffer_MVB[624+1] & B1_04
#define BCUCCU1_MA_EDBrkOff_B1            (g_dataBuffer_MVB[624+1] & B1_05
#define BCUCCU1_MA_BCU_ID_A2              (g_dataBuffer_MVB[624+1] & A2_06_07

//0x170=368    BCU3_CCU(MB)               (g_dataBuffer_MVB[672+i]
#define BCUCCU1_MB_MinorEvent_B1          (g_dataBuffer_MVB[672+0] & B1_00
#define BCUCCU1_MB_MajorEvent_B1          (g_dataBuffer_MVB[672+0] & B1_01
#define BCUCCU1_MB_HoldStep_B1            (g_dataBuffer_MVB[672+0] & B1_02
#define BCUCCU1_MB_BrkRelease_B1          (g_dataBuffer_MVB[672+0] & B1_03
#define BCUCCU1_MB_WSPOn_B1               (g_dataBuffer_MVB[672+0] & B1_06
#define BCUCCU1_MB_LifeSig_U8             (g_dataBuffer_MVB[672+0] U8_1
#define BCUCCU1_MB_Brking_B1              (g_dataBuffer_MVB[672+1] & B1_00
#define BCUCCU1_MB_StopBrk_B1             (g_dataBuffer_MVB[672+1] & B1_01
#define BCUCCU1_MB_EmegBrk_B1             (g_dataBuffer_MVB[672+1] & B1_02
#define BCUCCU1_MB_SecurityBrk_B1         (g_dataBuffer_MVB[672+1] & B1_03
#define BCUCCU1_MB_TrackBrkOn_B1          (g_dataBuffer_MVB[672+1] & B1_04
#define BCUCCU1_MB_EDBrkOff_B1            (g_dataBuffer_MVB[672+1] & B1_05
#define BCUCCU1_MB_BCU_ID_A2              (g_dataBuffer_MVB[672+1] & A2_06_07

      //0x101=257    BCU1_CCU(P)                (g_dataBuffer_MVB[576+i]
#define BCUCCU2_P_SwVersion_U16           Change_BigEen(g_dataBuffer_MVB[576+10])

      //0x105=261    BCU2_CCU(MA)               (g_dataBuffer_MVB[640+i]
#define BCUCCU2_MA_SwVersion_U16           Change_BigEen(g_dataBuffer_MVB[640+10])

      //0x171=369    BCU3_CCU(MB)               (g_dataBuffer_MVB[688+i]
#define BCUCCU2_MB_SwVersion_U16           Change_BigEen(g_dataBuffer_MVB[688+10])


//0x102=258    BCU1_CCU(P)                (g_dataBuffer_MVB[592+i]
#define BCUCCU3_P_Load_U16                Change_BigEen( g_dataBuffer_MVB[592+0])

//0x103=259    BCU1_CCU(P)                (g_dataBuffer_MVB[608+i]
#define BCUCCU4_P_Speed1Standardization_U16          Change_BigEen(g_dataBuffer_MVB[608+0])
#define BCUCCU4_P_Speed2Standardization_U16          Change_BigEen(g_dataBuffer_MVB[608+1])
#define BCUCCU4_P_Speed3Standardization_U16          Change_BigEen(g_dataBuffer_MVB[608+2])
#define BCUCCU4_P_Speed4Standardization_U16          Change_BigEen(g_dataBuffer_MVB[608+3])
#define BCUCCU4_P_BrkPressure_U16                    Change_BigEen(g_dataBuffer_MVB[608+4])
#define BCUCCU4_P_BCUReferSpeed_U16                  Change_BigEen(g_dataBuffer_MVB[608+5])
#define BCUCCU4_P_ActualEHBrkForce_U16               Change_BigEen(g_dataBuffer_MVB[608+6])


//0x107=263    BCU2_CCU(MA)               (g_dataBuffer_MVB[656+i]
#define BCUCCU4_MA_Speed1Standardization_U16          Change_BigEen(g_dataBuffer_MVB[656+0])
#define BCUCCU4_MA_Speed2Standardization_U16          Change_BigEen(g_dataBuffer_MVB[656+1])
#define BCUCCU4_MA_Speed3Standardization_U16          Change_BigEen(g_dataBuffer_MVB[656+2])
#define BCUCCU4_MA_Speed4Standardization_U16          Change_BigEen(g_dataBuffer_MVB[656+3])
#define BCUCCU4_MA_BrkPressure_U16                    Change_BigEen(g_dataBuffer_MVB[656+4])
#define BCUCCU4_MA_BCUReferSpeed_U16                  Change_BigEen(g_dataBuffer_MVB[656+5])
#define BCUCCU4_MA_ActualEHBrkForce_U16               Change_BigEen(g_dataBuffer_MVB[656+6])

//0x173=371    BCU3_CCU(MB)               (g_dataBuffer_MVB[704+i]
#define BCUCCU4_MB_Speed1Standardization_U16          Change_BigEen(g_dataBuffer_MVB[704+0])
#define BCUCCU4_MB_Speed2Standardization_U16          Change_BigEen(g_dataBuffer_MVB[704+1])
#define BCUCCU4_MB_Speed3Standardization_U16          Change_BigEen(g_dataBuffer_MVB[704+2])
#define BCUCCU4_MB_Speed4Standardization_U16          Change_BigEen(g_dataBuffer_MVB[704+3])
#define BCUCCU4_MB_BrkPressure_U16                    Change_BigEen(g_dataBuffer_MVB[704+4])
#define BCUCCU4_MB_BCUReferSpeed_U16                  Change_BigEen(g_dataBuffer_MVB[704+5])
#define BCUCCU4_MB_ActualEHBrkForce_U16               Change_BigEen(g_dataBuffer_MVB[704+6])



      //0x1af=431    TCU1_CCU_4(TCU1 battery charger status)
                                                              //g_dataBuffer_MVB[1136+i] = (snkPortData1af[i]);
#define TCU1CCU_4_CBvFil_U16                  Change_BigEen(g_dataBuffer_MVB[1136+0])
#define TCU1CCU_4_CBiLin_U16                  Change_BigEen(g_dataBuffer_MVB[1136+1])
#define TCU1CCU_4_CBvBat_U16                  Change_BigEen(g_dataBuffer_MVB[1136+2])
#define TCU1CCU_4_CBiBat_U16                  Change_BigEen(g_dataBuffer_MVB[1136+3])
#define TCU1CCU_4_CBiCar_U16                  Change_BigEen(g_dataBuffer_MVB[1136+4])
#define TCU1CCU_4_CBSwProtecCode_b_U16          Change_BigEen(g_dataBuffer_MVB[1136+5])
#define TCU1CCU_4_CBHwProtecCode_U16            Change_BigEen(g_dataBuffer_MVB[1136+6])
#define TCU1CCU_4_CBSwProtecCode_a_U16          Change_BigEen(g_dataBuffer_MVB[1136+7])
#define TCU1CCU_4_CBSt_U16                    Change_BigEen(g_dataBuffer_MVB[1136+8])
#define TCU1CCU_4_CBBattChargSt_U16             Change_BigEen(g_dataBuffer_MVB[1136+9])
#define TCU1CCU_4_CBDISt_U16                    Change_BigEen((g_dataBuffer_MVB[1136+10])
#define TCU1CCU_4_CBEnerg_U16                 Change_BigEen(g_dataBuffer_MVB[1136+11])
#define TCU1CCU_4_tBatt_S16                 (int16_t)Change_BigEen( g_dataBuffer_MVB[1136+12])
#define TCU1CCU_4_ActiveSignal_U8             (g_dataBuffer_MVB[1136+15] U8_0
#define TCU1CCU_4_Chk_A2                       (g_dataBuffer_MVB[1136+15] & A2_16_17

      //0x1b0=432    TCU2_CCU_4(TCU2 battery charger status)
                                                              //g_dataBuffer_MVB[1152+i] = (snkPortData1b0[i]);
#define TCU2CCU_4_CBvFil_U16                  Change_BigEen(g_dataBuffer_MVB[1152+0])
#define TCU2CCU_4_CBiLin_U16                  Change_BigEen(g_dataBuffer_MVB[1152+1])
#define TCU2CCU_4_CBvBat_U16                  Change_BigEen(g_dataBuffer_MVB[1152+2])
#define TCU2CCU_4_CBiBat_U16                  Change_BigEen(g_dataBuffer_MVB[1152+3])
#define TCU2CCU_4_CBiCar_U16                  Change_BigEen(g_dataBuffer_MVB[1152+4])
#define TCU2CCU_4_CBSwProtecCode_b_U16          Change_BigEen(g_dataBuffer_MVB[1152+5])
#define TCU2CCU_4_CBHwProtecCode_U16            Change_BigEen(g_dataBuffer_MVB[1152+6])
#define TCU2CCU_4_CBSwProtecCode_a_U16          Change_BigEen(g_dataBuffer_MVB[1152+7])
#define TCU2CCU_4_CBSt_U16                    Change_BigEen(g_dataBuffer_MVB[1152+8])
#define TCU2CCU_4_CBBattChargSt_U16             Change_BigEen(g_dataBuffer_MVB[1152+9])
#define TCU2CCU_4_CBDISt_U16                    Change_BigEen(g_dataBuffer_MVB[1152+10])
#define TCU2CCU_4_CBEnerg_U16                 Change_BigEen(g_dataBuffer_MVB[1152+11])
#define TCU2CCU_4_tBatt_S16                 (int16_t)Change_BigEen( g_dataBuffer_MVB[1152+12])
#define TCU2CCU_4_ActiveSignal_U8             (g_dataBuffer_MVB[1152+15] U8_0
#define TCU2CCU_4_Chk_A2                       (g_dataBuffer_MVB[1152+15] & A2_16_17

      //0x1b1=433    TCU3_CCU_4(TCU3 battery charger status)
                                                              //g_dataBuffer_MVB[1168+i] = (snkPortData1b1[i]);
#define TCU3CCU_4_CBvFil_U16                  Change_BigEen(g_dataBuffer_MVB[1168+0])
#define TCU3CCU_4_CBiLin_U16                  Change_BigEen(g_dataBuffer_MVB[1168+1])
#define TCU3CCU_4_CBvBat_U16                  Change_BigEen(g_dataBuffer_MVB[1168+2])
#define TCU3CCU_4_CBiBat_U16                  Change_BigEen(g_dataBuffer_MVB[1168+3])
#define TCU3CCU_4_CBiCar_U16                  Change_BigEen(g_dataBuffer_MVB[1168+4])
#define TCU3CCU_4_CBSwProtecCode_b_U16          Change_BigEen(g_dataBuffer_MVB[1168+5])
#define TCU3CCU_4_CBHwProtecCode_U16            Change_BigEen(g_dataBuffer_MVB[1168+6])
#define TCU3CCU_4_CBSwProtecCode_a_U16          Change_BigEen(g_dataBuffer_MVB[1168+7])
#define TCU3CCU_4_CBSt_U16                    Change_BigEen(g_dataBuffer_MVB[1168+8])
#define TCU3CCU_4_CBBattChargSt_U16             Change_BigEen(g_dataBuffer_MVB[1168+9])
#define TCU3CCU_4_CBDISt_U16                    Change_BigEen(g_dataBuffer_MVB[1168+10])
#define TCU3CCU_4_CBEnerg_U16                 Change_BigEen(g_dataBuffer_MVB[1168+11])
#define TCU3CCU_4_tBatt_S16                 (int16_t)Change_BigEen( g_dataBuffer_MVB[1168+12])
#define TCU3CCU_4_ActiveSignal_U8             (g_dataBuffer_MVB[1168+15] U8_0
#define TCU3CCU_4_Chk_A2                       (g_dataBuffer_MVB[1168+15] & A2_16_17
      //0x1b2=434    TCU4_CCU_4(TCU4 battery charger status)
                                                              //g_dataBuffer_MVB[1184+i] = (snkPortData1b2[i]);
#define TCU4CCU_4_CBvFil_U16                  Change_BigEen(g_dataBuffer_MVB[1184+0])
#define TCU4CCU_4_CBiLin_U16                  Change_BigEen(g_dataBuffer_MVB[1184+1])
#define TCU4CCU_4_CBvBat_U16                  Change_BigEen(g_dataBuffer_MVB[1184+2])
#define TCU4CCU_4_CBiBat_U16                  Change_BigEen(g_dataBuffer_MVB[1184+3])
#define TCU4CCU_4_CBiCar_U16                  Change_BigEen(g_dataBuffer_MVB[1184+4])
#define TCU4CCU_4_CBSwProtecCode_b_U16          Change_BigEen(g_dataBuffer_MVB[1184+5])
#define TCU4CCU_4_CBHwProtecCode_U16            Change_BigEen(g_dataBuffer_MVB[1184+6])
#define TCU4CCU_4_CBSwProtecCode_a_U16          Change_BigEen(g_dataBuffer_MVB[1184+7])
#define TCU4CCU_4_CBSt_U16                    Change_BigEen(g_dataBuffer_MVB[1184+8])
#define TCU4CCU_4_CBBattChargSt_U16             Change_BigEen(g_dataBuffer_MVB[1184+9])
#define TCU4CCU_4_CBDISt_U16                    Change_BigEen(g_dataBuffer_MVB[1184+10])
#define TCU4CCU_4_CBEnerg_U16                 Change_BigEen(g_dataBuffer_MVB[1184+11])
#define TCU4CCU_4_tBatt_S16                 (int16_t)Change_BigEen( g_dataBuffer_MVB[1184+12])
#define TCU4CCU_4_ActiveSignal_U8             (g_dataBuffer_MVB[1184+15] U8_0
#define TCU4CCU_4_Chk_A2                       (g_dataBuffer_MVB[1184+15] & A2_16_17




      //0x1b9=441    TCU1_CCU_5(TCU1 auxiliary convertor status)
                                                              //g_dataBuffer_MVB[1200+i] = (snkPortData1b9[i]);
#define TCU1CCU_5_IVvFil_U16                Change_BigEen(g_dataBuffer_MVB[1200+0])
#define TCU1CCU_5_IViLin_U16                Change_BigEen(g_dataBuffer_MVB[1200+1])
#define TCU1CCU_5_IVi2uRMS_U16              Change_BigEen(g_dataBuffer_MVB[1200+2])
#define TCU1CCU_5_IVfout_U16                Change_BigEen(g_dataBuffer_MVB[1200+3])
#define TCU1CCU_5_IVv2uRMS_U16              Change_BigEen(g_dataBuffer_MVB[1200+4])
#define TCU1CCU_5_IVHwProtecCode_U16        Change_BigEen(g_dataBuffer_MVB[1200+5])
#define TCU1CCU_5_IVSt_U16                  Change_BigEen(g_dataBuffer_MVB[1200+6])
#define TCU1CCU_5_IVEner_U16                Change_BigEen(g_dataBuffer_MVB[1200+7])
#define TCU1CCU_5_IVSwProtecCode_U16        Change_BigEen(g_dataBuffer_MVB[1200+8])
#define TCU1CCU_5_LifeSignal_U8             (g_dataBuffer_MVB[1200+15] U8_0
#define TCU1CCU_5_Chk_A2                     (g_dataBuffer_MVB[1200+15] & A2_16_17


      //0x1ba=442    TCU2_CCU_5(TCU2 auxiliary convertor status)
                                                              //g_dataBuffer_MVB[1216+i] = (snkPortData1ba[i]);
#define TCU2CCU_5_IVvFil_U16                Change_BigEen(g_dataBuffer_MVB[1216+0])
#define TCU2CCU_5_IViLin_U16               Change_BigEen( g_dataBuffer_MVB[1216+1])
#define TCU2CCU_5_IVi2uRMS_U16              Change_BigEen(g_dataBuffer_MVB[1216+2])
#define TCU2CCU_5_IVfout_U16                Change_BigEen(g_dataBuffer_MVB[1216+3])
#define TCU2CCU_5_IVv2uRMS_U16              Change_BigEen(g_dataBuffer_MVB[1216+4])
#define TCU2CCU_5_IVHwProtecCode_U16        Change_BigEen(g_dataBuffer_MVB[1216+5])
#define TCU2CCU_5_IVSt_U16                  Change_BigEen(g_dataBuffer_MVB[1216+6])
#define TCU2CCU_5_IVEner_U16                Change_BigEen(g_dataBuffer_MVB[1216+7])
#define TCU2CCU_5_IVSwProtecCode_U16        Change_BigEen(g_dataBuffer_MVB[1216+8])
#define TCU2CCU_5_LifeSignal_U8             (g_dataBuffer_MVB[1216+15] U8_0
#define TCU2CCU_5_Chk_A2                     (g_dataBuffer_MVB[1216+15] & A2_16_17

      //0x1bb=443    TCU3_CCU_5(TCU3 auxiliary convertor status)
                                                              //g_dataBuffer_MVB[1232+i] = (snkPortData1bb[i]);
#define TCU3CCU_5_IVvFil_U16                Change_BigEen(g_dataBuffer_MVB[1232+0])
#define TCU3CCU_5_IViLin_U16                Change_BigEen(g_dataBuffer_MVB[1232+1])
#define TCU3CCU_5_IVi2uRMS_U16              Change_BigEen(g_dataBuffer_MVB[1232+2])
#define TCU3CCU_5_IVfout_U16                Change_BigEen(g_dataBuffer_MVB[1232+3])
#define TCU3CCU_5_IVv2uRMS_U16              Change_BigEen(g_dataBuffer_MVB[1232+4])
#define TCU3CCU_5_IVHwProtecCode_U16        Change_BigEen(g_dataBuffer_MVB[1232+5])
#define TCU3CCU_5_IVSt_U16                  Change_BigEen(g_dataBuffer_MVB[1232+6])
#define TCU3CCU_5_IVEner_U16                Change_BigEen(g_dataBuffer_MVB[1232+7])
#define TCU3CCU_5_IVSwProtecCode_U16        Change_BigEen(g_dataBuffer_MVB[1232+8])
#define TCU3CCU_5_LifeSignal_U8             (g_dataBuffer_MVB[1232+15] U8_0
#define TCU3CCU_5_Chk_A2                     (g_dataBuffer_MVB[1232+15] & A2_16_17

      //0x1bc=444    TCU4_CCU_5(TCU4 auxiliary convertor status)
                                                              //g_dataBuffer_MVB[1248+i] = (snkPortData1bc[i]);
#define TCU4CCU_5_IVvFil_U16               Change_BigEen( g_dataBuffer_MVB[1248+0])
#define TCU4CCU_5_IViLin_U16               Change_BigEen( g_dataBuffer_MVB[1248+1])
#define TCU4CCU_5_IVi2uRMS_U16             Change_BigEen( g_dataBuffer_MVB[1248+2])
#define TCU4CCU_5_IVfout_U16               Change_BigEen( g_dataBuffer_MVB[1248+3])
#define TCU4CCU_5_IVv2uRMS_U16             Change_BigEen( g_dataBuffer_MVB[1248+4])
#define TCU4CCU_5_IVHwProtecCode_U16       Change_BigEen( g_dataBuffer_MVB[1248+5])
#define TCU4CCU_5_IVSt_U16                 Change_BigEen( g_dataBuffer_MVB[1248+6])
#define TCU4CCU_5_IVEner_U16               Change_BigEen( g_dataBuffer_MVB[1248+7])
#define TCU4CCU_5_IVSwProtecCode_U16       Change_BigEen( g_dataBuffer_MVB[1248+8])
#define TCU4CCU_5_LifeSignal_U8             (g_dataBuffer_MVB[1248+15] U8_0
#define TCU4CCU_5_Chk_A2                     (g_dataBuffer_MVB[1248+15] & A2_16_17

      //0x2bc=700   PA1_(PIDS1/PIDS2/IDU)(Status from PA1)
                                                              //g_dataBuffer_MVB[1984+i] = (snkPortData2bc[i]);

#define PA1All_Ctrlor_LifeSignal_U16         Change_BigEen( g_dataBuffer_MVB[1984+0])
#define PA1All_PA_SwVersion_U8                (g_dataBuffer_MVB[1984+1] U8_0
#define PA1All_Trav_Infor_B1                  (g_dataBuffer_MVB[1984+1] & B1_10
#define PA1All_StopThisStation_B1             (g_dataBuffer_MVB[1984+1] & B1_11
#define PA1All_StopNextStation_B1             (g_dataBuffer_MVB[1984+1] & B1_12
#define PA1All_ArriveStation_B1               (g_dataBuffer_MVB[1984+1] & B1_13
#define PA1All_RSDoorOpen_B1                  (g_dataBuffer_MVB[1984+1] & B1_14
#define PA1All_LSDoorOpen_B1                  (g_dataBuffer_MVB[1984+1] & B1_15
#define PA1All_SndLitAlarm_B1                 (g_dataBuffer_MVB[1984+1] & B1_16
#define PA1All_StartStationID_U8              (g_dataBuffer_MVB[1984+2] U8_0
#define PA1All_EndStationID_U8                (g_dataBuffer_MVB[1984+2] U8_1

#define PA1All_EmegBrCID_U8                   (g_dataBuffer_MVB[1984+4] U8_1
#define PA1All_Master_B1                      (g_dataBuffer_MVB[1984+5] & B1_00

#define PA1All_ArrivalStationID_U8            (g_dataBuffer_MVB[1984+5] U8_1
#define PA1All_NextStationID_U8               (g_dataBuffer_MVB[1984+6] U8_0

#define PA1All_PECU1_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_10
#define PA1All_PECU2_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_11
#define PA1All_PECU3_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_12
#define PA1All_PECU4_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_13
#define PA1All_PECU5_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_14
#define PA1All_PECU6_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_15
#define PA1All_PECU7_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_16
#define PA1All_PECU8_Calling_B1               (g_dataBuffer_MVB[1984+6] & B1_17







      //0x2bd=701   PA2_(PIDS1/PIDS2/IDU)(Status from PA2)
                                                              //g_dataBuffer_MVB[2000+i] = (snkPortData2bd[i]);
#define PA2All_PA_SwVersion_U8                (g_dataBuffer_MVB[2000+1] U8_0
#define PA2All_ArrivalStationID_U8            (g_dataBuffer_MVB[2000+5] U8_1
#define PA2All_NextStationID_U8               (g_dataBuffer_MVB[2000+6] U8_0
#define PA2All_Master_B1                      (g_dataBuffer_MVB[2000+5] & B1_00

#define PA2All_PECU1_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_10
#define PA2All_PECU2_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_11
#define PA2All_PECU3_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_12
#define PA2All_PECU4_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_13
#define PA2All_PECU5_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_14
#define PA2All_PECU6_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_15
#define PA2All_PECU7_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_16
#define PA2All_PECU8_Calling_B1               (g_dataBuffer_MVB[2000+6] & B1_17


      //0x1f5=501   SUPC(RA)_IDU(RA SuperCap Status) 32 1024
#define SC1ALL_iPantoLatch_I16              (int16_t)Change_BigEen( g_dataBuffer_MVB[2016+0])
#define SC1ALL_iSc_I16                      (int16_t)Change_BigEen( g_dataBuffer_MVB[2016+1])
#define SC1ALL_vFil_I16                     (int16_t)Change_BigEen( g_dataBuffer_MVB[2016+2])
#define SC1ALL_vSc_I16                      (int16_t)Change_BigEen( g_dataBuffer_MVB[2016+3])

#define SC1ALL_stSca_U16                     Change_BigEen( g_dataBuffer_MVB[2016+4])

#define SC1ALL_stSca_ScChopper_B1                  (g_dataBuffer_MVB[2016+4] & B1_00
#define SC1ALL_stSca_LinePresent_B1                (g_dataBuffer_MVB[2016+4] & B1_02
#define SC1ALL_stSca_precharge_B1                  (g_dataBuffer_MVB[2016+4] & B1_03
#define SC1ALL_stSca_ccfca_B1                      (g_dataBuffer_MVB[2016+4] & B1_04
#define SC1ALL_stSca_cpca_B1                       (g_dataBuffer_MVB[2016+4] & B1_05
#define SC1ALL_stSca_irca_B1                       (g_dataBuffer_MVB[2016+4] & B1_06
#define SC1ALL_stSca_apir_B1                       (g_dataBuffer_MVB[2016+4] & B1_07
#define SC1ALL_stSca_autoEscl_B1                   (g_dataBuffer_MVB[2016+4] & B1_10
#define SC1ALL_stSca_pswirVero_B1                  (g_dataBuffer_MVB[2016+4] & B1_11
#define SC1ALL_stSca_cscca_B1                      (g_dataBuffer_MVB[2016+4] & B1_13
#define SC1ALL_stSca_FaultClassLev_A2              (g_dataBuffer_MVB[2016+4] & A2_14_15
#define SC1ALL_stSca_civof_B1                      (g_dataBuffer_MVB[2016+4] & B1_16

#define SC1ALL_stScb_U16                      Change_BigEen(g_dataBuffer_MVB[2016+5])
#define SC1ALL_stScb_chccf_B1                      (g_dataBuffer_MVB[2016+5] & B1_00
#define SC1ALL_stScb_chcp_B1                       (g_dataBuffer_MVB[2016+5] & B1_01
#define SC1ALL_stScb_pswirServ_B1                  (g_dataBuffer_MVB[2016+5] & B1_02
#define SC1ALL_stScb_tswsc_B1                      (g_dataBuffer_MVB[2016+5] & B1_04
#define SC1ALL_stScb_chcsc_B1                      (g_dataBuffer_MVB[2016+5] & B1_05
//#define SC1ALL_stScb__B1                       (g_dataBuffer_MVB[2016+5] & B1_06
//#define SC1ALL_stScb__B1                       (g_dataBuffer_MVB[2016+5] & B1_07
#define SC1ALL_stScb_caricaSc_B1                   (g_dataBuffer_MVB[2016+5] & B1_10
#define SC1ALL_stScb_scaricaSc_B1                  (g_dataBuffer_MVB[2016+5] & B1_11
#define SC1ALL_stScb_marciaAuto_B1                 (g_dataBuffer_MVB[2016+5] & B1_13
//#define SC1ALL_stScb__A2              (g_dataBuffer_MVB[2016+5] & A2_14_15
//#define SC1ALL_stScb__B1                      (g_dataBuffer_MVB[2016+5] & B1_16

#define SC1ALL_cPHWa_U8                      (g_dataBuffer_MVB[2016+6] U8_0
#define SC1ALL_cPSWa_U8                      (g_dataBuffer_MVB[2016+6] U8_1
#define SC1ALL_cPSWd_U16                     Change_BigEen( g_dataBuffer_MVB[2016+7])
#define SC1ALL_Status11_U8                   (g_dataBuffer_MVB[2016+8] U8_0
#define SC1ALL_Status12_U8                   (g_dataBuffer_MVB[2016+8] U8_1
#define SC1ALL_Status21_U8                   (g_dataBuffer_MVB[2016+9] U8_0
#define SC1ALL_Status22_U8                   (g_dataBuffer_MVB[2016+9] U8_1
#define SC1ALL_Status31_U8                   (g_dataBuffer_MVB[2016+10] U8_0
#define SC1ALL_Status32_U8                   (g_dataBuffer_MVB[2016+10] U8_1
#define SC1ALL_Status41_U8                   (g_dataBuffer_MVB[2016+11] U8_0
#define SC1ALL_Status42_U8                   (g_dataBuffer_MVB[2016+11] U8_1

#define SC1ALL_EnCons_U16                    Change_BigEen( g_dataBuffer_MVB[2016+12])
#define SC1ALL_EnReturn_U16                   Change_BigEen(g_dataBuffer_MVB[2016+13])
#define SC1ALL_Capacity_U8                   (g_dataBuffer_MVB[2016+14] U8_0
#define SC1ALL_Life_E4                       (g_dataBuffer_MVB[2016+15] & E4_10_13
#define SC1ALL_chk_A2                        (g_dataBuffer_MVB[2016+15] & A2_16_17




      //0x1f6=502   SUPC(RB)_IDU(RA SuperCap Status) 32 1024
#define SC2ALL_iPantoLatch_I16              (int16_t)Change_BigEen( g_dataBuffer_MVB[2032+0])
#define SC2ALL_iSc_I16                      (int16_t)Change_BigEen( g_dataBuffer_MVB[2032+1])
#define SC2ALL_vFil_I16                     (int16_t)Change_BigEen( g_dataBuffer_MVB[2032+2])
#define SC2ALL_vSc_I16                      (int16_t)Change_BigEen( g_dataBuffer_MVB[2032+3])

#define SC2ALL_stSca_U16                     Change_BigEen( g_dataBuffer_MVB[2032+4])

#define SC2ALL_stSca_ScChopper_B1                  (g_dataBuffer_MVB[2032+4] & B1_00
#define SC2ALL_stSca_LinePresent_B1                (g_dataBuffer_MVB[2032+4] & B1_02
#define SC2ALL_stSca_precharge_B1                  (g_dataBuffer_MVB[2032+4] & B1_03
#define SC2ALL_stSca_ccfca_B1                      (g_dataBuffer_MVB[2032+4] & B1_04
#define SC2ALL_stSca_cpca_B1                       (g_dataBuffer_MVB[2032+4] & B1_05
#define SC2ALL_stSca_irca_B1                       (g_dataBuffer_MVB[2032+4] & B1_06
#define SC2ALL_stSca_apir_B1                       (g_dataBuffer_MVB[2032+4] & B1_07
#define SC2ALL_stSca_autoEscl_B1                   (g_dataBuffer_MVB[2032+4] & B1_10
#define SC2ALL_stSca_pswirVero_B1                  (g_dataBuffer_MVB[2032+4] & B1_11
#define SC2ALL_stSca_cscca_B1                      (g_dataBuffer_MVB[2032+4] & B1_13
#define SC2ALL_stSca_FaultClassLev_A2              (g_dataBuffer_MVB[2032+4] & A2_14_15
#define SC2ALL_stSca_civof_B1                      (g_dataBuffer_MVB[2032+4] & B1_16

#define SC2ALL_stScb_U16                     Change_BigEen( g_dataBuffer_MVB[2032+5])

#define SC2ALL_stScb_chccf_B1                      (g_dataBuffer_MVB[2032+5] & B1_00
#define SC2ALL_stScb_chcp_B1                       (g_dataBuffer_MVB[2032+5] & B1_01
#define SC2ALL_stScb_pswirServ_B1                  (g_dataBuffer_MVB[2032+5] & B1_02
#define SC2ALL_stScb_tswsc_B1                      (g_dataBuffer_MVB[2032+5] & B1_04
#define SC2ALL_stScb_chcsc_B1                      (g_dataBuffer_MVB[2032+5] & B1_05
//#define SC2ALL_stScb__B1                       (g_dataBuffer_MVB[2032+5] & B1_06
//#define SC2ALL_stScb__B1                       (g_dataBuffer_MVB[2032+5] & B1_07
#define SC2ALL_stScb_caricaSc_B1                   (g_dataBuffer_MVB[2032+5] & B1_10
#define SC2ALL_stScb_scaricaSc_B1                  (g_dataBuffer_MVB[2032+5] & B1_11
#define SC2ALL_stScb_marciaAuto_B1                 (g_dataBuffer_MVB[2032+5] & B1_13
//#define SC2ALL_stScb__A2              (g_dataBuffer_MVB[2032+5] & A2_14_15
//#define SC2ALL_stScb__B1                      (g_dataBuffer_MVB[2032+5] & B1_16

#define SC2ALL_cPHWa_U8                      (g_dataBuffer_MVB[2032+6] U8_0
#define SC2ALL_cPSWa_U8                      (g_dataBuffer_MVB[2032+6] U8_1
#define SC2ALL_cPSWd_U16                     Change_BigEen( g_dataBuffer_MVB[2032+7])
#define SC2ALL_Status11_U8                   (g_dataBuffer_MVB[2032+8] U8_0
#define SC2ALL_Status12_U8                   (g_dataBuffer_MVB[2032+8] U8_1
#define SC2ALL_Status21_U8                   (g_dataBuffer_MVB[2032+9] U8_0
#define SC2ALL_Status22_U8                   (g_dataBuffer_MVB[2032+9] U8_1
#define SC2ALL_Status31_U8                   (g_dataBuffer_MVB[2032+10] U8_0
#define SC2ALL_Status32_U8                   (g_dataBuffer_MVB[2032+10] U8_1
#define SC2ALL_Status41_U8                   (g_dataBuffer_MVB[2032+11] U8_0
#define SC2ALL_Status42_U8                   (g_dataBuffer_MVB[2032+11] U8_1

#define SC2ALL_EnCons_U16                     Change_BigEen(g_dataBuffer_MVB[2032+12])
#define SC2ALL_EnReturn_U16                   Change_BigEen(g_dataBuffer_MVB[2032+13])
#define SC2ALL_Capacity_U8                   (g_dataBuffer_MVB[2032+14] U8_0
#define SC2ALL_Life_E4                       (g_dataBuffer_MVB[2032+15] & E4_10_13
#define SC2ALL_chk_A2                        (g_dataBuffer_MVB[2032+15] & A2_16_17



//0x101=257    BCU1_CCU(P)                (g_dataBuffer_MVB[576+i]
//0x105=261    BCU2_CCU(MA)               (g_dataBuffer_MVB[640+i]
//0x171=369    BCU3_CCU(MB)               (g_dataBuffer_MVB[688+i]



//0x177=375    BCU2_CCU(MA) for test      (g_dataBuffer_MVB[720+i] = (snkPortData177[i]);
//0x178=376    BCU1_CCU(P) for test       (g_dataBuffer_MVB[736+i] = (snkPortData178[i]);
//0x179=377    BCU3_CCU(MB) for test      (g_dataBuffer_MVB[752+i] = (snkPortData179[i]);


//0x108=264    CCU_BCU(Commands to BCU of MA,P,MB)     (g_dataBuffer_MVB[768+i] = (snkPortData108[i]);
#define CCUBCU_ByPassBCU_MA_B1            (g_dataBuffer_MVB[768] & B1_00
#define CCUBCU_ByPassBCU_MB_B1            (g_dataBuffer_MVB[768] & B1_01
#define CCUBCU_ByPassBCU_P_B1             (g_dataBuffer_MVB[768] & B1_02
#define CCUBCU_DoorLoopClose_B1           (g_dataBuffer_MVB[768] & B1_04
#define CCUBCU_LifeSignal_CCU_U8          (g_dataBuffer_MVB[768] U8_1

//0x109=265    CCU_BCU(Commands to BCU of MA,P,MB)     (g_dataBuffer_MVB[784+i] = (snkPortData109[i]);
#define CCUBCU_Security_Brake_B1            (g_dataBuffer_MVB[784] & B1_00
#define CCUBCU_Emergency_Brake_B1           (g_dataBuffer_MVB[784] & B1_01
#define CCUBCU_Braking_B1                   (g_dataBuffer_MVB[784] & B1_02
#define CCUBCU_Driving_B1                   (g_dataBuffer_MVB[784] & B1_03
#define CCUBCU_Coasting_B1                  (g_dataBuffer_MVB[784] & B1_04
#define CCUBCU_Stopping_Brake_B1            (g_dataBuffer_MVB[784] & B1_05
#define CCUBCU_EDBrakeA1_Off_B1             (g_dataBuffer_MVB[784] & B1_06
#define CCUBCU_EDBrakeA2_Off_B1             (g_dataBuffer_MVB[784] & B1_07
#define CCUBCU_EDBrakeB1_Off_B1             (g_dataBuffer_MVB[784] & B1_10
#define CCUBCU_EDBrakeB2_Off_B1             (g_dataBuffer_MVB[784] & B1_11
#define CCUBCU_TrackBrakeActive_B1          (g_dataBuffer_MVB[784] & B1_12
#define CCUBCU_EDBrakeA1_Failure_B1         (g_dataBuffer_MVB[784] & B1_13
#define CCUBCU_EDBrakeA2_Failure_B1         (g_dataBuffer_MVB[784] & B1_14
#define CCUBCU_EDBrakeB1_Failure_B1         (g_dataBuffer_MVB[784] & B1_15
#define CCUBCU_EDBrakeB2_Failure_B1         (g_dataBuffer_MVB[784] & B1_16









//0x10a=266    CCU_BCU(Commands to BCU of MA,P,MB)     (g_dataBuffer_MVB[800+i] = (snkPortData10a[i]);

//0x10b=267    TCU1_BCU//(Electric brake effort feedback of TCU1 to BCU (of MA,P,MB))
                                                        //g_dataBuffer_MVB[816+i] = (snkPortData10b[i]);


//0x10c=68    TCU2_BCU//(Electric brake effort feedback of TCU2 to BCU (of MA,P,MB))
                                                        //g_dataBuffer_MVB[832+i] = (snkPortData10c[i]);

//0x10d=269    TCU3_BCU//(Electric brake effort feedback of TCU3 to BCU (of MA,P,MB))
                                                        //g_dataBuffer_MVB[848+i] = (snkPortData10d[i]);

//0x10e=270    TCU4_BCU//(Electric brake effort feedback of TCU4 to BCU (of MA,P,MB))
                                                        //g_dataBuffer_MVB[864+i] = (snkPortData10e[i]);

//TCU to CCU & CCU to TCU
//0x12d=301    CCU_TCU1                                  (g_dataBuffer_MVB[880+i] = (snkPortData12d[i]);

#define CCU_TCU1_SpeedLimit_U8                           (g_dataBuffer_MVB[880+2] U8_0
//0x12e=302    CCU_TCU2                                  (g_dataBuffer_MVB[896+i] = (snkPortData12e[i]);
#define CCU_TCU2_SpeedLimit_U8                           (g_dataBuffer_MVB[896+2] U8_0

//0x12f=303    CCU_TCU3                                  (g_dataBuffer_MVB[912+i] = (snkPortData12f[i]);
#define CCU_TCU3_SpeedLimit_U8                           (g_dataBuffer_MVB[912+2] U8_0

//0x130=304    CCU_TCU4                                  (g_dataBuffer_MVB[928+i] = (snkPortData130[i]);
#define CCU_TCU4_SpeedLimit_U8                           (g_dataBuffer_MVB[928+2] U8_0


//0x191=401    TCU1_CCU_1(TCU1 status)                   (g_dataBuffer_MVB[944+i] = (snkPortData191[i]);

//0x192=402    TCU2_CCU_1(TCU2 status)                   (g_dataBuffer_MVB[960+i] = (snkPortData192[i]);

//0x193=403    TCU3_CCU_1(TCU3 status)                   (g_dataBuffer_MVB[976+i] = (snkPortData193[i]);

//0x194=404    TCU4_CCU_1(TCU4 status)                   (g_dataBuffer_MVB[992+i] = (snkPortData194[i]);


//0x19b=411    TCU1_CCU_2(TCU1 diagnostic codes and status)
                                                        //g_dataBuffer_MVB[1008+i] = (snkPortData19b[i]);

//0x19c=412    TCU2_CCU_2(TCU2 diagnostic codes and status)
                                                        //g_dataBuffer_MVB[1024+i] = (snkPortData19c[i]);

//0x19d=413    TCU3_CCU_2(TCU3 diagnostic codes and status)
                                                        //g_dataBuffer_MVB[1040+i] = (snkPortData19d[i]);

//0x19e=414    TCU4_CCU_2(TCU4 diagnostic codes and status)
                                                        //g_dataBuffer_MVB[1056+i] = (snkPortData19e[i]);


//0x1a5=421    TCU1_CCU_3(TCU1 analog signals)
                                                        //g_dataBuffer_MVB[1072+i] = (snkPortData1a5[i]);
#define TCU1CCU_3_Fm1A_U16                 Change_BigEen( g_dataBuffer_MVB[1072+0])
#define TCU1CCU_3_Fm2A_U16                 Change_BigEen( g_dataBuffer_MVB[1072+1])
#define TCU1CCU_3_Fm3A_U16                 Change_BigEen( g_dataBuffer_MVB[1072+2])
#define TCU1CCU_3_Fm4A_U16                 Change_BigEen( g_dataBuffer_MVB[1072+3])
#define TCU1CCU_3_FmRef_U16                Change_BigEen( g_dataBuffer_MVB[1072+8])
#define TCU1CCU_3_Veloc_U16                Change_BigEen( g_dataBuffer_MVB[1072+9])
#define TCU1CCU_3_Accel_U16                Change_BigEen( g_dataBuffer_MVB[1072+10])
#define TCU1CCU_3_Tmot1_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1072+11])
#define TCU1CCU_3_Tmot2_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1072+12])
#define TCU1CCU_3_Tmot3_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1072+13])
#define TCU1CCU_3_Tmot4_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1072+14])
#define TCU1CCU_3_Life_U8                   (g_dataBuffer_MVB[1072+15] U8_0
#define TCU1CCU_3_Chk_A2                     (g_dataBuffer_MVB[1072+15] & A2_16_17


//0x1a6=422    TCU2_CCU_3(TCU2 analog signals)
                                                        //g_dataBuffer_MVB[1088+i] = (snkPortData1a6[i]);
#define TCU2CCU_3_Fm1A_U16                  Change_BigEen(g_dataBuffer_MVB[1088+0])
#define TCU2CCU_3_Fm2A_U16                  Change_BigEen(g_dataBuffer_MVB[1088+1])
#define TCU2CCU_3_Fm3A_U16                  Change_BigEen(g_dataBuffer_MVB[1088+2])
#define TCU2CCU_3_Fm4A_U16                  Change_BigEen(g_dataBuffer_MVB[1088+3])
#define TCU2CCU_3_FmRef_U16                 Change_BigEen(g_dataBuffer_MVB[1088+8])
#define TCU2CCU_3_Veloc_U16                 Change_BigEen(g_dataBuffer_MVB[1088+9])
#define TCU2CCU_3_Accel_U16                 Change_BigEen(g_dataBuffer_MVB[1088+10]
#define TCU2CCU_3_Tmot1_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1088+11])
#define TCU2CCU_3_Tmot2_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1088+12])
#define TCU2CCU_3_Tmot3_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1088+13])
#define TCU2CCU_3_Tmot4_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1088+14])
#define TCU2CCU_3_Life_U8                   (g_dataBuffer_MVB[1088+15] U8_0
#define TCU2CCU_3_Chk_A2                     (g_dataBuffer_MVB[1088+15] & A2_16_17

//0x1a7=423    TCU3_CCU_3(TCU3 analog signals)
                                                        //g_dataBuffer_MVB[1104+i] = (snkPortData1a7[i]);
#define TCU3CCU_3_Fm1A_U16                  Change_BigEen(g_dataBuffer_MVB[1104+0])
#define TCU3CCU_3_Fm2A_U16                  Change_BigEen(g_dataBuffer_MVB[1104+1])
#define TCU3CCU_3_Fm3A_U16                  Change_BigEen(g_dataBuffer_MVB[1104+2])
#define TCU3CCU_3_Fm4A_U16                  Change_BigEen(g_dataBuffer_MVB[1104+3])
#define TCU3CCU_3_FmRef_U16                 Change_BigEen(g_dataBuffer_MVB[1104+8])
#define TCU3CCU_3_Veloc_U16                 Change_BigEen(g_dataBuffer_MVB[1104+9])
#define TCU3CCU_3_Accel_U16                 Change_BigEen(g_dataBuffer_MVB[1104+10])
#define TCU3CCU_3_Tmot1_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1104+11])
#define TCU3CCU_3_Tmot2_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1104+12])
#define TCU3CCU_3_Tmot3_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1104+13])
#define TCU3CCU_3_Tmot4_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1104+14])
#define TCU3CCU_3_Life_U8                   (g_dataBuffer_MVB[1104+15] U8_0
#define TCU3CCU_3_Chk_A2                     (g_dataBuffer_MVB[1104+15] & A2_16_17


//0x1a8=424    TCU4_CCU_3(TCU4 analog signals)
                                                        //(g_dataBuffer_MVB[1120+i] = (snkPortData1a8[i]);

#define TCU4CCU_3_Fm1A_U16                  Change_BigEen(g_dataBuffer_MVB[1120+0])
#define TCU4CCU_3_Fm2A_U16                  Change_BigEen(g_dataBuffer_MVB[1120+1])
#define TCU4CCU_3_Fm3A_U16                  Change_BigEen(g_dataBuffer_MVB[1120+2])
#define TCU4CCU_3_Fm4A_U16                  Change_BigEen(g_dataBuffer_MVB[1120+3])
#define TCU4CCU_3_FmRef_U16                 Change_BigEen(g_dataBuffer_MVB[1120+8])
#define TCU4CCU_3_Veloc_U16                 Change_BigEen(g_dataBuffer_MVB[1120+9])
#define TCU4CCU_3_Accel_U16                 Change_BigEen(g_dataBuffer_MVB[1120+10])
#define TCU4CCU_3_Tmot1_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1120+11])
#define TCU4CCU_3_Tmot2_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1120+12])
#define TCU4CCU_3_Tmot3_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1120+13])
#define TCU4CCU_3_Tmot4_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1120+14])
#define TCU4CCU_3_Life_U8                   (g_dataBuffer_MVB[1120+15] U8_0
#define TCU4CCU_3_Chk_A2                    (g_dataBuffer_MVB[1120+15] & A2_16_17



//0x1c3=451    TCU1_CCU_5(TCU1 data and time information)
                                                        //g_dataBuffer_MVB[1264+i] = (snkPortData1c3[i]);

#define TCU1CCU_5_avgAcc40_U8                           (g_dataBuffer_MVB[1264+0] U8_0
#define TCU1CCU_5_avgAcc70_U8                           (g_dataBuffer_MVB[1264+0] U8_1
#define TCU1CCU_5_StartSpeed_U8                         (g_dataBuffer_MVB[1264+1] U8_0
#define TCU1CCU_5_avgAccBrake_U8                        (g_dataBuffer_MVB[1264+1] U8_1
#define TCU1CCU_5_Distance_U16                           Change_BigEen(g_dataBuffer_MVB[1264+2])
#define TCU1CCU_5_StartMan_U8                           (g_dataBuffer_MVB[1264+3] U8_0
#define TCU1CCU_5_BrakeMode_E4                          (g_dataBuffer_MVB[1264+3] & E4_10_13
#define TCU1CCU_5_TestMode_A2                           (g_dataBuffer_MVB[1264+3] & A2_14_15
#define TCU1CCU_5_TestStatus_A2                         (g_dataBuffer_MVB[1264+3] & A2_16_17
#define TCU1CCU_5_Chk_A2                                (g_dataBuffer_MVB[1264+7] & A2_16_17




//0x1c4=452    TCU2_CCU_5(TCU2 data and time information)
                                                        //g_dataBuffer_MVB[1280+i] = (snkPortData1c4[i]);
#define TCU2CCU_5_avgAcc40_U8                           (g_dataBuffer_MVB[1280+0] U8_0
#define TCU2CCU_5_avgAcc70_U8                           (g_dataBuffer_MVB[1280+0] U8_1
#define TCU2CCU_5_StartSpeed_U8                         (g_dataBuffer_MVB[1280+1] U8_0
#define TCU2CCU_5_avgAccBrake_U8                        (g_dataBuffer_MVB[1280+1] U8_1
#define TCU2CCU_5_Distance_U16                           Change_BigEen(g_dataBuffer_MVB[1280+2])
#define TCU2CCU_5_StartMan_U8                           (g_dataBuffer_MVB[1280+3] U8_0
#define TCU2CCU_5_BrakeMode_E4                          (g_dataBuffer_MVB[1280+3] & E4_10_13
#define TCU2CCU_5_TestMode_A2                           (g_dataBuffer_MVB[1280+3] & A2_14_15
#define TCU2CCU_5_TestStatus_A2                         (g_dataBuffer_MVB[1280+3] & A2_16_17
#define TCU2CCU_5_Chk_A2                                (g_dataBuffer_MVB[1280+7] & A2_16_17


//0x1c5=453    TCU3_CCU_5(TCU3 data and time information)
                                                        //g_dataBuffer_MVB[1296+i] = (snkPortData1c5[i]);
#define TCU3CCU_5_avgAcc40_U8                           (g_dataBuffer_MVB[1296+0] U8_0
#define TCU3CCU_5_avgAcc70_U8                           (g_dataBuffer_MVB[1296+0] U8_1
#define TCU3CCU_5_StartSpeed_U8                         (g_dataBuffer_MVB[1296+1] U8_0
#define TCU3CCU_5_avgAccBrake_U8                        (g_dataBuffer_MVB[1296+1] U8_1
#define TCU3CCU_5_Distance_U16                           Change_BigEen(g_dataBuffer_MVB[1296+2])
#define TCU3CCU_5_StartMan_U8                           (g_dataBuffer_MVB[1296+3] U8_0
#define TCU3CCU_5_BrakeMode_E4                          (g_dataBuffer_MVB[1296+3] & E4_10_13
#define TCU3CCU_5_TestMode_A2                           (g_dataBuffer_MVB[1296+3] & A2_14_15
#define TCU3CCU_5_TestStatus_A2                         (g_dataBuffer_MVB[1296+3] & A2_16_17
#define TCU3CCU_5_Chk_A2                                (g_dataBuffer_MVB[1296+7] & A2_16_17

//0x1c6=454    TCU4_CCU_5(TCU4 data and time information)
                                                        //g_dataBuffer_MVB[1312+i] = (snkPortData1c6[i]);

#define TCU4CCU_5_avgAcc40_U8                           (g_dataBuffer_MVB[1312+0] U8_0
#define TCU4CCU_5_avgAcc70_U8                           (g_dataBuffer_MVB[1312+0] U8_1
#define TCU4CCU_5_StartSpeed_U8                         (g_dataBuffer_MVB[1312+1] U8_0
#define TCU4CCU_5_avgAccBrake_U8                        (g_dataBuffer_MVB[1312+1] U8_1
#define TCU4CCU_5_Distance_U16                           Change_BigEen(g_dataBuffer_MVB[1312+2])
#define TCU4CCU_5_StartMan_U8                           (g_dataBuffer_MVB[1312+3] U8_0
#define TCU4CCU_5_BrakeMode_E4                          (g_dataBuffer_MVB[1312+3] & E4_10_13
#define TCU4CCU_5_TestMode_A2                           (g_dataBuffer_MVB[1312+3] & A2_14_15
#define TCU4CCU_5_TestStatus_A2                         (g_dataBuffer_MVB[1312+3] & A2_16_17
#define TCU4CCU_5_Chk_A2                                (g_dataBuffer_MVB[1312+7] & A2_16_17

//0x1cd=461    TCU1_CCU_6(TCU1 analog signals)
                                                        //g_dataBuffer_MVB[1328+i] = (snkPortData1cd[i]);
#define TCU1CCU_6_FilterVolt_S16                 (int16_t)Change_BigEen( g_dataBuffer_MVB[1328+0])
#define TCU1CCU_6_LineVolt_S16                   (int16_t)Change_BigEen( g_dataBuffer_MVB[1328+1])
#define TCU1CCU_6_LineCurrent_S16                (int16_t)Change_BigEen( g_dataBuffer_MVB[1328+2])
#define TCU1CCU_6_MotorCurrent_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1328+3])
#define TCU1CCU_6_BrkChopperCur_S16              (int16_t)Change_BigEen( g_dataBuffer_MVB[1328+4])
#define TCU1CCU_6_InverterFreq_U16               Change_BigEen( g_dataBuffer_MVB[1328+6])
#define TCU1CCU_6_ModulatRatio_U16               Change_BigEen( g_dataBuffer_MVB[1328+7])
#define TCU1CCU_6_Nimp_U16                       Change_BigEen( g_dataBuffer_MVB[1328+8])
#define TCU1CCU_6_ChopperDutyCyc_U16             Change_BigEen( g_dataBuffer_MVB[1328+10])
#define TCU1CCU_6_BrkResistor_U16                Change_BigEen( g_dataBuffer_MVB[1328+11])
#define TCU1CCU_6_BrkResEng_U16                  Change_BigEen( g_dataBuffer_MVB[1328+12])
#define TCU1CCU_6_Torque_S16                     (int16_t)Change_BigEen( g_dataBuffer_MVB[1328+13])
#define TCU1CCU_6_EffDevelop_U16                 Change_BigEen( g_dataBuffer_MVB[1328+14])
#define TCU1CCU_6_CntVita_U8                      (g_dataBuffer_MVB[1328+15] U8_0
#define TCU1CCU_6_Chk_A2                          (g_dataBuffer_MVB[1328+15] & A2_16_17

//0x1ce=462    TCU2_CCU_6(TCU2 analog signals)
                                                        //g_dataBuffer_MVB[1344+i] = (snkPortData1ce[i]);
#define TCU2CCU_6_FilterVolt_S16                (int16_t)Change_BigEen( g_dataBuffer_MVB[1344+0])
#define TCU2CCU_6_LineVolt_S16                  (int16_t)Change_BigEen( g_dataBuffer_MVB[1344+1])
#define TCU2CCU_6_LineCurrent_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1344+2])
#define TCU2CCU_6_MotorCurrent_S16              (int16_t)Change_BigEen( g_dataBuffer_MVB[1344+3])
#define TCU2CCU_6_BrkChopperCur_S16             (int16_t)Change_BigEen( g_dataBuffer_MVB[1344+4])
#define TCU2CCU_6_InverterFreq_U16              Change_BigEen( g_dataBuffer_MVB[1344+6])
#define TCU2CCU_6_ModulatRatio_U16              Change_BigEen( g_dataBuffer_MVB[1344+7])
#define TCU2CCU_6_Nimp_U16                      Change_BigEen( g_dataBuffer_MVB[1344+8])
#define TCU2CCU_6_ChopperDutyCyc_U16            Change_BigEen( g_dataBuffer_MVB[1344+10])
#define TCU2CCU_6_BrkResistor_U16               Change_BigEen( g_dataBuffer_MVB[1344+11])
#define TCU2CCU_6_BrkResEng_U16                 Change_BigEen( g_dataBuffer_MVB[1344+12])
#define TCU2CCU_6_Torque_S16                    (int16_t)Change_BigEen( g_dataBuffer_MVB[1344+13])
#define TCU2CCU_6_EffDevelop_U16                Change_BigEen( g_dataBuffer_MVB[1344+14])
#define TCU2CCU_6_CntVita_U8                      (g_dataBuffer_MVB[1344+15] U8_0
#define TCU2CCU_6_Chk_A2                          (g_dataBuffer_MVB[1344+15] & A2_16_17
//0x1cf=463    TCU3_CCU_6(TCU3 analog signals)
                                                        //g_dataBuffer_MVB[1360+i] = (snkPortData1cf[i]);
#define TCU3CCU_6_FilterVolt_S16                (int16_t)Change_BigEen( g_dataBuffer_MVB[1360+0])
#define TCU3CCU_6_LineVolt_S16                  (int16_t)Change_BigEen( g_dataBuffer_MVB[1360+1])
#define TCU3CCU_6_LineCurrent_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1360+2])
#define TCU3CCU_6_MotorCurrent_S16              (int16_t)Change_BigEen( g_dataBuffer_MVB[1360+3])
#define TCU3CCU_6_BrkChopperCur_S16             (int16_t)Change_BigEen( g_dataBuffer_MVB[1360+4])
#define TCU3CCU_6_InverterFreq_U16              Change_BigEen( g_dataBuffer_MVB[1360+6])
#define TCU3CCU_6_ModulatRatio_U16              Change_BigEen( g_dataBuffer_MVB[1360+7])
#define TCU3CCU_6_Nimp_U16                      Change_BigEen( g_dataBuffer_MVB[1360+8])
#define TCU3CCU_6_ChopperDutyCyc_U16            Change_BigEen( g_dataBuffer_MVB[1360+10])
#define TCU3CCU_6_BrkResistor_U16               Change_BigEen( g_dataBuffer_MVB[1360+11])
#define TCU3CCU_6_BrkResEng_U16                 Change_BigEen( g_dataBuffer_MVB[1360+12])
#define TCU3CCU_6_Torque_S16                    (int16_t)Change_BigEen( g_dataBuffer_MVB[1360+13])
#define TCU3CCU_6_EffDevelop_U16                Change_BigEen( g_dataBuffer_MVB[1360+14])
#define TCU3CCU_6_CntVita_U8                      (g_dataBuffer_MVB[1360+15] U8_0
#define TCU3CCU_6_Chk_A2                          (g_dataBuffer_MVB[1360+15] & A2_16_17
//0x1d0=464    TCU4_CCU_6(TCU4 analog signals)
                                                        //g_dataBuffer_MVB[1376+i] = (snkPortData1d0[i]);

#define TCU4CCU_6_FilterVolt_S16                (int16_t)Change_BigEen( g_dataBuffer_MVB[1376+0])
#define TCU4CCU_6_LineVolt_S16                  (int16_t)Change_BigEen( g_dataBuffer_MVB[1376+1])
#define TCU4CCU_6_LineCurrent_S16               (int16_t)Change_BigEen( g_dataBuffer_MVB[1376+2])
#define TCU4CCU_6_MotorCurrent_S16              (int16_t)Change_BigEen( g_dataBuffer_MVB[1376+3])
#define TCU4CCU_6_BrkChopperCur_S16             (int16_t)Change_BigEen( g_dataBuffer_MVB[1376+4])
#define TCU4CCU_6_InverterFreq_U16              Change_BigEen( g_dataBuffer_MVB[1376+6])
#define TCU4CCU_6_ModulatRatio_U16              Change_BigEen( g_dataBuffer_MVB[1376+7])
#define TCU4CCU_6_Nimp_U16                      Change_BigEen( g_dataBuffer_MVB[1376+8])
#define TCU4CCU_6_ChopperDutyCyc_U16            Change_BigEen( g_dataBuffer_MVB[1376+10])
#define TCU4CCU_6_BrkResistor_U16               Change_BigEen( g_dataBuffer_MVB[1376+11])
#define TCU4CCU_6_BrkResEng_U16                 Change_BigEen( g_dataBuffer_MVB[1376+12])
#define TCU4CCU_6_Torque_S16                    (int16_t)Change_BigEen( g_dataBuffer_MVB[1376+13])
#define TCU4CCU_6_EffDevelop_U16                Change_BigEen( g_dataBuffer_MVB[1376+14])
#define TCU4CCU_6_CntVita_U8                      (g_dataBuffer_MVB[1376+15] U8_0
#define TCU4CCU_6_Chk_A2                          (g_dataBuffer_MVB[1376+15] & A2_16_17
//0x1d7=471    TCU1_CCU_7(TCU1 energy counters)
                                                        //g_dataBuffer_MVB[1392+i] = (snkPortData1d7[i]);

#define TCU1CCU_7_TcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1392+0])
#define TCU1CCU_7_RegEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1392+1])
#define TCU1CCU_7_BCEnergyConsump_U16           Change_BigEen( g_dataBuffer_MVB[1392+2])
#define TCU1CCU_7_AcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1392+3])


//0x1d8=472    TCU2_CCU_7(TCU2 energy counters)
                                                        //g_dataBuffer_MVB[1408+i] = (snkPortData1d8[i]);
#define TCU2CCU_7_TcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1408+0])
#define TCU2CCU_7_RegEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1408+1])
#define TCU2CCU_7_BCEnergyConsump_U16           Change_BigEen( g_dataBuffer_MVB[1408+2])
#define TCU2CCU_7_AcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1408+3])


//0x1d9=473    TCU3_CCU_7(TCU3 energy counters)
                                                        //g_dataBuffer_MVB[1424+i] = (snkPortData1d9[i]);
#define TCU3CCU_7_TcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1424+0])
#define TCU3CCU_7_RegEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1424+1])
#define TCU3CCU_7_BCEnergyConsump_U16           Change_BigEen( g_dataBuffer_MVB[1424+2])
#define TCU3CCU_7_AcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1424+3])


//0x1da=474    TCU4_CCU_7(TCU4 energy counters)
                                                        //g_dataBuffer_MVB[1440+i] = (snkPortData1da[i]);
#define TCU4CCU_7_TcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1440+0])
#define TCU4CCU_7_RegEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1440+1])
#define TCU4CCU_7_BCEnergyConsump_U16           Change_BigEen( g_dataBuffer_MVB[1440+2])
#define TCU4CCU_7_AcuEnergyConsump_U16          Change_BigEen( g_dataBuffer_MVB[1440+3])


       //*********2014.11.24 MVB thread
                            //LCU to CCU & CCU to LCU
                            //R_S(01/03/04/05/08)(1) Master logic I/O status
//0x38f=911    LCU_MA_All(LCU_MA master logic I/O status) R_S(01)
                                                       //g_dataBuffer_MVB[1456+i] = (snkPortData38f[i]);
#define LCUCCU_1_MA_Borad1_Type_E4                    (g_dataBuffer_MVB[1456+0] & E4_00_03
#define LCUCCU_1_MA_Borad1_Status_E4                  (g_dataBuffer_MVB[1456+0] & E4_04_07
#define LCUCCU_1_MA_Borad2_Type_E4                    (g_dataBuffer_MVB[1456+0] & E4_10_13
#define LCUCCU_1_MA_Borad2_Status_E4                  (g_dataBuffer_MVB[1456+0] & E4_14_17
#define LCUCCU_1_MA_Borad3_Type_E4                    (g_dataBuffer_MVB[1456+1] & E4_00_03
#define LCUCCU_1_MA_Borad3_Status_E4                  (g_dataBuffer_MVB[1456+1] & E4_04_07
#define LCUCCU_1_MA_Borad4_Type_E4                    (g_dataBuffer_MVB[1456+1] & E4_10_13
#define LCUCCU_1_MA_Borad4_Status_E4                  (g_dataBuffer_MVB[1456+1] & E4_14_17
#define LCUCCU_1_MA_Borad5_Type_E4                    (g_dataBuffer_MVB[1456+2] & E4_00_03
#define LCUCCU_1_MA_Borad5_Status_E4                  (g_dataBuffer_MVB[1456+2] & E4_04_07
#define LCUCCU_1_MA_Borad6_Type_E4                    (g_dataBuffer_MVB[1456+2] & E4_10_13
#define LCUCCU_1_MA_Borad6_Status_E4                  (g_dataBuffer_MVB[1456+2] & E4_14_17
#define LCUCCU_1_MA_Borad7_Type_E4                    (g_dataBuffer_MVB[1456+3] & E4_00_03
#define LCUCCU_1_MA_Borad7_Status_E4                  (g_dataBuffer_MVB[1456+3] & E4_04_07
#define LCUCCU_1_MA_Borad8_Type_E4                    (g_dataBuffer_MVB[1456+3] & E4_10_13
#define LCUCCU_1_MA_Borad8_Status_E4                  (g_dataBuffer_MVB[1456+3] & E4_14_17
#define LCUCCU_1_MA_Borad9_Type_E4                    (g_dataBuffer_MVB[1456+4] & E4_00_03
#define LCUCCU_1_MA_Borad9_Status_E4                  (g_dataBuffer_MVB[1456+4] & E4_04_07
#define LCUCCU_1_MA_Borad10_Type_E4                    (g_dataBuffer_MVB[1456+4] & E4_10_13
#define LCUCCU_1_MA_Borad10_Status_E4                  (g_dataBuffer_MVB[1456+4] & E4_14_17
#define LCUCCU_1_MA_Borad11_Type_E4                    (g_dataBuffer_MVB[1456+5] & E4_00_03
#define LCUCCU_1_MA_Borad11_Status_E4                  (g_dataBuffer_MVB[1456+5] & E4_04_07
#define LCUCCU_1_MA_Borad12_Type_E4                    (g_dataBuffer_MVB[1456+5] & E4_10_13
#define LCUCCU_1_MA_Borad12_Status_E4                  (g_dataBuffer_MVB[1456+5] & E4_14_17
#define LCUCCU_1_MA_Borad13_Type_E4                    (g_dataBuffer_MVB[1456+6] & E4_00_03
#define LCUCCU_1_MA_Borad13_Status_E4                  (g_dataBuffer_MVB[1456+6] & E4_04_07
#define LCUCCU_1_MA_Borad14_Type_E4                    (g_dataBuffer_MVB[1456+6] & E4_10_13
#define LCUCCU_1_MA_Borad14_Status_E4                  (g_dataBuffer_MVB[1456+6] & E4_14_17
#define LCUCCU_1_MA_Borad15_Type_E4                    (g_dataBuffer_MVB[1456+7] & E4_00_03
#define LCUCCU_1_MA_Borad15_Status_E4                  (g_dataBuffer_MVB[1456+7] & E4_04_07
#define LCUCCU_1_MA_Borad16_Type_E4                    (g_dataBuffer_MVB[1456+7] & E4_10_13
#define LCUCCU_1_MA_Borad16_Status_E4                  (g_dataBuffer_MVB[1456+7] & E4_14_17

#define LCUCCU_1_MA_Borad_Temp_U16                    Change_BigEen( g_dataBuffer_MVB[1456+8])
#define LCUCCU_1_MA_LifeMVBATX_U8                     (g_dataBuffer_MVB[1456+9] U8_0
#define LCUCCU_1_MA_Fail_S8                           (int8_t)((g_dataBuffer_MVB[1456+9] U8_1)

#define LCUCCU_1_MA_BPos1_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_00
#define LCUCCU_1_MA_BPos2_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_01
#define LCUCCU_1_MA_BPos3_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_02
#define LCUCCU_1_MA_BPos4_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_03
#define LCUCCU_1_MA_BPos5_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_04
#define LCUCCU_1_MA_BPos6_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_05
#define LCUCCU_1_MA_BPos7_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_06
#define LCUCCU_1_MA_BPos8_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_07
#define LCUCCU_1_MA_BPos9_FauRackLow_B1               (g_dataBuffer_MVB[1456+10] & B1_10
#define LCUCCU_1_MA_BPos10_FauRackLow_B1              (g_dataBuffer_MVB[1456+10] & B1_11
#define LCUCCU_1_MA_BPos11_FauRackLow_B1              (g_dataBuffer_MVB[1456+10] & B1_12
#define LCUCCU_1_MA_BPos12_FauRackLow_B1              (g_dataBuffer_MVB[1456+10] & B1_13

#define LCUCCU_1_MA_BPos9_FauRackHigh_B1              (g_dataBuffer_MVB[1456+10] & B1_14
#define LCUCCU_1_MA_BPos10_FauRackHigh_B1             (g_dataBuffer_MVB[1456+10] & B1_15
#define LCUCCU_1_MA_BPos11_FauRackHigh_B1             (g_dataBuffer_MVB[1456+10] & B1_16
#define LCUCCU_1_MA_BPos12_FauRackHigh_B1             (g_dataBuffer_MVB[1456+10] & B1_17
#define LCUCCU_1_MA_BPos1_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_00
#define LCUCCU_1_MA_BPos2_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_01
#define LCUCCU_1_MA_BPos3_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_02
#define LCUCCU_1_MA_BPos4_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_03
#define LCUCCU_1_MA_BPos5_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_04
#define LCUCCU_1_MA_BPos6_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_05
#define LCUCCU_1_MA_BPos7_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_06
#define LCUCCU_1_MA_BPos8_FauRackHigh_B1              (g_dataBuffer_MVB[1456+11] & B1_07

#define LCUCCU_1_MA_UnitNum_S8                        (int8_t)((g_dataBuffer_MVB[1456+11] U8_1)
#define LCUCCU_1_MA_PhisicaPos_U8                     (g_dataBuffer_MVB[1456+12] U8_0

#define LCUCCU_1_MA_InBusC1ATX_U8                     (g_dataBuffer_MVB[1456+12] U8_1
#define LCUCCU_1_MA_OutBus1ATX_U8                     (g_dataBuffer_MVB[1456+13] U8_0
#define LCUCCU_1_MA_InBusC2ATX_U8                     (g_dataBuffer_MVB[1456+13] U8_1
#define LCUCCU_1_MA_OutBus2ATX_U8                     (g_dataBuffer_MVB[1456+14] U8_0
#define LCUCCU_1_MA_LifeCanATX_U8                     (g_dataBuffer_MVB[1456+14] U8_1
#define LCUCCU_1_MA_Life_U8                           (g_dataBuffer_MVB[1456+15] U8_0
#define LCUCCU_1_MA_Chk_A2                             (g_dataBuffer_MVB[1456+15] & A2_16_17





//0x399=921    LCU_RA_All(LCU_RA master logic I/O status) R_S(03)
                                                       //g_dataBuffer_MVB[1472+i] = (snkPortData399[i]);
#define LCUCCU_1_RA_Borad1_Type_E4                    (g_dataBuffer_MVB[1472+0] & E4_00_03
#define LCUCCU_1_RA_Borad1_Status_E4                  (g_dataBuffer_MVB[1472+0] & E4_04_07
#define LCUCCU_1_RA_Borad2_Type_E4                    (g_dataBuffer_MVB[1472+0] & E4_10_13
#define LCUCCU_1_RA_Borad2_Status_E4                  (g_dataBuffer_MVB[1472+0] & E4_14_17
#define LCUCCU_1_RA_Borad3_Type_E4                    (g_dataBuffer_MVB[1472+1] & E4_00_03
#define LCUCCU_1_RA_Borad3_Status_E4                  (g_dataBuffer_MVB[1472+1] & E4_04_07
#define LCUCCU_1_RA_Borad4_Type_E4                    (g_dataBuffer_MVB[1472+1] & E4_10_13
#define LCUCCU_1_RA_Borad4_Status_E4                  (g_dataBuffer_MVB[1472+1] & E4_14_17
#define LCUCCU_1_RA_Borad5_Type_E4                    (g_dataBuffer_MVB[1472+2] & E4_00_03
#define LCUCCU_1_RA_Borad5_Status_E4                  (g_dataBuffer_MVB[1472+2] & E4_04_07
#define LCUCCU_1_RA_Borad6_Type_E4                    (g_dataBuffer_MVB[1472+2] & E4_10_13
#define LCUCCU_1_RA_Borad6_Status_E4                  (g_dataBuffer_MVB[1472+2] & E4_14_17
#define LCUCCU_1_RA_Borad7_Type_E4                    (g_dataBuffer_MVB[1472+3] & E4_00_03
#define LCUCCU_1_RA_Borad7_Status_E4                  (g_dataBuffer_MVB[1472+3] & E4_04_07
#define LCUCCU_1_RA_Borad8_Type_E4                    (g_dataBuffer_MVB[1472+3] & E4_10_13
#define LCUCCU_1_RA_Borad8_Status_E4                  (g_dataBuffer_MVB[1472+3] & E4_14_17
#define LCUCCU_1_RA_Borad9_Type_E4                    (g_dataBuffer_MVB[1472+4] & E4_00_03
#define LCUCCU_1_RA_Borad9_Status_E4                  (g_dataBuffer_MVB[1472+4] & E4_04_07
#define LCUCCU_1_RA_Borad10_Type_E4                    (g_dataBuffer_MVB[1472+4] & E4_10_13
#define LCUCCU_1_RA_Borad10_Status_E4                  (g_dataBuffer_MVB[1472+4] & E4_14_17
#define LCUCCU_1_RA_Borad11_Type_E4                    (g_dataBuffer_MVB[1472+5] & E4_00_03
#define LCUCCU_1_RA_Borad11_Status_E4                  (g_dataBuffer_MVB[1472+5] & E4_04_07
#define LCUCCU_1_RA_Borad12_Type_E4                    (g_dataBuffer_MVB[1472+5] & E4_10_13
#define LCUCCU_1_RA_Borad12_Status_E4                  (g_dataBuffer_MVB[1472+5] & E4_14_17
#define LCUCCU_1_RA_Borad13_Type_E4                    (g_dataBuffer_MVB[1472+6] & E4_00_03
#define LCUCCU_1_RA_Borad13_Status_E4                  (g_dataBuffer_MVB[1472+6] & E4_04_07
#define LCUCCU_1_RA_Borad14_Type_E4                    (g_dataBuffer_MVB[1472+6] & E4_10_13
#define LCUCCU_1_RA_Borad14_Status_E4                  (g_dataBuffer_MVB[1472+6] & E4_14_17
#define LCUCCU_1_RA_Borad15_Type_E4                    (g_dataBuffer_MVB[1472+7] & E4_00_03
#define LCUCCU_1_RA_Borad15_Status_E4                  (g_dataBuffer_MVB[1472+7] & E4_04_07
#define LCUCCU_1_RA_Borad16_Type_E4                    (g_dataBuffer_MVB[1472+7] & E4_10_13
#define LCUCCU_1_RA_Borad16_Status_E4                  (g_dataBuffer_MVB[1472+7] & E4_14_17

#define LCUCCU_1_RA_Borad_Temp_U16                  Change_BigEen( g_dataBuffer_MVB[1472+8])
#define LCUCCU_1_RA_LifeMVBATX_U8                     (g_dataBuffer_MVB[1472+9] U8_0
#define LCUCCU_1_RA_Fail_S8                           (int8_t)((g_dataBuffer_MVB[1472+9] U8_1)

#define LCUCCU_1_RA_BPos1_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_00
#define LCUCCU_1_RA_BPos2_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_01
#define LCUCCU_1_RA_BPos3_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_02
#define LCUCCU_1_RA_BPos4_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_03
#define LCUCCU_1_RA_BPos5_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_04
#define LCUCCU_1_RA_BPos6_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_05
#define LCUCCU_1_RA_BPos7_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_06
#define LCUCCU_1_RA_BPos8_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_07
#define LCUCCU_1_RA_BPos9_FauRackLow_B1               (g_dataBuffer_MVB[1472+10] & B1_10
#define LCUCCU_1_RA_BPos10_FauRackLow_B1              (g_dataBuffer_MVB[1472+10] & B1_11
#define LCUCCU_1_RA_BPos11_FauRackLow_B1              (g_dataBuffer_MVB[1472+10] & B1_12
#define LCUCCU_1_RA_BPos12_FauRackLow_B1              (g_dataBuffer_MVB[1472+10] & B1_13

#define LCUCCU_1_RA_BPos9_FauRackHigh_B1              (g_dataBuffer_MVB[1472+10] & B1_14
#define LCUCCU_1_RA_BPos10_FauRackHigh_B1             (g_dataBuffer_MVB[1472+10] & B1_15
#define LCUCCU_1_RA_BPos11_FauRackHigh_B1             (g_dataBuffer_MVB[1472+10] & B1_16
#define LCUCCU_1_RA_BPos12_FauRackHigh_B1             (g_dataBuffer_MVB[1472+10] & B1_17
#define LCUCCU_1_RA_BPos1_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_00
#define LCUCCU_1_RA_BPos2_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_01
#define LCUCCU_1_RA_BPos3_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_02
#define LCUCCU_1_RA_BPos4_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_03
#define LCUCCU_1_RA_BPos5_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_04
#define LCUCCU_1_RA_BPos6_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_05
#define LCUCCU_1_RA_BPos7_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_06
#define LCUCCU_1_RA_BPos8_FauRackHigh_B1              (g_dataBuffer_MVB[1472+11] & B1_07

#define LCUCCU_1_RA_UnitNum_S8                        (int8_t)((g_dataBuffer_MVB[1472+11] U8_1)
#define LCUCCU_1_RA_PhisicaPos_U8                     (g_dataBuffer_MVB[1472+12] U8_0

#define LCUCCU_1_RA_InBusC1ATX_U8                     (g_dataBuffer_MVB[1472+12] U8_1
#define LCUCCU_1_RA_OutBus1ATX_U8                     (g_dataBuffer_MVB[1472+13] U8_0
#define LCUCCU_1_RA_InBusC2ATX_U8                     (g_dataBuffer_MVB[1472+13] U8_1
#define LCUCCU_1_RA_OutBus2ATX_U8                     (g_dataBuffer_MVB[1472+14] U8_0
#define LCUCCU_1_RA_LifeCanATX_U8                     (g_dataBuffer_MVB[1472+14] U8_1
#define LCUCCU_1_RA_Life_U8                           (g_dataBuffer_MVB[1472+15] U8_0
#define LCUCCU_1_RA_Chk_A2                             (g_dataBuffer_MVB[1472+15] & A2_16_17


//0x3a3=931    LCU_P_All (LCU_P  master logic I/O status) R_S(04)
                                                       //g_dataBuffer_MVB[1488+i] = (snkPortData3a3[i]);
#define LCUCCU_1_P_Borad1_Type_E4                    (g_dataBuffer_MVB[1488+0] & E4_00_03
#define LCUCCU_1_P_Borad1_Status_E4                  (g_dataBuffer_MVB[1488+0] & E4_04_07
#define LCUCCU_1_P_Borad2_Type_E4                    (g_dataBuffer_MVB[1488+0] & E4_10_13
#define LCUCCU_1_P_Borad2_Status_E4                  (g_dataBuffer_MVB[1488+0] & E4_14_17
#define LCUCCU_1_P_Borad3_Type_E4                    (g_dataBuffer_MVB[1488+1] & E4_00_03
#define LCUCCU_1_P_Borad3_Status_E4                  (g_dataBuffer_MVB[1488+1] & E4_04_07
#define LCUCCU_1_P_Borad4_Type_E4                    (g_dataBuffer_MVB[1488+1] & E4_10_13
#define LCUCCU_1_P_Borad4_Status_E4                  (g_dataBuffer_MVB[1488+1] & E4_14_17
#define LCUCCU_1_P_Borad5_Type_E4                    (g_dataBuffer_MVB[1488+2] & E4_00_03
#define LCUCCU_1_P_Borad5_Status_E4                  (g_dataBuffer_MVB[1488+2] & E4_04_07
#define LCUCCU_1_P_Borad6_Type_E4                    (g_dataBuffer_MVB[1488+2] & E4_10_13
#define LCUCCU_1_P_Borad6_Status_E4                  (g_dataBuffer_MVB[1488+2] & E4_14_17
#define LCUCCU_1_P_Borad7_Type_E4                    (g_dataBuffer_MVB[1488+3] & E4_00_03
#define LCUCCU_1_P_Borad7_Status_E4                  (g_dataBuffer_MVB[1488+3] & E4_04_07
#define LCUCCU_1_P_Borad8_Type_E4                    (g_dataBuffer_MVB[1488+3] & E4_10_13
#define LCUCCU_1_P_Borad8_Status_E4                  (g_dataBuffer_MVB[1488+3] & E4_14_17
#define LCUCCU_1_P_Borad9_Type_E4                    (g_dataBuffer_MVB[1488+4] & E4_00_03
#define LCUCCU_1_P_Borad9_Status_E4                  (g_dataBuffer_MVB[1488+4] & E4_04_07
#define LCUCCU_1_P_Borad10_Type_E4                    (g_dataBuffer_MVB[1488+4] & E4_10_13
#define LCUCCU_1_P_Borad10_Status_E4                  (g_dataBuffer_MVB[1488+4] & E4_14_17
#define LCUCCU_1_P_Borad11_Type_E4                    (g_dataBuffer_MVB[1488+5] & E4_00_03
#define LCUCCU_1_P_Borad11_Status_E4                  (g_dataBuffer_MVB[1488+5] & E4_04_07
#define LCUCCU_1_P_Borad12_Type_E4                    (g_dataBuffer_MVB[1488+5] & E4_10_13
#define LCUCCU_1_P_Borad12_Status_E4                  (g_dataBuffer_MVB[1488+5] & E4_14_17
#define LCUCCU_1_P_Borad13_Type_E4                    (g_dataBuffer_MVB[1488+6] & E4_00_03
#define LCUCCU_1_P_Borad13_Status_E4                  (g_dataBuffer_MVB[1488+6] & E4_04_07
#define LCUCCU_1_P_Borad14_Type_E4                    (g_dataBuffer_MVB[1488+6] & E4_10_13
#define LCUCCU_1_P_Borad14_Status_E4                  (g_dataBuffer_MVB[1488+6] & E4_14_17
#define LCUCCU_1_P_Borad15_Type_E4                    (g_dataBuffer_MVB[1488+7] & E4_00_03
#define LCUCCU_1_P_Borad15_Status_E4                  (g_dataBuffer_MVB[1488+7] & E4_04_07
#define LCUCCU_1_P_Borad16_Type_E4                    (g_dataBuffer_MVB[1488+7] & E4_10_13
#define LCUCCU_1_P_Borad16_Status_E4                  (g_dataBuffer_MVB[1488+7] & E4_14_17

#define LCUCCU_1_P_Borad_Temp_U16                  Change_BigEen( g_dataBuffer_MVB[1488+8])
#define LCUCCU_1_P_LifeMVBATX_U8                     (g_dataBuffer_MVB[1488+9] U8_0
#define LCUCCU_1_P_Fail_S8                           (int8_t)((g_dataBuffer_MVB[1488+9] U8_1)

#define LCUCCU_1_P_BPos1_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_00
#define LCUCCU_1_P_BPos2_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_01
#define LCUCCU_1_P_BPos3_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_02
#define LCUCCU_1_P_BPos4_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_03
#define LCUCCU_1_P_BPos5_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_04
#define LCUCCU_1_P_BPos6_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_05
#define LCUCCU_1_P_BPos7_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_06
#define LCUCCU_1_P_BPos8_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_07
#define LCUCCU_1_P_BPos9_FauRackLow_B1               (g_dataBuffer_MVB[1488+10] & B1_10
#define LCUCCU_1_P_BPos10_FauRackLow_B1              (g_dataBuffer_MVB[1488+10] & B1_11
#define LCUCCU_1_P_BPos11_FauRackLow_B1              (g_dataBuffer_MVB[1488+10] & B1_12
#define LCUCCU_1_P_BPos12_FauRackLow_B1              (g_dataBuffer_MVB[1488+10] & B1_13

#define LCUCCU_1_P_BPos9_FauRackHigh_B1              (g_dataBuffer_MVB[1488+10] & B1_14
#define LCUCCU_1_P_BPos10_FauRackHigh_B1             (g_dataBuffer_MVB[1488+10] & B1_15
#define LCUCCU_1_P_BPos11_FauRackHigh_B1             (g_dataBuffer_MVB[1488+10] & B1_16
#define LCUCCU_1_P_BPos12_FauRackHigh_B1             (g_dataBuffer_MVB[1488+10] & B1_17
#define LCUCCU_1_P_BPos1_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_00
#define LCUCCU_1_P_BPos2_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_01
#define LCUCCU_1_P_BPos3_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_02
#define LCUCCU_1_P_BPos4_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_03
#define LCUCCU_1_P_BPos5_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_04
#define LCUCCU_1_P_BPos6_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_05
#define LCUCCU_1_P_BPos7_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_06
#define LCUCCU_1_P_BPos8_FauRackHigh_B1              (g_dataBuffer_MVB[1488+11] & B1_07

#define LCUCCU_1_P_UnitNum_S8                        (int8_t)((g_dataBuffer_MVB[1488+11] U8_1)
#define LCUCCU_1_P_PhisicaPos_U8                     (g_dataBuffer_MVB[1488+12] U8_0

#define LCUCCU_1_P_InBusC1ATX_U8                     (g_dataBuffer_MVB[1488+12] U8_1
#define LCUCCU_1_P_OutBus1ATX_U8                     (g_dataBuffer_MVB[1488+13] U8_0
#define LCUCCU_1_P_InBusC2ATX_U8                     (g_dataBuffer_MVB[1488+13] U8_1
#define LCUCCU_1_P_OutBus2ATX_U8                     (g_dataBuffer_MVB[1488+14] U8_0
#define LCUCCU_1_P_LifeCanATX_U8                     (g_dataBuffer_MVB[1488+14] U8_1
#define LCUCCU_1_P_Life_U8                           (g_dataBuffer_MVB[1488+15] U8_0
#define LCUCCU_1_P_Chk_A2                             (g_dataBuffer_MVB[1488+15] & A2_16_17


//0x3ad=941    LCU_RB_All(LCU_RB master logic I/O status) R_S(05)
                                                       //g_dataBuffer_MVB[1504+i] = (snkPortData3ad[i]);
#define LCUCCU_1_RB_Borad1_Type_E4                    (g_dataBuffer_MVB[1504+0] & E4_00_03
#define LCUCCU_1_RB_Borad1_Status_E4                  (g_dataBuffer_MVB[1504+0] & E4_04_07
#define LCUCCU_1_RB_Borad2_Type_E4                    (g_dataBuffer_MVB[1504+0] & E4_10_13
#define LCUCCU_1_RB_Borad2_Status_E4                  (g_dataBuffer_MVB[1504+0] & E4_14_17
#define LCUCCU_1_RB_Borad3_Type_E4                    (g_dataBuffer_MVB[1504+1] & E4_00_03
#define LCUCCU_1_RB_Borad3_Status_E4                  (g_dataBuffer_MVB[1504+1] & E4_04_07
#define LCUCCU_1_RB_Borad4_Type_E4                    (g_dataBuffer_MVB[1504+1] & E4_10_13
#define LCUCCU_1_RB_Borad4_Status_E4                  (g_dataBuffer_MVB[1504+1] & E4_14_17
#define LCUCCU_1_RB_Borad5_Type_E4                    (g_dataBuffer_MVB[1504+2] & E4_00_03
#define LCUCCU_1_RB_Borad5_Status_E4                  (g_dataBuffer_MVB[1504+2] & E4_04_07
#define LCUCCU_1_RB_Borad6_Type_E4                    (g_dataBuffer_MVB[1504+2] & E4_10_13
#define LCUCCU_1_RB_Borad6_Status_E4                  (g_dataBuffer_MVB[1504+2] & E4_14_17
#define LCUCCU_1_RB_Borad7_Type_E4                    (g_dataBuffer_MVB[1504+3] & E4_00_03
#define LCUCCU_1_RB_Borad7_Status_E4                  (g_dataBuffer_MVB[1504+3] & E4_04_07
#define LCUCCU_1_RB_Borad8_Type_E4                    (g_dataBuffer_MVB[1504+3] & E4_10_13
#define LCUCCU_1_RB_Borad8_Status_E4                  (g_dataBuffer_MVB[1504+3] & E4_14_17
#define LCUCCU_1_RB_Borad9_Type_E4                    (g_dataBuffer_MVB[1504+4] & E4_00_03
#define LCUCCU_1_RB_Borad9_Status_E4                  (g_dataBuffer_MVB[1504+4] & E4_04_07
#define LCUCCU_1_RB_Borad10_Type_E4                    (g_dataBuffer_MVB[1504+4] & E4_10_13
#define LCUCCU_1_RB_Borad10_Status_E4                  (g_dataBuffer_MVB[1504+4] & E4_14_17
#define LCUCCU_1_RB_Borad11_Type_E4                    (g_dataBuffer_MVB[1504+5] & E4_00_03
#define LCUCCU_1_RB_Borad11_Status_E4                  (g_dataBuffer_MVB[1504+5] & E4_04_07
#define LCUCCU_1_RB_Borad12_Type_E4                    (g_dataBuffer_MVB[1504+5] & E4_10_13
#define LCUCCU_1_RB_Borad12_Status_E4                  (g_dataBuffer_MVB[1504+5] & E4_14_17
#define LCUCCU_1_RB_Borad13_Type_E4                    (g_dataBuffer_MVB[1504+6] & E4_00_03
#define LCUCCU_1_RB_Borad13_Status_E4                  (g_dataBuffer_MVB[1504+6] & E4_04_07
#define LCUCCU_1_RB_Borad14_Type_E4                    (g_dataBuffer_MVB[1504+6] & E4_10_13
#define LCUCCU_1_RB_Borad14_Status_E4                  (g_dataBuffer_MVB[1504+6] & E4_14_17
#define LCUCCU_1_RB_Borad15_Type_E4                    (g_dataBuffer_MVB[1504+7] & E4_00_03
#define LCUCCU_1_RB_Borad15_Status_E4                  (g_dataBuffer_MVB[1504+7] & E4_04_07
#define LCUCCU_1_RB_Borad16_Type_E4                    (g_dataBuffer_MVB[1504+7] & E4_10_13
#define LCUCCU_1_RB_Borad16_Status_E4                  (g_dataBuffer_MVB[1504+7] & E4_14_17

#define LCUCCU_1_RB_Borad_Temp_U16                  Change_BigEen( g_dataBuffer_MVB[1504+8])
#define LCUCCU_1_RB_LifeMVBATX_U8                     (g_dataBuffer_MVB[1504+9] U8_0
#define LCUCCU_1_RB_Fail_S8                           (int8_t)((g_dataBuffer_MVB[1504+9] U8_1)

#define LCUCCU_1_RB_BPos1_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_00
#define LCUCCU_1_RB_BPos2_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_01
#define LCUCCU_1_RB_BPos3_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_02
#define LCUCCU_1_RB_BPos4_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_03
#define LCUCCU_1_RB_BPos5_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_04
#define LCUCCU_1_RB_BPos6_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_05
#define LCUCCU_1_RB_BPos7_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_06
#define LCUCCU_1_RB_BPos8_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_07
#define LCUCCU_1_RB_BPos9_FauRackLow_B1               (g_dataBuffer_MVB[1504+10] & B1_10
#define LCUCCU_1_RB_BPos10_FauRackLow_B1              (g_dataBuffer_MVB[1504+10] & B1_11
#define LCUCCU_1_RB_BPos11_FauRackLow_B1              (g_dataBuffer_MVB[1504+10] & B1_12
#define LCUCCU_1_RB_BPos12_FauRackLow_B1              (g_dataBuffer_MVB[1504+10] & B1_13

#define LCUCCU_1_RB_BPos9_FauRackHigh_B1              (g_dataBuffer_MVB[1504+10] & B1_14
#define LCUCCU_1_RB_BPos10_FauRackHigh_B1             (g_dataBuffer_MVB[1504+10] & B1_15
#define LCUCCU_1_RB_BPos11_FauRackHigh_B1             (g_dataBuffer_MVB[1504+10] & B1_16
#define LCUCCU_1_RB_BPos12_FauRackHigh_B1             (g_dataBuffer_MVB[1504+10] & B1_17
#define LCUCCU_1_RB_BPos1_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_00
#define LCUCCU_1_RB_BPos2_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_01
#define LCUCCU_1_RB_BPos3_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_02
#define LCUCCU_1_RB_BPos4_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_03
#define LCUCCU_1_RB_BPos5_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_04
#define LCUCCU_1_RB_BPos6_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_05
#define LCUCCU_1_RB_BPos7_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_06
#define LCUCCU_1_RB_BPos8_FauRackHigh_B1              (g_dataBuffer_MVB[1504+11] & B1_07

#define LCUCCU_1_RB_UnitNum_S8                        (int8_t)((g_dataBuffer_MVB[1504+11] U8_1)
#define LCUCCU_1_RB_PhisicaPos_U8                     (g_dataBuffer_MVB[1504+12] U8_0

#define LCUCCU_1_RB_InBusC1ATX_U8                     (g_dataBuffer_MVB[1504+12] U8_1
#define LCUCCU_1_RB_OutBus1ATX_U8                     (g_dataBuffer_MVB[1504+13] U8_0
#define LCUCCU_1_RB_InBusC2ATX_U8                     (g_dataBuffer_MVB[1504+13] U8_1
#define LCUCCU_1_RB_OutBus2ATX_U8                     (g_dataBuffer_MVB[1504+14] U8_0
#define LCUCCU_1_RB_LifeCanATX_U8                     (g_dataBuffer_MVB[1504+14] U8_1
#define LCUCCU_1_RB_Life_U8                           (g_dataBuffer_MVB[1504+15] U8_0
#define LCUCCU_1_RB_Chk_A2                             (g_dataBuffer_MVB[1504+15] & A2_16_17


//0x3b7=951    LCU_MB_All(LCU_MB master logic I/O status) R_S(08)
                                                       //g_dataBuffer_MVB[1520+i] = (snkPortData3b7[i]);
#define LCUCCU_1_MB_Borad1_Type_E4                    (g_dataBuffer_MVB[1520+0] & E4_00_03
#define LCUCCU_1_MB_Borad1_Status_E4                  (g_dataBuffer_MVB[1520+0] & E4_04_07
#define LCUCCU_1_MB_Borad2_Type_E4                    (g_dataBuffer_MVB[1520+0] & E4_10_13
#define LCUCCU_1_MB_Borad2_Status_E4                  (g_dataBuffer_MVB[1520+0] & E4_14_17
#define LCUCCU_1_MB_Borad3_Type_E4                    (g_dataBuffer_MVB[1520+1] & E4_00_03
#define LCUCCU_1_MB_Borad3_Status_E4                  (g_dataBuffer_MVB[1520+1] & E4_04_07
#define LCUCCU_1_MB_Borad4_Type_E4                    (g_dataBuffer_MVB[1520+1] & E4_10_13
#define LCUCCU_1_MB_Borad4_Status_E4                  (g_dataBuffer_MVB[1520+1] & E4_14_17
#define LCUCCU_1_MB_Borad5_Type_E4                    (g_dataBuffer_MVB[1520+2] & E4_00_03
#define LCUCCU_1_MB_Borad5_Status_E4                  (g_dataBuffer_MVB[1520+2] & E4_04_07
#define LCUCCU_1_MB_Borad6_Type_E4                    (g_dataBuffer_MVB[1520+2] & E4_10_13
#define LCUCCU_1_MB_Borad6_Status_E4                  (g_dataBuffer_MVB[1520+2] & E4_14_17
#define LCUCCU_1_MB_Borad7_Type_E4                    (g_dataBuffer_MVB[1520+3] & E4_00_03
#define LCUCCU_1_MB_Borad7_Status_E4                  (g_dataBuffer_MVB[1520+3] & E4_04_07
#define LCUCCU_1_MB_Borad8_Type_E4                    (g_dataBuffer_MVB[1520+3] & E4_10_13
#define LCUCCU_1_MB_Borad8_Status_E4                  (g_dataBuffer_MVB[1520+3] & E4_14_17
#define LCUCCU_1_MB_Borad9_Type_E4                    (g_dataBuffer_MVB[1520+4] & E4_00_03
#define LCUCCU_1_MB_Borad9_Status_E4                  (g_dataBuffer_MVB[1520+4] & E4_04_07
#define LCUCCU_1_MB_Borad10_Type_E4                    (g_dataBuffer_MVB[1520+4] & E4_10_13
#define LCUCCU_1_MB_Borad10_Status_E4                  (g_dataBuffer_MVB[1520+4] & E4_14_17
#define LCUCCU_1_MB_Borad11_Type_E4                    (g_dataBuffer_MVB[1520+5] & E4_00_03
#define LCUCCU_1_MB_Borad11_Status_E4                  (g_dataBuffer_MVB[1520+5] & E4_04_07
#define LCUCCU_1_MB_Borad12_Type_E4                    (g_dataBuffer_MVB[1520+5] & E4_10_13
#define LCUCCU_1_MB_Borad12_Status_E4                  (g_dataBuffer_MVB[1520+5] & E4_14_17
#define LCUCCU_1_MB_Borad13_Type_E4                    (g_dataBuffer_MVB[1520+6] & E4_00_03
#define LCUCCU_1_MB_Borad13_Status_E4                  (g_dataBuffer_MVB[1520+6] & E4_04_07
#define LCUCCU_1_MB_Borad14_Type_E4                    (g_dataBuffer_MVB[1520+6] & E4_10_13
#define LCUCCU_1_MB_Borad14_Status_E4                  (g_dataBuffer_MVB[1520+6] & E4_14_17
#define LCUCCU_1_MB_Borad15_Type_E4                    (g_dataBuffer_MVB[1520+7] & E4_00_03
#define LCUCCU_1_MB_Borad15_Status_E4                  (g_dataBuffer_MVB[1520+7] & E4_04_07
#define LCUCCU_1_MB_Borad16_Type_E4                    (g_dataBuffer_MVB[1520+7] & E4_10_13
#define LCUCCU_1_MB_Borad16_Status_E4                  (g_dataBuffer_MVB[1520+7] & E4_14_17

#define LCUCCU_1_MB_Borad_Temp_U16                  Change_BigEen( g_dataBuffer_MVB[1520+8])
#define LCUCCU_1_MB_LifeMVBATX_U8                     (g_dataBuffer_MVB[1520+9] U8_0
#define LCUCCU_1_MB_Fail_S8                           (int8_t)((g_dataBuffer_MVB[1520+9] U8_1)

#define LCUCCU_1_MB_BPos1_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_00
#define LCUCCU_1_MB_BPos2_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_01
#define LCUCCU_1_MB_BPos3_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_02
#define LCUCCU_1_MB_BPos4_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_03
#define LCUCCU_1_MB_BPos5_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_04
#define LCUCCU_1_MB_BPos6_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_05
#define LCUCCU_1_MB_BPos7_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_06
#define LCUCCU_1_MB_BPos8_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_07
#define LCUCCU_1_MB_BPos9_FauRackLow_B1               (g_dataBuffer_MVB[1520+10] & B1_10
#define LCUCCU_1_MB_BPos10_FauRackLow_B1              (g_dataBuffer_MVB[1520+10] & B1_11
#define LCUCCU_1_MB_BPos11_FauRackLow_B1              (g_dataBuffer_MVB[1520+10] & B1_12
#define LCUCCU_1_MB_BPos12_FauRackLow_B1              (g_dataBuffer_MVB[1520+10] & B1_13

#define LCUCCU_1_MB_BPos9_FauRackHigh_B1              (g_dataBuffer_MVB[1520+10] & B1_14
#define LCUCCU_1_MB_BPos10_FauRackHigh_B1             (g_dataBuffer_MVB[1520+10] & B1_15
#define LCUCCU_1_MB_BPos11_FauRackHigh_B1             (g_dataBuffer_MVB[1520+10] & B1_16
#define LCUCCU_1_MB_BPos12_FauRackHigh_B1             (g_dataBuffer_MVB[1520+10] & B1_17
#define LCUCCU_1_MB_BPos1_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_00
#define LCUCCU_1_MB_BPos2_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_01
#define LCUCCU_1_MB_BPos3_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_02
#define LCUCCU_1_MB_BPos4_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_03
#define LCUCCU_1_MB_BPos5_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_04
#define LCUCCU_1_MB_BPos6_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_05
#define LCUCCU_1_MB_BPos7_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_06
#define LCUCCU_1_MB_BPos8_FauRackHigh_B1              (g_dataBuffer_MVB[1520+11] & B1_07

#define LCUCCU_1_MB_UnitNum_S8                        (int8_t)((g_dataBuffer_MVB[1520+11] U8_1)
#define LCUCCU_1_MB_PhisicaPos_U8                     (g_dataBuffer_MVB[1520+12] U8_0

#define LCUCCU_1_MB_InBusC1ATX_U8                     (g_dataBuffer_MVB[1520+12] U8_1
#define LCUCCU_1_MB_OutBus1ATX_U8                     (g_dataBuffer_MVB[1520+13] U8_0
#define LCUCCU_1_MB_InBusC2ATX_U8                     (g_dataBuffer_MVB[1520+13] U8_1
#define LCUCCU_1_MB_OutBus2ATX_U8                     (g_dataBuffer_MVB[1520+14] U8_0
#define LCUCCU_1_MB_LifeCanATX_U8                     (g_dataBuffer_MVB[1520+14] U8_1
#define LCUCCU_1_MB_Life_U8                           (g_dataBuffer_MVB[1520+15] U8_0
#define LCUCCU_1_MB_Chk_A2                             (g_dataBuffer_MVB[1520+15] & A2_16_17



//R_AI(01/03/04/05/08)(2) Master logic I/O analog input
//0x390=912    LCU_MA_All(LCU_MA Master logic I/O analog input) R_AI(01)
                                                        //g_dataBuffer_MVB[1536+i] = (snkPortData390[i]);
#define LCUCCU_2_MA_Analog_Input_1_U16                   Change_BigEen( g_dataBuffer_MVB[1536+0])
#define LCUCCU_2_MA_Analog_Input_2_U16                   Change_BigEen( g_dataBuffer_MVB[1536+1])
#define LCUCCU_2_MA_Analog_Input_3_U16                   Change_BigEen( g_dataBuffer_MVB[1536+2])
#define LCUCCU_2_MA_Analog_Input_4_U16                   Change_BigEen( g_dataBuffer_MVB[1536+3])
#define LCUCCU_2_MA_Analog_Input_5_U16                   Change_BigEen( g_dataBuffer_MVB[1536+4])
#define LCUCCU_2_MA_Analog_Input_6_U16                   Change_BigEen( g_dataBuffer_MVB[1536+5])
#define LCUCCU_2_MA_Analog_Input_7_U16                   Change_BigEen( g_dataBuffer_MVB[1536+6])
#define LCUCCU_2_MA_iaLife_U8                              (g_dataBuffer_MVB[1536+7] U8_0
#define LCUCCU_2_MA_Chk_A2                                  (g_dataBuffer_MVB[1536+7] & A2_16_17





//0x39a=922    LCU_RA_All(LCU_RA Master logic I/O analog input) R_AI(03)
                                                        //g_dataBuffer_MVB[1552+i] = (snkPortData39a[i]);
#define LCUCCU_2_RA_Analog_Input_1_U16                   Change_BigEen( g_dataBuffer_MVB[1552+0])
#define LCUCCU_2_RA_Analog_Input_2_U16                   Change_BigEen( g_dataBuffer_MVB[1552+1])
#define LCUCCU_2_RA_Analog_Input_3_U16                   Change_BigEen( g_dataBuffer_MVB[1552+2])
#define LCUCCU_2_RA_Analog_Input_4_U16                   Change_BigEen( g_dataBuffer_MVB[1552+3])
#define LCUCCU_2_RA_Analog_Input_5_U16                   Change_BigEen( g_dataBuffer_MVB[1552+4])
#define LCUCCU_2_RA_Analog_Input_6_U16                   Change_BigEen( g_dataBuffer_MVB[1552+5])
#define LCUCCU_2_RA_Analog_Input_7_U16                   Change_BigEen( g_dataBuffer_MVB[1552+6])
#define LCUCCU_2_RA_iaLife_U8                              (g_dataBuffer_MVB[1552+7] U8_0
#define LCUCCU_2_RA_Chk_A2                                 (g_dataBuffer_MVB[1552+7] & A2_16_17

//0x3a4=932    LCU_P_All (LCU_P  Master logic I/O analog input) R_AI(04)
                                                        //g_dataBuffer_MVB[1568+i] = (snkPortData3a4[i]);
#define LCUCCU_2_P_Analog_Input_1_U16                   Change_BigEen( g_dataBuffer_MVB[1568+0])
#define LCUCCU_2_P_Analog_Input_2_U16                   Change_BigEen( g_dataBuffer_MVB[1568+1])
#define LCUCCU_2_P_Analog_Input_3_U16                   Change_BigEen( g_dataBuffer_MVB[1568+2])
#define LCUCCU_2_P_Analog_Input_4_U16                   Change_BigEen( g_dataBuffer_MVB[1568+3])
#define LCUCCU_2_P_Analog_Input_5_U16                   Change_BigEen( g_dataBuffer_MVB[1568+4])
#define LCUCCU_2_P_Analog_Input_6_U16                   Change_BigEen( g_dataBuffer_MVB[1568+5])
#define LCUCCU_2_P_Analog_Input_7_U16                   Change_BigEen( g_dataBuffer_MVB[1568+6])
#define LCUCCU_2_P_iaLife_U8                              (g_dataBuffer_MVB[1568+7] U8_0
#define LCUCCU_2_P_Chk_A2                                  (g_dataBuffer_MVB[1568+7] & A2_16_17

//0x3ae=942    LCU_RB_All(LCU_RB Master logic I/O analog input) R_AI(05)
                                                        //g_dataBuffer_MVB[1584+i] = (snkPortData3ae[i]);
#define LCUCCU_2_RB_Analog_Input_1_U16                   Change_BigEen( g_dataBuffer_MVB[1584+0])
#define LCUCCU_2_RB_Analog_Input_2_U16                   Change_BigEen( g_dataBuffer_MVB[1584+1])
#define LCUCCU_2_RB_Analog_Input_3_U16                   Change_BigEen( g_dataBuffer_MVB[1584+2])
#define LCUCCU_2_RB_Analog_Input_4_U16                   Change_BigEen( g_dataBuffer_MVB[1584+3])
#define LCUCCU_2_RB_Analog_Input_5_U16                   Change_BigEen( g_dataBuffer_MVB[1584+4])
#define LCUCCU_2_RB_Analog_Input_6_U16                   Change_BigEen( g_dataBuffer_MVB[1584+5])
#define LCUCCU_2_RB_Analog_Input_7_U16                   Change_BigEen( g_dataBuffer_MVB[1584+6])
#define LCUCCU_2_RB_iaLife_U8                               (g_dataBuffer_MVB[1584+7] U8_0
#define LCUCCU_2_RB_Chk_A2                                  (g_dataBuffer_MVB[1584+7] & A2_16_17

//0x3b8=952    LCU_MB_All(LCU_MB Master logic I/O analog input) R_AI(08)
                                                        //g_dataBuffer_MVB[1600+i] = (snkPortData3b7[i]);
#define LCUCCU_2_MB_Analog_Input_1_U16                   Change_BigEen( g_dataBuffer_MVB[1600+0])
#define LCUCCU_2_MB_Analog_Input_2_U16                   Change_BigEen( g_dataBuffer_MVB[1600+1])
#define LCUCCU_2_MB_Analog_Input_3_U16                   Change_BigEen( g_dataBuffer_MVB[1600+2])
#define LCUCCU_2_MB_Analog_Input_4_U16                   Change_BigEen( g_dataBuffer_MVB[1600+3])
#define LCUCCU_2_MB_Analog_Input_5_U16                   Change_BigEen( g_dataBuffer_MVB[1600+4])
#define LCUCCU_2_MB_Analog_Input_6_U16                   Change_BigEen( g_dataBuffer_MVB[1600+5])
#define LCUCCU_2_MB_Analog_Input_7_U16                   Change_BigEen( g_dataBuffer_MVB[1600+6])
#define LCUCCU_2_MB_iaLife_U8                              (g_dataBuffer_MVB[1600+7] U8_0
#define LCUCCU_2_MB_Chk_A2                                  (g_dataBuffer_MVB[1600+7] & A2_16_17


//R_DI(01/03/04/05/08)(3) Master logic I/O digital input
//0x391=913    LCU_MA_All(LCU_MA Master logic I/O digital input) R_DI(01)
                                                        //g_dataBuffer_MVB[1616+i] = (snkPortData391[i]);
#define LCUCCU_3_MA_DI_1_CH1_B1                           (g_dataBuffer_MVB[1616+0] & B1_00
#define LCUCCU_3_MA_DI_1_CH2_B1                           (g_dataBuffer_MVB[1616+0] & B1_01
#define LCUCCU_3_MA_DI_1_CH3_B1                           (g_dataBuffer_MVB[1616+0] & B1_02
#define LCUCCU_3_MA_DI_1_CH4_B1                           (g_dataBuffer_MVB[1616+0] & B1_03
#define LCUCCU_3_MA_DI_1_CH5_B1                           (g_dataBuffer_MVB[1616+0] & B1_04
#define LCUCCU_3_MA_DI_1_CH6_B1                           (g_dataBuffer_MVB[1616+0] & B1_05
#define LCUCCU_3_MA_DI_1_CH7_B1                           (g_dataBuffer_MVB[1616+0] & B1_06
#define LCUCCU_3_MA_DI_1_CH8_B1                           (g_dataBuffer_MVB[1616+0] & B1_07
#define LCUCCU_3_MA_DI_1_CH9_B1                           (g_dataBuffer_MVB[1616+0] & B1_10
#define LCUCCU_3_MA_DI_1_CH10_B1                          (g_dataBuffer_MVB[1616+0] & B1_11
#define LCUCCU_3_MA_DI_1_CH11_B1                          (g_dataBuffer_MVB[1616+0] & B1_12
#define LCUCCU_3_MA_DI_1_CH12_B1                          (g_dataBuffer_MVB[1616+0] & B1_13
#define LCUCCU_3_MA_DI_1_CH13_B1                          (g_dataBuffer_MVB[1616+0] & B1_14
#define LCUCCU_3_MA_DI_1_CH14_B1                          (g_dataBuffer_MVB[1616+0] & B1_15
#define LCUCCU_3_MA_DI_1_CH15_B1                          (g_dataBuffer_MVB[1616+0] & B1_16
#define LCUCCU_3_MA_DI_1_CH16_B1                          (g_dataBuffer_MVB[1616+0] & B1_17
#define LCUCCU_3_MA_DI_1_CH17_B1                          (g_dataBuffer_MVB[1616+1] & B1_00
#define LCUCCU_3_MA_DI_1_CH18_B1                          (g_dataBuffer_MVB[1616+1] & B1_01
#define LCUCCU_3_MA_DI_1_CH19_B1                          (g_dataBuffer_MVB[1616+1] & B1_02
#define LCUCCU_3_MA_DI_1_CH20_B1                          (g_dataBuffer_MVB[1616+1] & B1_03
#define LCUCCU_3_MA_DI_1_CH21_B1                          (g_dataBuffer_MVB[1616+1] & B1_04
#define LCUCCU_3_MA_DI_1_CH22_B1                          (g_dataBuffer_MVB[1616+1] & B1_05
#define LCUCCU_3_MA_DI_1_CH23_B1                          (g_dataBuffer_MVB[1616+1] & B1_06
#define LCUCCU_3_MA_DI_1_CH24_B1                          (g_dataBuffer_MVB[1616+1] & B1_07

#define LCUCCU_3_MA_DI_2_CH1_B1                           (g_dataBuffer_MVB[1616+1] & B1_10
#define LCUCCU_3_MA_DI_2_CH2_B1                           (g_dataBuffer_MVB[1616+1] & B1_11
#define LCUCCU_3_MA_DI_2_CH3_B1                           (g_dataBuffer_MVB[1616+1] & B1_12
#define LCUCCU_3_MA_DI_2_CH4_B1                           (g_dataBuffer_MVB[1616+1] & B1_13
#define LCUCCU_3_MA_DI_2_CH5_B1                           (g_dataBuffer_MVB[1616+1] & B1_14
#define LCUCCU_3_MA_DI_2_CH6_B1                           (g_dataBuffer_MVB[1616+1] & B1_15
#define LCUCCU_3_MA_DI_2_CH7_B1                           (g_dataBuffer_MVB[1616+1] & B1_16
#define LCUCCU_3_MA_DI_2_CH8_B1                           (g_dataBuffer_MVB[1616+1] & B1_17
#define LCUCCU_3_MA_DI_2_CH9_B1                           (g_dataBuffer_MVB[1616+2] & B1_00
#define LCUCCU_3_MA_DI_2_CH10_B1                          (g_dataBuffer_MVB[1616+2] & B1_01
#define LCUCCU_3_MA_DI_2_CH11_B1                          (g_dataBuffer_MVB[1616+2] & B1_02
#define LCUCCU_3_MA_DI_2_CH12_B1                          (g_dataBuffer_MVB[1616+2] & B1_03
#define LCUCCU_3_MA_DI_2_CH13_B1                          (g_dataBuffer_MVB[1616+2] & B1_04
#define LCUCCU_3_MA_DI_2_CH14_B1                          (g_dataBuffer_MVB[1616+2] & B1_05
#define LCUCCU_3_MA_DI_2_CH15_B1                          (g_dataBuffer_MVB[1616+2] & B1_06
#define LCUCCU_3_MA_DI_2_CH16_B1                          (g_dataBuffer_MVB[1616+2] & B1_07
#define LCUCCU_3_MA_DI_2_CH17_B1                          (g_dataBuffer_MVB[1616+2] & B1_10
#define LCUCCU_3_MA_DI_2_CH18_B1                          (g_dataBuffer_MVB[1616+2] & B1_11
#define LCUCCU_3_MA_DI_2_CH19_B1                          (g_dataBuffer_MVB[1616+2] & B1_12
#define LCUCCU_3_MA_DI_2_CH20_B1                          (g_dataBuffer_MVB[1616+2] & B1_13
#define LCUCCU_3_MA_DI_2_CH21_B1                          (g_dataBuffer_MVB[1616+2] & B1_14
#define LCUCCU_3_MA_DI_2_CH22_B1                          (g_dataBuffer_MVB[1616+2] & B1_15
#define LCUCCU_3_MA_DI_2_CH23_B1                          (g_dataBuffer_MVB[1616+2] & B1_16
#define LCUCCU_3_MA_DI_2_CH24_B1                          (g_dataBuffer_MVB[1616+2] & B1_17

#define LCUCCU_3_MA_DI_3_CH1_B1                           (g_dataBuffer_MVB[1616+3] & B1_00
#define LCUCCU_3_MA_DI_3_CH2_B1                           (g_dataBuffer_MVB[1616+3] & B1_01
#define LCUCCU_3_MA_DI_3_CH3_B1                           (g_dataBuffer_MVB[1616+3] & B1_02
#define LCUCCU_3_MA_DI_3_CH4_B1                           (g_dataBuffer_MVB[1616+3] & B1_03
#define LCUCCU_3_MA_DI_3_CH5_B1                           (g_dataBuffer_MVB[1616+3] & B1_04
#define LCUCCU_3_MA_DI_3_CH6_B1                           (g_dataBuffer_MVB[1616+3] & B1_05
#define LCUCCU_3_MA_DI_3_CH7_B1                           (g_dataBuffer_MVB[1616+3] & B1_06
#define LCUCCU_3_MA_DI_3_CH8_B1                           (g_dataBuffer_MVB[1616+3] & B1_07
#define LCUCCU_3_MA_DI_3_CH9_B1                           (g_dataBuffer_MVB[1616+3] & B1_10
#define LCUCCU_3_MA_DI_3_CH10_B1                          (g_dataBuffer_MVB[1616+3] & B1_11
#define LCUCCU_3_MA_DI_3_CH11_B1                          (g_dataBuffer_MVB[1616+3] & B1_12
#define LCUCCU_3_MA_DI_3_CH12_B1                          (g_dataBuffer_MVB[1616+3] & B1_13
#define LCUCCU_3_MA_DI_3_CH13_B1                          (g_dataBuffer_MVB[1616+3] & B1_14
#define LCUCCU_3_MA_DI_3_CH14_B1                          (g_dataBuffer_MVB[1616+3] & B1_15
#define LCUCCU_3_MA_DI_3_CH15_B1                          (g_dataBuffer_MVB[1616+3] & B1_16
#define LCUCCU_3_MA_DI_3_CH16_B1                          (g_dataBuffer_MVB[1616+3] & B1_17
#define LCUCCU_3_MA_DI_3_CH17_B1                          (g_dataBuffer_MVB[1616+4] & B1_00
#define LCUCCU_3_MA_DI_3_CH18_B1                          (g_dataBuffer_MVB[1616+4] & B1_01
#define LCUCCU_3_MA_DI_3_CH19_B1                          (g_dataBuffer_MVB[1616+4] & B1_02
#define LCUCCU_3_MA_DI_3_CH20_B1                          (g_dataBuffer_MVB[1616+4] & B1_03
#define LCUCCU_3_MA_DI_3_CH21_B1                          (g_dataBuffer_MVB[1616+4] & B1_04
#define LCUCCU_3_MA_DI_3_CH22_B1                          (g_dataBuffer_MVB[1616+4] & B1_05
#define LCUCCU_3_MA_DI_3_CH23_B1                          (g_dataBuffer_MVB[1616+4] & B1_06
#define LCUCCU_3_MA_DI_3_CH24_B1                          (g_dataBuffer_MVB[1616+4] & B1_07

#define LCUCCU_3_MA_DI_4_CH1_B1                           (g_dataBuffer_MVB[1616+4] & B1_10
#define LCUCCU_3_MA_DI_4_CH2_B1                           (g_dataBuffer_MVB[1616+4] & B1_11
#define LCUCCU_3_MA_DI_4_CH3_B1                           (g_dataBuffer_MVB[1616+4] & B1_12
#define LCUCCU_3_MA_DI_4_CH4_B1                           (g_dataBuffer_MVB[1616+4] & B1_13
#define LCUCCU_3_MA_DI_4_CH5_B1                           (g_dataBuffer_MVB[1616+4] & B1_14
#define LCUCCU_3_MA_DI_4_CH6_B1                           (g_dataBuffer_MVB[1616+4] & B1_15
#define LCUCCU_3_MA_DI_4_CH7_B1                           (g_dataBuffer_MVB[1616+4] & B1_16
#define LCUCCU_3_MA_DI_4_CH8_B1                           (g_dataBuffer_MVB[1616+4] & B1_17
#define LCUCCU_3_MA_DI_4_CH9_B1                           (g_dataBuffer_MVB[1616+5] & B1_00
#define LCUCCU_3_MA_DI_4_CH10_B1                          (g_dataBuffer_MVB[1616+5] & B1_01
#define LCUCCU_3_MA_DI_4_CH11_B1                          (g_dataBuffer_MVB[1616+5] & B1_02
#define LCUCCU_3_MA_DI_4_CH12_B1                          (g_dataBuffer_MVB[1616+5] & B1_03
#define LCUCCU_3_MA_DI_4_CH13_B1                          (g_dataBuffer_MVB[1616+5] & B1_04
#define LCUCCU_3_MA_DI_4_CH14_B1                          (g_dataBuffer_MVB[1616+5] & B1_05
#define LCUCCU_3_MA_DI_4_CH15_B1                          (g_dataBuffer_MVB[1616+5] & B1_06
#define LCUCCU_3_MA_DI_4_CH16_B1                          (g_dataBuffer_MVB[1616+5] & B1_07
#define LCUCCU_3_MA_DI_4_CH17_B1                          (g_dataBuffer_MVB[1616+5] & B1_10
#define LCUCCU_3_MA_DI_4_CH18_B1                          (g_dataBuffer_MVB[1616+5] & B1_11
#define LCUCCU_3_MA_DI_4_CH19_B1                          (g_dataBuffer_MVB[1616+5] & B1_12
#define LCUCCU_3_MA_DI_4_CH20_B1                          (g_dataBuffer_MVB[1616+5] & B1_13
#define LCUCCU_3_MA_DI_4_CH21_B1                          (g_dataBuffer_MVB[1616+5] & B1_14
#define LCUCCU_3_MA_DI_4_CH22_B1                          (g_dataBuffer_MVB[1616+5] & B1_15
#define LCUCCU_3_MA_DI_4_CH23_B1                          (g_dataBuffer_MVB[1616+5] & B1_16
#define LCUCCU_3_MA_DI_4_CH24_B1                          (g_dataBuffer_MVB[1616+5] & B1_17

#define LCUCCU_3_MA_DI_5_CH1_B1                           (g_dataBuffer_MVB[1616+6] & B1_00
#define LCUCCU_3_MA_DI_5_CH2_B1                           (g_dataBuffer_MVB[1616+6] & B1_01
#define LCUCCU_3_MA_DI_5_CH3_B1                           (g_dataBuffer_MVB[1616+6] & B1_02
#define LCUCCU_3_MA_DI_5_CH4_B1                           (g_dataBuffer_MVB[1616+6] & B1_03
#define LCUCCU_3_MA_DI_5_CH5_B1                           (g_dataBuffer_MVB[1616+6] & B1_04
#define LCUCCU_3_MA_DI_5_CH6_B1                           (g_dataBuffer_MVB[1616+6] & B1_05
#define LCUCCU_3_MA_DI_5_CH7_B1                           (g_dataBuffer_MVB[1616+6] & B1_06
#define LCUCCU_3_MA_DI_5_CH8_B1                           (g_dataBuffer_MVB[1616+6] & B1_07
#define LCUCCU_3_MA_DI_5_CH9_B1                           (g_dataBuffer_MVB[1616+6] & B1_10
#define LCUCCU_3_MA_DI_5_CH10_B1                          (g_dataBuffer_MVB[1616+6] & B1_11
#define LCUCCU_3_MA_DI_5_CH11_B1                          (g_dataBuffer_MVB[1616+6] & B1_12
#define LCUCCU_3_MA_DI_5_CH12_B1                          (g_dataBuffer_MVB[1616+6] & B1_13
#define LCUCCU_3_MA_DI_5_CH13_B1                          (g_dataBuffer_MVB[1616+6] & B1_14
#define LCUCCU_3_MA_DI_5_CH14_B1                          (g_dataBuffer_MVB[1616+6] & B1_15
#define LCUCCU_3_MA_DI_5_CH15_B1                          (g_dataBuffer_MVB[1616+6] & B1_16
#define LCUCCU_3_MA_DI_5_CH16_B1                          (g_dataBuffer_MVB[1616+6] & B1_17
#define LCUCCU_3_MA_DI_5_CH17_B1                          (g_dataBuffer_MVB[1616+7] & B1_00
#define LCUCCU_3_MA_DI_5_CH18_B1                          (g_dataBuffer_MVB[1616+7] & B1_01
#define LCUCCU_3_MA_DI_5_CH19_B1                          (g_dataBuffer_MVB[1616+7] & B1_02
#define LCUCCU_3_MA_DI_5_CH20_B1                          (g_dataBuffer_MVB[1616+7] & B1_03
#define LCUCCU_3_MA_DI_5_CH21_B1                          (g_dataBuffer_MVB[1616+7] & B1_04
#define LCUCCU_3_MA_DI_5_CH22_B1                          (g_dataBuffer_MVB[1616+7] & B1_05
#define LCUCCU_3_MA_DI_5_CH23_B1                          (g_dataBuffer_MVB[1616+7] & B1_06
#define LCUCCU_3_MA_DI_5_CH24_B1                          (g_dataBuffer_MVB[1616+7] & B1_07

#define LCUCCU_3_MA_DI_6_CH1_B1                           (g_dataBuffer_MVB[1616+7] & B1_10
#define LCUCCU_3_MA_DI_6_CH2_B1                           (g_dataBuffer_MVB[1616+7] & B1_11
#define LCUCCU_3_MA_DI_6_CH3_B1                           (g_dataBuffer_MVB[1616+7] & B1_12
#define LCUCCU_3_MA_DI_6_CH4_B1                           (g_dataBuffer_MVB[1616+7] & B1_13
#define LCUCCU_3_MA_DI_6_CH5_B1                           (g_dataBuffer_MVB[1616+7] & B1_14
#define LCUCCU_3_MA_DI_6_CH6_B1                           (g_dataBuffer_MVB[1616+7] & B1_15
#define LCUCCU_3_MA_DI_6_CH7_B1                           (g_dataBuffer_MVB[1616+7] & B1_16
#define LCUCCU_3_MA_DI_6_CH8_B1                           (g_dataBuffer_MVB[1616+7] & B1_17
#define LCUCCU_3_MA_DI_6_CH9_B1                           (g_dataBuffer_MVB[1616+8] & B1_00
#define LCUCCU_3_MA_DI_6_CH10_B1                          (g_dataBuffer_MVB[1616+8] & B1_01
#define LCUCCU_3_MA_DI_6_CH11_B1                          (g_dataBuffer_MVB[1616+8] & B1_02
#define LCUCCU_3_MA_DI_6_CH12_B1                          (g_dataBuffer_MVB[1616+8] & B1_03
#define LCUCCU_3_MA_DI_6_CH13_B1                          (g_dataBuffer_MVB[1616+8] & B1_04
#define LCUCCU_3_MA_DI_6_CH14_B1                          (g_dataBuffer_MVB[1616+8] & B1_05
#define LCUCCU_3_MA_DI_6_CH15_B1                          (g_dataBuffer_MVB[1616+8] & B1_06
#define LCUCCU_3_MA_DI_6_CH16_B1                          (g_dataBuffer_MVB[1616+8] & B1_07
#define LCUCCU_3_MA_DI_6_CH17_B1                          (g_dataBuffer_MVB[1616+8] & B1_10
#define LCUCCU_3_MA_DI_6_CH18_B1                          (g_dataBuffer_MVB[1616+8] & B1_11
#define LCUCCU_3_MA_DI_6_CH19_B1                          (g_dataBuffer_MVB[1616+8] & B1_12
#define LCUCCU_3_MA_DI_6_CH20_B1                          (g_dataBuffer_MVB[1616+8] & B1_13
#define LCUCCU_3_MA_DI_6_CH21_B1                          (g_dataBuffer_MVB[1616+8] & B1_14
#define LCUCCU_3_MA_DI_6_CH22_B1                          (g_dataBuffer_MVB[1616+8] & B1_15
#define LCUCCU_3_MA_DI_6_CH23_B1                          (g_dataBuffer_MVB[1616+8] & B1_16
#define LCUCCU_3_MA_DI_6_CH24_B1                          (g_dataBuffer_MVB[1616+8] & B1_17


//0x39b=923    LCU_RA_All(LCU_RA Master logic I/O digital input) R_DI(03)
                                                        //g_dataBuffer_MVB[1632+i] = (snkPortData39b[i]);
#define LCUCCU_3_RA_DI_1_CH1_B1                           (g_dataBuffer_MVB[1632+0] & B1_00
#define LCUCCU_3_RA_DI_1_CH2_B1                           (g_dataBuffer_MVB[1632+0] & B1_01
#define LCUCCU_3_RA_DI_1_CH3_B1                           (g_dataBuffer_MVB[1632+0] & B1_02
#define LCUCCU_3_RA_DI_1_CH4_B1                           (g_dataBuffer_MVB[1632+0] & B1_03
#define LCUCCU_3_RA_DI_1_CH5_B1                           (g_dataBuffer_MVB[1632+0] & B1_04
#define LCUCCU_3_RA_DI_1_CH6_B1                           (g_dataBuffer_MVB[1632+0] & B1_05
#define LCUCCU_3_RA_DI_1_CH7_B1                           (g_dataBuffer_MVB[1632+0] & B1_06
#define LCUCCU_3_RA_DI_1_CH8_B1                           (g_dataBuffer_MVB[1632+0] & B1_07
#define LCUCCU_3_RA_DI_1_CH9_B1                           (g_dataBuffer_MVB[1632+0] & B1_10
#define LCUCCU_3_RA_DI_1_CH10_B1                          (g_dataBuffer_MVB[1632+0] & B1_11
#define LCUCCU_3_RA_DI_1_CH11_B1                          (g_dataBuffer_MVB[1632+0] & B1_12
#define LCUCCU_3_RA_DI_1_CH12_B1                          (g_dataBuffer_MVB[1632+0] & B1_13
#define LCUCCU_3_RA_DI_1_CH13_B1                          (g_dataBuffer_MVB[1632+0] & B1_14
#define LCUCCU_3_RA_DI_1_CH14_B1                          (g_dataBuffer_MVB[1632+0] & B1_15
#define LCUCCU_3_RA_DI_1_CH15_B1                          (g_dataBuffer_MVB[1632+0] & B1_16
#define LCUCCU_3_RA_DI_1_CH16_B1                          (g_dataBuffer_MVB[1632+0] & B1_17
#define LCUCCU_3_RA_DI_1_CH17_B1                          (g_dataBuffer_MVB[1632+1] & B1_00
#define LCUCCU_3_RA_DI_1_CH18_B1                          (g_dataBuffer_MVB[1632+1] & B1_01
#define LCUCCU_3_RA_DI_1_CH19_B1                          (g_dataBuffer_MVB[1632+1] & B1_02
#define LCUCCU_3_RA_DI_1_CH20_B1                          (g_dataBuffer_MVB[1632+1] & B1_03
#define LCUCCU_3_RA_DI_1_CH21_B1                          (g_dataBuffer_MVB[1632+1] & B1_04
#define LCUCCU_3_RA_DI_1_CH22_B1                          (g_dataBuffer_MVB[1632+1] & B1_05
#define LCUCCU_3_RA_DI_1_CH23_B1                          (g_dataBuffer_MVB[1632+1] & B1_06
#define LCUCCU_3_RA_DI_1_CH24_B1                          (g_dataBuffer_MVB[1632+1] & B1_07

#define LCUCCU_3_RA_DI_2_CH1_B1                           (g_dataBuffer_MVB[1632+1] & B1_10
#define LCUCCU_3_RA_DI_2_CH2_B1                           (g_dataBuffer_MVB[1632+1] & B1_11
#define LCUCCU_3_RA_DI_2_CH3_B1                           (g_dataBuffer_MVB[1632+1] & B1_12
#define LCUCCU_3_RA_DI_2_CH4_B1                           (g_dataBuffer_MVB[1632+1] & B1_13
#define LCUCCU_3_RA_DI_2_CH5_B1                           (g_dataBuffer_MVB[1632+1] & B1_14
#define LCUCCU_3_RA_DI_2_CH6_B1                           (g_dataBuffer_MVB[1632+1] & B1_15
#define LCUCCU_3_RA_DI_2_CH7_B1                           (g_dataBuffer_MVB[1632+1] & B1_16
#define LCUCCU_3_RA_DI_2_CH8_B1                           (g_dataBuffer_MVB[1632+1] & B1_17
#define LCUCCU_3_RA_DI_2_CH9_B1                           (g_dataBuffer_MVB[1632+2] & B1_00
#define LCUCCU_3_RA_DI_2_CH10_B1                          (g_dataBuffer_MVB[1632+2] & B1_01
#define LCUCCU_3_RA_DI_2_CH11_B1                          (g_dataBuffer_MVB[1632+2] & B1_02
#define LCUCCU_3_RA_DI_2_CH12_B1                          (g_dataBuffer_MVB[1632+2] & B1_03
#define LCUCCU_3_RA_DI_2_CH13_B1                          (g_dataBuffer_MVB[1632+2] & B1_04
#define LCUCCU_3_RA_DI_2_CH14_B1                          (g_dataBuffer_MVB[1632+2] & B1_05
#define LCUCCU_3_RA_DI_2_CH15_B1                          (g_dataBuffer_MVB[1632+2] & B1_06
#define LCUCCU_3_RA_DI_2_CH16_B1                          (g_dataBuffer_MVB[1632+2] & B1_07
#define LCUCCU_3_RA_DI_2_CH17_B1                          (g_dataBuffer_MVB[1632+2] & B1_10
#define LCUCCU_3_RA_DI_2_CH18_B1                          (g_dataBuffer_MVB[1632+2] & B1_11
#define LCUCCU_3_RA_DI_2_CH19_B1                          (g_dataBuffer_MVB[1632+2] & B1_12
#define LCUCCU_3_RA_DI_2_CH20_B1                          (g_dataBuffer_MVB[1632+2] & B1_13
#define LCUCCU_3_RA_DI_2_CH21_B1                          (g_dataBuffer_MVB[1632+2] & B1_14
#define LCUCCU_3_RA_DI_2_CH22_B1                          (g_dataBuffer_MVB[1632+2] & B1_15
#define LCUCCU_3_RA_DI_2_CH23_B1                          (g_dataBuffer_MVB[1632+2] & B1_16
#define LCUCCU_3_RA_DI_2_CH24_B1                          (g_dataBuffer_MVB[1632+2] & B1_17

#define LCUCCU_3_RA_DI_3_CH1_B1                           (g_dataBuffer_MVB[1632+3] & B1_00
#define LCUCCU_3_RA_DI_3_CH2_B1                           (g_dataBuffer_MVB[1632+3] & B1_01
#define LCUCCU_3_RA_DI_3_CH3_B1                           (g_dataBuffer_MVB[1632+3] & B1_02
#define LCUCCU_3_RA_DI_3_CH4_B1                           (g_dataBuffer_MVB[1632+3] & B1_03
#define LCUCCU_3_RA_DI_3_CH5_B1                           (g_dataBuffer_MVB[1632+3] & B1_04
#define LCUCCU_3_RA_DI_3_CH6_B1                           (g_dataBuffer_MVB[1632+3] & B1_05
#define LCUCCU_3_RA_DI_3_CH7_B1                           (g_dataBuffer_MVB[1632+3] & B1_06
#define LCUCCU_3_RA_DI_3_CH8_B1                           (g_dataBuffer_MVB[1632+3] & B1_07
#define LCUCCU_3_RA_DI_3_CH9_B1                           (g_dataBuffer_MVB[1632+3] & B1_10
#define LCUCCU_3_RA_DI_3_CH10_B1                          (g_dataBuffer_MVB[1632+3] & B1_11
#define LCUCCU_3_RA_DI_3_CH11_B1                          (g_dataBuffer_MVB[1632+3] & B1_12
#define LCUCCU_3_RA_DI_3_CH12_B1                          (g_dataBuffer_MVB[1632+3] & B1_13
#define LCUCCU_3_RA_DI_3_CH13_B1                          (g_dataBuffer_MVB[1632+3] & B1_14
#define LCUCCU_3_RA_DI_3_CH14_B1                          (g_dataBuffer_MVB[1632+3] & B1_15
#define LCUCCU_3_RA_DI_3_CH15_B1                          (g_dataBuffer_MVB[1632+3] & B1_16
#define LCUCCU_3_RA_DI_3_CH16_B1                          (g_dataBuffer_MVB[1632+3] & B1_17
#define LCUCCU_3_RA_DI_3_CH17_B1                          (g_dataBuffer_MVB[1632+4] & B1_00
#define LCUCCU_3_RA_DI_3_CH18_B1                          (g_dataBuffer_MVB[1632+4] & B1_01
#define LCUCCU_3_RA_DI_3_CH19_B1                          (g_dataBuffer_MVB[1632+4] & B1_02
#define LCUCCU_3_RA_DI_3_CH20_B1                          (g_dataBuffer_MVB[1632+4] & B1_03
#define LCUCCU_3_RA_DI_3_CH21_B1                          (g_dataBuffer_MVB[1632+4] & B1_04
#define LCUCCU_3_RA_DI_3_CH22_B1                          (g_dataBuffer_MVB[1632+4] & B1_05
#define LCUCCU_3_RA_DI_3_CH23_B1                          (g_dataBuffer_MVB[1632+4] & B1_06
#define LCUCCU_3_RA_DI_3_CH24_B1                          (g_dataBuffer_MVB[1632+4] & B1_07


//0x3a5=933    LCU_P_All (LCU_P  Master logic I/O digital input) R_DI(04)
                                                        //g_dataBuffer_MVB[1648+i] = (snkPortData3a5[i]);
#define LCUCCU_3_P_DI_1_CH1_B1                           (g_dataBuffer_MVB[1648+0] & B1_00
#define LCUCCU_3_P_DI_1_CH2_B1                           (g_dataBuffer_MVB[1648+0] & B1_01
#define LCUCCU_3_P_DI_1_CH3_B1                           (g_dataBuffer_MVB[1648+0] & B1_02
#define LCUCCU_3_P_DI_1_CH4_B1                           (g_dataBuffer_MVB[1648+0] & B1_03
#define LCUCCU_3_P_DI_1_CH5_B1                           (g_dataBuffer_MVB[1648+0] & B1_04
#define LCUCCU_3_P_DI_1_CH6_B1                           (g_dataBuffer_MVB[1648+0] & B1_05
#define LCUCCU_3_P_DI_1_CH7_B1                           (g_dataBuffer_MVB[1648+0] & B1_06
#define LCUCCU_3_P_DI_1_CH8_B1                           (g_dataBuffer_MVB[1648+0] & B1_07
#define LCUCCU_3_P_DI_1_CH9_B1                           (g_dataBuffer_MVB[1648+0] & B1_10
#define LCUCCU_3_P_DI_1_CH10_B1                          (g_dataBuffer_MVB[1648+0] & B1_11
#define LCUCCU_3_P_DI_1_CH11_B1                          (g_dataBuffer_MVB[1648+0] & B1_12
#define LCUCCU_3_P_DI_1_CH12_B1                          (g_dataBuffer_MVB[1648+0] & B1_13
#define LCUCCU_3_P_DI_1_CH13_B1                          (g_dataBuffer_MVB[1648+0] & B1_14
#define LCUCCU_3_P_DI_1_CH14_B1                          (g_dataBuffer_MVB[1648+0] & B1_15
#define LCUCCU_3_P_DI_1_CH15_B1                          (g_dataBuffer_MVB[1648+0] & B1_16
#define LCUCCU_3_P_DI_1_CH16_B1                          (g_dataBuffer_MVB[1648+0] & B1_17
#define LCUCCU_3_P_DI_1_CH17_B1                          (g_dataBuffer_MVB[1648+1] & B1_00
#define LCUCCU_3_P_DI_1_CH18_B1                          (g_dataBuffer_MVB[1648+1] & B1_01
#define LCUCCU_3_P_DI_1_CH19_B1                          (g_dataBuffer_MVB[1648+1] & B1_02
#define LCUCCU_3_P_DI_1_CH20_B1                          (g_dataBuffer_MVB[1648+1] & B1_03
#define LCUCCU_3_P_DI_1_CH21_B1                          (g_dataBuffer_MVB[1648+1] & B1_04
#define LCUCCU_3_P_DI_1_CH22_B1                          (g_dataBuffer_MVB[1648+1] & B1_05
#define LCUCCU_3_P_DI_1_CH23_B1                          (g_dataBuffer_MVB[1648+1] & B1_06
#define LCUCCU_3_P_DI_1_CH24_B1                          (g_dataBuffer_MVB[1648+1] & B1_07

#define LCUCCU_3_P_DI_2_CH1_B1                           (g_dataBuffer_MVB[1648+1] & B1_10
#define LCUCCU_3_P_DI_2_CH2_B1                           (g_dataBuffer_MVB[1648+1] & B1_11
#define LCUCCU_3_P_DI_2_CH3_B1                           (g_dataBuffer_MVB[1648+1] & B1_12
#define LCUCCU_3_P_DI_2_CH4_B1                           (g_dataBuffer_MVB[1648+1] & B1_13
#define LCUCCU_3_P_DI_2_CH5_B1                           (g_dataBuffer_MVB[1648+1] & B1_14
#define LCUCCU_3_P_DI_2_CH6_B1                           (g_dataBuffer_MVB[1648+1] & B1_15
#define LCUCCU_3_P_DI_2_CH7_B1                           (g_dataBuffer_MVB[1648+1] & B1_16
#define LCUCCU_3_P_DI_2_CH8_B1                           (g_dataBuffer_MVB[1648+1] & B1_17
#define LCUCCU_3_P_DI_2_CH9_B1                           (g_dataBuffer_MVB[1648+2] & B1_00
#define LCUCCU_3_P_DI_2_CH10_B1                          (g_dataBuffer_MVB[1648+2] & B1_01
#define LCUCCU_3_P_DI_2_CH11_B1                          (g_dataBuffer_MVB[1648+2] & B1_02
#define LCUCCU_3_P_DI_2_CH12_B1                          (g_dataBuffer_MVB[1648+2] & B1_03
#define LCUCCU_3_P_DI_2_CH13_B1                          (g_dataBuffer_MVB[1648+2] & B1_04
#define LCUCCU_3_P_DI_2_CH14_B1                          (g_dataBuffer_MVB[1648+2] & B1_05
#define LCUCCU_3_P_DI_2_CH15_B1                          (g_dataBuffer_MVB[1648+2] & B1_06
#define LCUCCU_3_P_DI_2_CH16_B1                          (g_dataBuffer_MVB[1648+2] & B1_07
#define LCUCCU_3_P_DI_2_CH17_B1                          (g_dataBuffer_MVB[1648+2] & B1_10
#define LCUCCU_3_P_DI_2_CH18_B1                          (g_dataBuffer_MVB[1648+2] & B1_11
#define LCUCCU_3_P_DI_2_CH19_B1                          (g_dataBuffer_MVB[1648+2] & B1_12
#define LCUCCU_3_P_DI_2_CH20_B1                          (g_dataBuffer_MVB[1648+2] & B1_13
#define LCUCCU_3_P_DI_2_CH21_B1                          (g_dataBuffer_MVB[1648+2] & B1_14
#define LCUCCU_3_P_DI_2_CH22_B1                          (g_dataBuffer_MVB[1648+2] & B1_15
#define LCUCCU_3_P_DI_2_CH23_B1                          (g_dataBuffer_MVB[1648+2] & B1_16
#define LCUCCU_3_P_DI_2_CH24_B1                          (g_dataBuffer_MVB[1648+2] & B1_17

#define LCUCCU_3_P_DI_3_CH1_B1                           (g_dataBuffer_MVB[1648+3] & B1_00
#define LCUCCU_3_P_DI_3_CH2_B1                           (g_dataBuffer_MVB[1648+3] & B1_01
#define LCUCCU_3_P_DI_3_CH3_B1                           (g_dataBuffer_MVB[1648+3] & B1_02
#define LCUCCU_3_P_DI_3_CH4_B1                           (g_dataBuffer_MVB[1648+3] & B1_03
#define LCUCCU_3_P_DI_3_CH5_B1                           (g_dataBuffer_MVB[1648+3] & B1_04
#define LCUCCU_3_P_DI_3_CH6_B1                           (g_dataBuffer_MVB[1648+3] & B1_05
#define LCUCCU_3_P_DI_3_CH7_B1                           (g_dataBuffer_MVB[1648+3] & B1_06
#define LCUCCU_3_P_DI_3_CH8_B1                           (g_dataBuffer_MVB[1648+3] & B1_07
#define LCUCCU_3_P_DI_3_CH9_B1                           (g_dataBuffer_MVB[1648+3] & B1_10
#define LCUCCU_3_P_DI_3_CH10_B1                          (g_dataBuffer_MVB[1648+3] & B1_11
#define LCUCCU_3_P_DI_3_CH11_B1                          (g_dataBuffer_MVB[1648+3] & B1_12
#define LCUCCU_3_P_DI_3_CH12_B1                          (g_dataBuffer_MVB[1648+3] & B1_13
#define LCUCCU_3_P_DI_3_CH13_B1                          (g_dataBuffer_MVB[1648+3] & B1_14
#define LCUCCU_3_P_DI_3_CH14_B1                          (g_dataBuffer_MVB[1648+3] & B1_15
#define LCUCCU_3_P_DI_3_CH15_B1                          (g_dataBuffer_MVB[1648+3] & B1_16
#define LCUCCU_3_P_DI_3_CH16_B1                          (g_dataBuffer_MVB[1648+3] & B1_17
#define LCUCCU_3_P_DI_3_CH17_B1                          (g_dataBuffer_MVB[1648+4] & B1_00
#define LCUCCU_3_P_DI_3_CH18_B1                          (g_dataBuffer_MVB[1648+4] & B1_01
#define LCUCCU_3_P_DI_3_CH19_B1                          (g_dataBuffer_MVB[1648+4] & B1_02
#define LCUCCU_3_P_DI_3_CH20_B1                          (g_dataBuffer_MVB[1648+4] & B1_03
#define LCUCCU_3_P_DI_3_CH21_B1                          (g_dataBuffer_MVB[1648+4] & B1_04
#define LCUCCU_3_P_DI_3_CH22_B1                          (g_dataBuffer_MVB[1648+4] & B1_05
#define LCUCCU_3_P_DI_3_CH23_B1                          (g_dataBuffer_MVB[1648+4] & B1_06
#define LCUCCU_3_P_DI_3_CH24_B1                          (g_dataBuffer_MVB[1648+4] & B1_07


//0x3af=943    LCU_RB_All(LCU_RB Master logic I/O digital input) R_DI(05)
                                                        //g_dataBuffer_MVB[1664+i] = (snkPortData3af[i]);
#define LCUCCU_3_RB_DI_1_CH1_B1                           (g_dataBuffer_MVB[1664+0] & B1_00
#define LCUCCU_3_RB_DI_1_CH2_B1                           (g_dataBuffer_MVB[1664+0] & B1_01
#define LCUCCU_3_RB_DI_1_CH3_B1                           (g_dataBuffer_MVB[1664+0] & B1_02
#define LCUCCU_3_RB_DI_1_CH4_B1                           (g_dataBuffer_MVB[1664+0] & B1_03
#define LCUCCU_3_RB_DI_1_CH5_B1                           (g_dataBuffer_MVB[1664+0] & B1_04
#define LCUCCU_3_RB_DI_1_CH6_B1                           (g_dataBuffer_MVB[1664+0] & B1_05
#define LCUCCU_3_RB_DI_1_CH7_B1                           (g_dataBuffer_MVB[1664+0] & B1_06
#define LCUCCU_3_RB_DI_1_CH8_B1                           (g_dataBuffer_MVB[1664+0] & B1_07
#define LCUCCU_3_RB_DI_1_CH9_B1                           (g_dataBuffer_MVB[1664+0] & B1_10
#define LCUCCU_3_RB_DI_1_CH10_B1                          (g_dataBuffer_MVB[1664+0] & B1_11
#define LCUCCU_3_RB_DI_1_CH11_B1                          (g_dataBuffer_MVB[1664+0] & B1_12
#define LCUCCU_3_RB_DI_1_CH12_B1                          (g_dataBuffer_MVB[1664+0] & B1_13
#define LCUCCU_3_RB_DI_1_CH13_B1                          (g_dataBuffer_MVB[1664+0] & B1_14
#define LCUCCU_3_RB_DI_1_CH14_B1                          (g_dataBuffer_MVB[1664+0] & B1_15
#define LCUCCU_3_RB_DI_1_CH15_B1                          (g_dataBuffer_MVB[1664+0] & B1_16
#define LCUCCU_3_RB_DI_1_CH16_B1                          (g_dataBuffer_MVB[1664+0] & B1_17
#define LCUCCU_3_RB_DI_1_CH17_B1                          (g_dataBuffer_MVB[1664+1] & B1_00
#define LCUCCU_3_RB_DI_1_CH18_B1                          (g_dataBuffer_MVB[1664+1] & B1_01
#define LCUCCU_3_RB_DI_1_CH19_B1                          (g_dataBuffer_MVB[1664+1] & B1_02
#define LCUCCU_3_RB_DI_1_CH20_B1                          (g_dataBuffer_MVB[1664+1] & B1_03
#define LCUCCU_3_RB_DI_1_CH21_B1                          (g_dataBuffer_MVB[1664+1] & B1_04
#define LCUCCU_3_RB_DI_1_CH22_B1                          (g_dataBuffer_MVB[1664+1] & B1_05
#define LCUCCU_3_RB_DI_1_CH23_B1                          (g_dataBuffer_MVB[1664+1] & B1_06
#define LCUCCU_3_RB_DI_1_CH24_B1                          (g_dataBuffer_MVB[1664+1] & B1_07

#define LCUCCU_3_RB_DI_2_CH1_B1                           (g_dataBuffer_MVB[1664+1] & B1_10
#define LCUCCU_3_RB_DI_2_CH2_B1                           (g_dataBuffer_MVB[1664+1] & B1_11
#define LCUCCU_3_RB_DI_2_CH3_B1                           (g_dataBuffer_MVB[1664+1] & B1_12
#define LCUCCU_3_RB_DI_2_CH4_B1                           (g_dataBuffer_MVB[1664+1] & B1_13
#define LCUCCU_3_RB_DI_2_CH5_B1                           (g_dataBuffer_MVB[1664+1] & B1_14
#define LCUCCU_3_RB_DI_2_CH6_B1                           (g_dataBuffer_MVB[1664+1] & B1_15
#define LCUCCU_3_RB_DI_2_CH7_B1                           (g_dataBuffer_MVB[1664+1] & B1_16
#define LCUCCU_3_RB_DI_2_CH8_B1                           (g_dataBuffer_MVB[1664+1] & B1_17
#define LCUCCU_3_RB_DI_2_CH9_B1                           (g_dataBuffer_MVB[1664+2] & B1_00
#define LCUCCU_3_RB_DI_2_CH10_B1                          (g_dataBuffer_MVB[1664+2] & B1_01
#define LCUCCU_3_RB_DI_2_CH11_B1                          (g_dataBuffer_MVB[1664+2] & B1_02
#define LCUCCU_3_RB_DI_2_CH12_B1                          (g_dataBuffer_MVB[1664+2] & B1_03
#define LCUCCU_3_RB_DI_2_CH13_B1                          (g_dataBuffer_MVB[1664+2] & B1_04
#define LCUCCU_3_RB_DI_2_CH14_B1                          (g_dataBuffer_MVB[1664+2] & B1_05
#define LCUCCU_3_RB_DI_2_CH15_B1                          (g_dataBuffer_MVB[1664+2] & B1_06
#define LCUCCU_3_RB_DI_2_CH16_B1                          (g_dataBuffer_MVB[1664+2] & B1_07
#define LCUCCU_3_RB_DI_2_CH17_B1                          (g_dataBuffer_MVB[1664+2] & B1_10
#define LCUCCU_3_RB_DI_2_CH18_B1                          (g_dataBuffer_MVB[1664+2] & B1_11
#define LCUCCU_3_RB_DI_2_CH19_B1                          (g_dataBuffer_MVB[1664+2] & B1_12
#define LCUCCU_3_RB_DI_2_CH20_B1                          (g_dataBuffer_MVB[1664+2] & B1_13
#define LCUCCU_3_RB_DI_2_CH21_B1                          (g_dataBuffer_MVB[1664+2] & B1_14
#define LCUCCU_3_RB_DI_2_CH22_B1                          (g_dataBuffer_MVB[1664+2] & B1_15
#define LCUCCU_3_RB_DI_2_CH23_B1                          (g_dataBuffer_MVB[1664+2] & B1_16
#define LCUCCU_3_RB_DI_2_CH24_B1                          (g_dataBuffer_MVB[1664+2] & B1_17

#define LCUCCU_3_RB_DI_3_CH1_B1                           (g_dataBuffer_MVB[1664+3] & B1_00
#define LCUCCU_3_RB_DI_3_CH2_B1                           (g_dataBuffer_MVB[1664+3] & B1_01
#define LCUCCU_3_RB_DI_3_CH3_B1                           (g_dataBuffer_MVB[1664+3] & B1_02
#define LCUCCU_3_RB_DI_3_CH4_B1                           (g_dataBuffer_MVB[1664+3] & B1_03
#define LCUCCU_3_RB_DI_3_CH5_B1                           (g_dataBuffer_MVB[1664+3] & B1_04
#define LCUCCU_3_RB_DI_3_CH6_B1                           (g_dataBuffer_MVB[1664+3] & B1_05
#define LCUCCU_3_RB_DI_3_CH7_B1                           (g_dataBuffer_MVB[1664+3] & B1_06
#define LCUCCU_3_RB_DI_3_CH8_B1                           (g_dataBuffer_MVB[1664+3] & B1_07
#define LCUCCU_3_RB_DI_3_CH9_B1                           (g_dataBuffer_MVB[1664+3] & B1_10
#define LCUCCU_3_RB_DI_3_CH10_B1                          (g_dataBuffer_MVB[1664+3] & B1_11
#define LCUCCU_3_RB_DI_3_CH11_B1                          (g_dataBuffer_MVB[1664+3] & B1_12
#define LCUCCU_3_RB_DI_3_CH12_B1                          (g_dataBuffer_MVB[1664+3] & B1_13
#define LCUCCU_3_RB_DI_3_CH13_B1                          (g_dataBuffer_MVB[1664+3] & B1_14
#define LCUCCU_3_RB_DI_3_CH14_B1                          (g_dataBuffer_MVB[1664+3] & B1_15
#define LCUCCU_3_RB_DI_3_CH15_B1                          (g_dataBuffer_MVB[1664+3] & B1_16
#define LCUCCU_3_RB_DI_3_CH16_B1                          (g_dataBuffer_MVB[1664+3] & B1_17
#define LCUCCU_3_RB_DI_3_CH17_B1                          (g_dataBuffer_MVB[1664+4] & B1_00
#define LCUCCU_3_RB_DI_3_CH18_B1                          (g_dataBuffer_MVB[1664+4] & B1_01
#define LCUCCU_3_RB_DI_3_CH19_B1                          (g_dataBuffer_MVB[1664+4] & B1_02
#define LCUCCU_3_RB_DI_3_CH20_B1                          (g_dataBuffer_MVB[1664+4] & B1_03
#define LCUCCU_3_RB_DI_3_CH21_B1                          (g_dataBuffer_MVB[1664+4] & B1_04
#define LCUCCU_3_RB_DI_3_CH22_B1                          (g_dataBuffer_MVB[1664+4] & B1_05
#define LCUCCU_3_RB_DI_3_CH23_B1                          (g_dataBuffer_MVB[1664+4] & B1_06
#define LCUCCU_3_RB_DI_3_CH24_B1                          (g_dataBuffer_MVB[1664+4] & B1_07


//0x3b9=953    LCU_MB_All(LCU_MB Master logic I/O digital input) R_DI(08)
                                                        //g_dataBuffer_MVB[1680+i] = (snkPortData3b9[i]);
#define LCUCCU_3_MB_DI_1_CH1_B1                           (g_dataBuffer_MVB[1680+0] & B1_00
#define LCUCCU_3_MB_DI_1_CH2_B1                           (g_dataBuffer_MVB[1680+0] & B1_01
#define LCUCCU_3_MB_DI_1_CH3_B1                           (g_dataBuffer_MVB[1680+0] & B1_02
#define LCUCCU_3_MB_DI_1_CH4_B1                           (g_dataBuffer_MVB[1680+0] & B1_03
#define LCUCCU_3_MB_DI_1_CH5_B1                           (g_dataBuffer_MVB[1680+0] & B1_04
#define LCUCCU_3_MB_DI_1_CH6_B1                           (g_dataBuffer_MVB[1680+0] & B1_05
#define LCUCCU_3_MB_DI_1_CH7_B1                           (g_dataBuffer_MVB[1680+0] & B1_06
#define LCUCCU_3_MB_DI_1_CH8_B1                           (g_dataBuffer_MVB[1680+0] & B1_07
#define LCUCCU_3_MB_DI_1_CH9_B1                           (g_dataBuffer_MVB[1680+0] & B1_10
#define LCUCCU_3_MB_DI_1_CH10_B1                          (g_dataBuffer_MVB[1680+0] & B1_11
#define LCUCCU_3_MB_DI_1_CH11_B1                          (g_dataBuffer_MVB[1680+0] & B1_12
#define LCUCCU_3_MB_DI_1_CH12_B1                          (g_dataBuffer_MVB[1680+0] & B1_13
#define LCUCCU_3_MB_DI_1_CH13_B1                          (g_dataBuffer_MVB[1680+0] & B1_14
#define LCUCCU_3_MB_DI_1_CH14_B1                          (g_dataBuffer_MVB[1680+0] & B1_15
#define LCUCCU_3_MB_DI_1_CH15_B1                          (g_dataBuffer_MVB[1680+0] & B1_16
#define LCUCCU_3_MB_DI_1_CH16_B1                          (g_dataBuffer_MVB[1680+0] & B1_17
#define LCUCCU_3_MB_DI_1_CH17_B1                          (g_dataBuffer_MVB[1680+1] & B1_00
#define LCUCCU_3_MB_DI_1_CH18_B1                          (g_dataBuffer_MVB[1680+1] & B1_01
#define LCUCCU_3_MB_DI_1_CH19_B1                          (g_dataBuffer_MVB[1680+1] & B1_02
#define LCUCCU_3_MB_DI_1_CH20_B1                          (g_dataBuffer_MVB[1680+1] & B1_03
#define LCUCCU_3_MB_DI_1_CH21_B1                          (g_dataBuffer_MVB[1680+1] & B1_04
#define LCUCCU_3_MB_DI_1_CH22_B1                          (g_dataBuffer_MVB[1680+1] & B1_05
#define LCUCCU_3_MB_DI_1_CH23_B1                          (g_dataBuffer_MVB[1680+1] & B1_06
#define LCUCCU_3_MB_DI_1_CH24_B1                          (g_dataBuffer_MVB[1680+1] & B1_07

#define LCUCCU_3_MB_DI_2_CH1_B1                           (g_dataBuffer_MVB[1680+1] & B1_10
#define LCUCCU_3_MB_DI_2_CH2_B1                           (g_dataBuffer_MVB[1680+1] & B1_11
#define LCUCCU_3_MB_DI_2_CH3_B1                           (g_dataBuffer_MVB[1680+1] & B1_12
#define LCUCCU_3_MB_DI_2_CH4_B1                           (g_dataBuffer_MVB[1680+1] & B1_13
#define LCUCCU_3_MB_DI_2_CH5_B1                           (g_dataBuffer_MVB[1680+1] & B1_14
#define LCUCCU_3_MB_DI_2_CH6_B1                           (g_dataBuffer_MVB[1680+1] & B1_15
#define LCUCCU_3_MB_DI_2_CH7_B1                           (g_dataBuffer_MVB[1680+1] & B1_16
#define LCUCCU_3_MB_DI_2_CH8_B1                           (g_dataBuffer_MVB[1680+1] & B1_17
#define LCUCCU_3_MB_DI_2_CH9_B1                           (g_dataBuffer_MVB[1680+2] & B1_00
#define LCUCCU_3_MB_DI_2_CH10_B1                          (g_dataBuffer_MVB[1680+2] & B1_01
#define LCUCCU_3_MB_DI_2_CH11_B1                          (g_dataBuffer_MVB[1680+2] & B1_02
#define LCUCCU_3_MB_DI_2_CH12_B1                          (g_dataBuffer_MVB[1680+2] & B1_03
#define LCUCCU_3_MB_DI_2_CH13_B1                          (g_dataBuffer_MVB[1680+2] & B1_04
#define LCUCCU_3_MB_DI_2_CH14_B1                          (g_dataBuffer_MVB[1680+2] & B1_05
#define LCUCCU_3_MB_DI_2_CH15_B1                          (g_dataBuffer_MVB[1680+2] & B1_06
#define LCUCCU_3_MB_DI_2_CH16_B1                          (g_dataBuffer_MVB[1680+2] & B1_07
#define LCUCCU_3_MB_DI_2_CH17_B1                          (g_dataBuffer_MVB[1680+2] & B1_10
#define LCUCCU_3_MB_DI_2_CH18_B1                          (g_dataBuffer_MVB[1680+2] & B1_11
#define LCUCCU_3_MB_DI_2_CH19_B1                          (g_dataBuffer_MVB[1680+2] & B1_12
#define LCUCCU_3_MB_DI_2_CH20_B1                          (g_dataBuffer_MVB[1680+2] & B1_13
#define LCUCCU_3_MB_DI_2_CH21_B1                          (g_dataBuffer_MVB[1680+2] & B1_14
#define LCUCCU_3_MB_DI_2_CH22_B1                          (g_dataBuffer_MVB[1680+2] & B1_15
#define LCUCCU_3_MB_DI_2_CH23_B1                          (g_dataBuffer_MVB[1680+2] & B1_16
#define LCUCCU_3_MB_DI_2_CH24_B1                          (g_dataBuffer_MVB[1680+2] & B1_17

#define LCUCCU_3_MB_DI_3_CH1_B1                           (g_dataBuffer_MVB[1680+3] & B1_00
#define LCUCCU_3_MB_DI_3_CH2_B1                           (g_dataBuffer_MVB[1680+3] & B1_01
#define LCUCCU_3_MB_DI_3_CH3_B1                           (g_dataBuffer_MVB[1680+3] & B1_02
#define LCUCCU_3_MB_DI_3_CH4_B1                           (g_dataBuffer_MVB[1680+3] & B1_03
#define LCUCCU_3_MB_DI_3_CH5_B1                           (g_dataBuffer_MVB[1680+3] & B1_04
#define LCUCCU_3_MB_DI_3_CH6_B1                           (g_dataBuffer_MVB[1680+3] & B1_05
#define LCUCCU_3_MB_DI_3_CH7_B1                           (g_dataBuffer_MVB[1680+3] & B1_06
#define LCUCCU_3_MB_DI_3_CH8_B1                           (g_dataBuffer_MVB[1680+3] & B1_07
#define LCUCCU_3_MB_DI_3_CH9_B1                           (g_dataBuffer_MVB[1680+3] & B1_10
#define LCUCCU_3_MB_DI_3_CH10_B1                          (g_dataBuffer_MVB[1680+3] & B1_11
#define LCUCCU_3_MB_DI_3_CH11_B1                          (g_dataBuffer_MVB[1680+3] & B1_12
#define LCUCCU_3_MB_DI_3_CH12_B1                          (g_dataBuffer_MVB[1680+3] & B1_13
#define LCUCCU_3_MB_DI_3_CH13_B1                          (g_dataBuffer_MVB[1680+3] & B1_14
#define LCUCCU_3_MB_DI_3_CH14_B1                          (g_dataBuffer_MVB[1680+3] & B1_15
#define LCUCCU_3_MB_DI_3_CH15_B1                          (g_dataBuffer_MVB[1680+3] & B1_16
#define LCUCCU_3_MB_DI_3_CH16_B1                          (g_dataBuffer_MVB[1680+3] & B1_17
#define LCUCCU_3_MB_DI_3_CH17_B1                          (g_dataBuffer_MVB[1680+4] & B1_00
#define LCUCCU_3_MB_DI_3_CH18_B1                          (g_dataBuffer_MVB[1680+4] & B1_01
#define LCUCCU_3_MB_DI_3_CH19_B1                          (g_dataBuffer_MVB[1680+4] & B1_02
#define LCUCCU_3_MB_DI_3_CH20_B1                          (g_dataBuffer_MVB[1680+4] & B1_03
#define LCUCCU_3_MB_DI_3_CH21_B1                          (g_dataBuffer_MVB[1680+4] & B1_04
#define LCUCCU_3_MB_DI_3_CH22_B1                          (g_dataBuffer_MVB[1680+4] & B1_05
#define LCUCCU_3_MB_DI_3_CH23_B1                          (g_dataBuffer_MVB[1680+4] & B1_06
#define LCUCCU_3_MB_DI_3_CH24_B1                          (g_dataBuffer_MVB[1680+4] & B1_07

#define LCUCCU_3_MB_DI_4_CH1_B1                           (g_dataBuffer_MVB[1680+4] & B1_10
#define LCUCCU_3_MB_DI_4_CH2_B1                           (g_dataBuffer_MVB[1680+4] & B1_11
#define LCUCCU_3_MB_DI_4_CH3_B1                           (g_dataBuffer_MVB[1680+4] & B1_12
#define LCUCCU_3_MB_DI_4_CH4_B1                           (g_dataBuffer_MVB[1680+4] & B1_13
#define LCUCCU_3_MB_DI_4_CH5_B1                           (g_dataBuffer_MVB[1680+4] & B1_14
#define LCUCCU_3_MB_DI_4_CH6_B1                           (g_dataBuffer_MVB[1680+4] & B1_15
#define LCUCCU_3_MB_DI_4_CH7_B1                           (g_dataBuffer_MVB[1680+4] & B1_16
#define LCUCCU_3_MB_DI_4_CH8_B1                           (g_dataBuffer_MVB[1680+4] & B1_17
#define LCUCCU_3_MB_DI_4_CH9_B1                           (g_dataBuffer_MVB[1680+5] & B1_00
#define LCUCCU_3_MB_DI_4_CH10_B1                          (g_dataBuffer_MVB[1680+5] & B1_01
#define LCUCCU_3_MB_DI_4_CH11_B1                          (g_dataBuffer_MVB[1680+5] & B1_02
#define LCUCCU_3_MB_DI_4_CH12_B1                          (g_dataBuffer_MVB[1680+5] & B1_03
#define LCUCCU_3_MB_DI_4_CH13_B1                          (g_dataBuffer_MVB[1680+5] & B1_04
#define LCUCCU_3_MB_DI_4_CH14_B1                          (g_dataBuffer_MVB[1680+5] & B1_05
#define LCUCCU_3_MB_DI_4_CH15_B1                          (g_dataBuffer_MVB[1680+5] & B1_06
#define LCUCCU_3_MB_DI_4_CH16_B1                          (g_dataBuffer_MVB[1680+5] & B1_07
#define LCUCCU_3_MB_DI_4_CH17_B1                          (g_dataBuffer_MVB[1680+5] & B1_10
#define LCUCCU_3_MB_DI_4_CH18_B1                          (g_dataBuffer_MVB[1680+5] & B1_11
#define LCUCCU_3_MB_DI_4_CH19_B1                          (g_dataBuffer_MVB[1680+5] & B1_12
#define LCUCCU_3_MB_DI_4_CH20_B1                          (g_dataBuffer_MVB[1680+5] & B1_13
#define LCUCCU_3_MB_DI_4_CH21_B1                          (g_dataBuffer_MVB[1680+5] & B1_14
#define LCUCCU_3_MB_DI_4_CH22_B1                          (g_dataBuffer_MVB[1680+5] & B1_15
#define LCUCCU_3_MB_DI_4_CH23_B1                          (g_dataBuffer_MVB[1680+5] & B1_16
#define LCUCCU_3_MB_DI_4_CH24_B1                          (g_dataBuffer_MVB[1680+5] & B1_17

#define LCUCCU_3_MB_DI_5_CH1_B1                           (g_dataBuffer_MVB[1680+6] & B1_00
#define LCUCCU_3_MB_DI_5_CH2_B1                           (g_dataBuffer_MVB[1680+6] & B1_01
#define LCUCCU_3_MB_DI_5_CH3_B1                           (g_dataBuffer_MVB[1680+6] & B1_02
#define LCUCCU_3_MB_DI_5_CH4_B1                           (g_dataBuffer_MVB[1680+6] & B1_03
#define LCUCCU_3_MB_DI_5_CH5_B1                           (g_dataBuffer_MVB[1680+6] & B1_04
#define LCUCCU_3_MB_DI_5_CH6_B1                           (g_dataBuffer_MVB[1680+6] & B1_05
#define LCUCCU_3_MB_DI_5_CH7_B1                           (g_dataBuffer_MVB[1680+6] & B1_06
#define LCUCCU_3_MB_DI_5_CH8_B1                           (g_dataBuffer_MVB[1680+6] & B1_07
#define LCUCCU_3_MB_DI_5_CH9_B1                           (g_dataBuffer_MVB[1680+6] & B1_10
#define LCUCCU_3_MB_DI_5_CH10_B1                          (g_dataBuffer_MVB[1680+6] & B1_11
#define LCUCCU_3_MB_DI_5_CH11_B1                          (g_dataBuffer_MVB[1680+6] & B1_12
#define LCUCCU_3_MB_DI_5_CH12_B1                          (g_dataBuffer_MVB[1680+6] & B1_13
#define LCUCCU_3_MB_DI_5_CH13_B1                          (g_dataBuffer_MVB[1680+6] & B1_14
#define LCUCCU_3_MB_DI_5_CH14_B1                          (g_dataBuffer_MVB[1680+6] & B1_15
#define LCUCCU_3_MB_DI_5_CH15_B1                          (g_dataBuffer_MVB[1680+6] & B1_16
#define LCUCCU_3_MB_DI_5_CH16_B1                          (g_dataBuffer_MVB[1680+6] & B1_17
#define LCUCCU_3_MB_DI_5_CH17_B1                          (g_dataBuffer_MVB[1680+7] & B1_00
#define LCUCCU_3_MB_DI_5_CH18_B1                          (g_dataBuffer_MVB[1680+7] & B1_01
#define LCUCCU_3_MB_DI_5_CH19_B1                          (g_dataBuffer_MVB[1680+7] & B1_02
#define LCUCCU_3_MB_DI_5_CH20_B1                          (g_dataBuffer_MVB[1680+7] & B1_03
#define LCUCCU_3_MB_DI_5_CH21_B1                          (g_dataBuffer_MVB[1680+7] & B1_04
#define LCUCCU_3_MB_DI_5_CH22_B1                          (g_dataBuffer_MVB[1680+7] & B1_05
#define LCUCCU_3_MB_DI_5_CH23_B1                          (g_dataBuffer_MVB[1680+7] & B1_06
#define LCUCCU_3_MB_DI_5_CH24_B1                          (g_dataBuffer_MVB[1680+7] & B1_07

#define LCUCCU_3_MB_DI_6_CH1_B1                           (g_dataBuffer_MVB[1680+7] & B1_10
#define LCUCCU_3_MB_DI_6_CH2_B1                           (g_dataBuffer_MVB[1680+7] & B1_11
#define LCUCCU_3_MB_DI_6_CH3_B1                           (g_dataBuffer_MVB[1680+7] & B1_12
#define LCUCCU_3_MB_DI_6_CH4_B1                           (g_dataBuffer_MVB[1680+7] & B1_13
#define LCUCCU_3_MB_DI_6_CH5_B1                           (g_dataBuffer_MVB[1680+7] & B1_14
#define LCUCCU_3_MB_DI_6_CH6_B1                           (g_dataBuffer_MVB[1680+7] & B1_15
#define LCUCCU_3_MB_DI_6_CH7_B1                           (g_dataBuffer_MVB[1680+7] & B1_16
#define LCUCCU_3_MB_DI_6_CH8_B1                           (g_dataBuffer_MVB[1680+7] & B1_17
#define LCUCCU_3_MB_DI_6_CH9_B1                           (g_dataBuffer_MVB[1680+8] & B1_00
#define LCUCCU_3_MB_DI_6_CH10_B1                          (g_dataBuffer_MVB[1680+8] & B1_01
#define LCUCCU_3_MB_DI_6_CH11_B1                          (g_dataBuffer_MVB[1680+8] & B1_02
#define LCUCCU_3_MB_DI_6_CH12_B1                          (g_dataBuffer_MVB[1680+8] & B1_03
#define LCUCCU_3_MB_DI_6_CH13_B1                          (g_dataBuffer_MVB[1680+8] & B1_04
#define LCUCCU_3_MB_DI_6_CH14_B1                          (g_dataBuffer_MVB[1680+8] & B1_05
#define LCUCCU_3_MB_DI_6_CH15_B1                          (g_dataBuffer_MVB[1680+8] & B1_06
#define LCUCCU_3_MB_DI_6_CH16_B1                          (g_dataBuffer_MVB[1680+8] & B1_07
#define LCUCCU_3_MB_DI_6_CH17_B1                          (g_dataBuffer_MVB[1680+8] & B1_10
#define LCUCCU_3_MB_DI_6_CH18_B1                          (g_dataBuffer_MVB[1680+8] & B1_11
#define LCUCCU_3_MB_DI_6_CH19_B1                          (g_dataBuffer_MVB[1680+8] & B1_12
#define LCUCCU_3_MB_DI_6_CH20_B1                          (g_dataBuffer_MVB[1680+8] & B1_13
#define LCUCCU_3_MB_DI_6_CH21_B1                          (g_dataBuffer_MVB[1680+8] & B1_14
#define LCUCCU_3_MB_DI_6_CH22_B1                          (g_dataBuffer_MVB[1680+8] & B1_15
#define LCUCCU_3_MB_DI_6_CH23_B1                          (g_dataBuffer_MVB[1680+8] & B1_16
#define LCUCCU_3_MB_DI_6_CH24_B1                          (g_dataBuffer_MVB[1680+8] & B1_17



//R_DO(01/03/04/05/08)(4) Master logic I/O digital output
//0x392=914    LCU_MA_All(LCU_MA Master logic I/O digital output) R_DO(01)
                                                        //g_dataBuffer_MVB[1696+i] = (snkPortData392[i]);
#define LCUCCU_4_MA_DO_1_CH1_B1                           (g_dataBuffer_MVB[1696+0] & B1_00
#define LCUCCU_4_MA_DO_1_CH2_B1                           (g_dataBuffer_MVB[1696+0] & B1_01
#define LCUCCU_4_MA_DO_1_CH3_B1                           (g_dataBuffer_MVB[1696+0] & B1_02
#define LCUCCU_4_MA_DO_1_CH4_B1                           (g_dataBuffer_MVB[1696+0] & B1_03
#define LCUCCU_4_MA_DO_1_CH5_B1                           (g_dataBuffer_MVB[1696+0] & B1_04
#define LCUCCU_4_MA_DO_1_CH6_B1                           (g_dataBuffer_MVB[1696+0] & B1_05
#define LCUCCU_4_MA_DO_1_CH7_B1                           (g_dataBuffer_MVB[1696+0] & B1_06
#define LCUCCU_4_MA_DO_1_CH8_B1                           (g_dataBuffer_MVB[1696+0] & B1_07
#define LCUCCU_4_MA_DO_1_CH9_B1                           (g_dataBuffer_MVB[1696+0] & B1_10
#define LCUCCU_4_MA_DO_1_CH10_B1                          (g_dataBuffer_MVB[1696+0] & B1_11
#define LCUCCU_4_MA_DO_1_CH11_B1                          (g_dataBuffer_MVB[1696+0] & B1_12
#define LCUCCU_4_MA_DO_1_CH12_B1                          (g_dataBuffer_MVB[1696+0] & B1_13
#define LCUCCU_4_MA_DO_1_CH13_B1                          (g_dataBuffer_MVB[1696+0] & B1_14
#define LCUCCU_4_MA_DO_1_CH14_B1                          (g_dataBuffer_MVB[1696+0] & B1_15
#define LCUCCU_4_MA_DO_1_CH15_B1                          (g_dataBuffer_MVB[1696+0] & B1_16
#define LCUCCU_4_MA_DO_1_CH16_B1                          (g_dataBuffer_MVB[1696+0] & B1_17
#define LCUCCU_4_MA_DO_1_CH17_B1                          (g_dataBuffer_MVB[1696+1] & B1_00
#define LCUCCU_4_MA_DO_1_CH18_B1                          (g_dataBuffer_MVB[1696+1] & B1_01
#define LCUCCU_4_MA_DO_1_CH19_B1                          (g_dataBuffer_MVB[1696+1] & B1_02
#define LCUCCU_4_MA_DO_1_CH20_B1                          (g_dataBuffer_MVB[1696+1] & B1_03
#define LCUCCU_4_MA_DO_1_CH21_B1                          (g_dataBuffer_MVB[1696+1] & B1_04
#define LCUCCU_4_MA_DO_1_CH22_B1                          (g_dataBuffer_MVB[1696+1] & B1_05
#define LCUCCU_4_MA_DO_1_CH23_B1                          (g_dataBuffer_MVB[1696+1] & B1_06
#define LCUCCU_4_MA_DO_1_CH24_B1                          (g_dataBuffer_MVB[1696+1] & B1_07

#define LCUCCU_4_MA_DO_2_CH1_B1                           (g_dataBuffer_MVB[1696+1] & B1_10
#define LCUCCU_4_MA_DO_2_CH2_B1                           (g_dataBuffer_MVB[1696+1] & B1_11
#define LCUCCU_4_MA_DO_2_CH3_B1                           (g_dataBuffer_MVB[1696+1] & B1_12
#define LCUCCU_4_MA_DO_2_CH4_B1                           (g_dataBuffer_MVB[1696+1] & B1_13
#define LCUCCU_4_MA_DO_2_CH5_B1                           (g_dataBuffer_MVB[1696+1] & B1_14
#define LCUCCU_4_MA_DO_2_CH6_B1                           (g_dataBuffer_MVB[1696+1] & B1_15
#define LCUCCU_4_MA_DO_2_CH7_B1                           (g_dataBuffer_MVB[1696+1] & B1_16
#define LCUCCU_4_MA_DO_2_CH8_B1                           (g_dataBuffer_MVB[1696+1] & B1_17
#define LCUCCU_4_MA_DO_2_CH9_B1                           (g_dataBuffer_MVB[1696+2] & B1_00
#define LCUCCU_4_MA_DO_2_CH10_B1                          (g_dataBuffer_MVB[1696+2] & B1_01
#define LCUCCU_4_MA_DO_2_CH11_B1                          (g_dataBuffer_MVB[1696+2] & B1_02
#define LCUCCU_4_MA_DO_2_CH12_B1                          (g_dataBuffer_MVB[1696+2] & B1_03
#define LCUCCU_4_MA_DO_2_CH13_B1                          (g_dataBuffer_MVB[1696+2] & B1_04
#define LCUCCU_4_MA_DO_2_CH14_B1                          (g_dataBuffer_MVB[1696+2] & B1_05
#define LCUCCU_4_MA_DO_2_CH15_B1                          (g_dataBuffer_MVB[1696+2] & B1_06
#define LCUCCU_4_MA_DO_2_CH16_B1                          (g_dataBuffer_MVB[1696+2] & B1_07
#define LCUCCU_4_MA_DO_2_CH17_B1                          (g_dataBuffer_MVB[1696+2] & B1_10
#define LCUCCU_4_MA_DO_2_CH18_B1                          (g_dataBuffer_MVB[1696+2] & B1_11
#define LCUCCU_4_MA_DO_2_CH19_B1                          (g_dataBuffer_MVB[1696+2] & B1_12
#define LCUCCU_4_MA_DO_2_CH20_B1                          (g_dataBuffer_MVB[1696+2] & B1_13
#define LCUCCU_4_MA_DO_2_CH21_B1                          (g_dataBuffer_MVB[1696+2] & B1_14
#define LCUCCU_4_MA_DO_2_CH22_B1                          (g_dataBuffer_MVB[1696+2] & B1_15
#define LCUCCU_4_MA_DO_2_CH23_B1                          (g_dataBuffer_MVB[1696+2] & B1_16
#define LCUCCU_4_MA_DO_2_CH24_B1                          (g_dataBuffer_MVB[1696+2] & B1_17

#define LCUCCU_4_MA_DO_3_CH1_B1                           (g_dataBuffer_MVB[1696+3] & B1_00
#define LCUCCU_4_MA_DO_3_CH2_B1                           (g_dataBuffer_MVB[1696+3] & B1_01
#define LCUCCU_4_MA_DO_3_CH3_B1                           (g_dataBuffer_MVB[1696+3] & B1_02
#define LCUCCU_4_MA_DO_3_CH4_B1                           (g_dataBuffer_MVB[1696+3] & B1_03
#define LCUCCU_4_MA_DO_3_CH5_B1                           (g_dataBuffer_MVB[1696+3] & B1_04
#define LCUCCU_4_MA_DO_3_CH6_B1                           (g_dataBuffer_MVB[1696+3] & B1_05
#define LCUCCU_4_MA_DO_3_CH7_B1                           (g_dataBuffer_MVB[1696+3] & B1_06
#define LCUCCU_4_MA_DO_3_CH8_B1                           (g_dataBuffer_MVB[1696+3] & B1_07
#define LCUCCU_4_MA_DO_3_CH9_B1                           (g_dataBuffer_MVB[1696+3] & B1_10
#define LCUCCU_4_MA_DO_3_CH10_B1                          (g_dataBuffer_MVB[1696+3] & B1_11
#define LCUCCU_4_MA_DO_3_CH11_B1                          (g_dataBuffer_MVB[1696+3] & B1_12
#define LCUCCU_4_MA_DO_3_CH12_B1                          (g_dataBuffer_MVB[1696+3] & B1_13
#define LCUCCU_4_MA_DO_3_CH13_B1                          (g_dataBuffer_MVB[1696+3] & B1_14
#define LCUCCU_4_MA_DO_3_CH14_B1                          (g_dataBuffer_MVB[1696+3] & B1_15
#define LCUCCU_4_MA_DO_3_CH15_B1                          (g_dataBuffer_MVB[1696+3] & B1_16
#define LCUCCU_4_MA_DO_3_CH16_B1                          (g_dataBuffer_MVB[1696+3] & B1_17
#define LCUCCU_4_MA_DO_3_CH17_B1                          (g_dataBuffer_MVB[1696+4] & B1_00
#define LCUCCU_4_MA_DO_3_CH18_B1                          (g_dataBuffer_MVB[1696+4] & B1_01
#define LCUCCU_4_MA_DO_3_CH19_B1                          (g_dataBuffer_MVB[1696+4] & B1_02
#define LCUCCU_4_MA_DO_3_CH20_B1                          (g_dataBuffer_MVB[1696+4] & B1_03
#define LCUCCU_4_MA_DO_3_CH21_B1                          (g_dataBuffer_MVB[1696+4] & B1_04
#define LCUCCU_4_MA_DO_3_CH22_B1                          (g_dataBuffer_MVB[1696+4] & B1_05
#define LCUCCU_4_MA_DO_3_CH23_B1                          (g_dataBuffer_MVB[1696+4] & B1_06
#define LCUCCU_4_MA_DO_3_CH24_B1                          (g_dataBuffer_MVB[1696+4] & B1_07

#define LCUCCU_4_MA_DO_4_CH1_B1                           (g_dataBuffer_MVB[1696+4] & B1_10
#define LCUCCU_4_MA_DO_4_CH2_B1                           (g_dataBuffer_MVB[1696+4] & B1_11
#define LCUCCU_4_MA_DO_4_CH3_B1                           (g_dataBuffer_MVB[1696+4] & B1_12
#define LCUCCU_4_MA_DO_4_CH4_B1                           (g_dataBuffer_MVB[1696+4] & B1_13
#define LCUCCU_4_MA_DO_4_CH5_B1                           (g_dataBuffer_MVB[1696+4] & B1_14
#define LCUCCU_4_MA_DO_4_CH6_B1                           (g_dataBuffer_MVB[1696+4] & B1_15
#define LCUCCU_4_MA_DO_4_CH7_B1                           (g_dataBuffer_MVB[1696+4] & B1_16
#define LCUCCU_4_MA_DO_4_CH8_B1                           (g_dataBuffer_MVB[1696+4] & B1_17
#define LCUCCU_4_MA_DO_4_CH9_B1                           (g_dataBuffer_MVB[1696+5] & B1_00
#define LCUCCU_4_MA_DO_4_CH10_B1                          (g_dataBuffer_MVB[1696+5] & B1_01
#define LCUCCU_4_MA_DO_4_CH11_B1                          (g_dataBuffer_MVB[1696+5] & B1_02
#define LCUCCU_4_MA_DO_4_CH12_B1                          (g_dataBuffer_MVB[1696+5] & B1_03
#define LCUCCU_4_MA_DO_4_CH13_B1                          (g_dataBuffer_MVB[1696+5] & B1_04
#define LCUCCU_4_MA_DO_4_CH14_B1                          (g_dataBuffer_MVB[1696+5] & B1_05
#define LCUCCU_4_MA_DO_4_CH15_B1                          (g_dataBuffer_MVB[1696+5] & B1_06
#define LCUCCU_4_MA_DO_4_CH16_B1                          (g_dataBuffer_MVB[1696+5] & B1_07
#define LCUCCU_4_MA_DO_4_CH17_B1                          (g_dataBuffer_MVB[1696+5] & B1_10
#define LCUCCU_4_MA_DO_4_CH18_B1                          (g_dataBuffer_MVB[1696+5] & B1_11
#define LCUCCU_4_MA_DO_4_CH19_B1                          (g_dataBuffer_MVB[1696+5] & B1_12
#define LCUCCU_4_MA_DO_4_CH20_B1                          (g_dataBuffer_MVB[1696+5] & B1_13
#define LCUCCU_4_MA_DO_4_CH21_B1                          (g_dataBuffer_MVB[1696+5] & B1_14
#define LCUCCU_4_MA_DO_4_CH22_B1                          (g_dataBuffer_MVB[1696+5] & B1_15
#define LCUCCU_4_MA_DO_4_CH23_B1                          (g_dataBuffer_MVB[1696+5] & B1_16
#define LCUCCU_4_MA_DO_4_CH24_B1                          (g_dataBuffer_MVB[1696+5] & B1_17

#define LCUCCU_4_MA_DO_5_CH1_B1                           (g_dataBuffer_MVB[1696+6] & B1_00
#define LCUCCU_4_MA_DO_5_CH2_B1                           (g_dataBuffer_MVB[1696+6] & B1_01
#define LCUCCU_4_MA_DO_5_CH3_B1                           (g_dataBuffer_MVB[1696+6] & B1_02
#define LCUCCU_4_MA_DO_5_CH4_B1                           (g_dataBuffer_MVB[1696+6] & B1_03
#define LCUCCU_4_MA_DO_5_CH5_B1                           (g_dataBuffer_MVB[1696+6] & B1_04
#define LCUCCU_4_MA_DO_5_CH6_B1                           (g_dataBuffer_MVB[1696+6] & B1_05
#define LCUCCU_4_MA_DO_5_CH7_B1                           (g_dataBuffer_MVB[1696+6] & B1_06
#define LCUCCU_4_MA_DO_5_CH8_B1                           (g_dataBuffer_MVB[1696+6] & B1_07
#define LCUCCU_4_MA_DO_5_CH9_B1                           (g_dataBuffer_MVB[1696+6] & B1_10
#define LCUCCU_4_MA_DO_5_CH10_B1                          (g_dataBuffer_MVB[1696+6] & B1_11
#define LCUCCU_4_MA_DO_5_CH11_B1                          (g_dataBuffer_MVB[1696+6] & B1_12
#define LCUCCU_4_MA_DO_5_CH12_B1                          (g_dataBuffer_MVB[1696+6] & B1_13
#define LCUCCU_4_MA_DO_5_CH13_B1                          (g_dataBuffer_MVB[1696+6] & B1_14
#define LCUCCU_4_MA_DO_5_CH14_B1                          (g_dataBuffer_MVB[1696+6] & B1_15
#define LCUCCU_4_MA_DO_5_CH15_B1                          (g_dataBuffer_MVB[1696+6] & B1_16
#define LCUCCU_4_MA_DO_5_CH16_B1                          (g_dataBuffer_MVB[1696+6] & B1_17
#define LCUCCU_4_MA_DO_5_CH17_B1                          (g_dataBuffer_MVB[1696+7] & B1_00
#define LCUCCU_4_MA_DO_5_CH18_B1                          (g_dataBuffer_MVB[1696+7] & B1_01
#define LCUCCU_4_MA_DO_5_CH19_B1                          (g_dataBuffer_MVB[1696+7] & B1_02
#define LCUCCU_4_MA_DO_5_CH20_B1                          (g_dataBuffer_MVB[1696+7] & B1_03
#define LCUCCU_4_MA_DO_5_CH21_B1                          (g_dataBuffer_MVB[1696+7] & B1_04
#define LCUCCU_4_MA_DO_5_CH22_B1                          (g_dataBuffer_MVB[1696+7] & B1_05
#define LCUCCU_4_MA_DO_5_CH23_B1                          (g_dataBuffer_MVB[1696+7] & B1_06
#define LCUCCU_4_MA_DO_5_CH24_B1                          (g_dataBuffer_MVB[1696+7] & B1_07

#define LCUCCU_4_MA_DO_6_CH1_B1                           (g_dataBuffer_MVB[1696+7] & B1_10
#define LCUCCU_4_MA_DO_6_CH2_B1                           (g_dataBuffer_MVB[1696+7] & B1_11
#define LCUCCU_4_MA_DO_6_CH3_B1                           (g_dataBuffer_MVB[1696+7] & B1_12
#define LCUCCU_4_MA_DO_6_CH4_B1                           (g_dataBuffer_MVB[1696+7] & B1_13
#define LCUCCU_4_MA_DO_6_CH5_B1                           (g_dataBuffer_MVB[1696+7] & B1_14
#define LCUCCU_4_MA_DO_6_CH6_B1                           (g_dataBuffer_MVB[1696+7] & B1_15
#define LCUCCU_4_MA_DO_6_CH7_B1                           (g_dataBuffer_MVB[1696+7] & B1_16
#define LCUCCU_4_MA_DO_6_CH8_B1                           (g_dataBuffer_MVB[1696+7] & B1_17
#define LCUCCU_4_MA_DO_6_CH9_B1                           (g_dataBuffer_MVB[1696+8] & B1_00
#define LCUCCU_4_MA_DO_6_CH10_B1                          (g_dataBuffer_MVB[1696+8] & B1_01
#define LCUCCU_4_MA_DO_6_CH11_B1                          (g_dataBuffer_MVB[1696+8] & B1_02
#define LCUCCU_4_MA_DO_6_CH12_B1                          (g_dataBuffer_MVB[1696+8] & B1_03
#define LCUCCU_4_MA_DO_6_CH13_B1                          (g_dataBuffer_MVB[1696+8] & B1_04
#define LCUCCU_4_MA_DO_6_CH14_B1                          (g_dataBuffer_MVB[1696+8] & B1_05
#define LCUCCU_4_MA_DO_6_CH15_B1                          (g_dataBuffer_MVB[1696+8] & B1_06
#define LCUCCU_4_MA_DO_6_CH16_B1                          (g_dataBuffer_MVB[1696+8] & B1_07
#define LCUCCU_4_MA_DO_6_CH17_B1                          (g_dataBuffer_MVB[1696+8] & B1_10
#define LCUCCU_4_MA_DO_6_CH18_B1                          (g_dataBuffer_MVB[1696+8] & B1_11
#define LCUCCU_4_MA_DO_6_CH19_B1                          (g_dataBuffer_MVB[1696+8] & B1_12
#define LCUCCU_4_MA_DO_6_CH20_B1                          (g_dataBuffer_MVB[1696+8] & B1_13
#define LCUCCU_4_MA_DO_6_CH21_B1                          (g_dataBuffer_MVB[1696+8] & B1_14
#define LCUCCU_4_MA_DO_6_CH22_B1                          (g_dataBuffer_MVB[1696+8] & B1_15
#define LCUCCU_4_MA_DO_6_CH23_B1                          (g_dataBuffer_MVB[1696+8] & B1_16
#define LCUCCU_4_MA_DO_6_CH24_B1                          (g_dataBuffer_MVB[1696+8] & B1_17



//0x39c=924    LCU_RA_All(LCU_RA Master logic I/O digital output) R_DO(03)
                                                        //g_dataBuffer_MVB[1712+i] = (snkPortData39c[i]);
#define LCUCCU_4_RA_DO_1_CH1_B1                           (g_dataBuffer_MVB[1712+0] & B1_00
#define LCUCCU_4_RA_DO_1_CH2_B1                           (g_dataBuffer_MVB[1712+0] & B1_01
#define LCUCCU_4_RA_DO_1_CH3_B1                           (g_dataBuffer_MVB[1712+0] & B1_02
#define LCUCCU_4_RA_DO_1_CH4_B1                           (g_dataBuffer_MVB[1712+0] & B1_03
#define LCUCCU_4_RA_DO_1_CH5_B1                           (g_dataBuffer_MVB[1712+0] & B1_04
#define LCUCCU_4_RA_DO_1_CH6_B1                           (g_dataBuffer_MVB[1712+0] & B1_05
#define LCUCCU_4_RA_DO_1_CH7_B1                           (g_dataBuffer_MVB[1712+0] & B1_06
#define LCUCCU_4_RA_DO_1_CH8_B1                           (g_dataBuffer_MVB[1712+0] & B1_07
#define LCUCCU_4_RA_DO_1_CH9_B1                           (g_dataBuffer_MVB[1712+0] & B1_10
#define LCUCCU_4_RA_DO_1_CH10_B1                          (g_dataBuffer_MVB[1712+0] & B1_11
#define LCUCCU_4_RA_DO_1_CH11_B1                          (g_dataBuffer_MVB[1712+0] & B1_12
#define LCUCCU_4_RA_DO_1_CH12_B1                          (g_dataBuffer_MVB[1712+0] & B1_13
#define LCUCCU_4_RA_DO_1_CH13_B1                          (g_dataBuffer_MVB[1712+0] & B1_14
#define LCUCCU_4_RA_DO_1_CH14_B1                          (g_dataBuffer_MVB[1712+0] & B1_15
#define LCUCCU_4_RA_DO_1_CH15_B1                          (g_dataBuffer_MVB[1712+0] & B1_16
#define LCUCCU_4_RA_DO_1_CH16_B1                          (g_dataBuffer_MVB[1712+0] & B1_17
#define LCUCCU_4_RA_DO_1_CH17_B1                          (g_dataBuffer_MVB[1712+1] & B1_00
#define LCUCCU_4_RA_DO_1_CH18_B1                          (g_dataBuffer_MVB[1712+1] & B1_01
#define LCUCCU_4_RA_DO_1_CH19_B1                          (g_dataBuffer_MVB[1712+1] & B1_02
#define LCUCCU_4_RA_DO_1_CH20_B1                          (g_dataBuffer_MVB[1712+1] & B1_03
#define LCUCCU_4_RA_DO_1_CH21_B1                          (g_dataBuffer_MVB[1712+1] & B1_04
#define LCUCCU_4_RA_DO_1_CH22_B1                          (g_dataBuffer_MVB[1712+1] & B1_05
#define LCUCCU_4_RA_DO_1_CH23_B1                          (g_dataBuffer_MVB[1712+1] & B1_06
#define LCUCCU_4_RA_DO_1_CH24_B1                          (g_dataBuffer_MVB[1712+1] & B1_07

#define LCUCCU_4_RA_DO_2_CH1_B1                           (g_dataBuffer_MVB[1712+1] & B1_10
#define LCUCCU_4_RA_DO_2_CH2_B1                           (g_dataBuffer_MVB[1712+1] & B1_11
#define LCUCCU_4_RA_DO_2_CH3_B1                           (g_dataBuffer_MVB[1712+1] & B1_12
#define LCUCCU_4_RA_DO_2_CH4_B1                           (g_dataBuffer_MVB[1712+1] & B1_13
#define LCUCCU_4_RA_DO_2_CH5_B1                           (g_dataBuffer_MVB[1712+1] & B1_14
#define LCUCCU_4_RA_DO_2_CH6_B1                           (g_dataBuffer_MVB[1712+1] & B1_15
#define LCUCCU_4_RA_DO_2_CH7_B1                           (g_dataBuffer_MVB[1712+1] & B1_16
#define LCUCCU_4_RA_DO_2_CH8_B1                           (g_dataBuffer_MVB[1712+1] & B1_17
#define LCUCCU_4_RA_DO_2_CH9_B1                           (g_dataBuffer_MVB[1712+2] & B1_00
#define LCUCCU_4_RA_DO_2_CH10_B1                          (g_dataBuffer_MVB[1712+2] & B1_01
#define LCUCCU_4_RA_DO_2_CH11_B1                          (g_dataBuffer_MVB[1712+2] & B1_02
#define LCUCCU_4_RA_DO_2_CH12_B1                          (g_dataBuffer_MVB[1712+2] & B1_03
#define LCUCCU_4_RA_DO_2_CH13_B1                          (g_dataBuffer_MVB[1712+2] & B1_04
#define LCUCCU_4_RA_DO_2_CH14_B1                          (g_dataBuffer_MVB[1712+2] & B1_05
#define LCUCCU_4_RA_DO_2_CH15_B1                          (g_dataBuffer_MVB[1712+2] & B1_06
#define LCUCCU_4_RA_DO_2_CH16_B1                          (g_dataBuffer_MVB[1712+2] & B1_07
#define LCUCCU_4_RA_DO_2_CH17_B1                          (g_dataBuffer_MVB[1712+2] & B1_10
#define LCUCCU_4_RA_DO_2_CH18_B1                          (g_dataBuffer_MVB[1712+2] & B1_11
#define LCUCCU_4_RA_DO_2_CH19_B1                          (g_dataBuffer_MVB[1712+2] & B1_12
#define LCUCCU_4_RA_DO_2_CH20_B1                          (g_dataBuffer_MVB[1712+2] & B1_13
#define LCUCCU_4_RA_DO_2_CH21_B1                          (g_dataBuffer_MVB[1712+2] & B1_14
#define LCUCCU_4_RA_DO_2_CH22_B1                          (g_dataBuffer_MVB[1712+2] & B1_15
#define LCUCCU_4_RA_DO_2_CH23_B1                          (g_dataBuffer_MVB[1712+2] & B1_16
#define LCUCCU_4_RA_DO_2_CH24_B1                          (g_dataBuffer_MVB[1712+2] & B1_17

#define LCUCCU_4_RA_DO_3_CH1_B1                           (g_dataBuffer_MVB[1712+3] & B1_00
#define LCUCCU_4_RA_DO_3_CH2_B1                           (g_dataBuffer_MVB[1712+3] & B1_01
#define LCUCCU_4_RA_DO_3_CH3_B1                           (g_dataBuffer_MVB[1712+3] & B1_02
#define LCUCCU_4_RA_DO_3_CH4_B1                           (g_dataBuffer_MVB[1712+3] & B1_03
#define LCUCCU_4_RA_DO_3_CH5_B1                           (g_dataBuffer_MVB[1712+3] & B1_04
#define LCUCCU_4_RA_DO_3_CH6_B1                           (g_dataBuffer_MVB[1712+3] & B1_05
#define LCUCCU_4_RA_DO_3_CH7_B1                           (g_dataBuffer_MVB[1712+3] & B1_06
#define LCUCCU_4_RA_DO_3_CH8_B1                           (g_dataBuffer_MVB[1712+3] & B1_07
#define LCUCCU_4_RA_DO_3_CH9_B1                           (g_dataBuffer_MVB[1712+3] & B1_10
#define LCUCCU_4_RA_DO_3_CH10_B1                          (g_dataBuffer_MVB[1712+3] & B1_11
#define LCUCCU_4_RA_DO_3_CH11_B1                          (g_dataBuffer_MVB[1712+3] & B1_12
#define LCUCCU_4_RA_DO_3_CH12_B1                          (g_dataBuffer_MVB[1712+3] & B1_13
#define LCUCCU_4_RA_DO_3_CH13_B1                          (g_dataBuffer_MVB[1712+3] & B1_14
#define LCUCCU_4_RA_DO_3_CH14_B1                          (g_dataBuffer_MVB[1712+3] & B1_15
#define LCUCCU_4_RA_DO_3_CH15_B1                          (g_dataBuffer_MVB[1712+3] & B1_16
#define LCUCCU_4_RA_DO_3_CH16_B1                          (g_dataBuffer_MVB[1712+3] & B1_17
#define LCUCCU_4_RA_DO_3_CH17_B1                          (g_dataBuffer_MVB[1712+4] & B1_00
#define LCUCCU_4_RA_DO_3_CH18_B1                          (g_dataBuffer_MVB[1712+4] & B1_01
#define LCUCCU_4_RA_DO_3_CH19_B1                          (g_dataBuffer_MVB[1712+4] & B1_02
#define LCUCCU_4_RA_DO_3_CH20_B1                          (g_dataBuffer_MVB[1712+4] & B1_03
#define LCUCCU_4_RA_DO_3_CH21_B1                          (g_dataBuffer_MVB[1712+4] & B1_04
#define LCUCCU_4_RA_DO_3_CH22_B1                          (g_dataBuffer_MVB[1712+4] & B1_05
#define LCUCCU_4_RA_DO_3_CH23_B1                          (g_dataBuffer_MVB[1712+4] & B1_06
#define LCUCCU_4_RA_DO_3_CH24_B1                          (g_dataBuffer_MVB[1712+4] & B1_07



//0x3a6=934    LCU_P_All (LCU_P  Master logic I/O digital output) R_DO(04)
                                                        //g_dataBuffer_MVB[1728+i] = (snkPortData3a6[i]);
#define LCUCCU_4_P_DO_1_CH1_B1                           (g_dataBuffer_MVB[1728+0] & B1_00
#define LCUCCU_4_P_DO_1_CH2_B1                           (g_dataBuffer_MVB[1728+0] & B1_01
#define LCUCCU_4_P_DO_1_CH3_B1                           (g_dataBuffer_MVB[1728+0] & B1_02
#define LCUCCU_4_P_DO_1_CH4_B1                           (g_dataBuffer_MVB[1728+0] & B1_03
#define LCUCCU_4_P_DO_1_CH5_B1                           (g_dataBuffer_MVB[1728+0] & B1_04
#define LCUCCU_4_P_DO_1_CH6_B1                           (g_dataBuffer_MVB[1728+0] & B1_05
#define LCUCCU_4_P_DO_1_CH7_B1                           (g_dataBuffer_MVB[1728+0] & B1_06
#define LCUCCU_4_P_DO_1_CH8_B1                           (g_dataBuffer_MVB[1728+0] & B1_07
#define LCUCCU_4_P_DO_1_CH9_B1                           (g_dataBuffer_MVB[1728+0] & B1_10
#define LCUCCU_4_P_DO_1_CH10_B1                          (g_dataBuffer_MVB[1728+0] & B1_11
#define LCUCCU_4_P_DO_1_CH11_B1                          (g_dataBuffer_MVB[1728+0] & B1_12
#define LCUCCU_4_P_DO_1_CH12_B1                          (g_dataBuffer_MVB[1728+0] & B1_13
#define LCUCCU_4_P_DO_1_CH13_B1                          (g_dataBuffer_MVB[1728+0] & B1_14
#define LCUCCU_4_P_DO_1_CH14_B1                          (g_dataBuffer_MVB[1728+0] & B1_15
#define LCUCCU_4_P_DO_1_CH15_B1                          (g_dataBuffer_MVB[1728+0] & B1_16
#define LCUCCU_4_P_DO_1_CH16_B1                          (g_dataBuffer_MVB[1728+0] & B1_17
#define LCUCCU_4_P_DO_1_CH17_B1                          (g_dataBuffer_MVB[1728+1] & B1_00
#define LCUCCU_4_P_DO_1_CH18_B1                          (g_dataBuffer_MVB[1728+1] & B1_01
#define LCUCCU_4_P_DO_1_CH19_B1                          (g_dataBuffer_MVB[1728+1] & B1_02
#define LCUCCU_4_P_DO_1_CH20_B1                          (g_dataBuffer_MVB[1728+1] & B1_03
#define LCUCCU_4_P_DO_1_CH21_B1                          (g_dataBuffer_MVB[1728+1] & B1_04
#define LCUCCU_4_P_DO_1_CH22_B1                          (g_dataBuffer_MVB[1728+1] & B1_05
#define LCUCCU_4_P_DO_1_CH23_B1                          (g_dataBuffer_MVB[1728+1] & B1_06
#define LCUCCU_4_P_DO_1_CH24_B1                          (g_dataBuffer_MVB[1728+1] & B1_07

#define LCUCCU_4_P_DO_2_CH1_B1                           (g_dataBuffer_MVB[1728+1] & B1_10
#define LCUCCU_4_P_DO_2_CH2_B1                           (g_dataBuffer_MVB[1728+1] & B1_11
#define LCUCCU_4_P_DO_2_CH3_B1                           (g_dataBuffer_MVB[1728+1] & B1_12
#define LCUCCU_4_P_DO_2_CH4_B1                           (g_dataBuffer_MVB[1728+1] & B1_13
#define LCUCCU_4_P_DO_2_CH5_B1                           (g_dataBuffer_MVB[1728+1] & B1_14
#define LCUCCU_4_P_DO_2_CH6_B1                           (g_dataBuffer_MVB[1728+1] & B1_15
#define LCUCCU_4_P_DO_2_CH7_B1                           (g_dataBuffer_MVB[1728+1] & B1_16
#define LCUCCU_4_P_DO_2_CH8_B1                           (g_dataBuffer_MVB[1728+1] & B1_17
#define LCUCCU_4_P_DO_2_CH9_B1                           (g_dataBuffer_MVB[1728+2] & B1_00
#define LCUCCU_4_P_DO_2_CH10_B1                          (g_dataBuffer_MVB[1728+2] & B1_01
#define LCUCCU_4_P_DO_2_CH11_B1                          (g_dataBuffer_MVB[1728+2] & B1_02
#define LCUCCU_4_P_DO_2_CH12_B1                          (g_dataBuffer_MVB[1728+2] & B1_03
#define LCUCCU_4_P_DO_2_CH13_B1                          (g_dataBuffer_MVB[1728+2] & B1_04
#define LCUCCU_4_P_DO_2_CH14_B1                          (g_dataBuffer_MVB[1728+2] & B1_05
#define LCUCCU_4_P_DO_2_CH15_B1                          (g_dataBuffer_MVB[1728+2] & B1_06
#define LCUCCU_4_P_DO_2_CH16_B1                          (g_dataBuffer_MVB[1728+2] & B1_07
#define LCUCCU_4_P_DO_2_CH17_B1                          (g_dataBuffer_MVB[1728+2] & B1_10
#define LCUCCU_4_P_DO_2_CH18_B1                          (g_dataBuffer_MVB[1728+2] & B1_11
#define LCUCCU_4_P_DO_2_CH19_B1                          (g_dataBuffer_MVB[1728+2] & B1_12
#define LCUCCU_4_P_DO_2_CH20_B1                          (g_dataBuffer_MVB[1728+2] & B1_13
#define LCUCCU_4_P_DO_2_CH21_B1                          (g_dataBuffer_MVB[1728+2] & B1_14
#define LCUCCU_4_P_DO_2_CH22_B1                          (g_dataBuffer_MVB[1728+2] & B1_15
#define LCUCCU_4_P_DO_2_CH23_B1                          (g_dataBuffer_MVB[1728+2] & B1_16
#define LCUCCU_4_P_DO_2_CH24_B1                          (g_dataBuffer_MVB[1728+2] & B1_17

#define LCUCCU_4_P_DO_3_CH1_B1                           (g_dataBuffer_MVB[1728+3] & B1_00
#define LCUCCU_4_P_DO_3_CH2_B1                           (g_dataBuffer_MVB[1728+3] & B1_01
#define LCUCCU_4_P_DO_3_CH3_B1                           (g_dataBuffer_MVB[1728+3] & B1_02
#define LCUCCU_4_P_DO_3_CH4_B1                           (g_dataBuffer_MVB[1728+3] & B1_03
#define LCUCCU_4_P_DO_3_CH5_B1                           (g_dataBuffer_MVB[1728+3] & B1_04
#define LCUCCU_4_P_DO_3_CH6_B1                           (g_dataBuffer_MVB[1728+3] & B1_05
#define LCUCCU_4_P_DO_3_CH7_B1                           (g_dataBuffer_MVB[1728+3] & B1_06
#define LCUCCU_4_P_DO_3_CH8_B1                           (g_dataBuffer_MVB[1728+3] & B1_07
#define LCUCCU_4_P_DO_3_CH9_B1                           (g_dataBuffer_MVB[1728+3] & B1_10
#define LCUCCU_4_P_DO_3_CH10_B1                          (g_dataBuffer_MVB[1728+3] & B1_11
#define LCUCCU_4_P_DO_3_CH11_B1                          (g_dataBuffer_MVB[1728+3] & B1_12
#define LCUCCU_4_P_DO_3_CH12_B1                          (g_dataBuffer_MVB[1728+3] & B1_13
#define LCUCCU_4_P_DO_3_CH13_B1                          (g_dataBuffer_MVB[1728+3] & B1_14
#define LCUCCU_4_P_DO_3_CH14_B1                          (g_dataBuffer_MVB[1728+3] & B1_15
#define LCUCCU_4_P_DO_3_CH15_B1                          (g_dataBuffer_MVB[1728+3] & B1_16
#define LCUCCU_4_P_DO_3_CH16_B1                          (g_dataBuffer_MVB[1728+3] & B1_17
#define LCUCCU_4_P_DO_3_CH17_B1                          (g_dataBuffer_MVB[1728+4] & B1_00
#define LCUCCU_4_P_DO_3_CH18_B1                          (g_dataBuffer_MVB[1728+4] & B1_01
#define LCUCCU_4_P_DO_3_CH19_B1                          (g_dataBuffer_MVB[1728+4] & B1_02
#define LCUCCU_4_P_DO_3_CH20_B1                          (g_dataBuffer_MVB[1728+4] & B1_03
#define LCUCCU_4_P_DO_3_CH21_B1                          (g_dataBuffer_MVB[1728+4] & B1_04
#define LCUCCU_4_P_DO_3_CH22_B1                          (g_dataBuffer_MVB[1728+4] & B1_05
#define LCUCCU_4_P_DO_3_CH23_B1                          (g_dataBuffer_MVB[1728+4] & B1_06
#define LCUCCU_4_P_DO_3_CH24_B1                          (g_dataBuffer_MVB[1728+4] & B1_07


//0x3b0=944    LCU_RB_All(LCU_RB Master logic I/O digital output) R_DO(05)
                                                        //g_dataBuffer_MVB[1744+i] = (snkPortData3b0[i]);
#define LCUCCU_4_RB_DO_1_CH1_B1                           (g_dataBuffer_MVB[1744+0] & B1_00
#define LCUCCU_4_RB_DO_1_CH2_B1                           (g_dataBuffer_MVB[1744+0] & B1_01
#define LCUCCU_4_RB_DO_1_CH3_B1                           (g_dataBuffer_MVB[1744+0] & B1_02
#define LCUCCU_4_RB_DO_1_CH4_B1                           (g_dataBuffer_MVB[1744+0] & B1_03
#define LCUCCU_4_RB_DO_1_CH5_B1                           (g_dataBuffer_MVB[1744+0] & B1_04
#define LCUCCU_4_RB_DO_1_CH6_B1                           (g_dataBuffer_MVB[1744+0] & B1_05
#define LCUCCU_4_RB_DO_1_CH7_B1                           (g_dataBuffer_MVB[1744+0] & B1_06
#define LCUCCU_4_RB_DO_1_CH8_B1                           (g_dataBuffer_MVB[1744+0] & B1_07
#define LCUCCU_4_RB_DO_1_CH9_B1                           (g_dataBuffer_MVB[1744+0] & B1_10
#define LCUCCU_4_RB_DO_1_CH10_B1                          (g_dataBuffer_MVB[1744+0] & B1_11
#define LCUCCU_4_RB_DO_1_CH11_B1                          (g_dataBuffer_MVB[1744+0] & B1_12
#define LCUCCU_4_RB_DO_1_CH12_B1                          (g_dataBuffer_MVB[1744+0] & B1_13
#define LCUCCU_4_RB_DO_1_CH13_B1                          (g_dataBuffer_MVB[1744+0] & B1_14
#define LCUCCU_4_RB_DO_1_CH14_B1                          (g_dataBuffer_MVB[1744+0] & B1_15
#define LCUCCU_4_RB_DO_1_CH15_B1                          (g_dataBuffer_MVB[1744+0] & B1_16
#define LCUCCU_4_RB_DO_1_CH16_B1                          (g_dataBuffer_MVB[1744+0] & B1_17
#define LCUCCU_4_RB_DO_1_CH17_B1                          (g_dataBuffer_MVB[1744+1] & B1_00
#define LCUCCU_4_RB_DO_1_CH18_B1                          (g_dataBuffer_MVB[1744+1] & B1_01
#define LCUCCU_4_RB_DO_1_CH19_B1                          (g_dataBuffer_MVB[1744+1] & B1_02
#define LCUCCU_4_RB_DO_1_CH20_B1                          (g_dataBuffer_MVB[1744+1] & B1_03
#define LCUCCU_4_RB_DO_1_CH21_B1                          (g_dataBuffer_MVB[1744+1] & B1_04
#define LCUCCU_4_RB_DO_1_CH22_B1                          (g_dataBuffer_MVB[1744+1] & B1_05
#define LCUCCU_4_RB_DO_1_CH23_B1                          (g_dataBuffer_MVB[1744+1] & B1_06
#define LCUCCU_4_RB_DO_1_CH24_B1                          (g_dataBuffer_MVB[1744+1] & B1_07

#define LCUCCU_4_RB_DO_2_CH1_B1                           (g_dataBuffer_MVB[1744+1] & B1_10
#define LCUCCU_4_RB_DO_2_CH2_B1                           (g_dataBuffer_MVB[1744+1] & B1_11
#define LCUCCU_4_RB_DO_2_CH3_B1                           (g_dataBuffer_MVB[1744+1] & B1_12
#define LCUCCU_4_RB_DO_2_CH4_B1                           (g_dataBuffer_MVB[1744+1] & B1_13
#define LCUCCU_4_RB_DO_2_CH5_B1                           (g_dataBuffer_MVB[1744+1] & B1_14
#define LCUCCU_4_RB_DO_2_CH6_B1                           (g_dataBuffer_MVB[1744+1] & B1_15
#define LCUCCU_4_RB_DO_2_CH7_B1                           (g_dataBuffer_MVB[1744+1] & B1_16
#define LCUCCU_4_RB_DO_2_CH8_B1                           (g_dataBuffer_MVB[1744+1] & B1_17
#define LCUCCU_4_RB_DO_2_CH9_B1                           (g_dataBuffer_MVB[1744+2] & B1_00
#define LCUCCU_4_RB_DO_2_CH10_B1                          (g_dataBuffer_MVB[1744+2] & B1_01
#define LCUCCU_4_RB_DO_2_CH11_B1                          (g_dataBuffer_MVB[1744+2] & B1_02
#define LCUCCU_4_RB_DO_2_CH12_B1                          (g_dataBuffer_MVB[1744+2] & B1_03
#define LCUCCU_4_RB_DO_2_CH13_B1                          (g_dataBuffer_MVB[1744+2] & B1_04
#define LCUCCU_4_RB_DO_2_CH14_B1                          (g_dataBuffer_MVB[1744+2] & B1_05
#define LCUCCU_4_RB_DO_2_CH15_B1                          (g_dataBuffer_MVB[1744+2] & B1_06
#define LCUCCU_4_RB_DO_2_CH16_B1                          (g_dataBuffer_MVB[1744+2] & B1_07
#define LCUCCU_4_RB_DO_2_CH17_B1                          (g_dataBuffer_MVB[1744+2] & B1_10
#define LCUCCU_4_RB_DO_2_CH18_B1                          (g_dataBuffer_MVB[1744+2] & B1_11
#define LCUCCU_4_RB_DO_2_CH19_B1                          (g_dataBuffer_MVB[1744+2] & B1_12
#define LCUCCU_4_RB_DO_2_CH20_B1                          (g_dataBuffer_MVB[1744+2] & B1_13
#define LCUCCU_4_RB_DO_2_CH21_B1                          (g_dataBuffer_MVB[1744+2] & B1_14
#define LCUCCU_4_RB_DO_2_CH22_B1                          (g_dataBuffer_MVB[1744+2] & B1_15
#define LCUCCU_4_RB_DO_2_CH23_B1                          (g_dataBuffer_MVB[1744+2] & B1_16
#define LCUCCU_4_RB_DO_2_CH24_B1                          (g_dataBuffer_MVB[1744+2] & B1_17

#define LCUCCU_4_RB_DO_3_CH1_B1                           (g_dataBuffer_MVB[1744+3] & B1_00
#define LCUCCU_4_RB_DO_3_CH2_B1                           (g_dataBuffer_MVB[1744+3] & B1_01
#define LCUCCU_4_RB_DO_3_CH3_B1                           (g_dataBuffer_MVB[1744+3] & B1_02
#define LCUCCU_4_RB_DO_3_CH4_B1                           (g_dataBuffer_MVB[1744+3] & B1_03
#define LCUCCU_4_RB_DO_3_CH5_B1                           (g_dataBuffer_MVB[1744+3] & B1_04
#define LCUCCU_4_RB_DO_3_CH6_B1                           (g_dataBuffer_MVB[1744+3] & B1_05
#define LCUCCU_4_RB_DO_3_CH7_B1                           (g_dataBuffer_MVB[1744+3] & B1_06
#define LCUCCU_4_RB_DO_3_CH8_B1                           (g_dataBuffer_MVB[1744+3] & B1_07
#define LCUCCU_4_RB_DO_3_CH9_B1                           (g_dataBuffer_MVB[1744+3] & B1_10
#define LCUCCU_4_RB_DO_3_CH10_B1                          (g_dataBuffer_MVB[1744+3] & B1_11
#define LCUCCU_4_RB_DO_3_CH11_B1                          (g_dataBuffer_MVB[1744+3] & B1_12
#define LCUCCU_4_RB_DO_3_CH12_B1                          (g_dataBuffer_MVB[1744+3] & B1_13
#define LCUCCU_4_RB_DO_3_CH13_B1                          (g_dataBuffer_MVB[1744+3] & B1_14
#define LCUCCU_4_RB_DO_3_CH14_B1                          (g_dataBuffer_MVB[1744+3] & B1_15
#define LCUCCU_4_RB_DO_3_CH15_B1                          (g_dataBuffer_MVB[1744+3] & B1_16
#define LCUCCU_4_RB_DO_3_CH16_B1                          (g_dataBuffer_MVB[1744+3] & B1_17
#define LCUCCU_4_RB_DO_3_CH17_B1                          (g_dataBuffer_MVB[1744+4] & B1_00
#define LCUCCU_4_RB_DO_3_CH18_B1                          (g_dataBuffer_MVB[1744+4] & B1_01
#define LCUCCU_4_RB_DO_3_CH19_B1                          (g_dataBuffer_MVB[1744+4] & B1_02
#define LCUCCU_4_RB_DO_3_CH20_B1                          (g_dataBuffer_MVB[1744+4] & B1_03
#define LCUCCU_4_RB_DO_3_CH21_B1                          (g_dataBuffer_MVB[1744+4] & B1_04
#define LCUCCU_4_RB_DO_3_CH22_B1                          (g_dataBuffer_MVB[1744+4] & B1_05
#define LCUCCU_4_RB_DO_3_CH23_B1                          (g_dataBuffer_MVB[1744+4] & B1_06
#define LCUCCU_4_RB_DO_3_CH24_B1                          (g_dataBuffer_MVB[1744+4] & B1_07


//0x3ba=954    LCU_MB_All(LCU_MB Master logic I/O digital output) R_DO(08)
                                                        //g_dataBuffer_MVB[1760+i] = (snkPortData3ba[i]);
#define LCUCCU_4_MB_DO_1_CH1_B1                           (g_dataBuffer_MVB[1760+0] & B1_00
#define LCUCCU_4_MB_DO_1_CH2_B1                           (g_dataBuffer_MVB[1760+0] & B1_01
#define LCUCCU_4_MB_DO_1_CH3_B1                           (g_dataBuffer_MVB[1760+0] & B1_02
#define LCUCCU_4_MB_DO_1_CH4_B1                           (g_dataBuffer_MVB[1760+0] & B1_03
#define LCUCCU_4_MB_DO_1_CH5_B1                           (g_dataBuffer_MVB[1760+0] & B1_04
#define LCUCCU_4_MB_DO_1_CH6_B1                           (g_dataBuffer_MVB[1760+0] & B1_05
#define LCUCCU_4_MB_DO_1_CH7_B1                           (g_dataBuffer_MVB[1760+0] & B1_06
#define LCUCCU_4_MB_DO_1_CH8_B1                           (g_dataBuffer_MVB[1760+0] & B1_07
#define LCUCCU_4_MB_DO_1_CH9_B1                           (g_dataBuffer_MVB[1760+0] & B1_10
#define LCUCCU_4_MB_DO_1_CH10_B1                          (g_dataBuffer_MVB[1760+0] & B1_11
#define LCUCCU_4_MB_DO_1_CH11_B1                          (g_dataBuffer_MVB[1760+0] & B1_12
#define LCUCCU_4_MB_DO_1_CH12_B1                          (g_dataBuffer_MVB[1760+0] & B1_13
#define LCUCCU_4_MB_DO_1_CH13_B1                          (g_dataBuffer_MVB[1760+0] & B1_14
#define LCUCCU_4_MB_DO_1_CH14_B1                          (g_dataBuffer_MVB[1760+0] & B1_15
#define LCUCCU_4_MB_DO_1_CH15_B1                          (g_dataBuffer_MVB[1760+0] & B1_16
#define LCUCCU_4_MB_DO_1_CH16_B1                          (g_dataBuffer_MVB[1760+0] & B1_17
#define LCUCCU_4_MB_DO_1_CH17_B1                          (g_dataBuffer_MVB[1760+1] & B1_00
#define LCUCCU_4_MB_DO_1_CH18_B1                          (g_dataBuffer_MVB[1760+1] & B1_01
#define LCUCCU_4_MB_DO_1_CH19_B1                          (g_dataBuffer_MVB[1760+1] & B1_02
#define LCUCCU_4_MB_DO_1_CH20_B1                          (g_dataBuffer_MVB[1760+1] & B1_03
#define LCUCCU_4_MB_DO_1_CH21_B1                          (g_dataBuffer_MVB[1760+1] & B1_04
#define LCUCCU_4_MB_DO_1_CH22_B1                          (g_dataBuffer_MVB[1760+1] & B1_05
#define LCUCCU_4_MB_DO_1_CH23_B1                          (g_dataBuffer_MVB[1760+1] & B1_06
#define LCUCCU_4_MB_DO_1_CH24_B1                          (g_dataBuffer_MVB[1760+1] & B1_07

#define LCUCCU_4_MB_DO_2_CH1_B1                           (g_dataBuffer_MVB[1760+1] & B1_10
#define LCUCCU_4_MB_DO_2_CH2_B1                           (g_dataBuffer_MVB[1760+1] & B1_11
#define LCUCCU_4_MB_DO_2_CH3_B1                           (g_dataBuffer_MVB[1760+1] & B1_12
#define LCUCCU_4_MB_DO_2_CH4_B1                           (g_dataBuffer_MVB[1760+1] & B1_13
#define LCUCCU_4_MB_DO_2_CH5_B1                           (g_dataBuffer_MVB[1760+1] & B1_14
#define LCUCCU_4_MB_DO_2_CH6_B1                           (g_dataBuffer_MVB[1760+1] & B1_15
#define LCUCCU_4_MB_DO_2_CH7_B1                           (g_dataBuffer_MVB[1760+1] & B1_16
#define LCUCCU_4_MB_DO_2_CH8_B1                           (g_dataBuffer_MVB[1760+1] & B1_17
#define LCUCCU_4_MB_DO_2_CH9_B1                           (g_dataBuffer_MVB[1760+2] & B1_00
#define LCUCCU_4_MB_DO_2_CH10_B1                          (g_dataBuffer_MVB[1760+2] & B1_01
#define LCUCCU_4_MB_DO_2_CH11_B1                          (g_dataBuffer_MVB[1760+2] & B1_02
#define LCUCCU_4_MB_DO_2_CH12_B1                          (g_dataBuffer_MVB[1760+2] & B1_03
#define LCUCCU_4_MB_DO_2_CH13_B1                          (g_dataBuffer_MVB[1760+2] & B1_04
#define LCUCCU_4_MB_DO_2_CH14_B1                          (g_dataBuffer_MVB[1760+2] & B1_05
#define LCUCCU_4_MB_DO_2_CH15_B1                          (g_dataBuffer_MVB[1760+2] & B1_06
#define LCUCCU_4_MB_DO_2_CH16_B1                          (g_dataBuffer_MVB[1760+2] & B1_07
#define LCUCCU_4_MB_DO_2_CH17_B1                          (g_dataBuffer_MVB[1760+2] & B1_10
#define LCUCCU_4_MB_DO_2_CH18_B1                          (g_dataBuffer_MVB[1760+2] & B1_11
#define LCUCCU_4_MB_DO_2_CH19_B1                          (g_dataBuffer_MVB[1760+2] & B1_12
#define LCUCCU_4_MB_DO_2_CH20_B1                          (g_dataBuffer_MVB[1760+2] & B1_13
#define LCUCCU_4_MB_DO_2_CH21_B1                          (g_dataBuffer_MVB[1760+2] & B1_14
#define LCUCCU_4_MB_DO_2_CH22_B1                          (g_dataBuffer_MVB[1760+2] & B1_15
#define LCUCCU_4_MB_DO_2_CH23_B1                          (g_dataBuffer_MVB[1760+2] & B1_16
#define LCUCCU_4_MB_DO_2_CH24_B1                          (g_dataBuffer_MVB[1760+2] & B1_17

#define LCUCCU_4_MB_DO_3_CH1_B1                           (g_dataBuffer_MVB[1760+3] & B1_00
#define LCUCCU_4_MB_DO_3_CH2_B1                           (g_dataBuffer_MVB[1760+3] & B1_01
#define LCUCCU_4_MB_DO_3_CH3_B1                           (g_dataBuffer_MVB[1760+3] & B1_02
#define LCUCCU_4_MB_DO_3_CH4_B1                           (g_dataBuffer_MVB[1760+3] & B1_03
#define LCUCCU_4_MB_DO_3_CH5_B1                           (g_dataBuffer_MVB[1760+3] & B1_04
#define LCUCCU_4_MB_DO_3_CH6_B1                           (g_dataBuffer_MVB[1760+3] & B1_05
#define LCUCCU_4_MB_DO_3_CH7_B1                           (g_dataBuffer_MVB[1760+3] & B1_06
#define LCUCCU_4_MB_DO_3_CH8_B1                           (g_dataBuffer_MVB[1760+3] & B1_07
#define LCUCCU_4_MB_DO_3_CH9_B1                           (g_dataBuffer_MVB[1760+3] & B1_10
#define LCUCCU_4_MB_DO_3_CH10_B1                          (g_dataBuffer_MVB[1760+3] & B1_11
#define LCUCCU_4_MB_DO_3_CH11_B1                          (g_dataBuffer_MVB[1760+3] & B1_12
#define LCUCCU_4_MB_DO_3_CH12_B1                          (g_dataBuffer_MVB[1760+3] & B1_13
#define LCUCCU_4_MB_DO_3_CH13_B1                          (g_dataBuffer_MVB[1760+3] & B1_14
#define LCUCCU_4_MB_DO_3_CH14_B1                          (g_dataBuffer_MVB[1760+3] & B1_15
#define LCUCCU_4_MB_DO_3_CH15_B1                          (g_dataBuffer_MVB[1760+3] & B1_16
#define LCUCCU_4_MB_DO_3_CH16_B1                          (g_dataBuffer_MVB[1760+3] & B1_17
#define LCUCCU_4_MB_DO_3_CH17_B1                          (g_dataBuffer_MVB[1760+4] & B1_00
#define LCUCCU_4_MB_DO_3_CH18_B1                          (g_dataBuffer_MVB[1760+4] & B1_01
#define LCUCCU_4_MB_DO_3_CH19_B1                          (g_dataBuffer_MVB[1760+4] & B1_02
#define LCUCCU_4_MB_DO_3_CH20_B1                          (g_dataBuffer_MVB[1760+4] & B1_03
#define LCUCCU_4_MB_DO_3_CH21_B1                          (g_dataBuffer_MVB[1760+4] & B1_04
#define LCUCCU_4_MB_DO_3_CH22_B1                          (g_dataBuffer_MVB[1760+4] & B1_05
#define LCUCCU_4_MB_DO_3_CH23_B1                          (g_dataBuffer_MVB[1760+4] & B1_06
#define LCUCCU_4_MB_DO_3_CH24_B1                          (g_dataBuffer_MVB[1760+4] & B1_07

#define LCUCCU_4_MB_DO_4_CH1_B1                           (g_dataBuffer_MVB[1760+4] & B1_10
#define LCUCCU_4_MB_DO_4_CH2_B1                           (g_dataBuffer_MVB[1760+4] & B1_11
#define LCUCCU_4_MB_DO_4_CH3_B1                           (g_dataBuffer_MVB[1760+4] & B1_12
#define LCUCCU_4_MB_DO_4_CH4_B1                           (g_dataBuffer_MVB[1760+4] & B1_13
#define LCUCCU_4_MB_DO_4_CH5_B1                           (g_dataBuffer_MVB[1760+4] & B1_14
#define LCUCCU_4_MB_DO_4_CH6_B1                           (g_dataBuffer_MVB[1760+4] & B1_15
#define LCUCCU_4_MB_DO_4_CH7_B1                           (g_dataBuffer_MVB[1760+4] & B1_16
#define LCUCCU_4_MB_DO_4_CH8_B1                           (g_dataBuffer_MVB[1760+4] & B1_17
#define LCUCCU_4_MB_DO_4_CH9_B1                           (g_dataBuffer_MVB[1760+5] & B1_00
#define LCUCCU_4_MB_DO_4_CH10_B1                          (g_dataBuffer_MVB[1760+5] & B1_01
#define LCUCCU_4_MB_DO_4_CH11_B1                          (g_dataBuffer_MVB[1760+5] & B1_02
#define LCUCCU_4_MB_DO_4_CH12_B1                          (g_dataBuffer_MVB[1760+5] & B1_03
#define LCUCCU_4_MB_DO_4_CH13_B1                          (g_dataBuffer_MVB[1760+5] & B1_04
#define LCUCCU_4_MB_DO_4_CH14_B1                          (g_dataBuffer_MVB[1760+5] & B1_05
#define LCUCCU_4_MB_DO_4_CH15_B1                          (g_dataBuffer_MVB[1760+5] & B1_06
#define LCUCCU_4_MB_DO_4_CH16_B1                          (g_dataBuffer_MVB[1760+5] & B1_07
#define LCUCCU_4_MB_DO_4_CH17_B1                          (g_dataBuffer_MVB[1760+5] & B1_10
#define LCUCCU_4_MB_DO_4_CH18_B1                          (g_dataBuffer_MVB[1760+5] & B1_11
#define LCUCCU_4_MB_DO_4_CH19_B1                          (g_dataBuffer_MVB[1760+5] & B1_12
#define LCUCCU_4_MB_DO_4_CH20_B1                          (g_dataBuffer_MVB[1760+5] & B1_13
#define LCUCCU_4_MB_DO_4_CH21_B1                          (g_dataBuffer_MVB[1760+5] & B1_14
#define LCUCCU_4_MB_DO_4_CH22_B1                          (g_dataBuffer_MVB[1760+5] & B1_15
#define LCUCCU_4_MB_DO_4_CH23_B1                          (g_dataBuffer_MVB[1760+5] & B1_16
#define LCUCCU_4_MB_DO_4_CH24_B1                          (g_dataBuffer_MVB[1760+5] & B1_17

#define LCUCCU_4_MB_DO_5_CH1_B1                           (g_dataBuffer_MVB[1760+6] & B1_00
#define LCUCCU_4_MB_DO_5_CH2_B1                           (g_dataBuffer_MVB[1760+6] & B1_01
#define LCUCCU_4_MB_DO_5_CH3_B1                           (g_dataBuffer_MVB[1760+6] & B1_02
#define LCUCCU_4_MB_DO_5_CH4_B1                           (g_dataBuffer_MVB[1760+6] & B1_03
#define LCUCCU_4_MB_DO_5_CH5_B1                           (g_dataBuffer_MVB[1760+6] & B1_04
#define LCUCCU_4_MB_DO_5_CH6_B1                           (g_dataBuffer_MVB[1760+6] & B1_05
#define LCUCCU_4_MB_DO_5_CH7_B1                           (g_dataBuffer_MVB[1760+6] & B1_06
#define LCUCCU_4_MB_DO_5_CH8_B1                           (g_dataBuffer_MVB[1760+6] & B1_07
#define LCUCCU_4_MB_DO_5_CH9_B1                           (g_dataBuffer_MVB[1760+6] & B1_10
#define LCUCCU_4_MB_DO_5_CH10_B1                          (g_dataBuffer_MVB[1760+6] & B1_11
#define LCUCCU_4_MB_DO_5_CH11_B1                          (g_dataBuffer_MVB[1760+6] & B1_12
#define LCUCCU_4_MB_DO_5_CH12_B1                          (g_dataBuffer_MVB[1760+6] & B1_13
#define LCUCCU_4_MB_DO_5_CH13_B1                          (g_dataBuffer_MVB[1760+6] & B1_14
#define LCUCCU_4_MB_DO_5_CH14_B1                          (g_dataBuffer_MVB[1760+6] & B1_15
#define LCUCCU_4_MB_DO_5_CH15_B1                          (g_dataBuffer_MVB[1760+6] & B1_16
#define LCUCCU_4_MB_DO_5_CH16_B1                          (g_dataBuffer_MVB[1760+6] & B1_17
#define LCUCCU_4_MB_DO_5_CH17_B1                          (g_dataBuffer_MVB[1760+7] & B1_00
#define LCUCCU_4_MB_DO_5_CH18_B1                          (g_dataBuffer_MVB[1760+7] & B1_01
#define LCUCCU_4_MB_DO_5_CH19_B1                          (g_dataBuffer_MVB[1760+7] & B1_02
#define LCUCCU_4_MB_DO_5_CH20_B1                          (g_dataBuffer_MVB[1760+7] & B1_03
#define LCUCCU_4_MB_DO_5_CH21_B1                          (g_dataBuffer_MVB[1760+7] & B1_04
#define LCUCCU_4_MB_DO_5_CH22_B1                          (g_dataBuffer_MVB[1760+7] & B1_05
#define LCUCCU_4_MB_DO_5_CH23_B1                          (g_dataBuffer_MVB[1760+7] & B1_06
#define LCUCCU_4_MB_DO_5_CH24_B1                          (g_dataBuffer_MVB[1760+7] & B1_07

#define LCUCCU_4_MB_DO_6_CH1_B1                           (g_dataBuffer_MVB[1760+7] & B1_10
#define LCUCCU_4_MB_DO_6_CH2_B1                           (g_dataBuffer_MVB[1760+7] & B1_11
#define LCUCCU_4_MB_DO_6_CH3_B1                           (g_dataBuffer_MVB[1760+7] & B1_12
#define LCUCCU_4_MB_DO_6_CH4_B1                           (g_dataBuffer_MVB[1760+7] & B1_13
#define LCUCCU_4_MB_DO_6_CH5_B1                           (g_dataBuffer_MVB[1760+7] & B1_14
#define LCUCCU_4_MB_DO_6_CH6_B1                           (g_dataBuffer_MVB[1760+7] & B1_15
#define LCUCCU_4_MB_DO_6_CH7_B1                           (g_dataBuffer_MVB[1760+7] & B1_16
#define LCUCCU_4_MB_DO_6_CH8_B1                           (g_dataBuffer_MVB[1760+7] & B1_17
#define LCUCCU_4_MB_DO_6_CH9_B1                           (g_dataBuffer_MVB[1760+8] & B1_00
#define LCUCCU_4_MB_DO_6_CH10_B1                          (g_dataBuffer_MVB[1760+8] & B1_01
#define LCUCCU_4_MB_DO_6_CH11_B1                          (g_dataBuffer_MVB[1760+8] & B1_02
#define LCUCCU_4_MB_DO_6_CH12_B1                          (g_dataBuffer_MVB[1760+8] & B1_03
#define LCUCCU_4_MB_DO_6_CH13_B1                          (g_dataBuffer_MVB[1760+8] & B1_04
#define LCUCCU_4_MB_DO_6_CH14_B1                          (g_dataBuffer_MVB[1760+8] & B1_05
#define LCUCCU_4_MB_DO_6_CH15_B1                          (g_dataBuffer_MVB[1760+8] & B1_06
#define LCUCCU_4_MB_DO_6_CH16_B1                          (g_dataBuffer_MVB[1760+8] & B1_07
#define LCUCCU_4_MB_DO_6_CH17_B1                          (g_dataBuffer_MVB[1760+8] & B1_10
#define LCUCCU_4_MB_DO_6_CH18_B1                          (g_dataBuffer_MVB[1760+8] & B1_11
#define LCUCCU_4_MB_DO_6_CH19_B1                          (g_dataBuffer_MVB[1760+8] & B1_12
#define LCUCCU_4_MB_DO_6_CH20_B1                          (g_dataBuffer_MVB[1760+8] & B1_13
#define LCUCCU_4_MB_DO_6_CH21_B1                          (g_dataBuffer_MVB[1760+8] & B1_14
#define LCUCCU_4_MB_DO_6_CH22_B1                          (g_dataBuffer_MVB[1760+8] & B1_15
#define LCUCCU_4_MB_DO_6_CH23_B1                          (g_dataBuffer_MVB[1760+8] & B1_16
#define LCUCCU_4_MB_DO_6_CH24_B1                          (g_dataBuffer_MVB[1760+8] & B1_17




//R_SwRel(01/03/04/05/08)(5) RW Release Data Set
//0x393=915    LCU_MA_All(LCU_MA RW Release Data Set) R_SwRel(01)
                                                        //g_dataBuffer_MVB[1776+i] = (snkPortData393[i]);

//0x39d=925    LCU_RA_All(LCU_RA RW Release Data Set) R_SwRel(03)
                                                        //g_dataBuffer_MVB[1792+i] = (snkPortData39d[i]);

//0x3a7=935    LCU_P_All (LCU_P  RW Release Data Set) R_SwRel(04)
                                                        //g_dataBuffer_MVB[1808+i] = (snkPortData3a7[i]);

//0x3b1=945    LCU_RB_All(LCU_RB RW Release Data Set) R_SwRel(05)
                                                        //g_dataBuffer_MVB[1824+i] = (snkPortData3b1[i]);

//0x3bb=955    LCU_MB_All(LCU_MB RW Release Data Set) R_SwRel(08)
                                                        //g_dataBuffer_MVB[1840+i] = (snkPortData3bb[i]);


//RSE to CCU & CCU to RSE
//0x2ee=750   CCU_RSE(Status to RSE)                    (g_dataBuffer_MVB[1856+i] = (snkPortData2ee[i]);

//0x2ef=751   RSE_CCU(Status from RSE)                  (g_dataBuffer_MVB[1872+i] = (snkPortData2ef[i]);
#define ERM_Version_X                                   (g_dataBuffer_MVB[1872] U8_1
#define ERM_Version_Y                                   (g_dataBuffer_MVB[1872+1] U8_0

//0x2f0=752   RSE_CCU(Status from RSE)                  (g_dataBuffer_MVB[1888+i] = (snkPortData2f0[i]);

//0x2f1=753   RSE_CCU(Status from RSE)                  (g_dataBuffer_MVB[1904+i] = (snkPortData2f1[i]);

//0x2f2=754   RSE_CCU(Status from RSE)                  (g_dataBuffer_MVB[1920+i] = (snkPortData2f2[i]);



//PIDS to PA to IDU
//0x258=600   PIDS1_(PA1/PA2/IDU)(Status from PIDS1)     (g_dataBuffer_MVB[1936+i] = (snkPortData258[i]);


#define PIDS1IDU_LifeSig_U16                          Change_BigEen( g_dataBuffer_MVB[1936+0])
#define PIDS1IDU_Media_SW_U8                            (g_dataBuffer_MVB[1936+1] U8_1
#define PIDS1IDU_CCTV_SW_U8                             (g_dataBuffer_MVB[1936+1] U8_0
#define PIDS1IDU_PID_Op_Mode_B1                         (g_dataBuffer_MVB[1936+2] & B1_00
#define PIDS1IDU_PID_AutoTestDone_B1                    (g_dataBuffer_MVB[1936+2] & B1_10
#define PIDS1IDU_PID_CriticFail_B1                    (g_dataBuffer_MVB[1936+2] & B1_11
#define PIDS1IDU_PID_MajorFail_B1                    (g_dataBuffer_MVB[1936+2] & B1_12
#define PIDS1IDU_PID_MinorFail_B1                    (g_dataBuffer_MVB[1936+2] & B1_13
#define PIDS1IDU_PID_CMON_CA_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_00
#define PIDS1IDU_PID_CMON_CB_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_01
#define PIDS1IDU_PID_MCS_MA_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_02
#define PIDS1IDU_PID_MCS_MB_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_03
#define PIDS1IDU_PID_MDU_MA_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_00
#define PIDS1IDU_PID_MDU_RA_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_01
#define PIDS1IDU_PID_MDU_P_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_01
#define PIDS1IDU_PID_MDU_RB_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_02
#define PIDS1IDU_PID_MDU_MB_Fail_B1                    (g_dataBuffer_MVB[1936+3] & B1_03





//0x259=601   PIDS2_(PA1/PA2/IDU)(Status from PIDS2)     (g_dataBuffer_MVB[1952+i] = (snkPortData259[i]);

//0x25a=602   CCU_(PIDS/PA)(1/2)(CCU status for PIDS1/2,PA1/2)
                                                        //g_dataBuffer_MVB[1968+i] = (snkPortData25a[i]);



//0x226=550   MVB_STAT LCU_RA to IDU 16 1024
#define MVB_STAT_CCU_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_00
#define MVB_STAT_CCU_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_01
#define MVB_STAT_LCU_RA_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_02
#define MVB_STAT_LCU_RA_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_03
#define MVB_STAT_LCU_RP_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_04
#define MVB_STAT_LCU_RP_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_05
#define MVB_STAT_LCU_RB_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_06
#define MVB_STAT_LCU_RB_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_07
#define MVB_STAT_LCU_MB_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_10
#define MVB_STAT_LCU_MB_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_11
#define MVB_STAT_HVAC_RA_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_12
#define MVB_STAT_HVAC_RA_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_13
#define MVB_STAT_HVAC_RB_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_14
#define MVB_STAT_HVAC_RB_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_15
#define MVB_STAT_IDU_MA_LAT_B1                          (g_dataBuffer_MVB[2048+0] & B1_16
#define MVB_STAT_IDU_MA_RLD_B1                          (g_dataBuffer_MVB[2048+0] & B1_17

#define MVB_STAT_IDU_MB_LAT_B1                          (g_dataBuffer_MVB[2048+1] & B1_00
#define MVB_STAT_IDU_MB_RLD_B1                          (g_dataBuffer_MVB[2048+1] & B1_01
#define MVB_STAT_TCU1_MA_LAT_B1                          (g_dataBuffer_MVB[2048+1] & B1_02
#define MVB_STAT_TCU1_MA_RLD_B1                          (g_dataBuffer_MVB[2048+1] & B1_03
#define MVB_STAT_TCU2_MA_LAT_B1                          (g_dataBuffer_MVB[2048+1] & B1_04
#define MVB_STAT_TCU2_MA_RLD_B1                          (g_dataBuffer_MVB[2048+1] & B1_05
#define MVB_STAT_TCU1_MB_LAT_B1                          (g_dataBuffer_MVB[2048+1] & B1_06
#define MVB_STAT_TCU1_MB_RLD_B1                          (g_dataBuffer_MVB[2048+1] & B1_07
#define MVB_STAT_TCU2_MB_LAT_B1                          (g_dataBuffer_MVB[2048+1] & B1_10
#define MVB_STAT_TCU2_MB_RLD_B1                          (g_dataBuffer_MVB[2048+1] & B1_11
#define MVB_STAT_BCU_MA_LAT_B1                           (g_dataBuffer_MVB[2048+1] & B1_12
#define MVB_STAT_BCU_MA_RLD_B1                           (g_dataBuffer_MVB[2048+1] & B1_13
#define MVB_STAT_BCU_P_LAT_B1                           (g_dataBuffer_MVB[2048+1] & B1_14
#define MVB_STAT_BCU_P_RLD_B1                           (g_dataBuffer_MVB[2048+1] & B1_15
#define MVB_STAT_BCU_MB_LAT_B1                           (g_dataBuffer_MVB[2048+1] & B1_16
#define MVB_STAT_BCU_MB_RLD_B1                           (g_dataBuffer_MVB[2048+1] & B1_17

#define MVB_STAT_DOOR_MA_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_00
#define MVB_STAT_DOOR_MA_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_01
#define MVB_STAT_DOOR_RA_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_02
#define MVB_STAT_DOOR_RA_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_03
#define MVB_STAT_DOOR_RB_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_04
#define MVB_STAT_DOOR_RB_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_05
#define MVB_STAT_DOOR_MB_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_06
#define MVB_STAT_DOOR_MB_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_07

#define MVB_STAT_PA_MA_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_10
#define MVB_STAT_PA_MA_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_11
#define MVB_STAT_PA_MB_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_12
#define MVB_STAT_PA_MB_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_13
#define MVB_STAT_PID_MA_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_14
#define MVB_STAT_PID_MA_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_15
#define MVB_STAT_PID_MB_LAT_B1                           (g_dataBuffer_MVB[2048+2] & B1_16
#define MVB_STAT_PID_MB_RLD_B1                           (g_dataBuffer_MVB[2048+2] & B1_17

#define MVB_STAT_GTW_A_LAT_B1                           (g_dataBuffer_MVB[2048+3] & B1_00
#define MVB_STAT_GTW_A_RLD_B1                           (g_dataBuffer_MVB[2048+3] & B1_01
#define MVB_STAT_RSE_LAT_B1                           (g_dataBuffer_MVB[2048+3] & B1_02
#define MVB_STAT_RSE_RLD_B1                           (g_dataBuffer_MVB[2048+3] & B1_03

#define MVB_STAT_WC_CA_LAT_B1                           (g_dataBuffer_MVB[2048+3] & B1_04
#define MVB_STAT_WC_CA_RLD_B1                           (g_dataBuffer_MVB[2048+3] & B1_05
#define MVB_STAT_WC_CB_LAT_B1                           (g_dataBuffer_MVB[2048+3] & B1_06
#define MVB_STAT_WC_CB_RLD_B1                           (g_dataBuffer_MVB[2048+3] & B1_07

#define MVB_STAT_LCU_MA_LAT_B1                           (g_dataBuffer_MVB[2048+3] & B1_10
#define MVB_STAT_LCU_MA_RLD_B1                           (g_dataBuffer_MVB[2048+3] & B1_11

//add 2016/11/8 special mode

#define MVB_STAT_LCU_MA_gaojiasu_B1                           LCUCCU_3_MA_DI_5_CH13_B1
#define MVB_STAT_LCU_MB_gaojiasu_B1                           LCUCCU_3_MB_DI_5_CH13_B1

#define MVB_STAT_LCU_MA_xianghou_B1                           LCUCCU_3_MA_DI_5_CH17_B1
#define MVB_STAT_LCU_MB_xianghou_B1                           LCUCCU_3_MB_DI_5_CH17_B1

#define MVB_STAT_LCU_MA_jinjiyunxing_B1                       LCUCCU_3_MA_DI_5_CH18_B1
#define MVB_STAT_LCU_MB_jinjiyunxing_B1                       LCUCCU_3_MB_DI_5_CH18_B1

#define MVB_STAT_LCU_MA_xiche_B1                              LCUCCU_3_MA_DI_5_CH20_B1
#define MVB_STAT_LCU_MB_xiche_B1                              LCUCCU_3_MB_DI_5_CH20_B1

#define MVB_STAT_LCU_MA_key_B1                                LCUCCU_3_MA_DI_2_CH18_B1
#define MVB_STAT_LCU_MB_key_B1                                LCUCCU_3_MB_DI_2_CH18_B1





#endif // DATABUFFER_H
