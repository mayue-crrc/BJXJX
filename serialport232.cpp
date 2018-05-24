#include <qdebug.h>

#include "serialport232.h"


const int speed_arr[] = { B50, B75, B110, B134, B150, B200, B300, B600, B1200, B1800, B2400, B4800, B9600, B19200, B38400,
                          B57600, B115200, B230400, B460800, B500000, B576000, B921600, B1000000,
                          B1152000, B1500000, B2000000, B2500000, B3000000, B3500000, B4000000 };
const quint32 name_arr[] = { 50, 75, 110, 134, 150, 200, 300, 600, 1200, 1800, 2400, 4800, 9600, 19200, 38400,
                          57600, 115200, 230400, 460800, 500000, 576000, 921600, 1000000,  //aa
                          1152000, 1500000, 2000000, 2500000, 3000000, 3500000, 4000000 }; //end

SerialPort232::SerialPort232()
{
    // set baudRate
    BAUDRATE = B19200;
    // set COM port
    MODEMDEVICE = "/dev/ttyS0";
    // set databits
    DATABITS = CS8;
    // parity check
    PARITYTYPE = PAR_NONE;
    // StopBits
    STOPBITS = STOP_1;
    init();
}

SerialPort232::SerialPort232( const quint32 baudRate )
{
    // set baudRate
    for( int i = 0; i < ( int )( sizeof( speed_arr ) / sizeof( int ) ); i++ )
        if( baudRate == name_arr[i] )
            BAUDRATE = speed_arr[i];
    // set COM port
    MODEMDEVICE = "/dev/ttyS0";
    // set databits
    DATABITS = CS8;
    // parity check
    PARITYTYPE = PAR_NONE;
    // StopBits
    STOPBITS = STOP_1;

    init();
}

SerialPort232::SerialPort232( const quint32 baudRate,
                              const char *port )
{
    // set baudRate
    for( int i = 0; i < ( int )( sizeof( speed_arr ) / sizeof( int ) ); i++ )
        if( baudRate == name_arr[i] )
            BAUDRATE = speed_arr[i];
    // set COM port
    MODEMDEVICE = port;
    // set databits
    DATABITS = CS8;
    // parity check
    PARITYTYPE = PAR_NONE;
    // StopBits
    STOPBITS = STOP_1;

    init();
}

SerialPort232::SerialPort232( const quint32 baudRate,
                   const char *port,
                   const int databits,
                   const char *parityType,
                   const char *stopBitsType )
{
    // set baudRate
    for( int i = 0; i < ( int )( sizeof( speed_arr ) / sizeof( int ) ); i++ )
        if( baudRate == name_arr[i] )
            BAUDRATE = speed_arr[i];
    // set COM port
    MODEMDEVICE = port;
    // set databits
    switch( databits ){
        case 5:
            DATABITS = CS5;
            break;
        case 6:
            DATABITS = CS6;
            break;
        case 7:
            DATABITS = CS7;
            break;
        default:
           DATABITS = CS8;
    }; //end
    // parity check
    if( parityType == "PAR_NONE")
        PARITYTYPE = PAR_NONE;
    else if( parityType == "PAR_ODD")
        PARITYTYPE = PAR_ODD;
    else if( parityType == "PAR_EVEN")
        PARITYTYPE = PAR_EVEN;
    else if( parityType == "PAR_MARK")
        PARITYTYPE = PAR_MARK;
    else if( parityType == "PAR_SPACE")
        PARITYTYPE = PAR_SPACE;
    else
        PARITYTYPE = PAR_NONE;
    // StopBits
    if( stopBitsType == "STOP_1")
        STOPBITS = STOP_1;
    else if( stopBitsType == "STOP_1_5")
        STOPBITS = STOP_1_5;
    else if( stopBitsType == "STOP_2")
        STOPBITS = STOP_2;
    else
        STOPBITS = STOP_1;

    init();
}

SerialPort232::~SerialPort232()
{
    Close();
}

void SerialPort232::init()
{
    Open();
}

// remove serinfo process
int SerialPort232::Open()
{
    int result = -1;
    if( ( fd = open( MODEMDEVICE, O_RDWR | O_NOCTTY | O_NDELAY ) ) < 0 )
    {
        perror(MODEMDEVICE);
        fd = -1;
        return result;
    } //end
    //qDebug() << "fd 1: " << fd;
    // port setup
    if (setBaudRate()< 0)
        return result;;
    if( setDatabitsParityStopbits() == -1 )
    {
       printf("Set Parity Error\n");
       fd = -1;
       // TODO
       return result;
    } //end
    //qDebug() << this->isOpen();
    // set COM port
    //qDebug() << MODEMDEVICE;
    // set databits
    //qDebug() << DATABITS;
    // parity check
    //qDebug() << PARITYTYPE;
    // StopBits
    //qDebug() << STOPBITS;
    return 0;
}

int SerialPort232::Read( uchar *readData )
{
    //mutexRead.lock();
    int nread = 0;
    if( fd != -1 ){
        nread = read( fd, readData, MAXDATASIZE );
    } // end
    //mutexRead.unlock();

    return nread;
}

int SerialPort232::Write( uchar *writeData, int len )
{
    //mutexWrite.lock();
    int result = 0;
    if( len > 0 ){
        if( fd != -1 ){
            result = write( fd, writeData, len );
        } //end
    } // end
    //mutexWrite.unlock();

    return result;
}

void SerialPort232::Close()
{
    tcflush(fd, TCIOFLUSH);
    close(fd);
}

bool SerialPort232::isOpen()
{
    if( fd<0 ) return false;
    else return true;
}

void SerialPort232::outPortFlush()
{
    tcflush(fd, TCOFLUSH);
}

void SerialPort232::inPortFlush()
{
    tcflush(fd, TCIFLUSH);
}

int SerialPort232::setBaudRate()
{
    int status;
    struct termios Opt;
    if(fd)
    {
        tcgetattr( fd, &Opt );
        tcflush( fd, TCIOFLUSH );
        cfsetispeed( &Opt, BAUDRATE );
        cfsetospeed( &Opt, BAUDRATE );
        status =  tcsetattr( fd ,TCSANOW, &Opt) ;
        if(status != 0)
        {
            perror("tcsetattr");
            fd = -1;
            //qDebug() << "fd 2: " << fd;
            return fd;
        } // end
        tcflush(fd, TCIOFLUSH);
    }
    return 0;
}

int SerialPort232::setDatabitsParityStopbits()
{
    struct termios options;
    if(fd)
    {
        if( tcgetattr( fd, &options ) != 0 )
        {
            perror("SetupSerial");
            fd = -1;
            //qDebug() << "fd 3: " << fd;
            return fd;
        } // end
    }

    options.c_cflag &= ~CSIZE;
    options.c_cflag |= DATABITS;
    switch( PARITYTYPE ){
        case PAR_NONE:
            options.c_cflag &= ~PARENB;
            options.c_iflag &= ~INPCK;
            break;
        case PAR_ODD:
            options.c_cflag |= (PARODD | PARENB);
            options.c_iflag |= INPCK;
            break;
        case PAR_EVEN:
            options.c_cflag |= PARENB;
            options.c_cflag &= PARODD;
            options.c_iflag |= INPCK;
            break;
        case PAR_SPACE:
            options.c_cflag &= ~PARENB;
            options.c_cflag &= ~INPCK;
            break;
        default:
            fprintf(stderr, "Unsupported parity\n");
            fd = -1;
            return fd;
    } // end
    switch( STOPBITS ) {
        case STOP_1:
              options.c_cflag &= ~CSTOPB;
              break;
        case STOP_2:
              options.c_cflag |= CSTOPB;
              break;
        default:
               fprintf(stderr, "Unsupported stopbits \n");
               fd = -1;
               return fd;
    } // end
    tcflush(fd, TCIFLUSH);

    //options.c_lflag &=  ~( ICANON | ECHO | ECHOE | ISIG );
    //options.c_oflag &= ~OPOST;
    options.c_lflag = 0;
    options.c_oflag = 0;
    options.c_iflag &= ~( ICRNL|IXON); // 20080705 zlb add for receiving 0x11,0x13,0x0d
    options.c_cc[VTIME] = 1;
    options.c_cc[VMIN] = 0;
    if(tcsetattr(fd, TCSANOW,&options) != 0)
    {
        perror("SetupSerial 4");
        fd = -1;
        return fd;
    } // end
    return( 0 );
}

void SerialPort232::setBaudRate( const quint32 baudRate )
{
    // set baudRate
    for( int i = 0; i < ( int )( sizeof( speed_arr ) / sizeof( int ) ); i++ )
        if( baudRate == name_arr[i] )
            BAUDRATE = speed_arr[i];
    init();
}

