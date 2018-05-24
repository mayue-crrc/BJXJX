#include <QWSServer>
#include <QtGui/QApplication>
#include <QTextCodec>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(argc>1)
    {
        CGlobal::m_nCurPageIndex = PICTURE_INDEX(PAGE_ROM_INDEX_MAIN); // test use 20120927
        g_loginID = "1234";
        g_login_type = ENUM_LOGIN_TYPE_DRIVER;
    }


    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8")); // Chinese
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    QFont font("simhei",12,QFont::Normal,FALSE);
    a.setFont(font);

#ifndef USE_RAND_DATA
    QApplication::setOverrideCursor(QCursor(Qt::BlankCursor));
    if (QWSServer::isCursorVisible()){
        QWSServer::setCursorVisible(false); //hide cursor
    } //end
#endif

    QString str[4];
    str[0] = QString("/opt/Project/log");
    str[1] = QString("/opt/Project/lost+found");
    str[2] = QString("/opt/Project/cnrerd/data");
    str[3] = QString("/opt/Project/cnrerd/record");
    QDir dir[4];
    for(int i=0;i<4;i++)
    {
        dir[i] = QDir(str[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(!dir[i].exists())
            dir[i].mkdir( str[i] );
    }


    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap("resource/image/splash.png"));
    splash->setAutoFillBackground(true);
    splash->show();
    Dialog w;
    w.show();
    splash->finish(&w);
    delete splash;
    return a.exec();
}
