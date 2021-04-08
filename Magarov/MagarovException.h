#pragma once
#include <exception>

using namespace std;

namespace Magarov
{
    class MagarovException : public runtime_error
    {
    public:
        MagarovException(const string& _Message) :runtime_error(_Message)
        {
            msg = _Message;
            mylog.log(msg);
        };
        const string getText()
        {
            return msg + "\n\r";
        };
    private:
        string msg;
    };
}