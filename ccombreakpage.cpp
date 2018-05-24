#include "ccombreakpage.h"

ROMDATA g_PicRom_ComBreak[] =
{
    /*string                   font                  rc            foreground color       background color          control type                   ID           */
  //D_COMMON_PAGE_HEADER
    {QSTR("通信中断！"),    D_FONT_BOLD(40),      QRect(0,0, 640, 480),    Qt::yellow,               Qt::black,              CONTROL_LABEL,          ID_PICCOMBREAK_LABEL       },
};
int g_ComBreakRomLen = sizeof(g_PicRom_ComBreak)/sizeof(ROMDATA);

CComBreakPage::CComBreakPage()
{
}

void CComBreakPage::OnInitPage()
{
    GetDlgItem(ID_PICCOMBREAK_LABEL)->SetCtrlText("Communication Break!");
}
