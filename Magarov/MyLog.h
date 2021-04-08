#pragma once
#include <fstream>
#include <direct.h>
#include <Windows.h>

#include "../core/logAbstract.cpp"
#include "../core/logInterface.cpp"

using namespace Core;

namespace Magarov
{
    class MyLog : protected logInterface, protected logAbstract<MyLog>
    {
    public:
        virtual void log(string str);
        virtual void write();
        virtual void clear();
        static MyLog& getInstance()
        {
            static MyLog qq;
            return qq;
        }
    private:
        MyLog();
        string path;
    };

#define mylog MyLog::getInstance()
}