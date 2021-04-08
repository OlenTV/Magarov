#include "MyLogTest.h"

MyLogTest::MyLogTest()
{
	try
	{
        //THIS CODE RETURN LAST LOG FILE
        //https://www.cyberforum.ru/cpp-beginners/thread1434510.html
        WIN32_FIND_DATAA findData;
        HANDLE hf;
        hf = FindFirstFileA("Log\\*", &findData);
        while (FindNextFileA(hf, &findData));
        string LastLogFile = findData.cFileName;
        FindClose(hf);
        //END_TAKEN_CODE --- MODIFIED

        //log function test
        ifstream LastLog;
        LastLog.open("Log\\" + LastLogFile);
        string LastStr; string sss;
        mylog.log("TEST_MESSAGE");
        while (getline(LastLog, LastStr))
        {
            if (LastStr != "")
            {
                sss = LastStr;
            }
        }
        if (sss != "TEST_MESSAGE")
        {
            mylog.log("LOG_ERROR_NOT_EQUAL_CURRENT_OTPUT_IS " + sss);
        }
        LastLog.close();
	}
	catch (const exception&)
	{
        mylog.log("LOG_TEST_ERROR_EXCEPTION");
	}
}