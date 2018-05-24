#ifndef CSYSLOGINPAGE_H
#define CSYSLOGINPAGE_H

#include "cpage.h"
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

#define ID_PICLOGIN_LABEL_TITLE             0x0001
#define ID_PICLOGIN_BUTTON_OK               0x0002
#define ID_PICLOGIN_BUTTON_CLEAR            0x0003

#define ID_PICLOGIN_BUTTON_0                0x0004
#define ID_PICLOGIN_BUTTON_1                0x0005
#define ID_PICLOGIN_BUTTON_2                0x0006
#define ID_PICLOGIN_BUTTON_3                0x0007
#define ID_PICLOGIN_BUTTON_4                0x0008
#define ID_PICLOGIN_BUTTON_5                0x0009
#define ID_PICLOGIN_BUTTON_6                0x000A
#define ID_PICLOGIN_BUTTON_7                0x000B
#define ID_PICLOGIN_BUTTON_8                0x000C
#define ID_PICLOGIN_BUTTON_9                0x000D

#define ID_PICLOGIN_BUTTON_DRIVER           0x000E
#define ID_PICLOGIN_BUTTON_MAINTAINER       0x000F

#define ID_PICLOGIN_LABEL_DRIVERCODE        0x0010
#define ID_PICLOGIN_LABEL_ID                0x0011
#define ID_PICLOGIN_LABEL_PWD               0x0012
#define ID_PICLOGIN_EDIT_DRIVERCODE         0x0013
#define ID_PICLOGIN_EDIT_ID                 0x0014
#define ID_PICLOGIN_EDIT_PWD                0x0015
#define ID_PICLOGIN_BUTTON_PINNUMBER        0x0016

class CSysLoginPage : public CPage,QWidget
{
    DECLEAR_MESSAGE_MAP(CSysLoginPage)

public:
    CSysLoginPage();
void OnInitPage();
    void SetEditSelected(int EditId, bool flg);

protected:
    //void OnInitPage();
    int m_DriverIndex;
    QMap<int, QString> m_MapDriverCode;
    QMap<QString, QString> m_MapMaintainer;

protected:
    void OnShowPage();
    void OnOkDown();
    void OnOkUp();
    void OnDriver();
    void OnMaintainer();
    void OnPinNumber();
    void OnNum0Down();
    void OnNum1Down();
    void OnNum2Down();
    void OnNum3Down();
    void OnNum4Down();
    void OnNum5Down();
    void OnNum6Down();
    void OnNum7Down();
    void OnNum8Down();
    void OnNum9Down();
    void OnNum0Up();
    void OnNum1Up();
    void OnNum2Up();
    void OnNum3Up();
    void OnNum4Up();
    void OnNum5Up();
    void OnNum6Up();
    void OnNum7Up();
    void OnNum8Up();
    void OnNum9Up();

    void OnClearDown();
    void OnClearUp();

    void SetBtnDown(int btnId);
    void SetBtnUp(int btnId);

    void OnDriverCodeEdit();
    void OnIDEdit();
    void OnPWDEdit();

    void AddEditStr(int EditId, QString str);
    void SetEditStr(int EditId, QString str);
    bool IsEditSelected(int EditId);
};

#endif // CSYSLOGINPAGE_H
