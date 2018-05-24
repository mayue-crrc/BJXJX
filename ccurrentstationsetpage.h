#ifndef CCURRENTSTATIONSETPAGE_H
#define CCURRENTSTATIONSETPAGE_H

#include "cpage.h"

#define ID_PICCSS_BUTTON_S1      0x0A01
#define ID_PICCSS_BUTTON_S2      0x0A02
#define ID_PICCSS_BUTTON_S3      0x0A03
#define ID_PICCSS_BUTTON_S4      0x0A04
#define ID_PICCSS_BUTTON_S5      0x0A05
#define ID_PICCSS_BUTTON_S6      0x0A06
#define ID_PICCSS_BUTTON_S7      0x0A07
#define ID_PICCSS_BUTTON_S8      0x0A08
#define ID_PICCSS_BUTTON_S9      0x0A09
#define ID_PICCSS_BUTTON_S10     0x0A0A
#define ID_PICCSS_BUTTON_S11     0x0A0B
#define ID_PICCSS_BUTTON_S12     0x0A0C
#define ID_PICCSS_BUTTON_S13     0x0A0D
#define ID_PICCSS_BUTTON_S14     0x0A0E
#define ID_PICCSS_BUTTON_S15     0x0A0F
#define ID_PICCSS_BUTTON_S16     0x0A10
#define ID_PICCSS_BUTTON_S17     0x0A11
#define ID_PICCSS_BUTTON_S18     0x0A12
#define ID_PICCSS_BUTTON_S19     0x0A13
#define ID_PICCSS_BUTTON_S20     0x0A14
#define ID_PICCSS_BUTTON_S21     0x0A15
#define ID_PICCSS_BUTTON_S22     0x0A16
#define ID_PICCSS_BUTTON_S23     0x0A17
#define ID_PICCSS_BUTTON_S24     0x0A18
#define ID_PICCSS_BUTTON_S25     0x0A19
#define ID_PICCSS_BUTTON_S26     0x0A1A
#define ID_PICCSS_BUTTON_S27     0x0A1B
#define ID_PICCSS_BUTTON_S28     0x0A1C
#define ID_PICCSS_BUTTON_S29     0x0A1D
#define ID_PICCSS_BUTTON_S30     0x0A1E
#define ID_PICCSS_BUTTON_S31     0x0A1F
#define ID_PICCSS_BUTTON_S32     0x0A20
#define ID_PICCSS_BUTTON_S33     0x0A21


#define ID_PICCSS_LABEL_S1       0x0A41
#define ID_PICCSS_LABEL_S2       0x0A42
#define ID_PICCSS_LABEL_S3       0x0A43
#define ID_PICCSS_LABEL_S4       0x0A44
#define ID_PICCSS_LABEL_S5       0x0A45
#define ID_PICCSS_LABEL_S6       0x0A46
#define ID_PICCSS_LABEL_S7       0x0A47
#define ID_PICCSS_LABEL_S8       0x0A48
#define ID_PICCSS_LABEL_S9       0x0A49
#define ID_PICCSS_LABEL_S10      0x0A4A
#define ID_PICCSS_LABEL_S11      0x0A4B
#define ID_PICCSS_LABEL_S12      0x0A4C
#define ID_PICCSS_LABEL_S13      0x0A4D
#define ID_PICCSS_LABEL_S14      0x0A4E
#define ID_PICCSS_LABEL_S15      0x0A4F
#define ID_PICCSS_LABEL_S16      0x0A50
#define ID_PICCSS_LABEL_S17      0x0A51
#define ID_PICCSS_LABEL_S18      0x0A52
#define ID_PICCSS_LABEL_S19      0x0A53
#define ID_PICCSS_LABEL_S20      0x0A54
#define ID_PICCSS_LABEL_S21      0x0A55
#define ID_PICCSS_LABEL_S22      0x0A56
#define ID_PICCSS_LABEL_S23      0x0A57
#define ID_PICCSS_LABEL_S24      0x0A58
#define ID_PICCSS_LABEL_S25      0x0A59
#define ID_PICCSS_LABEL_S26      0x0A5A
#define ID_PICCSS_LABEL_S27      0x0A5B
#define ID_PICCSS_LABEL_S28      0x0A5C
#define ID_PICCSS_LABEL_S29      0x0A5D
#define ID_PICCSS_LABEL_S30      0x0A5E
#define ID_PICCSS_LABEL_S31      0x0A5F
#define ID_PICCSS_LABEL_S32      0x0A60


#define ID_PICCSS_BUTTON_OK      0x0A81
#define ID_PICCSS_BUTTON_QUIT    0x0A82
#define ID_PICCSS_BUTTON_CANCELSET    0x0A83 // cancel current station setting, set velue 0

class CCurrentStationSetPage : public CPage
{
   DECLEAR_MESSAGE_MAP(CCurrentStationSetPage)
public:
    CCurrentStationSetPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnOKDown();
    void OnOKUp();
    void OnQuitDown();
    void OnQuitUp();
    void OnCancelSetDown();
    void OnCancelSetUp();

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
    uchar m_StationSet_CurrentStation_Uchar;
};

#endif // CCURRENTSTATIONSETPAGE_H
