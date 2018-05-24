#include <qdebug.h>
#include <QString>

#include "clistbox.h"

CListBox::CListBox()
{
    m_typestr = "CListBox";
    m_pPainter = NULL;
    if((SCREEN_W)==800)
        m_listbox_height = 30;
    else
        m_listbox_height = 24;
}

void CListBox::Create(__in QString& ctrl_str,
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

    m_curSelected = 4;

    DrawListBox();
    SetSelected(4);
}


void CListBox::SetCtrlText(
                           __in QString ctrl_str // CListBox text
                          )
{

}

void  CListBox::SetTxtFont(
                           __in QFont ctrl_font // CListBox font
                          )
{

}

void CListBox::SetTxtColor(
                           __in QColor ctrl_color //CListBox text color
                          )
{

}

void CListBox::SetCtrlBKColor(
                              __in QColor ctrl_bkcolor //CListBox bk color
                             )
{

}

void CListBox::SetCtrlRect(
                           __in QRect ctrl_rect //CListBox rect
                          )
{

}

void CListBox::SetSelected(
               __in int index // Select item index
              )
{
    if (m_curSelected == index)
    {
        //return;
    }
    int idx_old = 0;
    int idx_new = 0;
    QString str;
    int height = 0;
    int cnt = 0;
    while (-1 != (idx_new = m_str.indexOf(',', idx_old)))
    {
        str = m_str.mid(idx_old, idx_new - idx_old);
//                    qDebug() <<  m_curSelected << cnt;
//                        qDebug() << str;
        if (m_curSelected == cnt)
        {
            m_pPainter->setFont(m_font);
            m_pPainter->fillRect(m_rect.x() + 1, m_rect.y() + height + 1, m_rect.width() - 1, m_listbox_height - 1, Qt::black);
            m_pPainter->setPen(Qt::yellow);
            m_pPainter->drawText(m_rect.x(), m_rect.y() + height, m_rect.width(), m_listbox_height, Qt::AlignCenter, str);
        }
        if (index == cnt)
        {
            m_pPainter->setFont(m_font);
            m_pPainter->fillRect(m_rect.x(), m_rect.y() + height + 1, m_rect.width(), m_listbox_height -1, Qt::yellow);
            m_pPainter->setPen(Qt::black);
            m_pPainter->drawText(m_rect.x(), m_rect.y() + height, m_rect.width(), m_listbox_height, Qt::AlignCenter, str);
        }

        height += m_listbox_height;
        idx_old = idx_new + 1;
        cnt += 1;
    }
    m_curSelected = index;
}

void CListBox::DrawListBox()
{
    m_rect.setHeight(m_rect.height() + 1);
    m_pPainter->setPen(m_txtcolor);
    m_pPainter->drawRect(m_rect);

    m_pPainter->setBrush(m_bkcolor);
    m_pPainter->fillRect(m_rect, m_bkcolor);

    m_pPainter->setFont(m_font);
    int idx_old = 0;
    int idx_new = 0;
    QString str;
    int height = 0;
    while (-1 != (idx_new = m_str.indexOf(',', idx_old)))
    {
        str = m_str.mid(idx_old, idx_new - idx_old);
        m_pPainter->drawText(m_rect.x(), m_rect.y() + height, m_rect.width(), m_listbox_height, Qt::AlignCenter, str);
        height += m_listbox_height;
        idx_old = idx_new + 1;
    }

    str = m_str.right(m_str.length() - idx_old);
    m_pPainter->drawText(m_rect.x(), m_rect.y() + height, m_rect.width(), m_listbox_height, Qt::AlignCenter, str);

}
