#include "ctcu2statepage.h"

ROMDATA g_PicRom_Tcu2State[] =
{
    /*string             font                 rc                                        foreground color             background color            control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"up.png",             D_DEFAULT_FONT,      QRect(50,   75, 60, 40),                  Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE2_TBLCHANGE},
  //H line
  {"",                   D_DEFAULT_FONT,      QRect(50,  125, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  155, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  185, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  215, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  245, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  275, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  305, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  335, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  //V line
  {"",                   D_DEFAULT_FONT,      QRect(50,  125, 1, 210),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(360,  125, 1, 210),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(470,  125, 1, 210),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(580,  125, 1, 210),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"0000",               D_DEFAULT_FONT,      QRect(440,70,60,15),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE2_CARNUM                },
  {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(QPoint(360,95),QPoint(580,124)),    Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                },

  {QSTR("信号名称"),                                   D_DEFAULT_FONT,      QRect(55,126,300,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("牵引使能不可用"),     D_DEFAULT_FONT,      QRect(55,156,300,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            IDLABEL_TCUSTATE2_2_1                },
  {QSTR("主断路器供电不可用"),    D_DEFAULT_FONT,      QRect(55,186,300,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            IDLABEL_TCUSTATE2_3_1                },
  {QSTR("撒沙请求"),                          D_DEFAULT_FONT,      QRect(55,216,300,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            IDLABEL_TCUSTATE2_4_1                },
  {QSTR("制动施加请求"),                  D_DEFAULT_FONT,      QRect(55,246,300,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            IDLABEL_TCUSTATE2_5_1                },
  {QSTR("限速请求"),                D_DEFAULT_FONT,      QRect(55,276,300,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            IDLABEL_TCUSTATE2_6_1                },
  {QSTR("牵引变流器冷却空开状态"),                      D_DEFAULT_FONT,      QRect(55,306,300,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            IDLABEL_TCUSTATE2_7_1                },

  {"Mc1",                 D_DEFAULT_FONT,      QRect(365,126,100,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            ID_IGNORE                },
  {"Mc2",                  D_DEFAULT_FONT,      QRect(475,126,100,28),                      Qt::yellow,                  Qt::black,                 CONTROL_LABEL,            ID_IGNORE                },

  {"",                   D_DEFAULT_FONT,      QRect(404,159,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_MC_INPUT     },
  {"",                   D_DEFAULT_FONT,      QRect(514,159,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_M_INPUT      },
  {"",                   D_DEFAULT_FONT,      QRect(404,189,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_MC_SUPPLY           },
  {"",                   D_DEFAULT_FONT,      QRect(514,189,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_M_SUPPLY            },
  {"",                   D_DEFAULT_FONT,      QRect(404,219,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_MC_SANDING           },
  {"",                   D_DEFAULT_FONT,      QRect(514,219,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_M_SANDING            },
  {"",                   D_DEFAULT_FONT,      QRect(404,249,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_MC_BRAKE          },
  {"",                   D_DEFAULT_FONT,      QRect(514,249,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_M_BRAKE           },
  {"",                   D_DEFAULT_FONT,      QRect(404,279,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_MC_SPEED          },
  {"",                   D_DEFAULT_FONT,      QRect(514,279,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_M_SPEED           },
  {"",                   D_DEFAULT_FONT,      QRect(404,309,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_MC_Q              },
  {"",                   D_DEFAULT_FONT,      QRect(514,309,22,22),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            ID_TCUSTATE2_M_Q               },

  D_LAYER1_NAVIGATION_BAR
};
int g_Tcu2StateRomLen = sizeof(g_PicRom_Tcu2State)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTcu2StatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_TCUSTATE2_TBLCHANGE, OnUpButtonDown)
        ON_LBUTTONUP(ID_TCUSTATE2_TBLCHANGE, OnUpButtonUp)
END_MESSAGE_MAP()

CTcu2StatePage::CTcu2StatePage()
{
}

void CTcu2StatePage::OnUpdatePage()
{
    GetDlgItem(ID_TCUSTATE2_CARNUM)->SetCtrlText(g_car1Code);

    if( CAR1_TCU_MC_SPEEDRESTRICTIONDEMAND_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_SPEED))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_SPEED))->SetLabelState(3);

    if( CAR1_TCU_MC_AUTOMATICBRAKEDEMAND_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_BRAKE))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_BRAKE))->SetLabelState(3);

    if( CAR1_TCU_MC_SANDINGDEMAND_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_SANDING))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_SANDING))->SetLabelState(3);

    if( CAR1_TCU_MC_TRACTIONENABLEINPUTNAVAILABLE_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_INPUT))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_INPUT))->SetLabelState(3);

    if( CAR1_TCU_MC_MAINCONTACTORSUPPLYNOTAVAILABLE_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_SUPPLY))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_SUPPLY))->SetLabelState(3);

    if( CAR1_IO_MC_TCUCOOLNULLOPENSTATE_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_Q))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_MC_Q))->SetLabelState(3);

    if( CAR1_TCU_M_SPEEDRESTRICTIONDEMAND_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_SPEED))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_SPEED))->SetLabelState(3);

    if( CAR1_TCU_M_AUTOMATICBRAKEDEMAND_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_BRAKE))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_BRAKE))->SetLabelState(3);

    if( CAR1_TCU_M_SANDINGDEMAND_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_SANDING))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_SANDING))->SetLabelState(3);

    if( CAR1_TCU_M_TRACTIONENABLEINPUTNAVAILABLE_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_INPUT))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_INPUT))->SetLabelState(3);

    if( CAR1_TCU_M_MAINCONTACTORSUPPLYNOTAVAILABLE_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_SUPPLY))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_SUPPLY))->SetLabelState(3);

    if( CAR1_IO_M_TCUCOOLNULLOPENSTATE_BOOL )
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_Q))->SetLabelState(0);
    else
        ((CLabel*)GetDlgItem(ID_TCUSTATE2_M_Q))->SetLabelState(3);
}

void CTcu2StatePage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

void CTcu2StatePage::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE2_TBLCHANGE);
    bitmapButton->SetCtrlText("uppress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CTcu2StatePage::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;
    CButton *pButton;
    CPage* pPage;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE2_TBLCHANGE);
    bitmapButton->SetCtrlText("up.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);

    ChangePage(PAGE_ROM_INDEX_TCUSTATE);
    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pButton = (CButton*)(pPage->GetDlgItem(IDBTN_NAVIBAR_TCU));
    pButton->ChangeButtonState(LBUTTON_DOWN);
}

void CTcu2StatePage::OnInitPage()
{
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE2_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE2_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE2_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE2_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE2_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE2_7_1))->SetAlignment(Qt::AlignLeft);
}
