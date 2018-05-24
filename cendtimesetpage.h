#ifndef CENDTIMESETPAGE_H
#define CENDTIMESETPAGE_H

#include "cpage.h"

//picture EndTimeSet control id
#define ID_PICETS_BUTTON_NUMBER1         0x1E01
#define ID_PICETS_BUTTON_NUMBER2         0x1E02
#define ID_PICETS_BUTTON_NUMBER3         0x1E03
#define ID_PICETS_BUTTON_NUMBER4         0x1E04
#define ID_PICETS_BUTTON_NUMBER5         0x1E05
#define ID_PICETS_BUTTON_NUMBER6         0x1E06
#define ID_PICETS_BUTTON_NUMBER7         0x1E07
#define ID_PICETS_BUTTON_NUMBER8         0x1E08
#define ID_PICETS_BUTTON_NUMBER9         0x1E09
#define ID_PICETS_BUTTON_NUMBER0         0x1E0A
#define ID_PICETS_BUTTON_CLEAR           0x1E0B
#define ID_PICETS_BUTTON_SET             0x1E0C

#define ID_PICETS_EDIT_YEAR              0x1E0D
#define ID_PICETS_EDIT_MONTH             0x1E0E
#define ID_PICETS_EDIT_DAY               0x1E0F
#define ID_PICETS_EDIT_HOUR              0x1E10
#define ID_PICETS_EDIT_MINUTE            0x1E11

#define IDBTN_PICETS_QUIT                0x1E12
#define IDBTN_PICETS_DEFAULT             0x1E13

class CEndTimeSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CEndTimeSetPage)
public:
    CEndTimeSetPage();
private:
    void OnInitPage();

    //TODO:declear call back function
    void OnUpdatePage();
    void OnDefaultButtonDown();
    void OnDefaultButtonUp();
    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnEndTimeSetDown();
    void OnEndTimeSetUp();
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
    QString GetEndTimeStr();
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

#endif // CENDTIMESETPAGE_H
