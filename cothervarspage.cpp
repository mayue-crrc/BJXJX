#include "cothervarspage.h"

ROMDATA g_PicRom_OtherVars[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    {"0000",               D_DEFAULT_FONT,      QRect(440,30-15,60,15),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_CARNO },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(360,52-15,220,30),                    Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                   },

    //H line
    {"",                   D_DEFAULT_FONT,      QRect(50,  85-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  110-15, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  135-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  160-15, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  185-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  210-15, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  235-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  260-15, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  285-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  310-15, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  335-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  360-15, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  385-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  410-15, 530, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//    {"",                   D_DEFAULT_FONT,      QRect(50,  435-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

    // V line
    {" ",                   D_DEFAULT_FONT,     QRect( 50, 85-15,1,325),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(360, 85-15,1,325),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(470, 85-15,1,325),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(580, 85-15,1,325),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},

    {QSTR("信号名称"),       D_DEFAULT_FONT,     QRect(51,86-15,308,23),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {"Mc1",                 D_DEFAULT_FONT,     QRect(361,86-15,108,23),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {"Mc2",                 D_DEFAULT_FONT,     QRect(471,86-15,108,23),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},

    {QSTR("零速硬连线反馈"),                 D_FONT(6),           QRect(55, 111-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_2_1                },
    {QSTR("关门硬连线反馈"),           D_FONT(6),           QRect(55, 136-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_3_1                 },
    {QSTR("再开闭硬连线反馈"),           D_FONT(6),           QRect(55, 161-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_4_1                 },
    {QSTR("开门硬连线反馈"),                  D_FONT(6),           QRect(55, 186-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_5_1                 },
    {QSTR("门关到位"),       D_FONT(6),           QRect(55, 211-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_6_1                 },
    {QSTR("门开到位"),       D_FONT(6),           QRect(55, 236-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_7_1                 },
    {QSTR("紧急解锁"),         D_FONT(6),           QRect(55, 261-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_8_1                 },
    {QSTR("门隔离"),       D_FONT(6),           QRect(55, 286-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_9_1                 },
    {QSTR("障碍物检测被激活"),            D_FONT(6),           QRect(55, 311-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_10_1                 },
    {QSTR("门维护按钮动作"),   D_FONT(6),           QRect(55, 336-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_11_1                 },
    {QSTR("安全互锁回路输出端信号反馈"),   D_FONT(6),           QRect(55, 361-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_12_1                 },
    {QSTR("安全互锁回路输入端信号反馈"),   D_FONT(6),           QRect(55, 386-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_13_1                 },
//    {"EMGC Inverter QK",    D_FONT(6),           QRect(55, 411-15, 300,  23),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICOV_LABEL_14_1                 },

    {"1",                   D_DEFAULT_FONT,           QRect(365, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_2_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_2_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_2_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_2_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_2_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_2_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_2_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_2_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_2_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_2_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_2_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(365, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_2_1     },

    {"2",                   D_DEFAULT_FONT,           QRect(391, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_2_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_2_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_2_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_2_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_2_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_2_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_2_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_2_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_2_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_2_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_2_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(391, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_2_2     },

    {"3",                   D_DEFAULT_FONT,           QRect(417, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_2_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_2_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_2_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_2_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_2_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_2_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_2_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_2_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_2_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_2_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_2_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(417, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_2_3     },

    {"4",                   D_DEFAULT_FONT,           QRect(443, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_2_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_2_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_2_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_2_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_2_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_2_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_2_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_2_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_2_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_2_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_2_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(443, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_2_4     },

    {"1",                   D_DEFAULT_FONT,           QRect(475, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_3_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_3_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_3_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_3_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_3_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_3_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_3_1    },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_3_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_3_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_3_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_3_1     },
    {"1",                   D_DEFAULT_FONT,           QRect(475, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_3_1     },

    {"2",                   D_DEFAULT_FONT,           QRect(501, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_3_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_3_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_3_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_3_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_3_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_3_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_3_2    },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_3_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_3_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_3_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_3_2     },
    {"2",                   D_DEFAULT_FONT,           QRect(501, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_3_2     },

    {"3",                   D_DEFAULT_FONT,           QRect(527, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_3_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_3_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_3_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_3_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_3_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_3_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_3_3    },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_3_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_3_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_3_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_3_3     },
    {"3",                   D_DEFAULT_FONT,           QRect(527, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_3_3     },

    {"4",                   D_DEFAULT_FONT,           QRect(553, 97,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_2_3_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 122,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_3_3_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 147,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_4_3_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 172,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_5_3_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 197,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_6_3_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 222,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_7_3_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 247,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_8_3_4    },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 272,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_9_3_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 297,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_10_3_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 322,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_11_3_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 347,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_12_3_4     },
    {"4",                   D_DEFAULT_FONT,           QRect(553, 372,  21,  21),                  Qt::black,                 Qt::gray,                    CONTROL_LABEL,            ID_PICOV_LABEL_13_3_4     },


  D_LAYER2_NAVIGATION_BAR_MAINTAIN
};
int g_OtherVarsRomLen = sizeof(g_PicRom_OtherVars)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(COtherVarsPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
END_MESSAGE_MAP()

COtherVarsPage::COtherVarsPage()
{
}

void COtherVarsPage::OnUpdatePage()
{
 
}

void COtherVarsPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

void COtherVarsPage::OnInitPage()
{
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICOV_LABEL_13_1))->SetAlignment(Qt::AlignLeft);
}


