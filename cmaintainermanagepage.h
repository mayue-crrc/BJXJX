#ifndef CMAINTAINERMANAGEPAGE_H
#define CMAINTAINERMANAGEPAGE_H

#include "cpage.h"

#define ID_PICMM_BUTTON_NUMBER1         0x1501
#define ID_PICMM_BUTTON_NUMBER2         0x1502
#define ID_PICMM_BUTTON_NUMBER3         0x1503
#define ID_PICMM_BUTTON_NUMBER4         0x1504
#define ID_PICMM_BUTTON_NUMBER5         0x1505
#define ID_PICMM_BUTTON_NUMBER6         0x1506
#define ID_PICMM_BUTTON_NUMBER7         0x1507
#define ID_PICMM_BUTTON_NUMBER8         0x1508
#define ID_PICMM_BUTTON_NUMBER9         0x1509
#define ID_PICMM_BUTTON_NUMBER0         0x150A
#define ID_PICMM_BUTTON_CLEAR           0x150B
#define ID_PICMM_BUTTON_PWD_OK          0x150C
#define ID_PICMM_BUTTON_DELETEID_OK     0x150D
#define ID_PICMM_EDIT_MILE                0x150E
#define ID_PICMM_EDIT_TCUPOWER               0x150F
#define ID_PICMM_EDIT_ACUPOWER        0x1510
//#define ID_PICMM_BUTTON_MAINLIST        0x1511
#define ID_PICMM_BUTTON_QUIT            0x1512
#define ID_PICMM_LABEL_SUCCESS          0x1513
#define ID_PICMM_EDIT_BCUPOWER        0x1514


class CMaintainerManagePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CMaintainerManagePage)
public:
    CMaintainerManagePage();
    QMap<QString, QString> m_MapMaintainer;

protected:

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnShowPage();
    void OnCommonQuitButtonDown();

    void OnQuitButtonDown();
    void OnQuitButtonUp();

    void OnPwdOkDown();
//    void OnDeleteIdOkDown();
//    void OnDeleteIdOkUp();
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

//    void OnMainListUp();
//    void OnMainListDown();
    void OnClearDown();
    void OnClearUp();
    void SetBtnDown(int btnId);
    void SetBtnUp(int btnId);
    void OnMileEdit();
    void OnTCUPowerEdit();
    void OnACUPowerEdit();
    void OnBCUPowerEdit();
    void OnDeleteIDEdit();
    void AddSelectedEditBox(QString str);
    void SetSelectedEditBox(QString str);
    void SetEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);
    void AddEditStr(int EditId, QString str);
    bool IsEditSelected(int EditId);
};

#endif // CMAINTAINERMANAGEPAGE_H
