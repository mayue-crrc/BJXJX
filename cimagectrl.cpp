#include <qdir.h>
#include <qpicture.h>

#include "cimagectrl.h"

CImageCtrl::CImageCtrl()
{
    m_typestr = "CImageCtrl";
    m_pPainter = NULL;
    m_bShow = true;
}

void CImageCtrl::Create(__in QString& ctrl_str,
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

    DrawImage(IMAGE_UP);
}

void CImageCtrl::DrawImage(
                           __in int nState
                          )
{
    QRect rc;
    m_str.trimmed();

    if(m_str.right(4) == ".png"
       || m_str.right(4) == ".bmp"
       || m_str.right(4) == ".jpg")
    {
        QPixmap pic;
        pic.load("./resource/image/" + m_str);
        if(nState == IMAGE_UP)
        {
            rc = m_rect;
        }
        else
        {
            rc.setRect(m_rect.x()+10,m_rect.y()+10,m_rect.width(),m_rect.height());
        }
        m_pPainter->drawPixmap(rc, pic);
    }
}

void CImageCtrl::ShowImage()
{
    if (m_bShow)
    {
        return;
    }
    m_bShow = true;
    DrawImage(IMAGE_UP);
}

void CImageCtrl::HideImage()
{
    if (!m_bShow)
    {
        return;
    }
    m_bShow = false;
    m_pPainter->fillRect(m_rect,Qt::black);
}

void CImageCtrl::UpdateImage(QString str)
{
    if (m_str == str)
    {
        return;
    }
    m_str = str;
    DrawImage(IMAGE_UP);
}
