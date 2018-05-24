#ifndef SERIALPORT485_H
#define SERIALPORT485_H

#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <asm/ioctls.h>
#include <linux/serial.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>

#include <QByteArray>
#include <QMutex>


#define MAXDATASIZE 1024

class SerialPort485
{
public:
    SerialPort485(); 
    // pamameters: 波特率
    SerialPort485( const quint32 baudRate ); 
    // pamameters: 波特率，端口
    SerialPort485( const quint32 baudRate, 
		   const char *port ); 
    // pamameters: 波特率，端口，数据位，奇偶校验，停止位
    SerialPort485( const quint32 baudRate, 
		   const char *port,
                 const int databits,
                 const char * parityType,
                 const char * stopBitsType );
    ~SerialPort485();
    void setBaudRate( const quint32 baudRate );
    int Write( uchar *writeData, int len );
    int Read( uchar *readData );
    void Close();
    int Open();
    bool isOpen();
    void outPortFlush();
    void inPortFlush();
    void WriteIntLog(const int num);
    void WriteLog( const char *str );
private:
    void init();
    int tcsetup485( int, int, struct termios* );
    enum ParityType {
        PAR_NONE,
        PAR_ODD,
        PAR_EVEN,
        PAR_MARK,               //WINDOWS ONLY
        PAR_SPACE
    };

    enum StopBitsType {
        STOP_1,
        STOP_1_5,               //WINDOWS ONLY
        STOP_2
    };
    QMutex mutex;

    int fd;
    int status;
    int Rev_Counter;
    
    int BAUDRATE; //波特率
    const char *MODEMDEVICE; // 端口
    int DATABITS; // 有效位
    int PARITYTYPE;
    int STOPBITS;
};

#endif // SERIALPORT485_H
