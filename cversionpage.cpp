#include "cversionpage.h"
#include "psettingdatabase.h"
ROMDATA g_PicRom_Version[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {QSTR("软件版本")  ,    D_FONT(13),            QRect(  0, 65,640, 50),                  Qt::black,                   Qt::yellow,                 CONTROL_LABEL,            ID_IGNORE                },
  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 20,140,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,160,600,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,180,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,200,600,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,220,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,240,600,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,260,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,280,600,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,300,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,320,600,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,340,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,360,600,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,380,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,400,600,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 20,420,600,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 19,140,  3,280),             Qt::red,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(219,140,  3,280),             Qt::red,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(419,140,  3,280),             Qt::red,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(619,140,  3,280),             Qt::red,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(90,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(150,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(290,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(350,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(490,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(550,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //label
  {QSTR("设备"),          D_COMMON_TITLE_FONT,   QRect(21,141,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",                D_COMMON_TITLE_FONT,   QRect(21,161,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_1                 },
  {"",                D_COMMON_TITLE_FONT,   QRect(21,181,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_2                 },
  {"",                D_COMMON_TITLE_FONT,   QRect(21,201,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_3                 },
  {"",                D_COMMON_TITLE_FONT,   QRect(21,221,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_4                 },
  {"",            D_COMMON_TITLE_FONT,   QRect(21,241,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_5                 },
  {"",            D_COMMON_TITLE_FONT,   QRect(21,261,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_6                 },
  {"",           D_COMMON_TITLE_FONT,   QRect(21,281,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_7                 },
  {"",           D_COMMON_TITLE_FONT,   QRect(21,301,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_8                 },
  {"",    D_COMMON_TITLE_FONT,   QRect(21,321,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_9                 },
  {"",    D_COMMON_TITLE_FONT,   QRect(21,341,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_10                 },
  {"",    D_COMMON_TITLE_FONT,   QRect(21,361,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_11                 },
  {"",    D_COMMON_TITLE_FONT,   QRect(21,381,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_12                 },
  {"",            D_COMMON_TITLE_FONT,   QRect(21,401,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_0_13                 },

    {QSTR("设备字"),        D_COMMON_TITLE_FONT,   QRect(91,141, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,161, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_1  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,181, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_2  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,201, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_3  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,221, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_4  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,241, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_5  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,261, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_6  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,281, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_7  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,301, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_8  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,321, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_9 },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,341, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_10 },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,361, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_11 },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,381, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_12 },
  {"",                   D_COMMON_TITLE_FONT,   QRect(91,401, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_1_13 },

{QSTR("版本号"),        D_COMMON_TITLE_FONT,   QRect(151,141, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,161, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_1  },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,181, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_2  },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,201, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_3  },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,221, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_4  },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,241, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_5  },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,261, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_6  },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,281, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_7  },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,301, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_8  },
{QSTR(""),                   D_COMMON_TITLE_FONT,   QRect(151,321, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_9 },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,341, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_10 },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,361, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_11 },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,381, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_12 },
{"",                   D_COMMON_TITLE_FONT,   QRect(151,401, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_1_2_13 },


//label
{QSTR("设备"),          D_COMMON_TITLE_FONT,   QRect(200+21,141,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",                D_COMMON_TITLE_FONT,   QRect(200+21,161,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_1                 },
{"",                D_COMMON_TITLE_FONT,   QRect(200+21,181,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_2                 },
{"",                D_COMMON_TITLE_FONT,   QRect(200+21,201,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_3                 },
{"",                D_COMMON_TITLE_FONT,   QRect(200+21,221,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_4                 },
{"",            D_COMMON_TITLE_FONT,   QRect(200+21,241,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_5                 },
{"",            D_COMMON_TITLE_FONT,   QRect(200+21,261,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_6                 },
{"",           D_COMMON_TITLE_FONT,   QRect(200+21,281,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_7                 },
{"",           D_COMMON_TITLE_FONT,   QRect(200+21,301,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_8                 },
{"",    D_COMMON_TITLE_FONT,   QRect(200+21,321,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_9                 },
{"",    D_COMMON_TITLE_FONT,   QRect(200+21,341,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_10                 },
{"",    D_COMMON_TITLE_FONT,   QRect(200+21,361,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_11                 },
{"",    D_COMMON_TITLE_FONT,   QRect(200+21,381,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_12                 },
{"",            D_COMMON_TITLE_FONT,   QRect(200+21,401,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_0_13                 },

{QSTR("设备字"),        D_COMMON_TITLE_FONT,   QRect(200+91,141, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,161, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_1  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,181, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_2  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,201, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_3  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,221, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_4  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,241, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_5  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,261, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_6  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,281, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_7  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,301, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_8  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,321, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_9 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,341, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_10 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,361, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_11 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,381, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_12 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+91,401, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_1_13 },

{QSTR("版本号"),        D_COMMON_TITLE_FONT,   QRect(200+151,141, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,161, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_1  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,181, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_2  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,201, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_3  },
{"",                   D_FONT(3),   QRect(200+151,221, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_4  },
{"",                   D_FONT(3),   QRect(200+151,241, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_5  },
{"",                   D_FONT(3),   QRect(200+151,261, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_6  },
{"",                   D_FONT(3),   QRect(200+151,281, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_7  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,301, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_8  },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,321, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_9 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,341, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_10 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,361, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_11 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,381, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_12 },
{"",                   D_COMMON_TITLE_FONT,   QRect(200+151,401, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_2_2_13 },

//label
{QSTR("设备"),          D_COMMON_TITLE_FONT,   QRect(400+21,141,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",                D_COMMON_TITLE_FONT,   QRect(400+21,161,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_1                 },
{"",                D_COMMON_TITLE_FONT,   QRect(400+21,181,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_2                 },
{"",                D_COMMON_TITLE_FONT,   QRect(400+21,201,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_3                 },
{"",                D_COMMON_TITLE_FONT,   QRect(400+21,221,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_4                 },
{"",            D_COMMON_TITLE_FONT,   QRect(400+21,241,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_5                 },
{"",            D_COMMON_TITLE_FONT,   QRect(400+21,261,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_6                 },
{"",           D_COMMON_TITLE_FONT,   QRect(400+21,281,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_7                 },
{"",           D_COMMON_TITLE_FONT,   QRect(400+21,301,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_8                 },
{"",    D_COMMON_TITLE_FONT,   QRect(400+21,321,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_9                 },
{"",    D_COMMON_TITLE_FONT,   QRect(400+21,341,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_10                 },
{"",    D_COMMON_TITLE_FONT,   QRect(400+21,361,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_11                 },
{"",    D_COMMON_TITLE_FONT,   QRect(400+21,381,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_12                 },
{"",            D_COMMON_TITLE_FONT,   QRect(400+21,401,68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_0_13                 },

  {QSTR("设备字"),        D_COMMON_TITLE_FONT,   QRect(400+91,141, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,161, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_1  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,181, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_2  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,201, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_3  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,221, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_4  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,241, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_5  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,261, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_6  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,281, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_7  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,301, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_8  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,321, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_9 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,341, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_10 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,361, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_11 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,381, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_12 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+91,401, 58, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_1_13 },

{QSTR("版本号"),        D_COMMON_TITLE_FONT,   QRect(400+151,141, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,161, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_1  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,181, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_2  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,201, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_3  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,221, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_4  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,241, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_5  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,261, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_6  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,281, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_7  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,301, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_8  },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,321, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_9 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,341, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_10 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,361, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_11 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,381, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_12 },
{"",                   D_COMMON_TITLE_FONT,   QRect(400+151,401, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_3_2_13 },


  {QSTR("退出"),          D_COMMON_TITLE_FONT,   QRect(275,430, 90, 40),                Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICVERSION_BUTTON_QUIT},
    {QSTR("设置本端\n为MC1"),          D_COMMON_TITLE_FONT,   QRect(400,430, 90, 40),                Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICVERSION_BUTTON_MC1},
    {QSTR("设置本端\n为MC2"),          D_COMMON_TITLE_FONT,   QRect(500,430, 90, 40),                Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICVERSION_BUTTON_MC2},
    {QSTR("重启HMI"),          D_COMMON_TITLE_FONT,   QRect(100,430, 90, 40),                Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICVERSION_BUTTON_REBOOT},
    {QSTR("HMI校准"),          D_COMMON_TITLE_FONT,   QRect(5,430, 90, 40),                Qt::black,                   Qt::black,                 CONTROL_BUTTON,           ID_PICVERSION_BUTTON_SCREEN},

};
int g_VersionRomLen = sizeof(g_PicRom_Version)/sizeof(ROMDATA);

CVersionPage::CVersionPage()
{
    m_cnt = 0;
}


BEGIN_MESSAGE_MAP(CVersionPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICVERSION_BUTTON_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PICVERSION_BUTTON_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICVERSION_BUTTON_MC1, OnMC1ButtonDown)
        ON_LBUTTONDOWN(ID_PICVERSION_BUTTON_MC2, OnMC2ButtonDown)
        ON_LBUTTONDOWN(ID_PICVERSION_BUTTON_REBOOT, OnrebootButtonDown)
        ON_LBUTTONDOWN(ID_PICVERSION_BUTTON_SCREEN, OnScreenBtunDown)

END_MESSAGE_MAP()
void CVersionPage::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_PICVERSION_BUTTON_SCREEN))->m_bAutoUpState = false;

}

void CVersionPage::OnScreenBtunDown()
{

    if(m_cnt++>3)
    {
        m_cnt = 0;
        QString program = "./ts_calibrate_cnr";
        QProcess::execute(program);
    }

}

void CVersionPage::OnUpdatePage()
{

    if(m_cnt>3)
    {
        ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_SCREEN))->ChangeButtonState(LBUTTON_UP);

    }else
    {
        ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_SCREEN))->ChangeButtonState(LBUTTON_HIDE);

    }

    if(TC1_HMI == 1)
    {
        GetDlgItem(ID_PICVERSION_LABEL_1_2_8)->SetCtrlText("V0.16");
        GetDlgItem(ID_PICVERSION_LABEL_1_2_9)->SetCtrlText("-----");

    }else if(TC2_HMI == 1)
    {
        GetDlgItem(ID_PICVERSION_LABEL_1_2_9)->SetCtrlText("V0.16");
        GetDlgItem(ID_PICVERSION_LABEL_1_2_8)->SetCtrlText("-----");
    }else
    {
        GetDlgItem(ID_PICVERSION_LABEL_1_2_8)->SetCtrlText("-----");
        GetDlgItem(ID_PICVERSION_LABEL_1_2_9)->SetCtrlText("-----");
    }
    GetDlgItem(ID_PICVERSION_LABEL_1_0_1)->SetCtrlText("LCU_MA");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_2)->SetCtrlText("LCU_RA");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_3)->SetCtrlText("LCU_RP");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_4)->SetCtrlText("LCU_RB");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_5)->SetCtrlText("LCU_MB");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_6)->SetCtrlText("HVAC_RA");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_7)->SetCtrlText("HVAC_RB");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_8)->SetCtrlText("IDU_MA");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_9)->SetCtrlText("IDU_MB");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_10)->SetCtrlText("TCU1_MA");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_11)->SetCtrlText("TCU2_MA");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_12)->SetCtrlText("TCU1_MB");
    GetDlgItem(ID_PICVERSION_LABEL_1_0_13)->SetCtrlText("TCU2_MB");

    setDeviceSt(ID_PICVERSION_LABEL_1_1_1 ,  MVB_STAT_LCU_MA_RLD_B1,  MVB_STAT_LCU_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_2 ,  MVB_STAT_LCU_RA_RLD_B1,  MVB_STAT_LCU_RA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_3 ,  MVB_STAT_LCU_RP_RLD_B1,  MVB_STAT_LCU_RP_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_4 ,  MVB_STAT_LCU_RB_RLD_B1,  MVB_STAT_LCU_RB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_5 ,  MVB_STAT_LCU_MB_RLD_B1,  MVB_STAT_LCU_MB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_6 ,  MVB_STAT_HVAC_RA_RLD_B1,  MVB_STAT_HVAC_RA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_7 ,  MVB_STAT_HVAC_RB_RLD_B1,  MVB_STAT_HVAC_RB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_8 ,  MVB_STAT_IDU_MA_RLD_B1,  MVB_STAT_IDU_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_9 ,  MVB_STAT_IDU_MB_RLD_B1,  MVB_STAT_IDU_MB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_10,  MVB_STAT_TCU1_MA_RLD_B1,  MVB_STAT_TCU1_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_11,  MVB_STAT_TCU2_MA_RLD_B1,  MVB_STAT_TCU2_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_12,  MVB_STAT_TCU1_MB_RLD_B1,  MVB_STAT_TCU1_MB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_1_1_13,  MVB_STAT_TCU2_MB_RLD_B1,  MVB_STAT_TCU2_MB_LAT_B1 );


    GetDlgItem(ID_PICVERSION_LABEL_1_2_6)->SetCtrlText(QString::number(HVACRAALL_HVAC_SW_VERS_H_U8)+"."+QString::number(HVACRAALL_HVAC_SW_VERS_L_U8));
    GetDlgItem(ID_PICVERSION_LABEL_1_2_7)->SetCtrlText(QString::number(HVACRBALL_HVAC_SW_VERS_H_U8)+"."+QString::number(HVACRBALL_HVAC_SW_VERS_L_U8));

    GetDlgItem(ID_PICVERSION_LABEL_2_0_1)->SetCtrlText("BCU_MA");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_2)->SetCtrlText("BCU_P");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_3)->SetCtrlText("BCU_MB");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_4)->SetCtrlText("DOOR_MA");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_5)->SetCtrlText("DOOR_RA");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_6)->SetCtrlText("DOOR_RB");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_7)->SetCtrlText("DOOR_MB");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_8)->SetCtrlText("PA_MA");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_9)->SetCtrlText("PA_MB");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_10)->SetCtrlText("PID_MA");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_11)->SetCtrlText("PID_MB");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_12)->SetCtrlText("GTW_A");
    GetDlgItem(ID_PICVERSION_LABEL_2_0_13)->SetCtrlText("RSE");

    setDeviceSt(ID_PICVERSION_LABEL_2_1_1 ,  MVB_STAT_BCU_MA_RLD_B1,  MVB_STAT_BCU_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_2 ,  MVB_STAT_BCU_P_RLD_B1,  MVB_STAT_BCU_P_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_3 ,  MVB_STAT_BCU_MB_RLD_B1,  MVB_STAT_BCU_MB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_4 ,  MVB_STAT_DOOR_MA_RLD_B1,  MVB_STAT_DOOR_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_5 ,  MVB_STAT_DOOR_RA_RLD_B1,  MVB_STAT_DOOR_RA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_6 ,  MVB_STAT_DOOR_RB_RLD_B1,  MVB_STAT_DOOR_RB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_7 ,  MVB_STAT_DOOR_MB_RLD_B1,  MVB_STAT_DOOR_MB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_8 ,  MVB_STAT_PA_MA_RLD_B1,  MVB_STAT_PA_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_9 ,  MVB_STAT_PA_MB_RLD_B1,  MVB_STAT_PA_MB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_10,  MVB_STAT_PID_MA_RLD_B1,  MVB_STAT_PID_MA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_11,  MVB_STAT_PID_MB_RLD_B1,  MVB_STAT_PID_MB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_12,  MVB_STAT_GTW_A_RLD_B1,  MVB_STAT_GTW_A_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_2_1_13,  MVB_STAT_RSE_RLD_B1,  MVB_STAT_RSE_LAT_B1 );

    GetDlgItem(ID_PICVERSION_LABEL_2_2_1)->SetCtrlText(QString::number((float)BCUCCU2_MA_SwVersion_U16/1000,10,3));
    GetDlgItem(ID_PICVERSION_LABEL_2_2_2)->SetCtrlText(QString::number((float)BCUCCU2_P_SwVersion_U16/1000,10,3));
    GetDlgItem(ID_PICVERSION_LABEL_2_2_3)->SetCtrlText(QString::number((float)BCUCCU2_MB_SwVersion_U16/1000,10,3));
    QString tmp_str;
    tmp_str = QString::number(DOORMAALL_D1_SW_VERS_MAJOR_U8)+"."+QString::number(DOORMAALL_D1_SW_VERS_MINOR_U8)+" "+
              QString::number(DOORMAALL_D2_SW_VERS_MAJOR_U8)+"."+QString::number(DOORMAALL_D2_SW_VERS_MINOR_U8);
    GetDlgItem(ID_PICVERSION_LABEL_2_2_4)->SetCtrlText(tmp_str);
    tmp_str = QString::number(DOORRAALL_D1_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRAALL_D1_SW_VERS_MINOR_U8)+" "+
              QString::number(DOORRAALL_D2_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRAALL_D2_SW_VERS_MINOR_U8)+"\n"+
              QString::number(DOORRAALL_D3_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRAALL_D3_SW_VERS_MINOR_U8)+" "+
              QString::number(DOORRAALL_D4_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRAALL_D4_SW_VERS_MINOR_U8);
    GetDlgItem(ID_PICVERSION_LABEL_2_2_5)->SetCtrlText(tmp_str);

    tmp_str = QString::number(DOORRBALL_D1_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRBALL_D1_SW_VERS_MINOR_U8)+" "+
              QString::number(DOORRBALL_D2_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRBALL_D2_SW_VERS_MINOR_U8)+"\n"+
              QString::number(DOORRBALL_D3_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRBALL_D3_SW_VERS_MINOR_U8)+" "+
              QString::number(DOORRBALL_D4_SW_VERS_MAJOR_U8)+"."+QString::number(DOORRBALL_D4_SW_VERS_MINOR_U8);
    GetDlgItem(ID_PICVERSION_LABEL_2_2_6)->SetCtrlText(tmp_str);
    tmp_str = QString::number(DOORMBALL_D1_SW_VERS_MAJOR_U8)+"."+QString::number(DOORMBALL_D1_SW_VERS_MINOR_U8)+" "+
              QString::number(DOORMBALL_D2_SW_VERS_MAJOR_U8)+"."+QString::number(DOORMBALL_D2_SW_VERS_MINOR_U8);
    GetDlgItem(ID_PICVERSION_LABEL_2_2_7)->SetCtrlText(tmp_str);



    GetDlgItem(ID_PICVERSION_LABEL_2_2_8)->SetCtrlText(QString::number(PA1All_PA_SwVersion_U8/10)%QLatin1Literal(".")%QString::number(PA1All_PA_SwVersion_U8%10));
    GetDlgItem(ID_PICVERSION_LABEL_2_2_9)->SetCtrlText(QString::number(PA2All_PA_SwVersion_U8/10)+"."+QString::number(PA2All_PA_SwVersion_U8%10));
    GetDlgItem(ID_PICVERSION_LABEL_2_2_13)->SetCtrlText(QString::number(ERM_Version_X)+"."+QString::number(ERM_Version_Y));

    GetDlgItem(ID_PICVERSION_LABEL_2_2_13)->SetCtrlText(QString::number(ERM_Version_X)+"."+QString::number(ERM_Version_Y));

//ERM_Version_X ERM_Version_X

    GetDlgItem(ID_PICVERSION_LABEL_3_0_1)->SetCtrlText("WC_CA");
    GetDlgItem(ID_PICVERSION_LABEL_3_0_2)->SetCtrlText("WC_CB");
    GetDlgItem(ID_PICVERSION_LABEL_3_0_3)->SetCtrlText("CCU");
    setDeviceSt(ID_PICVERSION_LABEL_3_1_1 ,  MVB_STAT_WC_CA_RLD_B1,  MVB_STAT_WC_CA_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_3_1_2 ,  MVB_STAT_WC_CB_RLD_B1,  MVB_STAT_WC_CB_LAT_B1 );
    setDeviceSt(ID_PICVERSION_LABEL_3_1_3 ,  MVB_STAT_CCU_RLD_B1,  MVB_STAT_CCU_LAT_B1 );


   }
void CVersionPage::OnQuitButtonDown()
{
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CVersionPage::OnQuitButtonUp()
{
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}
void CVersionPage::setDeviceSt(int n_ID,bool RLD,bool LET)
{
    if(RLD==1)
    {
        GetDlgItem(n_ID)->SetCtrlBKColor(Qt::red);
        GetDlgItem(n_ID)->SetTxtColor(Qt::white);
    }
    else
    {
         GetDlgItem(n_ID)->SetCtrlBKColor(Qt::green);
           GetDlgItem(n_ID)->SetTxtColor(Qt::black);
    }
    if(LET)
    {
    GetDlgItem(n_ID)->SetCtrlText( "A" );
    }
    else
    {
       GetDlgItem(n_ID)->SetCtrlText( "B" );
    }


}

void CVersionPage::OnMC1ButtonDown()
{
    PSettingDataBase* settingDataBase = PSettingDataBase::getPSettingDataBaseInstance();
    settingDataBase->setLocoASide();
    settingDataBase->saveFile();
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_MC1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_MC2))->ChangeButtonState(LBUTTON_UP);
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QSettings* ConfigIniRead2 = new QSettings("./system_init.ini",QSettings::IniFormat,0);
     ConfigIniRead->setValue("/HMI/TC1",1);
     ConfigIniRead->setValue("/HMI/TC2",0);
     ConfigIniRead2->setValue("/HMI/TC1",1);
     ConfigIniRead2->setValue("/HMI/TC2",0);
     delete ConfigIniRead;
     delete ConfigIniRead2;
}
void CVersionPage::OnMC2ButtonDown()
{
    PSettingDataBase* settingDataBase = PSettingDataBase::getPSettingDataBaseInstance();
    settingDataBase->setLocoBSide();
    settingDataBase->saveFile();
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_MC2))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_MC1))->ChangeButtonState(LBUTTON_UP);
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QSettings* ConfigIniRead2 = new QSettings("./system_init.ini",QSettings::IniFormat,0);
    ConfigIniRead->setValue("/HMI/TC1",0);
    ConfigIniRead->setValue("/HMI/TC2",1);
    ConfigIniRead2->setValue("/HMI/TC1",0);
    ConfigIniRead2->setValue("/HMI/TC2",1);
    delete ConfigIniRead;
    delete ConfigIniRead2;

}
void CVersionPage::setDeviceSw(int n_ID,int sfVersion)
{
   //GetDlgItem(n_ID)->SetCtrlText( sfVersion );
}
void CVersionPage::OnrebootButtonDown()
{
    system("reboot");
}
