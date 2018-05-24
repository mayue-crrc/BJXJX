#ifndef SERIALTHREAD485_H
#define SERIALTHREAD485_H

#include <QThread>
#include <QByteArray>
#include <QMutex>
#include <QWaitCondition>
#include <QTimer>

#include "serialport485.h"

#define MAXDATASIZE 1024
class SerialThread485 : public QThread
{
    Q_OBJECT
public:
    SerialThread485();
    ~SerialThread485();
    void render();
    int writeData( uchar *data, int len );
    void portRestart();
    bool isOpen();

    void outPortFlush();
    void inPortFlush();
    void setPermitWork( bool permitBool );

    unsigned short GetCRC16( unsigned char *puchMsg, unsigned short usDataLen );
    unsigned short GetCRC16( const QByteArray dataArray, unsigned short usDataLen );
signals:
    void SendReadData( const QByteArray &ReadData, int length );
    void readFaultSignal( int const code ); // -1 port closed, -2 no data in read buffer or data is not enough
public slots:
    void setDataSlot( uchar *data, int len );
    void changeBaudRate( int baudRate );
    void readOutTimerSlot();
private:
    SerialPort485 *port;
    QByteArray readArray;
    QMutex mutex,mutexRead,mutexWrite;
    QWaitCondition condition;
    bool restart, abort, permitWork;
    int readLength;
    //int comBreakCounter;
    //bool comBreakBool;
    QTimer *readOutTimer; //
    void init();
    void Read();
    int Open();
    void Close();
    void run();
    void getData();
    void setData();  
    int SendRtuCmdToModBus( unsigned char cmd[], unsigned short len );
    void setReadLength( int const len );
    //unsigned int test;
};

#endif // SERIALTHREAD485_H
