#include <pthread.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <signal.h>
#include <semaphore.h>
#include <sys/time.h>

#include "ctimer.h"
TIMER_EVENT *ptimer_head = NULL;

CTimer::CTimer()
{
}

void* timer_task_thread(
                        __in void *args
                       )
{
    TIMER_EVENT *ptimer;

    ptimer = (TIMER_EVENT*)args;

    while(!ptimer->bRelease)
    {
      ptimer->timer_proc(ptimer->proc_arg);
      sleep(ptimer->timevalue/1000);
    }
    free(ptimer);
    pthread_exit((void*)NULL);
}

void CTimer::add_timer_tail(
                            __in TIMER_EVENT *newEvent
                           )
{
    TIMER_EVENT *ptemp;

    assert(newEvent != NULL);

    if (ptimer_head == NULL)
    {
        newEvent->prev=newEvent->next = NULL;
        ptimer_head = newEvent;
        return;
    }

    for(ptemp=ptimer_head; ptemp->next!=NULL; ptemp=ptemp->next);

    ptemp->next = newEvent;
    newEvent->prev = ptemp;
    newEvent->next = NULL;
}

void CTimer::del_timer(
                        __in TIMERID id
                      )
{
    TIMER_EVENT *ptemp;

    for(ptemp=ptimer_head; ptemp!=NULL; ptemp=ptemp->next)
    {
        if (ptemp->id == id)
        {
            /* Delete header */
            if (ptemp == ptimer_head)
            {
                if (ptemp->next != NULL)
                {
                    ptemp->next->prev = NULL;
                    ptemp->live = 0;
                    ptimer_head = ptemp->next;
                    ptemp->bRelease = true;
                    return;
                }
                else
                {
                    ptemp->live = 0;
                    ptimer_head = NULL;
                    ptemp->bRelease = true;
                    return;
                }
            }
            else if (ptemp->next == NULL)  /* delete tail */
            {
                ptemp->live = 0;
                ptemp->prev->next = NULL;
                ptemp->bRelease = true;
                return;
            }
            else /* normal */
            {
                ptemp->live = 0;
                ptemp->prev = ptemp->next;
                ptemp->bRelease = true;
                return;
            }
        }
    }
}

TIMERID CTimer::add_timer(
                          __in char *name,
                          __in long timevalue,
                          __in TIMERPROC timer_proc,
                          __in void* arg
                          )
{
    TIMER_EVENT *ptimer;
    pthread_t taskID;
    int ret;
    struct TIMER_EVENT *ptemp;
    int dirty;

    ptimer = (TIMER_EVENT *)malloc(sizeof(TIMER_EVENT));
    if (ptimer == NULL)
    {
        return (-1);
    }

    pthread_mutex_init(&ptimer->mutex, NULL);
    ptimer->bRelease = false;
    ptimer->live = 1;
    ptimer->timer_proc = timer_proc;
    ptimer->proc_arg = arg;
    ptimer->timevalue = timevalue;
    do
    {
        ptimer->id = rand();
        dirty = 0;
        for(ptemp=ptimer_head; ptemp != NULL; ptemp=ptemp->next)
        {
            if( ptemp->id == ptimer->id)
            {
               dirty = 1;
               break;
            }
        }
    } while(dirty == 1);

    if (name != NULL)
    {
       sprintf(ptimer->name, "%s", name);
    }
    else
    {
       sprintf(ptimer->name, "timer%d", ptimer->id);
    }

    ret = pthread_create(&taskID, 0, timer_task_thread, (void *)ptimer);
    if (ret < 0)
    {
        perror("pthread_create");
        free(ptimer);
        return (-1);
    }
    add_timer_tail(ptimer);

    return ptimer->id;
}
