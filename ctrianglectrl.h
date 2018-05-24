#ifndef CTRIANGLECTRL_H
#define CTRIANGLECTRL_H

#include  "ccontrolinterface.h"

class CTriangleCtrl : public CControlInterface
{
public:
    CTriangleCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawTriangleCtrl();
};

#endif // CTRIANGLECTRL_H
