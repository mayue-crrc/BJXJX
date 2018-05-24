#include "cbcustatepagecoupled.h"


ROMDATA g_PicRom_BcuStatePageCoupled[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
 // {"down.png",           D_DEFAULT_FONT,      QRect( 30, 70, 30, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICBCU_PAGEDOWN},
 // {"upgray.png",         D_DEFAULT_FONT,      QRect(65, 70, 30, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICBCU_PAGEUP},
  //{"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60, 19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_TRAINNUM },
  {"bjcar.png",   D_DEFAULT_FONT,      QRect(130, 65,240,  55),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
  {"bjcar.png",   D_DEFAULT_FONT,      QRect(370, 65,240,  55),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
  {"",              D_FONT(7),      QRect(100,75, 25, 30),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCUPAGE   },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 30,125,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,147,580,  1),                  Qt::cyan,                    Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,169,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,191,580,  1),                  Qt::cyan,                    Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,213,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,235,580,  1),                  Qt::cyan,                    Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,257,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,279,580,  1),                  Qt::cyan,                    Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,301,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 30,323,580,  1),                  Qt::cyan,                    Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 30,345,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 30,367,580,  1),                  Qt::cyan,                    Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 30,389,580,  1),                  Qt::yellow,                  Qt::yellow,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 30,411,580,  1),                  Qt::cyan,                    Qt::black,                   CONTROL_LINE,             ID_IGNORE                },

  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 30,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(130,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(210,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(290,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(370,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(450,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(530,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(610,125,  1,198),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //label
  {QSTR("显示项目"),                D_FONT(10),      QRect( 35,126,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),             D_FONT(7),      QRect( 35,148,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_2_1    },
  {QSTR(""),             D_FONT(7),      QRect( 35,170,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_3_1     },
//  {QSTR(""),             D_FONT(7),      QRect( 35,192,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_4_1     },
  {QSTR(""),           D_FONT(7),      QRect( 35,214,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_5_1     },
//  {QSTR(""),           D_FONT(7),      QRect( 35,236,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_1     },
//  {QSTR(""),           D_FONT(7),      QRect( 35,258,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_1     },
  {QSTR(""),           D_FONT(7),      QRect( 35,280,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_1     },
  {QSTR(""),          D_FONT(7),      QRect( 35,302,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_9_1     },
  {QSTR(""),          D_FONT(7),      QRect( 35,192,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_10_1   },
  {QSTR(""),          D_FONT(7),      QRect( 35,236,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_11_1    },
  {QSTR(""),          D_FONT(7),      QRect(35,258,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_12_1    },
//  {QSTR(""),           D_FONT(7),      QRect( 35,390,90, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_13_1    },
  //{QSTR(""),           D_FONT(7),      QRect( 35,412,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_14_1    },
  //label


  {QSTR("MA"),         D_DEFAULT_FONT,      QRect(135,128, 70, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_FONT(7),      QRect(150,149, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_2    },
  {"",              D_FONT(7),      QRect(150,171, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_2    },
//  {"",              D_FONT(7),      QRect(150,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_2    },
  {"",              D_FONT(7),      QRect(150,215, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_2    },
//  {"",              D_FONT(7),      QRect(150,237, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_2    },
//  {"",              D_FONT(7),      QRect(150,259, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_2    },
  {"",              D_FONT(7),      QRect(150,281, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_2    },
  {"",              D_FONT(7),      QRect(150,303, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_2    },
  {"",              D_FONT(7),      QRect(150,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_2   },
  {"",              D_FONT(7),      QRect(150,237, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_2   },
  {"",              D_FONT(7),      QRect(150,259, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_2   },
//  {"",              D_FONT(7),      QRect(150,391, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_2   },

{QSTR("P"),         D_DEFAULT_FONT,      QRect(215,128, 70, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_FONT(7),      QRect(230,149, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_3    },
{"",              D_FONT(7),      QRect(230,171, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_3    },
//{"",              D_FONT(7),      QRect(230,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_3    },
{"",              D_FONT(7),      QRect(230,215, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_3    },
//{"",              D_FONT(7),      QRect(230,237, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_3    },
//{"",              D_FONT(7),      QRect(230,259, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_3    },
{"",              D_FONT(7),      QRect(230,281, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_3    },
{"",              D_FONT(7),      QRect(230,303, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_3    },
{"",              D_FONT(7),      QRect(230,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_3   },
{"",              D_FONT(7),      QRect(230,237, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_3   },
{"",              D_FONT(7),      QRect(230,259, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_3   },
//{"",              D_FONT(7),      QRect(230,391, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_3   },

{QSTR("MB"),         D_DEFAULT_FONT,      QRect(295,128, 70, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

{"",              D_FONT(7),      QRect(310,149, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_4   },
{"",              D_FONT(7),      QRect(310,171, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_4   },
//{"",              D_FONT(7),      QRect(310,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_4   },
{"",              D_FONT(7),      QRect(310,215, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_4   },
//{"",              D_FONT(7),      QRect(310,237, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_4   },
//{"",              D_FONT(7),      QRect(310,259, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_4   },
{"",              D_FONT(7),      QRect(310,281, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_4   },
{"",              D_FONT(7),      QRect(310,303, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_4   },
{"",              D_FONT(7),      QRect(310,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_4  },
{"",              D_FONT(7),      QRect(310,237, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_4  },
{"",              D_FONT(7),      QRect(310,259, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_4  },
//{"",              D_FONT(7),      QRect(310,391, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_4  },


{QSTR("MA"),         D_DEFAULT_FONT,      QRect(375,128, 70, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

{"",              D_FONT(7),      QRect(390,149, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_5   },
{"",              D_FONT(7),      QRect(390,171, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_5   },
//{"",              D_FONT(7),      QRect(390,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_5   },
{"",              D_FONT(7),      QRect(390,215, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_5   },
//{"",              D_FONT(7),      QRect(390,237, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_5   },
//{"",              D_FONT(7),      QRect(390,259, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_5   },
{"",              D_FONT(7),      QRect(390,281, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_5   },
{"",              D_FONT(7),      QRect(390,303, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_5   },
{"",              D_FONT(7),      QRect(390,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_5  },
{"",              D_FONT(7),      QRect(390,237, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_5  },
{"",              D_FONT(7),      QRect(390,259, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_5  },
//{"",              D_FONT(7),      QRect(390,391, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_5  },


{QSTR("P"),         D_DEFAULT_FONT,      QRect(455,128, 70, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

{"",              D_FONT(7),      QRect(470,149, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_6   },
{"",              D_FONT(7),      QRect(470,171, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_6   },
//{"",              D_FONT(7),      QRect(470,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_6   },
{"",              D_FONT(7),      QRect(470,215, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_6   },
//{"",              D_FONT(7),      QRect(470,237, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_6   },
//{"",              D_FONT(7),      QRect(470,259, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_6   },
{"",              D_FONT(7),      QRect(470,281, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_6   },
{"",              D_FONT(7),      QRect(470,303, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_6   },
{"",              D_FONT(7),      QRect(470,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_6  },
{"",              D_FONT(7),      QRect(470,237, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_6  },
{"",              D_FONT(7),      QRect(470,259, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_6  },
//{"",              D_FONT(7),      QRect(470,391, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_6  },


{QSTR("MB"),         D_DEFAULT_FONT,      QRect(535,128, 70, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

{"",              D_FONT(7),      QRect(550,149, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_7   },
{"",              D_FONT(7),      QRect(550,171, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_7   },
//{"",              D_FONT(7),      QRect(550,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_7   },
{"",              D_FONT(7),      QRect(550,215, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_7   },
//{"",              D_FONT(7),      QRect(550,237, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_7   },
//{"",              D_FONT(7),      QRect(550,259, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_7   },
{"",              D_FONT(7),      QRect(550,281, 40, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_7   },
{"",              D_FONT(7),      QRect(550,303, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_7   },
{"",              D_FONT(7),      QRect(550,193, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_7  },
{"",              D_FONT(7),      QRect(550,237, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_7  },
{"",              D_FONT(7),      QRect(550,259, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_7  },
//{"",              D_FONT(7),      QRect(550,391, 40, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_7  },


D_LAYER1_NAVIGATION_BAR
};
int g_BcuStatePageCoupledRomLen = sizeof(g_PicRom_BcuStatePageCoupled)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CBcuStatePageCoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        //ON_LBUTTONDOWN(ID_PICBCU_PAGEDOWN, OnDownButtonDown)
        //ON_LBUTTONUP(ID_PICBCU_PAGEDOWN, OnDownButtonUp)
        //ON_LBUTTONDOWN(ID_PICBCU_PAGEUP, OnUpButtonDown)
        //ON_LBUTTONUP(ID_PICBCU_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()
CBcuStatePageCoupled::CBcuStatePageCoupled()
{
    pageNo = MIN_PAGE;
    formerPageNo = 0;
}



void CBcuStatePageCoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
/*
bool parameter state:
0: green background color, black text->Ok or Applyed
3: gray background color, black text->Major/Minor event not occured or not ok or release
4: red background color, yellow text->Major/Minor event occured
*/
void CBcuStatePageCoupled::OnUpdatePage()
{
        if(m_TrainCoupleActive == 1 )
        //if(0)
     {
        ChangePage(PAGE_ROM_INDEX_BCUSTATE);
        return;
    }

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_1))->SetCtrlText(QSTR("载荷"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_1))->SetCtrlText(QSTR("EH制动力"));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_1))->SetCtrlText(QSTR("液压缸压力"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_1))->SetCtrlText(QSTR("制动缓解"));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_1))->SetCtrlText(QSTR("保持制动"));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_1))->SetCtrlText(QSTR("防滑保护"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_1))->SetCtrlText(QSTR("常用制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_1))->SetCtrlText(QSTR("停车制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_1))->SetCtrlText(QSTR("紧急制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_1))->SetCtrlText(QSTR("安全制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_1))->SetCtrlText(QSTR("磁轨制动"));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_1))->SetCtrlText(QSTR(""));

    //Car_Enabled
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlText("--");
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlText(QString::number((float)R2_MVB_2_BCUEhForceMa_U8_Master3*65.532/255,1,0));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMA_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMA_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetBCUCtrlBKColor((R2_MVB_3_ParkBrakeMa_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetBCUCtrlBKColor((R2_MVB_3_St_EMBrake_MA_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetBCUCtrlBKColor((R2_MVB_3_SafetyBrakeApply_B1_Master));

      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetBCUCtrlBKColor(!(R2_MVB_3_St_MtbCntMA_B1_Master));


      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlText(QString::number(R2_MVB_2_BCUWeight_U8_Master3*100/255,1,0));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlText(QString::number((float)R2_MVB_2_BCUEhForceP_U8_Master3*65.532/255,1,0));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActP_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActP_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetBCUCtrlBKColor((R2_MVB_3_ParkBrakeP_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetBCUCtrlBKColor((R2_MVB_3_St_EMBrake_MA_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetBCUCtrlBKColor((R2_MVB_3_SafetyBrakeApply_B1_Master));

      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetBCUCtrlBKColor(!(R2_MVB_3_St_MtbCntP_B1_Master));


      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_4))->SetCtrlText("--");
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_4))->SetCtrlText(QString::number((float)R2_MVB_2_BCUEhForceMb_U8_Master3*65.532/255,1,0));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_4))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMB_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_4))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMB_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_4))->SetBCUCtrlBKColor((R2_MVB_3_ParkBrakeMb_B1_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_4))->SetBCUCtrlBKColor((R2_MVB_3_St_EMBrake_MA_Master));
      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_4))->SetBCUCtrlBKColor((R2_MVB_3_SafetyBrakeApply_B1_Master));

      ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_4))->SetBCUCtrlBKColor(!(R2_MVB_3_St_MtbCntMB_B1_Master));



  //Car_Not_Enabled
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_5))->SetCtrlText("--");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_5))->SetCtrlText(QString::number((float)R2_MVB_2_BCUEhForceMa_U8_Slave3*65.532/255,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_5))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMA_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_5))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMA_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_5))->SetBCUCtrlBKColor((R2_MVB_3_ParkBrakeMa_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_5))->SetBCUCtrlBKColor((R2_MVB_3_St_EMBrake_MA_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_5))->SetBCUCtrlBKColor((R2_MVB_3_SafetyBrakeApply_B1_Slave));

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_5))->SetBCUCtrlBKColor(!(R2_MVB_3_St_MtbCntMA_B1_Slave));


    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_6))->SetCtrlText(QString::number(R2_MVB_2_BCUWeight_U8_Slave3*100/255,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_6))->SetCtrlText(QString::number((float)R2_MVB_2_BCUEhForceP_U8_Slave3*65.532/255,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_6))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActP_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_6))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActP_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_6))->SetBCUCtrlBKColor((R2_MVB_3_ParkBrakeP_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_6))->SetBCUCtrlBKColor((R2_MVB_3_St_EMBrake_MA_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_6))->SetBCUCtrlBKColor((R2_MVB_3_SafetyBrakeApply_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_6))->SetBCUCtrlBKColor(!(R2_MVB_3_St_MtbCntP_B1_Slave));


    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_7))->SetCtrlText("--");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_7))->SetCtrlText(QString::number((float)R2_MVB_2_BCUEhForceMb_U8_Slave3*65.532/255,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_7))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMB_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_7))->SetBCUCtrlBKColor(!(R2_MVB_3_BrakeActMB_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_7))->SetBCUCtrlBKColor((R2_MVB_3_ParkBrakeMb_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_7))->SetBCUCtrlBKColor((R2_MVB_3_St_EMBrake_MA_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_7))->SetBCUCtrlBKColor((R2_MVB_3_SafetyBrakeApply_B1_Slave));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_7))->SetBCUCtrlBKColor(!(R2_MVB_3_St_MtbCntMB_B1_Slave));


}
void CBcuStatePageCoupled::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_1))->SetAlignment(Qt::AlignLeft);
}
void CBcuStatePageCoupled::OnCleardata()
{
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_2))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_3))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_4))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_5))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_6))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_6))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_6))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_6))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_6))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_6))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_6))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_6))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_6))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_6))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_6))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_7))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_7))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_7))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_7))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_7))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_7))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_7))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_7))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_7))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_7))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_7))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_5))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_5))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_5))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_5))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_5))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_5))->SetCtrlBKColor(Qt::black);


    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_4))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_4))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_4))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_4))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_4))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_4))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_3))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_2))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_6))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_6))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_6))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_6))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_6))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_6))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_6))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_6))->SetCtrlBKColor(Qt::black);
 //   ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_6))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_7))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_7))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_7))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_7))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_7))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_7))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_7))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_7))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_7))->SetCtrlBKColor(Qt::black);
}
