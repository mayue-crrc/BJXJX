#include "chvacstate2page.h"

ROMDATA g_PicRom_HvacState2[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"up.png",             D_DEFAULT_FONT,      QRect(50,   75, 60, 40),                  Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICHS_BUTTON_UP  },
  {"0000",               D_DEFAULT_FONT,      QRect(440,70,60,15),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICHS_LABEL_MC_CARNUM },
  {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(QPoint(360,95),QPoint(580,124)),    Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                   },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect(50,  125, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  150, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  175, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  200, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  225, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  250, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  275, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  300, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  325, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  350, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  375, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  400, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  425, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  // V line
  {" ",                   D_DEFAULT_FONT,     QRect( 50,125,1,300),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
  {" ",                   D_DEFAULT_FONT,     QRect(360,125,1,300),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
  {" ",                   D_DEFAULT_FONT,     QRect(470,125,1,300),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
  {" ",                   D_DEFAULT_FONT,     QRect(580,125,1,300),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},

  {QSTR("信号名称"),                  D_DEFAULT_FONT,       QRect(55,126,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE},
  {"Mc1",                            D_DEFAULT_FONT,       QRect(365,126,100,23),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE},
  {"Mc2",                            D_DEFAULT_FONT,       QRect(475,126,100,23),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE},

  {QSTR("自动冷"),                      D_DEFAULT_FONT,      QRect( 55,151,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_2_1                 },
  {QSTR("自动暖"),                      D_DEFAULT_FONT,      QRect( 55,176,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_3_1                 },
  {QSTR("通风"),                      D_DEFAULT_FONT,      QRect( 55,201,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_4_1                 },
  {QSTR("紧急通风"),                      D_DEFAULT_FONT,      QRect( 55,226,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_5_1                 },
  {QSTR("停止"),                  D_DEFAULT_FONT,      QRect( 55,251,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_6_1                 },
  {QSTR("满载反馈"),           D_DEFAULT_FONT,      QRect( 55,276,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_7_1                 },
  {QSTR("预冷"),               D_DEFAULT_FONT,      QRect( 55,301,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_8_1                 },
  {QSTR("预暖"),                  D_DEFAULT_FONT,      QRect( 55,326,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_9_1                 },
  {QSTR("新风阀状态"),                     D_DEFAULT_FONT,      QRect( 55,351,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_10_1                 },
  {QSTR("回风阀状态"),                     D_DEFAULT_FONT,      QRect( 55,376,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_11_1                 },
  {QSTR("软件版本"),                     D_DEFAULT_FONT,      QRect( 55,401,300,23),                  Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE2_12_1                 },
  
  //red rect
  {"",                   D_DEFAULT_FONT,      QRect(405,152,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_AUTO          },
  {"",                   D_DEFAULT_FONT,      QRect(513,152,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_AUTO           },
  {"",                   D_DEFAULT_FONT,      QRect(405,177,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_STRONGCOOL    },
  {"",                   D_DEFAULT_FONT,      QRect(513,177,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_STRONGCOOL     },
  {"",                   D_DEFAULT_FONT,      QRect(405,202,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_WEAKCOOL      },
  {"",                   D_DEFAULT_FONT,      QRect(513,202,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_WEAKCOOL       },
  {"",                   D_DEFAULT_FONT,      QRect(405,227,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_VENTILATION   },
  {"",                   D_DEFAULT_FONT,      QRect(513,227,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_VENTILATION    },
  {"",                   D_DEFAULT_FONT,      QRect(405,252,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_EVENTILATION  },
  {"",                   D_DEFAULT_FONT,      QRect(513,252,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_EVENTILATION   },
  {"",                   D_DEFAULT_FONT,      QRect(405,277,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_POWERFLR      },
  {"",                   D_DEFAULT_FONT,      QRect(513,277,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_POWERFLR       },
  {"",                   D_DEFAULT_FONT,      QRect(405,302,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_HTEMPFAIR     },
  {"",                   D_DEFAULT_FONT,      QRect(513,302,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_HTEMPFAIR      },
  {"",                   D_DEFAULT_FONT,      QRect(405,327,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_HTEMPENVION   },
  {"",                   D_DEFAULT_FONT,      QRect(513,327,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_HTEMPENVION    },
  {"",                   D_DEFAULT_FONT,      QRect(405,352,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_WEAKHEATING   },
  {"",                   D_DEFAULT_FONT,      QRect(513,352,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_WEAKHEATING    },
  {"",                   D_DEFAULT_FONT,      QRect(405,377,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_STRONGHEATING },
  {"",                   D_DEFAULT_FONT,      QRect(513,377,20,20),                   Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_STRONGHEATING  },
  {"",                   D_DEFAULT_FONT,      QRect(405,402,20,20),                   Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICHS_LABEL_MC_STOP          },
  {"",                   D_DEFAULT_FONT,      QRect(513,402,20,20),                   Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_PICHS_LABEL_M_STOP           },

  D_LAYER2_NAVIGATION_BAR_HVAC
};
int g_HvacState2RomLen = sizeof(g_PicRom_HvacState2)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CHvacState2Page,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICHS_BUTTON_UP, OnUpButtonDown)
        ON_LBUTTONUP(ID_PICHS_BUTTON_UP, OnUpButtonUp)
END_MESSAGE_MAP()

CHvacState2Page::CHvacState2Page()
{
}

void CHvacState2Page::OnUpdatePage()
{

    GetDlgItem(ID_PICHS_LABEL_MC_CARNUM)->SetCtrlText(g_car1Code);

    if( CAR1_HVAC_MC_AUTOMODE_BOOL )
       ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_AUTO))->SetLabelState(0);
    else
       ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_AUTO))->SetLabelState(3);

    if( CAR1_HVAC_MC_STRONGCOOLINGMODE_BOOL )
       ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_STRONGCOOL))->SetLabelState(0);
    else
       ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_STRONGCOOL))->SetLabelState(3);

    if( CAR1_HVAC_MC_WEAKCOOLINGMODE_BOOL )
       ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_WEAKCOOL))->SetLabelState(0);
    else
       ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_WEAKCOOL))->SetLabelState(3);

    if( CAR1_HVAC_MC_VENTILATIONMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_VENTILATION))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_VENTILATION))->SetLabelState(3);

    if( CAR1_HVAC_MC_EMERGENCYVENTILATIONMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_EVENTILATION))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_EVENTILATION))->SetLabelState(3);

    if( CAR1_HVAC_MC_POWERFAILURELOADREDUCTIONMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_POWERFLR))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_POWERFLR))->SetLabelState(3);

    if( CAR1_HVAC_MC_HIGHTEMPERATUREFRESHAIRHALVINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_HTEMPFAIR))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_HTEMPFAIR))->SetLabelState(3);

    if( CAR1_HVAC_MC_HIGHTEMPERATUREENVIORMENTUPLOADINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_HTEMPENVION))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_HTEMPENVION))->SetLabelState(3);

    if( CAR1_HVAC_MC_WEAKHEATINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_WEAKHEATING))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_WEAKHEATING))->SetLabelState(3);

    if( CAR1_HVAC_MC_STRONGHEATINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_STRONGHEATING))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_STRONGHEATING))->SetLabelState(3);

    if( CAR1_HVAC_MC_STOPMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_STOP))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_MC_STOP))->SetLabelState(3);

    if( CAR1_HVAC_M_AUTOMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_AUTO))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_AUTO))->SetLabelState(3);

    if( CAR1_HVAC_M_STRONGCOOLINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_STRONGCOOL))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_STRONGCOOL))->SetLabelState(3);

    if( CAR1_HVAC_M_WEAKCOOLINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_WEAKCOOL))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_WEAKCOOL))->SetLabelState(3);

    if( CAR1_HVAC_M_VENTILATIONMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_VENTILATION))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_VENTILATION))->SetLabelState(3);

    if( CAR1_HVAC_M_EMERGENCYVENTILATIONMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_EVENTILATION))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_EVENTILATION))->SetLabelState(3);

    if( CAR1_HVAC_M_POWERFAILURELOADREDUCTIONMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_POWERFLR))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_POWERFLR))->SetLabelState(3);

    if( CAR1_HVAC_M_HIGHTEMPERATUREFRESHAIRHALVINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_HTEMPFAIR))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_HTEMPFAIR))->SetLabelState(3);

    if( CAR1_HVAC_M_HIGHTEMPERATUREENVIORMENTUPLOADINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_HTEMPENVION))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_HTEMPENVION))->SetLabelState(3);

    if( CAR1_HVAC_M_WEAKHEATINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_WEAKHEATING))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_WEAKHEATING))->SetLabelState(3);

    if( CAR1_HVAC_M_STRONGHEATINGMODE_BOOL )
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_STRONGHEATING))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_STRONGHEATING))->SetLabelState(3);


    ((CLabel*)GetDlgItem(ID_PICHS_LABEL_M_STOP))->SetCtrlText("12.4");

}

void CHvacState2Page::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CHvacState2Page::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICHS_BUTTON_UP);
    bitmapButton->SetCtrlText("uppress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacState2Page::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICHS_BUTTON_UP);
    bitmapButton->SetCtrlText("up.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);

    ChangePage(PAGE_ROM_INDEX_HVACSTATE1);
}

void CHvacState2Page::OnInitPage()
{
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_HVACSTATE2_12_1))->SetAlignment(Qt::AlignLeft);
}
