#include <qdesktopwidget.h>

#include "cwarningdialog.h"
#include "ui_cwarningdialog.h"
#include "cglobal.h"

CWarningDialog::CWarningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CWarningDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    ui->pushButton->setText(QSTR("OK"));
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );
}

CWarningDialog::~CWarningDialog()
{
    delete ui;
}

void CWarningDialog::changeEvent(QEvent *e)
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

void CWarningDialog::paintEvent(QPaintEvent *)
{
   QPixmap pixmap;
   pixmap.load("./resource/image/warning_icon_gray.png");
   QPainter painter;
   painter.begin(this);
   painter.setBackgroundMode(Qt::TransparentMode);
   painter.drawPixmap(30,30,40,40,pixmap);
   painter.end();
}

void CWarningDialog::SetButtonVisible(__in bool isvisible)
{
    ui->pushButton->setVisible( isvisible );
}

void CWarningDialog::SetWarningStr(
                                   __in QString warningStr
                                  )
{
    ui->label->setText(warningStr);
}
void CWarningDialog::on_pushButton_clicked()
{
    this->accept();
}
