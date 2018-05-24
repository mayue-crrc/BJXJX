#include "cacustatepagecoupled.h"


ROMDATA g_PicRom_AcuStatePageCoupled[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
//    {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEDOWN},
//    {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEUP},
//    {"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60,  19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_TRAINNUM },
    {"bjcar.png",   D_DEFAULT_FONT,      QRect(130, 90,240,  35),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"bjcar.png",   D_DEFAULT_FONT,      QRect(370, 90,240,  35),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    //{"",              D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            ID_LABEL_ACUSTATEPAGE   },

    //H line
    {"",                   D_DEFAULT_FONT,      QRect(25,125,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,147,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,169,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,191,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,213,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,235,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,257,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,279,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,301,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,323,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,345,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(25,367,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect(25,389,585,  1),                  Qt::yellow,                  Qt::yellow,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect(25,411,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

    //V line
    {"",                   D_DEFAULT_FONT,      QRect(25,125,  1,240),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(150,125,  1,240),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(265,125,  1,240),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(380,125,  1,240),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(495,125,  1,240),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(610,125,  1,240),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },


    //label
    {QSTR("显示项目"),               D_FONT(5),      QRect( 30,126,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {QSTR(""),            D_FONT(5),      QRect( 30,148,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_2_1    },
    {QSTR(""),            D_FONT(5),      QRect( 30,170,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_3_1     },
    {QSTR(""),       D_FONT(5),      QRect( 30,192,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_4_1     },
    {QSTR(""),          D_FONT(5),      QRect( 30,214,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_5_1     },
    //{QSTR(""),          D_FONT(5),      QRect( 30,236,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_1     },
    {QSTR(""),          D_FONT(5),      QRect( 30,258,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_1     },
    {QSTR(""),             D_FONT(5),      QRect( 30,280,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_1     },
    {QSTR(""),         D_FONT(5),      QRect( 30,302,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_9_1     },
    {QSTR(""),         D_FONT(5),      QRect( 30,324,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_10_1   },
    {QSTR(""),         D_FONT(5),      QRect( 30,346,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_11_1    },
    {QSTR(""),         D_FONT(5),      QRect( 30,236,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_12_1    },
    //{QSTR(""),          D_FONT(5),      QRect( 30,236,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_13_1    },
    //{QSTR(""),          D_FONT(5),      QRect( 30,412,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_14_1    },

    //label
    {"MA",          D_FONT(7),      QRect(165,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",             D_FONT(7),      QRect(175,149,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_2    },
    {"",             D_FONT(7),      QRect(175,171,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_2    },
    {"",             D_FONT(7),      QRect(175,193,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_2    },
    {"",             D_FONT(7),      QRect(175,215,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_2    },
//    {"",             D_FONT(7),      QRect(175,237,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_2    },
    {"",             D_FONT(7),      QRect(175,259,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_2    },
    {"",             D_FONT(7),      QRect(175,281,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_2    },
    {"",             D_FONT(7),      QRect(175,303,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_2    },
    {"",             D_FONT(7),      QRect(175,325,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_2   },
    {"",             D_FONT(7),      QRect(175,347,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_2   },
    {"",             D_FONT(7),      QRect(175,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_2   },
    //{"",             D_FONT(7),      QRect(175,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_2   },
    //{"",             D_FONT(7),      QRect(385,413, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

    {"MB",          D_FONT(7),      QRect(280,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",             D_FONT(7),      QRect(290,149,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_3    },
    {"",             D_FONT(7),      QRect(290,171,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_3    },
    {"",             D_FONT(7),      QRect(290,193,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_3    },
    {"",             D_FONT(7),      QRect(290,215,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_3    },
//    {"",             D_FONT(7),      QRect(290,237,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_3    },
    {"",             D_FONT(7),      QRect(290,259,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_3    },
    {"",             D_FONT(7),      QRect(290,281,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_3    },
    {"",             D_FONT(7),      QRect(290,303,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_3    },
    {"",             D_FONT(7),      QRect(290,325,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_3   },
    {"",             D_FONT(7),      QRect(290,347,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_3   },
    {"",             D_FONT(7),      QRect(290,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_3   },
    //{"",             D_FONT(7),      QRect(290,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_3   },
    //{"",             D_FONT(7),      QRect(505,413, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_3   },
{"MA",          D_FONT(7),      QRect(395,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",             D_FONT(7),      QRect(405,149,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_4    },
{"",             D_FONT(7),      QRect(405,171,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_4    },
{"",             D_FONT(7),      QRect(405,193,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_4    },
{"",             D_FONT(7),      QRect(405,215,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_4    },
//{"",             D_FONT(7),      QRect(405,237,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_4    },
{"",             D_FONT(7),      QRect(405,259,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_4    },
{"",             D_FONT(7),      QRect(405,281,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_4    },
{"",             D_FONT(7),      QRect(405,303,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_4    },
{"",             D_FONT(7),      QRect(405,325,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_4   },
{"",             D_FONT(7),      QRect(405,347,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_4   },
{"",             D_FONT(7),      QRect(405,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_4   },
//{"",             D_FONT(7),      QRect(405,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_4   },
//{"",             D_FONT(7),      QRect(385,413, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

{"MB",          D_FONT(7),      QRect(510,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",             D_FONT(7),      QRect(520,149,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_5    },
{"",             D_FONT(7),      QRect(520,171,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_5    },
{"",             D_FONT(7),      QRect(520,193,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_5    },
{"",             D_FONT(7),      QRect(520,215,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_5    },
//{"",             D_FONT(7),      QRect(520,237,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_5    },
{"",             D_FONT(7),      QRect(520,259,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_5    },
{"",             D_FONT(7),      QRect(520,281,65, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_5    },
{"",             D_FONT(7),      QRect(520,303,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_5    },
{"",             D_FONT(7),      QRect(520,325,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_5   },
{"",             D_FONT(7),      QRect(520,347,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_5   },
{"",             D_FONT(7),      QRect(520,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_5   },
//{"",             D_FONT(7),      QRect(520,237,65, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_5   },

//{"",             D_FONT(7),      QRect(505,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_3   },

    D_LAYER1_NAVIGATION_BAR
};
int g_AcuStatePageCoupledRomLen = sizeof(g_PicRom_AcuStatePageCoupled)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CAcuStatePageCoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        //ON_LBUTTONDOWN(ID_ACUSTATE_PAGEDOWN, OnDownButtonDown)
        //ON_LBUTTONUP(ID_ACUSTATE_PAGEDOWN, OnDownButtonUp)
        //ON_LBUTTONDOWN(ID_ACUSTATE_PAGEUP, OnUpButtonDown)
        //ON_LBUTTONUP(ID_ACUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()


CAcuStatePageCoupled::CAcuStatePageCoupled()
{
    pageNo =ACU_MIN_PAGE;
    formerPageNo = 0;
}

void CAcuStatePageCoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

/*
bool parameter state:
    yellow border color
    0: green background color, black text
    3: gray background color, black text
380V output voltage:
    -2000~2000,**.*
battery temperature:
    received value - 50,**.*
*/
void CAcuStatePageCoupled::OnUpdatePage()
{
    if ( m_TrainCoupleActive == 1)
    //if(0)
    {
        ChangePage(PAGE_ROM_INDEX_ACUSTATE);
        return;
    }
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_1))->SetCtrlText(QSTR("蓄电池充电器滤波电压"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_1))->SetCtrlText(QSTR("蓄电池充电器线电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_1))->SetCtrlText(QSTR("蓄电池充电电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_1))->SetCtrlText(QSTR("蓄电池输出电流"));
    //((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_1))->SetCtrlText(QSTR("蓄电池充电状态"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_1))->SetCtrlText(QSTR("蓄电池温度"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_1))->SetCtrlText(QSTR("逆变器滤波电压"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_1))->SetCtrlText(QSTR("逆变器线电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_1))->SetCtrlText(QSTR("逆变器输出有效电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetCtrlText(QSTR("输出电压频率"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_1))->SetCtrlText(QSTR("逆变器输出有效电压"));
   // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_1))->SetCtrlText(QSTR(""));

    switch(m_TestNum)
    {
    case 3://重联，本车为主
        //Car_Enabled
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiBat_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiCar_U16*0.1,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBBattChargSt_U16,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlText(QString::number((float)TCU1CCU_4_tBatt_S16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IViLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVi2uRMS_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVfout_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVv2uRMS_U16*0.1,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlText(QString::number(,1,0));


        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiBat_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiCar_U16*0.1,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBBattChargSt_U16,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlText(QString::number((float)TCU3CCU_4_tBatt_S16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IViLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVi2uRMS_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVfout_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVv2uRMS_U16*0.1,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlText(QString::number(,1,0));

        //Car_Not_Enabled
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlText(QString::number((float)R2_MVB_2_BcFVoltMa_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlText(QString::number((float)R2_MVB_2_BCLinCurMa_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_4))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattChCurrMa_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_4))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattSuppCurrMa_U8_Slave2*1000/255,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_4))->SetCtrlText("--");
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_4))->SetCtrlText(QString::number(R2_MVB_2_BattTempMa_U8_Slave2-40,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_4))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIFVolMa_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_4))->SetCtrlText(QString::number((float)R2_MVB_2_AcuILCurMa_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_4))->SetCtrlText(QString::number((float)R2_MVB_2_AcuLCurrMa_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_4))->SetCtrlText(QString::number((float)R2_MVB_2_AcuFreqMa_U8_Slave2,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_4))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIRmsVolMa_U8_Slave2*1000/255,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_4))->SetCtrlText(QString::number(,1,0));


        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlText(QString::number((float)R2_MVB_2_BcFVoltMb_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlText(QString::number((float)R2_MVB_2_BCLinCurMb_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_5))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattChCurrMb_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_5))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattSuppCurrMb_U8_Slave2*1000/255,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_5))->SetCtrlText("--");
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_5))->SetCtrlText(QString::number(R2_MVB_2_BattTempMb_U8_Slave2-40,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_5))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIFVolMb_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_5))->SetCtrlText(QString::number((float)R2_MVB_2_AcuILCurMb_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_5))->SetCtrlText(QString::number((float)R2_MVB_2_AcuLCurrMb_U8_Slave2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_5))->SetCtrlText(QString::number((float)R2_MVB_2_AcuFreqMb_U8_Slave2,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_5))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIRmsVolMb_U8_Slave2*1000/255,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_5))->SetCtrlText(QString::number(),1,0));


        break;
    case 4://重联，本车为从
        //Car_Enabled
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlText(QString::number((float)R2_MVB_2_BcFVoltMa_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlText(QString::number((float)R2_MVB_2_BCLinCurMa_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattChCurrMa_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattSuppCurrMa_U8_Master2*1000/255,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlText("--");
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlText(QString::number(R2_MVB_2_BattTempMa_U8_Master2-40,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIFVolMa_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlText(QString::number((float)R2_MVB_2_AcuILCurMa_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlText(QString::number((float)R2_MVB_2_AcuLCurrMa_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlText(QString::number((float)R2_MVB_2_AcuFreqMa_U8_Master2,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIRmsVolMa_U8_Master2*1000/255,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlText(QString::number(,1,0));


        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlText(QString::number((float)R2_MVB_2_BcFVoltMb_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlText(QString::number((float)R2_MVB_2_BCLinCurMb_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattChCurrMb_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlText(QString::number((float)R2_MVB_2_BcBattSuppCurrMb_U8_Master2*1000/255,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlText("--");
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlText(QString::number(R2_MVB_2_BattTempMb_U8_Master2-40,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIFVolMb_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlText(QString::number((float)R2_MVB_2_AcuILCurMb_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlText(QString::number((float)R2_MVB_2_AcuLCurrMb_U8_Master2*1000/255,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlText(QString::number((float)R2_MVB_2_AcuFreqMb_U8_Master2,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlText(QString::number((float)R2_MVB_2_AcuIRmsVolMb_U8_Master2*1000/255,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlText(QString::number(,1,0));

        //Car_Not_Enabled
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlText(QString::number((float)TCU1CCU_4_CBvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_4))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiBat_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_4))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiCar_U16*0.1,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_4))->SetCtrlText(QString::number((float)TCU1CCU_4_CBBattChargSt_U16,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_4))->SetCtrlText(QString::number((float)TCU1CCU_4_tBatt_S16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_4))->SetCtrlText(QString::number((float)TCU1CCU_5_IVvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_4))->SetCtrlText(QString::number((float)TCU1CCU_5_IViLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_4))->SetCtrlText(QString::number((float)TCU1CCU_5_IVi2uRMS_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_4))->SetCtrlText(QString::number((float)TCU1CCU_5_IVfout_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_4))->SetCtrlText(QString::number((float)TCU1CCU_5_IVv2uRMS_U16*0.1,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_4))->SetCtrlText(QString::number(,1,0));


        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlText(QString::number((float)TCU3CCU_4_CBvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_5))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiBat_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_5))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiCar_U16*0.1,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_5))->SetCtrlText(QString::number((float)TCU3CCU_4_CBBattChargSt_U16,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_5))->SetCtrlText(QString::number((float)TCU3CCU_4_tBatt_S16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_5))->SetCtrlText(QString::number((float)TCU3CCU_5_IVvFil_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_5))->SetCtrlText(QString::number((float)TCU3CCU_5_IViLin_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_5))->SetCtrlText(QString::number((float)TCU3CCU_5_IVi2uRMS_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_5))->SetCtrlText(QString::number((float)TCU3CCU_5_IVfout_U16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_5))->SetCtrlText(QString::number((float)TCU3CCU_5_IVv2uRMS_U16*0.1,1,0));
       // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_5))->SetCtrlText(QString::number(,1,0));


              break;
    default:
        break;
    }


}


void CAcuStatePageCoupled::OnDownButtonUp()
{

}
void CAcuStatePageCoupled::OnUpButtonDown()
{

}

void CAcuStatePageCoupled::OnUpButtonUp()
{

}
void CAcuStatePageCoupled::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    //((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_1))->SetAlignment(Qt::AlignLeft);
    //((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_1))->SetAlignment(Qt::AlignLeft);
    //((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
}
