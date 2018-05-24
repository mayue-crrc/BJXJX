#include "cdcdcstatepagecoupled.h"

ROMDATA g_PicRom_DcdcStatePageCoupled[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
//  {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_DCDCSTATE_PAGEDOWN},
//  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_DCDCSTATE_PAGEUP},
//  {"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60, 19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_TRAINNUM },
  {"bjcar.png",   D_DEFAULT_FONT,      QRect(130, 90,240,  35),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
  {"bjcar.png",   D_DEFAULT_FONT,      QRect(370, 90,240,  35),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 25,125,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 25,147,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 25,169,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 25,191,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 25,213,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,235,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,257,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,279,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,301,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,323,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,345,585,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,367,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,389,585,  1),                  Qt::yellow,                  Qt::yellow,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,411,585,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect( 25,433,585,  1),                  Qt::yellow,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

  //V line

  {"",                   D_DEFAULT_FONT,      QRect(25,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(150,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(265,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(380,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(495,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(610,125,  1,88),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },



//  {"",                   D_DEFAULT_FONT,      QRect( 25,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect(210,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect(395,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
//  {"",                   D_DEFAULT_FONT,      QRect(580,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //label
  {QSTR(""),              D_FONT(6),      QRect( 30,126,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),          D_FONT(6),      QRect( 30,148,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_1    },
  {QSTR(""),          D_FONT(6),      QRect( 30,170,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_1     },
  {QSTR(""),              D_FONT(6),      QRect( 30,192,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_1     },
//  {QSTR(""),              D_FONT(6),      QRect( 30,214,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_1     },
//  {QSTR(""),              D_FONT(6),      QRect( 30,236,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_1     },
//  {QSTR(""),          D_FONT(6),      QRect( 30,258,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_1     },
//  {QSTR(""),          D_FONT(6),      QRect( 30,280,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_1     },
//  {QSTR(""),          D_FONT(6),      QRect( 30,302,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_1     },
//  {QSTR(""),             D_FONT(6),      QRect( 30,324,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_1   },
//  {QSTR(""),             D_FONT(6),      QRect( 30,346,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_1    },
//  {QSTR(""),             D_FONT(6),      QRect( 30,368,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_1    },
//  {QSTR(""),             D_FONT(6),      QRect( 30,390,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_1    },
//  {QSTR(""),             D_FONT(6),      QRect( 30,412,115, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_1    },



  //label
  {"RA",           D_DEFAULT_FONT,      QRect(165,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(175,148+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_2    },
  {"",              D_DEFAULT_FONT,      QRect(175,170+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_2    },
  {"",              D_DEFAULT_FONT,      QRect(175,192+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_2    },
//  {"",              D_DEFAULT_FONT,      QRect(175,214+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_2    },
//  {"",              D_DEFAULT_FONT,      QRect(175,236+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_2    },
//  {"",              D_DEFAULT_FONT,      QRect(175,258+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_2    },
//  {"",              D_DEFAULT_FONT,      QRect(175,280+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_2    },
//  {"",              D_DEFAULT_FONT,      QRect(175,302+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_2    },
//  {"",              D_DEFAULT_FONT,      QRect(175,324+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_2   },
//  {"",              D_DEFAULT_FONT,      QRect(175,346+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_2   },
//  {"",              D_DEFAULT_FONT,      QRect(175,368+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_2   },
//  {"",              D_DEFAULT_FONT,      QRect(175,390+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_2   },
//  {"",              D_DEFAULT_FONT,      QRect(175,412+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_2   },

  {"RB",           D_DEFAULT_FONT,      QRect(280,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(290,148+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_3    },
  {"",              D_DEFAULT_FONT,      QRect(290,170+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_3    },
  {"",              D_DEFAULT_FONT,      QRect(290,192+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_3    },
//  {"",              D_DEFAULT_FONT,      QRect(290,214+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_3    },
//  {"",              D_DEFAULT_FONT,      QRect(290,236+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_3    },
//  {"",              D_DEFAULT_FONT,      QRect(290,258+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_3    },
//  {"",              D_DEFAULT_FONT,      QRect(290,280+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_3    },
//  {"",              D_DEFAULT_FONT,      QRect(290,302+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_3    },
//  {"",              D_DEFAULT_FONT,      QRect(290,324+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_3   },
//  {"",              D_DEFAULT_FONT,      QRect(290,346+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_3   },
//  {"",              D_DEFAULT_FONT,      QRect(290,368+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_3   },
//  {"",              D_DEFAULT_FONT,      QRect(290,390+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_3   },
//  {"",              D_DEFAULT_FONT,      QRect(290,412+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_3   },

{"RA",           D_DEFAULT_FONT,      QRect(395,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(405,148+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_4    },
{"",              D_DEFAULT_FONT,      QRect(405,170+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_4    },
{"",              D_DEFAULT_FONT,      QRect(405,192+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_4    },
//{"",              D_DEFAULT_FONT,      QRect(405,214+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_4    },
//{"",              D_DEFAULT_FONT,      QRect(405,236+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_4    },
//{"",              D_DEFAULT_FONT,      QRect(405,258+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_4    },
//{"",              D_DEFAULT_FONT,      QRect(405,280+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_4    },
//{"",              D_DEFAULT_FONT,      QRect(405,302+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_4    },
//{"",              D_DEFAULT_FONT,      QRect(405,324+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_4   },
//{"",              D_DEFAULT_FONT,      QRect(405,346+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_4   },
//{"",              D_DEFAULT_FONT,      QRect(405,368+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_4   },
//{"",              D_DEFAULT_FONT,      QRect(405,392+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_4   },
//{"",              D_DEFAULT_FONT,      QRect(405,412+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_4   },

{"RB",           D_DEFAULT_FONT,      QRect(510,126,85, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(520,148+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_5    },
{"",              D_DEFAULT_FONT,      QRect(520,170+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_5    },
{"",              D_DEFAULT_FONT,      QRect(520,192+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_5    },
//{"",              D_DEFAULT_FONT,      QRect(520,214+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_5    },
//{"",              D_DEFAULT_FONT,      QRect(520,236+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_5    },
//{"",              D_DEFAULT_FONT,      QRect(520,258+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_5    },
//{"",              D_DEFAULT_FONT,      QRect(520,280+1,   65, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_5    },
//{"",              D_DEFAULT_FONT,      QRect(520,302+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_5    },
//{"",              D_DEFAULT_FONT,      QRect(520,324+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_5   },
//{"",              D_DEFAULT_FONT,      QRect(520,346+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_5   },
//{"",              D_DEFAULT_FONT,      QRect(520,368+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_5   },
//{"",              D_DEFAULT_FONT,      QRect(520,390+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_13_5   },
//{"",              D_DEFAULT_FONT,      QRect(520,412+1,   65, 18),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_14_5   },


  D_LAYER1_NAVIGATION_BAR
};
int g_DcdcStatePageCoupledRomLen = sizeof(g_PicRom_DcdcStatePageCoupled)/sizeof(ROMDATA);
BEGIN_MESSAGE_MAP(cdcdcstatepagecoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
//        ON_LBUTTONDOWN(ID_DCDCSTATE_PAGEDOWN, OnDownButtonDown)
//        ON_LBUTTONUP(ID_DCDCSTATE_PAGEDOWN, OnDownButtonUp)
//        ON_LBUTTONDOWN(ID_DCDCSTATE_PAGEUP, OnUpButtonDown)
//        ON_LBUTTONUP(ID_DCDCSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

cdcdcstatepagecoupled::cdcdcstatepagecoupled()
{
    pageNo = DCDC_MIN_PAGE;
    formerPageNo = 0;

}
void cdcdcstatepagecoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

/*
bool parameter state:
    yellow border color
    0: green background color, black text
    3: gray background color, black text
380V output voltage:
    -2000~2000,**.*
battery temperature:
    received value - 50,**.*
*/
void cdcdcstatepagecoupled::OnUpdatePage()
{
   if (  m_TrainCoupleActive == 1)
      //if(0)
     {
         ChangePage(PAGE_ROM_INDEX_DCDCSTATE);
         return;
     }

    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("超级电容输入电流"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("滤波器输入电压"));
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("超级电容电压"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("斩波器状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("预充电接触器状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("预充电状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("主接触器状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("HSCB状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("超级电容系统切除"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("超级电容接触器状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("超级电容斩波器状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_1))->SetCtrlText(QSTR("热敏开关状态"));
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_1))->SetCtrlText(QSTR("充放电状态"));

    switch(m_TestNum)
    //  switch(3)
    {
    case 3://重联，本车为主
        //Car_Enabled
        OnUpdatedatashow();
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText(QString::number((float)SC1ALL_iSc_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText(QString::number((float)SC1ALL_vFil_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText(QString::number((float)SC1ALL_vSc_I16*0.1,1,0));
//        if(SC1ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC1ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::black);
//            }
//        }

//        if(SC1ALL_stSca_ccfca_B1 )
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_precharge_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_cpca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_irca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_autoEscl_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_cscca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC1ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::black);
//            }
//        }


//        if(SC1ALL_stScb_tswsc_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stScb_caricaSc_B1)//充电
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if( SC1ALL_stScb_scaricaSc_B1)//放电
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlBKColor(Qt::black);
//            }
//        }


        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText(QString::number((float)SC2ALL_iSc_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText(QString::number((float)SC2ALL_vFil_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText(QString::number((float)SC2ALL_vSc_I16*0.1,1,0));

//        if(SC2ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC2ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::black);
//            }
//        }

//        if(SC2ALL_stSca_ccfca_B1 )
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_precharge_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_cpca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_irca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_autoEscl_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_cscca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC2ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::black);
//            }
//        }


//        if(SC2ALL_stScb_tswsc_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stScb_caricaSc_B1)//充电
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if( SC2ALL_stScb_scaricaSc_B1)//放电
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlBKColor(Qt::black);
//            }
//        }

        //Car_Not_Enabled
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_4))->SetCtrlText(QString::number((float)R2_MVB_2_ScuCurrCapRa_S8_Slave3*1300/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_4))->SetCtrlText(QString::number((float)R2_MVB_2_ScuFilterVoltRa_S8_Slave3*1500/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_4))->SetCtrlText(QString::number((float)R2_MVB_2_ScuVoltRa_S8_Slave3*1500/127,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_4))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_4))->SetCtrlText("--");

        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_5))->SetCtrlText(QString::number((float)R2_MVB_2_ScuCurrCapRb_S8_Slave3*1300/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_5))->SetCtrlText(QString::number((float)R2_MVB_2_ScuFilterVoltRb_S8_Slave3*1500/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_5))->SetCtrlText(QString::number((float)R2_MVB_2_ScuVoltRb_S8_Slave3*1500/127,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_5))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_5))->SetCtrlText("--");


        break;
    case 4://重联，本车为从
        //Car_Enabled
        OnUpdatedatashow();

        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText(QString::number((float)R2_MVB_2_ScuCurrCapRa_S8_Master3*1300/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText(QString::number((float)R2_MVB_2_ScuFilterVoltRa_S8_Master3*1500/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText(QString::number((float)R2_MVB_2_ScuVoltRa_S8_Master3*1500/127,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlText("--");

        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText(QString::number((float)R2_MVB_2_ScuCurrCapRb_S8_Master3*1300/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText(QString::number((float)R2_MVB_2_ScuFilterVoltRb_S8_Master3*1500/127,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText(QString::number((float)R2_MVB_2_ScuVoltRb_S8_Master3*1500/127,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlText("--");

        //Car_Not_Enabled
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_4))->SetCtrlText(QString::number((float)SC1ALL_iSc_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_4))->SetCtrlText(QString::number((float)SC1ALL_vFil_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_4))->SetCtrlText(QString::number((float)SC1ALL_vSc_I16*0.1,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_4))->SetCtrlText(QString::number(SC1ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_4))->SetCtrlText(QString::number(SC1ALL_stScb_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_4))->SetCtrlText(QString::number(SC1ALL_stScb_U16,2));

//        if(SC1ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC1ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_4))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_4))->SetCtrlBKColor(Qt::black);
//            }
//        }

//        if(SC1ALL_stSca_ccfca_B1 )
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_4))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_precharge_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_4))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_cpca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_4))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_irca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_4))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_autoEscl_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_4))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_cscca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_4))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC1ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_4))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_4))->SetCtrlBKColor(Qt::black);
//            }
//        }


//        if(SC1ALL_stScb_tswsc_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_4))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC1ALL_stScb_caricaSc_B1)//充电
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_4))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if( SC1ALL_stScb_scaricaSc_B1)//放电
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_4))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_4))->SetCtrlBKColor(Qt::black);
//            }
//        }


        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_5))->SetCtrlText(QString::number(SC2ALL_iSc_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_5))->SetCtrlText(QString::number(SC2ALL_vFil_I16*0.1,1,0));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_5))->SetCtrlText(QString::number(SC2ALL_vSc_I16*0.1,1,0));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_5))->SetCtrlText(QString::number(SC2ALL_stSca_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_5))->SetCtrlText(QString::number(SC2ALL_stScb_U16,2));
//        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_5))->SetCtrlText(QString::number(SC2ALL_stScb_U16,2));


//        if(SC2ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC2ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_5))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_5))->SetCtrlBKColor(Qt::black);
//            }
//        }

//        if(SC2ALL_stSca_ccfca_B1 )
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_5))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_precharge_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_5))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_cpca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_5))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_irca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_5))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_autoEscl_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_5))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_cscca_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_5))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stSca_ScChopper_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if(SC2ALL_stSca_civof_B1)
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_5))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_5))->SetCtrlBKColor(Qt::black);
//            }
//        }


//        if(SC2ALL_stScb_tswsc_B1)
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_5))->SetCtrlBKColor(Qt::red);
//        }

//        if(SC2ALL_stScb_caricaSc_B1)//充电
//        {
//            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_5))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            if( SC2ALL_stScb_scaricaSc_B1)//放电
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_5))->SetCtrlBKColor(Qt::red);
//            }
//            else
//            {
//                ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_5))->SetCtrlBKColor(Qt::black);
//            }
//        }

        break;
    default:
        break;
    }


}
void cdcdcstatepagecoupled::OnUpButtonDown()
{

}

void cdcdcstatepagecoupled::OnUpButtonUp()
{

}
void cdcdcstatepagecoupled::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_1))->SetAlignment(Qt::AlignLeft);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_1))->SetAlignment(Qt::AlignLeft);
}

void cdcdcstatepagecoupled::OnUpdatedatashow()
{
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_5))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_5))->SetCtrlBKColor(Qt::black);

//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_4))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_4))->SetCtrlBKColor(Qt::black);

//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlBKColor(Qt::black);

//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlBKColor(Qt::black);
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlBKColor(Qt::black);

//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_4))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_4))->SetCtrlText("");

//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_5))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_5))->SetCtrlText("");

//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_2))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_2))->SetCtrlText("");

//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_13_3))->SetCtrlText("");
//    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_14_3))->SetCtrlText("");
}

