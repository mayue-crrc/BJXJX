#ifndef CMAINTAINERIDLISTPAGE_H
#define CMAINTAINERIDLISTPAGE_H

#include "cpage.h"

#define ID_PICMIL_LABEL_TITLE     0x1601
#define ID_PICMIL_BUTTON_UP       0x1602
#define ID_PICMIL_BUTTON_DOWN     0x1603
#define ID_PICMIL_BUTTON_1_1      0x1604
#define ID_PICMIL_BUTTON_1_2      0x1605
#define ID_PICMIL_BUTTON_1_3      0x1606
#define ID_PICMIL_BUTTON_1_4      0x1607
#define ID_PICMIL_BUTTON_2_1      0x1608
#define ID_PICMIL_BUTTON_2_2      0x1609
#define ID_PICMIL_BUTTON_2_3      0x160A
#define ID_PICMIL_BUTTON_2_4      0x160B
#define ID_PICMIL_BUTTON_3_1      0x160C
#define ID_PICMIL_BUTTON_3_2      0x160D
#define ID_PICMIL_BUTTON_3_3      0x160E
#define ID_PICMIL_BUTTON_3_4      0x160F
#define ID_PICMIL_BUTTON_4_1      0x1610
#define ID_PICMIL_BUTTON_4_2      0x1611
#define ID_PICMIL_BUTTON_4_3      0x1612
#define ID_PICMIL_BUTTON_4_4      0x1613
#define IDBTN_PICMIL_QUIT         0x1614
#define IDBTN_PICMIL_DELETE       0x1615
#define ID_PICMIL_BUTTON_PAGENUM  0x1616


class CMaintainerIDListPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CMaintainerIDListPage)
public:
    CMaintainerIDListPage();
    QMap<int, QString> m_MapMaintainer;
    int m_MapIndex;
    void ResetBtnUp();
protected:
    //TODO:declear call back function

    void ReadFromConfig();
    int m_PageIndex;
    void OnInitPage();
    void OnShowPage();
    void OnUpdatePage();

    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnDropButtonUpDown();
    void OnDropButtonDownDown();
    void OnDropButtonUpUp();
    void OnDropButtonDownUp();
    void SetBtnDown(int nID);

    int  GetQMapKey();
    void OnButton1Down();
    void OnButton2Down();
    void OnButton3Down();
    void OnButton4Down();
    void OnButton5Down();
    void OnButton6Down();
    void OnButton7Down();
    void OnButton8Down();
    void OnButton9Down();
    void OnButton10Down();
    void OnButton11Down();
    void OnButton12Down();
    void OnButton13Down();
    void OnButton14Down();
    void OnButton15Down();
    void OnButton16Down();
    void OnDeleteButtonDown();
    void OnDeleteButtonUp();
};

#endif // CMAINTAINERIDLISTPAGE_H
