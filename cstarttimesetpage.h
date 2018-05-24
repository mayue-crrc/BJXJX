#ifndef CSTARTTIMESETPAGE_H
#define CSTARTTIMESETPAGE_H

#include "cpage.h"
//picture StartTimeSet control id
#define ID_PICSTS_BUTTON_NUMBER1         0x1D01
#define ID_PICSTS_BUTTON_NUMBER2         0x1D02
#define ID_PICSTS_BUTTON_NUMBER3         0x1D03
#define ID_PICSTS_BUTTON_NUMBER4         0x1D04
#define ID_PICSTS_BUTTON_NUMBER5         0x1D05
#define ID_PICSTS_BUTTON_NUMBER6         0x1D06
#define ID_PICSTS_BUTTON_NUMBER7         0x1D07
#define ID_PICSTS_BUTTON_NUMBER8         0x1D08
#define ID_PICSTS_BUTTON_NUMBER9         0x1D09
#define ID_PICSTS_BUTTON_NUMBER0         0x1D0A
#define ID_PICSTS_BUTTON_CLEAR           0x1D0B
#define ID_PICSTS_BUTTON_SET             0x1D0C

#define ID_PICSTS_EDIT_YEAR              0x1D0D
#define ID_PICSTS_EDIT_MONTH             0x1D0E
#define ID_PICSTS_EDIT_DAY               0x1D0F
#define ID_PICSTS_EDIT_HOUR              0x1D10
#define ID_PICSTS_EDIT_MINUTE            0x1D11

#define IDBTN_PICSTS_QUIT                0x1D12
#define IDBTN_PICSTS_DEFAULT             0x1D13

class CStartTimeSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CStartTimeSetPage)
public:
    CStartTimeSetPage();
protected:
    void OnInitPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();

    void OnDefaultButtonDown();
    void OnDefaultButtonUp();
    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnStartTimeSetDown();
    void OnStartTimeSetUp();
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
    void AddSelectedEditBox(QString str);
    void SetSelectedEditBox(QString str);
    void SetBtnDown(int btnId);
    void SetBtnUp(int btnId);
    void OnYearEdit();
    void OnMonthEdit();
    void OnDayEdit();
    void OnHourEdit();
    void OnMinuteEdit();
    void SetEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);
    int AddEditStr(int EditId, QString str);
    bool IsEditSelected(int EditId);
    QString GetStartTimeStr();
    bool CheckDateTimeValid();
    void ShowWarningDialog();

    QString yearStr;
    QString monthStr;
    QString dayStr;
    QString hourStr;
    QString minuteStr;
    int nYear;
    int nMonth;
    int nDay;
    int nHour;
    int nMinute;

};

#endif // CSTARTTIMESETPAGE_H
