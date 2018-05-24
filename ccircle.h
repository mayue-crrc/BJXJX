#ifndef CCIRCLE_H
#define CCIRCLE_H

#include  "ccontrolinterface.h"

class CCircle : public CControlInterface
{
public:
    CCircle();

    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void SetBorderColor(__in QColor bordercolor);
    void DrawCircleCtrl();
};

#endif // CCIRCLE_H
