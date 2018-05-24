#include "cbitmapbutton.h"

CBitmapButton::CBitmapButton()
{
    m_typestr = "CBitmapButton";
    m_pPainter = NULL;
}

void CBitmapButton::Create(
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
    DrawBitmapButtonCtrl();
}


void CBitmapButton::SetCtrlText(
                                __in QString btn_str //button text
                               )
{
    btn_str.trimmed();
    m_str = btn_str;
}

void  CBitmapButton::SetTxtFont(
                                __in QFont btn_font // button font
                               )
{

}

void CBitmapButton::SetTxtColor(
                                __in QColor btn_txtcolor //button text color
                               )
{

}

void CBitmapButton::SetCtrlBKColor(
                                   __in QColor btn_bkcolor //button bk color
                                  )
{

}

void CBitmapButton::SetCtrlRect(
                                __in QRect btn_rect //button rect
                               )
{

}

void CBitmapButton::ChangeButtonState(
                                      __in int nBtnState //button state
                                     )
{
    if(nBtnState != LBUTTON_DOWN && nBtnState != LBUTTON_UP)
    {
        ASSERT(FALSE); //error:unkown enum "BUTTONSTATE" type.
    }
    DrawBitmapButtonCtrl();

}

void CBitmapButton::DrawBitmapButtonCtrl()
{
    QPixmap bitmapButton("resource/image/" + m_str);
    QRect cleanRect(m_rect.x(), m_rect.y(), m_rect.width(), m_rect.height());

    m_pPainter->setBrush(QBrush(Qt::black, Qt::SolidPattern));
    m_pPainter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    m_pPainter->drawRect(cleanRect);

    m_pPainter->drawPixmap(m_rect.x(), m_rect.y(), m_rect.width(), m_rect.height(), bitmapButton);
}

/*void  CBitmapButton::ShowBitmapButton()
{
    if (m_bgreen)
    {
        return;
    }
    m_bShow = true;
    DrawImage(IMAGE_UP);
}

void  CBitmapButton::HideBitmapButton()
{
    if (!m_bShow)
    {
        return;
    }
    m_bShow = false;
    m_pPainter->fillRect(m_rect,Qt::black);
}*/
