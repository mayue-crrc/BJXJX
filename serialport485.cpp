#include "serialport485.h"
#include <QDebug>
const int speed_arr[] = { B50, B75, B110, B134, B150, B200, B300, B600, B1200, B1800, B2400, B4800, B9600, B19200, B38400,
			  B57600, B115200, B230400, B460800, B500000, B576000, B921600, B1000000, 
			  B1152000, B1500000, B2000000, B2500000, B3000000, B3500000, B4000000 };
const quint32 name_arr[] = { 50, 75, 110, 134, 150, 200, 300, 600, 1200, 1800, 2400, 4800, 9600, 19200, 38400,
			  57600, 115200, 230400, 460800, 500000, 576000, 921600, 1000000,  //aa
			  1152000, 1500000, 2000000, 2500000, 3000000, 3500000, 4000000 }; //end

SerialPort485::SerialPort485()
{
    // set baudRate
    BAUDRATE = B9600;
    // set COM port
    MODEMDEVICE = "/dev/ttyS3";
    // set databits
    DATABITS = CS8;
    // parity check
    PARITYTYPE = PAR_NONE;
    // StopBits
    STOPBITS = STOP_1;
    init();
}
SerialPort485::SerialPort485( const quint32 baudRate )
{
    // set baudRate
    for( int i = 0; i < ( int )( sizeof( speed_arr ) / sizeof( int ) ); i++ ) 
        if( baudRate == name_arr[i] ) 
            BAUDRATE = speed_arr[i];
    // set COM port
    MODEMDEVICE = "/dev/ttyS3";
    // set databits
    DATABITS = CS8;
    // parity check
    PARITYTYPE = PAR_NONE;
    // StopBits
    STOPBITS = STOP_1;
  
    init();
}
SerialPort485::SerialPort485( const quint32 baudRate, 
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

SerialPort485::SerialPort485( const quint32 baudRate,
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
SerialPort485::~SerialPort485()
{
    Close();
}
void SerialPort485::init()
{
    Open();
}

// remove serinfo process 
int SerialPort485::Open()
{
    struct termios newtio;
   
    if( ( fd = open( MODEMDEVICE, O_RDWR | O_NOCTTY ) ) < 0 )
    {
        exit(1);
    } //end
    // port setup
    tcsetup485( fd, BAUDRATE, &newtio );
//    WriteLog("\nSerialPort485::Open() fd: ");
//    WriteIntLog( fd );
    return(fd);
}

int SerialPort485::Read( uchar *readData )
{
    int nread = 0;
    if( fd != -1 )
    {
        nread = read( fd, readData, MAXDATASIZE );
    } // end

    return nread;
}
int SerialPort485::Write( uchar *writeData, int len )
{
    //WriteLog("\nSerialPort485::Write in");
    int result = 0;
    if( len > 0 ){
        if( fd != -1 )
        {
            ioctl( fd, TIOCMGET, &status );
            status |= TIOCM_RTS;
            if( ioctl( fd, TIOCMSET, &status ) < 0 )
            {
                printf( "error when set RTS signal\n" );
                exit( 1 );
            } // end if
            usleep(500);
//            WriteLog("\nsetReadOrWrite Write: ");
//            WriteIntLog( status );

            result = write( fd, writeData, len );
            usleep(4000);
//            WriteLog("\nWrite data: ");
//            WriteIntLog( result );

            ioctl( fd, TIOCMGET, &status );
            status &= ~TIOCM_RTS;
            if( ioctl( fd, TIOCMSET, &status ) < 0 )
            {
                printf( "error when clear RTS signal\n" );
                exit( 1 );
            } // end if
            usleep(500);
//            WriteLog("\nsetReadOrWrite Read: ");
//            WriteIntLog( status );
//            usleep( 2000 );
        } //end
    } // end

    return result;
}
int SerialPort485::tcsetup485( int fd, int baudrate, struct termios* tio )
{
    struct termios cmptio;

    // zero struct and set prefs
    bzero( tio, sizeof( *tio ) );
    // 20090330 add begin________
    // Bit mask for data bits
    tio->c_cflag &= ~CSIZE;
    // parity check
    switch( PARITYTYPE ){
    case PAR_NONE:
    case PAR_MARK:    //WINDOWS ONLY
    case PAR_SPACE:
        tio->c_cflag &= ~PARENB;
        break;
    case PAR_ODD:
        tio->c_cflag |= PARENB;
        tio->c_cflag |= PARODD;
        break;
    case PAR_EVEN:
        tio->c_cflag |= PARENB;
        tio->c_cflag &= ~PARODD;
        break;
    } //end
    // set stopBits
    switch( STOPBITS ){
    case STOP_1:
    case STOP_1_5:    //WINDOWS ONLY
        tio->c_cflag &= ~CSTOPB;
        break;
    case STOP_2:
        tio->c_cflag |= CSTOPB;
        break;
    } //end
       
    // 20090330 add end_________
    // terminal hardware control (c_cflag)
    // DATABITS ( default=CS8 )	-	Specify character size to 8bit
    // CLOCAL - 	Ignore modem control lines
    // CREAD -	Enable receiver
    tio->c_cflag = baudrate | DATABITS | CLOCAL | CREAD | CRTSCTS;
    // !CRTSCTS - 	Do not enable hardware flow control using RTS and CTS
    //tio->c_cflag &= ~CRTSCTS;
    // basic terminal input control (c_iflag)
    // !IGNBRK -	Do not ignore the break condition
    // !IGNCR - 	Do not ignore CR chars
    // !INLCR -	Do not map NL to CR
    // !ICRNL -	Do not map CR to NL
    // !IUCLC - 	Do not map uppercase chars to lowercase
    // !IXANY -	Do not enable any input char to restart suspended output
    // !IXON -	Do not enable start and stop output control by START STOP chars
    // !IXOFF -	Do not enable start and stop input control by START STOP chars
    // !INPCK -	Do not enable input parity checking
    // !ISTRIP - 	Do not strip 8bit chars to 7bit
    // !PARMRK -	Do not prefix chars with a parity error or framing errors
    tio->c_iflag &= ~( IGNBRK | IGNCR | INLCR | ICRNL | IUCLC |
                    IXANY | IXON | IXOFF | INPCK | ISTRIP | PARMRK );
    // BRKINT -	Enable interrupt signal on break condition
    // IGNPAR -	Ignore parity errors and other framing errors
    tio->c_iflag |= ( BRKINT | IGNPAR );

    // system output treatment (c_oflag)
    // !OPOST -	Do not enable post processing of chars
    tio->c_oflag &= ~OPOST;

    // various terminal functions (c_lflag)
    // !XCASE -	Do not enable canonical uppercase and lowercase presentation
    // !ECHONL -	Do not enable line clear on NL. Prevent terminal to hang up on EOF
    // !NOFLSH -	Do not disable queue flushing
    tio->c_lflag &= ~( XCASE | ECHONL | NOFLSH );
    // !ICANON - 	Do not enable canonical input
    // !ISIG - 	Do not enable signals (Do not check against special control chars)
    tio->c_lflag &= ~( ICANON | ISIG | ECHO );

    // control characters (c_cc)
    // VTIME=0 and VMIN=1 block read for at least one char
    tio->c_cc[VTIME] = 0;
    tio->c_cc[VMIN] = 1;

    // flush all data that is received but not read
    if( tcflush( fd, TCIOFLUSH ) == -1 ){
        perror("tcflush()");
        printf("Maybe the device is not available?\n");
        exit(1);
   } //end
   // immediately set attributes
   if( tcsetattr( fd, TCSAFLUSH, tio ) == -1 ){      
       perror( "tcsetattr()" );
       printf( "Maybe the device is not available?\n" );
       exit( 1 );
    } //end
    // reget and compare attributes
    // return 0 when attributes are OK
    if( tcgetattr( fd, &cmptio ) == -1 ){
        perror( "tcgetattr()" );
        printf( "Maybe the device is not available?\n" );
        exit( 1 );
    } //end
    return( !memcmp( tio, &cmptio, sizeof( *tio ) ) );    
}

void SerialPort485::Close()
{
    tcflush(fd, TCIFLUSH); /* flush the buffer */
    close(fd);
}
bool SerialPort485::isOpen()
{
    if( fd ) return true;
    else return false;
}
void SerialPort485::outPortFlush()
{
    tcflush(fd, TCOFLUSH);
}

void SerialPort485::inPortFlush()
{
    tcflush(fd, TCIFLUSH);
}
void SerialPort485::setBaudRate( const quint32 baudRate )
{
    // set baudRate
    for( int i = 0; i < ( int )( sizeof( speed_arr ) / sizeof( int ) ); i++ ) 
        if( baudRate == name_arr[i] ) 
            BAUDRATE = speed_arr[i];
    init();
}
void SerialPort485::WriteIntLog(const int num)
{
    FILE *logfd;
    logfd = fopen( "./log.txt","a+");

    fprintf(logfd, "%d", num);
    fclose(logfd);
}
void SerialPort485::WriteLog( const char *str )
{
    int logfd = open( "./log.txt",O_RDWR|O_CREAT|O_APPEND, 0666 );
    write( logfd,str,strlen(str) );
    close(logfd);
}
