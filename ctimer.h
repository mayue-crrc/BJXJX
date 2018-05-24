#ifndef CTIMER_H
#define CTIMER_H

#include "cglobal.h"

typedef int TIMERID;
typedef void (*TIMERPROC)(void *args);
struct TIMER_EVENT
{
    struct TIMER_EVENT *prev, *next;
    TIMERID id;
    char name[32];
    int live;
    pthread_mutex_t mutex;
    bool bRelease;
    long timevalue;
    TIMERPROC timer_proc;
    void* proc_arg;
};

class CTimer
{
public:
    CTimer();

public:
    /* Add a timer with name, timevalue(uSeconds) and handler */
    TIMERID add_timer(char *name, long timevalue, TIMERPROC timer_proc, void* arg);
    /* Delete a timer with id */
    void del_timer(TIMERID id);
private:
    void add_timer_tail(TIMER_EVENT *newEvent);
};

#endif // CTIMER_H
