#include <QtGui>

#include "cdebugdialog.h"
#include "cglobal.h"
#include "cpage.h"

extern vector<CPage*>  g_PageVec;

CDebugDialog::CDebugDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDebugDialog)
{
    ui->setupUi(this);
    ui->pageindexEdit->setFocus();
    ui->label_2->setText("CurIndex:" + QString::number(CGlobal::m_nCurPageIndex));
}

CDebugDialog::~CDebugDialog()
{
    delete ui;
}

void CDebugDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void CDebugDialog::on_okButton_clicked()
{
    int nPageIndex = ui->pageindexEdit->text().toUInt();
    if(nPageIndex >= 0
       && nPageIndex < BKSURFACENUM)
    {
        CGlobal::m_nCurPageIndex = ui->pageindexEdit->text().toUInt();
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->UpdatePage();
    }
    accept();
}
