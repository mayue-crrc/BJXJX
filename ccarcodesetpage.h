#ifndef CCARCODESETPAGE_H
#define CCARCODESETPAGE_H

#include "cpage.h"
#include "cwarningdialog.h"

#define CARCODELENGTH 3
//picture CarCodeSet control id
#define ID_PICCCS_BUTTON_NUMBER1         0x1001
#define ID_PICCCS_BUTTON_NUMBER2         0x1002
#define ID_PICCCS_BUTTON_NUMBER3         0x1003
#define ID_PICCCS_BUTTON_NUMBER4         0x1004
#define ID_PICCCS_BUTTON_NUMBER5         0x1005
#define ID_PICCCS_BUTTON_NUMBER6         0x1006
#define ID_PICCCS_BUTTON_NUMBER7         0x1007
#define ID_PICCCS_BUTTON_NUMBER8         0x1008
#define ID_PICCCS_BUTTON_NUMBER9         0x1009
#define ID_PICCCS_BUTTON_NUMBER0         0x100A
#define ID_PICCCS_BUTTON_CLEAR           0x100B
#define ID_PICCCS_BUTTON_OK              0x100C
#define ID_PICCCS_EDIT_CODE              0x100D
#define IDBTN_PICCCS_QUIT                0x100E
#define ID_PICCCS_LABEL_CURRENTCARCODE   0x100F

class CCarCodeSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CCarCodeSetPage)
public:
    CCarCodeSetPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnOKUp();
    void OnOKDown();
    void AddSelectedEditBox(QString str);
    bool IsEditSelected(int EditId);
    void AddEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);
    void SetSelectedEditBox(QString str);
    void SetEditStr(int EditId, QString str);
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
    void setCarCode(QString const data );
};

#endif // CCARCODESETPAGE_H
