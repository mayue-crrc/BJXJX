#include "cnetstatepage.h"

ROMDATA g_PicRom_NetState[] =
{
    /*string                font                            rc                  foreground color              background color            control type          ID           */
    D_COMMON_PAGE_HEADER

    //{"0000",               D_COMMON_TITLE_FONT, QRect( 20, 70,600, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_NETSTATE_TRAINCODE       },
    {"bjcar.png",   D_DEFAULT_FONT,      QRect(50, 65,540, 60),           Qt::yellow,                   Qt::black,                  CONTROL_IMAGE,        ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(80,149,480, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(80,150,480, 4),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(80,154,480, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(80,190,480, 5),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"GTW",                D_DEFAULT_FONT,      QRect(30,135, 50, 35),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_GTWA       },
    {"GTW",                D_DEFAULT_FONT,      QRect(560,135, 50, 35),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_GTWB       },
    {"CCU",                D_DEFAULT_FONT,       QRect(40,180, 40, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_CCU_1       },
    {"CCU",                D_DEFAULT_FONT,       QRect(560,180, 40, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_CCU_5       },

    {"",                   D_DEFAULT_FONT,      QRect(59,170,3, 10),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(579,170,3, 10),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    //first line
       {"",                   D_DEFAULT_FONT,      QRect(5+3+90 ,195,3.5, 188),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(5+3+75,226,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(5+3+75,265,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(5+3+90,296,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(5+3+90,335,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(5+3+90,374,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(5+3+90,256,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(5+3+75,381,17, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(62,205,3, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(62,240,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"LCU1",                D_DEFAULT_FONT,      QRect(5+3+37,215, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU1_1       },
    {"LCU2",                D_DEFAULT_FONT,      QRect(5+3+37,254, 38, 25),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_LCU2_1       },
    {"IDU",                D_DEFAULT_FONT,       QRect(5+3+5+100,285, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_IDU_1       },
    {"ERM",                D_DEFAULT_FONT,       QRect(5+3+5+100,245, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ERM_1       },
    {"TCU2",                D_DEFAULT_FONT,      QRect(5+3+5+100,363, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_2       },
    {"TCU1",                  D_DEFAULT_FONT,      QRect(5+3+5+100,324, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_1       },
    {"ACU",                D_DEFAULT_FONT,      QRect(5+3+5+100,403, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ACU_1       },

    //second line
      // {"",                   D_DEFAULT_FONT,      QRect(100,220,3.5, 145),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(100,220,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(83,305,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
   //  {"",                   D_DEFAULT_FONT,      QRect(78,296,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(83,343,18, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(132,349,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(132,388,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"BCU",                 D_DEFAULT_FONT,      QRect(113,207, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_BCU_1       },
    {"PIDS",                 D_DEFAULT_FONT,      QRect(45,293, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PIDS_1       },
    {"PA",                 D_DEFAULT_FONT,      QRect(45,332, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PA_1       },
    {"DCU",                 D_DEFAULT_FONT,      QRect(45,371, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_1       },
    {"1",                   D_DEFAULT_FONT,      QRect(31,400, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_1       },
    {"2",                   D_DEFAULT_FONT,      QRect(56,400, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_1       },

    {"",                   D_DEFAULT_FONT,      QRect(29,398,1, 24),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(29,398,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(81,398,1, 24),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(29,422,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

//third line
       {"",                   D_DEFAULT_FONT,      QRect(253,271,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(220,190,3.5, 145),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(220,218,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(220,257,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(220,335,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },



    {"HVAC",                D_DEFAULT_FONT,      QRect(5+230,207, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_HVAC_2       },
    {"LCU",                D_DEFAULT_FONT,       QRect(5+230,246, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_2       },
    {"SCU",                D_DEFAULT_FONT,       QRect(5+230,285, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_SCU_2       },
    {"DCU",                D_DEFAULT_FONT,       QRect(5+230,324, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_2       },
    {"1",                   D_DEFAULT_FONT,      QRect(5+220,353, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_2       },
    {"2",                   D_DEFAULT_FONT,      QRect(5+220,375, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_2       },
    {"3",                   D_DEFAULT_FONT,      QRect(5+245,353, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR3_2       },
    {"4",                   D_DEFAULT_FONT,      QRect(5+245,375, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR4_2       },

{"",                   D_DEFAULT_FONT,      QRect(5+217,351,1, 47),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(5+217,351,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(5+268,351,1, 47),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(5+217,397,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

//4th line
       {"",                   D_DEFAULT_FONT,      QRect(25+285,195,3.5,  64),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(25+285,218,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(25+285,257,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"LCU",                D_DEFAULT_FONT,       QRect(25+5+295,207, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_3       },
    {"BCU",                D_DEFAULT_FONT,       QRect(25+5+295,246, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_BCU_3       },
//5th line
       {"",                   D_DEFAULT_FONT,      QRect(45+383,271,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(45+350,190,3.5, 145),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(45+350,218,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(45+350,257,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(45+350,335,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"HVAC",                D_DEFAULT_FONT,      QRect(45+5+360,207, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_HVAC_4       },
    {"LCU",                D_DEFAULT_FONT,       QRect(45+5+360,246, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_4       },
    {"SCU",                D_DEFAULT_FONT,       QRect(45+5+360,285, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_SCU_4       },
    {"DCU",                D_DEFAULT_FONT,       QRect(45+5+360,324, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_4       },
    {"1",                   D_DEFAULT_FONT,      QRect(50+350,353, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_4       },
    {"2",                   D_DEFAULT_FONT,      QRect(50+350,375, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_4       },
    {"3",                   D_DEFAULT_FONT,      QRect(50+375,353, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR3_4       },
    {"4",                   D_DEFAULT_FONT,      QRect(50+375,375, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR4_4       },
{"",                   D_DEFAULT_FONT,      QRect(30+217+150,351,1, 47),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(30+217+150,351,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(30+268+150,351,1, 47),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(30+217+150,397,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

//6th line

//{"",                   D_DEFAULT_FONT,      QRect(55+415,190,3.5, 145),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+108+415,218,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+108+415,257,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+108+415,296,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+108+415,374,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+55+448,271,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+55+448,310,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"BCU",                 D_DEFAULT_FONT,      QRect(8+55+5+425,207, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_BCU_5       },
    {"TCU3",                 D_DEFAULT_FONT,      QRect(8+55+5+425,246, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_3       },
    {"TCU4",                 D_DEFAULT_FONT,      QRect(8+55+5+425,285, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_5       },
    {"ACU",                 D_DEFAULT_FONT,      QRect(8+55+5+425,324, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ACU_5       },
    {"DCU",                D_DEFAULT_FONT,       QRect(8+55+5+425,363, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_5       },
    {"1",                   D_DEFAULT_FONT,      QRect(8+40+415+20,400, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_5       },
    {"2",                   D_DEFAULT_FONT,      QRect(8+40+415+45,400, 23, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_5       },

{"",                   D_DEFAULT_FONT,      QRect(8+20+153+300,399,1, 24),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+20+153+300,399,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+20+204+300,399,1, 24),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(8+20+153+300,423,52, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


//7th line

       {"",                   D_DEFAULT_FONT,      QRect(65+480,190,3.5, 187+10),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(65+480,218+10,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(65+480,257+10,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(65+480,296+10,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(65+480,335+10,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
       {"",                   D_DEFAULT_FONT,      QRect(65+480,374+10,15, 3),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

{"",                   D_DEFAULT_FONT,      QRect(578,205,3, 12),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(578,242,3, 14),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },



    {"LCU1",                D_DEFAULT_FONT,      QRect(65+5+490,207+10, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU1_5       },
    {"LCU2",                D_DEFAULT_FONT,      QRect(65+5+490,246+10, 38, 25),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_LCU2_5       },
    {"IDU",                D_DEFAULT_FONT,       QRect(65+5+490,285+10, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_IDU_5       },
    {"PIDS",                D_DEFAULT_FONT,      QRect(65+5+490,324+10, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PIDS_5       },
    {"PA",                  D_DEFAULT_FONT,      QRect(65+5+490,363+10, 38, 25),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PA_5       },

D_LAYER1_NAVIGATION_BAR
};
int g_NetStateRomLen = sizeof(g_PicRom_NetState)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CNetStatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        END_MESSAGE_MAP()

        CNetStatePage::CNetStatePage()
{
}

void CNetStatePage::OnUpdatePage()
{
    if(m_TrainCoupleActive ==2)
    {
        ChangePage(PAGE_ROM_INDEX_NETSTATECOUPLED);
    }
    int tmp_state;

    //*******           MA
    OnUpdateNetStatus( ID_NETSTATE_PIDS_1, R2_MVB_3_PidsMaSt_A2_Master );//0=bypass
    OnUpdateNetStatus( ID_NETSTATE_PA_1, R2_MVB_3_PaMaSt_A2_Master);//0=bypass
    //OnUpdateNetStatus( ID_NETSTATE_BCU_1, R2_MVB_3_BcuMaSt_A2_Master);//0=minorfault
    if((int)R2_MVB_3_BcuMaSt_A2_Master == 3 )
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_1))->SetCtrlBKColor(Qt::gray); //ok
    }else if((int)R2_MVB_3_BcuMaSt_A2_Master == 2 )
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_1))->SetCtrlBKColor(Qt::red); //fault
    }else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_1))->SetCtrlBKColor(Qt::green); //gray
    }
    tmp_state = OnUpdateNetTCUStatus(ID_NETSTATE_TCU_1,R2_MVB_3_Tcu1Status_A2_Master,R2_MVB_3_Tcu2Status_A2_Master);
    OnUpdateNetStatus3( ID_NETSTATE_ACU_1,R2_MVB_3_Aux1Status_A2,tmp_state);///TCU COMM FAULTS
    OnUpdateNetStatus( ID_NETSTATE_IDU_1, R2_MVB_3_IduMaSt_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_TCU_1, R2_MVB_3_Tcu1Status_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_TCU_2, R2_MVB_3_Tcu2Status_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_ERM_1, R2_MVB_3_RdeSt_A2_Master);
    OnUpdateNetStatus( ID_NETSTATE_CCU_1, R2_MVB_3_CcuMaSt_A2_Master  );
    OnUpdateNetStatus( ID_NETSTATE_LCU1_1,R2_MVB_3_LcuMaSt_A2_Master  );//LCU1_1
    //LCU2_1
    if(R2_MVB_3_LcuMaStandbySt_B1_Master)
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_1))->SetCtrlBKColor(Qt::red); //fault
    }else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_1))->SetCtrlBKColor(Qt::green); //OK
    }

    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_1, R2_MVB_4_Door1MaSt_A2_Master );///DCU
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_1, R2_MVB_4_Door2MaSt_A2_Master );
    if((R2_MVB_4_Door1MaSt_A2_Master==3)&&(R2_MVB_4_Door2MaSt_A2_Master==3) )//both 3  commi fault
    {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_1))->SetCtrlBKColor(Qt::white);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_1))->SetCtrlBKColor(Qt::green);
    }
    //*******           RA
    OnUpdateNetStatus( ID_NETSTATE_LCU_2,R2_MVB_3_LcuRaSt_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_HVAC_2, R2_MVB_3_HvacRaSt_A2_Master );
    if(bool(R2_MVB_4_ScuRaCommFlt_B1_Master))//SCU logic
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_2))->SetCtrlBKColor(Qt::gray);//Communicate fault
    }
    else
    {
           if(R2_MVB_3_ScMaMajor_B1_Master)
            {
               ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_2))->SetCtrlBKColor(Qt::red);
            }else
            {
                ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_2))->SetCtrlBKColor(Qt::green);//ok
            }
    }
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_2, R2_MVB_4_Door1RaSt_A2_Master );
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_2, R2_MVB_4_Door2RaSt_A2_Master );
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR3_2, R2_MVB_4_Door3RaSt_A2_Master );
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR4_2, R2_MVB_4_Door4RaSt_A2_Master );


    if((R2_MVB_4_Door1RaSt_A2_Master==3)
     &&(R2_MVB_4_Door2RaSt_A2_Master==3)
     &&(R2_MVB_4_Door3RaSt_A2_Master==3)
     &&(R2_MVB_4_Door4RaSt_A2_Master==3))
    {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_2))->SetCtrlBKColor(Qt::white);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_2))->SetCtrlBKColor(Qt::green);
    }

    //********************          P
    OnUpdateNetStatus( ID_NETSTATE_LCU_3, R2_MVB_3_LcuPSt_A2_Master );
    //OnUpdateNetStatus( ID_NETSTATE_BCU_3, R2_MVB_3_BcuPSt_A2_Master );
    if((int)R2_MVB_3_BcuPSt_A2_Master == 3 )
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_3))->SetCtrlBKColor(Qt::gray); //ok
    }else if((int)R2_MVB_3_BcuPSt_A2_Master == 2 )
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_3))->SetCtrlBKColor(Qt::red); //fault
    }else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_3))->SetCtrlBKColor(Qt::green); //gray
    }
    //*********************         RB
    OnUpdateNetStatus( ID_NETSTATE_LCU_4, R2_MVB_3_LcuRbSt_A2_Master  );
    OnUpdateNetStatus( ID_NETSTATE_HVAC_4, R2_MVB_3_HvacRbSt_A2_Master);
    if(bool(R2_MVB_4_ScuRbCommFlt_B1_Master))//SCU logic
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_4))->SetCtrlBKColor(Qt::gray);//Communicate fault
    }
    else
    {
        if(R2_MVB_3_ScMbMajor_B1_Master)
        {
           ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_4))->SetCtrlBKColor(Qt::red);
        }else
        {
            ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_4))->SetCtrlBKColor(Qt::green);//ok
        }
    }
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_4, R2_MVB_4_Door1RbSt_A2_Master );
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_4, R2_MVB_4_Door2RbSt_A2_Master );
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR3_4, R2_MVB_4_Door3RbSt_A2_Master );
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR4_4, R2_MVB_4_Door4RbSt_A2_Master );
    if((R2_MVB_4_Door1RbSt_A2_Master==3)
     &&(R2_MVB_4_Door2RbSt_A2_Master==3)
     &&(R2_MVB_4_Door3RbSt_A2_Master==3)
     &&(R2_MVB_4_Door4RbSt_A2_Master==3))
    {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_4))->SetCtrlBKColor(Qt::white);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_4))->SetCtrlBKColor(Qt::green);
    }

    //********          MB
    OnUpdateNetStatus( ID_NETSTATE_PIDS_5,  R2_MVB_3_PidsMbSt_A2_Master);
    OnUpdateNetStatus( ID_NETSTATE_PA_5, R2_MVB_3_PaMbSt_A2_Master  );
    //OnUpdateNetStatus( ID_NETSTATE_BCU_5, R2_MVB_3_BcuMbSt_A2_Master);
    if((int)R2_MVB_3_BcuMbSt_A2_Master == 3 )
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_5))->SetCtrlBKColor(Qt::gray); //ok
    }else if((int)R2_MVB_3_BcuMbSt_A2_Master == 2 )
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_5))->SetCtrlBKColor(Qt::red); //fault
    }else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_5))->SetCtrlBKColor(Qt::green); //gray
    }

    tmp_state = OnUpdateNetTCUStatus(ID_NETSTATE_TCU_5,R2_MVB_3_Tcu3Status_A2_Master,R2_MVB_3_Tcu4Status_A2_Master);
    OnUpdateNetStatus3( ID_NETSTATE_ACU_5,R2_MVB_3_Aux2Status_A2,tmp_state);
    OnUpdateNetStatus( ID_NETSTATE_IDU_5,R2_MVB_3_IduMbSt_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_TCU_3,R2_MVB_3_Tcu3Status_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_TCU_5,R2_MVB_3_Tcu4Status_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_CCU_5, R2_MVB_3_CcuMbSt_A2_Master );
    OnUpdateNetStatus( ID_NETSTATE_LCU1_5, R2_MVB_3_LcuMbSt_A2_Master );
    //OnUpdateNetStatus3( ID_NETSTATE_LCU2_5, R2_MVB_3_LcuMbStandbySt_B1_Master,R2_MVB_3_LcuMbSt_A2_Master );
    //LCU2_2
    if(R2_MVB_3_LcuMbStandbySt_B1_Master)
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_5))->SetCtrlBKColor(Qt::red); //fault
    }else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_5))->SetCtrlBKColor(Qt::green); //OK
    }
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_5, R2_MVB_4_Door1MbSt_A2_Master );
    OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_5, R2_MVB_4_Door2MbSt_A2_Master );

    if((R2_MVB_4_Door1MbSt_A2_Master==3)&&(R2_MVB_4_Door2MbSt_A2_Master==3) )
    {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_5))->SetCtrlBKColor(Qt::white);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_5))->SetCtrlBKColor(Qt::green);
    }
    //************

    OnUpdateNetStatus( ID_NETSTATE_GTWA, R2_MVB_3_GtwSt_A2_Master);
    //OnUpdateNetStatus( ID_NETSTATE_GTWB, R2_MVB_3_GtwStandbySt_B1_Master);
    if(R2_MVB_3_GtwStandbySt_B1_Master)
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_GTWB))->SetCtrlBKColor(Qt::red); //fault
    }else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_GTWB))->SetCtrlBKColor(Qt::green); //OK
    }
}

int CNetStatePage::OnUpdateNetTCUStatus( int ID,int s1,int s2)
{
    int rtn = 0;
    if(s1 == 1 || s2 == 1)
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);
    }else if(s1 == 2 || s2 == 2 )
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::red);
    }else if(s1 == 3 || s2 == 3)
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::gray);
        rtn = 3;

    }else if(s1 == 0 | s2 == 0)
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::white);
    }else
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::black);
    }
    return rtn;
}

void CNetStatePage::OnUpdateNetStatus( int ID,int connectStatus)
{
    if (connectStatus==1)//Ok
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);
    }else if (connectStatus==2)//Fault
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::red);
    }
    else if (connectStatus==3)//Communicate Fault
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::gray);
    }
    else if (connectStatus==0)//Bypass or Not available
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::white);
    }else
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::black);
    }
}
void CNetStatePage::OnUpdateNetStatus2( int ID,int connectStatus)
{
    if (connectStatus==3)//Ok
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);
    }else if (connectStatus==2)//Fault
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::red);
    }
    else if (connectStatus==3)//Communicate Fault
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::gray);
    }
    else if (connectStatus==0)//Bypass or Not available
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::white);
    }else
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::black);
    }
}


void CNetStatePage::OnUpdateNetStatus3( int ID,int netStatus,int connectStatus)
{
    if(connectStatus)
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::gray);//Communicate fault
    }
    else
    {
            if(netStatus == 1)
            {
                ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);//OK
            }
            else if(netStatus ==2)
            {
               ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::red);//
            }
            else if(netStatus ==3) //minor greed
            {
               ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);
            }else
            {
                ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);//

            }
      }

}

void CNetStatePage::OnUpdateNetDoorStatus( int ID,int connectStatus)
{
    if (connectStatus  ==1 || connectStatus  ==0)// minor or ok
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green); //Ok
    }
    else if (connectStatus==2)
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::red);//Major Fault
    }
    else if (connectStatus==3)
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::gray); //Communicate Fault
    }else
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::black);//

    }
}
void CNetStatePage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
