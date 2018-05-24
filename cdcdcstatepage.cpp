#include "cdcdcstatepage.h"

ROMDATA g_PicRom_DcdcStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
//  {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_DCDCSTATE_PAGEDOWN},
//  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_DCDCSTATE_PAGEUP},
//  {"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60, 19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_TRAINNUM },
  {"bjcar.png",   D_DEFAULT_FONT,      QRect(210, 75,220+150, 45),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },

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
  {"",                   D_DEFAULT_FONT,      QRect( 50,433,530,  1),                  Qt::yellow,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,308),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(210,125,  1,308),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(395,125,  1,308),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(580,125,  1,309),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //label
  {QSTR(""),                D_DEFAULT_FONT,      QRect( 55,126,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),            D_DEFAULT_FONT,      QRect( 55,148,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_1    },
  {QSTR(""),            D_DEFAULT_FONT,      QRect( 55,170,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_1     },
  {QSTR(""),                D_DEFAULT_FONT,      QRect( 55,192,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_1     },
  {QSTR(""),                D_DEFAULT_FONT,      QRect( 55,214,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_1     },
  {QSTR(""),                D_DEFAULT_FONT,      QRect( 55,236,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_1     },
  {QSTR(""),            D_DEFAULT_FONT,      QRect( 55,258,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_1     },
  {QSTR(""),            D_DEFAULT_FONT,      QRect( 55,280,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_1     },
  {QSTR(""),            D_DEFAULT_FONT,      QRect( 55,302,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_1     },
  {QSTR(""),               D_DEFAULT_FONT,      QRect( 55,324,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_1   },
  {QSTR(""),               D_DEFAULT_FONT,      QRect( 55,346,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_1    },
  {QSTR(""),               D_DEFAULT_FONT,      QRect( 55,368,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_1    },
  {QSTR(""),               D_DEFAULT_FONT,      QRect( 55,390,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_1    },
  {QSTR(""),               D_DEFAULT_FONT,      QRect( 55,412,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_1    },

  //label
  {"RA",           D_DEFAULT_FONT,      QRect(215,126,175, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(245,148+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,170+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,192+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,214+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,236+1,   115, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,258+1,   115, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,280+1,   115, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,302+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_2    },
  {"",              D_DEFAULT_FONT,      QRect(245,324+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_2   },
  {"",              D_DEFAULT_FONT,      QRect(245,346+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_2   },
  {"",              D_DEFAULT_FONT,      QRect(245,368+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_2   },
  {"",              D_DEFAULT_FONT,      QRect(245,390+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_2   },
  {"",              D_DEFAULT_FONT,      QRect(245,412+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_2   },

  {"RB",           D_DEFAULT_FONT,      QRect(400,126,175, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(430,148+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,170+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,192+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,214+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,236+1,   115, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,258+1,   115, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,280+1,   115, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,302+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_3    },
  {"",              D_DEFAULT_FONT,      QRect(430,324+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_3   },
  {"",              D_DEFAULT_FONT,      QRect(430,346+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_3   },
  {"",              D_DEFAULT_FONT,      QRect(430,368+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_3   },
  {"",              D_DEFAULT_FONT,      QRect(430,390+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_3   },
  {"",              D_DEFAULT_FONT,      QRect(430,412+1,   115, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_3   },


  D_LAYER1_NAVIGATION_BAR
};
int g_DcdcStatePageRomLen = sizeof(g_PicRom_DcdcStatePage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDcdcStatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
//        ON_LBUTTONDOWN(ID_DCDCSTATE_PAGEDOWN, OnDownButtonDown)
//        ON_LBUTTONUP(ID_DCDCSTATE_PAGEDOWN, OnDownButtonUp)
//        ON_LBUTTONDOWN(ID_DCDCSTATE_PAGEUP, OnUpButtonDown)
//        ON_LBUTTONUP(ID_DCDCSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CDcdcStatePage::CDcdcStatePage()
{
    pageNo = DCDC_MIN_PAGE;
    formerPageNo = 0;
}

void CDcdcStatePage::OnCommonQuitButtonDown()
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
void CDcdcStatePage::OnUpdatePage()
{

    if (  m_TrainCoupleActive ==2)
    //if(1)
    {
         ChangePage(PAGE_ROM_INDEX_DCDCSTATECOUPLED);
         return;
     }

    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("超级电容输入电流"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("滤波器输入电压"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("超级电容电压"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("斩波器状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("预充电接触器状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("预充电状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("主接触器状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("HSCB状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("超级电容系统切除"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("超级电容接触器状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("超级电容斩波器状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_1))->SetCtrlText(QSTR("热敏开关状态"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_1))->SetCtrlText(QSTR("充放电状态"));


    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText(QString::number((float)SC1ALL_iSc_I16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText(QString::number((float)SC1ALL_vFil_I16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText(QString::number((float)SC1ALL_vSc_I16*0.1,1,0));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlText(QString::number(SC1ALL_stScb_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlText(QString::number(SC1ALL_stScb_U16,2));

    if(SC1ALL_stSca_ScChopper_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        if(SC1ALL_stSca_civof_B1)
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::red);
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::black);
        }
    }

    if(SC1ALL_stSca_ccfca_B1 )
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::red);
    }

    if(SC1ALL_stSca_precharge_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::red);
    }

    if(SC1ALL_stSca_cpca_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::red);
    }

    if(SC1ALL_stSca_irca_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::red);
    }

    if(SC1ALL_stSca_autoEscl_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::red);
    }

    if(SC1ALL_stSca_cscca_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::red);
    }

    if(SC1ALL_stSca_ScChopper_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        if(SC1ALL_stSca_civof_B1)
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::red);
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::black);
        }
    }


    if(SC1ALL_stScb_tswsc_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlBKColor(Qt::red);
    }

    if(SC1ALL_stScb_caricaSc_B1)//充电
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        if( SC1ALL_stScb_scaricaSc_B1)//放电
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlBKColor(Qt::red);
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlBKColor(Qt::black);
        }
    }


    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText(QString::number((float)SC2ALL_iSc_I16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText(QString::number((float)SC2ALL_vFil_I16*0.1,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText(QString::number((float)SC2ALL_vSc_I16*0.1,1,0));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlText(QString::number(SC2ALL_stScb_U16,2));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlText(QString::number(SC2ALL_stScb_U16,2));


    if(SC2ALL_stSca_ScChopper_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        if(SC2ALL_stSca_civof_B1)
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::red);
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::black);
        }
    }

    if(SC2ALL_stSca_ccfca_B1 )
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::red);
    }

    if(SC2ALL_stSca_precharge_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::red);
    }

    if(SC2ALL_stSca_cpca_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::red);
    }

    if(SC2ALL_stSca_irca_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::red);
    }

    if(SC2ALL_stSca_autoEscl_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::red);
    }

    if(SC2ALL_stSca_cscca_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::red);
    }

    if(SC2ALL_stSca_ScChopper_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        if(SC2ALL_stSca_civof_B1)
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::red);
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::black);
        }
    }


    if(SC2ALL_stScb_tswsc_B1)
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlBKColor(Qt::red);
    }

    if(SC2ALL_stScb_caricaSc_B1)//充电
    {
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        if( SC2ALL_stScb_scaricaSc_B1)//放电
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlBKColor(Qt::red);
        }
        else
        {
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlBKColor(Qt::black);
        }
    }


//    GetDlgItem(IDLABEL_DCDCSTATE_TRAINNUM)->SetCtrlText(g_car1CodeStr);
//    if( pageNo==DCDC_MAX_PAGE )
//    {

//        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("downgray.png");
//        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("up.png");
//    }
//    else if( pageNo==DCDC_MIN_PAGE )
//    {

//        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("down.png");
//        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("upgray.png");
//    }
//    else
//    {

//        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("down.png");
//        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("up.png");
//    }
}
void CDcdcStatePage::OnDownButtonDown()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo<DCDC_MAX_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downpress.png");
//        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downgray.png");
//    }
}

void CDcdcStatePage::OnDownButtonUp()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo<DCDC_MAX_PAGE )
//    {
//        pageNo++;
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("down.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    if( pageNo==DCDC_MAX_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downgray.png");
//    }
//    ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("up.png");
}
void CDcdcStatePage::OnUpButtonDown()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo>DCDC_MIN_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("uppress.png");
//        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("upgray.png");
//    }
}

void CDcdcStatePage::OnUpButtonUp()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo>DCDC_MIN_PAGE )
//    {
//        pageNo--;
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("up.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    if( pageNo==DCDC_MIN_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("upgray.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("down.png");
}
void CDcdcStatePage::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_1))->SetAlignment(Qt::AlignLeft);

}
