#include "cline.h"

CLine::CLine()
{
    m_typestr = "CLine";
    m_pPainter = NULL;
}

void CLine::Create(__in QString& ctrl_str,
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

    DrawLineCtrl();
}

void CLine::SetCtrlBKColor(
                           __in QColor ctrl_bkcolor // CLine bk color
                          )
{

}

void CLine::SetCtrlRect(
                        __in QRect ctrln_rect // CLine rect
                       )
{

}

void CLine::SetBorderColor(
                           __in QColor ctrl_bordercolor // CLine border color
                          )
{

}

void CLine::DrawLineCtrl()
{
    m_pPainter->fillRect(m_rect, m_txtcolor);
}
