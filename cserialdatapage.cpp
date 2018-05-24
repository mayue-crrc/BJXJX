#include "cserialdatapage.h"

ROMDATA g_PicRom_SerialData[] =
{
  D_COMMON_PAGE_HEADER
  {"receive",      D_DEFAULT_FONT,   QRect( 10, 85, 70,345),   Qt::yellow,   Qt::black,   CONTROL_BUTTON,   IDBUTTON_REVDATA },
  {"send",         D_DEFAULT_FONT,   QRect( 10,425, 70, 45),   Qt::yellow,   Qt::black,   CONTROL_BUTTON,   IDBUTTON_SENDDATA},

  {"00",           D_DEFAULT_FONT,   QRect(118, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"01",           D_DEFAULT_FONT,   QRect(168, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"02",           D_DEFAULT_FONT,   QRect(218, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"03",           D_DEFAULT_FONT,   QRect(268, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"04",           D_DEFAULT_FONT,   QRect(318, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"05",           D_DEFAULT_FONT,   QRect(368, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"06",           D_DEFAULT_FONT,   QRect(418, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"07",           D_DEFAULT_FONT,   QRect(468, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"08",           D_DEFAULT_FONT,   QRect(518, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },
  {"09",           D_DEFAULT_FONT,   QRect(568, 65, 40, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE       },

  //v label
  {"00",           D_DEFAULT_FONT,   QRect( 95, 80, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"01",           D_DEFAULT_FONT,   QRect( 95, 95, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"02",           D_DEFAULT_FONT,   QRect( 95,110, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"03",           D_DEFAULT_FONT,   QRect( 95,125, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"04",           D_DEFAULT_FONT,   QRect( 95,140, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"05",           D_DEFAULT_FONT,   QRect( 95,155, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"06",           D_DEFAULT_FONT,   QRect( 95,170, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"07",           D_DEFAULT_FONT,   QRect( 95,185, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"08",           D_DEFAULT_FONT,   QRect( 95,200, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"09",           D_DEFAULT_FONT,   QRect( 95,215, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"10",           D_DEFAULT_FONT,   QRect( 95,230, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"11",           D_DEFAULT_FONT,   QRect( 95,245, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"12",           D_DEFAULT_FONT,   QRect( 95,260, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"13",           D_DEFAULT_FONT,   QRect( 95,275, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"14",           D_DEFAULT_FONT,   QRect( 95,290, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"15",           D_DEFAULT_FONT,   QRect( 95,305, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"16",           D_DEFAULT_FONT,   QRect( 95,320, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"17",           D_DEFAULT_FONT,   QRect( 95,335, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"18",           D_DEFAULT_FONT,   QRect( 95,350, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"19",           D_DEFAULT_FONT,   QRect( 95,365, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"20",           D_DEFAULT_FONT,   QRect( 95,380, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  //{"485_0",        D_DEFAULT_FONT,   QRect( 85,395, 30, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      }, // 20131219 cancel
  //{"485_1",        D_DEFAULT_FONT,   QRect( 85,410, 30, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      }, // 20131219 cancel

  //v label
  {"00",           D_DEFAULT_FONT,   QRect( 95,425, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
  {"01",           D_DEFAULT_FONT,   QRect( 95,440, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      },
//  {"485",          D_DEFAULT_FONT,   QRect( 95,455, 20, 15),    Qt::yellow,   Qt::black,   CONTROL_LABEL,   ID_IGNORE      }, // 20131219 cancel
};
int g_SerialDataLen = sizeof(g_PicRom_SerialData)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CSerialDataPage,CPage)
      ON_UPDATE_PAGE()
      ON_LBUTTONDOWN(IDBUTTON_REVDATA,OnRevButtonDown)
      ON_LBUTTONDOWN(IDBUTTON_SENDDATA,OnSendButtonDown)
END_MESSAGE_MAP()

CSerialDataPage::CSerialDataPage()
{
    m_bStopRevData = false;
    m_bStopSendData = false;
}

void CSerialDataPage::OnInitPage()
{
    ((CButton*)GetDlgItem(IDBUTTON_REVDATA))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(IDBUTTON_SENDDATA))->m_bAutoUpState = false;
    DrawSerialData();
}

void CSerialDataPage::OnRevButtonDown()
{
    m_bStopRevData = !m_bStopRevData;

    CButton* pButton = (CButton*)GetDlgItem(IDBUTTON_REVDATA);
    if(m_bStopRevData)
        pButton->ChangeButtonState(LBUTTON_DOWN);
    else
        pButton->ChangeButtonState(LBUTTON_UP);
}

void CSerialDataPage::OnSendButtonDown()
{
    m_bStopSendData = !m_bStopSendData;

    CButton* pButton = (CButton*)GetDlgItem(IDBUTTON_SENDDATA);
    if(m_bStopSendData)
        pButton->ChangeButtonState(LBUTTON_DOWN);
    else
        pButton->ChangeButtonState(LBUTTON_UP);
}

void CSerialDataPage::OnUpdatePage()
{
    DrawSerialData();
}

void CSerialDataPage::DrawSerialData()
{
    QPainter* pPainter = this->GetPainter();
    QRect rc;
    char hex[4] = {'\0'};

    if(!m_bStopRevData)
    {
        //receive data
        if(g_communication_ok_flag)
        {
            for(int i = 0; i < D_RECEIVE_BUFFER_SIZE; i+=2)
            {
                rc = QRect(int((115+(i%20*25))*1.25),int((80+i/20*15)*1.25),int(50*1.25),int(15*1.25));
                pPainter->setPen(Qt::yellow);
                pPainter->fillRect(rc,Qt::black);
                pPainter->drawRect(rc);
                pPainter->setFont(D_DEFAULT_FONT);
                sprintf(hex,"%04X",(receiveData[i+1]*256+receiveData[i]));
                pPainter->drawText(rc,Qt::AlignCenter,hex);
            }
        }
        else
        {
            for(int i = 0; i < D_RECEIVE_BUFFER_SIZE; i+=2)
            {
                rc = QRect(int((115+(i%20*25))*1.25),int((80+i/20*15)*1.25),int(50*1.25),int(15*1.25));
                pPainter->setPen(Qt::yellow);
                pPainter->fillRect(rc,Qt::black);
                pPainter->drawRect(rc);
                pPainter->setFont(D_DEFAULT_FONT);
                sprintf(hex,"%04X",0);
                pPainter->drawText(rc,Qt::AlignCenter,hex);
            }
        }
 // 20131219 cancel
//        if(!g_communication_ok_flag)
//        {
//            for(int i = 0; i < D_485RECEIVE_BUFFER_SIZE; i+=2)
//            {
//                rc = QRect(int((115+((D_RECEIVE_BUFFER_SIZE+i)%20*25))*1.25),int((80+(D_RECEIVE_BUFFER_SIZE+i)/20*15)*1.25),int(50*1.25),int(15*1.25));
//                pPainter->setPen(Qt::yellow);
//                pPainter->fillRect(rc,Qt::black);
//                pPainter->drawRect(rc);
//                pPainter->setFont(D_DEFAULT_FONT);
//                sprintf(hex,"%04X",(receiveData[388+i+1]*256+receiveData[388+i]));
//                pPainter->drawText(rc,Qt::AlignCenter,hex);
//            }
//        }
//        else
//        {
//            for(int i = 0; i < D_485RECEIVE_BUFFER_SIZE; i+=2)
//            {
//                rc = QRect(int((115+((D_RECEIVE_BUFFER_SIZE+i)%20*25))*1.25),int((80+(D_RECEIVE_BUFFER_SIZE+i)/20*15)*1.25),int(50*1.25),int(15*1.25));
//                pPainter->setPen(Qt::yellow);
//                pPainter->fillRect(rc,Qt::black);
//                pPainter->drawRect(rc);
//                pPainter->setFont(D_DEFAULT_FONT);
//                sprintf(hex,"%04X",0);
//                pPainter->drawText(rc,Qt::AlignCenter,hex);
//            }
//        }
 // 20131219 cancel
    }

    if(!m_bStopSendData)
    {
        //send data 232
        int i = 0;
        for( ; i < D_SEND_BUFFER_SIZE; i+=2)
        {
            rc = QRect(int((115+i%20*25)*1.25),int((425+i/20*15)*1.25),int(50*1.25),int(15*1.25));
            pPainter->fillRect(rc,Qt::black);
            pPainter->setPen(Qt::yellow);
            pPainter->drawRect(rc);
            pPainter->setFont(D_DEFAULT_FONT);
            sprintf(hex,"%04X",(sendData[i+1]*256+sendData[i]));
            pPainter->drawText(rc,Qt::AlignCenter,hex);
        }
 // 20131219 cancel
        // send data 485
//        rc = QRect(int((115+i%20*25)*1.25),int((425+i/20*15)*1.25),int(50*1.25),int(15*1.25));
//        pPainter->fillRect(rc,Qt::black);
//        pPainter->setPen(Qt::yellow);
//        pPainter->drawRect(rc);
//        pPainter->setFont(D_DEFAULT_FONT);
//        sprintf(hex,"%04X",(rs485sendData[1]*256+rs485sendData[0]));
//        pPainter->drawText(rc,Qt::AlignCenter,hex);
 // 20131219 cancel
    }
}
