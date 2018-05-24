#include "chvacstate1page.h"

extern vector<CPage*> g_PageVec;

ROMDATA g_PicRom_HvacState1[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"down.png",           D_DEFAULT_FONT,      QRect(50,   75, 60, 40),                  Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_HVACSTATE1_DROPDPWN  },
  {"0000",               D_DEFAULT_FONT,      QRect(440,70,60,15),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_HVACSTATE1_TRAINCODE },
  {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(QPoint(360,95),QPoint(580,124)),    Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                   },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect(50,  125, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  155, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  185, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  215, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  245, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  275, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  305, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  335, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  365, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(50,  395, 530, 1),                  Qt::cyan,                    Qt::gray,                 CONTROL_LINE,             ID_IGNORE                },
  // V line
  {" ",                   D_DEFAULT_FONT,     QRect( 50,125,1,270),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
  {" ",                   D_DEFAULT_FONT,     QRect(360,125,1,270),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
  {" ",                   D_DEFAULT_FONT,     QRect(470,125,1,270),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
  {" ",                   D_DEFAULT_FONT,     QRect(580,125,1,270),                    Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},

  {QSTR("信号名称"),                D_DEFAULT_FONT,                    QRect(55,126,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
  {"Mc1",                          D_DEFAULT_FONT,                    QRect(365,126,100,28),                   Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
  {"Mc2",                          D_DEFAULT_FONT,                    QRect(475,126,100,28),                   Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},

  {QSTR("外部温度"),                D_DEFAULT_FONT,                    QRect(55,156,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_2_1},
  {QSTR("内部温度"),                D_DEFAULT_FONT,                    QRect(55,186,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_3_1},
  {QSTR("通风机工作状态"),           D_DEFAULT_FONT,                    QRect(55,216,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_4_1},
  {QSTR("冷凝风机工作状态"),         D_DEFAULT_FONT,                    QRect(55,246,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_5_1},
  {QSTR("压缩机工作状态"),           D_DEFAULT_FONT,                    QRect(55,276,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_6_1},
  {QSTR("电加热工作状态"),           D_DEFAULT_FONT,                    QRect(55,306,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_7_1},
  {QSTR("本控状态"),                D_DEFAULT_FONT,                    QRect(55,336,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_8_1},
  {QSTR("网控状态"),                D_DEFAULT_FONT,                    QRect(55,366,300,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_9_1},

  {"0.0",                  D_DEFAULT_FONT,                    QRect(365,156,100,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_2_3},
  {"0.0",                  D_DEFAULT_FONT,                    QRect(475,156,100,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_2_4},
  {"0.0",                  D_DEFAULT_FONT,                    QRect(365,186,100,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_3_3},
  {"0.0",                  D_DEFAULT_FONT,                    QRect(475,186,100,28),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_HVACSTATE1_3_4},

  {"1",                    D_DEFAULT_FONT,                    QRect(444-56,220,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_4_3L},
  {"2",                    D_DEFAULT_FONT,                    QRect(476-56,220,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_4_3R},
  {"",                    D_DEFAULT_FONT,                    QRect(460-56,250,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_5_3},
  {"1",                    D_DEFAULT_FONT,                    QRect(444-56,280,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_6_3L},
  {"2",                    D_DEFAULT_FONT,                    QRect(476-56,280,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_6_3R},
  {"1",                    D_DEFAULT_FONT,                    QRect(444-56,310,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_7_3L},
  {"2",                    D_DEFAULT_FONT,                    QRect(476-56,310,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_7_3R},
  {"",                    D_DEFAULT_FONT,                    QRect(460-56,340,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_8_3},
  {"",                    D_DEFAULT_FONT,                    QRect(460-56,370,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_9_3},

  {"1",                    D_DEFAULT_FONT,                    QRect(517-20,220,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_4_4L},
  {"2",                    D_DEFAULT_FONT,                    QRect(549-20,220,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_4_4R},
  {"",                    D_DEFAULT_FONT,                    QRect(533-20,250,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_5_4},
  {"1",                    D_DEFAULT_FONT,                    QRect(517-20,280,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_6_4L},
  {"2",                    D_DEFAULT_FONT,                    QRect(549-20,280,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_6_4R},
  {"1",                    D_DEFAULT_FONT,                    QRect(517-20,310,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_7_4L},
  {"2",                    D_DEFAULT_FONT,                    QRect(549-20,310,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_7_4R},
  {"",                    D_DEFAULT_FONT,                    QRect(533-20,340,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_8_4},
  {"",                    D_DEFAULT_FONT,                    QRect(533-20,370,20,20),                    Qt::black,                    Qt::gray,                    CONTROL_LABEL,                    ID_HVACSTATE1_9_4},
  D_LAYER2_NAVIGATION_BAR_HVAC
};
int g_HvacState1RomLen = sizeof(g_PicRom_HvacState1)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CHvacState1Page,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_HVACSTATE1_DROPDPWN, OnUpButtonDown)
        ON_LBUTTONUP(ID_HVACSTATE1_DROPDPWN, OnUpButtonUp)
END_MESSAGE_MAP()

CHvacState1Page::CHvacState1Page()
{
}
/*
bool parameter state:
0: green background color, black text->Ok
3: gray background color, black text->NG
temperature -128~127
*/
void CHvacState1Page::OnUpdatePage()
{
    GetDlgItem(ID_HVACSTATE1_TRAINCODE)->SetCtrlText(g_car1Code);

//    if ( CAR1_HVAC_MC_EVAPRATORFAN1STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_3L))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_3L))->SetLabelState(3);

//    if ( CAR1_HVAC_MC_EVAPRATORFAN2STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_3R))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_3R))->SetLabelState(3);

//    if ( CAR1_HVAC_M_EVAPRATORFAN1STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_4L))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_4L))->SetLabelState(3);

//    if ( CAR1_HVAC_M_EVAPRATORFAN2STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_4R))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_4R))->SetLabelState(3);

//    if( CAR1_HVAC_MC_CONDENSERFANSTATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_5_3))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_5_3))->SetLabelState(3);

//    if( CAR1_HVAC_M_CONDENSERFANSTATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_5_4))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_5_4))->SetLabelState(3);

//    if( CAR1_HVAC_MC_COMPRESSOR1STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_3L))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_3L))->SetLabelState(3);

//    if( CAR1_HVAC_MC_COMPRESSOR2STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_3R))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_3R))->SetLabelState(3);

//    if( CAR1_HVAC_M_COMPRESSOR1STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_4L))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_4L))->SetLabelState(3);

//    if( CAR1_HVAC_M_COMPRESSOR2STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_4R))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_4R))->SetLabelState(3);


//    if( CAR1_HVAC_MC_HEATER1STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_3L))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_3L))->SetLabelState(3);

//    if( CAR1_HVAC_MC_HEATER2STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_3R))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_3R))->SetLabelState(3);

//    if( CAR1_HVAC_M_HEATER1STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_4L))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_4L))->SetLabelState(3);

//    if( CAR1_HVAC_M_HEATER2STATUS_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_4R))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_4R))->SetLabelState(3);


//    if( CAR1_HVAC_MC_COMPRESSORSTARTUPREQUEST_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_8_3))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_8_3))->SetLabelState(3);

//    if( CAR1_HVAC_M_COMPRESSORSTARTUPREQUEST_BOOL )
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_8_4))->SetLabelState(0);
//    else
//        ((CLabel*)GetDlgItem(ID_HVACSTATE1_8_4))->SetLabelState(3);

//    GetDlgItem(ID_HVACSTATE1_2_3)->SetCtrlText(mRound( (qint8)CAR1_HVACSTATE_MCMCAB_TEMPOUTSIDE_QINT8, 0 ));
//    GetDlgItem(ID_HVACSTATE1_2_4)->SetCtrlText(mRound( (qint8)CAR1_HVACSTATE_MCMCAB_TEMPOUTSIDE_QINT8, 0 ));
//    GetDlgItem(ID_HVACSTATE1_3_3)->SetCtrlText( mRound( (qint8)CAR1_HVACSTATE_MC_TEMPINSIDE_QINT8, 0 ));
//    GetDlgItem(ID_HVACSTATE1_3_4)->SetCtrlText( mRound( (qint8)CAR1_HVACSTATE_M_TEMPINSIDE_QINT8, 0 ));
}

void CHvacState1Page::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

void CHvacState1Page::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE1_DROPDPWN);

    bitmapButton->SetCtrlText("downpress.png");

    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacState1Page::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE1_DROPDPWN);
    bitmapButton->SetCtrlText("down.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);

    ChangePage(PAGE_ROM_INDEX_HVACSTATE2);

    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    CButton* pButton = (CButton*)(pPage->GetDlgItem(IDBTN_NAVIBAR_HVACSTATE));
    pButton->ChangeButtonState(LBUTTON_DOWN);
}

void CHvacState1Page::OnInitPage()
{
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_HVACSTATE1_9_1))->SetAlignment(Qt::AlignLeft);
}
