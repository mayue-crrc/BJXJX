#include "cnetstatepagecoupled.h"

int pos1=300;

ROMDATA g_PicRom_NetStateCoupled[] =
{
    /*string                font                            rc                  foreground color              background color            control type          ID           */
    D_COMMON_PAGE_HEADER

    //{"0000",               D_COMMON_TITLE_FONT, QRect( 20, 70,600, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_NETSTATE_TRAINCODE       },
    {"bjcar.png",   D_DEFAULT_FONT,      QRect(20, 65,300, 35),           Qt::yellow,                   Qt::black,                  CONTROL_IMAGE,        ID_IGNORE       },
    {"bjcar.png",   D_DEFAULT_FONT,      QRect(320, 65,300, 35),           Qt::yellow,                   Qt::black,                  CONTROL_IMAGE,        ID_IGNORE       },



//No.1
    {"",                   D_DEFAULT_FONT,      QRect(60,115,220, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(60,116,230, 3),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(60,119,230, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(60,148,220, 4),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(70,150,3, 230),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


     //************  1st Line
    {"GTW",               D_FONT(5),     QRect(30,105, 30, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_GTWA       },

    {"CCU",               D_FONT(5),      QRect(30,140, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_CCU_1       },
    {"LCU1",               D_FONT(5),     QRect(30,170, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU1_1       },
    {"LCU2",               D_FONT(5),     QRect(30,200, 30,  20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_LCU2_1       },
    {"BCU",               D_FONT(5),     QRect(30,230, 30,  20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_BCU_1       },

    {"",                   D_DEFAULT_FONT,      QRect(60,179,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(60,209,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(60,239,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(44,125,3, 15),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(44,160,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(44,190,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    //*************************  2nd Line

    {"",                   D_DEFAULT_FONT,      QRect(70,150,3, 230),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(70,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(70,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(70,229,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(70,259,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(70,289,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(70,319,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    //{"",                   D_DEFAULT_FONT,      QRect(70,349,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(70,379,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(68,393,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(68,393,1, 19),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(68,411,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(103,393,1, 19),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(94,295,2, 15),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(94,330,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"IDU",               D_FONT(5),      QRect(80,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_IDU_1       },
    {"ERM",               D_FONT(5),      QRect(80,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ERM_1       },
    {"PIDS",               D_FONT(5),     QRect(80,220, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PIDS_1       },
    {"PA",                 D_FONT(5),     QRect(80,250, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PA_1       },
    {"TCU1",                D_FONT(5),     QRect(80,280, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_1       },
    {"TCU2",                D_FONT(5),     QRect(80,310, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_2       },
    {"ACU",                D_FONT(5),     QRect(80,340, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ACU_1       },
    {"DCU",               D_FONT(5),      QRect(80,370, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_1       },

    {"1",                   D_DEFAULT_FONT,      QRect(70,395, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_1       },
    {"2",                   D_DEFAULT_FONT,      QRect(87,395, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_1       },

    //*************************  3rd Line
    {"",                   D_DEFAULT_FONT,      QRect(120,150,3, 110),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(120,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(120,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    //{"",                   D_DEFAULT_FONT,      QRect(120,229,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(120,259,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(118,273,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(118,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(118,307,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(152,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(144,210,2, 40),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"HVAC",              D_FONT(5),      QRect(130,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_HVAC_2       },
    {"LCU",               D_FONT(5),      QRect(130,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_2       },
    {"SCU",               D_FONT(5),      QRect(130,220, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_SCU_2       },
    {"DCU",               D_FONT(5),      QRect(130,250, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_2       },

    {"1",                   D_DEFAULT_FONT,      QRect(120,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_2       },
    {"2",                   D_DEFAULT_FONT,      QRect(120,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_2       },
    {"3",                   D_DEFAULT_FONT,      QRect(136,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR3_2       },
    {"4",                   D_DEFAULT_FONT,      QRect(136,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR4_2       },

    //*************************  4th Line
    {"",                   D_DEFAULT_FONT,      QRect(170,150,3, 50),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(170,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(170,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"LCU",               D_FONT(5),      QRect(180,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_3       },
    {"BCU",               D_FONT(5),      QRect(180,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_BCU_3       },

    //*************************  5th Line

    {"",                   D_DEFAULT_FONT,      QRect(220,150,3, 110),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(220,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(220,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
//  {"",                   D_DEFAULT_FONT,      QRect(220,229,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(220,259,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(218,273,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(218,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(218,307,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(252,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(244,210,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"HVAC",              D_FONT(5),      QRect(230,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_HVAC_4       },
    {"LCU",               D_FONT(5),      QRect(230,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_4       },
    {"SCU",               D_FONT(5),      QRect(230,220, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_SCU_4       },
    {"DCU",               D_FONT(5),      QRect(230,250, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_4       },

    {"1",                   D_DEFAULT_FONT,      QRect(220,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_4       },
    {"2",                   D_DEFAULT_FONT,      QRect(220,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_4       },
    {"3",                   D_DEFAULT_FONT,      QRect(236,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR3_4       },
    {"4",                   D_DEFAULT_FONT,      QRect(236,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR4_4       },

    //*************************  6th Line


     {"",                   D_DEFAULT_FONT,      QRect(270,150,3, 241),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(270,179,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(270,209,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(270,239,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(270,269,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(270,299,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(270,329,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(270,359,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(260,359,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(260,389,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

     {"",                   D_DEFAULT_FONT,      QRect(268+10,373,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(268+10,373,1, 18),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(268+10,391,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(302+10,373,1, 18),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

     {"",                   D_DEFAULT_FONT,      QRect(294,125,3, 15),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

     {"",                   D_DEFAULT_FONT,      QRect(294,160,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(294,190,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(244,340,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
     {"",                   D_DEFAULT_FONT,      QRect(244,370,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"GTW",               D_FONT(5),     QRect(280,105, 30, 20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_GTWB       },

    {"CCU",               D_FONT(5),      QRect(280,140, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_CCU_5      },
    {"LCU1",               D_FONT(5),     QRect(280,170, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU1_5       },
    {"LCU2",               D_FONT(5),     QRect(280,200, 30,  20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_LCU2_5       },
    {"IDU",               D_FONT(5),      QRect(280,230, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_IDU_5       },
    {"PIDS",               D_FONT(5),     QRect(280,260, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PIDS_5       },
    {"PA",                 D_FONT(5),     QRect(280,290, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PA_5      },
    {"BCU",                D_FONT(5),     QRect(280,320, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_BCU_5       },
    {"DCU",               D_FONT(5),      QRect(280,350, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_5       },

    {"1",                   D_DEFAULT_FONT,      QRect(270+10,375, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_5       },
    {"2",                   D_DEFAULT_FONT,      QRect(286+10,375, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_5       },

    {"TCU3",                D_FONT(5),     QRect(230,350, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_4       },
    {"TCU4",                D_FONT(5),     QRect(230,380, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_5       },
    {"ACU",                D_FONT(5),     QRect(230,320, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ACU_5       },



    //No.2
        {"",                   D_DEFAULT_FONT,      QRect(pos1+60,115,220, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+60,116,230, 3),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+60,119,230, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+60,148,220, 4),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,150,3, 230),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


         //************  1st Line
        {"GTW",               D_FONT(5),     QRect(pos1+30,105, 30, 20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_GWTA       },

        {"CCU",               D_FONT(5),      QRect(pos1+30,140, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_CCU_6       },
        {"LCU1",               D_FONT(5),     QRect(pos1+30,170, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU1_6       },
        {"LCU2",               D_FONT(5),     QRect(pos1+30,200, 30,  20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_LCU2_6       },
        {"BCU",               D_FONT(5),     QRect(pos1+30,230, 30,  20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_BCU_6       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+60,179,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+60,209,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+60,239,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+44,125,3, 15),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+44,160,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+44,190,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        //*************************  2nd Line

        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,150,3, 230),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,229,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,259,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,289,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,319,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        //{"",                   D_DEFAULT_FONT,      QRect(pos1+70,349,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+70,379,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+68,393,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+68,393,1, 19),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+68,411,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+103,393,1, 19),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+94,295,2, 15),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+94,330,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


        {"IDU",               D_FONT(5),      QRect(pos1+80,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_IDU_6       },
        {"ERM",               D_FONT(5),      QRect(pos1+80,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ERM_6       },
        {"PIDS",               D_FONT(5),     QRect(pos1+80,220, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PIDS_6       },
        {"PA",                 D_FONT(5),     QRect(pos1+80,250, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PA_6       },
        {"TCU1",                D_FONT(5),     QRect(pos1+80,280, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_6       },
        {"TCU2",                D_FONT(5),     QRect(pos1+80,310, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_7       },
        {"ACU",                D_FONT(5),     QRect(pos1+80,340, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ACU_6       },
        {"DCU",               D_FONT(5),      QRect(pos1+80,370, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_6       },

        {"1",                   D_DEFAULT_FONT,      QRect(pos1+70,395, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_6       },
        {"2",                   D_DEFAULT_FONT,      QRect(pos1+87,395, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_6       },

        //*************************  3rd Line
        {"",                   D_DEFAULT_FONT,      QRect(pos1+120,150,3, 110),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+120,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+120,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        //{"",                   D_DEFAULT_FONT,      QRect(pos1+120,229,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+120,259,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+118,273,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+118,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+118,307,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+152,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+144,210,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


        {"HVAC",              D_FONT(5),      QRect(pos1+130,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_HVAC_7       },
        {"LCU",               D_FONT(5),      QRect(pos1+130,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_7       },
        {"SCU",               D_FONT(5),      QRect(pos1+130,220, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_SCU_7       },
        {"DCU",               D_FONT(5),      QRect(pos1+130,250, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_7       },

        {"1",                   D_DEFAULT_FONT,      QRect(pos1+120,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_7       },
        {"2",                   D_DEFAULT_FONT,      QRect(pos1+120,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_7       },
        {"3",                   D_DEFAULT_FONT,      QRect(pos1+136,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR3_7       },
        {"4",                   D_DEFAULT_FONT,      QRect(pos1+136,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR4_7       },

        //*************************  4th Line
        {"",                   D_DEFAULT_FONT,      QRect(pos1+170,150,3, 50),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+170,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+170,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


        {"LCU",               D_FONT(5),      QRect(pos1+180,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_8       },
        {"BCU",               D_FONT(5),      QRect(pos1+180,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_BCU_8       },

        //*************************  5th Line

        {"",                   D_DEFAULT_FONT,      QRect(pos1+220,150,3, 110),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+220,169,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+220,199,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    //  {"",                   D_DEFAULT_FONT,      QRect(pos1+220,229,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+220,259,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+218,273,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+218,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+218,307,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+252,273,1, 35),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

        {"",                   D_DEFAULT_FONT,      QRect(pos1+247,210,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


        {"HVAC",              D_FONT(5),      QRect(pos1+230,160, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_HVAC_9       },
        {"LCU",               D_FONT(5),      QRect(pos1+230,190, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU_9       },
        {"SCU",               D_FONT(5),      QRect(pos1+230,220, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_SCU_9       },
        {"DCU",               D_FONT(5),      QRect(pos1+230,250, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_9       },

        {"1",                   D_DEFAULT_FONT,      QRect(pos1+220,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_9       },
        {"2",                   D_DEFAULT_FONT,      QRect(pos1+220,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_9       },
        {"3",                   D_DEFAULT_FONT,      QRect(pos1+236,275, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR3_9       },
        {"4",                   D_DEFAULT_FONT,      QRect(pos1+236,291, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR4_9       },

        //*************************  6th Line


         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,150,3, 241),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,179,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,209,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,239,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,269,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,299,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,329,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+270,359,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+260,359,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
        {"",                   D_DEFAULT_FONT,      QRect(pos1+260,389,10, 2),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

         {"",                   D_DEFAULT_FONT,      QRect(pos1+278,373,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+278,373,1, 18),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+278,391,35, 1),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+312,373,1, 18),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

         {"",                   D_DEFAULT_FONT,      QRect(pos1+294,125,3, 15),           Qt::white,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

         {"",                   D_DEFAULT_FONT,      QRect(pos1+294,160,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+294,190,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+244,340,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
         {"",                   D_DEFAULT_FONT,      QRect(pos1+244,370,2, 10),           Qt::cyan,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


        {"GTW",               D_FONT(5),     QRect(pos1+280,105, 30, 20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_GWTB       },

        {"CCU",               D_FONT(5),      QRect(pos1+280,140, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_CCU_10      },
        {"LCU1",               D_FONT(5),     QRect(pos1+280,170, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_LCU1_10       },
        {"LCU2",               D_FONT(5),     QRect(pos1+280,200, 30,  20),           Qt::black,                    Qt::yellow,                   CONTROL_LABEL,        ID_NETSTATE_LCU2_10       },
        {"IDU",               D_FONT(5),      QRect(pos1+280,230, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_IDU_10       },
        {"PIDS",               D_FONT(5),     QRect(pos1+280,260, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PIDS_10       },
        {"PA",                 D_FONT(5),     QRect(pos1+280,290, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_PA_10      },
        {"BCU",                D_FONT(5),     QRect(pos1+280,320, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_BCU_10       },
        {"DCU",               D_FONT(5),      QRect(pos1+280,350, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DCU_10       },

        {"1",                   D_DEFAULT_FONT,      QRect(pos1+280,375, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR1_10       },
        {"2",                   D_DEFAULT_FONT,      QRect(pos1+296,375, 15, 15),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_DOOR2_10       },

        {"TCU3",                D_FONT(5),     QRect(pos1+230,350, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_9       },
        {"ACU",                D_FONT(5),     QRect(pos1+230,320, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_ACU_10       },
        {"TCU4",                D_FONT(5),     QRect(pos1+230,380, 30,  20),           Qt::black,                    Qt::green,                   CONTROL_LABEL,        ID_NETSTATE_TCU_10       },



        D_LAYER1_NAVIGATION_BAR
};
int g_NetStateCoupledRomLen = sizeof(g_PicRom_NetStateCoupled)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(cnetstatepagecoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        END_MESSAGE_MAP()

cnetstatepagecoupled::cnetstatepagecoupled()
{
}

void cnetstatepagecoupled::OnUpdatePage()
{
     if( m_TrainCoupleActive  == 1)
    {
    ChangePage(PAGE_ROM_INDEX_NETSTATE);
    return;
    }
    int tmp_state = 0;
    //************************Master Vehicle***************
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
     //OnUpdateNetStatus3( ID_NETSTATE_LCU2_1, R2_MVB_3_LcuMaStandbySt_B1_Master,R2_MVB_3_LcuMaSt_A2_Master );//LCU2_1
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
     OnUpdateNetStatus( ID_NETSTATE_TCU_4,R2_MVB_3_Tcu3Status_A2_Master );
     OnUpdateNetStatus( ID_NETSTATE_TCU_5,R2_MVB_3_Tcu4Status_A2_Master );
     OnUpdateNetStatus( ID_NETSTATE_CCU_5, R2_MVB_3_CcuMbSt_A2_Master );
     OnUpdateNetStatus( ID_NETSTATE_LCU1_5, R2_MVB_3_LcuMbSt_A2_Master );
     //OnUpdateNetStatus3( ID_NETSTATE_LCU2_5, R2_MVB_3_LcuMbStandbySt_B1_Master,R2_MVB_3_LcuMbSt_A2_Master );
     //LCU2_1
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
     //OnUpdateNetStatus( ID_NETSTATE_GTWB, R2_MVB_3_GtwSt_A2_Master);
     if(R2_MVB_3_GtwStandbySt_B1_Master)
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_GTWB))->SetCtrlBKColor(Qt::red); //fault
     }else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_GTWB))->SetCtrlBKColor(Qt::green); //OK
     }

//************************Slave Vehicle***************


     //*******           MA
     OnUpdateNetStatus( ID_NETSTATE_PIDS_6, R2_MVB_3_PidsMaSt_A2_Slave );//0=bypass
     OnUpdateNetStatus( ID_NETSTATE_PA_6, R2_MVB_3_PaMaSt_A2_Slave);//0=bypass
     //OnUpdateNetStatus( ID_NETSTATE_BCU_6, R2_MVB_3_BcuMaSt_A2_Slave);//0=minorfault
     if((int)R2_MVB_3_BcuMaSt_A2_Slave == 3 )
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_6))->SetCtrlBKColor(Qt::gray); //ok
     }else if((int)R2_MVB_3_BcuMaSt_A2_Slave == 2 )
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_6))->SetCtrlBKColor(Qt::red); //fault
     }else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_6))->SetCtrlBKColor(Qt::green); //gray
     }

     tmp_state = OnUpdateNetTCUStatus(ID_NETSTATE_TCU_6,R2_MVB_3_Tcu1Status_A2_Slave,R2_MVB_3_Tcu2Status_A2_Slave);
     OnUpdateNetStatus3( ID_NETSTATE_ACU_6,R2_MVB_3_Aux1Status_A2_Slave,tmp_state);///TCU COMM FAULTS
     OnUpdateNetStatus( ID_NETSTATE_IDU_6, R2_MVB_3_IduMaSt_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_TCU_6, R2_MVB_3_Tcu1Status_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_TCU_7, R2_MVB_3_Tcu2Status_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_ERM_6, R2_MVB_3_RdeSt_A2_Slave);
     OnUpdateNetStatus( ID_NETSTATE_CCU_6, R2_MVB_3_CcuMaSt_A2_Slave  );
     OnUpdateNetStatus( ID_NETSTATE_LCU1_6,R2_MVB_3_LcuMaSt_A2_Slave  );//LCU1_1
     //OnUpdateNetStatus3( ID_NETSTATE_LCU2_6, R2_MVB_3_LcuMaStandbySt_B1_Slave,R2_MVB_3_LcuMaSt_A2_Slave );//LCU2_1
     if(R2_MVB_3_LcuMaStandbySt_B1_Slave)
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_6))->SetCtrlBKColor(Qt::red); //fault
     }else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_6))->SetCtrlBKColor(Qt::green); //OK
     }
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_6, R2_MVB_4_Door1MaSt_A2_Slave );///DCU
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_6, R2_MVB_4_Door2MaSt_A2_Slave );
     if((R2_MVB_4_Door1MaSt_A2_Slave==3)&&(R2_MVB_4_Door2MaSt_A2_Slave==3) )//both 3  commi fault
     {
          ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_6))->SetCtrlBKColor(Qt::white);
     }
     else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_6))->SetCtrlBKColor(Qt::green);
     }


     //*******           RA
     OnUpdateNetStatus( ID_NETSTATE_LCU_7,R2_MVB_3_LcuRaSt_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_HVAC_7, R2_MVB_3_HvacRaSt_A2_Slave );
     if(bool(R2_MVB_4_ScuRaCommFlt_B1_Slave))//SCU logic
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_7))->SetCtrlBKColor(Qt::gray);//Communicate fault
     }
     else
     {
             if(R2_MVB_3_ScMaMajor_B1_Slave)
             {
                ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_7))->SetCtrlBKColor(Qt::red);
             }else
             {
                 ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_7))->SetCtrlBKColor(Qt::green);//ok
             }
     }
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_7, R2_MVB_4_Door1RaSt_A2_Slave );
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_7, R2_MVB_4_Door2RaSt_A2_Slave );
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR3_7, R2_MVB_4_Door3RaSt_A2_Slave );
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR4_7, R2_MVB_4_Door4RaSt_A2_Slave );


     if((R2_MVB_4_Door1RaSt_A2_Slave==3)
      &&(R2_MVB_4_Door2RaSt_A2_Slave==3)
      &&(R2_MVB_4_Door3RaSt_A2_Slave==3)
      &&(R2_MVB_4_Door4RaSt_A2_Slave==3))
     {
          ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_7))->SetCtrlBKColor(Qt::white);
     }
     else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_7))->SetCtrlBKColor(Qt::green);
     }

     //********************          P
     OnUpdateNetStatus( ID_NETSTATE_LCU_8, R2_MVB_3_LcuPSt_A2_Slave );
     //OnUpdateNetStatus( ID_NETSTATE_BCU_8, R2_MVB_3_BcuPSt_A2_Slave );
     if((int)R2_MVB_3_BcuPSt_A2_Slave == 3 )
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_8))->SetCtrlBKColor(Qt::gray); //ok
     }else if((int)R2_MVB_3_BcuPSt_A2_Slave == 2 )
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_8))->SetCtrlBKColor(Qt::red); //fault
     }else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_8))->SetCtrlBKColor(Qt::green); //gray
     }
     //*********************         RB
     OnUpdateNetStatus( ID_NETSTATE_LCU_9, R2_MVB_3_LcuRbSt_A2_Slave  );
     OnUpdateNetStatus( ID_NETSTATE_HVAC_9, R2_MVB_3_HvacRbSt_A2_Slave);
     if(bool(R2_MVB_4_ScuRbCommFlt_B1_Slave))//SCU logic
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_9))->SetCtrlBKColor(Qt::gray);//Communicate fault
     }
     else
     {
         if(R2_MVB_3_ScMbMajor_B1_Slave)
         {
            ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_9))->SetCtrlBKColor(Qt::red);
         }else
         {
             ((CLabel*)GetDlgItem(ID_NETSTATE_SCU_9))->SetCtrlBKColor(Qt::green);//ok
         }
     }
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_9, R2_MVB_4_Door1RbSt_A2_Slave );
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_9, R2_MVB_4_Door2RbSt_A2_Slave );
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR3_9, R2_MVB_4_Door3RbSt_A2_Slave );
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR4_9, R2_MVB_4_Door4RbSt_A2_Slave );
     if((R2_MVB_4_Door1RbSt_A2_Slave==3)
      &&(R2_MVB_4_Door2RbSt_A2_Slave==3)
      &&(R2_MVB_4_Door3RbSt_A2_Slave==3)
      &&(R2_MVB_4_Door4RbSt_A2_Slave==3))
     {
          ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_9))->SetCtrlBKColor(Qt::white);
     }
     else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_9))->SetCtrlBKColor(Qt::green);
     }

     //********          MB
     OnUpdateNetStatus( ID_NETSTATE_PIDS_10,  R2_MVB_3_PidsMbSt_A2_Slave);
     OnUpdateNetStatus( ID_NETSTATE_PA_10, R2_MVB_3_PaMbSt_A2_Slave  );
     //OnUpdateNetStatus( ID_NETSTATE_BCU_10, R2_MVB_3_BcuMbSt_A2_Slave);
     if((int)R2_MVB_3_BcuMbSt_A2_Slave == 3 )
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_10))->SetCtrlBKColor(Qt::gray); //ok
     }else if((int)R2_MVB_3_BcuMbSt_A2_Slave == 2 )
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_10))->SetCtrlBKColor(Qt::red); //fault
     }else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_10))->SetCtrlBKColor(Qt::green); //gray
     }
     tmp_state = OnUpdateNetTCUStatus(ID_NETSTATE_TCU_10,R2_MVB_3_Tcu3Status_A2_Slave,R2_MVB_3_Tcu4Status_A2_Slave);
     OnUpdateNetStatus3( ID_NETSTATE_ACU_10,R2_MVB_3_Aux2Status_A2_Slave,tmp_state);
     OnUpdateNetStatus( ID_NETSTATE_IDU_10,R2_MVB_3_IduMbSt_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_TCU_9,R2_MVB_3_Tcu3Status_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_TCU_10,R2_MVB_3_Tcu4Status_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_CCU_10, R2_MVB_3_CcuMbSt_A2_Slave );
     OnUpdateNetStatus( ID_NETSTATE_LCU1_10, R2_MVB_3_LcuMbSt_A2_Slave );
     //OnUpdateNetStatus3( ID_NETSTATE_LCU2_10, R2_MVB_3_LcuMbStandbySt_B1_Slave,R2_MVB_3_LcuMbSt_A2_Slave );
     if(R2_MVB_3_LcuMbStandbySt_B1_Slave)
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_10))->SetCtrlBKColor(Qt::red); //fault
     }else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_LCU2_10))->SetCtrlBKColor(Qt::green); //OK
     }
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR1_10, R2_MVB_4_Door1MbSt_A2_Slave );
     OnUpdateNetDoorStatus( ID_NETSTATE_DOOR2_10, R2_MVB_4_Door2MbSt_A2_Slave );

     if((R2_MVB_4_Door1MbSt_A2_Slave==3)&&(R2_MVB_4_Door2MbSt_A2_Slave==3) )
     {
          ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_10))->SetCtrlBKColor(Qt::white);
     }
     else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_DCU_10))->SetCtrlBKColor(Qt::green);
     }
     //************

     OnUpdateNetStatus( ID_NETSTATE_GWTA, R2_MVB_3_GtwSt_A2_Slave);
     //OnUpdateNetStatus( ID_NETSTATE_GWTB, R2_MVB_3_GtwSt_A2_Slave);
     if(R2_MVB_3_GtwStandbySt_B1_Slave)
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_GWTB))->SetCtrlBKColor(Qt::red); //fault
     }else
     {
         ((CLabel*)GetDlgItem(ID_NETSTATE_GWTB))->SetCtrlBKColor(Qt::green); //OK
     }

}



int cnetstatepagecoupled::OnUpdateNetTCUStatus( int ID,int s1,int s2)
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

void cnetstatepagecoupled::OnUpdateNetStatus( int ID,int connectStatus)
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
void cnetstatepagecoupled::OnUpdateNetStatus2( int ID,int connectStatus)
{
    if (connectStatus==1)//Ok
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::gray);//Communicate Fault
    }
    else
    {
         ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::yellow);//Bypass
    }
}


void cnetstatepagecoupled::OnUpdateNetStatus3( int ID,int netStatus,int connectStatus)
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
            else if(netStatus ==3)
            {
               ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);
            }else
            {
                ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::green);//

            }
      }

}

void cnetstatepagecoupled::OnUpdateNetDoorStatus( int ID,int connectStatus)
{
    if (connectStatus  ==1)
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
    }
    else if (connectStatus==0)
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::white);//minor fault
    }else
    {
        ((CLabel*)GetDlgItem(ID))->SetCtrlBKColor(Qt::black);//minor fault

    }
}
void cnetstatepagecoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
