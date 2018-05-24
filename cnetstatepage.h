#ifndef CNETSTATEPAGE_H
#define CNETSTATEPAGE_H

#include "cpage.h"
#include "databuffer.h"
#define ID_NETSTATE_TRAINCODE             0x0201

#define ID_NETSTATE_PIDS_1                  0x0203
#define ID_NETSTATE_PA_1                    0x0204
#define ID_NETSTATE_BCU_1                   0x0205
#define ID_NETSTATE_TCU_1                   0x0206
#define ID_NETSTATE_ACU_1                   0x0207


#define ID_NETSTATE_IDU_1                   0x0208
#define ID_NETSTATE_ERM_1                   0x0209
#define ID_NETSTATE_CCU_1                   0x020A
#define ID_NETSTATE_LCU1_1                  0x020B
#define ID_NETSTATE_LCU2_1                  0x020C
#define ID_NETSTATE_DCU_1                   0x020D

#define ID_NETSTATE_SCU_2                   0x020E
#define ID_NETSTATE_LCU_2                   0x020F
#define ID_NETSTATE_DCU_2                   0x0210
#define ID_NETSTATE_HVAC_2                   0x0211

#define ID_NETSTATE_LCU_3                   0x0213
#define ID_NETSTATE_BCU_3                   0x0214

#define ID_NETSTATE_PIDS_5                           0x0223
#define ID_NETSTATE_PA_5                             0x0224
#define ID_NETSTATE_BCU_5                            0x0225
#define ID_NETSTATE_TCU_5                            0x0226
#define ID_NETSTATE_ACU_5                            0x0227

#define ID_NETSTATE_IDU_5                            0x0228
#define ID_NETSTATE_CCU_5                            0x022A
#define ID_NETSTATE_LCU1_5                           0x022B
#define ID_NETSTATE_LCU2_5                           0x022C
#define ID_NETSTATE_DCU_5                            0x022D

#define ID_NETSTATE_SCU_4                   0x022E
#define ID_NETSTATE_LCU_4                   0x022F
#define ID_NETSTATE_DCU_4                   0x0230
#define ID_NETSTATE_HVAC_4                   0x0231

#define ID_NETSTATE_GTWA                   0x0232
#define ID_NETSTATE_GTWB                   0x0234

#define ID_NETSTATE_DOOR1_1                   0x0235
#define ID_NETSTATE_DOOR2_1                   0x0236

#define ID_NETSTATE_DOOR1_2                   0x0237
#define ID_NETSTATE_DOOR2_2                   0x0238
#define ID_NETSTATE_DOOR3_2                   0x0239
#define ID_NETSTATE_DOOR4_2                   0x023A

#define ID_NETSTATE_DOOR1_4                   0x023B
#define ID_NETSTATE_DOOR2_4                   0x023C
#define ID_NETSTATE_DOOR3_4                   0x023D
#define ID_NETSTATE_DOOR4_4                   0x023E

#define ID_NETSTATE_DOOR1_5                   0x023F
#define ID_NETSTATE_DOOR2_5                   0x0240

#define ID_NETSTATE_TCU_2                   0x0241
#define ID_NETSTATE_TCU_3                   0x0242
//#define ID_NETSTATE_IDU1                  0x0202
//#define ID_NETSTATE_IDU2                  0x0203
//#define ID_NETSTATE_VCU1                  0x0204
//#define ID_NETSTATE_VCU2                  0x0205
//#define ID_NETSTATE_TCU1                  0x0206
//#define ID_NETSTATE_BCU                   0x0207
//#define ID_NETSTATE_TCU2                  0x0208
//#define ID_NETSTATE_ACU1                  0x0209
//#define ID_NETSTATE_ACU2                  0x020A
//#define ID_NETSTATE_ATC1                 0x020B
//#define ID_NETSTATE_ATC2                 0x020C
//#define ID_NETSTATE_HVAC1                 0x020D
//#define ID_NETSTATE_HVAC2                 0x020E
//#define ID_NETSTATE_MC1_DOOR1             0x020F
//#define ID_NETSTATE_MC1_DOOR2             0x0210
//#define ID_NETSTATE_MC1_DOOR3             0x0211
//#define ID_NETSTATE_MC1_DOOR4             0x0212
//#define ID_NETSTATE_MC2_DOOR1             0x0213
//#define ID_NETSTATE_MC2_DOOR2             0x0214
//#define ID_NETSTATE_MC2_DOOR3             0x0215
//#define ID_NETSTATE_MC2_DOOR4             0x0216
//#define ID_NETSTATE_PIS1                  0x0217
//#define ID_NETSTATE_RIOM1                 0x0218
//#define ID_NETSTATE_RIOM2                 0x0219

//#define ID_NETSTATE_MC1_SGN               0x0220
//#define ID_NETSTATE_MC1_DI1               0x0221
//#define ID_NETSTATE_MC1_DI2               0x0222
//#define ID_NETSTATE_MC1_AX                0x0223
//#define ID_NETSTATE_MC1_DO1               0x0224
//#define ID_NETSTATE_MC1_DO2               0x0225
//#define ID_NETSTATE_MC1_TSS               0x0226
//#define ID_NETSTATE_PIS2                  0x0227

//#define ID_NETSTATE_MC2_SGN               0x0230
//#define ID_NETSTATE_MC2_DI1               0x0231
//#define ID_NETSTATE_MC2_DI2               0x0232
//#define ID_NETSTATE_MC2_AX                0x0233
//#define ID_NETSTATE_MC2_DO1               0x0234
//#define ID_NETSTATE_MC2_DO2               0x0235
//#define ID_NETSTATE_MC2_TSS               0x0236

//#define ID_NETSTATE_MC1_ATC               0x0237
//#define ID_NETSTATE_MC2_ATC               0x0238
//#define ID_NETSTATE_MC1_TKT               0x0239
//#define ID_NETSTATE_MC2_TKT               0x023A

class CNetStatePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CNetStatePage)
public:
    CNetStatePage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();

    void OnCommonQuitButtonDown();
    void OnUpdateNetStatus( int ID,int connectStatus);
    void OnUpdateNetStatus2( int ID,int connectStatus);
    void OnUpdateNetStatus3( int ID,int connectStatus,int netStatus);
     void OnUpdateNetDoorStatus( int ID,int connectStatus);
     int OnUpdateNetTCUStatus( int ID,int s1,int s2);
};

#endif // CNETSTATEPAGE_H
