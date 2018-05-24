#ifndef CSTARTSTATIONSETPAGE_H
#define CSTARTSTATIONSETPAGE_H

#include "cpage.h"

//picture StartStationSet control id
#define ID_PICSSS_BUTTON_S1      0x0801
#define ID_PICSSS_BUTTON_S2      0x0802
#define ID_PICSSS_BUTTON_S3      0x0803
#define ID_PICSSS_BUTTON_S4      0x0804
#define ID_PICSSS_BUTTON_S5      0x0805
#define ID_PICSSS_BUTTON_S6      0x0806
#define ID_PICSSS_BUTTON_S7      0x0807
#define ID_PICSSS_BUTTON_S8      0x0808
#define ID_PICSSS_BUTTON_S9      0x0809
#define ID_PICSSS_BUTTON_S10     0x080A
#define ID_PICSSS_BUTTON_S11     0x080B
#define ID_PICSSS_BUTTON_S12     0x080C
#define ID_PICSSS_BUTTON_S13     0x080D
#define ID_PICSSS_BUTTON_S14     0x080E
#define ID_PICSSS_BUTTON_S15     0x080F
#define ID_PICSSS_BUTTON_S16     0x0810
#define ID_PICSSS_BUTTON_S17     0x0811
#define ID_PICSSS_BUTTON_S18     0x0812
#define ID_PICSSS_BUTTON_S19     0x0813
#define ID_PICSSS_BUTTON_S20     0x0814
#define ID_PICSSS_BUTTON_S21     0x0815
#define ID_PICSSS_BUTTON_S22     0x0816
#define ID_PICSSS_BUTTON_S23     0x0817
#define ID_PICSSS_BUTTON_S24     0x0818
#define ID_PICSSS_BUTTON_S25     0x0819
#define ID_PICSSS_BUTTON_S26     0x081A
#define ID_PICSSS_BUTTON_S27     0x081B
#define ID_PICSSS_BUTTON_S28     0x081C
#define ID_PICSSS_BUTTON_S29     0x081D
#define ID_PICSSS_BUTTON_S30     0x081E
#define ID_PICSSS_BUTTON_S31     0x081F
#define ID_PICSSS_BUTTON_S32     0x0820
#define ID_PICSSS_BUTTON_S33     0x0821


#define ID_PICSSS_LABEL_S1       0x0841
#define ID_PICSSS_LABEL_S2       0x0842
#define ID_PICSSS_LABEL_S3       0x0843
#define ID_PICSSS_LABEL_S4       0x0844
#define ID_PICSSS_LABEL_S5       0x0845
#define ID_PICSSS_LABEL_S6       0x0846
#define ID_PICSSS_LABEL_S7       0x0847
#define ID_PICSSS_LABEL_S8       0x0848
#define ID_PICSSS_LABEL_S9       0x0849
#define ID_PICSSS_LABEL_S10      0x084A
#define ID_PICSSS_LABEL_S11      0x084B
#define ID_PICSSS_LABEL_S12      0x084C
#define ID_PICSSS_LABEL_S13      0x084D
#define ID_PICSSS_LABEL_S14      0x084E
#define ID_PICSSS_LABEL_S15      0x084F
#define ID_PICSSS_LABEL_S16      0x0850
#define ID_PICSSS_LABEL_S17      0x0851
#define ID_PICSSS_LABEL_S18      0x0852
#define ID_PICSSS_LABEL_S19      0x0853
#define ID_PICSSS_LABEL_S20      0x0854
#define ID_PICSSS_LABEL_S21      0x0855
#define ID_PICSSS_LABEL_S22      0x0856
#define ID_PICSSS_LABEL_S23      0x0857
#define ID_PICSSS_LABEL_S24      0x0858
#define ID_PICSSS_LABEL_S25      0x0859
#define ID_PICSSS_LABEL_S26      0x085A
#define ID_PICSSS_LABEL_S27      0x085B
#define ID_PICSSS_LABEL_S28      0x085C
#define ID_PICSSS_LABEL_S29      0x085D
#define ID_PICSSS_LABEL_S30      0x085E
#define ID_PICSSS_LABEL_S31      0x085F
#define ID_PICSSS_LABEL_S32      0x0860


#define ID_PICSSS_BUTTON_OK      0x0881
#define ID_PICSSS_BUTTON_QUIT    0x0882

class CStartStationSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CStartStationSetPage)
public:
    CStartStationSetPage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnOKDown();
    void OnOKUp();
    void OnQuitDown();
    void OnQuitUp();
    void OnInitPage();
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
private:
    int  m_nPreIndex;
    uchar m_StationSet_DepartureStation_Uchar;
};

#endif // CSTARTSTATIONSETPAGE_H
