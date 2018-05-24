#include "cbutton.h"
#include <qdebug.h>

CButton::CButton()
{
    m_typestr = "CButton";
    m_pPainter = NULL;
    m_btnState = LBUTTON_INIT;
    m_bAutoUpState = true;
}

void CButton::Create(
                     __in QString& btn_str,     //button string
                     __in QRect& btn_rc,        //button rect
                     __in QColor& btn_txtcolor, //button text color
                     __in QFont& btn_font,      //button text font
                     __in QColor& btn_bkcolor,  //button bk color
                     __in QPainter* btn_painter,//which picture to draw
                     __in int btn_ID            //button id
                     )
{
    m_txtcolor = btn_txtcolor;
    m_font     = btn_font;
    m_bkcolor  = btn_bkcolor;
    m_rect     = btn_rc;
    m_nID      = btn_ID;
    m_pPainter = btn_painter;
    m_str      = btn_str;
    ASSERT(m_pPainter != NULL);

    m_pPainter->setFont(m_font);
    m_pPainter->setPen(Qt::yellow);
    m_pPainter->setBrush(Qt::black);

    m_pPainter->drawRect(m_rect);
    m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
}


void CButton::SetCtrlText(
                           __in QString btn_str //button text
                         )
{
    m_str = btn_str;
    //m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
    ChangeButtonState(this->m_btnState);
}

void  CButton::SetTxtFont(
                          __in QFont btn_font // button font
                         )
{
    m_font = btn_font;
    m_pPainter->setFont(m_font);
    m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
}

void CButton::SetTxtColor(
                          __in QColor btn_txtcolor //button text color
                         )
{
    m_txtcolor = btn_txtcolor;
    m_pPainter->setPen(m_txtcolor);
    m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
}

void CButton::SetCtrlBKColor(
                             __in QColor btn_bkcolor //button bk color
                            )
{
    m_bkcolor = btn_bkcolor;
    m_pPainter->setBrush(m_bkcolor);

    m_pPainter->drawRect(m_rect);
    m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
}

void CButton::SetCtrlRect(
                          __in QRect btn_rect //button rect
                         )
{
    m_rect= btn_rect;
    m_pPainter->drawRect(m_rect);
    m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
}
QRect CButton::GetCtrlRect()
{
    return m_rect;
}
void CButton::ChangeButtonState(
                                __in int nBtnState // button state
                               )
{
    if (nBtnState == m_btnState)
    {
       // return;
    }
    ASSERT(((nBtnState == LBUTTON_DOWN)
           || (nBtnState == LBUTTON_UP)
           || (nBtnState == LBUTTON_INIT)
           || (nBtnState == LBUTTON_HIDE))) // error:unkown enum "BUTTONSTATE" type.

    m_btnState = nBtnState;

    m_pPainter->setFont(m_font);

    if(nBtnState == LBUTTON_DOWN)
    {
        m_pPainter->setPen(Qt::yellow);
        m_pPainter->setBrush(Qt::yellow);

        m_pPainter->drawRect(m_rect);

        QRect rect;
        rect.setRect(m_rect.left() + 2, m_rect.top() + 2,
                     m_rect.width(), m_rect.height());
        m_pPainter->setPen(Qt::black);
        m_pPainter->drawText(rect, Qt::AlignCenter, m_str);


        QPen pen(QColor(50, 50, 0));
        pen.setWidth(1);
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left(), m_rect.top(),
                             m_rect.left(), m_rect.bottom()+1);
        m_pPainter->drawLine(m_rect.left(), m_rect.top(),
                             m_rect.right()+1, m_rect.top());

        pen.setColor(QColor(100, 100, 0));
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left()+1, m_rect.top() + 1,
                             m_rect.left()+1, m_rect.bottom() + 1);
        m_pPainter->drawLine(m_rect.left()+1, m_rect.top() + 1,
                             m_rect.right()+1, m_rect.top() + 1);

        pen.setColor(QColor(150, 150, 0));
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left()+2, m_rect.top() + 2,
                             m_rect.left()+2, m_rect.bottom() + 1);
        m_pPainter->drawLine(m_rect.left()+2, m_rect.top() + 2,
                             m_rect.right()+1, m_rect.top() + 2);

        pen.setColor(QColor(190, 190, 0));
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left()+3, m_rect.top() + 3,
                             m_rect.left()+3, m_rect.bottom() + 1);
        m_pPainter->drawLine(m_rect.left()+3, m_rect.top() + 3,
                             m_rect.right()+1, m_rect.top() + 3);

        pen.setColor(QColor(230, 230, 0));
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left()+4, m_rect.top() + 4,
                             m_rect.left()+4, m_rect.bottom() + 1);
        m_pPainter->drawLine(m_rect.left()+4, m_rect.top() + 4,
                             m_rect.right()+1, m_rect.top() + 4);
    }else if(nBtnState == LBUTTON_HIDE)
    {
        this->SetInVisible();
    }
    else
    {
        m_pPainter->setPen(Qt::yellow);
        m_pPainter->setBrush(Qt::black);
        m_pPainter->drawRect(m_rect);
        m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);

        QPen pen(QColor(255, 255, 50));
        pen.setWidth(1);
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left(), m_rect.top(),
                             m_rect.left(), m_rect.bottom());
        m_pPainter->drawLine(m_rect.left(), m_rect.top(),
                             m_rect.right(), m_rect.top());

        pen.setColor(QColor(120, 120, 0));
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left()+1, m_rect.top()+1,
                             m_rect.left()+1, m_rect.bottom());
        m_pPainter->drawLine(m_rect.left()+1, m_rect.top()+1,
                             m_rect.right(), m_rect.top()+1);

        pen.setColor(QColor(50, 50, 0));
        m_pPainter->setPen(pen);
        m_pPainter->drawLine(m_rect.left()+2, m_rect.top()+2,
                             m_rect.left()+2, m_rect.bottom());
        m_pPainter->drawLine(m_rect.left()+2, m_rect.top()+2,
                             m_rect.right(), m_rect.top()+2);
    }

}
void CButton::SetInVisible()
{
    m_pPainter->setPen(Qt::black);
    m_pPainter->setBrush(Qt::black);

    m_pPainter->drawRect(m_rect);
}
int CButton::GetButtonState()
{
    return m_btnState;
}
