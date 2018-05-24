#include <qdatetime.h>

#include "clog.h"
#include "cglobal.h"

CLog::CLog()
{
    m_fs.open("CNR_log.txt",ios_base::out);
}

CLog::~CLog()
{
    m_fs.close();
}

bool CLog::WriteLog(QString logstr)
{
#ifdef DEBUG_MODE
    QDate date = QDate::currentDate();

    logstr = QString::number(date.year()) + "-"+
              QString::number(date.month())+ "-"+
              QString::number(date.day()) + "   " + logstr + "\n";

    m_fs.write(logstr.toStdString().c_str(), logstr.length());
    m_fs.flush();
#endif
    return true;
}
