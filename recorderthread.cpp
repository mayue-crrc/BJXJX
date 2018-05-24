#include "recorderthread.h"
//#include <QDebug>
RecorderThread::RecorderThread()
{
    delOldFilesFlag = false;
    lastSecond = -1;
}

RecorderThread::~RecorderThread()
{
    mutex.lock();
    abort = true;
    condition.wakeOne();
    mutex.unlock();
}

void RecorderThread::render()
{
    if( !isRunning() ) {
        start();
    }else{
        restart = true;
        condition.wakeOne();
    } //end
}

void RecorderThread::run()
{
    forever
    {
        if(!delOldFilesFlag)
        {
            delOldRecorder();
            delOldFilesFlag = true;
        }
        writeRecorder();
        msleep(200);
    } // end
    mutex.lock();
    if( !restart )
        condition.wait( &mutex );
    restart = false;
    mutex.unlock();
}

void RecorderThread::writeRecorder()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    if( lastSecond!=currentDateTime.time().second() )
    {
        lastSecond = currentDateTime.time().second();

        // check screen update function work
        if(screenUpdateCntBack != screenUpdateCnt)
        {
            screenUpdateCntBack = screenUpdateCnt;
        }
        else
        {
            emit restartScreenUptateSignal();
        }

        if ( !(MAIN_EMGCBRAKESTATE_BOOL) )
        {
            gearLevel = 8;
        }
        else if( !(MAIN_BRAKESTATE_BOOL) )
        {// brake
            if( MAIN_BRAKECODE1_BOOL && MAIN_BRAKECODE2_BOOL && MAIN_BRAKECODE3_BOOL ) // 111
            {
                gearLevel = 7;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL) && MAIN_BRAKECODE2_BOOL && MAIN_BRAKECODE3_BOOL ) // 011
            {
                gearLevel = 6;
            }
            else if ( MAIN_BRAKECODE1_BOOL && !(MAIN_BRAKECODE2_BOOL) && MAIN_BRAKECODE3_BOOL ) // 101
            {
                gearLevel = 5;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL ) && !(MAIN_BRAKECODE2_BOOL) && MAIN_BRAKECODE3_BOOL ) // 001
            {
                gearLevel = 4;
            }
            else if ( MAIN_BRAKECODE1_BOOL && MAIN_BRAKECODE2_BOOL && !(MAIN_BRAKECODE3_BOOL) ) // 110
            {
                gearLevel = 3;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL )&& MAIN_BRAKECODE2_BOOL && !(MAIN_BRAKECODE3_BOOL )) // 010
            {
                gearLevel = 2;
            }
            else if ( MAIN_BRAKECODE1_BOOL && !(MAIN_BRAKECODE2_BOOL) && !(MAIN_BRAKECODE3_BOOL )) // 100
            {
                gearLevel = 1;
            }
            else
            {
                gearLevel = 0;
            }
        }
        else if ( MAIN_TRACTIONSTATE_BOOL )
        {
            if ( MAIN_TRACTIONCODE1_BOOL && !(MAIN_TRACTIONCODE2_BOOL) && !(MAIN_TRACTIONCODE3_BOOL) && !(MAIN_TRACTIONCODE4_BOOL )) // 1000
            {
                gearLevel = 11;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && !(MAIN_TRACTIONCODE3_BOOL) && !(MAIN_TRACTIONCODE4_BOOL )) // 1100
            {
                gearLevel = 12;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && MAIN_TRACTIONCODE3_BOOL && !(MAIN_TRACTIONCODE4_BOOL )) // 1110
            {
                gearLevel = 13;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && MAIN_TRACTIONCODE3_BOOL && MAIN_TRACTIONCODE4_BOOL ) // 1111
            {
                gearLevel = 14;
            }
            else
            {
                gearLevel = 0;
            }
        }
        else
        {
            gearLevel = 0;
        }

        //create csvFile
        QString fileNameRunData = "./data/rundata" + currentDateTime.date().toString("yyyy_MM_dd") + ".csv";
        QFile csvFileRunData( fileNameRunData );
        if( !csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
        {
            return;
        }
        QTextStream inoutRunData( &csvFileRunData );
        inoutRunData.setCodec("GB2312");

        QString dateTimeStr = currentDateTime.toString("yyyy_MM_dd,HH:mm:ss");

        QString newLine = dateTimeStr;
        QString str;
        BYTE tmpByte;
        int lineDataLen = 20;
        quint32 lineData[lineDataLen];
        for(int i=0;i<lineDataLen;i++)
            lineData[i] = 0;

        // bool
        lineData[0] = receiveData[395]*256*256*256+receiveData[394]*256*256+receiveData[393]*256+receiveData[388];

        tmpByte = bitToByte( g_InLittleNopowerArea_Bool, 2 ) + bitToByte( g_InLargeNoPowerArea_Bool, 3 );
        lineData[1] = receiveData[406]*256*256*256+receiveData[405]*256*256+receiveData[404]*256+(receiveData[397]&0xF3);
        lineData[1] += (quint32)tmpByte;

        lineData[2] = receiveData[410]*256*256*256+receiveData[409]*256*256+receiveData[408]*256+receiveData[407];

        lineData[3] = receiveData[416]*256+receiveData[411];
        tmpByte = bitToByte( receiveData[0]&bit6, 0 ) + bitToByte( receiveData[1]&bit2, 1 ) +
                   bitToByte( receiveData[1]&bit3, 2 ) + bitToByte( receiveData[10]&bit2, 3 ) +
                   bitToByte( receiveData[12]&bit0, 4 ) + bitToByte( receiveData[12]&bit1, 5 ) +
                   bitToByte( receiveData[12]&bit2, 6 ) + bitToByte( receiveData[12]&bit3, 7 );
        lineData[3] += ( (quint32)tmpByte*256*256 );
        tmpByte = bitToByte( receiveData[12]&bit4, 0 ) + bitToByte( receiveData[12]&bit5, 1 ) +
                   bitToByte( receiveData[12]&bit6, 2 ) + bitToByte( receiveData[12]&bit7, 3 ) +
                   bitToByte( receiveData[13]&bit6, 4 ) + bitToByte( receiveData[13]&bit7, 5 ) +
                   bitToByte( receiveData[14]&bit0, 6 ) + bitToByte( receiveData[14]&bit1, 7 );
        lineData[3] += ( (quint32)tmpByte*256*256*256 );

        tmpByte = bitToByte( receiveData[40]&bit6, 0 ) + bitToByte( receiveData[41]&bit2, 1 ) +
                   bitToByte( receiveData[41]&bit3, 2 ) + bitToByte( receiveData[50]&bit2, 3 ) +
                   bitToByte( receiveData[52]&bit0, 4 ) + bitToByte( receiveData[52]&bit1, 5 ) +
                   bitToByte( receiveData[52]&bit2, 6 ) + bitToByte( receiveData[52]&bit3, 7 );
        lineData[4] = (quint32)tmpByte;
        tmpByte = bitToByte( receiveData[52]&bit4, 0 ) + bitToByte( receiveData[52]&bit5, 1 ) +
                   bitToByte( receiveData[52]&bit6, 2 ) + bitToByte( receiveData[52]&bit7, 3 ) +
                   bitToByte( receiveData[53]&bit6, 4 ) + bitToByte( receiveData[53]&bit7, 5 ) +
                   bitToByte( receiveData[54]&bit0, 6 ) + bitToByte( receiveData[54]&bit1, 7 );
        lineData[4] += ( (quint32)tmpByte*256 );
        tmpByte = bitToByte( receiveData[372]&bit1, 0 ) + bitToByte( receiveData[372]&bit3, 1 ) +
                   bitToByte( receiveData[372]&bit4, 2 ) + bitToByte( receiveData[372]&bit5, 3 ) +
                   bitToByte( receiveData[372]&bit6, 4 ) + bitToByte( receiveData[373]&bit1, 5 ) +
                   bitToByte( receiveData[380]&bit1, 6 ) + bitToByte( receiveData[380]&bit3, 7 );
        lineData[4] += ( (quint32)tmpByte*256*256 );
        tmpByte = bitToByte( receiveData[380]&bit4, 0 ) + bitToByte( receiveData[380]&bit5, 1 ) +
                   bitToByte( receiveData[380]&bit6, 2 ) + bitToByte( receiveData[381]&bit1, 3 ) +
                   bitToByte( receiveData[256]&bit1, 4 ) + bitToByte( receiveData[256]&bit2, 5 ) +
                   bitToByte( receiveData[276]&bit1, 6 ) + bitToByte( receiveData[276]&bit2, 7 );
        lineData[4] += ( (quint32)tmpByte*256*256*256 );

        lineData[5] = receiveData[95]*256*256*256+receiveData[94]*256*256+receiveData[87]*256+receiveData[86];

        lineData[6] = receiveData[111]*256*256*256+receiveData[110]*256*256+receiveData[100]*256+receiveData[96];
        tmpByte = bitToByte( receiveData[10]&bit1, 4 ) + bitToByte( receiveData[50]&bit1, 5 ); // 20140227 add
        lineData[6] += tmpByte; // 20140227 add

        lineData[7] = receiveData[124]*256*256*256+receiveData[120]*256*256+receiveData[119]*256+receiveData[118];

        lineData[8] = receiveData[143]*256*256*256+receiveData[142]*256*256+receiveData[135]*256+receiveData[134];

        lineData[9] = receiveData[159]*256*256*256+receiveData[158]*256*256+receiveData[148]*256+receiveData[144];

        lineData[10] = receiveData[172]*256*256*256+receiveData[168]*256*256+receiveData[167]*256+receiveData[166];

        // byte
        lineData[11] = receiveData[392]*256*256*256+receiveData[391]*256*256+receiveData[390]*256+receiveData[389];
        lineData[12] = gearLevel*256*256*256+receiveData[413]*256*256+receiveData[412]*256+receiveData[396];
        lineData[13] = receiveData[170]*256*256*256+receiveData[146]*256*256+receiveData[122]*256+receiveData[98];
        // word

        lineData[14] = receiveData[45]*256*256*256+receiveData[414]*256*256+receiveData[403]*256+receiveData[402];
        lineData[15] = receiveData[107]*256*256*256+receiveData[106]*256*256+receiveData[83]*256+receiveData[82];
        lineData[16] = receiveData[155]*256*256*256+receiveData[154]*256*256+receiveData[131]*256+receiveData[130];
        lineData[17] = receiveData[113]*256*256*256+receiveData[112]*256*256+receiveData[89]*256+receiveData[88];
        lineData[18] = receiveData[161]*256*256*256+receiveData[160]*256*256+receiveData[137]*256+receiveData[136];
        // dword
        lineData[19] = receiveData[401]*256*256*256+receiveData[400]*256*256+receiveData[399]*256+receiveData[398];

        for(int i=0;i<lineDataLen;i++)
        {
            str.clear();
            newLine += ",";
            newLine += str.setNum(lineData[i],16);
        }

        inoutRunData << newLine << "\n";

        inoutRunData.flush();//clear

        csvFileRunData.close();
    }
}
BYTE RecorderThread::bitToByte( bool bit, quint8 offset )
{
    BYTE result = 0;
    switch( offset )
    {
    case 0:
        result = BYTE(bit);
        break;
    case 1:
        result = BYTE(bit)*2;
        break;
    case 2:
        result = BYTE(bit)*4;
        break;
    case 3:
        result = BYTE(bit)*8;
        break;
    case 4:
        result = BYTE(bit)*16;
        break;
    case 5:
        result = BYTE(bit)*32;
        break;
    case 6:
        result = BYTE(bit)*64;
        break;
    case 7:
        result = BYTE(bit)*128;
        break;
    default:
        break;
    }
    return result;
}
void RecorderThread::delOldRecorder()
{
    QDir dir("./data");
    QStringList fileList;
    if(!dir.exists())
        return;

    dir.setFilter(QDir::Files);
    dir.setSorting(QDir::Name |QDir::Reversed);

    fileList = dir.entryList(QDir::NoDotAndDotDot | QDir::Files);

//    qDebug() << fileList.size();
    if(fileList.size()>7) // file number more than 7
    {
        for(int i=7; i<fileList.size(); i++)
        {
//            qDebug() << fileList.at(i);
            dir.remove(fileList.at(i));
        }
    }
//    qDebug() << "\n";
}
