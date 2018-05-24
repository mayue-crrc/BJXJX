#include <qpainter.h>

#include "cconfirmdialog.h"
#include "ui_cconfirmdialog.h"

CConfirmDialog::CConfirmDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CConfirmDialog)
{
    m_bContinue = false;
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );
}

CConfirmDialog::~CConfirmDialog()
{
    delete ui;
}

void CConfirmDialog::SetConfirmStr(QString str)
{
    ui->label->setText(str);
}

void CConfirmDialog::paintEvent(QPaintEvent *)
{
   QPixmap pixmap;
   pixmap.load("./resource/image/help_gray_icon.png");
   QPainter painter;
   painter.begin(this);
   painter.drawPixmap(30,30,40,40,pixmap);
   painter.end();
}

void CConfirmDialog::changeEvent(QEvent *e)
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

void CConfirmDialog::on_pushButton_yes_clicked()
{
    this->setResult(1);
    m_bContinue = true;
    this->accept();
}

void CConfirmDialog::on_pushButton_no_clicked()
{
    this->setResult(0);
    m_bContinue = false;
    this->accept();
}

bool CConfirmDialog::GetContinue()
{
    return m_bContinue;
}
