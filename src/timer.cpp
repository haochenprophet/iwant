#include "timer.h"

Ctimer::Ctimer()
{
	this->name = "Ctimer";
	this->alias = "timer";
	this->add_ex_func("time", time_cmd);
}

clock_t Ctimer::t_clock()
{
	return clock();
}

double Ctimer::t_difftime (time_t end, time_t beginning)
{
	return difftime (end,beginning);
}

time_t Ctimer::t_mktime (struct tm * timeptr)
{
	return mktime (timeptr);
}

time_t Ctimer::t_time (time_t* timer)
{
	return time (timer);
}

char* Ctimer::t_asctime (const struct tm * timeptr)
{
	return asctime(timeptr);
}

char* Ctimer::t_ctime(const time_t * timer)
{
	return ctime(timer);
}

struct tm * Ctimer::t_gmtime (const time_t * timer)
{
	return gmtime(timer);
}

struct tm * Ctimer::t_localtime (const time_t * timer)
{
	return localtime(timer);
}

size_t Ctimer::t_strftime (char* ptr, size_t maxsize, const char* format,const struct tm* timeptr )
{
	return strftime (ptr,maxsize,format,timeptr);
}
