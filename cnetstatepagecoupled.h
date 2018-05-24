#ifndef CNETSTATEPAGECOUPLED_H
#define CNETSTATEPAGECOUPLED_H
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

//***********************************************************


#define ID_NETSTATE_PIDS_6                  0x0253
#define ID_NETSTATE_PA_6                    0x0254
#define ID_NETSTATE_BCU_6                   0x0255
#define ID_NETSTATE_TCU_6                   0x0256
#define ID_NETSTATE_ACU_6                   0x0257

#define ID_NETSTATE_IDU_6                   0x0258
#define ID_NETSTATE_ERM_6                   0x0259
#define ID_NETSTATE_CCU_6                   0x025A
#define ID_NETSTATE_LCU1_6                  0x025B
#define ID_NETSTATE_LCU2_6                  0x025C
#define ID_NETSTATE_DCU_6                   0x025D

#define ID_NETSTATE_SCU_7                   0x025E
#define ID_NETSTATE_LCU_7                   0x025F
#define ID_NETSTATE_DCU_7                   0x0260
#define ID_NETSTATE_HVAC_7                   0x0261

#define ID_NETSTATE_LCU_8                   0x0263
#define ID_NETSTATE_BCU_8                   0x0264

#define ID_NETSTATE_PIDS_10                           0x0273
#define ID_NETSTATE_PA_10                             0x0274
#define ID_NETSTATE_BCU_10                            0x0275
#define ID_NETSTATE_TCU_10                            0x0276
#define ID_NETSTATE_ACU_10                            0x0277

#define ID_NETSTATE_IDU_10                            0x0278
#define ID_NETSTATE_CCU_10                            0x027A
#define ID_NETSTATE_LCU1_10                           0x027B
#define ID_NETSTATE_LCU2_10                           0x027C
#define ID_NETSTATE_DCU_10                            0x027D

#define ID_NETSTATE_SCU_9                   0x027E
#define ID_NETSTATE_LCU_9                   0x027F
#define ID_NETSTATE_DCU_9                   0x0280
#define ID_NETSTATE_HVAC_9                   0x0281

#define ID_NETSTATE_GWTA                   0x0282
#define ID_NETSTATE_GWTB                   0x0284

#define ID_NETSTATE_DOOR1_6                   0x0285
#define ID_NETSTATE_DOOR2_6                   0x0286

#define ID_NETSTATE_DOOR1_7                   0x0287
#define ID_NETSTATE_DOOR2_7                   0x0288
#define ID_NETSTATE_DOOR3_7                   0x0289
#define ID_NETSTATE_DOOR4_7                   0x028A

#define ID_NETSTATE_DOOR1_9                   0x028B
#define ID_NETSTATE_DOOR2_9                   0x028C
#define ID_NETSTATE_DOOR3_9                   0x028D
#define ID_NETSTATE_DOOR4_9                   0x028E

#define ID_NETSTATE_DOOR1_10                   0x028F
#define ID_NETSTATE_DOOR2_10                   0x0290

#define ID_NETSTATE_TCU_2                   0x0291
#define ID_NETSTATE_TCU_4                   0x0292
#define ID_NETSTATE_TCU_7                   0x0293
#define ID_NETSTATE_TCU_9                   0x0294



class cnetstatepagecoupled : public CPage
{
    DECLEAR_MESSAGE_MAP(cnetstatepagecoupled)

public:
    cnetstatepagecoupled();

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
