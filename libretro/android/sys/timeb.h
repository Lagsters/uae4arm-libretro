#pragma once
#include <sys/time.h>
#include <time.h>
struct timeb { time_t time; unsigned short millitm; short timezone; short dstflag; };
static inline int ftime(struct timeb *tp) { struct timeval tv; gettimeofday(&tv, 0); tp->time = tv.tv_sec; tp->millitm = tv.tv_usec / 1000; tp->timezone = 0; tp->dstflag = 0; return 0; }
