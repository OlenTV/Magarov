#include "MyLog.h"

namespace Magarov
{
    MyLog::MyLog()
    {
        mkdir(".\\Log");
        path = ".\\Log\\";

        SYSTEMTIME ctime;
        GetLocalTime(&ctime);

        path.append(to_string(ctime.wYear) + "-");
        path.append(to_string(ctime.wMonth) + "-");
        path.append(to_string(ctime.wDay) + "_");
        path.append(to_string(ctime.wHour) + "-");
        path.append(to_string(ctime.wMinute) + "-");
        path.append(to_string(ctime.wSecond) + "-");
        path.append(to_string(ctime.wMilliseconds));

        path.append(".txt");

    }

    void MyLog::log(string str)
    {
        getInstance().logs.push_back(str);

        ofstream logfile;
        logfile.open(path, fstream::app);
        logfile << str << endl;
        logfile.close();
    }

    void MyLog::write()
    {
        for (int idx = 0; idx < logs.size(); idx++)
        {
            cout << logs[idx] << "\n\r";
        }
    }

    void MyLog::clear()
    {
        logs.clear();
    }
}