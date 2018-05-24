#ifndef RECORDERTHREAD_H
#define RECORDERTHREAD_H

#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QFile>
#include <QDir>
#include <QDateTime>
#include <QTextStream>

#include "cglobal.h"
#include "receivedata.h"
#include "senddata.h"

class RecorderThread : public QThread
{
    Q_OBJECT
public:
    RecorderThread();
    ~RecorderThread();
    void render();
signals:
    void restartScreenUptateSignal();
private:
    void run();
    void delOldRecorder();
    void writeRecorder();
    BYTE bitToByte( bool bit, quint8 offset );
    QMutex mutex,mutexWrite;
    QWaitCondition condition;
    bool restart;
    bool abort;
    bool delOldFilesFlag;
    int lastSecond;
};

#endif // RECORDERTHREAD_H
