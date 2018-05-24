#ifndef CSYSTIMESETPAGE_H
#define CSYSTIMESETPAGE_H

#include "cpage.h"

//picture SystemTimeSet control id
#define ID_PISTS_BUTTON_NUMBER1         0x0F01
#define ID_PISTS_BUTTON_NUMBER2         0x0F02
#define ID_PISTS_BUTTON_NUMBER3         0x0F03
#define ID_PISTS_BUTTON_NUMBER4         0x0F04
#define ID_PISTS_BUTTON_NUMBER5         0x0F05
#define ID_PISTS_BUTTON_NUMBER6         0x0F06
#define ID_PISTS_BUTTON_NUMBER7         0x0F07
#define ID_PISTS_BUTTON_NUMBER8         0x0F08
#define ID_PISTS_BUTTON_NUMBER9         0x0F09
#define ID_PISTS_BUTTON_NUMBER0         0x0F0A
#define ID_PISTS_BUTTON_CLEAR           0x0F0B
#define ID_PISTS_BUTTON_SET             0x0F0C
#define ID_PISTS_EDIT_YEAR               0x0F0D
#define ID_PISTS_EDIT_MONTH             0x0F0E
#define ID_PISTS_EDIT_DAY               0x0F0F
#define ID_PISTS_LABEL_YEAR             0x0F10
#define ID_PISTS_LABEL_MONTH            0x0F11
#define ID_PISTS_LABEL_DAY              0x0F12
#define ID_PISTS_EDIT_HOUR              0x0F1D
#define ID_PISTS_EDIT_MINUTE            0x0F1E
#define ID_PISTS_EDIT_SECOND            0x0F1F
#define ID_PISTS_LABEL_HOUR             0x0F40
#define ID_PISTS_LABEL_MINUTE           0x0F31
#define ID_PISTS_LABEL_SECOND           0x0F32
#define ID_PISTS_BTN_QUIT               0x0F13
#define ID_PISTS_LABEL_SPLIT1           0x0F14
#define ID_PISTS_LABEL_SPLIT2           0x0F15
//#define ID_PISTS_BUTTON_DATE            0x0F20
//#define ID_PISTS_BUTTON_TIME            0x0F21
#define ID_PISTS_LABEL_SETNUM           0x0F30
#define ID_PISTS_LABEL_TITLE            0x0F16

#define ID_PISTS_RECVFLAG               0x0F17
#define ID_PISTS_SENDFLAG               0x0F18

enum ENUM_SET_TYPE
{
    E_SET_TIME = 0,
    E_SET_DATE
};


class CSysTimeSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CSysTimeSetPage)
public:
    CSysTimeSetPage();
    void OnInitPage();

    ENUM_SET_TYPE m_settype;

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnSetButtonDown();
    void OnSetButtonUp();

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
    void OnDateUp();
    void OnDateDown();
    void OnTimeUp();
    void OnTimeDown();

    void OnClearDown();
    void OnClearUp();
    void SetBtnDown(int btnId);
    void SetBtnUp(int btnId);
    void SetEditStr(int EditId, QString str);
    int  AddEditStr(int EditId, QString str);
    bool IsEditSelected(int EditId);
    void AddSelectedEditBox(QString str);
    void SetSelectedEditBox(QString str);
    void SetEditSelected(int EditId, bool flg);
    void SetLabelSelected(int LabelId, bool flg);

    void OnYearEdit();
    void OnMonthEdit();
    void OnDayEdit();
    void OnHourEdit();
    void OnMinuteEdit();
    void OnSecondEdit();
    void setScreenTime(int year, int mon, int day, int hour, int minute, int second);

    void ShowWarningDialog();
    bool m_btnPress;
};

#endif // CSYSTIMESETPAGE_H
