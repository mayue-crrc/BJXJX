#include <qsettings.h>
#include <qfile.h>

#include "h8.h"
#include "cluminancesetpage.h"
#include "cwarningdialog.h"

ROMDATA g_PicRom_LuminanceSet[] =
{
    /*string                          font                                        rc                  foreground color              background color                control type                   ID           */
    {QSTR("亮度调节"),           D_FONT(13),                           QRect(0,0,640,60),           Qt::black,                      Qt::yellow,                 CONTROL_LABEL,      ID_LUNINSMCESET_LABEL_TITLE    },
    {"",                             D_DEFAULT_FONT,                       QRect(85,200,470,50),        Qt::yellow,                     Qt::black,                  CONTROL_SLIDER,     ID_LUNINSMCESET_SLIDER_MOVE    },
    {QSTR("手动调节完成"),                D_COMMON_TITLE_FONT,                  QRect( 65,350,130,50),       Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_LUNINSMCESET_BUTTON_OK      },
    {QSTR("自动调节"),                D_COMMON_TITLE_FONT,                  QRect(255,350,130,50),       Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_LUNINSMCESET_BUTTON_AUTO    },
    {QSTR("退出"),                   D_COMMON_TITLE_FONT,                  QRect(445,350,130,50),       Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_LUNINSMCESET_BUTTON_QUIT    },

};
int g_LuminanceSetRomLen = sizeof(g_PicRom_LuminanceSet)/sizeof(ROMDATA);

LIGHTSTRU lights[] =
{
    {0, 106},
    {1, 169},
    {2, 232},
    {3, 295},
    {4, 357},
    {5, 420},
    {6, 483},
    {7, 546},
    {8, 608},
    {9, 671}
};

BEGIN_MESSAGE_MAP(CLuminanceSetPage,CPage)
    ON_UPDATE_PAGE()
    ON_LBUTTONDOWN(ID_LUNINSMCESET_BUTTON_OK, OnOkDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_BUTTON_OK, OnOkUp)
    ON_LBUTTONDOWN(ID_LUNINSMCESET_BUTTON_AUTO, OnAutoDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_BUTTON_AUTO, OnAutoUp)
    ON_LBUTTONDOWN(ID_LUNINSMCESET_BUTTON_QUIT, OnQuitDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_BUTTON_QUIT, OnQuitUp)
    ON_LBUTTONDOWN(ID_LUNINSMCESET_SLIDER_MOVE, OnSliderMoveButtonDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_SLIDER_MOVE, OnSliderMoveButtonUp)
END_MESSAGE_MAP()

CLuminanceSetPage::CLuminanceSetPage()
{

}

CLuminanceSetPage::~CLuminanceSetPage()
{
}

void CLuminanceSetPage::OnUpdatePage()
{

#ifdef USE_MVB_DATA_LUM
      //  int backlightBrightnessStr;
        int  backlightBrightness;

        H8::getH8()->getBrightness(&backlightBrightness);

        //backlightBrightness = backlightBrightnessStr.toInt();

        ((CLabel *)GetDlgItem(ID_LUNINSMCESET_LABEL_TITLE))->SetCtrlText(QObject::trUtf8("亮度调节")+"  "+QString::number(backlightBrightness));

#endif
}


void CLuminanceSetPage::OnInitPage()
{

#ifdef USE_MVB_DATA_LUM

        int backlightBrightness;

        H8::getH8()->getBrightness(&backlightBrightness);

        //backlightBrightness = backlightBrightnessStr.toInt();

        ((CLabel *)GetDlgItem(ID_LUNINSMCESET_LABEL_TITLE))->SetCtrlText(QObject::trUtf8("亮度调节")+"  "+QString::number(backlightBrightness));

        g_lightvalue=backlightBrightness/25;



    for(int i=0; i<10; i++)
    {
        if(g_lightvalue == lights[i].nLight)
        {
            ((CSliderCtrl *)GetDlgItem(ID_LUNINSMCESET_SLIDER_MOVE))->SetThumbInfo(2, SetSliderMovePosition(lights[i].nPos));
            break;
        }
    }
#endif
}

void CLuminanceSetPage::OnOkDown()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CLuminanceSetPage::OnOkUp()
{


#ifdef USE_MVB_DATA_LUM
    SetLightValue(g_lightvalue);
#endif
//    CloseSerialPort();
}
void CLuminanceSetPage::OnAutoDown()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_AUTO))->ChangeButtonState(LBUTTON_DOWN);
}
void CLuminanceSetPage::OnAutoUp()
{

#ifdef USE_MVB_DATA_LUM
//    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_AUTO))->ChangeButtonState(LBUTTON_UP);
//    if (!isOpen)
//    {
//        int ret;
//        ret = InitSerialPort();
//        if (0 != ret)
//        {
//            CWarningDialog warningDlg;
//            QString str="";
//            str.sprintf("%d", ret);
//            warningDlg.SetWarningStr(QSTR("InitSerialPort()返回值：")+str);
//            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
//            warningDlg.exec();
//            return;
//        }
//    }
//    SetAutoAdjust();
//    CloseSerialPort();
     ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_AUTO))->ChangeButtonState(LBUTTON_UP);
        H8::getH8()->setBrightness(0);

        //slotUpdateCurrentBacklight();
#endif
}
void CLuminanceSetPage::OnQuitDown()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CLuminanceSetPage::OnQuitUp()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CLuminanceSetPage::OnSliderMoveButtonDown()
{
    CSliderCtrl* pSliderCtrl;
    QDialog *pDialog;
    int thumb_pos,change_pos;

    pDialog = GetParentDlg();
    thumb_pos = pDialog->mapFromGlobal(QCursor::pos()).x();
    pSliderCtrl = (CSliderCtrl *)GetDlgItem(ID_LUNINSMCESET_SLIDER_MOVE);
    change_pos = SetSliderMovePosition(thumb_pos);
    //qDebug() << "OnSliderMoveButtonDown()" << thumb_pos << change_pos;
    pSliderCtrl->SetThumbInfo(1, change_pos);
}

void CLuminanceSetPage::OnSliderMoveButtonUp()
{
    CSliderCtrl* pSliderCtrl;
    QDialog *pDialog;
    int thumb_pos,change_pos;

    pDialog = GetParentDlg();
    thumb_pos = pDialog->mapFromGlobal(QCursor::pos()).x();
    pSliderCtrl = (CSliderCtrl *)GetDlgItem(ID_LUNINSMCESET_SLIDER_MOVE);
    change_pos = SetSliderMovePosition(thumb_pos);
    //qDebug() << "OnSliderMoveButtonUp()" << thumb_pos << change_pos;
    pSliderCtrl->SetThumbInfo(2, change_pos);
}

void CLuminanceSetPage::WriteLightValueToINI()
{
    QFile inifile;
    QSettings* pSetting = NULL;
    QString inipath = qApp->applicationDirPath() + "/system.ini";

    if( inifile.exists(inipath) ){
        pSetting = new QSettings(inipath, QSettings::IniFormat );
        pSetting->setValue("/LightSet/LightValue", QString::number(g_lightvalue));
    } // end if

    delete pSetting;
}

int CLuminanceSetPage::SetSliderMovePosition(int thumb_pos)
{
    if (thumb_pos < 149)
    {
        g_lightvalue = 0;
    }
    else if ((thumb_pos >= 149) && (thumb_pos < 212))
    {
        g_lightvalue = 1;
    }
    else if ((thumb_pos >= 212) && (thumb_pos < 275))
    {
        g_lightvalue = 2;
    }
    else if ((thumb_pos >= 275) && (thumb_pos < 338))
    {
        g_lightvalue = 3;
    }
    else if ((thumb_pos >= 338) && (thumb_pos < 401))
    {
        g_lightvalue = 4;
    }
    else if ((thumb_pos >= 401) && (thumb_pos < 464))
    {
        g_lightvalue = 5;
    }
    else if ((thumb_pos >= 464) && (thumb_pos < 527))
    {
        g_lightvalue = 6;
    }
    else if ((thumb_pos >= 527) && (thumb_pos < 590))
    {
        g_lightvalue = 7;
    }
    else if ((thumb_pos >= 590) && (thumb_pos < 653))
    {
        g_lightvalue = 8;
    }
    else
    {
        g_lightvalue = 9;
    }

    return lights[g_lightvalue].nPos;
}

int CLuminanceSetPage::InitSerialPort()
{
    BAUDRATE = B9600;
    MODEMDEVICE = "/dev/ttyS2";
    DATABITS = CS8;
    PARITYTYPE = 0;
    STOPBITS = 1;

    if ((fd = open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
        return 1;
    }

    int status;
    struct termios Opt;
    tcgetattr(fd, &Opt);
    tcflush(fd, TCIOFLUSH);
    cfsetispeed(&Opt, BAUDRATE);
    cfsetospeed(&Opt, BAUDRATE);
    status =  tcsetattr(fd ,TCSANOW, &Opt);
    if (status != 0)
    {
        return 2;
    }
    tcflush(fd, TCIOFLUSH);

    struct termios options;
    if (tcgetattr( fd, &options ) != 0 )
    {
        return 3;
    }
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= DATABITS;
    options.c_cflag &= ~PARENB;
    options.c_iflag &= ~INPCK;
    options.c_cflag &= ~CSTOPB;

    tcflush(fd, TCIFLUSH);

    options.c_lflag = 0;
    options.c_oflag = 0;
    options.c_iflag &= ~( ICRNL|IXON);
    options.c_cc[VTIME] = 1;
    options.c_cc[VMIN] = 0;
    if(tcsetattr(fd, TCSANOW,&options) != 0)
    {
        return 4;
    }
    isOpen = true;
    return 0;
}

void CLuminanceSetPage::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    close(fd);
    isOpen = false;
}

int CLuminanceSetPage::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData, 100);
    }
    mutexRead.unlock();
    return nread;
}

int CLuminanceSetPage::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

void CLuminanceSetPage::SetLightValue(int lightValue)
{
    ASSERT((lightValue >= 0) && (lightValue <= 9));
    int luminance;
    if (0 == lightValue)
    {
        luminance = 2;
    }
    else
    {
        luminance = lightValue * 255 / 9;
    }
    H8::getH8()->setBrightness(luminance);
}
void CLuminanceSetPage::SetAutoAdjust()
{

}
int CLuminanceSetPage::getLuminance()
{

}
