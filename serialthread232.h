#ifndef SERIALTHREAD232_H
#define SERIALTHREAD232_H

#include <QThread>
#include <QByteArray>
//#include <QMutex>
//#include <QWaitCondition>
#include <QTimer>
#include "serialport232.h"

#define MAXDATASIZE 1024
class SerialThread232 : public QThread
{
    Q_OBJECT
public:
    SerialThread232();
    ~SerialThread232();
    void render();
    int writeData( uchar *writeData, int len );
    void portRestart();
    bool isOpen();

    void outPortFlush();
    void inPortFlush();
    void setReadLength( int const len );

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
    void init();
    void Read();
    int Open();
    void Close();
    void run();

    #ifndef windows_demo
    SerialPort232 *port;
    #endif  //windows_demo

    QByteArray readArray;
    //QMutex mutex,mutexRead,mutexWrite;
    //QWaitCondition condition;
    //bool restart;
    //bool abort;
    int readLength;
    int comBreakCounter;
    //bool comBreakBool;
    QTimer *readOutTimer; //
    void getData1();
    void getData2();
    void setData();
    int SendRtuCmdToModBus( unsigned char cmd[], unsigned short len );
};

#endif // SERIALTHREAD232_H
