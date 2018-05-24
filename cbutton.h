#ifndef CBUTTON_H
#define CBUTTON_H

#include "ccontrolinterface.h"

//button state enum
enum BUTTONSTATE
{
    LBUTTON_INIT = 0,
    LBUTTON_UP,
    LBUTTON_DOWN,
    LBUTTON_HIDE,


};

class CButton:public CControlInterface
{
public:
    CButton();

    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);
    void SetInVisible();
    QRect GetCtrlRect();
    void ChangeButtonState(__in int nBtnState);
    int GetButtonState();
    int m_bAutoUpState;

private:
    int m_btnState;
};

#endif // CBUTTON_H
