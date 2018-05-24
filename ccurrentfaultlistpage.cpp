#include "ccurrentfaultlistpage.h"
#include "faultcommonprocess.h"
#include "cfaultdetaildialog.h"

int display_currentfaults_idx_array[9];

ROMDATA g_PicRom_CurrentFaultList[] =
{
    /*string                font                   rc                foreground color        background color        control type                   ID           */
    //H line
    {QSTR("当前故障"),        D_COMMON_TITLE_FONT,          QRect(0,0, 640, 35) ,      Qt::black,                      Qt::yellow,               CONTROL_LABEL,        ID_IGNORE      },


    {"",                   D_DEFAULT_FONT, QRect( 20, 100+40, 600,   1),         Qt::white,             Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 130+40, 600,   1),         Qt::cyan,              Qt::gray,               CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 160+40, 600,   1),         Qt::white,             Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 190+40, 600,   1),         Qt::cyan,              Qt::gray,               CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 220+40, 600,   1),         Qt::white,             Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 250+40, 600,   1),         Qt::cyan,              Qt::gray,               CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 280+40, 600,   1),         Qt::white,             Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 310+40, 600,   1),         Qt::cyan,              Qt::gray,               CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 340+40, 600,   1),         Qt::white,             Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 370+40, 600,   1),         Qt::cyan,              Qt::gray,              CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 20, 400+40, 600,   1),         Qt::white,             Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },

    //V line
    {"",                   D_DEFAULT_FONT, QRect( 20, 100+40,   1, 300),          Qt::white,            Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect( 60, 100+40,   1, 300),          Qt::white,            Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect(100, 100+40,   1, 300),           Qt::white,           Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect(248, 100+40,   1, 300),           Qt::white,           Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect(285, 100+40,   1, 300),           Qt::white,           Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect(470, 100+40,   1, 300),           Qt::white,           Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect(520, 100+40,   1, 300),           Qt::white,           Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                   D_DEFAULT_FONT, QRect(570, 100+40,   1, 300),           Qt::white,           Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },
    {"",                  D_DEFAULT_FONT, QRect(620, 100+40,   1, 300),            Qt::white,           Qt::yellow,             CONTROL_LINE,             ID_IGNORE                 },

    //static label
    {QSTR("车号"),            D_FONT(5),      QRect( 21, 102+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("代码"),            D_FONT(5),      QRect( 61, 102+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("时间"),            D_FONT(5),      QRect(102, 102+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("等级"),            D_FONT(5),      QRect(249, 102+40,  34,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("故障名称"),            D_FONT(5),      QRect(286, 102+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("设备"),            D_FONT(5),      QRect(472, 102+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("位置"),            D_FONT(5),      QRect(522, 102+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },
    {QSTR("确认"),            D_FONT(5),      QRect(572, 102+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_IGNORE                 },

    //other labels
    {"1001",               D_FONT(6),      QRect( 21, 132+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_CAR       },
    {"123456",             D_FONT(6),      QRect( 61, 132+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_CODE       },
    {"datetime 1",         D_FONT(6),      QRect(102, 132+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_DATETIME       },
    {"1",                  D_FONT(6),      QRect(252, 132+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_GRADE       },
    {"name 1",             D_FONT(6),      QRect(286, 132+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_NAME       },
    {"PIS",                D_FONT(6),      QRect(472, 132+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_DEVICE       },
    {"MC",                 D_FONT(6),      QRect(522, 132+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_POSITION       },
    {"N",                  D_FONT(6),      QRect(572, 132+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_1_CONFIRM       },

    {"vehicle 2",          D_FONT(6),      QRect( 21, 162+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_CAR       },
    {"code 2",             D_FONT(6),      QRect( 61, 162+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_CODE       },
    {"datetime 2",         D_FONT(6),      QRect(102, 162+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_DATETIME       },
    {"2",                  D_FONT(6),      QRect(252, 162+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_GRADE       },
    {"name 2",             D_FONT(6),      QRect(286, 162+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_NAME       },
    {"device 2",           D_FONT(6),      QRect(472, 162+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_DEVICE       },
    {"position 2",         D_FONT(6),      QRect(522, 162+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_POSITION       },
    {"confirm 2",          D_FONT(6),      QRect(572, 162+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_2_CONFIRM       },

    {"vehicle 3",          D_FONT(6),      QRect( 21, 192+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_CAR       },
    {"code 3",             D_FONT(6),      QRect( 61, 192+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_CODE       },
    {"datetime 3",         D_FONT(6),      QRect(102, 192+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_DATETIME       },
    {"3",                  D_FONT(6),      QRect(252, 192+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_GRADE       },
    {"name 3",             D_FONT(6),      QRect(286, 192+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_NAME       },
    {"device 3",           D_FONT(6),      QRect(472, 192+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_DEVICE       },
    {"position 3",         D_FONT(6),      QRect(522, 192+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_POSITION       },
    {"confirm 3",          D_FONT(6),      QRect(572, 192+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_3_CONFIRM       },

    {"vehicle 4",          D_FONT(6),      QRect( 21, 222+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_CAR       },
    {"code 4",             D_FONT(6),      QRect( 61, 222+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_CODE       },
    {"datetime 4",         D_FONT(6),      QRect(102, 222+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_DATETIME       },
    {"4",                  D_FONT(6),      QRect(252, 222+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_GRADE       },
    {"name 4",             D_FONT(6),      QRect(286, 222+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_NAME       },
    {"device 4",           D_FONT(6),      QRect(472, 222+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_DEVICE       },
    {"position 4",         D_FONT(6),      QRect(522, 222+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_POSITION       },
    {"confirm 4",          D_FONT(6),      QRect(572, 222+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_4_CONFIRM       },

    {"vehicle 5",          D_FONT(6),      QRect( 21, 252+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_CAR       },
    {"code 5",             D_FONT(6),      QRect( 61, 252+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_CODE       },
    {"datetime 5",         D_FONT(6),      QRect(102, 252+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_DATETIME       },
    {"5",                  D_FONT(6),      QRect(252, 252+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_GRADE       },
    {"name 5",             D_FONT(6),      QRect(286, 252+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_NAME       },
    {"device 5",           D_FONT(6),      QRect(472, 252+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_DEVICE       },
    {"position 5",         D_FONT(6),      QRect(522, 252+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_POSITION       },
    {"confirm 5",          D_FONT(6),      QRect(572, 252+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_5_CONFIRM       },

    {"vehicle 6",           D_FONT(6),      QRect( 21, 282+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_CAR       },
    {"code 6",             D_FONT(6),      QRect( 61, 282+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_CODE       },
    {"datetime 6",         D_FONT(6),      QRect(102, 282+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_DATETIME       },
    {"6",                  D_FONT(6),      QRect(252, 282+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_GRADE       },
    {"name 6",             D_FONT(6),      QRect(286, 282+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_NAME       },
    {"device 6",           D_FONT(6),      QRect(472, 282+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_DEVICE       },
    {"position 6",         D_FONT(6),      QRect(522, 282+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_POSITION       },
    {"confirm 6",          D_FONT(6),      QRect(572, 282+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_6_CONFIRM       },

    {"vehicle 7",          D_FONT(6),      QRect( 21, 312+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_CAR       },
    {"code 7",             D_FONT(6),      QRect( 61, 312+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_CODE       },
    {"datetime 7",         D_FONT(6),      QRect(102, 312+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_DATETIME       },
    {"7",                  D_FONT(6),      QRect(252, 312+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_GRADE       },
    {"name 7",             D_FONT(6),      QRect(286, 312+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_NAME       },
    {"device 7",           D_FONT(6),      QRect(472, 312+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_DEVICE       },
    {"position 7",         D_FONT(6),      QRect(522, 312+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_POSITION       },
    {"confirm 7",          D_FONT(6),      QRect(572, 312+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_7_CONFIRM       },

    {"vehicle 8",          D_FONT(6),      QRect( 21, 342+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_CAR       },
    {"code 8",             D_FONT(6),      QRect( 61, 342+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_CODE       },
    {"datetime 8",         D_FONT(6),      QRect(102, 342+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_DATETIME       },
    {"8",                  D_FONT(6),      QRect(252, 342+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_GRADE       },
    {"name 8",             D_FONT(6),      QRect(286, 342+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_NAME       },
    {"device 8",           D_FONT(6),      QRect(472, 342+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_DEVICE       },
    {"position 8",         D_FONT(6),      QRect(522, 342+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_POSITION       },
    {"confirm 8",          D_FONT(6),      QRect(572, 342+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_8_CONFIRM       },

    {"vehicle 9",          D_FONT(6),      QRect( 21, 372+40,  38,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_CAR       },
    {"code 9",             D_FONT(6),      QRect( 61, 372+40,  39,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_CODE       },
    {"datetime 9",         D_FONT(6),      QRect(102, 372+40, 145,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_DATETIME       },
    {"9",                  D_FONT(6),      QRect(252, 372+40,  30,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_GRADE       },
    {"name 9",             D_FONT(6),      QRect(286, 372+40, 183,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_NAME       },
    {"device 9",           D_FONT(6),      QRect(472, 372+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_DEVICE       },
    {"position 9",         D_FONT(6),      QRect(522, 372+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_POSITION       },
    {"confirm 9",          D_FONT(6),      QRect(572, 372+40,  46,  26),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_9_CONFIRM       },

    //button
//    {"Vehicle",            D_COMMON_TITLE_FONT, QRect( 20,  15,  60,  35),           Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           ID_PICCFL_BUTTON_CAR         },
    {QSTR("类型"),         D_COMMON_TITLE_FONT, QRect( 20,  55+40,  60,  35),           Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           ID_PICCFL_BUTTON_DEVICE      },
    {QSTR("等级"),         D_COMMON_TITLE_FONT, QRect( 20,  15+40,  60,  35),           Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           ID_PICCFL_BUTTON_GRADE       },
    {QSTR("开始时间"),         D_COMMON_TITLE_FONT, QRect(240,  15+40,  92,  35),           Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           ID_PICCFL_BUTTON_START_TIME  },
    {QSTR("结束时间"),         D_COMMON_TITLE_FONT, QRect(240,  55+40,  92,  35),           Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           ID_PICCFL_BUTTON_END_TIME    },
    {QSTR("清除"),             D_COMMON_TITLE_FONT, QRect(513,  15+40, 107,  35),           Qt::yellow,                 Qt::black,                  CONTROL_BUTTON,           ID_PICCFL_BUTTON_DEFAULT     },

//    {QSTR("全部"),                D_FONT(6),      QRect( 85,  15,  40,  35),           Qt::yellow,                 Qt::black,                  CONTROL_LABEL,           ID_PICCFL_LABEL_CAR         },
    {QSTR("全部"),             D_COMMON_TITLE_FONT,      QRect( 85,  55+40,  80,  35),      Qt::yellow,                 Qt::black,                  CONTROL_LABEL,           ID_PICCFL_LABEL_DEVICE      },
    {QSTR("全部"),             D_COMMON_TITLE_FONT,      QRect( 85,  15+40, 80,  35),      Qt::yellow,                 Qt::black,                  CONTROL_LABEL,           ID_PICCFL_LABEL_GRADE       },
    {QSTR("全部"),             D_COMMON_TITLE_FONT,      QRect(337,  15+40, 120,  35),       Qt::yellow,                 Qt::black,                  CONTROL_LABEL,           ID_PICCFL_LABEL_START_TIME  },
    {QSTR("全部"),             D_COMMON_TITLE_FONT,      QRect(337,  55+40, 120,  35),       Qt::yellow,                 Qt::black,                  CONTROL_LABEL,           ID_PICCFL_LABEL_END_TIME    },

    //up down button
    {"down.png"  ,         D_DEFAULT_FONT,               QRect(513, 55+40,  50,  42),        Qt::yellow,                 Qt::black,                  CONTROL_BMPBUTTON,        ID_PICCFL_BUTTON_UP       },
    {"up.png",             D_DEFAULT_FONT,               QRect(573, 55+40,  50,  42),        Qt::yellow,                 Qt::black,                  CONTROL_BMPBUTTON,        ID_PICCFL_BUTTON_DOWN     },

    {"1/1",                D_COMMON_TITLE_FONT,          QRect(460, 60+40, 50, 25),          Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICCFL_LABEL_PAGENUM     },

     {QSTR("退出"),          D_FONT(8),            QRect(578, 445, 53, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         ID_PICCFL_LABEL_QUIT            },
    //D_LAYER2_NAVIGATION_BAR_MAINTAIN
};
int g_CurrentFaultListRomLen = sizeof(g_PicRom_CurrentFaultList)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CCurrentFaultListPage,CPage)
        ON_UPDATE_PAGE()
        ON_SHOWPAGE()
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_UP, OnDropButtonUpDown)
        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_DOWN, OnDropButtonDownDown)
        ON_LBUTTONUP(ID_PICCFL_BUTTON_UP, OnDropButtonUpUp)
        ON_LBUTTONUP(ID_PICCFL_BUTTON_DOWN, OnDropButtonDownUp)

//        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_CAR,OnCarDown)
        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_DEVICE,OnDeviceDown)
        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_GRADE,OnGradeDown)
        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_START_TIME,OnStartTimeDown)
        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_END_TIME,OnEndTimeDown)
        ON_LBUTTONDOWN(ID_PICCFL_BUTTON_DEFAULT,OnDefaultDown)

        //ON_LBUTTONUP(ID_PICCFL_BUTTON_CAR,OnCarUp)
        ON_LBUTTONUP(ID_PICCFL_BUTTON_DEVICE,OnDeviceUp)
        ON_LBUTTONUP(ID_PICCFL_BUTTON_GRADE,OnGradeUp)
        ON_LBUTTONUP(ID_PICCFL_BUTTON_START_TIME,OnStartTimeUp)
        ON_LBUTTONUP(ID_PICCFL_BUTTON_END_TIME,OnEndTimeUp)
        ON_LBUTTONUP(ID_PICCFL_BUTTON_DEFAULT,OnDefaultUp)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_CONFIRM, OnConfirm1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_CONFIRM, OnConfirm2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_CONFIRM, OnConfirm3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_CONFIRM, OnConfirm4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_CONFIRM, OnConfirm5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_CONFIRM, OnConfirm6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_CONFIRM, OnConfirm7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_CONFIRM, OnConfirm8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_CONFIRM, OnConfirm9Down)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_POSITION, OnDetail1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_POSITION, OnDetail2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_POSITION, OnDetail3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_POSITION, OnDetail4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_POSITION, OnDetail5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_POSITION, OnDetail6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_POSITION, OnDetail7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_POSITION, OnDetail8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_POSITION, OnDetail9Down)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_DEVICE, OnDetail1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_DEVICE, OnDetail2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_DEVICE, OnDetail3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_DEVICE, OnDetail4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_DEVICE, OnDetail5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_DEVICE, OnDetail6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_DEVICE, OnDetail7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_DEVICE, OnDetail8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_DEVICE, OnDetail9Down)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_NAME, OnDetail1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_NAME, OnDetail2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_NAME, OnDetail3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_NAME, OnDetail4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_NAME, OnDetail5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_NAME, OnDetail6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_NAME, OnDetail7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_NAME, OnDetail8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_NAME, OnDetail9Down)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_GRADE, OnDetail1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_GRADE, OnDetail2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_GRADE, OnDetail3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_GRADE, OnDetail4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_GRADE, OnDetail5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_GRADE, OnDetail6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_GRADE, OnDetail7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_GRADE, OnDetail8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_GRADE, OnDetail9Down)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_DATETIME, OnDetail1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_DATETIME, OnDetail2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_DATETIME, OnDetail3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_DATETIME, OnDetail4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_DATETIME, OnDetail5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_DATETIME, OnDetail6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_DATETIME, OnDetail7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_DATETIME, OnDetail8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_DATETIME, OnDetail9Down)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_CODE, OnDetail1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_CODE, OnDetail2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_CODE, OnDetail3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_CODE, OnDetail4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_CODE, OnDetail5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_CODE, OnDetail6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_CODE, OnDetail7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_CODE, OnDetail8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_CODE, OnDetail9Down)

        ON_LBUTTONDOWN(ID_PICCFL_LABEL_1_CAR, OnDetail1Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_2_CAR, OnDetail2Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_3_CAR, OnDetail3Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_4_CAR, OnDetail4Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_5_CAR, OnDetail5Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_6_CAR, OnDetail6Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_7_CAR, OnDetail7Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_8_CAR, OnDetail8Down)
        ON_LBUTTONDOWN(ID_PICCFL_LABEL_9_CAR, OnDetail9Down)


        ON_LBUTTONUP(ID_PICCFL_LABEL_1_CONFIRM, OnConfirm1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_CONFIRM, OnConfirm2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_CONFIRM, OnConfirm3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_CONFIRM, OnConfirm4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_CONFIRM, OnConfirm5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_CONFIRM, OnConfirm6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_CONFIRM, OnConfirm7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_CONFIRM, OnConfirm8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_CONFIRM, OnConfirm9Up)

        ON_LBUTTONUP(ID_PICCFL_LABEL_1_POSITION, OnDetail1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_POSITION, OnDetail2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_POSITION, OnDetail3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_POSITION, OnDetail4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_POSITION, OnDetail5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_POSITION, OnDetail6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_POSITION, OnDetail7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_POSITION, OnDetail8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_POSITION, OnDetail9Up)

        ON_LBUTTONUP(ID_PICCFL_LABEL_1_DEVICE, OnDetail1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_DEVICE, OnDetail2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_DEVICE, OnDetail3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_DEVICE, OnDetail4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_DEVICE, OnDetail5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_DEVICE, OnDetail6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_DEVICE, OnDetail7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_DEVICE, OnDetail8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_DEVICE, OnDetail9Up)

        ON_LBUTTONUP(ID_PICCFL_LABEL_1_NAME, OnDetail1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_NAME, OnDetail2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_NAME, OnDetail3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_NAME, OnDetail4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_NAME, OnDetail5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_NAME, OnDetail6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_NAME, OnDetail7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_NAME, OnDetail8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_NAME, OnDetail9Up)

        ON_LBUTTONUP(ID_PICCFL_LABEL_1_GRADE, OnDetail1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_GRADE, OnDetail2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_GRADE, OnDetail3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_GRADE, OnDetail4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_GRADE, OnDetail5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_GRADE, OnDetail6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_GRADE, OnDetail7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_GRADE, OnDetail8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_GRADE, OnDetail9Up)

        ON_LBUTTONUP(ID_PICCFL_LABEL_1_DATETIME, OnDetail1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_DATETIME, OnDetail2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_DATETIME, OnDetail3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_DATETIME, OnDetail4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_DATETIME, OnDetail5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_DATETIME, OnDetail6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_DATETIME, OnDetail7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_DATETIME, OnDetail8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_DATETIME, OnDetail9Up)

        ON_LBUTTONUP(ID_PICCFL_LABEL_1_CODE, OnDetail1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_CODE, OnDetail2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_CODE, OnDetail3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_CODE, OnDetail4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_CODE, OnDetail5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_CODE, OnDetail6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_CODE, OnDetail7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_CODE, OnDetail8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_CODE, OnDetail9Up)

        ON_LBUTTONUP(ID_PICCFL_LABEL_1_CAR, OnDetail1Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_2_CAR, OnDetail2Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_3_CAR, OnDetail3Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_4_CAR, OnDetail4Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_5_CAR, OnDetail5Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_6_CAR, OnDetail6Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_7_CAR, OnDetail7Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_8_CAR, OnDetail8Up)
        ON_LBUTTONUP(ID_PICCFL_LABEL_9_CAR, OnDetail9Up)
END_MESSAGE_MAP()

CCurrentFaultListPage::CCurrentFaultListPage()
{
    m_eligiblecount = 0;
}

void CCurrentFaultListPage::OnShowPage()
{
    g_current_faults_pagenum = 1;
}

void CCurrentFaultListPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CCurrentFaultListPage::OnDropButtonUpDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICCFL_BUTTON_UP);
    bitmapButton->SetCtrlText("downpress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CCurrentFaultListPage::OnDropButtonDownDown()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICCFL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("uppress.png");
    bitmapButton->ChangeButtonState(LBUTTON_DOWN);
}

void CCurrentFaultListPage::OnDropButtonUpUp()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICCFL_BUTTON_UP);
    bitmapButton->SetCtrlText("down.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);

    int nMaxPageNum = m_eligiblecount/9 + ((m_eligiblecount%9 != 0) ? 1: 0);

    if (g_current_faults_pagenum < /*m_eligiblecount/9 + 1*/nMaxPageNum)
    {
        g_current_faults_pagenum += 1;
    }
    // 20110206 modify: display 0/1,0/2....
    if( nMaxPageNum>0 && g_current_faults_pagenum==0 )
        g_current_faults_pagenum = 1;
    QString str;
    str.sprintf("%d/%d", g_current_faults_pagenum, /*m_eligiblecount/9 + 1*/nMaxPageNum);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_PAGENUM))->SetCtrlText(str);
}

void CCurrentFaultListPage::OnDropButtonDownUp()
{
    CBitmapButton *bitmapButton;

    bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICCFL_BUTTON_DOWN);
    bitmapButton->SetCtrlText("up.png");
    bitmapButton->ChangeButtonState(LBUTTON_UP);

    if (g_current_faults_pagenum > 1)
    {
        g_current_faults_pagenum -= 1;
    }

    int nMaxPageNum = m_eligiblecount/9 + ((m_eligiblecount%9 != 0) ? 1: 0);
    // 20110206 modify: display 0/1,0/2....
    if( nMaxPageNum>0 && g_current_faults_pagenum==0 )
        g_current_faults_pagenum = 1;
    QString str;
    str.sprintf("%d/%d", g_current_faults_pagenum, /*m_eligiblecount/9 + 1*/nMaxPageNum);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_PAGENUM))->SetCtrlText(str);
}

//void CCurrentFaultListPage::OnCarDown()
//{
//    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_CAR))->ChangeButtonState(LBUTTON_DOWN);

//}

void CCurrentFaultListPage::OnDeviceDown()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_DEVICE))->ChangeButtonState(LBUTTON_DOWN);
}

void CCurrentFaultListPage::OnGradeDown()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_GRADE))->ChangeButtonState(LBUTTON_DOWN);
}

void CCurrentFaultListPage::OnStartTimeDown()
{
     ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_START_TIME))->ChangeButtonState(LBUTTON_DOWN);
}

void CCurrentFaultListPage::OnEndTimeDown()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_END_TIME))->ChangeButtonState(LBUTTON_DOWN);
}

void CCurrentFaultListPage::OnDefaultDown()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_DEFAULT))->ChangeButtonState(LBUTTON_DOWN);
}

//void CCurrentFaultListPage::OnCarUp()
//{
//    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_CAR))->ChangeButtonState(LBUTTON_UP);
//    g_invoke_type = E_INVOKE_CURRENT;
//    ChangePage(PAGE_ROM_INDEX_CARSELECT);
//}

void CCurrentFaultListPage::OnDeviceUp()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_DEVICE))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_CURRENT;
    CGlobal::m_nCurPageIndex = PICTURE_INDEX(PAGE_ROM_INDEX_DEVICESELECT);
    UpdatePage();
}

void CCurrentFaultListPage::OnGradeUp()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_GRADE))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_CURRENT;
    ChangePage(PAGE_ROM_INDEX_GRADESELECT);
}

void CCurrentFaultListPage::OnStartTimeUp()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_START_TIME))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_CURRENT;
    ChangePage(PAGE_ROM_INDEX_STARTTIMESET);
}

void CCurrentFaultListPage::OnEndTimeUp()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_END_TIME))->ChangeButtonState(LBUTTON_UP);
    g_invoke_type = E_INVOKE_CURRENT;
    ChangePage(PAGE_ROM_INDEX_ENDTIMESET);
}

void CCurrentFaultListPage::OnDefaultUp()
{
    ((CButton *)GetDlgItem(ID_PICCFL_BUTTON_DEFAULT))->ChangeButtonState(LBUTTON_UP);

//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_CAR))->SetCtrlText(QSTR("全部"));

    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("全部"));

    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->SetCtrlText(QSTR("全部"));

    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_START_TIME))->SetCtrlText(QSTR("全部"));
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_END_TIME))->SetCtrlText(QSTR("全部"));

    g_current_faults_pagenum = 1;
}

//void CCurrentFaultListPage::SetCarType(QString car_text)
//{
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_CAR))->SetCtrlText(car_text);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_CAR))->DrawLabel();
//}

void CCurrentFaultListPage::SetDeviceType(int device_type)
{
    switch(device_type) {
    case CNR_HFLP_DEVICE_TYPE_TCU:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("牵引"));
        break;
    case CNR_HFLP_DEVICE_TYPE_HVAC:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("空调"));
        break;
    case CNR_HFLP_DEVICE_TYPE_ACU:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("辅助"));
        break;
    case CNR_HFLP_DEVICE_TYPE_DOOR:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("车门"));
        break;
    case CNR_HFLP_DEVICE_TYPE_LCU:// MODIFY BY COM
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("通信"));
        break;
    case CNR_HFLP_DEVICE_TYPE_PIS:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText("PIS");
         break;
    case CNR_HFLP_DEVICE_TYPE_TCMS:// MODIFY BY TRAIN
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("列车系统"));
         break;
    case CNR_HFLP_DEVICE_TYPE_BCU:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("制动"));
         break;
    case CNR_HFLP_DEVICE_TYPE_DCDC:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("超级电容"));
         break;
    case CNR_HFLP_DEVICE_TYPE_ALL:
    default:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->SetCtrlText(QSTR("全部"));
        break;
    }
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->DrawLabel();
}

void CCurrentFaultListPage::SetGradeType(int grade_type)
{
    switch(grade_type) {
    case CNR_HFLP_GRADE_TYPE_ONE:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->SetCtrlText("1");
         break;
    case CNR_HFLP_GRADE_TYPE_TWO:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->SetCtrlText("2");
        break;
    case CNR_HFLP_GRADE_TYPE_THREE:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->SetCtrlText("3");
        break;
    case CNR_HFLP_GRADE_TYPE_FOUR:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->SetCtrlText("4");
        break;
    case CNR_HFLP_GRADE_TYPE_ALL:
    default:
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->SetCtrlText(QSTR("全部"));
        break;

    }
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->DrawLabel();
}

void CCurrentFaultListPage::SetStartTime(QString str)
{
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_START_TIME))->SetCtrlText(str);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_START_TIME))->DrawLabel();
}

void CCurrentFaultListPage::SetEndTime(QString str)
{
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_END_TIME))->SetCtrlText(str);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_END_TIME))->DrawLabel();
}

void CCurrentFaultListPage::OnUpdatePage()
{
    int i = 0;
    int cnt = 0;
    int num = 0;

    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    for (i=0; i<g_faultsRomLen; i++)
    {
        if (SkipScanning(pdata))
        {
            break;
        }
        if (pdata->flg && ConditionFilter(i))
        {
            cnt += 1;
        }
        pdata++;
    }
    m_eligiblecount = cnt;

    int nMaxPageNum = m_eligiblecount/9 + ((m_eligiblecount%9 != 0) ? 1: 0);

    if (g_current_faults_pagenum > nMaxPageNum)
    {
        g_current_faults_pagenum = nMaxPageNum;
    }

    int min = (g_current_faults_pagenum - 1) * 9 + 1;
    int max = (g_current_faults_pagenum - 1) * 9 + 9;
    ClearTable();
    memset(display_currentfaults_idx_array, -1, sizeof(display_currentfaults_idx_array));
    cnt = 0;
    pdata = &g_faultsrom[0];
    for (i=0; i<g_faultsRomLen; i++)
    {
        if (SkipScanning(pdata))
        {
            break;
        }
        if(pdata->deviceNo == D_DEVICENO_CTTW)
        {
            //filt cttw fault
        }else
        {
            if (pdata->flg && ConditionFilter(i))
            {
                cnt += 1;
                if ((cnt >= min) && (cnt <= max))
                {
                    num += 1;
                    DrawLine(num, i);
                    display_currentfaults_idx_array[num - 1] = i;
                }
            }
            if (cnt > max)
            {
                break;
            }
        }
        pdata++;
    }
    // 20110206 modify: display 0/1,0/2....
    if( nMaxPageNum>0 && g_current_faults_pagenum==0 )
        g_current_faults_pagenum = 1;
    QString str;
    str.sprintf("%d/%d", g_current_faults_pagenum, nMaxPageNum);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_PAGENUM))->SetCtrlText(str);
}

void CCurrentFaultListPage::DrawLine(int line, int idx)
{
//    if(g_faultsrom[idx].deviceNo == D_DEVICENO_CTTW)
//    {
//        return ;
//    }
    QString str="";
    str = GetCarCodeString(g_faultsrom[idx].car);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CAR + (line - 1) * 8))->SetCtrlText(str);
    str.sprintf("%04X", g_faultsrom[idx].code);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CODE + (line - 1) * 8))->SetCtrlText(str);
    str.sprintf("%d", g_faultsrom[idx].grade);
    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_GRADE + (line - 1) * 8))->SetCtrlText(str);

    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME + (line - 1) * 8))->SetCtrlText(g_faultsrom[idx].name);
    if( g_faultsrom[idx].name.size() > 30 )
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME + (line - 1) * 8))->SetAlignment(Qt::AlignLeft);
    else
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME + (line - 1) * 8))->SetAlignment(Qt::AlignCenter);

    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DEVICE + (line - 1) * 8))->SetCtrlText(GetDeviceNoStr(g_faultsrom[idx].deviceNo));

//    if( g_faultsrom[idx].code==1 || g_faultsrom[idx].code==20 ) // 另外一侧VCU/IDU离线
//    {
//        if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL)) // MC1 HMI
//            ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_POSITION + (line - 1) * 8))->SetCtrlText("Mc2");
//        else
//            ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_POSITION + (line - 1) * 8))->SetCtrlText("Mc1");
//    }
//    else
//    {
         ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_POSITION + (line - 1) * 8))->SetCtrlText(GetPositionStr(g_faultsrom[idx].position));
//    }
//    if((R2_MVB_3_IduMaSt_A2_Master == 1)&&(R2_MVB_3_IduMbSt_A2_Master !=1))

    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DATETIME + (line - 1) * 8))->SetCtrlText(GetDateTimeStr(idx));

    if (!g_faultsrom[idx].confirm)
    {
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CONFIRM + (line - 1) * 8))->SetCtrlText("N");
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CONFIRM + (line - 1) * 8))->SetCtrlText("Y");
    }
    return;
}

void CCurrentFaultListPage::ClearTable()
{
    int i=0;
    for (i=0; i<g_CurrentFaultListRomLen; i++)
    {
        if ((g_PicRom_CurrentFaultList[i].nID >= ID_PICCFL_LABEL_1_CAR)
            && (g_PicRom_CurrentFaultList[i].nID <= ID_PICCFL_LABEL_9_CONFIRM)
            && (CONTROL_LABEL == g_PicRom_CurrentFaultList[i].nControlType))
        {
            ((CLabel *)GetDlgItem(g_PicRom_CurrentFaultList[i].nID))->SetCtrlText("");
        }
    }
}

void CCurrentFaultListPage::OnInitPage()
{
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_2_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_3_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_4_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_5_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_6_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_7_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_8_NAME))->SetAlignment(Qt::AlignLeft);
//    ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_9_NAME))->SetAlignment(Qt::AlignLeft);
}

void CCurrentFaultListPage::GetFilterVal()
{
    QString str = ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_DEVICE))->GetCtrlText();
    if(QSTR("通信") == str)
    {
         g_currentFaultsListFilter.device = D_DEVICE_COM;
    }
    else if(QSTR("列车系统") == str)
    {
         g_currentFaultsListFilter.device = D_DEVICE_TRAIN;
    }
    else if (QSTR("辅助") == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_ACU;
    }
    else if (QSTR("牵引") == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_TCU;
    }
    else if (QSTR("超级电容") == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_DCDC;
    }
    else if (QSTR("制动") == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_BCU;
    }
    else if (QSTR("车门") == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_DOOR;
    }
    else if (QSTR("空调") == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_HVAC;
    }
    else if (QSTR("PIS") == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_PIS;
    }
    else if ("LCU" == str)
    {
        g_currentFaultsListFilter.device = D_DEVICE_LCU;
    }
    else
    {
        g_currentFaultsListFilter.device = D_HISTORY_FILTER_OPT_ALL;
    }


    str = ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_GRADE))->GetCtrlText();
    if ("1" == str)
    {
        g_currentFaultsListFilter.grade = D_FAULT_GRADE_1;
    }
    else if ("2" == str)
    {
        g_currentFaultsListFilter.grade = D_FAULT_GRADE_2;
    }
    else if ("3" == str)
    {
        g_currentFaultsListFilter.grade = D_FAULT_GRADE_3;
    }
    else if ("4" == str)
    {
        g_currentFaultsListFilter.grade = D_FAULT_GRADE_4;
    }
    else
    {
        g_currentFaultsListFilter.grade = D_HISTORY_FILTER_OPT_ALL;
    }


    g_currentFaultsListFilter.start_time = m_starttime;
    g_currentFaultsListFilter.end_time = m_endtime;
}

bool CCurrentFaultListPage::ConditionFilter(int index)
{

    ST_DATETIME datetime;
    datetime = g_current_faults_datetime_array[index];
    GetFilterVal();

    if ((D_HISTORY_FILTER_OPT_ALL != g_currentFaultsListFilter.device)
        && (g_faultsrom[index].device != g_currentFaultsListFilter.device))
    {
        return false;
    }
    if ((D_HISTORY_FILTER_OPT_ALL != g_currentFaultsListFilter.grade)
        && (g_faultsrom[index].grade != g_currentFaultsListFilter.grade))
    {
        return false;
    }

    if ((QSTR("全部") != ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_START_TIME))->GetCtrlText())
        && (CompareDateTime(datetime, g_currentFaultsListFilter.start_time) < 0))
    {
        return false;
    }

    if ((QSTR("全部") != ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_END_TIME))->GetCtrlText())
        && (CompareDateTime(datetime, g_currentFaultsListFilter.end_time) > 0))
    {
        return false;
    }

    return true;
}

void CCurrentFaultListPage::OnConfirm1Down()
{
    g_faultsrom[display_currentfaults_idx_array[0]].confirm = true;
    SetLineClick(1, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm1Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm2Down()
{
    g_faultsrom[display_currentfaults_idx_array[1]].confirm = true;
    SetLineClick(2, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm2Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm3Down()
{
    g_faultsrom[display_currentfaults_idx_array[2]].confirm = true;
    SetLineClick(3, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm3Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm4Down()
{
    g_faultsrom[display_currentfaults_idx_array[3]].confirm = true;
    SetLineClick(4, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm4Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm5Down()
{
    g_faultsrom[display_currentfaults_idx_array[4]].confirm = true;
    SetLineClick(5, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm5Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm6Down()
{
    g_faultsrom[display_currentfaults_idx_array[5]].confirm = true;
    SetLineClick(6, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm6Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm7Down()
{
    g_faultsrom[display_currentfaults_idx_array[6]].confirm = true;
    SetLineClick(7, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm7Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm8Down()
{
    g_faultsrom[display_currentfaults_idx_array[7]].confirm = true;
    SetLineClick(8, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm8Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::OnConfirm9Down()
{
    g_faultsrom[display_currentfaults_idx_array[8]].confirm = true;
    SetLineClick(9, true);
    OnUpdatePage();
}

void CCurrentFaultListPage::OnConfirm9Up()
{
    ResetAllLabelState();
}

void CCurrentFaultListPage::SetLineClick(int linenum, bool flg)
{
    if (flg)
    {
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CAR + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CAR + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CODE + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CODE + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DATETIME + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DATETIME + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_GRADE + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_GRADE + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DEVICE + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DEVICE + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_POSITION + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_POSITION + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CONFIRM + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CONFIRM + 8 * (linenum - 1)))->SetTxtColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CAR + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CAR + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CODE + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CODE + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DATETIME + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DATETIME + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_GRADE + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_GRADE + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_NAME + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DEVICE + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_DEVICE + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_POSITION + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_POSITION + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CONFIRM + 8 * (linenum - 1)))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PICCFL_LABEL_1_CONFIRM + 8 * (linenum - 1)))->SetTxtColor(Qt::yellow);
    }
}

void CCurrentFaultListPage::OnDetail1Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail1Up()
{
    if (-1 == display_currentfaults_idx_array[0])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[0];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_1_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail2Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail2Up()
{
    if (-1 == display_currentfaults_idx_array[1])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[1];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_2_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail3Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail3Up()
{
    if (-1 == display_currentfaults_idx_array[2])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[2];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_3_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail4Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail4Up()
{
    if (-1 == display_currentfaults_idx_array[3])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[3];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_4_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail5Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail5Up()
{
    if (-1 == display_currentfaults_idx_array[4])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[4];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_5_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail6Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail6Up()
{
    if (-1 == display_currentfaults_idx_array[5])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[5];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_6_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail7Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail7Up()
{
    if (-1 == display_currentfaults_idx_array[6])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[6];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_7_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail8Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail8Up()
{
    if (-1 == display_currentfaults_idx_array[7])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[7];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_8_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::OnDetail9Down()
{
    ;
}

void CCurrentFaultListPage::OnDetail9Up()
{
    if (-1 == display_currentfaults_idx_array[8])
    {
        return;
    }
    g_invoke_type = E_INVOKE_CURRENT;
    g_current_click_idx = display_currentfaults_idx_array[8];
    g_current_click_datetime = GetDlgItem(ID_PICCFL_LABEL_9_DATETIME)->GetCtrlText();
    CFaultDetailDialog dlg;
    dlg.move(m_pDlg->x()+35,m_pDlg->y()+15);
    dlg.exec();
}

void CCurrentFaultListPage::ResetAllLabelState()
{
    for(int i = 1; i <=9; i++)
        SetLineClick(i, false);
}
