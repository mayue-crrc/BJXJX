#include "chistoryfaultlistpage.h"
#include "cfaultdetaildialog.h"

//#define CURRENT_DATA_TIME QDateTime::currentDateTime().toString("HH:mm:ss")

int diplay_historyfaults_idx_array[9];

ROMDATA g_PicRom_HistoryFaultList[] =
{
    /*string                font                            rc                  foreground color           background color    control type                   ID           */
    //H line
    {QSTR("历史故障"),     D_COMMON_TITLE_FONT,             QRect(0,0, 640, 35),       Qt::black,                      Qt::yellow,                CONTROL_LABEL,            ID_IGNORE         },


    {"",                   D_DEFAULT_FONT,      QRect( 20, 100+40, 600, 1),                  Qt::white,       Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 130+40, 600, 1),                  Qt::cyan,        Qt::gray,           CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 160+40, 600, 1),                  Qt::white,       Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 190+40, 600, 1),                  Qt::cyan,        Qt::gray,           CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 220+40,600, 1),                  Qt::white,       Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 250+40,600, 1),                  Qt::cyan,        Qt::gray,           CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 280+40,600, 1),                  Qt::white,       Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 310+40,600, 1),                  Qt::cyan,        Qt::gray,           CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 340+40,600, 1),                  Qt::white,       Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 370+40,600, 1),                  Qt::cyan,        Qt::gray,           CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 20, 400+40,600, 1),                  Qt::white,       Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },

    //V line
    {"",                   D_DEFAULT_FONT,      QRect( 20, 100+40,    1, 300),                  Qt::white,     Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect( 70, 100+40,    1, 300),                  Qt::white,     Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect(120, 100+40,    1, 300),                  Qt::white,     Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect(270, 100+40,    1, 300),                  Qt::white,     Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect(320, 100+40,    1, 300),                  Qt::white,     Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT,      QRect(620, 100+40,    1, 300),                  Qt::white,     Qt::yellow,         CONTROL_LINE,             ID_IGNORE                 },

    //static label
    {QSTR("车号"),            D_FONT(6),           QRect( 22, 102+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("代码"),               D_FONT(6),           QRect( 72, 102+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("时间"),           D_FONT(6),           QRect(130, 102+40, 120,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("等级"),              D_FONT(6),           QRect(272, 102+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("故障名称"),               D_FONT(6),           QRect(430, 102+40,    106,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_IGNORE                 },

    //other labels
//    {"All",                D_FONT(6),           QRect( 85,  15,  40,  35),                   Qt::yellow,   Qt::black,          CONTROL_LABEL,           ID_PICHFL_LABEL_CAR         },
    {QSTR("全部"),                D_COMMON_TITLE_FONT,           QRect( 85,  55+40,    80,  35),                   Qt::yellow,   Qt::black,          CONTROL_LABEL,           ID_PICHFL_LABEL_DEVICE      },
    {QSTR("全部"),                D_COMMON_TITLE_FONT,           QRect( 85,  15+40,    80,  35),                   Qt::yellow,   Qt::black,          CONTROL_LABEL,           ID_PICHFL_LABEL_GRADE       },
    {QSTR("全部"),                D_COMMON_TITLE_FONT,           QRect(337,  15+40,    120,  35),                   Qt::yellow,   Qt::black,          CONTROL_LABEL,           ID_PICHFL_LABEL_START_TIME  },
    {QSTR("全部"),                D_COMMON_TITLE_FONT,           QRect(337,  55+40,    120,  35),                   Qt::yellow,   Qt::black,          CONTROL_LABEL,           ID_PICHFL_LABEL_END_TIME    },

    {"123456",             D_FONT(6),           QRect( 22, 132+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_1_1       },
    {"123456",             D_FONT(6),           QRect( 72, 132+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_1_2       },
    {"123456",             D_FONT(6),           QRect(122, 132+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_1_3       },
    {"123456",             D_FONT(6),           QRect(272, 132+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_1_4       },
    {"123456",             D_FONT(6),           QRect(322, 132+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_1_5       },

    {"123456",             D_FONT(6),           QRect( 22, 162+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_2_1       },
    {"123456",             D_FONT(6),           QRect( 72, 162+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_2_2       },
    {"123456",             D_FONT(6),           QRect(122, 162+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_2_3       },
    {"123456",             D_FONT(6),           QRect(272, 162+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_2_4       },
    {"123456",             D_FONT(6),           QRect(322, 162+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_2_5       },

    {"123456",             D_FONT(6),           QRect( 22, 192+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_3_1       },
    {"123456",             D_FONT(6),           QRect( 72, 192+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_3_2       },
    {"123456",             D_FONT(6),           QRect(122, 192+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_3_3       },
    {"123456",             D_FONT(6),           QRect(272, 192+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_3_4       },
    {"123456",             D_FONT(6),           QRect(322, 192+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_3_5       },

    {"123456",             D_FONT(6),           QRect( 22, 222+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_4_1       },
    {"123456",             D_FONT(6),           QRect( 72, 222+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_4_2       },
    {"123456",             D_FONT(6),           QRect(122, 222+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_4_3       },
    {"123456",             D_FONT(6),           QRect(272, 222+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_4_4       },
    {"123456",             D_FONT(6),           QRect(322, 222+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_4_5       },

    {"123456",             D_FONT(6),           QRect( 22, 252+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_5_1       },
    {"123456",             D_FONT(6),           QRect( 72, 252+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_5_2       },
    {"123456",             D_FONT(6),           QRect(122, 252+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_5_3       },
    {"123456",             D_FONT(6),           QRect(272, 252+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_5_4       },
    {"123456",             D_FONT(6),           QRect(322, 252+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_5_5       },

    {"123456",             D_FONT(6),           QRect( 22, 282+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_6_1       },
    {"123456",             D_FONT(6),           QRect( 72, 282+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_6_2       },
    {"123456",             D_FONT(6),           QRect(122, 282+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_6_3       },
    {"123456",             D_FONT(6),           QRect(272, 282+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_6_4       },
    {"123456",             D_FONT(6),           QRect(322, 282+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_6_5       },

    {"123456",             D_FONT(6),           QRect( 22, 312+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_7_1       },
    {"123456",             D_FONT(6),           QRect( 72, 312+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_7_2       },
    {"123456",             D_FONT(6),           QRect(122, 312+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_7_3       },
    {"123456",             D_FONT(6),           QRect(272, 312+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_7_4       },
    {"123456",             D_FONT(6),           QRect(322, 312+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_7_5       },

    {"123456",             D_FONT(6),           QRect( 22, 342+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_8_1       },
    {"123456",             D_FONT(6),           QRect( 72, 342+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_8_2       },
    {"123456",             D_FONT(6),           QRect(122, 342+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_8_3       },
    {"123456",             D_FONT(6),           QRect(272, 342+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_8_4       },
    {"123456",             D_FONT(6),           QRect(322, 342+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_8_5       },

    {"123456",             D_FONT(6),           QRect( 22, 372+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_9_1       },
    {"123456",             D_FONT(6),           QRect( 72, 372+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_9_2       },
    {"123456",             D_FONT(6),           QRect(122, 372+40,    146,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_9_3       },
    {"123456",             D_FONT(6),           QRect(272, 372+40,    46,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_9_4       },
    {"123456",             D_FONT(6),           QRect(322, 372+40,    296,  26),                  Qt::yellow,    Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_9_5       },
    //button
//    {"Vehicle",            D_COMMON_TITLE_FONT,      QRect( 20,  15+40,   60,  35),                   Qt::yellow,                Qt::black,                CONTROL_BUTTON,           ID_PICHFL_BUTTON_CAR         },
    {QSTR("类型"),             D_COMMON_TITLE_FONT,      QRect( 20,  55+40,   60,  35),                   Qt::yellow,                Qt::black,                CONTROL_BUTTON,           ID_PICHFL_BUTTON_DEVICE      },
    {QSTR("等级"),              D_COMMON_TITLE_FONT,      QRect( 20,  15+40,   60,  35),                   Qt::yellow,                Qt::black,                CONTROL_BUTTON,           ID_PICHFL_BUTTON_GRADE       },
    {QSTR("开始时间"),         D_COMMON_TITLE_FONT,      QRect(240,  15+40,   92,  35),                   Qt::yellow,                Qt::black,                CONTROL_BUTTON,           ID_PICHFL_BUTTON_START_TIME  },
    {QSTR("结束时间"),           D_COMMON_TITLE_FONT,      QRect(240,  55+40,   92,  35),                   Qt::yellow,                Qt::black,                CONTROL_BUTTON,           ID_PICHFL_BUTTON_END_TIME    },
//  {"Query",              D_COMMON_TITLE_FONT,      QRect(485,  15+40,   60,  35),                   Qt::yellow,                Qt::black,                CONTROL_BUTTON,           ID_PICHFL_BUTTON_QUERY       },
    {QSTR("清除"),            D_COMMON_TITLE_FONT,      QRect(513,  15+40,   107,  35),                   Qt::yellow,                Qt::black,                CONTROL_BUTTON,           ID_PICHFL_BUTTON_DEFAULT     },

    {"down.png"  ,         D_DEFAULT_FONT,      QRect(513,  55+40,   50,  42),                  Qt::yellow,   Qt::black,          CONTROL_BMPBUTTON,        ID_PICHFL_BUTTON_UP          },
    {"up.png",             D_DEFAULT_FONT,      QRect(573,  55+40,   50,  42),                  Qt::yellow,   Qt::black,          CONTROL_BMPBUTTON,        ID_PICHFL_BUTTON_DOWN        },

    {"1/1",                D_COMMON_TITLE_FONT,           QRect(460, 60+40, 50, 25),                     Qt::yellow,   Qt::black,          CONTROL_LABEL,            ID_PICHFL_LABEL_PAGENUM     },

    {QSTR("退出"),          D_FONT(8),            QRect(578, 445, 53, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         ID_PICHFL_LABEL_QUIT            },

    //D_LAYER2_NAVIGATION_BAR_MAINTAIN
};

int g_HistoryFaultListRomLen = sizeof(g_PicRom_HistoryFaultList)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CHistoryFaultListPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_UP, OnDropButtonUpDown)
        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_DOWN, OnDropButtonDownDown)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_UP, OnDropButtonUpUp)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_DOWN, OnDropButtonDownUp)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_QUIT , OnCommonQuitButtonDown)

//        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_CAR,OnCarDown)
        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_DEVICE,OnDeviceDown)
        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_GRADE,OnGradeDown)
        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_START_TIME,OnStartTimeDown)
        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_END_TIME,OnEndTimeDown)
//      ON_LBUTTONDOWN(ID_PICHFL_BUTTON_QUERY,OnQueryDown)
        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_DEFAULT,OnDefaultDown)

//        ON_LBUTTONUP(ID_PICHFL_BUTTON_CAR,OnCarUp)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_DEVICE,OnDeviceUp)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_GRADE,OnGradeUp)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_START_TIME,OnStartTimeUp)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_END_TIME,OnEndTimeUp)
//      ON_LBUTTONUP(ID_PICHFL_BUTTON_QUERY,OnQueryUp)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_DEFAULT,OnDefaultUp)

        ON_LBUTTONDOWN(ID_PICHFL_LABEL_1_5,OnDetailClick1)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_2_5,OnDetailClick2)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_3_5,OnDetailClick3)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_4_5,OnDetailClick4)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_5_5,OnDetailClick5)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_6_5,OnDetailClick6)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_7_5,OnDetailClick7)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_8_5,OnDetailClick8)
        ON_LBUTTONDOWN(ID_PICHFL_LABEL_9_5,OnDetailClick9)

        ON_LBUTTONDOWN(ID_PICHFL_BUTTON_DELETE_ALL, OnDeleteAllDown)
        ON_LBUTTONUP(ID_PICHFL_BUTTON_DELETE_ALL, OnDeleteAllUp)

        END_MESSAGE_MAP()

CHistoryFaultListPage::CHistoryFaultListPage()
{
    m_eligiblecount = 0;
}

void CHistoryFaultListPage::OnShowPage()
{
    g_history_faults_pagenum = 1;
}

void CHistoryFaultListPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CHistoryFaultListPage::OnDropButtonUpDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICHFL_BUTTON_UP);
    bitmapButton->SetCtrlText("downpress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CHistoryFaultListPage::OnDropButtonDownDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICHFL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("uppress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CHistoryFaultListPage::OnDropButtonUpUp()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICHFL_BUTTON_UP);
    bitmapButton->SetCtrlText("down.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);

    int nMaxPageNum = m_eligiblecount/9 + ((m_eligiblecount%9 != 0) ? 1 : 0);

    if (g_history_faults_pagenum < /*m_eligiblecount/9 + 1*/nMaxPageNum)
    {
        g_history_faults_pagenum += 1;
    }
    // 20110206 modify: display 0/1,0/2....
    if( nMaxPageNum>0 && g_history_faults_pagenum==0 )
        g_history_faults_pagenum = 1;
    QString str;
    str.sprintf("%d/%d", g_history_faults_pagenum, /*m_eligiblecount/9 + 1*/nMaxPageNum);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_PAGENUM))->SetCtrlText(str);
}

void CHistoryFaultListPage::OnDropButtonDownUp()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICHFL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("up.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);

    if (g_history_faults_pagenum > 1)
    {
        g_history_faults_pagenum -= 1;
    }

    int nMaxPageNum = m_eligiblecount/9 + ((m_eligiblecount%9 != 0) ? 1 : 0);
    // 20110206 modify: display 0/1,0/2....
    if( nMaxPageNum>0 && g_history_faults_pagenum==0 )
        g_history_faults_pagenum = 1;
    QString str;
    str.sprintf("%d/%d", g_history_faults_pagenum, /*m_eligiblecount/9 + 1*/nMaxPageNum);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_PAGENUM))->SetCtrlText(str);
}

//void CHistoryFaultListPage::OnCarDown()
//{
//    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_CAR))->ChangeButtonState(LBUTTON_DOWN);
//}

void CHistoryFaultListPage::OnDeviceDown()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_DEVICE))->ChangeButtonState(LBUTTON_DOWN);
}

void CHistoryFaultListPage::OnGradeDown()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_GRADE))->ChangeButtonState(LBUTTON_DOWN);
}

void CHistoryFaultListPage::OnStartTimeDown()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_START_TIME))->ChangeButtonState(LBUTTON_DOWN);
}

void CHistoryFaultListPage::OnEndTimeDown()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_END_TIME))->ChangeButtonState(LBUTTON_DOWN);
}

//void CHistoryFaultListPage::OnQueryDown()
//{
//    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_QUERY))->ChangeButtonState(LBUTTON_DOWN);
//}

void CHistoryFaultListPage::OnDefaultDown()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_DEFAULT))->ChangeButtonState(LBUTTON_DOWN);
}

//void CHistoryFaultListPage::OnCarUp()
//{
//    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_CAR))->ChangeButtonState(LBUTTON_UP);
//    g_invoke_type = E_INVOKE_HISTORY;
//    ChangePage(PAGE_ROM_INDEX_CARSELECT);
//}

void CHistoryFaultListPage::OnDeviceUp()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_DEVICE))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_HISTORY;
    ChangePage(PAGE_ROM_INDEX_DEVICESELECT);
}

void CHistoryFaultListPage::OnGradeUp()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_GRADE))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_HISTORY;
    ChangePage(PAGE_ROM_INDEX_GRADESELECT);
}

void CHistoryFaultListPage::OnStartTimeUp()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_START_TIME))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_HISTORY;
    ChangePage(PAGE_ROM_INDEX_STARTTIMESET);
}

void CHistoryFaultListPage::OnEndTimeUp()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_END_TIME))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_HISTORY;
    ChangePage(PAGE_ROM_INDEX_ENDTIMESET);
}

//void CHistoryFaultListPage::OnQueryUp()
//{
//    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_QUERY))->ChangeButtonState(LBUTTON_UP);
//}

void CHistoryFaultListPage::OnDefaultUp()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_DEFAULT))->ChangeButtonState(LBUTTON_UP);

//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_CAR))->SetCtrlText("All");

    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("全部"));

    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->SetCtrlText(QSTR("全部"));

    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_START_TIME))->SetCtrlText(QSTR("全部"));
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_END_TIME))->SetCtrlText(QSTR("全部"));

    g_history_faults_pagenum = 1;
}

//void CHistoryFaultListPage::SetCarType(QString car_text)
//{
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_CAR))->SetCtrlText(car_text);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_CAR))->DrawLabel();
//}

void CHistoryFaultListPage::SetDeviceType(int device_type)
{
    switch(device_type) {
    case CNR_HFLP_DEVICE_TYPE_TCU:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("牵引"));
        break;
    case CNR_HFLP_DEVICE_TYPE_HVAC:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("空调"));
        break;
    case CNR_HFLP_DEVICE_TYPE_DCDC:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("超级电容"));
        break;
    case CNR_HFLP_DEVICE_TYPE_ACU:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("辅助"));
        break;
    case CNR_HFLP_DEVICE_TYPE_DOOR:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("车门"));
        break;
    case CNR_HFLP_DEVICE_TYPE_LCU:// MODIFY BY COM
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("通信"));
        break;
    case CNR_HFLP_DEVICE_TYPE_PIS:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("PIS"));
         break;
    case CNR_HFLP_DEVICE_TYPE_TCMS://MODIFY BY TRAIN
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("列车系统"));
         break;
    case CNR_HFLP_DEVICE_TYPE_BCU:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("制动"));
         break;
    case CNR_HFLP_DEVICE_TYPE_ALL:
    default:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->SetCtrlText(QSTR("全部"));
        break;
    }
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->DrawLabel();
}

void CHistoryFaultListPage::SetGradeType(int grade_type)
{
    switch(grade_type) {
    case CNR_HFLP_GRADE_TYPE_ONE:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->SetCtrlText("1");
         break;
    case CNR_HFLP_GRADE_TYPE_TWO:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->SetCtrlText("2");
        break;
    case CNR_HFLP_GRADE_TYPE_THREE:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->SetCtrlText("3");
        break;
    case CNR_HFLP_GRADE_TYPE_FOUR:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->SetCtrlText("4");
        break;
    case CNR_HFLP_GRADE_TYPE_ALL:
    default:
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->SetCtrlText(QSTR("全部"));
        break;

    }
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->DrawLabel();
}

void CHistoryFaultListPage::SetStartTime(QString str)
{
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_START_TIME))->SetCtrlText(str);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_START_TIME))->DrawLabel();
}

void CHistoryFaultListPage::SetEndTime(QString str)
{
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_END_TIME))->SetCtrlText(str);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_END_TIME))->DrawLabel();
}

void CHistoryFaultListPage::OnUpdatePage()
{
    int i = 0;
    int cnt = 0;
    int num = 0;
    int nMaxPageNum = 0;

    for (i=1; i<=g_historyFaultsList.cnt; i++)
    {
        if (true == ConditionFilter(GetHistoryFaultIndexByNum(i)))
        {
            cnt += 1;
        }
    }
    m_eligiblecount = cnt;

    nMaxPageNum = m_eligiblecount/9 + ((m_eligiblecount%9 != 0) ? 1 : 0);

    if (g_history_faults_pagenum > /*m_eligiblecount/9 + 1*/nMaxPageNum)
    {
        g_history_faults_pagenum = /*m_eligiblecount/9 + 1*/nMaxPageNum;
    }

    int min = (g_history_faults_pagenum - 1) * 9 + 1;
    int max = (g_history_faults_pagenum - 1) * 9 + 9;

    ClearTable();
    memset(diplay_historyfaults_idx_array, -1, sizeof(diplay_historyfaults_idx_array));
    cnt = 0;
    for (i=1; i<=g_historyFaultsList.cnt; i++)
    {
        if(g_faultsrom[g_historyFaultsList.list[GetHistoryFaultIndexByNum(i)].romIdx].deviceNo == D_DEVICENO_CTTW)
        {
            //filt  ccu to tw fault
        }else
        {
            if (true == ConditionFilter(GetHistoryFaultIndexByNum(i)))
            {
                cnt += 1;
                if ((cnt >= min) && (cnt <= max))
                {
                    num += 1;
                    DrawLine(num, g_historyFaultsList.list[GetHistoryFaultIndexByNum(i)].romIdx,
                             g_historyFaultsList.list[GetHistoryFaultIndexByNum(i)].datetime,
                             g_historyFaultsList.list[GetHistoryFaultIndexByNum(i)].carID);

                    diplay_historyfaults_idx_array[num - 1] = GetHistoryFaultIndexByNum(i);
                }
            }
            if (cnt > max)
            {
                break;
            }
        }

    }
    // 20110206 modify: display 0/1,0/2....
    if( nMaxPageNum>0 && g_history_faults_pagenum==0 )
        g_history_faults_pagenum = 1;
    QString str;
    str.sprintf("%d/%d", g_history_faults_pagenum, /*m_eligiblecount/9 + 1*/nMaxPageNum);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_PAGENUM))->SetCtrlText(str);
}

void CHistoryFaultListPage::GetFilterVal()
{
    QString str =  ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_DEVICE))->GetCtrlText();
    if(QSTR("通信") == str)
    {
         g_historyFaultsListFilter.device = D_DEVICE_COM;
    }
    else if(QSTR("列车系统") == str)
    {
         g_historyFaultsListFilter.device = D_DEVICE_TRAIN;
    }
    else if (QSTR("辅助") == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_ACU;
    }
    else if (QSTR("牵引") == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_TCU;
    }
    else if (QSTR("超级电容") == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_DCDC;
    }
    else if (QSTR("制动") == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_BCU;
    }
    else if (QSTR("车门") == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_DOOR;
    }
    else if (QSTR("空调") == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_HVAC;
    }
    else if ("PIS" == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_PIS;
    }
    else if ("LCU" == str)
    {
        g_historyFaultsListFilter.device = D_DEVICE_LCU;
    }
    else
    {
        g_historyFaultsListFilter.device = D_HISTORY_FILTER_OPT_ALL;
    }


    str = ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_GRADE))->GetCtrlText();
    if ("1" == str)
    {
        g_historyFaultsListFilter.grade = D_FAULT_GRADE_1;
    }
    else if ("2" == str)
    {
        g_historyFaultsListFilter.grade = D_FAULT_GRADE_2;
    }
    else if ("3" == str)
    {
        g_historyFaultsListFilter.grade = D_FAULT_GRADE_3;
    }
    else if ("4" == str)
    {
        g_historyFaultsListFilter.grade = D_FAULT_GRADE_4;
    }
    else
    {
        g_historyFaultsListFilter.grade = D_HISTORY_FILTER_OPT_ALL;
    }

    g_historyFaultsListFilter.start_time = m_starttime;
    g_historyFaultsListFilter.end_time = m_endtime;

}

bool CHistoryFaultListPage::ConditionFilter(int index)
{
    ST_HISTORY_FAULT_INFO info;
    info = g_historyFaultsList.list[index];
    GetFilterVal();

    if ((D_HISTORY_FILTER_OPT_ALL != g_historyFaultsListFilter.device)
        && (g_faultsrom[info.romIdx].device != g_historyFaultsListFilter.device))
    {
        return false;
    }
    if ((D_HISTORY_FILTER_OPT_ALL != g_historyFaultsListFilter.grade)
        && (g_faultsrom[info.romIdx].grade != g_historyFaultsListFilter.grade))
    {
        return false;
    }

    if ((QSTR("全部") != ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_START_TIME))->GetCtrlText())
        && (CompareDateTime(info.datetime, g_historyFaultsListFilter.start_time) < 0))
    {
        return false;
    }

    if ((QSTR("全部") != ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_END_TIME))->GetCtrlText())
        && (CompareDateTime(info.datetime, g_historyFaultsListFilter.end_time) > 0))
    {
        return false;
    }

    return true;
}


void CHistoryFaultListPage::DrawLine(int line, int idx, ST_DATETIME datetime, quint16 carid)
{

    QString str;
    if(carid == 0xFFFF)
    {
        str = QSTR("它车");
    }else
    {
        str.sprintf("%03d", carid);
    }
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_1 + (line - 1) * 5))->SetCtrlText(str);
    str.sprintf("%04X", g_faultsrom[idx].code);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_2 + (line - 1) * 5))->SetCtrlText(str);
    str.sprintf("%4d-%02d-%02d %02d:%02d:%02d",
                datetime.year, datetime.month, datetime.day,
                datetime.hour, datetime.minute, datetime.second);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_3 + (line - 1) * 5))->SetCtrlText(str);
    str.sprintf("%d", g_faultsrom[idx].grade);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_4 + (line - 1) * 5))->SetCtrlText(str);
    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_5 + (line - 1) * 5))->SetCtrlText(g_faultsrom[idx].name);
    if( g_faultsrom[idx].name.size() > 45 )
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_5 + (line - 1) * 5))->SetAlignment(Qt::AlignLeft);
    else
        ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_5 + (line - 1) * 5))->SetAlignment(Qt::AlignCenter);

    return;
}

void CHistoryFaultListPage::ClearTable()
{
    int i;
    for (i=0; i<g_HistoryFaultListRomLen; i++)
    {
        if ((g_PicRom_HistoryFaultList[i].nID >= ID_PICHFL_LABEL_1_1)
            && (g_PicRom_HistoryFaultList[i].nID <= ID_PICHFL_LABEL_9_5)
            && (CONTROL_LABEL == g_PicRom_HistoryFaultList[i].nControlType))
        {
            ((CLabel *)GetDlgItem(g_PicRom_HistoryFaultList[i].nID))->SetCtrlText("");
        }
    }
}

void CHistoryFaultListPage::OnInitPage()
{
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_1_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_2_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_3_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_4_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_5_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_6_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_7_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_8_5))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICHFL_LABEL_9_5))->SetAlignment(Qt::AlignLeft);
}

void CHistoryFaultListPage::OnDetailClick1()
{
    if (-1 == diplay_historyfaults_idx_array[0])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[0];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick2()
{
    if (-1 == diplay_historyfaults_idx_array[1])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[1];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick3()
{
    if (-1 == diplay_historyfaults_idx_array[2])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[2];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick4()
{
    if (-1 == diplay_historyfaults_idx_array[3])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[3];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick5()
{
    if (-1 == diplay_historyfaults_idx_array[4])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[4];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick6()
{
    if (-1 == diplay_historyfaults_idx_array[5])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[5];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick7()
{
    if (-1 == diplay_historyfaults_idx_array[6])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[6];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick8()
{
    if (-1 == diplay_historyfaults_idx_array[7])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[7];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDetailClick9()
{
    if (-1 == diplay_historyfaults_idx_array[8])
    {
        return;
    }
    g_invoke_type = E_INVOKE_HISTORY;
    g_history_click_idx = diplay_historyfaults_idx_array[8];

    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CHistoryFaultListPage::OnDeleteAllDown()
{
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_DELETE_ALL))->ChangeButtonState(LBUTTON_DOWN);
}

void CHistoryFaultListPage::OnDeleteAllUp()
{
    CConfirmDialog confirmDlg;
    confirmDlg.SetConfirmStr(QSTR("确定要删除么?"));
    confirmDlg.setGeometry(m_pDlg->x()+120,m_pDlg->y()+200,400,119);
    confirmDlg.exec();
    if (!confirmDlg.GetContinue())
    {
        return;
    }
    ((CButton *)GetDlgItem(ID_PICHFL_BUTTON_DELETE_ALL))->ChangeButtonState(LBUTTON_UP);
    ClearAllHistoryFaults();
}
