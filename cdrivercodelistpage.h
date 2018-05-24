#ifndef CDRIVERCODELISTPAGE_H
#define CDRIVERCODELISTPAGE_H

#include "cpage.h"

#define ID_PICDCL_LABEL_TITLE     0x1401
#define ID_PICDCL_BUTTON_UP       0x1402
#define ID_PICDCL_BUTTON_DOWN     0x1403
#define ID_PICDCL_BUTTON_1_1      0x1404
#define ID_PICDCL_BUTTON_1_2      0x1405
#define ID_PICDCL_BUTTON_1_3      0x1406
#define ID_PICDCL_BUTTON_1_4      0x1407
#define ID_PICDCL_BUTTON_2_1      0x1408
#define ID_PICDCL_BUTTON_2_2      0x1409
#define ID_PICDCL_BUTTON_2_3      0x140A
#define ID_PICDCL_BUTTON_2_4      0x140B
#define ID_PICDCL_BUTTON_3_1      0x140C
#define ID_PICDCL_BUTTON_3_2      0x140D
#define ID_PICDCL_BUTTON_3_3      0x140E
#define ID_PICDCL_BUTTON_3_4      0x140F
#define ID_PICDCL_BUTTON_4_1      0x1410
#define ID_PICDCL_BUTTON_4_2      0x1411
#define ID_PICDCL_BUTTON_4_3      0x1412
#define ID_PICDCL_BUTTON_4_4      0x1413
#define IDBTN_PICDCL_QUIT         0x1414
#define IDBTN_PICDCL_DELETE       0x1415
#define ID_PICDCL_BUTTON_PAGENUM  0x1416


class CDriverCodeListPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CDriverCodeListPage)
public:
    CDriverCodeListPage();
    QMap<int, QString> m_MapDriverCode;
    void ResetBtnUp();
    int m_DriverIndex;

private:
    //TODO:declear call back function
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
    int  GetQMapKey();
    void SetBtnDown(int nID);

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

#endif // CDRIVERCODELISTPAGE_H
