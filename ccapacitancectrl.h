#ifndef CCAPACITANCECTRL_H
#define CCAPACITANCECTRL_H

#include "ccontrolinterface.h"
#include "rom.h"

class CCapacitanceCtrl : public CControlInterface
{
public:
    CCapacitanceCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawCapacitanceCtrl(__in int ctrl_value1,__in int ctrl_value2);
    void SetValue(__in int ctrl_value1,__in int ctrl_value2);
};

#endif // CCAPACITANCECTRL_H
