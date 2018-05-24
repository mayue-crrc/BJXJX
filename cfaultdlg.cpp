#include "cfaultdlg.h"
#include "ui_cfaultdlg.h"

CFaultDlg::CFaultDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFaultDlg)
{

    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint );
    setStyleSheet(
            "QLabel { font-family: \"SimHei\"; font-size: 30px; color: rgb(255, 255, 0);}"
            "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
        );
    comBreakFlag = false;
}

CFaultDlg::~CFaultDlg()
{
    delete ui;
}

void CFaultDlg::changeEvent(QEvent *e)
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
void CFaultDlg::SetWarningStr( QString warningStr )
{
    ui->label->setText(warningStr);
    ui->label->setAlignment(Qt::AlignCenter);
}
void CFaultDlg::SetWarningLabel()
{
    ui->label->setGeometry( 3,3, this->width()-6, this->height()-6);
}
void CFaultDlg::SetComBreakFlag( bool flag )
{
    comBreakFlag = flag;
}
bool CFaultDlg::GetComBreakFlag()
{
    return comBreakFlag;
}
