#include <QDesktopWidget>
#include <qpainter.h>

#include "cmainhelpdialog2.h"
#include "ui_cmainhelpdialog2.h"

CMainHelpDialog2::CMainHelpDialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CMainHelpDialog2)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint );
    setStyleSheet(
        "QPushButton { font-family: \"SimHei\"; font-size: 18px; font-weight: bold; color: rgb(255, 255, 0);background-color:rgb(0,0,0); }"
        "QLabel { font-family: \"SimHei\"; font-size: 16px; color: rgb(255, 255, 0);}"
        "QDialog { background-color:rgb(54,54,54); color: rgb(255, 255, 0);}"
    );
    MainHelpDialog3= new CMainHelpdialog3;
    connect( MainHelpDialog3, SIGNAL(closeMainHelpDialog2Signal()), this, SLOT(closeMainHelpDialog2Slot()) );
}

CMainHelpDialog2::~CMainHelpDialog2()
{
    delete ui;
}

void CMainHelpDialog2::changeEvent(QEvent *e)
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

void CMainHelpDialog2::paintEvent(QPaintEvent* e)
{
    QPainter painter;

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
    QPixmap pic12;
    QPixmap pic13;
    QPixmap pic14;
    QString strPath;
    QRect rc;

    painter.begin(this);
    // left
/*    strPath = "./resource/image/main_washingmode.png";
    pic1.load(strPath);
    rc.setRect(25,20,60,30);
    painter.drawPixmap(rc, pic1);

    strPath = "./resource/image/main_diapatchingmode.png";
    pic2.load(strPath);
    rc.setRect(25,60,60,30);
    painter.drawPixmap(rc, pic2);

    strPath = "./resource/image/main_safebrake.png";
    pic3.load(strPath);
    rc.setRect(35,100,40,30);
    painter.drawPixmap(rc, pic3);

    strPath = "./resource/image/main_brakerelease.png";
    pic4.load(strPath);
    rc.setRect(35,140,40,30);
    painter.drawPixmap(rc, pic4);

//    strPath = "./resource/image/main_brakeapply.png";
//    pic5.load(strPath);
//    rc.setRect(25,240,60,40);
//    painter.drawPixmap(rc, pic5);

//    strPath = "./resource/image/main_emgc.png";
//    pic6.load(strPath);
//    rc.setRect(25,290,60,40);
//    painter.drawPixmap(rc, pic6);
    // right
    strPath = "./resource/image/safecircle.png";
    pic5.load(strPath);
    rc.setRect(35,180,40,30);
    painter.drawPixmap(rc, pic5);


    strPath = "./resource/image/pontup.png";
    pic6.load(strPath);
    rc.setRect(35,220,40,30);
    painter.drawPixmap(rc, pic6);


    strPath = "./resource/image/pontmiddle.png";
    pic7.load(strPath);
    rc.setRect(35,260,40,30);
    painter.drawPixmap(rc, pic7);

    strPath = "./resource/image/pontdown.png";
    pic8.load(strPath);
    rc.setRect(35,300,40,30);
    painter.drawPixmap(rc, pic8);

    strPath = "./resource/image/newleft.png";
    pic9.load(strPath);
    rc.setRect(320,20,40,30);
    painter.drawPixmap(rc, pic9);

    strPath = "./resource/image/newright.png";
    pic10.load(strPath);
    rc.setRect(320,60,40,30);
    painter.drawPixmap(rc, pic10);

    strPath = "./resource/image/TCUREADY.png";
    pic11.load(strPath);
    rc.setRect(320,100,30,30);
    painter.drawPixmap(rc, pic11);

    strPath = "./resource/image/EBLIGHT.png";
    pic12.load(strPath);
    rc.setRect(320,140,30,30);
    painter.drawPixmap(rc, pic12);

    strPath = "./resource/image/leftturnnew.png";
    pic13.load(strPath);
    rc.setRect(320,180,25,30);
    painter.drawPixmap(rc, pic13);

    strPath = "./resource/image/rightturnnew.png";
    pic14.load(strPath);
    rc.setRect(320,220,25,30);
    painter.drawPixmap(rc, pic14);
   /* strPath = "./resource/image/dcdc_ok.png";
    pic8.load(strPath);
    rc.setRect(320,90,60,40);
    painter.drawPixmap(rc, pic8);

    strPath = "./resource/image/dcdc_stop.png";
    pic9.load(strPath);
    rc.setRect(320,140,60,40);
    painter.drawPixmap(rc, pic9);

    strPath = "./resource/image/dcdc_fault.png";
    pic10.load(strPath);
    rc.setRect(320,190,60,40);
    painter.drawPixmap(rc, pic10);*/


//    pic11.load(strPath);
//    rc.setRect(320,240,60,40);
//    painter.drawPixmap(rc, pic11);


//    pic12.load(strPath);
//    rc.setRect(320,290,60,40);
//    painter.drawPixmap(rc, pic12);

    painter.end();
}

void CMainHelpDialog2::on_quitPushButton_clicked()
{
    this->accept();
    emit closeMainHelpDialogSignal();
}
void CMainHelpDialog2::on_upToolButton_clicked()
{
    this->accept();
}

void CMainHelpDialog2::on_downToolButton_clicked()
{
    MainHelpDialog3->setGeometry(this->x()+int((this->width()-640)/2),this->y()+int((this->height()-415)/2),640,415);
    MainHelpDialog3->exec();
}
void CMainHelpDialog2::closeMainHelpDialog2Slot()
{
    this->accept();
    emit closeMainHelpDialogSignal();
}
