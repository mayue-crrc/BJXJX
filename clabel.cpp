#include "clabel.h"

CLabel::CLabel()
{
    m_typestr = "CLabel";
    m_pPainter = NULL;
    m_bordercolor = Qt::transparent;
    m_nAlignment = Qt::AlignCenter;
}

void CLabel::Create(__in QString& ctrl_str,
                    __in QRect& ctrl_rc,
                    __in QColor& ctrl_frontcolor,
                    __in QFont& ctrl_font,
                    __in QColor& ctrl_bkcolor,
                    __in QPainter* ctrl_painter,
                    __in int ctrl_ID)
{
    m_txtcolor = ctrl_frontcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    DrawLabel();
}


void CLabel::SetCtrlText(
                         __in QString label_str //label text
                        )
{
    m_str = label_str;
    DrawLabel();
}

void  CLabel::SetTxtFont(
                         __in QFont label_font // label font
                        )
{
    m_font = label_font;
    DrawLabel();
}

void CLabel::SetTxtColor(
                         __in QColor label_txtcolor //label text color
                        )
{
    m_txtcolor = label_txtcolor;
    DrawLabel();
}

void CLabel::SetCtrlBKColor(
                            __in QColor label_bkcolor //label bk color
                           )
{
    m_bkcolor = label_bkcolor;
    DrawLabel();
}
void CLabel::SetBCUCtrlBKColor(
                                __in bool BCUctrl_bkcolor  //label bk color
                              )
{
    if(BCUctrl_bkcolor == 1)
    {
        m_bkcolor = Qt::green;
    }
    else
    {
        m_bkcolor = Qt::red;
    }

    DrawLabel();
}

void CLabel::SetCtrlRect(
                         __in QRect label_rect //label rect
                        )
{
    m_rect= label_rect;
    DrawLabel();
}

void CLabel::SetBorderColor(
                            __in QColor label_bordercolor //label Border color
                           )
{
    m_bordercolor = label_bordercolor;
    DrawLabel();
}

void CLabel::DrawLabel()
{
    m_pPainter->setBrush(m_bkcolor);
    m_pPainter->fillRect(m_rect, m_bkcolor);

    m_pPainter->setPen(m_txtcolor);
    m_pPainter->setFont(m_font);
    m_pPainter->drawText(m_rect, m_nAlignment, m_str);

    m_pPainter->setPen(m_bordercolor);
    m_pPainter->setBrush(Qt::transparent);
    m_pPainter->drawRect(m_rect);
}

void CLabel::SetAlignment(__in int nAlignment)
{
    if(nAlignment != Qt::AlignLeft
       && nAlignment != Qt::AlignRight
       && nAlignment != Qt::AlignCenter)
    {
        return;
    }
    if (m_nAlignment == (nAlignment | Qt::AlignVCenter))
    {
        return;
    }
    m_nAlignment = nAlignment | Qt::AlignVCenter;
    DrawLabel();
}
/*
yellow border color
0: green background color, black text
1: black background color, yellow text
2: white background color, black text
3: gray background color, black text
4: red background color, yellow text
*/
void CLabel::SetLabelState(__in int nState)
{
    switch(nState)
    {
    case 0:
        {
            SetCtrlBKColor(Qt::green);
            SetTxtColor(Qt::black);
            break;
        }
    case 1:
        {
            SetCtrlBKColor(Qt::black);
            SetTxtColor(Qt::yellow);
            break;
        }
    case 2:
        {
            SetCtrlBKColor(Qt::white);
            SetTxtColor(Qt::black);
            break;
        }
    case 3:
        {
            SetCtrlBKColor(Qt::gray);
            SetTxtColor(Qt::black);
            break;
        }
    case 4:
        {
            SetCtrlBKColor(Qt::red);
            SetTxtColor(Qt::yellow);
            break;
        }
    }
    SetBorderColor(Qt::yellow);
}
void CLabel::SetVisible(__in bool isVisible)
{
    if(isVisible)
    {
        m_pPainter->setPen(Qt::yellow);
        m_pPainter->setBrush(Qt::yellow);
    }
    else
    {
        m_pPainter->setPen(Qt::black);
        m_pPainter->setBrush(Qt::black);
    }


    m_pPainter->drawRect(m_rect);
}
