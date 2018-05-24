#ifndef CLABEL_H
#define CLABEL_H

#include "ccontrolinterface.h"

class CLabel : public CControlInterface
{
public:
    CLabel();

    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& label_bordercolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString ctrl_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor ctrl_bkcolor);
    void SetCtrlRect(__in QRect ctrl_rect);
    void SetBCUCtrlBKColor(__in bool BCUctrl_bkcolor);

    void SetBorderColor(__in QColor bordercolor);
    void DrawLabel();
    void SetLabelState(__in int nState);
    void SetAlignment(__in int nAlignment);
    void SetVisible(__in bool isVisible);
private:
    QColor m_bordercolor;
    int    m_nAlignment;
};

#endif // CLABEL_H
