#include "ccircle.h"

CCircle::CCircle()
{
    m_typestr = "CCircle";
    m_pPainter = NULL;
}

void CCircle::Create(__in QString& ctrl_str,
                     __in QRect& ctrl_rc,
                     __in QColor& ctrl_txtcolor,
                     __in QFont& ctrl_font,
                     __in QColor& ctrl_bkcolor,
                     __in QPainter* ctrl_painter,
                     __in int ctrl_ID)
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    DrawCircleCtrl();
}

void CCircle::SetCtrlBKColor(
                             __in QColor ctrl_bkcolor // CCircle bk color
                            )
{

}

void CCircle::SetCtrlRect(
                          __in QRect ctrln_rect // CCircle rect
                         )
{

}

void CCircle::SetBorderColor(
                             __in QColor ctrl_bordercolor //CCircle border color
                            )
{

}

void CCircle::DrawCircleCtrl()
{
    m_pPainter->setPen(m_txtcolor);
    m_pPainter->setBrush(m_bkcolor);
    m_pPainter->drawEllipse(m_rect);
}
