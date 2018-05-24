#include "ccheckbox.h"

CCheckBox::CCheckBox()
{
   m_typestr = "CCheckBox";
   m_pPainter = NULL;
   m_bCheckState = false;
}

void CCheckBox::Create(
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

    DrawCheckBox();
}


void CCheckBox::SetCtrlText(
                            __in QString ctrl_str //ctrl text
                           )
{
    m_str = ctrl_str;
    m_pPainter->fillRect(m_rect,Qt::black);
    DrawCtrl(m_bCheckState);
}

void  CCheckBox::SetTxtFont(
                            __in QFont ctrl_font // ctrl font
                           )
{
}

void CCheckBox::SetTxtColor(
                            __in QColor ctrl_txtcolor //ctrl text color
                           )
{
}

void CCheckBox::SetCtrlBKColor(
                               __in QColor ctrl_bkcolor //ctrl bk color
                              )
{
}

void CCheckBox::SetCtrlRect(
                            __in QRect ctrl_rect //ctrl rect
                           )
{
}

void CCheckBox::SetCheck(
                         __in bool bCheck // if control is checked
                        )
{
    m_bCheckState = bCheck;
    DrawCtrl(bCheck);
}

void CCheckBox::DrawCheckBox()
{
    DrawCtrl(false);
}

void CCheckBox::DrawCtrl(
                         __in bool bCheck
                         )
{
    m_pPainter->setPen(QColor(255,  0, 255));
    m_pPainter->setBrush(Qt::transparent);
    int width = m_rect.width()/4 - 2;
    int height = m_rect.height() - 2;
    int len;
    if (width < height)
    {
        len = width;
    }
    else
    {
        len = height;
    }
    QRect squareRect, txtRect;
    squareRect.setRect(m_rect.x() + 1, m_rect.y() + 1, len, len);
    m_pPainter->drawRect(squareRect);
    if(bCheck)
    {
        m_pPainter->fillRect(squareRect,QColor(255,  0, 255));
    }
    else
    {
        squareRect.setRect(m_rect.x()+2,m_rect.y()+2,len-2,len-2);
        m_pPainter->fillRect(squareRect,Qt::black);
    }
    txtRect.setRect(m_rect.x() + m_rect.width()/4, m_rect.y(), m_rect.width()*3/4, m_rect.height());

    m_pPainter->drawText(txtRect, Qt::AlignCenter, m_str);
}
