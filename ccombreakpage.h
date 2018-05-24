#ifndef CCOMBREAKPAGE_H
#define CCOMBREAKPAGE_H

#include "cpage.h"
#define ID_PICCOMBREAK_LABEL        0x4301
class CComBreakPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CComBreakPage)
public:
    CComBreakPage();

protected:
    //TODO:declear call back function
    void OnInitPage();
};

#endif // CCOMBREAKPAGE_H
