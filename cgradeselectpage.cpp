#include "cgradeselectpage.h"
#include "chistoryfaultlistpage.h"
#include "ccurrentfaultlistpage.h"

extern vector<CPage*>  g_PageVec;

ROMDATA g_PicRom_GradeSelect[] =
{
    /*string                font                          rc                  foreground color              background color                control type                   ID           */
    {QSTR("选择等级"),      D_FONT(13),           QRect(  0,  0,640, 60),        Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("全部"),         D_COMMON_TITLE_FONT,  QRect(220,120,200, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICGS_BUTTON_GRADEALL },
    {"1",                  D_COMMON_TITLE_FONT,  QRect(128,230,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICGS_BUTTON_GRADE1   },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(384,230,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICGS_BUTTON_GRADE2   },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(128,340,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICGS_BUTTON_GRADE3   },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(384,340,128, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICGS_BUTTON_GRADE4   },

};

int g_GradeSelectRomLen = sizeof(g_PicRom_GradeSelect)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CGradeSelectPage,CPage)
        ON_LBUTTONDOWN(ID_PICGS_BUTTON_GRADE1,OnGrade1Down)
        ON_LBUTTONDOWN(ID_PICGS_BUTTON_GRADE2,OnGrade2Down)
        ON_LBUTTONDOWN(ID_PICGS_BUTTON_GRADE3,OnGrade3Down)
        ON_LBUTTONDOWN(ID_PICGS_BUTTON_GRADE4,OnGrade4Down)
        ON_LBUTTONDOWN(ID_PICGS_BUTTON_GRADEALL,OnGradeAllDown)
        ON_LBUTTONUP(ID_PICGS_BUTTON_GRADE1,OnGrade1Up)
        ON_LBUTTONUP(ID_PICGS_BUTTON_GRADE2,OnGrade2Up)
        ON_LBUTTONUP(ID_PICGS_BUTTON_GRADE3,OnGrade3Up)
        ON_LBUTTONUP(ID_PICGS_BUTTON_GRADE4,OnGrade4Up)
        ON_LBUTTONUP(ID_PICGS_BUTTON_GRADEALL,OnGradeAllUp)
END_MESSAGE_MAP()

CGradeSelectPage::CGradeSelectPage()
{
}

void CGradeSelectPage::OnGrade1Down()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE1))->ChangeButtonState(LBUTTON_DOWN);
}

void CGradeSelectPage::OnGrade2Down()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE2))->ChangeButtonState(LBUTTON_DOWN);
}

void CGradeSelectPage::OnGrade3Down()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE3))->ChangeButtonState(LBUTTON_DOWN);
}

void CGradeSelectPage::OnGrade4Down()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE4))->ChangeButtonState(LBUTTON_DOWN);
}

void CGradeSelectPage::OnGradeAllDown()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADEALL))->ChangeButtonState(LBUTTON_DOWN);
}

void CGradeSelectPage::OnGrade1Up()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE1))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_ONE);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_ONE);
    }
}

void CGradeSelectPage::OnGrade2Up()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE2))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_TWO);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_TWO);
    }
}

void CGradeSelectPage::OnGrade3Up()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE3))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_THREE);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_THREE);
    }
}

void CGradeSelectPage::OnGrade4Up()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADE4))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_FOUR);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_FOUR);
    }
}

void CGradeSelectPage::OnGradeAllUp()
{
    ((CButton *)GetDlgItem(ID_PICGS_BUTTON_GRADEALL))->ChangeButtonState(LBUTTON_UP);
    if (E_INVOKE_HISTORY == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_HISTORYFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CHistoryFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_ALL);
    }
    else if (E_INVOKE_CURRENT == g_invoke_type)
    {
        ChangePage(PAGE_ROM_INDEX_CURRENTFAULTLIST);
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        ((CCurrentFaultListPage *)pPage)->SetGradeType(CNR_HFLP_GRADE_TYPE_ALL);
    }
}

void CGradeSelectPage::OnUpdatePage()
{

}
