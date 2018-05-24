#include <qdebug.h>

#include "cmainpage.h"
#include "faultcommonprocess.h"
#include "dialog.h"
#include "databuffer.h"
#include "cglobal.h"

static int g_timertick = 0;
static int g_2slasttick = -1;

void MainFaultTimerProc(void *args)
{
    g_timertick++;
//    if (0 == (g_timertick % 600))
//    {
//        if (!g_communication_ok_flag)
//        {
//            SaveFaultsHistory();
//        }
//    }
    if (0x7fffffff == g_timertick)
    {
        g_timertick = 0;
    }
}

ROMDATA g_PicRom_Main[] =
{
    /*string                                font            rc                       foreground color     background color                control type                   ID           */
  D_COMMON_PAGE_HEADER

  D_LAYER1_NAVIGATION_BAR



  {"",                        D_DEFAULT_FONT,      QRect(340, 90,220,220),      Qt::yellow,                    Qt::transparent,                CONTROL_SPEED,                   ID_PICMAIN_SPEEDCTRL         },
  {"",                        D_DEFAULT_FONT,      QRect(80, 90,220,220),      Qt::yellow,                    Qt::transparent,                CONTROL_SPEED,                 ID_PICMAIN_TCUCTRL         },
  {"",                        D_DEFAULT_FONT,      QRect(100,510,540,140),      QColor(250,250,250),           QColor(50, 50, 50),             CONTROL_TRAINDIAGRAM,         ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM },
  //{"",                        D_FONT_BOLD(38),     QRect(220,150, 65, 65),      QColor(250,250,250),           QColor(50, 50, 50),             CONTROL_COUNTDOWN,            ID_PICMAIN_COUNTDOWN_COUNTDOWN },
  {QSTR("警惕旁路"),                             D_FONT(4),      QRect(10, 95-5,60,20),      Qt::yellow,                    Qt::gray,                CONTROL_LABEL,                ID_PICMAIN_RUN           },
  {QSTR("门旁路"),                               D_FONT(3),      QRect(10, 120-5,60,20),      Qt::yellow,                    Qt::gray,                CONTROL_LABEL,                ID_PICMAIN_DOORBP           },
  {QSTR("零速旁路"),                             D_FONT(3),      QRect(10, 145-5,60,20),      Qt::yellow,                    Qt::gray,                CONTROL_LABEL,                      ID_PICMAIN_COUPLED   },

  {QSTR("安全"),                  D_FONT(6),           QRect( 570, 90,60, 30),    Qt::black,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_WASHMODE  },
  {QSTR(""),                  D_FONT(6),           QRect( 569,159-70, 63, 2),    Qt::white,                    Qt::black,                      CONTROL_LABEL,               ID_PICMAIN_LABEL_WASHMODE1 },
  {QSTR(""),                  D_FONT(6),           QRect( 569,159-70, 2, 33),    Qt::white,                    Qt::black,                      CONTROL_LABEL,               ID_PICMAIN_LABEL_WASHMODE2 },
  {QSTR(""),                  D_FONT(6),           QRect( 569,191-70, 63, 2),    Qt::white,                    Qt::black,                      CONTROL_LABEL,               ID_PICMAIN_LABEL_WASHMODE3 },
  {QSTR(""),                  D_FONT(6),           QRect( 631,159-70, 2, 33),    Qt::white,                    Qt::black,                      CONTROL_LABEL,               ID_PICMAIN_LABEL_WASHMODE4 },

  {QSTR("后退"),                  D_FONT(6),           QRect( 570,125,60, 30),    Qt::white,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_BACKMODE  },
  {QSTR(""),                  D_FONT(6),           QRect( 569,159-35, 63, 2),    Qt::white,                    Qt::black,                      CONTROL_LINE,               ID_PICMAIN_LABEL_BACKMODE1 },
  {QSTR(""),                  D_FONT(6),           QRect( 569,159-35, 2, 33),    Qt::white,                    Qt::black,                      CONTROL_LINE,               ID_PICMAIN_LABEL_BACKMODE2 },
  {QSTR(""),                  D_FONT(6),           QRect( 569,191-35, 63, 2),    Qt::white,                    Qt::black,                      CONTROL_LINE,               ID_PICMAIN_LABEL_BACKMODE3 },
  {QSTR(""),                  D_FONT(6),           QRect( 631,159-35, 2, 33),    Qt::white,                    Qt::black,                      CONTROL_LINE,               ID_PICMAIN_LABEL_BACKMODE4 },

 //   {QSTR("注意：\n供电方\n式转换"),   D_FONT(6),       QRect( 12,217-15,59,54),    Qt::black,                    Qt::white,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_HIGHACCELERATE  },
 //   {QSTR("注意：\n进入道\n岔区"),               D_FONT(6),           QRect( 572,214-15,59, 54),    Qt::black,                    Qt::white,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_SAFETYBRK  },
    {"Arrow_Oringe_L.bmp",                        D_DEFAULT_FONT,      QRect(220, 65,50,30),      Qt::yellow,                    Qt::black,                CONTROL_IMAGE,                ID_PICMAIN_IMAGE_LEFT          },
    {"Arrow_Oringe_R.bmp",                        D_DEFAULT_FONT,      QRect(365, 65,50,30),      Qt::yellow,                    Qt::black,                CONTROL_IMAGE,                ID_PICMAIN_IMAGE_RIGHT          },
    {"left_Direc_green.png",                        D_DEFAULT_FONT,      QRect(15, 310,25,90),      Qt::yellow,                    Qt::black,                CONTROL_IMAGE,               ID_PICMAIN_IMAGE_MC2LEFT          },
    {"right_Direc_green.png",                        D_DEFAULT_FONT,      QRect(600, 310,25,90),      Qt::yellow,                    Qt::black,                CONTROL_IMAGE,                ID_PICMAIN_IMAGE_MC2RIGHT           },
    {"speed_limit_stop.png",    D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_STOP },
    {"speed_limit_3.png",       D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_3KM },
    {"speed_limit_10.png",      D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_10KM },
    {"speed_limit_20.png",      D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_20KM },
    {"speed_limit_40.png",      D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_40KM },
    {"speed_limit_60.png",      D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_60KM },
    {"speed_limit_30.png",      D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_30KM },
    {"speed_limit_50.png",      D_DEFAULT_FONT,      QRect(280, 65,75,70),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_50KM },

};
int g_MainRomLen = sizeof(g_PicRom_Main)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CMainPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
      //  ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA,OnButtonInLittleNoPowerAreaDown)
      //  ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA,OnButtonInLargeNoPowerAreaDown)
        //*******************15.11.30
//        ON_LBUTTONDOWN(ID_COM_WARNING, OnWarningButtonDown)
//        ON_LBUTTONUP(ID_COM_WARNING, OnWarningButtonUp)

        //********************************888
//        ON_LBUTTONDOWN(ID_PICMAIN_RUN, OnRunButtonDown)
//        ON_LBUTTONUP(ID_PICMAIN_RUN, OnRunButtonUp)
//        ON_LBUTTONDOWN(ID_PICMAIN_COUPLED, OnCoupledButtonDown)
//        ON_LBUTTONUP(ID_PICMAIN_COUPLED, OnCoupledButtonUp)

//        ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_RIGHTTURN, OnRightTurnButtonDown)

END_MESSAGE_MAP()

CMainPage::CMainPage()
{
    m_currentfaulttimerid = m_timer.add_timer("main_curfault_tmr", 1000, MainFaultTimerProc, this);
    m_turnlighton_bool = false;
    m_tcuoklighton_bool = false;
    m_tcuEBfaultlighton_bool = false;
}

CMainPage::~CMainPage()
{
    m_timer.del_timer(m_currentfaulttimerid);
}

void CMainPage::OnInitPage()
{

    //m_TrainCoupleMode = 1;
    m_TwOpenClose =false;
    m_currentfaulttimerid = -1;
    flg1 = false;
        flg2 = false;
            flgt = false;
                flgb = false;
                tcubar = 0;
                bcubar = 0;
//    ((cbar *)GetDlgItem(ID_PICMAIN_BART))->SetBarValueUP( 0 );
//    ((cbar *)GetDlgItem(ID_PICMAIN_BARB))->SetBarValueDOWN( 0 );
//    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->m_bAutoUpState = false;
//    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->m_bAutoUpState = false;
//    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->m_bAutoUpState = false;
//    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->m_bAutoUpState = false;
                ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();


}

void CMainPage::OnUpdatePage()
{

     //*********BJXJ_databuffer***********************************


        //******************零速旁路
        if((LCUCCU_3_MA_DI_1_CH6_B1)||(LCUCCU_3_MB_DI_1_CH6_B1))//SPEED0_Bypass
        {
            ((CLabel*)GetDlgItem(ID_PICMAIN_COUPLED))->SetCtrlBKColor(Qt::yellow);
            ((CLabel*)GetDlgItem(ID_PICMAIN_COUPLED))->SetTxtColor(Qt::black);
        }
        else
        {
            ((CLabel*)GetDlgItem(ID_PICMAIN_COUPLED))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICMAIN_COUPLED))->SetTxtColor(Qt::black);
        }

        //****************警惕旁路
       //if(R2_MVB_3_DsdSt_B1_Master)
                                     //(Driver Safety Device Function Bypass)

        if((LCUCCU_3_MA_DI_1_CH9_B1)||(LCUCCU_3_MB_DI_1_CH9_B1))//DCR_BYP
                                                                //(dead man)
        {
            ((CLabel*)GetDlgItem(ID_PICMAIN_RUN))->SetCtrlBKColor(Qt::yellow);
            ((CLabel*)GetDlgItem(ID_PICMAIN_RUN))->SetTxtColor(Qt::black);
        }
        else
        {
            ((CLabel*)GetDlgItem(ID_PICMAIN_RUN))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICMAIN_RUN))->SetTxtColor(Qt::black);
        }
        //*****************门旁路
        //门旁路**待定**
        if((LCUCCU_3_MA_DI_5_CH6_B1)||(LCUCCU_3_MB_DI_5_CH6_B1))//DSD_BYP
                                                                  //Door Safety loop Bypass
           {
            ((CLabel*)GetDlgItem(ID_PICMAIN_DOORBP))->SetCtrlBKColor(Qt::yellow);
            ((CLabel*)GetDlgItem(ID_PICMAIN_DOORBP))->SetTxtColor(Qt::black);

        }
        else
        {

               ((CLabel*)GetDlgItem(ID_PICMAIN_DOORBP))->SetCtrlBKColor(Qt::black);
               ((CLabel*)GetDlgItem(ID_PICMAIN_DOORBP))->SetTxtColor(Qt::black);


        }
        //*****************速度仪表盘 & 级位仪表盘
     ((CSpeedCtrl*)GetDlgItem(ID_PICMAIN_SPEEDCTRL))->SetMode(2);
     ((CSpeedCtrl*)GetDlgItem(ID_PICMAIN_SPEEDCTRL))->SetValue( R2_MVB_3_VehSpeed_U16*(0.1));//本车车速 /R2_MVB_3_VehSpeed_U16_Master
     //((CSpeedCtrl*)GetDlgItem(ID_PICMAIN_SPEEDCTRL))->SetValue( T2_sendMethod*(0.1));//本车车速 /R2_MVB_3_VehSpeed_U16_Master
     ((CSpeedCtrl*)GetDlgItem(ID_PICMAIN_TCUCTRL))->SetMode(1);
     float m_ctrlTCU;
     int a = 0 ;
     m_ctrlTCU = 0;
     int Traction;
     Traction = 0;
     //牵引制动*待定
     if((R2_MVB_3_Veh_Status_E4==7)
      ||(R2_MVB_3_Veh_Status_E4==8))
     {
         Traction=1;
     }
     else
     {
         if((R2_MVB_3_Veh_Status_E4==2)
          ||(R2_MVB_3_Veh_Status_E4==3)
          ||(R2_MVB_3_Veh_Status_E4==4)
          ||(R2_MVB_3_Veh_Status_E4==5))
         {
             Traction=0;
         }
         else
         {
              Traction=2;
         }
     }
     if(Traction==1)
     {
        //m_ctrlTCU= R2_MVB_3_Effort_U16_Master;
       m_ctrlTCU = (R2_MVB_3_Effort_U16*0.1)+100;
         //m_ctrlTCU =30+100;
      }
     else
     {
         if(Traction==0)
     {
         //m_ctrlTCU= 0 - R2_MVB_3_Effort_U16_Master;
          m_ctrlTCU =100-(R2_MVB_3_Effort_U16*0.1);
          //m_ctrlTCU =100-70;
      }
         else
         {
         //    m_ctrlTCU = R2_MVB_3_Effort_U16*(1/10);
             m_ctrlTCU = 100;

         }
     }

      ((CSpeedCtrl*)GetDlgItem(ID_PICMAIN_TCUCTRL))->SetValue( m_ctrlTCU);
        //**************箭头
      //前进后退箭头*待定 20161109 add poscondition
        if(TC1_HMI == 1)
        {
            if(LCUCCU_3_P_DI_3_CH20_B1)
            {
                ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->ShowImage();
            }
            else
            {
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->HideImage();
            }
            if(LCUCCU_3_P_DI_3_CH19_B1)
            {
                ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->ShowImage();
            }
            else
            {
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->HideImage();
            }
        }else if(TC2_HMI == 1)
        {
            if(LCUCCU_3_P_DI_3_CH19_B1)
            {
                ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->ShowImage();
            }
            else
            {
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->HideImage();
            }
            if(LCUCCU_3_P_DI_3_CH20_B1)
            {
                ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->ShowImage();
            }
            else
            {
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->HideImage();
            }
        }else
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->HideImage();
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->HideImage();

        }


           //*********************安全
           if(R2_MVB_3_Veh_Status_E4==2)
             {
                 ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_WASHMODE ))->SetCtrlBKColor(Qt::red);
             }
             else
             {
                 ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_WASHMODE ))->SetCtrlBKColor(Qt::green);
             }

             //((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_WASHMODE ))->SetCtrlText(QString::number(Traction)+":"+QString::number(m_ctrlTCU)+":"+QString::number(R2_MVB_3_Effort_U16));
             //******************运行模式 R2_MVB_3_Veh_Status_E4_Master & R2_MVB_3_Drv_Status_E4 //get riom signals
             /*if(R2_MVB_3_Veh_Status_E4==7)
              {
                ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("高加速\n模式"));
              }
              else
              {
                if(R2_MVB_3_Drv_Status_E4 == 1 )//0001
                  {
                      ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("紧急运行\n模式"));
                  }
                else
                  {
                      if(R2_MVB_3_Drv_Status_E4 == 4)//0100
                      {
                        ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("洗车模式"));
                      }
                      else
                      {
                         if(R2_MVB_3_Drv_Status_E4 == 5)//0101
                         {
                            ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("后退模式"));
                         }
                         else
                         {
                            if(R2_MVB_3_Drv_Status_E4 == 6 )//0110
                            {
                                ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("前进模式"));
                             }
                            else
                            {
                                ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("模式")+QString::number(R2_MVB_3_Drv_Status_E4)+QString::number(R2_MVB_3_Veh_Status_E4));
                            }
                         }
                      }
                 }
              }
             */

             if(MVB_STAT_LCU_MA_key_B1)//ma
             {
                 if(MVB_STAT_LCU_MA_jinjiyunxing_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("紧急运行\n模式"));
                 }else if(MVB_STAT_LCU_MA_gaojiasu_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("高加速\n模式"));
                 }else if(MVB_STAT_LCU_MA_xiche_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("洗车模式"));
                 }else if(MVB_STAT_LCU_MA_xianghou_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("后退模式"));
                 }else
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("前进模式"));
                 }
             }else if(MVB_STAT_LCU_MB_key_B1)//mb
             {
                 if(MVB_STAT_LCU_MB_jinjiyunxing_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("紧急运行\n模式"));
                 }else if(MVB_STAT_LCU_MB_gaojiasu_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("高加速\n模式"));
                 }else if(MVB_STAT_LCU_MB_xiche_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("洗车模式"));
                 }else if(MVB_STAT_LCU_MB_xianghou_B1)
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("后退模式"));
                 }else
                 {
                     ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR("前进模式"));
                 }
             }else
             {
                 ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_BACKMODE))->SetCtrlText(QSTR(""));
             }
             //********************注意：供电方式转换*待定
              /*
                a= PA1All_NextStationID_U8;
                b= PA1All_ArrivalStationID_U8;
                   */
//             if(PA1All_NextStationID_U8==3)
//             {
//                 ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_HIGHACCELERATE ))->SetCtrlBKColor(Qt::red);
//             }
//             else
//             {
//                 ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_HIGHACCELERATE ))->SetCtrlBKColor(Qt::black);
//             }

                //********************注意：进入岔道区  11.20//*待定  2016/12/14 zhushi

//                if(CCUALL_TwOpen_B1)
//                {
//                    m_TwOpenClose = true;
//                }
//               if(CCUALL_TwClose_B1)
//                {
//                    m_TwOpenClose = false;
//                }
//               if(m_TwOpenClose)
//                 {
//                 ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_SAFETYBRK))->SetCtrlBKColor(Qt::red);
//                 }
//                else
//                 {
//                 ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_SAFETYBRK))->SetCtrlBKColor(Qt::black);
//                 }

     UpdateTrainDiagram();
     //((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State(true);
     UpdateListBoxCtrl();
     UpdateCurrentFaultDisplay(false);
     UpdateTotalMileage();
     //UpdateNextDistance();
     UpdateSpeedLimit();
     //UpdateDirection();
    // UpdateImage();

     //    receiveData[362]=receiveData[362] | bit0;
     //    receiveData[120]=255;

     //    QVariant var;
     //    var = MAIN_DEADMANDECOUNTER_QUINT8;
     //    if( MAIN_VIGILANCEBYPASS_BOOL )
     //    {

//        var=-1;
//    }
//    GetDlgItem(ID_PICMAIN_COUNTDOWN_COUNTDOWN)->SetCtrlText( var.toString() );
    // by lsz  demo

     //((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::green);

//    ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetValue( MAIN_DCDCPERSENT_USINT,qMax( (uint)(SUPERCAPVOLTAGE_MC1_DCDC_WORD),(uint)(SUPERCAPVOLTAGE_MC2_DCDC_WORD)) );

//    if(MAIN_DCDCPERSENT_USINT>20)
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::green);
//    else if(MAIN_DCDCPERSENT_USINT>5)
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::yellow);
//    else
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::red);

//    ((cbar *)GetDlgItem(ID_PICMAIN_BART))->SetBarValueUP( 0.3 );
//    ((cbar *)GetDlgItem(ID_PICMAIN_BARB))->SetBarValueDOWN( 0.4 );
    //    if(g_communication_ok_flag)
//        ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_DEGREEMODE_TITLE))->SetCtrlText(QSTR(""));
//    else
//        //((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_DEGREEMODE_TITLE))->SetCtrlText(QSTR("降级通信模式！"));
//        ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_DEGREEMODE_TITLE))->SetCtrlText(QSTR(""));


//    if( (MAIN_MC1KEYACTIVE_BOOL && MAIN_MC1_HMI_BOOL && !(MAIN_MC2_HMI_BOOL)) ||
//        (MAIN_MC2KEYACTIVE_BOOL && MAIN_MC2_HMI_BOOL && !(MAIN_MC1_HMI_BOOL)) )
//    {
//        if(g_InLittleNopowerArea_Bool)
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_DOWN )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_DOWN);
//        }
//        else
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
//        }

//        if(g_InLargeNoPowerArea_Bool)
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_DOWN )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_DOWN);
//        }
//        else
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
//        }
//    }
//    else
//    {
//        g_InLittleNopowerArea_Bool = false;
//        if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//            ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);

//        g_InLargeNoPowerArea_Bool = false;
//        if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//            ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
//    }

    if(flg1)
    {
        if(!flg2)
        {

            if(tcubar < 1)
            {
                tcubar += 0.2;
                bcubar = 0;

            }else if(tcubar > 0)
            {
                bcubar = 0;

                tcubar -= 0.5;
                flg2 = true;
            }


        }
        else
        {
            if(bcubar < 1)
            {
                tcubar = 0;
                bcubar += 0.2;

            }else if(bcubar > 0)
            {
                tcubar = 0;

                bcubar -= 0.5;
                flg2 = false;
            }

        }
    }
//        ((cbar *)GetDlgItem(ID_PICMAIN_BART))->SetBarValueUP( tcubar );
//        ((cbar *)GetDlgItem(ID_PICMAIN_BARB))->SetBarValueDOWN( bcubar );
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::green);
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetValue( tcubar*100,110 );
}


void CMainPage::UpdateDirection()
{
//    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->HideImage();
//    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->HideImage();
//    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();
//    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();

//    if(LCUCCU_3_P_DI_3_CH20_B1)
//    {
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->ShowImage();
//    }
//    if(LCUCCU_3_P_DI_3_CH19_B1)
//    {
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->ShowImage();
//    }

    //if(1)



    // back or forward

    // TODO
    /*
    if(MAIN_TRAINCOUPLED_BOOL)
    {
        if (MAIN_FORWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->ShowImage();
        }
        else if (MAIN_BACKWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->ShowImage();
        }
    }

    else if( ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getCar1Key1State() )// current state:mc1 key:true,mc2 key false
    {
        if (MAIN_FORWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->ShowImage();
        }
        else if (MAIN_BACKWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->ShowImage();
        }
    }
    else if( ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getCar1Key2State() )// current state:mc1 key:false,mc2 key true
    {
        if (MAIN_BACKWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->ShowImage();
        }
        else if (MAIN_FORWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->ShowImage();
        }
    }
    else
    {
    }
*/

//    if(LeftTurnCmd_Bool)
//    {
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->SetCtrlBKColor(Qt::yellow);
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->SetCtrlBKColor(Qt::black);
//    }
//    if(RightTurnCmd_Bool)
//    {
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->SetCtrlBKColor(Qt::black);
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->SetCtrlBKColor(Qt::yellow);
//    }

    // turn lingt 2HZ
//    if(LeftTurnCmd_Bool|RightTurnCmd_Bool)
//    {
//        if(m_turnlighton_bool&LeftTurnCmd_Bool)
//        {
//          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_DOWN );
//        }
//        else
//        {
//          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_UP );
//        }

//        if(m_turnlighton_bool&RightTurnCmd_Bool)
//        {
//          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_DOWN );
//        }
//        else
//        {
//          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_UP );
//        }

//        m_turnlighton_bool = !m_turnlighton_bool;
//    }
//    else
//    {
//        m_turnlighton_bool = false;
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_UP );
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_UP );
//    }
}

void CMainPage::OnButtonInLittleNoPowerAreaDown()
{

}
void CMainPage::OnButtonInLargeNoPowerAreaDown()
{

}
/*
if bypass:
    bypass:         9
else
on line:
    isolated:       8   black background,red cross
    emgc unlock :   2   red
    fully opened:   4   pink
    not closed:     6   blue
    closed:         5   green
not on line:
    not closed:     6
    closed:         5

*/


void CMainPage::UpdateTrainDiagram()
{
    int car1Door[12],car2Door[12];

    int m_Car1MaDoor1_St = 0;
    int m_Car1MaDoor2_St = 0;
    int m_Car1RaDoor1_St = 0;
    int m_Car1RaDoor2_St = 0;
    int m_Car1RaDoor3_St = 0;
    int m_Car1RaDoor4_St = 0;
    int m_Car1RbDoor1_St = 0;
    int m_Car1RbDoor2_St = 0;
    int m_Car1RbDoor3_St = 0;
    int m_Car1RbDoor4_St = 0;
    int m_Car1MbDoor1_St = 0;
    int m_Car1MbDoor2_St = 0;

    int m_Car2MaDoor1_St = 0;
    int m_Car2MaDoor2_St = 0;
    int m_Car2RaDoor1_St = 0;
    int m_Car2RaDoor2_St = 0;
    int m_Car2RaDoor3_St = 0;
    int m_Car2RaDoor4_St = 0;
    int m_Car2RbDoor1_St = 0;
    int m_Car2RbDoor2_St = 0;
    int m_Car2RbDoor3_St = 0;
    int m_Car2RbDoor4_St = 0;
    int m_Car2MbDoor1_St = 0;
    int m_Car2MbDoor2_St = 0;

    int m_Car1TCU1_St = 0;
    int m_Car1TCU2_St = 0;
    int m_Car1TCU3_St = 0;
    int m_Car1TCU4_St = 0;
    int m_Car2TCU1_St = 0;
    int m_Car2TCU2_St = 0;
    int m_Car2TCU3_St = 0;
    int m_Car2TCU4_St = 0;

    int m_Car1MaBCU_St = 0;
    int m_Car1PBCU_St = 0;
    int m_Car1MbBCU_St = 0;
    int m_Car2MaBCU_St = 0;
    int m_Car2PBCU_St = 0;
    int m_Car2MbBCU_St = 0;

    int m_Car1MaACU_St = 0;
    int m_Car1MbACU_St = 0;
    int m_Car2MaACU_St = 0;
    int m_Car2MbACU_St = 0;

    int m_Car1RaSCU_St = 0;
    int m_Car1RbSCU_St = 0;
    int m_Car2RaSCU_St = 0;
    int m_Car2RbSCU_St = 0;

    int m_Car1RaHVAC_St = 0;
    int m_Car1RbHVAC_St = 0;
    int m_Car2RaHVAC_St = 0;
    int m_Car2RbHVAC_St = 0;


    if(m_TrainCoupleActive == 1)
     {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(m_TrainCoupleMode);

        //Door
        m_Car1MaDoor1_St = setDoorStatus((int)R2_MVB_3_D1MaCode_E4_Master, (int)R2_MVB_4_Door1MaSt_A2_Master);
        m_Car1MaDoor2_St = setDoorStatus((int)R2_MVB_3_D2MaCode_E4_Master, (int)R2_MVB_4_Door2MaSt_A2_Master);
        m_Car1RaDoor1_St = setDoorStatus((int)R2_MVB_3_D1RaCode_E4_Master, (int)R2_MVB_4_Door1RaSt_A2_Master);
        m_Car1RaDoor2_St = setDoorStatus((int)R2_MVB_3_D2RaCode_E4_Master, (int)R2_MVB_4_Door2RaSt_A2_Master);
        m_Car1RaDoor3_St = setDoorStatus((int)R2_MVB_3_D3RaCode_E4_Master, (int)R2_MVB_4_Door3RaSt_A2_Master);
        m_Car1RaDoor4_St = setDoorStatus((int)R2_MVB_3_D4RaCode_E4_Master, (int)R2_MVB_4_Door4RaSt_A2_Master);
        m_Car1RbDoor1_St = setDoorStatus((int)R2_MVB_3_D1RbCode_E4_Master, (int)R2_MVB_4_Door1RbSt_A2_Master);
        m_Car1RbDoor2_St = setDoorStatus((int)R2_MVB_3_D2RbCode_E4_Master, (int)R2_MVB_4_Door2RbSt_A2_Master);
        m_Car1RbDoor3_St = setDoorStatus((int)R2_MVB_3_D3RbCode_E4_Master, (int)R2_MVB_4_Door3RbSt_A2_Master);
        m_Car1RbDoor4_St = setDoorStatus((int)R2_MVB_3_D4RbCode_E4_Master, (int)R2_MVB_4_Door4RbSt_A2_Master);
        m_Car1MbDoor1_St = setDoorStatus((int)R2_MVB_3_D1MbCode_E4_Master, (int)R2_MVB_4_Door1MbSt_A2_Master);
        m_Car1MbDoor2_St = setDoorStatus((int)R2_MVB_3_D2MbCode_E4_Master, (int)R2_MVB_4_Door2MbSt_A2_Master);

       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door1State(m_Car1MaDoor1_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door2State(m_Car1MaDoor2_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door3State(m_Car1RaDoor1_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door4State(m_Car1RaDoor2_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door5State(m_Car1RaDoor3_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door6State(m_Car1RaDoor4_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door10State(m_Car1RbDoor1_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door9State(m_Car1RbDoor2_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door8State(m_Car1RbDoor3_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door7State(m_Car1RbDoor4_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door12State(m_Car1MbDoor1_St);
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door11State(m_Car1MbDoor2_St);

//       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door1State(10);
//       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door2State(9);
//       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door3State(2);
//       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door4State(6);
//       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door5State(5);
//       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door6State(3);

       //Alarm
       //Red:2----PA1All_PECU1_Calling_B1==1
       //Nothing:1----PA1All_PECU1_Calling_B1==0
       //********* change PIDS TO EB ALARM
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm1State ((int)(PA1All_PECU1_Calling_B1)+1);//MA
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm2State ((int)(PA1All_PECU2_Calling_B1)+1);//MA
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm3State ((int)(PA1All_PECU3_Calling_B1)+1);//MA
       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm4State ((int)(PA1All_PECU4_Calling_B1)+1);//MA

//
          //TCU
          //Red:2---10 fault
          //Green:1---01 ok
          //Gray:4---00 & 11 communicate fault
          m_Car1TCU1_St = setTCUStatus((int)R2_MVB_3_Tcu1Status_A2_Master);
          m_Car1TCU2_St = setTCUStatus((int)R2_MVB_3_Tcu2Status_A2_Master);
          m_Car1TCU3_St = setTCUStatus((int)R2_MVB_3_Tcu3Status_A2_Master);
          m_Car1TCU4_St = setTCUStatus((int)R2_MVB_3_Tcu4Status_A2_Master);

          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(m_Car1TCU1_St);
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(m_Car1TCU2_St);
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU3State(m_Car1TCU3_St);
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU4State(m_Car1TCU4_St);


//
          //BCU
          //Green Apply:1----  ok:1                 && apply:1
          //Green release:2----ok:1                 && apply:0
          //Red release:4----  fault:2              && apply:0
          //Red apply:3 ----   fault:2              && apply:1
          //Gray cross:6----   communicate fault:3

          if(BCUCCU1_MA_BrkRelease_B1)
          {
              m_Car1MaBCU_St = setBCUStatus((int)R2_MVB_3_BcuMaSt_A2, 0);
          }else{
              m_Car1MaBCU_St = setBCUStatus((int)R2_MVB_3_BcuMaSt_A2, 1);
          }
          if(BCUCCU1_MB_BrkRelease_B1)
          {
              m_Car1MbBCU_St = setBCUStatus((int)R2_MVB_3_BcuMbSt_A2, 0);
          }else{
              m_Car1MbBCU_St = setBCUStatus((int)R2_MVB_3_BcuMbSt_A2, 1);
          }
          if(BCUCCU1_P_BrkRelease_B1)
          {
              m_Car1PBCU_St = setBCUStatus((int)R2_MVB_3_BcuPSt_A2, 0);
          }else{
              m_Car1PBCU_St = setBCUStatus((int)R2_MVB_3_BcuPSt_A2, 1);
          }
//          m_Car1PBCU_St = setBCUStatus((int)R2_MVB_3_BcuPSt_A2, (int)(!BCUCCU1_P_BrkRelease_B1));
//          m_Car1MbBCU_St = setBCUStatus((int)R2_MVB_3_BcuMbSt_A2, (int)(!BCUCCU1_MB_BrkRelease_B1));


          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(m_Car1MaBCU_St);
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(m_Car1PBCU_St);
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(m_Car1MbBCU_St);




          //Ex
          //Nothing:1
          //Red:2
           if(R2_MVB_3_st_08k02_P_B1_Master )
            {
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1LargerState(2);
            }
           else
           {
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1LargerState(1);
           }


               //ACU & BC
               //Green:1---Ok 1
               //Red:2---Fault 2
               //Gray:4---Communicate fault else 0&3

               m_Car1MaACU_St = setACUStatus((int)R2_MVB_3_Aux1Status_A2_Master, (int)R2_MVB_3_Bc1Status_A2_Master,(int)R2_MVB_3_Tcu1Status_A2_Master);
               m_Car1MbACU_St = setACUStatus((int)R2_MVB_3_Aux2Status_A2_Master, (int)R2_MVB_3_Bc2Status_A2_Master,(int)R2_MVB_3_Tcu3Status_A2_Master);


               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1APS1State(m_Car1MaACU_St);
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1APS2State(m_Car1MbACU_St);


               //SCU 超级电容
               //LCU_Ra&Rb:3 Commu Fault ---White(4)
               //ScMaMajor:1 Major Fault ---Red(2)
               //ScMaMajor:0 ok          ---Green(1)
//***********18-01-24 hide SCU TW icon
               m_Car1RaSCU_St = setSCUStatus((int)(R2_MVB_3_ScMaMajor_B1_Master), (int)R2_MVB_3_LcuRaSt_A2_Master);
               m_Car1RbSCU_St = setSCUStatus((int)(R2_MVB_3_ScMbMajor_B1_Master), (int)R2_MVB_3_LcuRbSt_A2_Master);

               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1CAP1State(  m_Car1RaSCU_St);
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1CAP2State(  m_Car1RbSCU_St);

               m_Car1RaHVAC_St =  setTCUStatus((int)R2_MVB_3_HvacRaSt_A2_Master); //same as TCU
               m_Car1RbHVAC_St =  setTCUStatus((int)R2_MVB_3_HvacRbSt_A2_Master); //same as TCU

               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1HVAC1State( m_Car1RaHVAC_St);
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1HVAC2State(  m_Car1RbHVAC_St);

               //W---TW信号
               //Green 1
               //Red 2
//               if(R2_MVB_4_ScuMajorFault_B1_Master)
//               {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TWPSState( 2 );
//               }
//               else
//               {
//                   ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TWPSState( 1 );
//               }

                //HSCB高速断路器
               if(R2_MVB_3_StHscb_B1_Master)
               {
                   ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(1);
               }
               else
               {
                   ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(0 );
               }
               //转换开关箱－－受电弓_Ktp
              if( R2_MVB_3_St_Ktp_B1_Master)
               {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerUpState(1);
               }
              else
              {
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerUpState(0);
              }
                //转换开关箱－－集电靴_Ktw
              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerDownState( (int)(R2_MVB_3_St_Ktw_B1_Master), (int)(R2_MVB_3_St_KtwMB_B1_Master));

//                   ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode( g_car1CodeStr );
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1Isolated( false );
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2Isolated(false );

                if(R2_MVB_3_PantoUp_B1_Master )
               {
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1State( PANTOGRAPH_LEFT_UP);
               }
                else
                {
                    if(R2_MVB_3_PantoLow_B1_Master)
                    {
                        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1State( PANTOGRAPH_LEFT_DOWN);
                    }
                }

                if(LCUCCU_3_MA_DI_6_CH5_B1)
                {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_DOWN );
                }
                else if(LCUCCU_3_MA_DI_6_CH6_B1 )
                {
                    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_UP );
                }else
                {
                    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_DOWN );
                }
                // ADD 20161001 SPU B
                if(LCUCCU_3_MB_DI_6_CH5_B1)
                {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_DOWN );
                }
                else if(LCUCCU_3_MB_DI_6_CH6_B1 )
                {
                    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_UP );
                }else
                {
                    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_DOWN );
                }

      //****************************11.20
              //Key & Run direction
                if(LCUCCU_3_MA_DI_2_CH18_B1)
                {
                     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( true );
                     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State( false );


                     if(R2_MVB_3_Drv_Status_E4_Master==6)
                     {
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->ShowImage();
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();


                     }
                     else if(R2_MVB_3_Drv_Status_E4_Master==5)
                     {
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->ShowImage();

                     }
                     else
                     {
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();

                     }

                 }
                else if(LCUCCU_3_MB_DI_2_CH18_B1)
                {
                     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State( true );
                     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( false );


                     if(R2_MVB_3_Drv_Status_E4_Master==5)
                     {
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->ShowImage();
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();

                     }
                     else if(R2_MVB_3_Drv_Status_E4_Master==6)
                     {
                          ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->ShowImage();
                     }
                     else
                     {
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                         ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();
                     }
                }
                else
                {
                    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( false );
                    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State( false );
                    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();
                }

            }
    else
    {


      ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(m_TrainCoupleMode);

      m_Car1MaDoor1_St = setDoorStatus((int)R2_MVB_3_D1MaCode_E4_Master, (int)R2_MVB_4_Door1MaSt_A2_Master);
      m_Car1MaDoor2_St = setDoorStatus((int)R2_MVB_3_D2MaCode_E4_Master, (int)R2_MVB_4_Door2MaSt_A2_Master);
      m_Car1RaDoor1_St = setDoorStatus((int)R2_MVB_3_D1RaCode_E4_Master, (int)R2_MVB_4_Door1RaSt_A2_Master);
      m_Car1RaDoor2_St = setDoorStatus((int)R2_MVB_3_D2RaCode_E4_Master, (int)R2_MVB_4_Door2RaSt_A2_Master);
      m_Car1RaDoor3_St = setDoorStatus((int)R2_MVB_3_D3RaCode_E4_Master, (int)R2_MVB_4_Door3RaSt_A2_Master);
      m_Car1RaDoor4_St = setDoorStatus((int)R2_MVB_3_D4RaCode_E4_Master, (int)R2_MVB_4_Door4RaSt_A2_Master);
      m_Car1RbDoor1_St = setDoorStatus((int)R2_MVB_3_D1RbCode_E4_Master, (int)R2_MVB_4_Door1RbSt_A2_Master);
      m_Car1RbDoor2_St = setDoorStatus((int)R2_MVB_3_D2RbCode_E4_Master, (int)R2_MVB_4_Door2RbSt_A2_Master);
      m_Car1RbDoor3_St = setDoorStatus((int)R2_MVB_3_D3RbCode_E4_Master, (int)R2_MVB_4_Door3RbSt_A2_Master);
      m_Car1RbDoor4_St = setDoorStatus((int)R2_MVB_3_D4RbCode_E4_Master, (int)R2_MVB_4_Door4RbSt_A2_Master);
      m_Car1MbDoor1_St = setDoorStatus((int)R2_MVB_3_D1MbCode_E4_Master, (int)R2_MVB_4_Door1MbSt_A2_Master);
      m_Car1MbDoor2_St = setDoorStatus((int)R2_MVB_3_D2MbCode_E4_Master, (int)R2_MVB_4_Door2MbSt_A2_Master);



     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door1State(m_Car1MaDoor1_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door2State(m_Car1MaDoor2_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door3State(m_Car1RaDoor1_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door4State(m_Car1RaDoor2_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door5State(m_Car1RaDoor3_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door6State(m_Car1RaDoor4_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door10State(m_Car1RbDoor1_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door9State(m_Car1RbDoor2_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door8State(m_Car1RbDoor3_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door7State(m_Car1RbDoor4_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door12State(m_Car1MbDoor1_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Door11State(m_Car1MbDoor2_St);


     m_Car2MaDoor1_St = setDoorStatus((int)R2_MVB_3_D1MaCode_E4_Slave, (int)R2_MVB_4_Door1MaSt_A2_Slave);
     m_Car2MaDoor2_St = setDoorStatus((int)R2_MVB_3_D2MaCode_E4_Slave, (int)R2_MVB_4_Door2MaSt_A2_Slave);
     m_Car2RaDoor1_St = setDoorStatus((int)R2_MVB_3_D1RaCode_E4_Slave, (int)R2_MVB_4_Door1RaSt_A2_Slave);
     m_Car2RaDoor2_St = setDoorStatus((int)R2_MVB_3_D2RaCode_E4_Slave, (int)R2_MVB_4_Door2RaSt_A2_Slave);
     m_Car2RaDoor3_St = setDoorStatus((int)R2_MVB_3_D3RaCode_E4_Slave, (int)R2_MVB_4_Door3RaSt_A2_Slave);
     m_Car2RaDoor4_St = setDoorStatus((int)R2_MVB_3_D4RaCode_E4_Slave, (int)R2_MVB_4_Door4RaSt_A2_Slave);
     m_Car2RbDoor1_St = setDoorStatus((int)R2_MVB_3_D1RbCode_E4_Slave, (int)R2_MVB_4_Door1RbSt_A2_Slave);
     m_Car2RbDoor2_St = setDoorStatus((int)R2_MVB_3_D2RbCode_E4_Slave, (int)R2_MVB_4_Door2RbSt_A2_Slave);
     m_Car2RbDoor3_St = setDoorStatus((int)R2_MVB_3_D3RbCode_E4_Slave, (int)R2_MVB_4_Door3RbSt_A2_Slave);
     m_Car2RbDoor4_St = setDoorStatus((int)R2_MVB_3_D4RbCode_E4_Slave, (int)R2_MVB_4_Door4RbSt_A2_Slave);
     m_Car2MbDoor1_St = setDoorStatus((int)R2_MVB_3_D1MbCode_E4_Slave, (int)R2_MVB_4_Door1MbSt_A2_Slave);
     m_Car2MbDoor2_St = setDoorStatus((int)R2_MVB_3_D2MbCode_E4_Slave, (int)R2_MVB_4_Door2MbSt_A2_Slave);



    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door1State(m_Car2MaDoor1_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door2State(m_Car2MaDoor2_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door3State(m_Car2RaDoor1_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door4State(m_Car2RaDoor2_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door5State(m_Car2RaDoor3_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door6State(m_Car2RaDoor4_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door10State(m_Car2RbDoor1_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door9State(m_Car2RbDoor2_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door8State(m_Car2RbDoor3_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door7State(m_Car2RbDoor4_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door12State(m_Car2MbDoor1_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Door11State(m_Car2MbDoor2_St);


    m_Car1TCU1_St = setTCUStatus((int)R2_MVB_3_Tcu1Status_A2_Master);
    m_Car1TCU2_St = setTCUStatus((int)R2_MVB_3_Tcu2Status_A2_Master);
    m_Car1TCU3_St = setTCUStatus((int)R2_MVB_3_Tcu3Status_A2_Master);
    m_Car1TCU4_St = setTCUStatus((int)R2_MVB_3_Tcu4Status_A2_Master);

    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(m_Car1TCU1_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(m_Car1TCU2_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU3State(m_Car1TCU3_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU4State(m_Car1TCU4_St);

    m_Car1TCU1_St = setTCUStatus((int)R2_MVB_3_Tcu1Status_A2_Slave);
    m_Car1TCU2_St = setTCUStatus((int)R2_MVB_3_Tcu2Status_A2_Slave);
    m_Car1TCU3_St = setTCUStatus((int)R2_MVB_3_Tcu3Status_A2_Slave);
    m_Car1TCU4_St = setTCUStatus((int)R2_MVB_3_Tcu4Status_A2_Slave);

    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(m_Car1TCU1_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(m_Car1TCU2_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU3State(m_Car1TCU3_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU4State(m_Car1TCU4_St);

    //***************_Ma_TCU4_$$$$$_Car1_TCU4_********************

    //BCU
    //Green Apply:1----  ok:1                 && apply:1
    //Green release:2----ok:1                 && apply:0
    //Red release:4----  fault:2              && apply:0
    //Red apply:3 ----   fault:2              && apply:1
    //Gray cross:6----   communicate fault:3

    m_Car1MaBCU_St = setBCUStatus((int)R2_MVB_3_BcuMaSt_A2_Master, (int)R2_MVB_3_BrakeActMA_B1_Master);
    m_Car1PBCU_St = setBCUStatus((int)R2_MVB_3_BcuPSt_A2_Master, (int)R2_MVB_3_BrakeActP_B1_Master);
    m_Car1MbBCU_St = setBCUStatus((int)R2_MVB_3_BcuMbSt_A2_Master, (int)R2_MVB_3_BrakeActMB_B1_Master);

    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(m_Car1MaBCU_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(m_Car1PBCU_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(m_Car1MbBCU_St);

    m_Car1MaBCU_St = setBCUStatus((int)R2_MVB_3_BcuMaSt_A2_Slave, (int)R2_MVB_3_BrakeActMA_B1_Slave);
    m_Car1PBCU_St = setBCUStatus((int)R2_MVB_3_BcuPSt_A2_Slave, (int)R2_MVB_3_BrakeActP_B1_Slave);
    m_Car1MbBCU_St = setBCUStatus((int)R2_MVB_3_BcuMbSt_A2_Slave, (int)R2_MVB_3_BrakeActMB_B1_Slave);

    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(m_Car1MaBCU_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(m_Car1PBCU_St);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(m_Car1MbBCU_St);



    //Ex
    //Nothing:1
    //Red:2
     if(R2_MVB_3_st_08k02_P_B1_Master )
      {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1LargerState(2);
      }
     else
     {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1LargerState(1);
     }
     if(R2_MVB_3_st_08k02_P_B1_Slave )
      {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2LargerState(2);
      }
     else
     {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2LargerState(1);
     }


     //ACU & BC
     //Green:1---Ok 1
     //Red:2---Fault 2
     //Gray:4---Communicate fault else 0&3

     m_Car1MaACU_St = setACUStatus((int)R2_MVB_3_Aux1Status_A2_Master, (int)R2_MVB_3_Bc1Status_A2_Master,(int)R2_MVB_3_Tcu1Status_A2_Master);
     m_Car1MbACU_St = setACUStatus((int)R2_MVB_3_Aux2Status_A2_Master, (int)R2_MVB_3_Bc2Status_A2_Master,(int)R2_MVB_3_Tcu3Status_A2_Master);


     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1APS1State(m_Car1MaACU_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1APS2State(m_Car1MbACU_St);

     m_Car1MaACU_St = setACUStatus((int)R2_MVB_3_Aux1Status_A2_Slave, (int)R2_MVB_3_Bc1Status_A2_Slave,(int)R2_MVB_3_Tcu1Status_A2_Slave);
     m_Car1MbACU_St = setACUStatus((int)R2_MVB_3_Aux2Status_A2_Slave, (int)R2_MVB_3_Bc2Status_A2_Slave,(int)R2_MVB_3_Tcu3Status_A2_Slave);


     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2APS1State(m_Car1MaACU_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2APS2State(m_Car1MbACU_St);

     //SCU 超级电容
     //LCU_Ra&Rb:3 Commu Fault ---White(4)
     //ScMaMajor:1 Major Fault ---Red(2)
     //ScMaMajor:0 ok          ---Green(1)

     m_Car1RaSCU_St = setSCUStatus((int)R2_MVB_3_ScMaMajor_B1_Master, (int)R2_MVB_3_LcuRaSt_A2_Master);
     m_Car1RbSCU_St = setSCUStatus((int)R2_MVB_3_ScMbMajor_B1_Master, (int)R2_MVB_3_LcuRbSt_A2_Master);

     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1CAP1State(  m_Car1RaSCU_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1CAP2State(  m_Car1RbSCU_St);

     m_Car1RaSCU_St = setSCUStatus((int)R2_MVB_3_ScMaMajor_B1_Slave, (int)R2_MVB_3_LcuRaSt_A2_Slave);
     m_Car1RbSCU_St = setSCUStatus((int)R2_MVB_3_ScMbMajor_B1_Slave, (int)R2_MVB_3_LcuRbSt_A2_Slave);

     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2CAP1State(  m_Car1RaSCU_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2CAP2State(  m_Car1RbSCU_St);

     m_Car1RaHVAC_St =  setTCUStatus((int)R2_MVB_3_HvacRaSt_A2_Master); //same as TCU
     m_Car1RbHVAC_St =  setTCUStatus((int)R2_MVB_3_HvacRbSt_A2_Master); //same as TCU

     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1HVAC1State(  m_Car1RaHVAC_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1HVAC2State(  m_Car1RbHVAC_St);

     m_Car2RaHVAC_St =  setTCUStatus((int)R2_MVB_3_HvacRaSt_A2_Slave); //same as TCU
     m_Car2RbHVAC_St =  setTCUStatus((int)R2_MVB_3_HvacRbSt_A2_Slave); //same as TCU

     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2HVAC1State(  m_Car2RaHVAC_St);
     ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2HVAC2State(  m_Car2RbHVAC_St);

     //W---TW信号
     //Green 1
     //Red 2
     if(R2_MVB_4_ScuMajorFault_B1_Master)
     {
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TWPSState( 2 );
      }
     else
     {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TWPSState( 1 );
     }
     if(R2_MVB_4_ScuMajorFault_B1_Slave)
     {
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TWPSState( 2 );
      }
     else
     {
         ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TWPSState( 1 );
     }

     //HSCB高速断路器
    if(R2_MVB_3_StHscb_B1_Master)
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(1);
   }
    else
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(0 );
    }
    if(R2_MVB_3_StHscb_B1_Slave)
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerState(1);
   }
    else
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerState(0 );
    }




  //转换开关箱－－集电靴_Ktw
((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerDownState( (int)(R2_MVB_3_St_Ktw_B1_Master), (int)(R2_MVB_3_St_KtwMB_B1_Master));
((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerDownState( (int)(R2_MVB_3_St_Ktw_B1_Slave), (int)(R2_MVB_3_St_KtwMB_B1_Slave));
if(R2_MVB_3_SPUA_B1_Master)
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_DOWN );
}
else if(R2_MVB_3_SPDA_B1_Master )
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_UP );
}else
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_DOWN );

}

if(R2_MVB_3_SPUB_B1_Master)
{
((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_DOWN );
}
else if(R2_MVB_3_SPDB_B1_Master )
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_UP );
}else
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_DOWN );

}

if(R2_MVB_3_SPUA_B1_Slave)
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2AState( PANTOGRAPH_LEFT_DOWN );
}
else if(R2_MVB_3_SPDA_B1_Slave )
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2AState( PANTOGRAPH_LEFT_UP );
}else
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2AState( PANTOGRAPH_LEFT_DOWN );
}
if(R2_MVB_3_SPUB_B1_Slave)
{
((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2BState( PANTOGRAPH_LEFT_DOWN );
}
else if(R2_MVB_3_SPDB_B1_Slave )
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2BState( PANTOGRAPH_LEFT_UP );
}else
{
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2BState( PANTOGRAPH_LEFT_DOWN );
}


    //转换开关箱－－受电弓_Ktp
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerUpState((int)R2_MVB_3_St_Ktp_B1_Master);
    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerUpState((int)R2_MVB_3_St_Ktp_B1_Slave);

    if(R2_MVB_3_PantoUp_B1_Master )
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1State( PANTOGRAPH_LEFT_UP);
    }
    else
    {
        if(R2_MVB_3_PantoLow_B1_Master)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1State( PANTOGRAPH_LEFT_DOWN);
        }
    }


    if(R2_MVB_3_PantoUp_B1_Slave )
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP1State( PANTOGRAPH_RIGHT_UP);
    }
    else if(R2_MVB_3_PantoLow_B1_Slave)
    {
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP1State( PANTOGRAPH_RIGHT_DOWN);
    }


    //switch


      //if(g_dataBuffer_MVB[256+6] /256 ==1)////******************本车为主车
    if(bool ( LCUCCU_3_MA_DI_2_CH18_B1) || bool ( LCUCCU_3_MB_DI_2_CH18_B1))////******************本车为主车
    {
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm1State ((int)(PA1All_PECU1_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm2State ((int)(PA1All_PECU2_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm3State ((int)(PA1All_PECU3_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm4State ((int)(PA1All_PECU4_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm1State ((int)(PA1All_PECU5_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm2State ((int)(PA1All_PECU6_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm3State ((int)(PA1All_PECU7_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm4State ((int)(PA1All_PECU8_Calling_B1)+1);//MA

        //Key & Run direction
          if(LCUCCU_3_MA_DI_2_CH18_B1)
          {
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( true );
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State( false );
               if(R2_MVB_3_Drv_Status_E4_Master==6)
               {

                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->ShowImage();
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();


               }
               else if(R2_MVB_3_Drv_Status_E4_Master==5)
               {
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->ShowImage();

               }
               else
               {
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();

               }

          }else if(LCUCCU_3_MB_DI_2_CH18_B1)
          {
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State( true );
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( false );
               if(R2_MVB_3_Drv_Status_E4_Master==6)
               {

                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->ShowImage();
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();


               }
               else if(R2_MVB_3_Drv_Status_E4_Master==5)
               {
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->ShowImage();

               }
               else
               {
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                   ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();

               }

          }else
          {
              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( false );
              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State( false );
              ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
              ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();
          }



          // as rotate 180 for the shoe, change car 1 and car positon master is car2 slave is car1 LCUCCU_3_MA_DI_6_CH5_B1
//          if(LCUCCU_3_MA_DI_6_CH5_B1)
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2BState( PANTOGRAPH_LEFT_DOWN );
//          }
//          else if(LCUCCU_3_MA_DI_6_CH6_B1 )
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2BState( PANTOGRAPH_LEFT_UP );
//          }else
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2BState( PANTOGRAPH_LEFT_DOWN );

//          }

//          if(LCUCCU_3_MB_DI_6_CH5_B1)
//          {
//          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2AState( PANTOGRAPH_LEFT_DOWN );
//          }
//          else if(LCUCCU_3_MB_DI_6_CH6_B1 )
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2AState( PANTOGRAPH_LEFT_UP );
//          }else
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TP2AState( PANTOGRAPH_LEFT_DOWN );

//          }

//          if(R2_MVB_3_SPUA_B1_Slave)
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_DOWN );
//          }
//          else if(R2_MVB_3_SPDA_B1_Slave )
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_UP );
//          }else
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2BState( PANTOGRAPH_LEFT_DOWN );

//          }
//          if(R2_MVB_3_SPUB_B1_Slave)
//          {
//          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_DOWN );
//          }
//          else if(R2_MVB_3_SPDB_B1_Slave )
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_UP );
//          }else
//          {
//              ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2AState( PANTOGRAPH_LEFT_DOWN );

//          }
      }
      else//*******************本车为从车
      {
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm1State ((int)(PA1All_PECU1_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm2State ((int)(PA1All_PECU2_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm3State ((int)(PA1All_PECU3_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Alarm4State ((int)(PA1All_PECU4_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm1State ((int)(PA1All_PECU5_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm2State ((int)(PA1All_PECU6_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm3State ((int)(PA1All_PECU7_Calling_B1)+1);//MA
          ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Alarm4State ((int)(PA1All_PECU8_Calling_B1)+1);//MA


//       ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode( g_car1CodeStr );
           ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1Isolated( false );
           ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP2Isolated(false );
       //Key & Run direction
       //couple key info not defined
         if(R2_MVB_1_cab_remota_B1_Master)
         {
             if(R2_MVB_3_Drv_Status_E4_Slave==6)
             {

                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->ShowImage();
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();


             }
             else if(R2_MVB_3_Drv_Status_E4_Slave==5)
             {
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->ShowImage();

             }
             else
             {
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
                 ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();
             }
             ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( true );
         }else
         {
             ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
             ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();
             ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State( false );
         }

     }


    }

    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->DrawTrainDiagramCtrl();
}

int  CMainPage::setDoorStatus(int DoorCode, int DoorSt)
{
   //DoorCode
   //DoorSt:3 commu Fault--White(3)
   //Bit1:   Isolated -----gray(10)
   //Bit0:   Emergency ----Red cross(9)
   //DoorSt:2 fault -------Red(2)
   //Bit2:   Open----------Cyan(6)
   //Bit3:   Closed--------Green(5)
   int m_DoorStatus;
    m_DoorStatus = 0;
    if(DoorSt == 3)
    {
        m_DoorStatus = 3;
    }
    else
    {
    if((DoorCode & DoorBit1)== DoorBit1)
    {
        m_DoorStatus = 10;
    }
    else
    {
        if((DoorCode & DoorBit0)== DoorBit0)
        {
            m_DoorStatus = 9;
        }
        else
        {
            if(DoorSt == 2)
            {
                m_DoorStatus = 2;
            }
            else
            {
                if((DoorCode & DoorBit2)== DoorBit2)
                {
                    m_DoorStatus = 6;
                }
                else
                {
                    if((DoorCode & DoorBit3)== DoorBit3)
                    {
                        m_DoorStatus = 5;
                    }
                    else
                    {
                        m_DoorStatus = 3;
                    }
                }
            }
        }
    }
    }
    return m_DoorStatus;

}

int  CMainPage::setBCUStatus(int BCUCode, int BCUSt)
{
   //Green Apply:1----  ok:1                 && apply:1
   //Green release:2----ok:1                 && apply:0
   //Red release:4----  fault:2              && apply:0
   //Red apply:3 ----   fault:2              && apply:1
   //Gray cross:6----   communicate fault:3
   int m_BCUStatus;
    m_BCUStatus = 0;
    if(BCUCode == 3)
    {
        m_BCUStatus = 6;
    }
    else
    {

            if(BCUCode == 2)
            {

                if(BCUSt == 1)
                {
                     m_BCUStatus = 3;
                }
                else
                {
                     m_BCUStatus = 4;
                }
            }else
            {
                if(BCUSt == 1)
                {
                     m_BCUStatus = 1;
                }
                else
                {
                     m_BCUStatus = 2;
                }
            }

      }
   return m_BCUStatus;

}


int  CMainPage::setACUStatus(int ACUSt, int BCSt,int TCUSt)
{
   int m_ACUStatus;
    m_ACUStatus = 0;
   if(TCUSt == 3)
   {
       m_ACUStatus = 4;
   }
   else
   {
       if((ACUSt==2)||(BCSt==2))
       {
           m_ACUStatus = 2;
       }
       else
       {
           if((ACUSt==1)&&(BCSt==1))
           {
               m_ACUStatus = 1;
           }
           else
           {
                 m_ACUStatus = 4;
           }
       }
   }
   return m_ACUStatus;

}

int  CMainPage::setTCUStatus(int TCUSt)
{
   //TCU
   //Red:2---10 fault
   //Green:1---01 ok
   //Gray:4---00 & 11 communicate fault
   int m_TCUStatus;
    m_TCUStatus = 0;
  if(TCUSt==3)
    {
      m_TCUStatus = 4;
    }
  else
  {
      if(TCUSt==2)
        {
          m_TCUStatus = 2;
        }
      else
      {
          if(TCUSt==1)
            {
              m_TCUStatus = 1;
            }
          else
          {
               m_TCUStatus = 4;
          }
      }
  }
   return m_TCUStatus;
}
int  CMainPage::setSCUStatus(int SCUStatus,int LCUSt)
{
   int m_SCUStatus;
   m_SCUStatus = 0;
   //SCU 超级电容
   //LCU_Ra&Rb:3 Commu Fault ---White(4)
   //ScMaMajor:1 Major Fault ---Red(2)
   //ScMaMajor:0 ok          ---Green(1)
   if(LCUSt == 3)
   {
        m_SCUStatus = 4;
   }
   else
   {
       if(SCUStatus == 1)
       {
            m_SCUStatus = 2;
       }
       else
       {
            m_SCUStatus = 1;
       }
   }
   return  m_SCUStatus ;

}

void CMainPage::UpdateImage()
{
//    if(MAIN_ATC_BOOL)    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_ATC))->ShowImage();
//    else    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_ATC))->HideImage();


//    // when car1 safe traction circle signal is 1 show traction safe circle icon or hide this icon
//    if( MAIN_SAFECIRCLESTATE_BOOL ) ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_TRACTIONSAFE))->ShowImage();
//    else ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_TRACTIONSAFE))->HideImage();

//    // when Mc or M safe brake is valid(0 is valid) show safe brake icon
//    // or BCU all brake release signal is 1 show brake all release icon
//    // or hide both
//    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_SAFEBRAKE))->HideImage();
//    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_BRAKERELEASE))->HideImage();
//    if( (MAIN_SAFEBRAKESTATE_BOOL) )
//    {
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_SAFEBRAKE))->ShowImage();
//    }
//    else if( MAIN_BRAKEALLRELEASE_BOOL )
//    {
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_BRAKERELEASE))->ShowImage();
//    }
//    else
//    {
//    }//end*/

//    if( DispatchMode_Bool )
//    {
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_WASHINGMODE))->HideImage();
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_DISPATCHINGMODE))->ShowImage();
//    }
//    else if( WashingMode_Bool )
//    {
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_DISPATCHINGMODE))->HideImage();
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_WASHINGMODE))->ShowImage();
//    }
//    else
//    {
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_WASHINGMODE))->HideImage();
//        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_DISPATCHINGMODE))->HideImage();
//    }//end
}

void CMainPage::UpdateSpeedLimit()
{
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_STOP))->HideImage();
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_3KM ))->HideImage();
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_10KM))->HideImage();
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_20KM))->HideImage();
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_40KM))->HideImage();
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_60KM))->HideImage();
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_30KM))->HideImage();
  ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_50KM))->HideImage();

  int val = 0;

//***********************11.20
  if(m_TrainCoupleActive == 2)
  {
     val= R2_MVB_1_SpeedLimit_U8_Master;
  }
  else
  {
     val = CCU_TCU1_SpeedLimit_U8;
  }
  switch(val)
  {
  case 3://D_SPEED_LIMIT_3KM:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_3KM))->ShowImage();
      break;
  case 10://D_SPEED_LIMIT_10KM:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_10KM))->ShowImage();
      break;
  case 20://D_SPEED_LIMIT_20KM:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_20KM))->ShowImage();
      break;
  case 30:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_30KM))->ShowImage();
      break;
  case 40://D_SPEED_LIMIT_40KM:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_40KM))->ShowImage();
      break;
  case 50:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_50KM))->ShowImage();
      break;
  case 60://D_SPEED_LIMIT_60KM:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_60KM))->ShowImage();
      break;
  case 0://D_SPEED_LIMIT_STOP:
      ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_STOP))->ShowImage();
      break;
  default:
      break;
  }

  return;
}

void CMainPage::UpdateTotalMileage()
{
//    QString str;
//    str.sprintf("%ukm", MAIN_TOP_ACCUMULATEDKMS_QUINT32);
//    ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_TOTALMILEAGE))->SetCtrlText(str);
}



  void CMainPage::OnCommonQuitButtonDown()
  {
      ChangePage(PAGE_ROM_INDEX_SYSLOGIN);
  }

  static int romIdx = 0;
  static int confirmRomIdx = -1;

  void CMainPage::UpdateCurrentFaultDisplay(bool flg)
  {

      static quint32 times = 0;
      int x,y;

      x=GetParentDlg()->x();
      y=GetParentDlg()->y()+500;

      FAULTS_ROM_DATA *pdata = &g_faultsrom[romIdx];
      bool find = false;
      for (int i=0; i<g_faultsRomLen; i++)
      {
             int confirm_num=0;
             if ((pdata->flg) &&  ((pdata->deviceNo == D_DEVICENO_CTTW)||(pdata->device == D_DEVICE_COM))/*&&  bool((1 == pdata->grade&&
                                  pdata->device !=   D_DEVICE_TRAIN&&        // grade 1 fault remove
                                  pdata->device !=   D_DEVICE_HVAC&&
                                  pdata->device !=   D_DEVICE_PIS)
                                  ||
                                  (pdata->code == 0x1213||pdata->code == 0x1214||pdata->code == 0x1215||pdata->code == 0x1216||
                                   pdata->code == 0x1217||pdata->code == 0x1218||pdata->code == 0x1219||pdata->code == 0x121a||
                                   pdata->code == 0x121b||pdata->code == 0x121c))  // grade 2 fault add*/
                 &&(!pdata->confirm))
             {
                   if(((Dialog*)GetParentDlg())->dlg.isHidden())
                   {
                          ((Dialog*)GetParentDlg())->dlg.show();
                           error_turnoff_timer=3;
                          ((Dialog*)GetParentDlg())->dlg.SetRomIdx(romIdx);
                          ((Dialog*)GetParentDlg())->dlg.move(x,y);


                         // ((Dialog*)GetParentDlg())->dlg.exec();
                          confirm_num=1;
                          break;
                   }
                   else
                   {
                       if(((Dialog*)GetParentDlg())->dlg.m_romidx==romIdx)
                       {
                           if(g_faultsrom[romIdx].confirm_flg==false)
                           {
                               times++;
                               if (times%times_n == 0)
                               {
                                   error_turnoff_timer--;
                                   if (error_turnoff_timer <= 0)
                                   {
                                       g_faultsrom[romIdx].confirm = true;
                                       ((Dialog*)GetParentDlg())->dlg.hide();
                                       error_turnoff_timer=0;
                                   }

                               }
                               confirm_num=1;
                               break;
                           }
                           else
                           {
                               confirm_num=1;
                               break;
                           }

                       }
                       else
                       {
                           //之前弹出的故障消失但还有需要确认的故障
  //                           ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
                           confirm_num=1;
                           ((Dialog*)GetParentDlg())->dlg.hide();
                           error_turnoff_timer=0;
                           break;
                       }

                   }
  //                    confirmRomIdx = romIdx;
  //                    find = true;

             }
             if (g_faultsRomLen - 1 == romIdx)
             {
                 romIdx = 0;
                 pdata = &g_faultsrom[romIdx];
             }
             else
             {
                 romIdx++;
                 pdata++;
             }

             if(confirm_num==0)
             {
                 ((Dialog*)GetParentDlg())->dlg.hide();
                 error_turnoff_timer=0;
             }
      }//for (int i=0; i<g_faultsRomLen; i++)

 }
          /*
          handle position set:
          when BCU EMGC brake is valid(0)
              EMGC position
          or when on braking state
              BCU code3,2,1(111)
                  B7
              BCU code3,2,1(110)
                  B6
              BCU code3,2,1(101)
                  B5
              BCU code3,2,1(100)
                  B4
              BCU code3,2,1(011)
                  B3
              BCU code3,2,1(010)
                  B2
              BCU code3,2,1(001)
                  B1
              BCU code3,2,1(000)
                  0
          or when on traction state
              TCU code4,3,2,1(0001)
                  T1
              TCU code4,3,2,1(0011)
                  T2
              TCU code4,3,2,1(0111)
                  T3
              TCU code4,3,2,1(1111)
                  T4
              TCU code4,3,2,1(others)
                  0
          others
              0
          */
          void CMainPage::UpdateListBoxCtrl()
          {


          }

          void CMainPage::OnWarningButtonDown()
          {
              if (0 == g_unconfirmed_faults_num)
              {
                  return;
              }
              if (-1 == confirmRomIdx)
              {
                  return;
              }
              g_faultsrom[confirmRomIdx].confirm = true;

              GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetCtrlBKColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetCtrlBKColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetCtrlBKColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetCtrlBKColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetCtrlBKColor(Qt::yellow);

              GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetTxtColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetTxtColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetTxtColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetTxtColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetTxtColor(Qt::black);
          }

          void CMainPage::OnWarningButtonUp()
          {
              if (0 == g_unconfirmed_faults_num)
              {
                  return;
              }

              GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetCtrlBKColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetCtrlBKColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetCtrlBKColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetCtrlBKColor(Qt::black);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetCtrlBKColor(Qt::black);

              GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetTxtColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetTxtColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetTxtColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetTxtColor(Qt::yellow);
              GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetTxtColor(Qt::yellow);

              UpdateCurrentFaultDisplay(true);
          }


          void CMainPage::OnControlButtonDown()
          {
              if( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) ) // mc1 key:true,mc2 key false
              {
                 if(MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL))// MC1 HMI
                 {
                     ChangePage(PAGE_ROM_INDEX_MAINCONTROLCMD);
                 }
                 else if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))
                 {
                     return;
                 }
              }
              if( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) ) // mc1 key:true,mc2 key false
              {
                 if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))// MC1 HMI
                 {
                     ChangePage(PAGE_ROM_INDEX_MAINCONTROLCMD);
                 }
                 else if(MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL))
                 {
                     return;
                 }
              }
          }
          void CMainPage::OnLeftTurnButtonDown()
          {
          //    LeftTurnCmd_Bool = !LeftTurnCmd_Bool;
          //    if(LeftTurnCmd_Bool)
          //    {
          //        //RightTurnCmd_Bool =  false; // 20131015 cancel
          //        //((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->SetCtrlBKColor(Qt::yellow);
          //        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_UP );
          //    }
          }

          void CMainPage::OnRightTurnButtonDown()
          {
          //    RightTurnCmd_Bool = !RightTurnCmd_Bool;
          //    if(RightTurnCmd_Bool)
          //    {
          //        //LeftTurnCmd_Bool =  false; // 20131015 cancel
          //        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_UP );
          //        //((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->SetCtrlBKColor(Qt::yellow);
          //    }
          }
          void CMainPage::OnRunButtonDown()
          {


              flg1 = !flg1;
               //
              g_dataBuffer_MVB[94]=255;

              if(flg1)
              {
                  //((CButton *)GetDlgItem(ID_PICMAIN_RUN))->SetCtrlText("running");
                  ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1State(PANTOGRAPH_LEFT_UP);

              }else
              {
                  //((CButton *)GetDlgItem(ID_PICMAIN_RUN))->SetCtrlText("stop");
                  ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TP1State(PANTOGRAPH_LEFT_DOWN);

              }


          }
          void CMainPage::OnRunButtonUp()
          {

          }
          void CMainPage::OnCoupledButtonUp()
          {

          }
          void CMainPage::OnCoupledButtonDown()
          {
              g_dataBuffer_MVB[94]=0;
              flg2 = !flg2;
              if(flg2)
              {
                 // ((CButton *)GetDlgItem(ID_PICMAIN_COUPLED))->SetCtrlText("coupled");
                  //m_TrainCoupleMode = 2;
              }
              else
              {
                  //((CButton *)GetDlgItem(ID_PICMAIN_COUPLED))->SetCtrlText("not coupled");
                  //m_TrainCoupleMode = 1;
              }

          }
