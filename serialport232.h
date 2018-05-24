#ifndef SERIALPORT232_H
#define SERIALPORT232_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <string.h>
//#include <qwaitcondition.h>

//#include <QMutex>
#define MAXDATASIZE 1024

class SerialPort232
{
public:
    SerialPort232();
    // pamameters: 波特率
    SerialPort232( const quint32 baudRate );
    // pamameters: 波特率，端口
    SerialPort232( const quint32 baudRate,
                   const char *port );
    // pamameters: 波特率，端口，数据位，奇偶校验，停止位
    SerialPort232( const quint32 baudRate,
                   const char *port,
                   const int databits,
                   const char *parityType,
                   const char *stopBitsType );
    ~SerialPort232();

    int Write( uchar *writeData, int len );
    int Read( uchar *readData );
    void Close();
    int Open();
    void setBaudRate( const quint32 baudRate );
    bool isOpen();
    void outPortFlush();
    void inPortFlush();
private:
    int setBaudRate();
    int setDatabitsParityStopbits();
    void init();
    int tcsetup232( int, int, struct termios* );
    enum ParityType {
        PAR_NONE,
        PAR_ODD,
        PAR_EVEN,
        PAR_MARK,               //WINDOWS ONLY
        PAR_SPACE
    };//end

    enum StopBitsType {
        STOP_1,
        STOP_1_5,               //WINDOWS ONLY
        STOP_2
    };//end
    //QMutex mutexRead, mutexWrite;

    int fd;
    int status;
    int Rev_Counter;

    int BAUDRATE; //波特率
    const char *MODEMDEVICE; // 端口
    int DATABITS; // 有效位
    int PARITYTYPE;
    int STOPBITS;
};

#endif // SERIALPORT232_H
