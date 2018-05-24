#include "ccriticalwarningdialog.h"
#include "ui_ccriticalwarningdialog.h"

CCriticalWarningDialog::CCriticalWarningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CCriticalWarningDialog)
{

    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint );

    setStyleSheet(
        "QLabel { font-family: \"SimHei\"; font-size: 60px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );

    comBreakFlag = false;
}

CCriticalWarningDialog::~CCriticalWarningDialog()
{
    delete ui;
}

void CCriticalWarningDialog::changeEvent(QEvent *e)
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
void CCriticalWarningDialog::SetWarningStr( QString warningStr )
{

    ui->label->setText(warningStr);

}
void CCriticalWarningDialog::SetWarningLabel()
{
    ui->label->setGeometry( 3, 3, this->width()-6, this->height()-6 );
}
void CCriticalWarningDialog::SetComBreakFlag( bool flag )
{
    comBreakFlag = flag;
}
bool CCriticalWarningDialog::GetComBreakFlag()
{
    return comBreakFlag;
}
