#include "cacustatepage.h"

ROMDATA g_PicRom_AcuStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
//    {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEDOWN},
//    {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEUP},
//    {"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60,  19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_TRAINNUM },
    {"bjcar.png",        D_DEFAULT_FONT,      QRect(210, 75,220+150, 45),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
//    {"",              D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATEPAGE   },

//    {QSTR("重联"),           D_DEFAULT_FONT,      QRect( 50, 75, 60,  40),                   Qt::black,                  Qt::black,                  CONTROL_BUTTON,        ID_ACUSTATE_COUPLECHANGE},

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
    {"",                   D_DEFAULT_FONT,      QRect( 50,345,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,367,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,389,530,  1),                  Qt::yellow,                  Qt::yellow,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,411,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

    //V line
    {"",                   D_DEFAULT_FONT,      QRect( 50,    125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(360-150,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(470-75, 125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(580,    125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    //label
    {QSTR("显示项目"),           D_FONT(12),      QRect( 55,126,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_2_1    },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_3_1     },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,192,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_4_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_5_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_1     },
    {QSTR(""),              D_DEFAULT_FONT,      QRect( 55,280,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_9_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,324,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_10_1   },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,346,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_11_1    },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,368,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_12_1    },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,390,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_13_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,412,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_14_1    },

    //label
    {"MA",           D_DEFAULT_FONT,      QRect(365-150,126,100+75, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(395-150,149, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,171, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,193, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,215, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,237, 40+75, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,259, 40+75, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,281, 40+75, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,303, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_2    },
    {"",              D_DEFAULT_FONT,      QRect(395-150,325, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_2   },
    {"",              D_DEFAULT_FONT,      QRect(395-150,347, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_2   },
    {"",              D_DEFAULT_FONT,      QRect(395-150,369, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_2   },
{"",              D_DEFAULT_FONT,      QRect(395-150,391, 40+75, 18),                      Qt::yellow,                       Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_2   },
    //{"",              D_DEFAULT_FONT,      QRect(395-150,413, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

    {"MB",           D_DEFAULT_FONT,      QRect(475-75,126,100+75, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(505-75,149, 40+75, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,171, 40+75, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,193, 40+75, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,215, 40+75, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,237, 40+75, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,259, 40+75, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,281, 40+75, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,303, 40+75, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_3    },
    {"",              D_DEFAULT_FONT,      QRect(505-75,325, 40+75, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_3   },
    {"",              D_DEFAULT_FONT,      QRect(505-75,347, 40+75, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_3   },
    {"",              D_DEFAULT_FONT,      QRect(505-75,369, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_3   },
    {"",              D_DEFAULT_FONT,      QRect(505-75,391, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_3   },

    //{"",              D_DEFAULT_FONT,      QRect(505-75,413, 40+75, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_3   },

    D_LAYER1_NAVIGATION_BAR
};
int g_AcuStatePageRomLen = sizeof(g_PicRom_AcuStatePage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CAcuStatePage,CPage)
    ON_UPDATE_PAGE()
    ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)

//ON_LBUTTONDOWN(ID_ACUSTATE_PAGEDOWN, OnDownButtonDown)
//ON_LBUTTONUP(ID_ACUSTATE_PAGEDOWN, OnDownButtonUp)
//ON_LBUTTONDOWN(ID_ACUSTATE_PAGEUP, OnUpButtonDown)
//ON_LBUTTONUP(ID_ACUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CAcuStatePage::CAcuStatePage()
{
    pageNo =ACU_MIN_PAGE;
    formerPageNo = 0;
}

void CAcuStatePage::OnCommonQuitButtonDown()
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
void CAcuStatePage::OnUpdatePage()
{
    if ( m_TrainCoupleActive ==2)
     // if(1)
    {
        ChangePage(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED);
        return;
    }
    //GetDlgItem(IDLABEL_PICBCU_TRAINNUM)->SetCtrlText(g_car1CodeStr);

//  if( pageNo==ACU_MAX_PAGE )
//    {

//        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN))->SetCtrlText("downgray.png");
//        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("up.png");
//    }
//    else if( pageNo==ACU_MIN_PAGE )
//    {

//        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN))->SetCtrlText("down.png");
//        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("upgray.png");
//    }
//    else
//    {

//        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN))->SetCtrlText("down.png");
//        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("up.png");
//    }

    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_1))->SetCtrlText(QSTR("蓄电池充电器滤波电压"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_1))->SetCtrlText(QSTR("蓄电池充电器线电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_1))->SetCtrlText(QSTR("蓄电池充电电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_1))->SetCtrlText(QSTR("蓄电池输出电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_1))->SetCtrlText(QSTR("蓄电池充电状态(%)"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_1))->SetCtrlText(QSTR("蓄电池温度"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_1))->SetCtrlText(QSTR("逆变器滤波电压"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_1))->SetCtrlText(QSTR("逆变器线电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_1))->SetCtrlText(QSTR("逆变器输出有效电流"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetCtrlText(QSTR("输出电压频率"));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_1))->SetCtrlText(QSTR("逆变器输出有效电压"));
   // ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_1))->SetCtrlText(QSTR(""));


    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBvFil_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiLin_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiBat_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBiCar_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlText(QString::number((float)TCU1CCU_4_CBBattChargSt_U16/100,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlText(QString::number((float)TCU1CCU_4_tBatt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVvFil_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IViLin_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVi2uRMS_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVfout_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlText(QString::number((float)TCU1CCU_5_IVv2uRMS_U16*0.1,1,0));



    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBvFil_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiLin_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiBat_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBiCar_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlText(QString::number((float)TCU3CCU_4_CBBattChargSt_U16/100,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlText(QString::number((float)TCU3CCU_4_tBatt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVvFil_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IViLin_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVi2uRMS_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVfout_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlText(QString::number((float)TCU3CCU_5_IVv2uRMS_U16*0.1,1,0));
}


void CAcuStatePage::OnDownButtonUp()
{

}
void CAcuStatePage::OnUpButtonDown()
{

}

void CAcuStatePage::OnUpButtonUp()
{

}
void CAcuStatePage::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_1))->SetAlignment(Qt::AlignLeft);
}
