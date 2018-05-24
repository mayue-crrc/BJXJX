#ifndef CLUMINANCESETPAGE_H
#define CLUMINANCESETPAGE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <string.h>

#include <qwaitcondition.h>
#include <QMutex>

#include "cpage.h"

#define ID_LUNINSMCESET_LABEL_TITLE   0x1201
#define ID_LUNINSMCESET_BUTTON_OK     0x1202
#define ID_LUNINSMCESET_SLIDER_MOVE   0x1203
#define ID_LUNINSMCESET_BUTTON_QUIT   0x1204
#define ID_LUNINSMCESET_BUTTON_AUTO   0x1205

struct LIGHTSTRU
{
    int nLight;
    int nPos;
};

class CLuminanceSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CLuminanceSetPage)

public:
    CLuminanceSetPage();
    ~CLuminanceSetPage();

private:
    void WriteLightValueToINI();

    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnOkDown();
    void OnOkUp();
    void OnAutoDown();
    void OnAutoUp();
    void OnQuitDown();
    void OnQuitUp();
    void OnSliderMoveButtonDown();
    void OnSliderMoveButtonUp();
    int SetSliderMovePosition(int thumb_pos);

    int InitSerialPort();
    void CloseSerialPort();
    void SetAutoAdjust();
    int ComRead(char *readData);
    int ComWrite(char *writeData, int len);
    void SetLightValue(int lightValue);
    int getLuminance();

// serial port settings
    int fd;
    int status;

    int BAUDRATE;
    const char *MODEMDEVICE;
    int DATABITS;
    int PARITYTYPE;
    int STOPBITS;
    QMutex mutexRead, mutexWrite;
    bool isOpen;
};

#endif // CLUMINANCESETPAGE_H
