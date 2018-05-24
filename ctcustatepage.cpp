#include "ctcustatepage.h"

ROMDATA g_PicRom_TcuState[] =
{
    /*string                font                            rc                       foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
   // {QSTR("重联"),           D_DEFAULT_FONT,     QRect( 50, 75, 60, 40),                   Qt::black,                  Qt::black,                  CONTROL_BUTTON,        ID_TCUSTATE_COUPLECHANGE},

//  {"down.png",           D_DEFAULT_FONT,     QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEDOWN},
//  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEUP},
//  {"0000",               D_DEFAULT_FONT,      QRect(440, 70 ,60, 15),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_CARNUM},
  {"bjcar.png",    D_DEFAULT_FONT,      QRect(210, 75,410, 50),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE         },
  //{"",                   D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            IDLABEL_TCUSTATEPAGE        },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(210,145,410, 1),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,165,570,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,185,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,205,570,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,225,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,245,570,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,265,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,285,570,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,305,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,325,570,  1),                  Qt::cyan,                   Qt::black,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,345,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,365,570,  1),                  Qt::cyan,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,385,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,405,570,  1),                  Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(210,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(470-55,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(620,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(395-83,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(545-27,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },

  //label
  {QSTR("显示项目"),              D_FONT(12),      QRect( 55,126,150, 38),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,166,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_2_1                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,186,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_3_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,206,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_4_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,226,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_5_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,246,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_6_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,266,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_7_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,286,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_8_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,306,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_9_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,326,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_10_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,346,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_11_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,366,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_12_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,386,150, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_13_1                },



  {"MA",                 D_DEFAULT_FONT,      QRect(321-110,126,148+55, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MB",                 D_DEFAULT_FONT,      QRect(471-55,126,148+55, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MA1",                 D_DEFAULT_FONT,      QRect(321-110,146,74+27, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MA2",                 D_DEFAULT_FONT,      QRect(396-83,146,74+27, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MB1",                 D_DEFAULT_FONT,      QRect(471-55,146,74+27, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MB2",                 D_DEFAULT_FONT,      QRect(546-27,146,74+27, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },


  //red area
  {"",                   D_DEFAULT_FONT,      QRect(338-110,166, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_2      },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,166, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_2       },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,186, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_3        },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,186, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_3         },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,206, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_4        },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,206, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_4         },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,226, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_5      },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,226, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_5       },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,246, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_6         },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,246, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_6          },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,266, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_7        },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,266, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_7         },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,286, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_8       },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,286, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_8         },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,306, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_9       },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,306, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_9        },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,326, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_10        },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,326, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_10         },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,346, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_11       },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,346, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_11        },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,366, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_12       },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,366, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_12        },
  {"",                   D_DEFAULT_FONT,      QRect(338-110,386, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_13       },
  {"",                   D_DEFAULT_FONT,      QRect(488-55,386, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_13        },

{"",                   D_DEFAULT_FONT,      QRect(413-83,166, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_2      },
{"",                   D_DEFAULT_FONT,      QRect(563-27,166, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_2       },
{"",                   D_DEFAULT_FONT,      QRect(413-83,186, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_3        },
{"",                   D_DEFAULT_FONT,      QRect(563-27,186, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_3         },
{"",                   D_DEFAULT_FONT,      QRect(413-83,206, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_4        },
{"",                   D_DEFAULT_FONT,      QRect(563-27,206, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_4         },
{"",                   D_DEFAULT_FONT,      QRect(413-83,226, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_5      },
{"",                   D_DEFAULT_FONT,      QRect(563-27,226, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_5       },
{"",                   D_DEFAULT_FONT,      QRect(413-83,246, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_6         },
{"",                   D_DEFAULT_FONT,      QRect(563-27,246, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_6          },
{"",                   D_DEFAULT_FONT,      QRect(413-83,266, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_7        },
{"",                   D_DEFAULT_FONT,      QRect(563-27,266, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_7         },
{"",                   D_DEFAULT_FONT,      QRect(413-83,286, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_8       },
{"",                   D_DEFAULT_FONT,      QRect(563-27,286, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_8         },
{"",                   D_DEFAULT_FONT,      QRect(413-83,306, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_9       },
{"",                   D_DEFAULT_FONT,      QRect(563-27,306, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_9        },
{"",                   D_DEFAULT_FONT,      QRect(413-83,326, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_10        },
{"",                   D_DEFAULT_FONT,      QRect(563-27,326, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_10         },
{"",                   D_DEFAULT_FONT,      QRect(413-83,346, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_11       },
{"",                   D_DEFAULT_FONT,      QRect(563-27,346, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_11        },
{"",                   D_DEFAULT_FONT,      QRect(413-83,366, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_12       },
{"",                   D_DEFAULT_FONT,      QRect(563-27,366, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_12        },
{"",                   D_DEFAULT_FONT,      QRect(413-83,386, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_13       },
{"",                   D_DEFAULT_FONT,      QRect(563-27,386, 40+27, 18),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_13        },

/**/
  D_LAYER1_NAVIGATION_BAR
};
int g_TcuStateRomLen = sizeof(g_PicRom_TcuState)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CTcuStatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)

        //ON_LBUTTONDOWN(ID_TCUSTATE_COUPLECHANGE, OnDownButtonDown)

//        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEDOWN, OnDownButtonDown)
//        ON_LBUTTONUP(ID_TCUSTATE_PAGEDOWN, OnDownButtonUp)
//        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEUP, OnUpButtonDown)
//        ON_LBUTTONUP(ID_TCUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CTcuStatePage::CTcuStatePage()
{
  pageNo = TCU_MIN_PAGE;
  formerPageNo = 0;
}


void CTcuStatePage::OnUpdatePage()
{

   if ( m_TrainCoupleActive ==2)
   // if(1)
    {
        ChangePage(PAGE_ROM_INDEX_TCUSTATEPAGECOUPLED);
        return;
    }

    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetCtrlText(QSTR("电机频率"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("滤波电压"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetCtrlText(QSTR("线电流"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetCtrlText(QSTR("电机电流"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetCtrlText(QSTR("牵引力请求"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetCtrlText(QSTR("电机扭矩"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetCtrlText(QSTR("电机温度"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetCtrlText(QSTR("制动斩波电流"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetCtrlText(QSTR("逆变器频率"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetCtrlText(QSTR("调制比"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_12_1))->SetCtrlText(QSTR("斩波占空比"));
    ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_13_1))->SetCtrlText(QSTR("实际制动电阻"));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlText(QString::number((float)(TCU1CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlText(QString::number((float)TCU1CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlText(QString::number((float)TCU1CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlText(QString::number((float)TCU1CCU_6_MotorCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlText(QString::number((float)TCU1CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlText(QString::number((float)TCU1CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlText(QString::number((float)(TCU1CCU_3_Tmot1_S16)/10,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlText(QString::number((float)TCU1CCU_6_BrkChopperCur_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlText(QString::number((float)TCU1CCU_6_InverterFreq_U16*0.01,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlText(QString::number((float)TCU1CCU_6_ModulatRatio_U16,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_12))->SetCtrlText(QString::number((float)TCU1CCU_6_ChopperDutyCyc_U16*13107/65535,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_13))->SetCtrlText(QString::number((float)TCU1CCU_6_BrkResistor_U16,1,0));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlText(QString::number((float)(TCU2CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlText(QString::number((float)TCU2CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlText(QString::number((float)TCU2CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlText(QString::number((float)TCU2CCU_6_MotorCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlText(QString::number((float)TCU2CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlText(QString::number((float)TCU2CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlText(QString::number((float)(TCU2CCU_3_Tmot1_S16)/10,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlText(QString::number((float)TCU2CCU_6_BrkChopperCur_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlText(QString::number((float)TCU2CCU_6_InverterFreq_U16*0.01,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlText(QString::number((float)TCU2CCU_6_ModulatRatio_U16,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_12))->SetCtrlText(QString::number((float)TCU2CCU_6_ChopperDutyCyc_U16*13107/65535,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_13))->SetCtrlText(QString::number((float)TCU2CCU_6_BrkResistor_U16,1,0));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlText(QString::number((float)(TCU3CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlText(QString::number((float)TCU3CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlText(QString::number((float)TCU3CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlText(QString::number((float)TCU3CCU_6_MotorCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlText(QString::number((float)TCU3CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlText(QString::number((float)(float)TCU3CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlText(QString::number((float)(TCU3CCU_3_Tmot1_S16)/10,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlText(QString::number((float)TCU3CCU_6_BrkChopperCur_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlText(QString::number((float)TCU3CCU_6_InverterFreq_U16*0.01,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlText(QString::number((float)TCU3CCU_6_ModulatRatio_U16,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_12))->SetCtrlText(QString::number((float)TCU3CCU_6_ChopperDutyCyc_U16*13107/65535,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_13))->SetCtrlText(QString::number((float)TCU3CCU_6_BrkResistor_U16,1,0));

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlText(QString::number((float)(TCU4CCU_3_Fm1A_U16)/100,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlText(QString::number((float)TCU4CCU_6_FilterVolt_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlText(QString::number((float)TCU4CCU_6_LineCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlText(QString::number((float)TCU4CCU_6_MotorCurrent_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlText(QString::number((float)TCU4CCU_6_EffDevelop_U16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlText(QString::number((float)TCU4CCU_6_Torque_S16/1000,10,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlText(QString::number((float)(TCU4CCU_3_Tmot1_S16)/10,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlText(QString::number((float)TCU4CCU_6_BrkChopperCur_S16*0.1,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlText(QString::number((float)TCU4CCU_6_InverterFreq_U16*0.01,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlText(QString::number((float)TCU4CCU_6_ModulatRatio_U16,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_12))->SetCtrlText(QString::number((float)TCU4CCU_6_ChopperDutyCyc_U16*13107/65535,1,0));
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_13))->SetCtrlText(QString::number((float)TCU4CCU_6_BrkResistor_U16,1,0));




    //******************************
}


void CTcuStatePage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CTcuStatePage::OnDownButtonDown()
{

       ChangePage(PAGE_ROM_INDEX_TCUSTATEPAGECOUPLED);



//    CBitmapButton *bitmapButton;

//    if( pageNo<TCU_MAX_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downpress.png");
//        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downgray.png");
//    }
}

void CTcuStatePage::OnDownButtonUp()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo<TCU_MAX_PAGE )
//    {
//        pageNo++;
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("down.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    if( pageNo==TCU_MAX_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
//        bitmapButton->SetCtrlText("downgray.png");
//    }
//    ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP))->SetCtrlText("up.png");
}
void CTcuStatePage::OnUpButtonDown()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo>TCU_MIN_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("uppress.png");
//        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("upgray.png");
//    }
}

void CTcuStatePage::OnUpButtonUp()
{
//    CBitmapButton *bitmapButton;

//    if( pageNo>TCU_MIN_PAGE )
//    {
//        pageNo--;
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("up.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    if( pageNo==TCU_MIN_PAGE )
//    {
//        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
//        bitmapButton->SetCtrlText("upgray.png");
//        bitmapButton->ChangeButtonState(LBUTTON_UP);
//    }
//    ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN))->SetCtrlText("down.png");
}
void CTcuStatePage::OnInitPage()
{
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_13_1))->SetAlignment(Qt::AlignLeft);

}

