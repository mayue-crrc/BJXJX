#ifndef CFAULTALARMPAGE_H
#define CFAULTALARMPAGE_H

#include "cpage.h"

#define ID_PICFA_LABEL_TITLE       0x2001
#define ID_PICFA_BUTTON_UP         0x2002
#define ID_PICFA_BUTTON_DOWN       0x2003
#define ID_PICFA_BUTTON_OK         0x2004
#define ID_PICFA_LABEL_CAR         0x2005
#define ID_PICFA_LABEL_CODE        0x2006
#define ID_PICFA_LABEL_DATETIME    0x2007
#define ID_PICFA_LABEL_GRADE       0x2008
#define ID_PICFA_LABEL_NAME        0x2009
#define ID_PICFA_LABEL_SOLUTIONS   0x200A

class CFaultAlarmPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CFaultAlarmPage)
public:
    CFaultAlarmPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnDropButtonUpDown();
    void OnDropButtonDownDown();
    void OnDropButtonUpUp();
    void OnDropButtonDownUp();
    void OnOkUp();
    void OnOkDown();

};

#endif // CFAULTALARMPAGE_H
