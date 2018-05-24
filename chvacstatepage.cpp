#include "chvacstatepage.h"

ROMDATA g_PicRom_HvacStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */


    D_COMMON_PAGE_HEADER

    {"bjcar.png",   D_DEFAULT_FONT,      QRect(210, 75,220+150,  45),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },

    //H line



    {"",                   D_DEFAULT_FONT,      QRect( 50,125,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,147,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,169,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,191,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,213,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,235,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,257,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,279,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,301,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,323,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

    //V line
    {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(210,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(395,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(580,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    //label
    {QSTR("显示项目"),                D_FONT(12),      QRect( 55,126,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_2_1    },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_3_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,192,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_4_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_5_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_1     },
    {QSTR(""),              D_DEFAULT_FONT,      QRect( 55,280,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_9_1     },

    //label
    {"RA",           D_DEFAULT_FONT,      QRect(215,126,100+75, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(395-150,149, 40+75, 18),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,171, 40+75, 18),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,193, 40+75, 18),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,215, 40+75, 18),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_2    },
    {"",              D_DEFAULT_FONT,      QRect(215,237, 85, 18),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_2_1    },
    {"",              D_DEFAULT_FONT,      QRect(215,259, 85, 18),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_2_1    },
    {"",              D_DEFAULT_FONT,      QRect(305,237, 85, 18),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(305,259, 85, 18),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_2_2    },

    {"",              D_DEFAULT_FONT,      QRect(215,281, 175, 18),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_2    },
    {"",              D_DEFAULT_FONT,      QRect(215,303, 175, 18),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_2    },

    {"RB",           D_DEFAULT_FONT,      QRect(475-75,126,100+75, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(505-75,149, 40+75, 19),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,171, 40+75, 19),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,193, 40+75, 19),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,215, 40+75, 19),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_3    },
    {"",              D_DEFAULT_FONT,      QRect(400,237, 85, 19),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_3_1    },
    {"",              D_DEFAULT_FONT,      QRect(400,259, 85, 19),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_3_1    },
    {"",              D_DEFAULT_FONT,      QRect(490,237, 85, 19),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_3_2    },
    {"",              D_DEFAULT_FONT,      QRect(490,259, 85, 19),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_3_2    },

    {"",              D_DEFAULT_FONT,      QRect(400,281, 175, 19),                      Qt::yellow,                   Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_3    },
    {"",              D_DEFAULT_FONT,      QRect(400,303, 175, 19),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_3    },
//    {"",              D_DEFAULT_FONT,      QRect(505-75,325, 40+75, 19),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_3   },
//    {"",              D_DEFAULT_FONT,      QRect(505-75,347, 40+75, 19),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_3   },
//    {"",              D_DEFAULT_FONT,      QRect(505-75,369, 40+75, 18),                      Qt::yellow,                   Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_3   },


{QSTR("温度设定"),             D_FONT(7),      QRect( 390,340, 100, 32),               Qt::yellow,                   Qt::black,                 CONTROL_BUTTON,           ID_HVACSET_LABLE_0          },
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
int g_HvacStatePageRomLen = sizeof(g_PicRom_HvacStatePage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHvacStatePage,CPage)
ON_UPDATE_PAGE()
ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
ON_LBUTTONUP(ID_HVACSET_LABLE_1, OnSet1ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_1, OnSet1ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_3, OnSet3ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_3, OnSet3ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_4, OnSet4ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_4, OnSet4ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_5, OnSet5ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_5, OnSet5ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_6, OnSet6ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_6, OnSet6ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_7, OnSet7ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_7, OnSet7ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_8, OnSet8ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_8, OnSet8ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_9, OnSet9ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_9, OnSet9ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_10, OnSet10ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_10, OnSet10ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_11, OnSet11ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_11, OnSet11ButtonDOWN)
ON_LBUTTONUP(ID_HVACSET_LABLE_12, OnSet12ButtonUP)
ON_LBUTTONDOWN(ID_HVACSET_LABLE_12, OnSet12ButtonDOWN)
END_MESSAGE_MAP()

CHvacStatePage::CHvacStatePage()
{
    pageNo = HVAC_MIN_PAGE;
}

void CHvacStatePage::OnCommonQuitButtonDown()
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
void CHvacStatePage::OnUpdatePage()
{


    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetCtrlText(QSTR("控制模式"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetCtrlText(QSTR("运行模式"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetCtrlText(QSTR("通风机"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetCtrlText(QSTR("冷凝风机"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetCtrlText(QSTR("压缩机"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetCtrlText(QSTR("电加热"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetCtrlText(QSTR("设定温度"));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetCtrlText(QSTR("室内(外)温度"));

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

    if(HVACRAALL_FAN_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::red);
    }

    if(HVACRAALL_CONDENCER_FAN_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::red);
    }

    if(HVACRAALL_COMPRESS_1_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_1))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_1))->SetCtrlBKColor(Qt::red);
    }
    if(HVACRAALL_COMPRESS_2_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2_2))->SetCtrlBKColor(Qt::red);
    }

    if(HVACRAALL_ELECTRIC_HEATER_1_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_1))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_1))->SetCtrlBKColor(Qt::red);
    }
    if(HVACRAALL_ELECTRIC_HEATER_2_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2_2))->SetCtrlBKColor(Qt::red);
    }

   ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("C:"+QString::number(HVACRAALL_SET_TEMP_COLD_U8)
                                                             +" W:"+QString::number(HVACRAALL_SET_TEMP_WARM_U8));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText(QString::number(HVACRAALL_INSIDE_TEMP_U8-30)
                                                              +"("+
                                                              QString::number(HVACRAALL_OUTDOOR_TEMP_U8-30)
                                                              +")");



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

    if(HVACRBALL_FAN_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::red);
    }

    if(HVACRBALL_CONDENCER_FAN_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::red);
    }

    if(HVACRBALL_COMPRESS_1_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_1))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_1))->SetCtrlBKColor(Qt::red);
    }
    if(HVACRBALL_COMPRESS_2_RUN_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3_2))->SetCtrlBKColor(Qt::red);
    }

    if(HVACRBALL_ELECTRIC_HEATER_1_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_1))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_1))->SetCtrlBKColor(Qt::red);
    }
    if(HVACRBALL_ELECTRIC_HEATER_2_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
         ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3_2))->SetCtrlBKColor(Qt::red);
    }


    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("C:"+QString::number(HVACRBALL_SET_TEMP_COLD_U8)
                                                             +" W:"+QString::number(HVACRBALL_SET_TEMP_WARM_U8));
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText(QString::number(HVACRBALL_INSIDE_TEMP_U8-30)
                                                              +"("+
                                                              QString::number(HVACRBALL_OUTDOOR_TEMP_U8-30)
                                                              +")");


    if(set_KeyState==1)
    {

        ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("空调可操作"));

//        if(set_ManCold)
//        {
//             ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("制冷温度设定"));
//        }
//        else if(set_ManWarm)
//        {
//            ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("制暖温度设定"));
//        }else
//        {
//            ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("非制冷/暖\n设定模式"));
//        }
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
        if(m_bBtnPress)
        {

            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->ChangeButtonState(LBUTTON_DOWN);

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

                    IDUHVAC_SetTempEff_B1=false;
                    IDUHVAC_HvacModeEff_B1=false;
                    //set_Temp = 19;
                    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->ChangeButtonState(LBUTTON_UP);
                 }
            }

        }


//        int nIDArray[] =
//        {
//          ID_HVACSET_LABLE_5,         //    0x0B45
//          ID_HVACSET_LABLE_6,         //    0x0B46
//          ID_HVACSET_LABLE_7,         //    0x0B47
//          ID_HVACSET_LABLE_8,         //    0x0B48
//          ID_HVACSET_LABLE_9,         //    0x0B49
//          ID_HVACSET_LABLE_10,         //    0x0B4a
//          ID_HVACSET_LABLE_11,         //    0x0B4b
//          ID_HVACSET_LABLE_12,         //    0x0B4c

//        };
//        int IDArraylen = sizeof(nIDArray)/sizeof(int);

//        //CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
//        CButton* pButton = NULL;

//        for(int i = 0; i < IDArraylen; i++)
//        {
//            pButton = (CButton *)GetDlgItem(nIDArray[i]);
//            if(nIDArray[i] == m_PressBtnID)
//            {
//                pButton->ChangeButtonState(LBUTTON_DOWN);
//            }
//            else
//            {
//                pButton->ChangeButtonState(LBUTTON_UP);
//            }
//        }
        GetDlgItem(ID_HVACSET_EDIT_2)->SetCtrlText(QString::number(set_Temp));
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_HVACSET_LABLE_0))->SetCtrlText(QSTR("空调设定无效"));

    }/**/

    if ((m_TrainCoupleActive ==2) && !m_bBtnPress)
    {
        ChangePage(PAGE_ROM_INDEX_HVACSTATEPAGECOUPLED);
        return;
    }
}

void CHvacStatePage::OnSet1ButtonUP()
{
    if(set_KeyState==1)
    {
        if(m_bBtnPress == false)
        {
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
}

void CHvacStatePage::OnSet3ButtonUP()
{
    if((mannalflg )&&(set_KeyState==1))
    {
        if((set_ManCold==1) && (set_ManWarm==0))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_3))->ChangeButtonState(LBUTTON_UP);
            if(set_Temp<27)
            {
                set_Temp++;
            }
        }
        if((set_ManCold==0) && (set_ManWarm==1))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_3))->ChangeButtonState(LBUTTON_UP);
            if(set_Temp<20)
            {
                set_Temp++;
            }
        }
    }
}


void CHvacStatePage::OnSet4ButtonUP()
{
    if((mannalflg)&&(set_KeyState==1))
    {
        if((set_ManCold==1) && (set_ManWarm==0))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_4))->ChangeButtonState(LBUTTON_UP);
            if(set_Temp>19)
            {
                set_Temp--;
            }
        }
        if((set_ManCold==0) && (set_ManWarm==1))
        {
            ((CButton*)GetDlgItem(ID_HVACSET_LABLE_4))->ChangeButtonState(LBUTTON_UP);
            if(set_Temp>12)
            {
                set_Temp--;
            }
        }

    }

}

void CHvacStatePage::OnSet5ButtonUP()
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

void CHvacStatePage::OnSet6ButtonUP()
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

void CHvacStatePage::OnSet7ButtonUP()
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

void CHvacStatePage::OnSet8ButtonUP()
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

void CHvacStatePage::OnSet9ButtonUP()
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

void CHvacStatePage::OnSet10ButtonUP()
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

void CHvacStatePage::OnSet11ButtonUP()
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

void CHvacStatePage::OnSet12ButtonUP()
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

void CHvacStatePage::OnSet1ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->ChangeButtonState(LBUTTON_DOWN);

}


void CHvacStatePage::OnSet3ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_3))->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacStatePage::OnSet4ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_4))->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacStatePage::OnSet5ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_5))->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacStatePage::OnSet6ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_6))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePage::OnSet7ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_7))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePage::OnSet8ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_8))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePage::OnSet9ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_9))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePage::OnSet10ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_10))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePage::OnSet11ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_11))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePage::OnSet12ButtonDOWN()
{
    if((m_bBtnPress == false)&&(set_KeyState==1))
    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_12))->ChangeButtonState(LBUTTON_DOWN);

}

void CHvacStatePage::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetAlignment(Qt::AlignLeft);

    ((CButton*)GetDlgItem(ID_HVACSET_LABLE_1))->m_bAutoUpState = false;
    m_bBtnPress = false;
    m_PressBtnID = 0;
    set_Temp = 0;
    set_ManCold = 0;
    set_ManWarm = 0;
    mannalflg = false;
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
