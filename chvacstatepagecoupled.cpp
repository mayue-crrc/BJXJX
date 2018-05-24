#include "chvacstatepagecoupled.h"
ROMDATA g_PicRom_HvacStatePageCoupled[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
//    {"down.png",           D_DEFAULT_FONT,      QRect( 30, 65, 30, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_HVACSTATE_PAGEDOWN},
//    {"upgray.png",         D_DEFAULT_FONT,      QRect(65, 65, 30, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_HVACSTATE_PAGEUP},
    {"bjcar.png",   D_DEFAULT_FONT,      QRect(130, 65,240,  55),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"bjcar.png",   D_DEFAULT_FONT,      QRect(370, 65,240,  55),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },

    //  {"",                     D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATEPAGE   },

    //H line



    {"",                   D_DEFAULT_FONT,      QRect( 30,125,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 30,147,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 30,169,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 30,191,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 30,213,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,235,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,257,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,279,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,301,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,323,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,345,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,367,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,389,580,  1),                  Qt::yellow,                  Qt::yellow,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect( 30,411,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

    //V line
    {"",                   D_DEFAULT_FONT,      QRect( 30,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(130,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(250,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(370,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(490,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(610,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },



    //label
    {QSTR("显示项目"),                D_FONT(10),      QRect(35,126,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {QSTR(""),             D_DEFAULT_FONT,      QRect(35,148,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_2_1    },
    {QSTR(""),             D_DEFAULT_FONT,      QRect(35,170,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_3_1     },
    {QSTR("123"),                D_DEFAULT_FONT,    QRect(35,250,400, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_HVACSET_LABLE_COUPLESET    },
//    {QSTR(""),           D_DEFAULT_FONT,      QRect(35,214,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_5_1     },
//    {QSTR(""),           D_DEFAULT_FONT,      QRect(35,236,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_1     },
//    {QSTR(""),           D_DEFAULT_FONT,      QRect(35,258,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_1     },
//    {QSTR(""),              D_DEFAULT_FONT,      QRect(35,280,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect(35,192,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_9_1     },
//    {QSTR(""),          D_DEFAULT_FONT,      QRect(35,324,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_10_1   },
//    {QSTR(""),          D_DEFAULT_FONT,      QRect(35,346,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_11_1    },
//    {QSTR(""),          D_DEFAULT_FONT,      QRect(35,368,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_12_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect(35,390,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_13_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect(35,412,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_14_1    },

    //label
    {"RA",           D_DEFAULT_FONT,      QRect(135,126,110, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(150,149, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(150,171, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_2    },
//    {"",              D_DEFAULT_FONT,      QRect(150,193, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_2    },
//    {"",              D_DEFAULT_FONT,      QRect(150,215, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_2    },
//    {"",              D_DEFAULT_FONT,      QRect(150,237, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_2_1    },
//    {"",              D_DEFAULT_FONT,      QRect(150,259, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_2_1    },
//    {"",              D_DEFAULT_FONT,      QRect(150,281, 80, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_2    },
    {"",              D_DEFAULT_FONT,      QRect(150,193, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_2    },
//    {"",              D_DEFAULT_FONT,      QRect(200,237, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_2_2    },
//    {"",              D_DEFAULT_FONT,      QRect(200,259, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_2_2    },
//    {"",              D_DEFAULT_FONT,      QRect(150,325, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_2   },
//    {"",              D_DEFAULT_FONT,      QRect(150,347, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_2   },
//    {"",              D_DEFAULT_FONT,      QRect(150,369, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_2   },
    //{"",              D_DEFAULT_FONT,      QRect(150,391, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_13_2   },
    //{"",              D_DEFAULT_FONT,      QRect(150,413, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

    {"RB",           D_DEFAULT_FONT,      QRect(255,126,110, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(270,149, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_3    },
    {"",              D_DEFAULT_FONT,      QRect(270,171, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_3    },
//    {"",              D_DEFAULT_FONT,      QRect(270,193, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_3    },
//    {"",              D_DEFAULT_FONT,      QRect(270,215, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_3    },
//    {"",              D_DEFAULT_FONT,      QRect(270,237, 30, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_3_1    },
//    {"",              D_DEFAULT_FONT,      QRect(270,259, 30, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_3_1    },
//    {"",              D_DEFAULT_FONT,      QRect(270,281, 80, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_3    },
    {"",              D_DEFAULT_FONT,      QRect(270,193, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_3    },
//{"",              D_DEFAULT_FONT,      QRect(320,237, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_3_2    },
//{"",              D_DEFAULT_FONT,      QRect(320,259, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_3_2    },
//    {"",              D_DEFAULT_FONT,      QRect(270,325, 80, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_3   },
//    {"",              D_DEFAULT_FONT,      QRect(270,347, 80, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_3   },
//    {"",              D_DEFAULT_FONT,      QRect(270,369, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_3   },


{"RA",           D_DEFAULT_FONT,      QRect(375,126,110, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(390,149, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_4    },
{"",              D_DEFAULT_FONT,      QRect(390,171, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_4    },
//{"",              D_DEFAULT_FONT,      QRect(390,193, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_4    },
//{"",              D_DEFAULT_FONT,      QRect(390,215, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_4    },
//{"",              D_DEFAULT_FONT,      QRect(390,237, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_4_1    },
//{"",              D_DEFAULT_FONT,      QRect(390,259, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_4_1    },
//{"",              D_DEFAULT_FONT,      QRect(390,281, 80, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_4    },
{"",              D_DEFAULT_FONT,      QRect(390,193, 80, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_4    },
//{"",              D_DEFAULT_FONT,      QRect(440,237, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_4_2    },
//{"",              D_DEFAULT_FONT,      QRect(440,259, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_4_2    },
//    {"",              D_DEFAULT_FONT,      QRect(390,325, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_4   },
//    {"",              D_DEFAULT_FONT,      QRect(390,347, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_4   },
//    {"",              D_DEFAULT_FONT,      QRect(390,369, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_4   },
//{"",              D_DEFAULT_FONT,      QRect(390,391, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_13_4   },
//{"",              D_DEFAULT_FONT,      QRect(390,413, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_4   },

{"RB",           D_DEFAULT_FONT,      QRect(495,126,110, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(510,149, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_5    },
{"",              D_DEFAULT_FONT,      QRect(510,171, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_5    },
//{"",              D_DEFAULT_FONT,      QRect(510,193, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_5    },
//{"",              D_DEFAULT_FONT,      QRect(510,215, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_5    },
//{"",              D_DEFAULT_FONT,      QRect(510,237, 30, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_5_1    },
//{"",              D_DEFAULT_FONT,      QRect(510,259, 30, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_5_1    },
//{"",              D_DEFAULT_FONT,      QRect(510,281, 80, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_5    },
{"",              D_DEFAULT_FONT,      QRect(510,193, 80, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_5    },
//{"",              D_DEFAULT_FONT,      QRect(560,237, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_5_2    },
//{"",              D_DEFAULT_FONT,      QRect(560,259, 30, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_5_2    },

//    {"",              D_DEFAULT_FONT,      QRect(510,325, 80, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_5   },
//    {"",              D_DEFAULT_FONT,      QRect(510,347, 80, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_5   },
//    {"",              D_DEFAULT_FONT,      QRect(510,369, 80, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_5   },

//{QSTR("司机室电热"),               D_COMMON_TITLE_FONT,      QRect( 235-15,380,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_IGNORE    },
//{QSTR("电热玻璃"),               D_COMMON_TITLE_FONT,      QRect( 320-15,380,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_IGNORE    },
{QSTR("温度设定"),             D_COMMON_TITLE_FONT,      QRect( 390,340, 100, 32),               Qt::yellow,                   Qt::black,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_0          },
{QSTR("23℃"),                 D_COMMON_TITLE_FONT,      QRect( 390,380, 100, 32),                Qt::yellow,                   Qt::black,                 CONTROL_EDIT,          ID_HVACSET_EDIT_2         },
{"+",                     D_COMMON_TITLE_FONT,      QRect(505,341, 30, 30),                Qt::yellow,                   Qt::black,                 CONTROL_BUTTON,       ID_HVACSET_LABLE_3          },
{"-",                   D_COMMON_TITLE_FONT,      QRect( 505,381, 30, 30),                Qt::yellow,                   Qt::black,                 CONTROL_BUTTON,       ID_HVACSET_LABLE_4           },

{QSTR("确\n认"),                   D_COMMON_TITLE_FONT,      QRect( 550,341, 30, 70),                Qt::yellow,                   Qt::black,                 CONTROL_BUTTON,     ID_HVACSET_LABLE_1           },


{QSTR("自动冷"),             D_COMMON_TITLE_FONT,      QRect(  65-15,340,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_5           },
{QSTR("手动冷"),             D_COMMON_TITLE_FONT,      QRect( 150-15,340,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_6  },
{QSTR("通风"),               D_COMMON_TITLE_FONT,      QRect( 235-15,340,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_7     },
{QSTR("紧急通风"),               D_COMMON_TITLE_FONT,      QRect( 320-15,340,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_8     },

{QSTR("自动暖"),             D_COMMON_TITLE_FONT,      QRect(  65-15,380,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_9            },
{QSTR("手动暖"),             D_COMMON_TITLE_FONT,      QRect( 150-15,380,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_10 },
{QSTR("停机"),               D_COMMON_TITLE_FONT,      QRect( 235-15,380,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,             ID_HVACSET_LABLE_11  },
{QSTR("退出预冷暖"),               D_FONT(6),      QRect( 320-15,380,70, 30),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_12    },


       D_LAYER1_NAVIGATION_BAR

};
int g_HvacStatePageCoupledRomLen = sizeof(g_PicRom_HvacStatePageCoupled)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHvacStatePageCoupled,CPage)
ON_UPDATE_PAGE()
ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_1, OnSet1ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_3, OnSet3ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_4, OnSet4ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_5, OnSet5ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_6, OnSet6ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_7, OnSet7ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_8, OnSet8ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_9, OnSet9ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_10, OnSet10ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_11, OnSet11ButtonDOWN)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_12, OnSet12ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_1, OnSet1ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_3, OnSet3ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_4, OnSet4ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_5, OnSet5ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_6, OnSet6ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_7, OnSet7ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_8, OnSet8ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_9, OnSet9ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_10, OnSet10ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_11, OnSet11ButtonUP)
ON_LBUTTONUP(ID_HVACSET_LABLE_12, OnSet12ButtonUP)
END_MESSAGE_MAP()

CHvacStatePageCoupled::CHvacStatePageCoupled()
{
    pageNo = HVAC_MIN_PAGE;
}


void CHvacStatePageCoupled::OnCommonQuitButtonDown()
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
void CHvacStatePageCoupled::OnInit()
{
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText("");

//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_2))->SetCtrlText("");
    //    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlText("");

//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_4))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5_1))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_5))->SetCtrlText("");

//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_5))->SetCtrlBKColor(Qt::black);

}
void CHvacStatePageCoupled::OnUpdatePage()
{


    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetCtrlText(QSTR("控制模式"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetCtrlText(QSTR("运行模式"));
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetCtrlText(QSTR("通风机"));
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetCtrlText(QSTR("冷凝风机"));
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetCtrlText(QSTR("压缩机"));
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetCtrlText(QSTR("电加热"));
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetCtrlText(QSTR("设定温度"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetCtrlText(QSTR("室内(外)温度"));

    if(R2_MVB_1_AirConModeEff_B1_Master)
    {
        ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_COUPLESET))->SetCtrlText(QSTR("收到\"设置空调模式有效\"信号"));
    }else
    {
        ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_COUPLESET))->SetCtrlText(QSTR("未收到\"设置空调模式有效\"信号"));
    }




    if(m_TestNum == 3)//master train
    {

        //LOCAL TRAIN

        {
            if(HVACRAALL_LOCAL_CONTROL_B1)
            {
                if(HVACRAALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("全1"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("本控"));
                }
            }
            else
            {
                if(HVACRAALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("集控"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("全0"));
                }
            }

            if(HVACRAALL_STOP_MODE_B1)
            {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("停机模式"));
            }
            else
            {
                if(HVACRAALL_EMER_VENT_MODE_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("紧急通风"));
                }
                else
                {
                    if(HVACRAALL_PRE_COLD_MODE_B1)
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("预冷模式"));
                    }
                    else if(HVACRAALL_PRE_WARM_MODE_B1 )
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("预暖模式"));
                    }
                    else
                    {
                        if(HVACRAALL_VENTILATION_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("通风模式"));
                        }
                        else if(HVACRAALL_AUTO_COLD_MODE_B1 )
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("自动制冷"));
                        }
                        else if(HVACRAALL_MANU_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("手动制暖"));
                        }
                        else if(HVACRAALL_MANU_COLD_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("手动制冷"));
                        }
                        else if(HVACRAALL_AUTO_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("自动制暖"));
                        }
                        else
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("无"));
                        }

                    }

                }
            }
            // RB
            if(HVACRBALL_LOCAL_CONTROL_B1)
            {
                if(HVACRBALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("全1"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("本控"));
                }
            }
            else
            {
                if(HVACRBALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("集控"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("全0"));
                }
            }

            if(HVACRBALL_STOP_MODE_B1)
            {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("停机模式"));
            }
            else
            {
                if(HVACRBALL_EMER_VENT_MODE_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("紧急通风"));
                }
                else
                {
                    if(HVACRBALL_PRE_COLD_MODE_B1)
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("预冷模式"));
                    }
                    else if(HVACRBALL_PRE_WARM_MODE_B1 )
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("预暖模式"));
                    }
                    else
                    {
                        if(HVACRBALL_VENTILATION_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("通风模式"));
                        }
                        else if(HVACRBALL_AUTO_COLD_MODE_B1 )
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("自动制冷"));
                        }
                        else if(HVACRBALL_MANU_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("手动制暖"));
                        }
                        else if(HVACRBALL_MANU_COLD_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("手动制冷"));
                        }
                        else if(HVACRBALL_AUTO_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("自动制暖"));
                        }
                        else
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("无"));
                        }

                    }

                }
            }

//            if(HVACRAALL_FAN_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::red);
//            }

//            if(HVACRAALL_CONDENCER_FAN_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::red);
//            }

//            if(HVACRAALL_COMPRESS_1_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_1))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_1))->SetCtrlBKColor(Qt::red);
//            }
//            if(HVACRAALL_COMPRESS_2_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_2))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_2))->SetCtrlBKColor(Qt::red);
//            }

//            if(HVACRAALL_ELECTRIC_HEATER_1_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_1))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_1))->SetCtrlBKColor(Qt::red);
//            }
//            if(HVACRAALL_ELECTRIC_HEATER_2_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_2))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_2))->SetCtrlBKColor(Qt::red);
//            }
//            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("C:"+QString::number(HVACRAALL_SET_TEMP_COLD_U8)
//                                                                     +" W:"+QString::number(HVACRAALL_SET_TEMP_WARM_U8));
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText(QString::number(HVACRAALL_INSIDE_TEMP_U8-30)
                                                                      +"("+
                                                                      QString::number(HVACRAALL_OUTDOOR_TEMP_U8-30)
                                                                      +")");


//            if(HVACRBALL_FAN_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::red);
//            }

//            if(HVACRBALL_CONDENCER_FAN_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::red);
//            }

//            if(HVACRBALL_COMPRESS_1_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_1))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_1))->SetCtrlBKColor(Qt::red);
//            }
//            if(HVACRBALL_COMPRESS_2_RUN_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_2))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_2))->SetCtrlBKColor(Qt::red);
//            }

//            if(HVACRBALL_ELECTRIC_HEATER_1_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_1))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_1))->SetCtrlBKColor(Qt::red);
//            }
//            if(HVACRBALL_ELECTRIC_HEATER_2_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_2))->SetCtrlBKColor(Qt::green);
//            }
//            else
//            {
//                 ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_2))->SetCtrlBKColor(Qt::red);
//            }
//            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("C:"+QString::number(HVACRBALL_SET_TEMP_COLD_U8)
//                                                                     +" W:"+QString::number(HVACRBALL_SET_TEMP_WARM_U8));
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText(QString::number(HVACRBALL_INSIDE_TEMP_U8-30)
                                                                      +"("+
                                                                      QString::number(HVACRBALL_OUTDOOR_TEMP_U8-30)
                                                                      +")");


        }
        //OTHER TRAIN
        {
            //*************slave train
            if(R2_MVB_2_LocContrRa_B1_Slave4)
            {
                if(R2_MVB_2_CentrContrRa_B1_Slave4)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("全1"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("本控"));
                }
            }
            else
            {
                if(R2_MVB_2_CentrContrRa_B1_Slave4)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("集控"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("全0"));
                }
            }
            if(R2_MVB_2_LocContrRb_B1_Slave4)
            {
                if(R2_MVB_2_CentrContrRb_B1_Slave4)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("全1"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("本控"));
                }
            }
            else
            {
                if(R2_MVB_2_CentrContrRb_B1_Slave4)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("集控"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("全0"));
                }
            }


            if(R2_MVB_2_StopRa_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("停机模式"));
            }else if(R2_MVB_2_EmeVentRa_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("紧急通风"));
            }else if(R2_MVB_2_PreColdRa_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("预冷模式"));
            }else if(R2_MVB_2_PreWarmRa_B1_Slave4 )
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("预暖模式"));
            }
            else if(R2_MVB_2_VentRa_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("通风模式"));
            }
            else if(R2_MVB_2_AutoColdRa_B1_Slave4 )
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("自动制冷"));
            }
            else if(R2_MVB_2_ManuWarmRa_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("手动制暖"));
            }
            else if(R2_MVB_2_ManuColdRa_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("手动制冷"));
            }
            else if(R2_MVB_2_AutoWarmRa_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("自动制暖"));
            }
            else
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("无"));
            }


            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlText(QString::number(R2_MVB_2_PassTempRa_U8_Slave4-30)
                                                                      +"("+
                                                                      QString::number(R2_MVB_2_OutTempRa_U8_Slave4-30)
                                                                      +")");
            if(R2_MVB_2_StopRb_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("停机模式"));
            }else if(R2_MVB_2_EmeVentRb_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("紧急通风"));
            }else if(R2_MVB_2_PreColdRb_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("预冷模式"));
            }else if(R2_MVB_2_PreWarmRb_B1_Slave4 )
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("预暖模式"));
            }
            else if(R2_MVB_2_VentRb_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("通风模式"));
            }
            else if(R2_MVB_2_AutoColdRb_B1_Slave4 )
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("自动制冷"));
            }
            else if(R2_MVB_2_ManuWarmRb_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("手动制暖"));
            }
            else if(R2_MVB_2_ManuColdRb_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("手动制冷"));
            }
            else if(R2_MVB_2_AutoWarmRb_B1_Slave4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("自动制暖"));
            }
            else
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("无"));
            }


            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlText(QString::number(R2_MVB_2_PassTempRa_U8_Slave4-30)
                                                                      +"("+
                                                                      QString::number(R2_MVB_2_OutTempRa_U8_Slave4-30)
                                                                      +")");

        }


        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_4))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_4))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4_2))->SetCtrlBKColor(Qt::black);

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_5))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_5))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlText("");
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlText("");

    }else if(m_TestNum == 4)
    {
        //LOCAL TRAIN DATA
        {
            if(HVACRAALL_LOCAL_CONTROL_B1)
            {
                if(HVACRAALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("全1"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("本控"));
                }
            }
            else
            {
                if(HVACRAALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("集控"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText(QSTR("全0"));
                }
            }

            if(HVACRAALL_STOP_MODE_B1)
            {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("停机模式"));
            }
            else
            {
                if(HVACRAALL_EMER_VENT_MODE_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("紧急通风"));
                }
                else
                {
                    if(HVACRAALL_PRE_COLD_MODE_B1)
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("预冷模式"));
                    }
                    else if(HVACRAALL_PRE_WARM_MODE_B1 )
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("预暖模式"));
                    }
                    else
                    {
                        if(HVACRAALL_VENTILATION_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("通风模式"));
                        }
                        else if(HVACRAALL_AUTO_COLD_MODE_B1 )
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("自动制冷"));
                        }
                        else if(HVACRAALL_MANU_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("手动制暖"));
                        }
                        else if(HVACRAALL_MANU_COLD_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("手动制冷"));
                        }
                        else if(HVACRAALL_AUTO_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("自动制暖"));
                        }
                        else
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText(QSTR("无"));
                        }

                    }

                }
            }

            if(HVACRBALL_LOCAL_CONTROL_B1)
            {
                if(HVACRBALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("全1"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("本控"));
                }
            }
            else
            {
                if(HVACRBALL_CENTR_CONTROL_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("集控"));
                }
                else
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText(QSTR("全0"));
                }
            }

            if(HVACRBALL_STOP_MODE_B1)
            {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("停机模式"));
            }
            else
            {
                if(HVACRBALL_EMER_VENT_MODE_B1)
                {
                    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("紧急通风"));
                }
                else
                {
                    if(HVACRBALL_PRE_COLD_MODE_B1)
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("预冷模式"));
                    }
                    else if(HVACRBALL_PRE_WARM_MODE_B1 )
                    {
                        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("预暖模式"));
                    }
                    else
                    {
                        if(HVACRBALL_VENTILATION_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("通风模式"));
                        }
                        else if(HVACRBALL_AUTO_COLD_MODE_B1 )
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("自动制冷"));
                        }
                        else if(HVACRBALL_MANU_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("手动制暖"));
                        }
                        else if(HVACRBALL_MANU_COLD_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("手动制冷"));
                        }
                        else if(HVACRBALL_AUTO_WARM_MODE_B1)
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("自动制暖"));
                        }
                        else
                        {
                            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText(QSTR("无"));
                        }

                    }

                }
            }


            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlText(QString::number(HVACRAALL_INSIDE_TEMP_U8-30)
                                                                      +"("+
                                                                      QString::number(HVACRAALL_OUTDOOR_TEMP_U8-30)
                                                                      +")");


            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlText(QString::number(HVACRBALL_INSIDE_TEMP_U8-30)
                                                                      +"("+
                                                                      QString::number(HVACRBALL_OUTDOOR_TEMP_U8-30)
                                                                      +")");



        }

        // OTHER TRAIN
        {
        if(R2_MVB_2_LocContrRa_B1_Master4)
        {
            if(R2_MVB_2_CentrContrRa_B1_Master4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("全1"));
            }
            else
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("本控"));
            }
        }
        else
        {
            if(R2_MVB_2_CentrContrRa_B1_Master4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("集控"));
            }
            else
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText(QSTR("全0"));
            }
        }
        if(R2_MVB_2_LocContrRb_B1_Master4)
        {
            if(R2_MVB_2_CentrContrRb_B1_Master4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("全1"));
            }
            else
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("本控"));
            }
        }
        else
        {
            if(R2_MVB_2_CentrContrRb_B1_Master4)
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("集控"));
            }
            else
            {
                ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QSTR("全0"));
            }
        }

        if(R2_MVB_2_StopRa_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("停机模式"));
        }else if(R2_MVB_2_EmeVentRa_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("紧急通风"));
        }else if(R2_MVB_2_PreColdRa_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("预冷模式"));
        }else if(R2_MVB_2_PreWarmRa_B1_Master4 )
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("预暖模式"));
        }
        else if(R2_MVB_2_VentRa_B1_Master4 )
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("通风模式"));
        }
        else if(R2_MVB_2_AutoColdRa_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("自动制冷"));
        }
        else if(R2_MVB_2_ManuWarmRa_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("手动制暖"));
        }
        else if(R2_MVB_2_ManuColdRa_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("手动制冷"));
        }
        else if(R2_MVB_2_AutoWarmRa_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("自动制暖"));
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText(QSTR("无"));
        }

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText(QString::number(R2_MVB_2_PassTempRa_U8_Master4-30)
                                                                  +"("+
                                                                  QString::number(R2_MVB_2_OutTempRa_U8_Master4-30)
                                                                  +")");
        if(R2_MVB_2_StopRb_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("停机模式"));
        }else if(R2_MVB_2_EmeVentRb_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("紧急通风"));
        }else if(R2_MVB_2_PreColdRb_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("预冷模式"));
        }else if(R2_MVB_2_PreWarmRb_B1_Master4 )
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("预暖模式"));
        }
        else if(R2_MVB_2_VentRb_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("通风模式"));
        }
        else if(R2_MVB_2_AutoColdRb_B1_Master4 )
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("自动制冷"));
        }
        else if(R2_MVB_2_ManuWarmRb_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("手动制暖"));
        }
        else if(R2_MVB_2_ManuColdRb_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("手动制冷"));
        }
        else if(R2_MVB_2_AutoWarmRb_B1_Master4)
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("自动制暖"));
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QSTR("无"));
        }
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText(QString::number(R2_MVB_2_PassTempRb_U8_Master4-30)
                                                                  +"("+
                                                                  QString::number(R2_MVB_2_OutTempRb_U8_Master4-30)
                                                                  +")");


        }

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_2))->SetCtrlBKColor(Qt::black);

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_1))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_2))->SetCtrlBKColor(Qt::black);
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("");
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("");

    }
    if(set_KeyState==1)
    {

        ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("空调可操作"));

        switch(m_PressBtnID)
         {
         case ID_HVACSET_LABLE_5:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n自动冷"));
             break;
         case ID_HVACSET_LABLE_6:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("制冷温度设定"));
             break;
         case ID_HVACSET_LABLE_7:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n通风"));
             break;
         case ID_HVACSET_LABLE_8:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n紧急通风"));
             break;
         case ID_HVACSET_LABLE_9:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n自动暖"));
             break;
         case ID_HVACSET_LABLE_10:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("制暖温度设定"));
             break;
         case ID_HVACSET_LABLE_11:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n停机"));
             break;
         case ID_HVACSET_LABLE_12:
             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n退出预冷暖"));
             break;
         default:
             break;
         }
        if (m_bBtnPress)
        {
            static int times = 0;
            times++;
            if (times%times_n == 0)
            {
                HVAC_valid_timer--;
                if (HVAC_valid_timer==0)
                {
                    m_bBtnPress = false;
                    set_ModeEff = 0;

                    IDUHVAC_EmegVent_B1 = false;
                    IDUHVAC_Vent_B1 = false;
                    IDUHVAC_AutoWarm_B1 = false;
                    IDUHVAC_AutoCold_B1 = false;
                    IDUHVAC_ManWarm_B1 = false;
                    IDUHVAC_ManCold_B1 = false;
                    IDUHVAC_ExitPre_B1 = false;
                    IDUHVAC_Stop_B1 = false;

                    IDUHVAC_SetTempEff_B1 = false;
                    IDUHVAC_HvacModeEff_B1 = false;
                    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->ChangeButtonState(LBUTTON_UP);
                 }
            }
        }
        //delay IDUHVAC_HvacModeEff_B1 by 2s,avoid mode not update.
//        if(IDUHVAC_SetTempEff_B1)
//        {
//            static int cnt_2s = 0;
//            if(cnt_2s++>5)
//            {
//                cnt_2s =0;

//            }
//        }

        GetDlgItem(ID_HVACSET_EDIT_2)->SetCtrlText(QString::number(set_Temp));
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("空调设定无效"));

    }
    if ((m_TrainCoupleActive ==1) && !m_bBtnPress)
    {
        ChangePage(PAGE_ROM_INDEX_HVACSTATE);
        return;
    }

}


void CHvacStatePageCoupled::OnSet1ButtonUP()
{
    if(set_KeyState==1)
    {
        if(m_bBtnPress == false)
        {

            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->ChangeButtonState(LBUTTON_DOWN);

            m_bBtnPress = true;
            HVAC_valid_timer =2;
             set_ModeEff = 1;
             switch(set_Mode)
              {
              case 1:
                  IDUHVAC_EmegVent_B1 = false;
                  IDUHVAC_Vent_B1 = false;
                  IDUHVAC_AutoWarm_B1 = false;
                  IDUHVAC_AutoCold_B1 = true;
                  IDUHVAC_ManWarm_B1 = false;
                  IDUHVAC_ManCold_B1 = false;
                  IDUHVAC_ExitPre_B1 = false;
                  IDUHVAC_Stop_B1 = false;
                  break;
              case 2:
                  IDUHVAC_EmegVent_B1 = false;
                  IDUHVAC_Vent_B1 = false;
                  IDUHVAC_AutoWarm_B1 = false;
                  IDUHVAC_AutoCold_B1 = false;
                  IDUHVAC_ManWarm_B1 = false;
                  IDUHVAC_ManCold_B1 = true;
                  IDUHVAC_ExitPre_B1 = false;
                  IDUHVAC_Stop_B1 = false;
                  IDUHVAC_SetTempCold_U8 = set_Temp;
                  break;
              case 3:
                  IDUHVAC_EmegVent_B1 = false;
                  IDUHVAC_Vent_B1 = true;
                  IDUHVAC_AutoWarm_B1 = false;
                  IDUHVAC_AutoCold_B1 = false;
                  IDUHVAC_ManWarm_B1 = false;
                  IDUHVAC_ManCold_B1 = false;
                  IDUHVAC_ExitPre_B1 = false;
                  IDUHVAC_Stop_B1 = false;
                  break;
              case 4:
                  IDUHVAC_EmegVent_B1 = true;
                  IDUHVAC_Vent_B1 = false;
                  IDUHVAC_AutoWarm_B1 = false;
                  IDUHVAC_AutoCold_B1 = false;
                  IDUHVAC_ManWarm_B1 = false;
                  IDUHVAC_ManCold_B1 = false;
                  IDUHVAC_ExitPre_B1 = false;
                  IDUHVAC_Stop_B1 = false;
                  break;
              case 5:
                  IDUHVAC_EmegVent_B1 = false;
                  IDUHVAC_Vent_B1 = false;
                  IDUHVAC_AutoWarm_B1 = true;
                  IDUHVAC_AutoCold_B1 = false;
                  IDUHVAC_ManWarm_B1 = false;
                  IDUHVAC_ManCold_B1 = false;
                  IDUHVAC_ExitPre_B1 = false;
                  IDUHVAC_Stop_B1 = false;
                  break;
              case 6:
                  IDUHVAC_EmegVent_B1 = false;
                  IDUHVAC_Vent_B1 = false;
                  IDUHVAC_AutoWarm_B1 = false;
                  IDUHVAC_AutoCold_B1 = false;
                  IDUHVAC_ManWarm_B1 = true;
                  IDUHVAC_ManCold_B1 = false;
                  IDUHVAC_ExitPre_B1 = false;
                  IDUHVAC_Stop_B1 = false;
                  IDUHVAC_SetTempWarm_U8 = set_Temp;
                  break;
              case 7:
                  IDUHVAC_EmegVent_B1 = false;
                  IDUHVAC_Vent_B1 = false;
                  IDUHVAC_AutoWarm_B1 = false;
                  IDUHVAC_AutoCold_B1 = false;
                  IDUHVAC_ManWarm_B1 = false;
                  IDUHVAC_ManCold_B1 = false;
                  IDUHVAC_ExitPre_B1 = false;
                  IDUHVAC_Stop_B1 = true;
                  break;
              case 8:
                  IDUHVAC_EmegVent_B1 = false;
                  IDUHVAC_Vent_B1 = false;
                  IDUHVAC_AutoWarm_B1 = false;
                  IDUHVAC_AutoCold_B1 = false;
                  IDUHVAC_ManWarm_B1 = false;
                  IDUHVAC_ManCold_B1 = false;
                  IDUHVAC_ExitPre_B1 = true;
                  IDUHVAC_Stop_B1 = false;
                  break;
              default:
                  break;
              }


             IDUHVAC_SetTempEff_B1 = true;
             IDUHVAC_HvacModeEff_B1 = true;


        }
    }
    //((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->ChangeButtonState(LBUTTON_UP);

}


void CHvacStatePageCoupled::OnSet3ButtonUP()
{

    if((mannalflg )&&(set_KeyState==1))
    {
        if((set_ManCold==1) && (set_ManWarm==0))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_3))->ChangeButtonState(LBUTTON_DOWN);
            if(set_Temp<27)
            {
                set_Temp++;
            }
        }
        if((set_ManCold==0) && (set_ManWarm==1))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_3))->ChangeButtonState(LBUTTON_DOWN);
            if(set_Temp<20)
            {
                set_Temp++;
            }
        }
    }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_3))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet4ButtonUP()
{

    if((mannalflg)&&(set_KeyState==1))
    {
        if((set_ManCold==1) && (set_ManWarm==0))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_4))->ChangeButtonState(LBUTTON_DOWN);
            if(set_Temp>19)
            {
                set_Temp--;
            }
        }
        if((set_ManCold==0) && (set_ManWarm==1))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_4))->ChangeButtonState(LBUTTON_DOWN);
            if(set_Temp>12)
            {
                set_Temp--;
            }
        }

    }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_4))->ChangeButtonState(LBUTTON_UP);

}

void CHvacStatePageCoupled::OnSet5ButtonUP()
{

    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = false;

        m_PressBtnID = ID_HVACSET_LABLE_5;
        set_Mode = 1;
        set_ManCold = 0;
        set_ManWarm = 0;
        set_Temp = 0;
     }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_5))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet6ButtonUP()
{

    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = true;

        m_PressBtnID = ID_HVACSET_LABLE_6;
        set_Mode = 2;
        set_ManCold = 1;
        set_ManWarm = 0;
        set_Temp = 22;
    }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_6))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet7ButtonUP()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = false;
        m_PressBtnID = ID_HVACSET_LABLE_7;
        set_Mode = 3;
        set_ManCold = 0;
        set_ManWarm = 0;
        set_Temp = 0;
    }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_7))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet8ButtonUP()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = false;
        m_PressBtnID = ID_HVACSET_LABLE_8;
        set_Mode = 4;
        set_ManCold = 0;
        set_ManWarm = 0;
        set_Temp = 0;
    }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_8))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet9ButtonUP()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = false;
        m_PressBtnID = ID_HVACSET_LABLE_9;
        set_Mode = 5;
        set_ManCold = 0;
        set_ManWarm = 0;
        set_Temp = 0;
    }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_9))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet10ButtonUP()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = true;
        m_PressBtnID = ID_HVACSET_LABLE_10;
        set_Mode = 6;
        set_ManCold = 0;
        set_ManWarm = 1;
        set_Temp = 19;
     }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_10))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet11ButtonUP()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = false;

        m_PressBtnID = ID_HVACSET_LABLE_11;
        set_Mode = 7;
        set_ManCold = 0;
        set_ManWarm = 0;
        set_Temp = 0;
    }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_11))->ChangeButtonState(LBUTTON_UP);
}

void CHvacStatePageCoupled::OnSet12ButtonUP()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    {
        mannalflg = false;
        m_PressBtnID = ID_HVACSET_LABLE_12;
        set_Mode = 8;
        set_ManCold = 0;
        set_ManWarm = 0;
        set_Temp = 0;
     }
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_12))->ChangeButtonState(LBUTTON_UP);

}
void CHvacStatePageCoupled::OnSet1ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->ChangeButtonState(LBUTTON_DOWN);
}
void CHvacStatePageCoupled::OnSet3ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_3))->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacStatePageCoupled::OnSet4ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_4))->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacStatePageCoupled::OnSet5ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_5))->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacStatePageCoupled::OnSet6ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_6))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePageCoupled::OnSet7ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_7))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePageCoupled::OnSet8ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_8))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePageCoupled::OnSet9ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_9))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePageCoupled::OnSet10ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
   ((CButton*)GetDlgItem(ID_HVACSET_LABLE_10))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePageCoupled::OnSet11ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_11))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePageCoupled::OnSet12ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_12))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePageCoupled::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_COUPLESET))->SetAlignment(Qt::AlignLeft);


    m_bBtnPress = false;
    m_PressBtnID = 0;
    set_Temp = 0;
    set_ManCold = 0;
    set_ManWarm = 0;
    mannalflg = false;
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->m_bAutoUpState = false;

    switch(set_Mode)
     {
     case 1:
        //((CButton*)GetDlgItem(ID_HVACSET_LABLE_5))->ChangeButtonState(LBUTTON_DOWN);
        ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n自动冷"));
         break;
     case 2:
         //((CButton*)GetDlgItem(ID_HVACSET_LABLE_6))->ChangeButtonState(LBUTTON_DOWN);
         ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("制冷温度设定"));
         break;
     case 3:
         //((CButton*)GetDlgItem(ID_HVACSET_LABLE_7))->ChangeButtonState(LBUTTON_DOWN);
         ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n通风"));
         break;
     case 4:
         //((CButton*)GetDlgItem(ID_HVACSET_LABLE_8))->ChangeButtonState(LBUTTON_DOWN);
         ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n紧急通风"));
         break;
     case 5:
         //((CButton*)GetDlgItem(ID_HVACSET_LABLE_9))->ChangeButtonState(LBUTTON_DOWN);
         ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n自动暖"));

         break;
     case 6:
         //((CButton*)GetDlgItem(ID_HVACSET_LABLE_10))->ChangeButtonState(LBUTTON_DOWN);
         ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("制暖温度设定"));

         break;
     case 7:
         //((CButton*)GetDlgItem(ID_HVACSET_LABLE_11))->ChangeButtonState(LBUTTON_DOWN);
         ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n停机"));

         break;
     case 8:
         //((CButton*)GetDlgItem(ID_HVACSET_LABLE_12))->ChangeButtonState(LBUTTON_DOWN);
         ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("当前模式\n退出预冷暖"));

         break;
     default:
         break;
     }
}
