#ifndef STORAGE_H
#define STORAGE_H
#include"Starter.h"


struct Storage
{
    public:
        unsigned long long int GetCurrentInfo();
};
class TimeStamp{
    private:
        char Time[80];
    public:
       char* GetTime();
        TimeStamp();
        };
struct Logger
{
    void Events(unsigned int);
    void Loginfo();
    void NoteUp(const char*);

};

#endif // STORAGE_H
