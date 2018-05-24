#include "cudpdatapage1.h"

ROMDATA g_PicRom_UdpDataPage1[] =
{
    /*string                font                            rc                  foreground color         background color             control type               ID
    /*string                font                            rc                  foreground color              background color                control type                   ID  */
   // D_COMMON_PAGE_HEADER(QObject::trUtf8("网口数据"))
   // D_COMMON_PAGE_HEADER(QObject::trUtf8("网口数据1"))
//#ifdef 1
    D_COMMON_PAGE_BUTTON_BAR_NEW
//#else
//    D_COMMON_PAGE_BUTTON_BAR
//#endif
//                {"",                            D_FONT(6),      QRect(0,543,800,2),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {QObject::trUtf8("Page1"),              D_FONT(6),      QRect(237,550,100,43),           Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_REVPAGE1  },
//                {QObject::trUtf8("Page2"),              D_FONT(6),      QRect(350,550,100,43),           Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_REVPAGE2  },
//                {QObject::trUtf8("RevPage3"),              D_FONT(6),      QRect(462,550,100,43),           Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_REVPAGE3  },
//                {QObject::trUtf8("SendPage"),              D_FONT(6),      QRect(575,550,100,43),         Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_SENDPAGE  },
//                {QObject::trUtf8("返 回"),                  D_FONT(6),      QRect(687,550,100,43),         Qt::white,                Qt::blue,                CONTROL_BUTTON,         ID_PICSD_BUTTON_BACK      },


                //H line
                //{"",                            D_FONT(6),      QRect(62,75,500,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
                {"Length",                  D_FONT(6),      QRect(10,   9, 50,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_LENGTH },
                {"Head",                    D_FONT(6),      QRect(60,   9, 50,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_HEAD },
                {"CRC",                     D_FONT(6),      QRect(110,  9, 50,  30),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_CRC },

                {"Length",                  D_FONT(6),      QRect(1,   34, 40,  20),      Qt::white,                    Qt::black,            CONTROL_LABEL,          ID_CUDPDATAPAGE1_LABLE },


//                {"",                            D_FONT(6),      QRect(34+25,72,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,90,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,108,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,126,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,144,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,162,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,180,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,198,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,216,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,234,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,252,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,270,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,288,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,306,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,324,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,342,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,360,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,378,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,396,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,414,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,432,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(34+25,450,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(34+25,468,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(34+25,486,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(34+25,504,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(34+25,522,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                 {"",                            D_FONT(6),      QRect(34+25,540,736,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//            //     {"",                            D_FONT(6),      QRect(30,558,740,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },

////                {"510",                            D_FONT(4),      QRect(4,72,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"520",                            D_FONT(4),      QRect(4,90,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,108,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,126,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,144,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,162,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,180,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,198,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,216,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,234,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,252,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,270,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,288,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,306,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,324,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,342,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,360,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,378,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,396,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,414,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,432,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                {"",                            D_FONT(6),      QRect(4,450,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                 {"",                            D_FONT(6),      QRect(4,468,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                 {"",                            D_FONT(6),      QRect(4,486,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                 {"",                            D_FONT(6),      QRect(4,504,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////                 {"",                            D_FONT(6),      QRect(4,522,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },
////               //  {"",                            D_FONT(6),      QRect(4,540,30,17),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE                 },


//                //{"",                            D_FONT(6),      QRect(62,500,500,1),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },

//                //V line
//                {"",                            D_FONT(6),      QRect(34+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(87,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(80+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(137,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(126+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(187,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(172+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(237,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(218+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(287,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(264+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(337,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(310+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(387,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(356+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(437,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(402+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(487,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(448+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//               // {"",                            D_FONT(6),      QRect(537,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(494+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(540+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(586+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(632+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(678+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(724+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                {"",                            D_FONT(6),      QRect(770+25,72,1,468),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },


//                //{"",                            D_FONT(6),      QRect(587,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(612,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(637,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(662,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },
//                //{"",                            D_FONT(6),      QRect(687,100,1,375),           Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE                 },

};

int g_UdpDataPage1RomLen = sizeof(g_PicRom_UdpDataPage1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CUdpDataPage1,CPage)
        //ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_LBUTTONDOWN(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_LBUTTONDOWN(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_LBUTTONDOWN(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_LBUTTONDOWN(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_LBUTTONDOWN(IDLB_COM_BTN6, OnComBtn6Clk)
//#ifdef PAGE_BUTTON_BAR_NEW
        ON_LBUTTONDOWN(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_LBUTTONDOWN(IDLB_COM_BTN8, OnComBtn8Clk)


//#endif

END_MESSAGE_MAP()

CUdpDataPage1::CUdpDataPage1()
{
    m_nBtnIndex = 1;
    UDP_lable=QObject::trUtf8("接收1");

}

void CUdpDataPage1::OnUpdatePage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("接收1"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("接收2"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("接收3"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("接收4"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("接收5"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("接收6"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("发送"));
//#else
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("接收数据1"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("接收数据2"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("发送数据"));
    RedrawTable();
    UpdateRawData();
    QPainter* pPainter = GetPainter();
       QRect rc;
       QRect rc2;
       //WORD g_dataBuffer_temp[416];



       switch(m_nBtnIndex)
       {
           case 1:
           {


               for(int i = 0; i < 416; i++)
               {

                 //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
                  // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
                   rc =  QRect((50*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   rc2 = QRect((50*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   pPainter->fillRect(rc,Qt::black);
                   pPainter->fillRect(rc2,Qt::black);
                   pPainter->setFont(D_FONT(6));
                   if(((i/16)%2)==0)
                   {
                       pPainter->setPen(Qt::green);
                   }
                   else
                   {
                       pPainter->setPen(Qt::yellow);
                   }

           //        char hex[8] = {'\0'};
           //        sprintf(hex,"%04X",g_dataBuffer_MVB[i]);
           //        pPainter->drawText(rc, Qt::AlignCenter,hex);

                   char hex1[4] = {'\0'};
                   char hex2[4] = {'\0'};
                   sprintf(hex1,"%02X",g_dataBuffer_MVB[i]%256);
                   sprintf(hex2,"%02X",g_dataBuffer_MVB[i]/256);
                   pPainter->drawText(rc,  Qt::AlignCenter,hex1);
                   pPainter->drawText(rc2, Qt::AlignCenter,hex2);
               }
           }
           break;
            case 2:
            {      
               for(int i = 0; i < 416; i++)
               {

                 //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
                  // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
                   rc =  QRect((50*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   rc2 = QRect((50*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   pPainter->fillRect(rc,Qt::black);
                   pPainter->fillRect(rc2,Qt::black);
                   pPainter->setFont(D_FONT(6));
                   if(((i/16)%2)==0)
                   {
                       pPainter->setPen(Qt::green);
                   }
                   else
                   {
                       pPainter->setPen(Qt::yellow);
                   }

//                   char hex[8] = {'\0'};
//                   sprintf(hex,"%04X",g_dataBuffer_MVB[i+416]);
//                   pPainter->drawText(rc, Qt::AlignCenter,hex);

                   char hex1[4] = {'\0'};
                   char hex2[4] = {'\0'};
                   sprintf(hex1,"%02X",g_dataBuffer_MVB[i+416]%256);
                   sprintf(hex2,"%02X",g_dataBuffer_MVB[i+416]/256);
                   pPainter->drawText(rc,  Qt::AlignCenter,hex1);
                   pPainter->drawText(rc2, Qt::AlignCenter,hex2);
               }


            }
           break;
            case 3:
            {
//               for(int i = 0; i < 416; i++)
//               {
//                   if(i<40)
//                   {
//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+832];
//                   }
//                   if((39<i)&&(i<49))
//                   {
//                        g_dataBuffer_temp[i]=0;
//                   }
//                   if((47<i)&&(i<72))
//                   {
//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+832-8];
//                   }
//                   if((71<i)&&(i<80))
//                   {
//                        g_dataBuffer_temp[i]=0;
//                   }
//                   if((79<i)&&(i<416))
//                   {
//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+832-16];
//                   }

//               }

               for(int i = 0; i < 416; i++)
               {

                   //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
                  // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
                   rc =  QRect((50*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   rc2 = QRect((50*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
                   pPainter->fillRect(rc,Qt::black);
                   pPainter->fillRect(rc2,Qt::black);
                   pPainter->setFont(D_FONT(6));
                   if(((i/16)%2)==0)
                   {
                       pPainter->setPen(Qt::green);

                   }
                   else
                   {
                       pPainter->setPen(Qt::yellow);
                   }

//                   char hex[8] = {'\0'};
//                   sprintf(hex,"%04X",g_dataBuffer_temp[i]);
//                   pPainter->drawText(rc, Qt::AlignCenter,hex);

                   char hex1[4] = {'\0'};
                   char hex2[4] = {'\0'};
                   sprintf(hex1,"%02X",g_dataBuffer_MVB[i+832]%256);
                   sprintf(hex2,"%02X",g_dataBuffer_MVB[i+832]/256);
                   pPainter->drawText(rc,  Qt::AlignCenter,hex1);
                   pPainter->drawText(rc2, Qt::AlignCenter,hex2);
               }

            }
           break;
       case 4:
       {
//               for(int i = 0; i < 416; i++)
//               {

//                        g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+1248-16];


//               }



          for(int i = 0; i < 416; i++)
          {
              rc =  QRect((50*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              rc2 = QRect((50*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->fillRect(rc2,Qt::black);
              pPainter->setFont(D_FONT(6));
              if(((i/16)%2)==0)
              {
                  pPainter->setPen(Qt::green);

              }
              else
              {
                  pPainter->setPen(Qt::yellow);
              }

              char hex1[4] = {'\0'};
              char hex2[4] = {'\0'};
              sprintf(hex1,"%02X",g_dataBuffer_MVB[i+1248]%256);
              sprintf(hex2,"%02X",g_dataBuffer_MVB[i+1248]/256);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
          }

       }
      break;
       case 5:
       {
          for(int i = 0; i < 416; i++)
          {

//              if(i<160)
//              {
//                   g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+1664-16];
//              }

//              if(159<i)
//              {
//                   g_dataBuffer_temp[i]=g_dataBuffer_MVB[i+1664-16+192];
//              }



          }
          for(int i = 0; i < 416; i++)
          {

              //  rc = QRect((31*(4/5)+37*(4/5)*(i%20)),(73*(4/5)+18*(4/5)*(i/20)),36*(4/5),17*(4/5));
             // rc = QRect((24+29*(i%20)),(58+14*(i/20)),28,13);
              rc =  QRect((50*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              rc2 = QRect((50*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->fillRect(rc2,Qt::black);
              pPainter->setFont(D_FONT(6));
              if(((i/16)%2)==0)
              {
                  pPainter->setPen(Qt::green);

              }
              else
              {
                  pPainter->setPen(Qt::yellow);
              }

              char hex1[4] = {'\0'};
              char hex2[4] = {'\0'};
              sprintf(hex1,"%02X",g_dataBuffer_MVB[i+1664]%256);
              sprintf(hex2,"%02X",g_dataBuffer_MVB[i+1664]/256);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
          }

       }
      break;
      case 6:
      {
          for(int i = 0; i < 416; i++)
          {
              rc =  QRect((50*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              rc2 = QRect((50*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->fillRect(rc2,Qt::black);
              pPainter->setFont(D_FONT(6));
              if(((i/16)%2)==0)
              {
                  pPainter->setPen(Qt::green);

              }
              else
              {
                  pPainter->setPen(Qt::yellow);
              }

              char hex1[4] = {'\0'};
              char hex2[4] = {'\0'};
              sprintf(hex1,"%02X",g_dataBuffer_MVB[i+2080]%256);
              sprintf(hex2,"%02X",g_dataBuffer_MVB[i+2080]/256);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
          }


      }
      break;

       case 7:
       {

          for(int i = 0; i < 32; i++)
          {
              rc =  QRect((50*SCREEN_factor+23*SCREEN_factor*(i%32)),(73*SCREEN_factor),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->setPen(Qt::green);
              char hex1[4] = {'\0'};
              sprintf(hex1,"%02X",MVBsendData[i]);
              pPainter->drawText(rc,  Qt::AlignCenter,hex1);

          }

          for(int i = 0; i < 32; i++)
          {
              rc =  QRect((50*SCREEN_factor+23*SCREEN_factor*(i%32)),(73*SCREEN_factor+18*SCREEN_factor),22*SCREEN_factor,17*SCREEN_factor);
              pPainter->fillRect(rc,Qt::black);
              pPainter->setPen(Qt::yellow);
              char hex2[4] = {'\0'};
              sprintf(hex2,"%02X",MVBsendData[i+32]);
              pPainter->drawText(rc,  Qt::AlignCenter,hex2);

          }


//          for(int i = 0; i < 64; i++)
//          {
//              rc =  QRect((50*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
//              rc2 = QRect((50*SCREEN_factor+23*SCREEN_factor+46*SCREEN_factor*(i%16)),(73*SCREEN_factor+18*SCREEN_factor*(i/16)),22*SCREEN_factor,17*SCREEN_factor);
//              pPainter->fillRect(rc,Qt::black);
//              pPainter->fillRect(rc2,Qt::black);
//              pPainter->setFont(D_FONT(6));
//              if(((i/16)%2)==0)
//              {
//                  pPainter->setPen(Qt::green);

//              }
//              else
//              {
//                  pPainter->setPen(Qt::yellow);
//              }


//              char hex1[4] = {'\0'};
//              char hex2[4] = {'\0'};
//              sprintf(hex1,"%02X",MVBsendData[i]%256);
//              sprintf(hex2,"%02X",MVBsendData[i]/256);
//              pPainter->drawText(rc,  Qt::AlignCenter,hex1);
//              pPainter->drawText(rc2, Qt::AlignCenter,hex2);
//          }

       }
      break;
       default:
           break;
       }

}

void CUdpDataPage1::OnShowPage()
{

//#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("接收1"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("接收2"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("接收3"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("接收4"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("接收5"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("接收6"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("接收7"));
//#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("接收数据1"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("接收数据2"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("发送数据"));
   // ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("调试页面"));
   // ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
//#endif

}

void CUdpDataPage1::UpdateRawData()
{
    WORD temp[4];
    for(int i=0;i<3;i++)
    {
        temp[i] = (test_tempdata[90+i*2]<<8) | test_tempdata[90+i*2+1];
    }

    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_LENGTH))->SetCtrlText(QString::number(temp[0]));
    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_HEAD))->SetCtrlText(QString::number(temp[1]));
    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_CRC))->SetCtrlText(QString::number(temp[2]));
    ((CLabel *)GetDlgItem(ID_CUDPDATAPAGE1_LABLE))->SetCtrlText(UDP_lable);

}

void CUdpDataPage1::OnComBtn1Clk()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);

}

void CUdpDataPage1::OnComBtn2Clk()
{
    m_nBtnIndex = 1;
    UDP_lable=QObject::trUtf8("接收1");
         RedrawTable();
   ((CButton*)GetDlgItem(IDLB_COM_BTN1))->ChangeButtonState(LBUTTON_UP);
   ((CButton*)GetDlgItem(IDLB_COM_BTN2))->ChangeButtonState(LBUTTON_DOWN);
   ((CButton*)GetDlgItem(IDLB_COM_BTN3))->ChangeButtonState(LBUTTON_UP);
   ((CButton*)GetDlgItem(IDLB_COM_BTN4))->ChangeButtonState(LBUTTON_UP);
   ((CButton*)GetDlgItem(IDLB_COM_BTN5))->ChangeButtonState(LBUTTON_UP);
   ((CButton*)GetDlgItem(IDLB_COM_BTN6))->ChangeButtonState(LBUTTON_UP);
   ((CButton*)GetDlgItem(IDLB_COM_BTN7))->ChangeButtonState(LBUTTON_UP);
   ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
}

void CUdpDataPage1::OnComBtn3Clk()
{
    m_nBtnIndex = 2;
    UDP_lable=QObject::trUtf8("接收2");
         RedrawTable();
         ((CButton*)GetDlgItem(IDLB_COM_BTN1))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN2))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN3))->ChangeButtonState(LBUTTON_DOWN);
         ((CButton*)GetDlgItem(IDLB_COM_BTN4))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN5))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN6))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN7))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
}

void CUdpDataPage1::OnComBtn4Clk()
{
    m_nBtnIndex = 3;
    UDP_lable=QObject::trUtf8("接收3");
         RedrawTable();
         ((CButton*)GetDlgItem(IDLB_COM_BTN1))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN2))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN3))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN4))->ChangeButtonState(LBUTTON_DOWN);
         ((CButton*)GetDlgItem(IDLB_COM_BTN5))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN6))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN7))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
}

void CUdpDataPage1::OnComBtn5Clk()
{
    m_nBtnIndex = 4;
    UDP_lable=QObject::trUtf8("接收4");
         RedrawTable();
         ((CButton*)GetDlgItem(IDLB_COM_BTN1))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN2))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN3))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN4))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN5))->ChangeButtonState(LBUTTON_DOWN);
         ((CButton*)GetDlgItem(IDLB_COM_BTN6))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN7))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
}

void CUdpDataPage1::OnComBtn6Clk()
{
    m_nBtnIndex = 5;
    UDP_lable=QObject::trUtf8("接收5");
         RedrawTable();
         ((CButton*)GetDlgItem(IDLB_COM_BTN1))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN2))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN3))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN4))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN5))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN6))->ChangeButtonState(LBUTTON_DOWN);
         ((CButton*)GetDlgItem(IDLB_COM_BTN7))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
}
void CUdpDataPage1::OnComBtn7Clk()
{
    m_nBtnIndex = 6;
    UDP_lable=QObject::trUtf8("接收6");
         RedrawTable();
         ((CButton*)GetDlgItem(IDLB_COM_BTN1))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN2))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN3))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN4))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN5))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN6))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN7))->ChangeButtonState(LBUTTON_DOWN);
         ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
}
void CUdpDataPage1::OnComBtn8Clk()
{
    m_nBtnIndex = 7;
    UDP_lable=QObject::trUtf8("接收7");
         RedrawTable();
         ((CButton*)GetDlgItem(IDLB_COM_BTN1))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN2))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN3))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN4))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN5))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN6))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN7))->ChangeButtonState(LBUTTON_UP);
         ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_DOWN);
}

void CUdpDataPage1::OnInitPage()
{
}

void CUdpDataPage1::RedrawTable()
{
    QPainter* pPainter = GetPainter();
    QRect rc;

    for(int i = 0; i < 32; i++)
    {

        //rc = QRect((48+25+46*i),46,20,25);
        rc = QRect((49*SCREEN_factor+23*SCREEN_factor*i),46*SCREEN_factor,23*SCREEN_factor,25*SCREEN_factor);
        //rc = QRect((28+29*i),36,16,20);
        //rc = QRect((35*(4/5)+37*(4/5)*i),46*(4/5),20*(4/5),25*(4/5));
        pPainter->fillRect(rc,Qt::black);
        pPainter->setFont(D_FONT(5));
        pPainter->setPen(Qt::white);
        pPainter->drawText(rc, Qt::AlignCenter,QString::number(i));
    }

    for(int i = 0; i < 26; i++)
    {

        rc = QRect(1*SCREEN_factor,(72*SCREEN_factor+18*SCREEN_factor*i),20*SCREEN_factor+25*SCREEN_factor,20*SCREEN_factor);
        //rc = QRect(1,(57+14*i),22,16);
        //rc = QRect(1,(72*(4/5)+18*(4/5)*i),28*(4/5),20*(4/5));
        pPainter->fillRect(rc,Qt::black);
        pPainter->setFont(D_FONT(5));
        pPainter->setPen(Qt::gray);
       switch(m_nBtnIndex)
       {
        case 1:
            if(i==0)//0+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"F");
            }
            if(i==1)//16+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"110");
            }
            if(i==2)//32+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"321");
            }
            if(i==3)//48+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"200");
            }
            if(i==4)//64+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"322");
            }
            if(i==5)//80+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"201");
            }
            if(i==6)//96+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==7)//112+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==8)//128+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==9)//144+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==10)//160+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"051");
            }
            if(i==11)//176+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"052");
            }
            if(i==12)//192+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"053");
            }
            if(i==13)//208+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"054");
            }
            if(i==14)//224+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"061");
            }
            if(i==15)//240+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"062");
            }
            if(i==16)//256+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"064");
            }
            if(i==17)//272+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"065");
            }
            if(i==18)//288+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==19)//304+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==20)//320+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==21)//336+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==22)//352+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"06d");
            }
            if(i==23)//368+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"06e");
            }
            if(i==24)//384+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==25)//400+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
//            if(i==24)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,"421");
//            }
//            if(i==25)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,"422");
//            }

            break;
        case 2:
            if(i==0)//416+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==1)//432+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==2)//448+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"079");
            }
            if(i==3)//464+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"083");
            }
            if(i==4)//480+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"08d");
            }
            if(i==5)//496+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"097");
            }
            if(i==6)//512+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"06f");
            }
            if(i==7)//528+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"070");
            }
            if(i==8)//544+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"0fa");
            }
            if(i==9)//560+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"100");
            }
            if(i==10)//576+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"101");
            }
            if(i==11)//592+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"102");
            }
            if(i==12)//608+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"103");
            }
            if(i==13)//624+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"104");
            }
            if(i==14)//640+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"105");
            }
            if(i==15)//656+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"107");
            }
            if(i==16)//672+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"170");
            }
            if(i==17)//688+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"171");
            }
            if(i==18)//704+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"173");

            }
            if(i==19)//720+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"177");
            }
            if(i==20)//736+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"178");
            }
            if(i==21)//752+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"179");
            }
            if(i==22)//768+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"108");
            }
            if(i==23)//784+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"109");
            }
            if(i==24)//800+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"10a");
            }
            if(i==25)//816+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"10b");
            }
//            if(i==26)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,"561");
//            }
//            if(i==27)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,"610");
//            }
//            if(i==28)
//            {
//                pPainter->drawText(rc, Qt::AlignCenter,"611");
//            }
            break;
        case 3:
             if(i==0)//832+i
             {
                    pPainter->drawText(rc, Qt::AlignCenter,"10c");
             }
             if(i==1)//848+i
             {
                    pPainter->drawText(rc, Qt::AlignCenter,"10d");
             }
             if(i==2)//864+i
             {
                    pPainter->drawText(rc, Qt::AlignCenter,"10e");
             }
             if(i==3)//880+i
             {
                    pPainter->drawText(rc, Qt::AlignCenter,"12d");
            }
            if(i==4)//896+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"12e");
            }
            if(i==5)//912+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"12f");
            }
            if(i==6)//928+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"130");
            }
            if(i==7)//944+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"191");
            }
            if(i==8)//960+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"192");
            }
            if(i==9)//976+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"193");
            }
            if(i==10)//992+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"194");
            }
            if(i==11)//1008+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"19b");
            }
            if(i==12)//1024+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"19c");
            }
            if(i==13)//1040+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"19d");
            }
            if(i==14)//1056+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"19e");
            }
            if(i==15)//1072+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1a5");
            }
            if(i==16)//1088+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1a6");
            }
            if(i==17)//1104+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1a7");
            }
            if(i==18)//1120+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1a8");
            }
            if(i==19)//1136+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1af");
            }
            if(i==20)//1152+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1b0");
            }
            if(i==21)//1168+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1b1");
            }
            if(i==22)//1184+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1b2");
            }
            if(i==23)//1200+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1b9");
            }
            if(i==24)//1216+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1ba");
            }
            if(i==25)//1232+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1bb");
            }

            break;

        case 4:
            if(i==0)//1248+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1bc");
            }
            if(i==1)//1264+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1c3");
            }
            if(i==2)//1280+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1c4");
            }
            if(i==3)//1296+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1c5");
            }
            if(i==4)//1312+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1c6");
            }
            if(i==5)//1328+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1cd");
            }
            if(i==6)//1344+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1ce");
            }
            if(i==7)//1360+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1cf");
            }
            if(i==8)//1376+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1d0");
            }
            if(i==9)//1392+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1d7");
            }
            if(i==10)//1408+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1d8");
            }
            if(i==11)//1424+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1d9");
            }
            if(i==12)//1440+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1da");
            }
            if(i==13)//1456+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"38f");
            }
            if(i==14)//1472+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"399");
            }
            if(i==15)//1488+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3a3");
            }
            if(i==16)//1504+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3ad");
            }
            if(i==17)//1520+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3b7");
            }
            if(i==18)//1536+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"390");
            }
            if(i==19)//1552+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"39a");
            }
            if(i==20)//1568+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3a4");
            }
            if(i==21)//1584+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3ae");
            }
            if(i==22)//1600+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3b7");
            }
            if(i==23)//1616+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"391");
            }
            if(i==24)//1632+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"39b");
            }
            if(i==25)//1648+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3a5");
            }

            break;
        case 5:
            if(i==0)//1664+i
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"3af");
            }
            if(i==1)//1680+i
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"3b9");
            }
            if(i==2)//1696+i
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"392");
            }
            if(i==3)//1712+i
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"39c");
            }
            if(i==4)//1728+i
            {
                            pPainter->drawText(rc, Qt::AlignCenter,"3a6");
            }
           if(i==5)//1744+i
           {
                            pPainter->drawText(rc, Qt::AlignCenter,"3b0");
           }
           if(i==6)//1760+i
           {
                            pPainter->drawText(rc, Qt::AlignCenter,"3ba");
            }
            if(i==7)//1776+i
           {
                            pPainter->drawText(rc, Qt::AlignCenter,"393");
           }
            if(i==8)//1792+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"39b");
            }
            if(i==9)//1808+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3a7");
            }
            if(i==10)//1824+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3b1");
            }

            if(i==11)//1840+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"3bb");

            }
            if(i==12)//1856+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==13)//1872+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"2ef");
            }
            if(i==14)//1888+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==15)//1904+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==16)//1920+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==17)//1936+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"258");
            }
            if(i==18)//1952+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"259");
            }
            if(i==19)//1968+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"25a");
            }
            if(i==20)//1984+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"2bc");
            }
            if(i==21)//2000+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"2bd");
            }
            if(i==22)//2016+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1f5");
            }
            if(i==23)//2032+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"1f6");
            }
            if(i==24)//2048+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"226");
            }
            if(i==25)//2064+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }


            break;
        case 6:
            if(i==0)//2080+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"");
            }
            if(i==1)//2080+i+16
            {
                pPainter->drawText(rc, Qt::AlignCenter,"OTP1");
            }
            if(i==2)//2080+32+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"");
            }
            if(i==3)//2080+32+i+16
            {
                pPainter->drawText(rc, Qt::AlignCenter,"OTP2");
            }
            if(i==4)//2080+64+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"");
            }
            if(i==5)//2080+64+i+16
            {
                pPainter->drawText(rc, Qt::AlignCenter,"OTP3");
            }


            if(i==6)//2080+96+i
            {
                pPainter->drawText(rc, Qt::AlignCenter,"");
            }
            if(i==7)//2080+96+i+16
            {
                pPainter->drawText(rc, Qt::AlignCenter,"OTP4");
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"");
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"");
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }

            break;
        case 7:
            if(i==0)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"CT1");
            }
            if(i==1)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"CT2");
            }
            if(i==2)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"HV1");
            }
            if(i==3)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"HV2");
            }
            if(i==4)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==5)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==6)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");

            }
            if(i==7)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==8)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==9)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==10)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==11)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==12)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==13)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==14)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==15)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==16)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==17)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==18)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==19)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==20)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==21)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==22)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==23)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==24)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            if(i==25)
            {
                pPainter->drawText(rc, Qt::AlignCenter,"---");
            }
            break;


        default:
            break;

        }
    }
}


