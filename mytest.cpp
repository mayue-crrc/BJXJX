#include "mytest.h"


ROMDATA g_PicRom_MYStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
//    D_COMMON_PAGE_HEADER
    {"The One",                   D_DEFAULT_FONT,      QRect(290,130,  2,280),           Qt::white,          Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

//    D_LAYER1_NAVIGATION_BAR
};
int g_MYStatePageRomLen = sizeof(g_PicRom_MYStatePage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(mytest,CPage)
 //   ON_UPDATE_PAGE()
//ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)

END_MESSAGE_MAP()

mytest::mytest()
{
}



void mytest::OnUpdatePage()
{

}



void mytest::OnCommonQuitButtonDown()
{
   // ChangePage(PAGE_ROM_INDEX_MAIN);
}
