#ifndef CPANTOGRAPHSTATECTRL_H
#define CPANTOGRAPHSTATECTRL_H

#include "ccontrolinterface.h"

class CPantographStateCtrl : public CControlInterface
{
public:
    CPantographStateCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawPantographStateCtrl();
};

#endif // CPANTOGRAPHSTATECTRL_H
