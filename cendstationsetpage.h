#ifndef CENDSTATIONSETPAGE_H
#define CENDSTATIONSETPAGE_H

#include "cpage.h"

#define ID_PICESS_BUTTON_S1      0x0901

#define ID_PICESS_BUTTON_S1      0x0901
#define ID_PICESS_BUTTON_S2      0x0902
#define ID_PICESS_BUTTON_S3      0x0903
#define ID_PICESS_BUTTON_S4      0x0904
#define ID_PICESS_BUTTON_S5      0x0905
#define ID_PICESS_BUTTON_S6      0x0906
#define ID_PICESS_BUTTON_S7      0x0907
#define ID_PICESS_BUTTON_S8      0x0908
#define ID_PICESS_BUTTON_S9      0x0909
#define ID_PICESS_BUTTON_S10     0x090A
#define ID_PICESS_BUTTON_S11     0x090B
#define ID_PICESS_BUTTON_S12     0x090C
#define ID_PICESS_BUTTON_S13     0x090D
#define ID_PICESS_BUTTON_S14     0x090E
#define ID_PICESS_BUTTON_S15     0x090F
#define ID_PICESS_BUTTON_S16     0x0910
#define ID_PICESS_BUTTON_S17     0x0911
#define ID_PICESS_BUTTON_S18     0x0912
#define ID_PICESS_BUTTON_S19     0x0913
#define ID_PICESS_BUTTON_S20     0x0914
#define ID_PICESS_BUTTON_S21     0x0915
#define ID_PICESS_BUTTON_S22     0x0916
#define ID_PICESS_BUTTON_S23     0x0917
#define ID_PICESS_BUTTON_S24     0x0918
#define ID_PICESS_BUTTON_S25     0x0919
#define ID_PICESS_BUTTON_S26     0x091A
#define ID_PICESS_BUTTON_S27     0x091B
#define ID_PICESS_BUTTON_S28     0x091C
#define ID_PICESS_BUTTON_S29     0x091D
#define ID_PICESS_BUTTON_S30     0x091E
#define ID_PICESS_BUTTON_S31     0x091F
#define ID_PICESS_BUTTON_S32     0x0920
#define ID_PICESS_BUTTON_S33     0x0921


#define ID_PICESS_LABEL_S1       0x0941
#define ID_PICESS_LABEL_S2       0x0942
#define ID_PICESS_LABEL_S3       0x0943
#define ID_PICESS_LABEL_S4       0x0944
#define ID_PICESS_LABEL_S5       0x0945
#define ID_PICESS_LABEL_S6       0x0946
#define ID_PICESS_LABEL_S7       0x0947
#define ID_PICESS_LABEL_S8       0x0948
#define ID_PICESS_LABEL_S9       0x0949
#define ID_PICESS_LABEL_S10      0x094A
#define ID_PICESS_LABEL_S11      0x094B
#define ID_PICESS_LABEL_S12      0x094C
#define ID_PICESS_LABEL_S13      0x094D
#define ID_PICESS_LABEL_S14      0x094E
#define ID_PICESS_LABEL_S15      0x094F
#define ID_PICESS_LABEL_S16      0x0950
#define ID_PICESS_LABEL_S17      0x0951
#define ID_PICESS_LABEL_S18      0x0952
#define ID_PICESS_LABEL_S19      0x0953
#define ID_PICESS_LABEL_S20      0x0954
#define ID_PICESS_LABEL_S21      0x0955
#define ID_PICESS_LABEL_S22      0x0956
#define ID_PICESS_LABEL_S23      0x0957
#define ID_PICESS_LABEL_S24      0x0958
#define ID_PICESS_LABEL_S25      0x0959
#define ID_PICESS_LABEL_S26      0x095A
#define ID_PICESS_LABEL_S27      0x095B
#define ID_PICESS_LABEL_S28      0x095C
#define ID_PICESS_LABEL_S29      0x095D
#define ID_PICESS_LABEL_S30      0x095E
#define ID_PICESS_LABEL_S31      0x095F
#define ID_PICESS_LABEL_S32      0x0960


#define ID_PICESS_BUTTON_OK      0x0981
#define ID_PICESS_BUTTON_QUIT    0x0982

class CEndStationSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CEndStationSetPage)
public:
    CEndStationSetPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnOKDown();
    void OnOKUp();
    void OnQuitDown();
    void OnQuitUp();
    void SetBtnDown(int btnId);
    void OnStation1Down();
    void OnStation2Down();
    void OnStation3Down();
    void OnStation4Down();
    void OnStation5Down();
    void OnStation6Down();
    void OnStation7Down();
    void OnStation8Down();
    void OnStation9Down();
    void OnStation10Down();
    void OnStation11Down();
    void OnStation12Down();
    void OnStation13Down();
    void OnStation14Down();
    void OnStation15Down();
    void OnStation16Down();
    void OnStation17Down();
    void OnStation18Down();
    void OnStation19Down();
    void OnStation20Down();
    void OnStation21Down();
    void OnStation22Down();
    void OnStation23Down();
    void OnStation24Down();
    void OnStation25Down();
    void OnStation26Down();
    void OnStation27Down();
    void OnStation28Down();
    void OnStation29Down();
    void OnStation30Down();
    void OnStation31Down();
    void OnStation32Down();
    void OnStation33Down();

    int  m_nPreIndex;
    uchar m_StationSet_TerminalStation_Uchar; // start from 1
};

#endif // CENDSTATIONSETPAGE_H
