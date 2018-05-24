#ifndef CBAR_H
#define CBAR_H


#include  "ccontrolinterface.h"


class cbar : public CControlInterface
{
public:
    cbar();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& label_bordercolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString ctrl_str);
    void SetTxtFont(__in QFont ctrl_font);
    void SetTxtColor(__in QColor ctrl_txtcolor);
    void SetCtrlBKColor(__in QColor ctrl_bkcolor);
    void SetCtrlRect(__in QRect ctrl_rect);

    void DrawBarCtrl();
    void SetBarValueUP(__in float nValue);
    void SetBarValueDOWN(__in float nValue);

private:
    float    m_Value;
};

#endif // CBARCTRL_H
