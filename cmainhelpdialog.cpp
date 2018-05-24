#include <QDesktopWidget>
#include <qpainter.h>

#include "cmainhelpdialog.h"
#include "ui_cmainhelpdialog.h"

CMainHelpDialog::CMainHelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CMainHelpDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );
    cMainHelpDialog2 = new CMainHelpDialog2;
    connect( cMainHelpDialog2, SIGNAL(closeMainHelpDialogSignal()), this, SLOT(closeMainHelpDialogSlot()) );
}

CMainHelpDialog::~CMainHelpDialog()
{
    delete ui;
    delete cMainHelpDialog2;
}

void CMainHelpDialog::changeEvent(QEvent *e)
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

void CMainHelpDialog::paintEvent(QPaintEvent* e)
{
    QPainter painter;

    QPixmap pic0;
    QPixmap pic1;
    QPixmap pic2;
    QPixmap pic3;
    QPixmap pic4;
    QPixmap pic5;
    QPixmap pic6;
    QPixmap pic7;
    QPixmap pic8;
    QPixmap pic9;
    QPixmap pic10;
    QPixmap pic11;
    QString strPath;
    QRect rc;

    painter.begin(this);

    /*strPath = "./resource/image/icon-8.png";
    pic0.load(strPath);
    rc.setRect(30,263,31,31);
    painter.drawPixmap(rc, pic0);

    strPath = "./resource/image/icon-1.png";
    pic1.load(strPath);
    rc.setRect(30,5,41,30);
    painter.drawPixmap(rc, pic1);
    rc.setRect(340,5,41,30);
    painter.drawPixmap(rc, pic1);

    strPath = "./resource/image/icon-3.png";
    pic3.load(strPath);
    rc.setRect(30,42,41,30);
    painter.drawPixmap(rc, pic3);
    rc.setRect(340,75,41,30);
    painter.drawPixmap(rc, pic3);

    strPath = "./resource/image/bcuokapply.png";
    pic5.load(strPath);
    rc.setRect(30,79,41,30);
    painter.drawPixmap(rc, pic5);
    rc.setRect(340,145,41,30);
    painter.drawPixmap(rc, pic5);

    strPath = "./resource/image/icon-2.png";
    pic2.load(strPath);
    rc.setRect(340,40,41,30);
    painter.drawPixmap(rc, pic2);

    strPath = "./resource/image/icon-4.png";
    pic4.load(strPath);
    rc.setRect(340,110,41,30);
    painter.drawPixmap(rc, pic4);

    strPath = "./resource/image/bcuokrelease.png";
    pic6.load(strPath);
    rc.setRect(340,180,41,30);
    painter.drawPixmap(rc, pic6);

    strPath = "./resource/image/bcubadapply.png";
    pic7.load(strPath);
    rc.setRect(340,215,41,30);
    painter.drawPixmap(rc, pic7);

    strPath = "./resource/image/bcubadrelease.png";
    pic8.load(strPath);
    rc.setRect(340,250,41,30);
    painter.drawPixmap(rc, pic8);

    strPath = "./resource/image/doorpassby.png";
    pic9.load(strPath);
    rc.setRect(30,338, 31, 31);
    painter.drawPixmap(rc, pic9);

    strPath = "./resource/image/hscbopen.png";
    pic10.load(strPath);
    rc.setRect(340,285,41,30);
    painter.drawPixmap(rc, pic10);

    strPath = "./resource/image/hscbclose.png";
    pic11.load(strPath);
    rc.setRect(340,320,41,30);
    painter.drawPixmap(rc, pic11);
*/
    painter.end();
}

void CMainHelpDialog::on_quitPushButton_clicked()
{
    this->accept();
}
void CMainHelpDialog::on_downToolButton_clicked()
{
    cMainHelpDialog2->setGeometry(this->x()+int((this->width()-640)/2),this->y()+int((this->height()-415)/2),640,415);
    cMainHelpDialog2->exec();
}
void CMainHelpDialog::closeMainHelpDialogSlot()
{
    this->accept();
}
