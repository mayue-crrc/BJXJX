#ifndef CLOG_H
#define CLOG_H

#include <qstring.h>
#include <fstream>
#include <string>

using namespace std;

class CLog
{
public:
    CLog();
    ~CLog();

    bool WriteLog(QString logstr);

private:
    fstream m_fs;
    string m_str;
};

#endif // CLOG_H
