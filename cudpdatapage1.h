#ifndef CUDPDATAPAGE1_H
#define CUDPDATAPAGE1_H


#include "cpage.h"
#include "databuffer.h"

#define ID_CUDPDATAPAGE1_LENGTH                       0X0001
#define ID_CUDPDATAPAGE1_HEAD                 0X0002
#define ID_CUDPDATAPAGE1_CRC                  0X0003
#define ID_CUDPDATAPAGE1_LABLE                       0X0004

extern vector<CPage*>  g_PageVec;




class CUdpDataPage1 : public CPage
{
   DECLEAR_MESSAGE_MAP(CUdpDataPage1)

public:
    CUdpDataPage1();
    void RedrawTable();


private:
    int m_nBtnIndex;

protected:
    //TODO:declear call back function
   // void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnUpdatePage();

    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void UpdateRawData();
//#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
//#endif

};

#endif // CUDPDATAPAGE1_H
