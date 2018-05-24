#include "cfaultalarmpage.h"

ROMDATA g_PicRom_FaultAlarm[] =
{
//    /*string                font                            rc                  foreground color              background color                control type                   ID           */
//    {QSTR("故障报警"),      D_FONT(13),          QRect(0,0,640,60),                         Qt::black,              Qt::yellow,                 CONTROL_LABEL,            ID_PICFA_LABEL_TITLE      },
//    //H line
//    {"",                   D_DEFAULT_FONT,      QRect( 20, 150, 600,   1),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect( 20, 182, 600,   1),                  QColor(255,128,255),       Qt::gray,                    CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect( 20, 215, 600,   1),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect( 20, 455, 600,   1),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    //V line
//    {"",                   D_DEFAULT_FONT,      QRect( 20, 150,   1, 305),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect( 70, 150,   1,  65),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect(120, 150,   1, 305),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect(270, 150,   1,  65),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect(320, 150,   1,  65),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    {"",                   D_DEFAULT_FONT,      QRect(620, 150,   1, 305),                  Qt::white,                 Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                 },
//    //static label
//    {QSTR("故障数字："),    D_FONT(9),           QRect( 95,  85, 150,  40),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
//    {QSTR("故障车辆"),      D_FONT(6),           QRect( 22, 152,  45,  30),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
//    {QSTR("故障编码"),      D_FONT(6),           QRect( 72, 152,  45,  30),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
//    {QSTR("故障时间"),      D_FONT(6),           QRect(122, 152, 100,  30),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
//    {QSTR("故障等级"),      D_FONT(6),           QRect(272, 152,  45,  30),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
//    {QSTR("故障名称"),      D_FONT(6),           QRect(445, 152,  45,  30),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
//    {QSTR("解决方法"),      D_FONT(6),           QRect( 22, 330,  90,  30),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
//    //label
//    {"123456",             D_DEFAULT_FONT,      QRect( 22, 184,  46,  26),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_PICFA_LABEL_CAR        },
//    {"123456",             D_DEFAULT_FONT,      QRect( 72, 184,  46,  26),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_PICFA_LABEL_CODE       },
//    {"123456",             D_DEFAULT_FONT,      QRect(122, 184, 146,  26),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_PICFA_LABEL_DATETIME   },
//    {"123456",             D_DEFAULT_FONT,      QRect(272, 184,  46,  26),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_PICFA_LABEL_GRADE      },
//    {"123456",             D_DEFAULT_FONT,      QRect(322, 184, 296,  26),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_PICFA_LABEL_NAME       },

//    {"123456",             D_DEFAULT_FONT,      QRect(122, 330, 236,  26),                  Qt::yellow,                Qt::black,                  CONTROL_LABEL,            ID_PICFA_LABEL_SOLUTIONS  },

//    //up down button
//    {"down.png",           D_DEFAULT_FONT,      QRect(370,  70,  45,  70),                  Qt::yellow,                Qt::black,                  CONTROL_BMPBUTTON,        ID_PICFA_BUTTON_UP        },
//    {"up.png",             D_DEFAULT_FONT,      QRect(440,  70,  45,  70),                  Qt::yellow,                Qt::black,                  CONTROL_BMPBUTTON,        ID_PICFA_BUTTON_DOWN      },
//    {QSTR("确认"),         D_FONT_BOLD(10),     QRect(535,  80,  50,  50),                  Qt::yellow,                Qt::black,                  CONTROL_BUTTON,           ID_PICFA_BUTTON_OK        },

};
int g_FaultAlarmRomLen = sizeof(g_PicRom_FaultAlarm)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CFaultAlarmPage,CPage)
        ON_UPDATE_PAGE()
//        ON_LBUTTONDOWN(ID_PICFA_BUTTON_UP, OnDropButtonUpDown)
//        ON_LBUTTONDOWN(ID_PICFA_BUTTON_DOWN, OnDropButtonDownDown)
//        ON_LBUTTONDOWN(ID_PICFA_BUTTON_OK, OnOkDown)
//        ON_LBUTTONUP(ID_PICFA_BUTTON_UP, OnDropButtonUpUp)
//        ON_LBUTTONUP(ID_PICFA_BUTTON_DOWN, OnDropButtonDownUp)
//        ON_LBUTTONUP(ID_PICFA_BUTTON_OK, OnOkUp)
END_MESSAGE_MAP()

CFaultAlarmPage::CFaultAlarmPage()
{
}

//void CFaultAlarmPage::OnDropButtonUpDown()
//{
//    CBitmapButton *bitmapButton;

//    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICFA_BUTTON_UP);
//    bitmapButton->SetCtrlText("downpress.png");
//    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//}

//void CFaultAlarmPage::OnDropButtonDownDown()
//{
//    CBitmapButton *bitmapButton;

//    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICFA_BUTTON_DOWN);
//    bitmapButton->SetCtrlText("uppress.png");
//    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//}

//void CFaultAlarmPage::OnDropButtonUpUp()
//{
//    CBitmapButton *bitmapButton;

//    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICFA_BUTTON_UP);
//    bitmapButton->SetCtrlText("down.png");
//    bitmapButton->ChangeButtonState(LBUTTON_UP);
//}

//void CFaultAlarmPage::OnDropButtonDownUp()
//{
//    CBitmapButton *bitmapButton;

//    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICFA_BUTTON_DOWN);
//    bitmapButton->SetCtrlText("up.png");
//    bitmapButton->ChangeButtonState(LBUTTON_UP);
//}

//void CFaultAlarmPage::OnOkUp()
//{
//    ((CButton *)GetDlgItem(ID_PICFA_BUTTON_OK))->ChangeButtonState(LBUTTON_UP);
//}

//void CFaultAlarmPage::OnOkDown()
//{
//    ((CButton *)GetDlgItem(ID_PICFA_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
//}

void CFaultAlarmPage::OnUpdatePage()
{

}
