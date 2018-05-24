#ifndef CSERIALDATAPAGE_H
#define CSERIALDATAPAGE_H

#include "cpage.h"

#define IDBUTTON_REVDATA      0x2101
#define IDBUTTON_SENDDATA     0x2102

class CSerialDataPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CSerialDataPage)
public:
    CSerialDataPage();

private:
    bool m_bStopRevData;
    bool m_bStopSendData;
    void DrawSerialData();

protected:
    void OnInitPage();
    void OnUpdatePage();
    void OnRevButtonDown();
    void OnSendButtonDown();
};

#endif // CSERIALDATAPAGE_H
