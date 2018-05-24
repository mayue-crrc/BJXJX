 #include "cbcustatepage.h"

ROMDATA g_PicRom_BcuStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
//  {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICBCU_PAGEDOWN},
//  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICBCU_PAGEUP},
  //{"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60, 19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_TRAINNUM },
  {"bjcar.png",   D_DEFAULT_FONT,      QRect(210, 75,220+150,  45),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
 // {"",              D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCUPAGE   },

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

  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(210,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(333,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(456,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(580,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //label
  {QSTR("显示项目"),           D_FONT(12),      QRect( 55,126,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_2_1    },
  {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_3_1     },
  {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,192,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_4_1     },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_5_1     },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_1     },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_1     },
  {QSTR(""),           D_DEFAULT_FONT,     QRect( 55,280,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_1     },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_9_1     },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,324,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_10_1   },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,346,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_11_1    },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,368,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_12_1    },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,390,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_13_1    },
  //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,412,150, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_14_1    },
  //label
  {QSTR("MA"),         D_DEFAULT_FONT,      QRect(215,128, 113, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(222,149, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,171, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,193, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,215, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,237, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,259, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,281, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,303, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_2    },
  {"",              D_DEFAULT_FONT,      QRect(222,325, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_2   },
  {"",              D_DEFAULT_FONT,      QRect(222,347, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_2   },
  {"",              D_DEFAULT_FONT,      QRect(222,369, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_2   },
  {"",              D_DEFAULT_FONT,      QRect(222,391, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_2   },

{QSTR("P"),         D_DEFAULT_FONT,      QRect(338,128, 113, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(345,149, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_3    },
{"",              D_DEFAULT_FONT,      QRect(345,171, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_3    },
{"",              D_DEFAULT_FONT,      QRect(345,193, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_3    },
{"",              D_DEFAULT_FONT,      QRect(345,215, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_3    },
{"",              D_DEFAULT_FONT,      QRect(345,237, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_3    },
{"",              D_DEFAULT_FONT,      QRect(345,259, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_3    },
{"",              D_DEFAULT_FONT,      QRect(345,281, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_3    },
{"",              D_DEFAULT_FONT,      QRect(345,303, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_3    },
{"",              D_DEFAULT_FONT,      QRect(345,325, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_3   },
{"",              D_DEFAULT_FONT,      QRect(345,347, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_3   },
{"",              D_DEFAULT_FONT,      QRect(345,369, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_3   },
{"",              D_DEFAULT_FONT,      QRect(345,391, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_3   },

{QSTR("MB"),         D_DEFAULT_FONT,      QRect(461,128, 113, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(468,149, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_4    },
{"",              D_DEFAULT_FONT,      QRect(468,171, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_4    },
{"",              D_DEFAULT_FONT,      QRect(468,193, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_4    },
{"",              D_DEFAULT_FONT,      QRect(468,215, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_4    },
{"",              D_DEFAULT_FONT,      QRect(468,237, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_4    },
{"",              D_DEFAULT_FONT,      QRect(468,259, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_4    },
{"",              D_DEFAULT_FONT,      QRect(468,281, 99, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_4    },
{"",              D_DEFAULT_FONT,      QRect(468,303, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_4    },
{"",              D_DEFAULT_FONT,      QRect(468,325, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_4   },
{"",              D_DEFAULT_FONT,      QRect(468,347, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_4   },
{"",              D_DEFAULT_FONT,      QRect(468,369, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_4   },
{"",              D_DEFAULT_FONT,      QRect(468,391, 99, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_4   },

  D_LAYER1_NAVIGATION_BAR
};
int g_BcuStatePageRomLen = sizeof(g_PicRom_BcuStatePage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CBcuStatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
//        ON_LBUTTONDOWN(ID_PICBCU_PAGEDOWN, OnDownButtonDown)
//        ON_LBUTTONUP(ID_PICBCU_PAGEDOWN, OnDownButtonUp)
//        ON_LBUTTONDOWN(ID_PICBCU_PAGEUP, OnUpButtonDown)
//        ON_LBUTTONUP(ID_PICBCU_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CBcuStatePage::CBcuStatePage()
{
    pageNo = MIN_PAGE;
    formerPageNo = 0;
}

void CBcuStatePage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
/*
bool parameter state:
0: green background color, black text->Ok or Applyed
3: gray background color, black text->Major/Minor event not occured or not ok or release
4: red background color, yellow text->Major/Minor event occured
*/
void CBcuStatePage::OnUpdatePage()
{
    if ( m_TrainCoupleActive == 2)
    {
        ChangePage(PAGE_ROM_INDEX_BCUSTATEPAGECOUPLED);
        return;
    }

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_1))->SetCtrlText(QSTR("载荷"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_1))->SetCtrlText(QSTR("EH制动力"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_1))->SetCtrlText(QSTR("液压缸压力"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_1))->SetCtrlText(QSTR("制动缓解"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_1))->SetCtrlText(QSTR("保持制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_1))->SetCtrlText(QSTR("防滑保护"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_1))->SetCtrlText(QSTR("常用制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_1))->SetCtrlText(QSTR("停车制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_1))->SetCtrlText(QSTR("紧急制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_1))->SetCtrlText(QSTR("安全制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_1))->SetCtrlText(QSTR("磁轨制动"));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_1))->SetCtrlText(QSTR(""));

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlText("--");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlText(QString::number((float)BCUCCU4_MA_ActualEHBrkForce_U16/1000,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlText(QString::number((float)BCUCCU4_MA_BrkPressure_U16*0.1,1,0));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlText(QString::number(BCUCCU1_MA_BrkRelease_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlText(QString::number(BCUCCU1_MA_HoldStep_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlText(QString::number(BCUCCU1_MA_WSPOn_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlText(QString::number(BCUCCU1_MA_Brking_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlText(QString::number(BCUCCU1_MA_StopBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlText(QString::number(BCUCCU1_MA_EmegBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlText(QString::number(BCUCCU1_MA_SecurityBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlText(QString::number(BCUCCU1_MA_TrackBrkOn_B1));
   // ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_2))->SetCtrlText(QString::number());

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetBCUCtrlBKColor(BCUCCU1_MA_BrkRelease_B1);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetBCUCtrlBKColor(!(BCUCCU1_MA_HoldStep_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetBCUCtrlBKColor(BCUCCU1_MA_WSPOn_B1);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetBCUCtrlBKColor(!(BCUCCU1_MA_Brking_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetBCUCtrlBKColor(!(BCUCCU1_MA_StopBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetBCUCtrlBKColor(!(BCUCCU1_MA_EmegBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetBCUCtrlBKColor(!(BCUCCU1_MA_SecurityBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetBCUCtrlBKColor(!(BCUCCU1_MA_TrackBrkOn_B1));
   // ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_2))->SetCtrlText(QString::number());


    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlText(QString::number((float)BCUCCU3_P_Load_U16*0.01,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlText(QString::number((float)BCUCCU4_P_ActualEHBrkForce_U16/1000,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_3))->SetCtrlText(QString::number((float)BCUCCU4_P_BrkPressure_U16*0.1,1,0));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlText(QString::number(BCUCCU1_P_BrkRelease_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlText(QString::number(BCUCCU1_P_HoldStep_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlText(QString::number(BCUCCU1_P_WSPOn_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlText(QString::number(BCUCCU1_P_Brking_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetCtrlText(QString::number(BCUCCU1_P_StopBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetCtrlText(QString::number(BCUCCU1_P_EmegBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetCtrlText(QString::number(BCUCCU1_P_SecurityBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetCtrlText(QString::number(BCUCCU1_P_TrackBrkOn_B1));
   // ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_3))->SetCtrlText(QString::number());

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetBCUCtrlBKColor(BCUCCU1_P_BrkRelease_B1);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetBCUCtrlBKColor(!(BCUCCU1_P_HoldStep_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetBCUCtrlBKColor(BCUCCU1_P_WSPOn_B1);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetBCUCtrlBKColor(!(BCUCCU1_P_Brking_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetBCUCtrlBKColor(!(BCUCCU1_P_StopBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetBCUCtrlBKColor(!(BCUCCU1_P_EmegBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetBCUCtrlBKColor(!(BCUCCU1_P_SecurityBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetBCUCtrlBKColor(!(BCUCCU1_P_TrackBrkOn_B1));
   // ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_3))->SetCtrlText(QString::number());


    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_4))->SetCtrlText("--");
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_4))->SetCtrlText(QString::number((float)BCUCCU4_MB_ActualEHBrkForce_U16/1000,1,0));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_4))->SetCtrlText(QString::number((float)BCUCCU4_MB_BrkPressure_U16*0.1,1,0));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_4))->SetCtrlText(QString::number(BCUCCU1_MB_BrkRelease_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_4))->SetCtrlText(QString::number(BCUCCU1_MB_HoldStep_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_4))->SetCtrlText(QString::number(BCUCCU1_MB_WSPOn_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_4))->SetCtrlText(QString::number(BCUCCU1_MB_Brking_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_4))->SetCtrlText(QString::number(BCUCCU1_MB_StopBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_4))->SetCtrlText(QString::number(BCUCCU1_MB_EmegBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_4))->SetCtrlText(QString::number(BCUCCU1_MB_SecurityBrk_B1));
//    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_4))->SetCtrlText(QString::number(BCUCCU1_MB_TrackBrkOn_B1));
   // ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_4))->SetCtrlText(QString::number());

    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_4))->SetBCUCtrlBKColor(BCUCCU1_MB_BrkRelease_B1);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_4))->SetBCUCtrlBKColor(!(BCUCCU1_MB_HoldStep_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_4))->SetBCUCtrlBKColor(BCUCCU1_MB_WSPOn_B1);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_4))->SetBCUCtrlBKColor(!(BCUCCU1_MB_Brking_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_4))->SetBCUCtrlBKColor(!(BCUCCU1_MB_StopBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_4))->SetBCUCtrlBKColor(!(BCUCCU1_MB_EmegBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_4))->SetBCUCtrlBKColor(!(BCUCCU1_MB_SecurityBrk_B1));
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_4))->SetBCUCtrlBKColor(!(BCUCCU1_MB_TrackBrkOn_B1));
   // ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_4))->SetCtrlText(QString::number());

}
void CBcuStatePage::OnDownButtonDown()
{

}

void CBcuStatePage::OnDownButtonUp()
{

}
void CBcuStatePage::OnUpButtonDown()
{

}

void CBcuStatePage::OnUpButtonUp()
{

}
void CBcuStatePage::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_1))->SetAlignment(Qt::AlignLeft);
}
