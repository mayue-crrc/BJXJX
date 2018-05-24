#ifndef CWHEELDIAMETERSETPAGE_H
#define CWHEELDIAMETERSETPAGE_H

#include "cpage.h"
#include "cwarningdialog.h"

//picture WheelDiameterSet control id
#define ID_PICWDS_BUTTON_NUMBER1         0x1101
#define ID_PICWDS_BUTTON_NUMBER2         0x1102
#define ID_PICWDS_BUTTON_NUMBER3         0x1103
#define ID_PICWDS_BUTTON_NUMBER4         0x1104
#define ID_PICWDS_BUTTON_NUMBER5         0x1105
#define ID_PICWDS_BUTTON_NUMBER6         0x1106
#define ID_PICWDS_BUTTON_NUMBER7         0x1107
#define ID_PICWDS_BUTTON_NUMBER8         0x1108
#define ID_PICWDS_BUTTON_NUMBER9         0x1109
#define ID_PICWDS_BUTTON_NUMBER0         0x110A
#define ID_PICWDS_BUTTON_CLEAR           0x110B
#define ID_PICWDS_BUTTON_OK              0x110C
#define ID_PICWDS_LABEL_ORIGINALSET      0x110D
#define ID_PICWDS_EDIT_DIAMETER          0x110E
#define ID_PICWDS_BUTTON_QUIT            0x110F
#define ID_PICWDS_LABEL_ORIGINALSET2      0x1110
#define ID_PICWDS_EDIT_DIAMETER2          0x1111
#define ID_PICWDS_LABEL_ORIGINALSET3      0x1112
#define ID_PICWDS_EDIT_DIAMETER3          0x1113
class CWheelDiameterSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CWheelDiameterSetPage)
public:
    CWheelDiameterSetPage();
    QString m_WheelDiameter;
protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnOriginalSetEdit();
    void OnDiameterEdit();
    void OnDiameterEdit2();
    void OnDiameterEdit3();
    void AddSelectedEditBox(QString str);
    bool IsEditSelected(int EditId);
    void AddEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);
    void SetSelectedEditBox(QString str);
    void SetEditStr(int EditId, QString str);
    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnOKDown();
    void OnOKUp();
    void SetBtnUp(int btnId);
    void SetBtnDown(int btnId);
    void OnNum1Up();
    void OnNum2Up();
    void OnNum3Up();
    void OnNum4Up();
    void OnNum5Up();
    void OnNum6Up();
    void OnNum7Up();
    void OnNum8Up();
    void OnNum9Up();
    void OnNum0Up();
    void OnClearUp();
    void OnNum1Down();
    void OnNum2Down();
    void OnNum3Down();
    void OnNum4Down();
    void OnNum5Down();
    void OnNum6Down();
    void OnNum7Down();
    void OnNum8Down();
    void OnNum9Down();
    void OnNum0Down();
    void OnClearDown();
    int WHEEL_valid_time;
    bool m_btnPress;

};

#endif // CWHEELDIAMETERSETPAGE_H
