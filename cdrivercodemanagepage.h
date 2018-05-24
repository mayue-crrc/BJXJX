#ifndef CDRIVERCODEMANAGEPAGE_H
#define CDRIVERCODEMANAGEPAGE_H

#include "cpage.h"
#include "cdrivercodelistpage.h"

//picture DriverCodeManage control id
#define ID_PICDCM_BUTTON_NUMBER1         0x1301
#define ID_PICDCM_BUTTON_NUMBER2         0x1302
#define ID_PICDCM_BUTTON_NUMBER3         0x1303
#define ID_PICDCM_BUTTON_NUMBER4         0x1304
#define ID_PICDCM_BUTTON_NUMBER5         0x1305
#define ID_PICDCM_BUTTON_NUMBER6         0x1306
#define ID_PICDCM_BUTTON_NUMBER7         0x1307
#define ID_PICDCM_BUTTON_NUMBER8         0x1308
#define ID_PICDCM_BUTTON_NUMBER9         0x1309
#define ID_PICDCM_BUTTON_NUMBER0         0x130A
#define ID_PICDCM_BUTTON_CLEAR           0x130B
#define ID_PICDCM_BUTTON_OK              0x130C
#define ID_PICDCM_EDIT_ADD               0x130D
#define ID_PICDCM_EDIT_DELETE            0x130E
#define ID_PICDCM_BUTTON_ADD             0x130F
#define ID_PICDCM_BUTTON_DELETE          0x1310
#define ID_PICDCM_LABEL_SUCCESS          0x1311
#define IDBTN_PICDCM_QUIT                0x1312
#define ID_PICDCM_EDIT_ADD1               0x1313
#define ID_PICDCM_EDIT_ADD2               0x1314
#define ID_PICDCM_EDIT_ADD3               0x1315

class CDriverCodeManagePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDriverCodeManagePage)
public:
    CDriverCodeManagePage();
    int m_DriverIndex;
    QMap<QString, int> m_MapDriverCode;

private:
    //TODO:declear call back function
    void OnInitPage();
    void AddSelectedEditBox(QString str);
    bool IsEditSelected(int EditId);
    void AddEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);
    void SetSelectedEditBox(QString str);
    void SetEditStr(int EditId, QString str);
    void OnDeleteEdit();
    void OnAddEdit();
    void SetBtnDown(int btnId);
    void SetBtnUp(int btnId);
    void OnUpdatePage();
    void OnDeleteOKUP();
    void OnAddOKUP();
    void OnDeleteOKDOWN();
    void OnAddOKDOWN();
    void OnDriverListDown();
    void OnDriverListUp();
    void OnQuitButtonDown();
    void OnQuitButtonUp();
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
};

#endif // CDRIVERCODEMANAGEPAGE_H
