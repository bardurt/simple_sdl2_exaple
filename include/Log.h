#ifndef LOG_H
#define LOG_H
#include<string>

class Log
{
    public:
        static Log* instance();
        void destroy();
        void info(std::string origin, std::string message);
        void error(std::string origin, std::string message);


    protected:

    private:
         Log();
        ~Log();
        static Log * logInstance;
};

#endif // LOG_H
