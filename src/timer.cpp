#include "timer.h"

Ctimer::Ctimer()
{
	this->name = "Ctimer";
	this->alias = "timer";
	this->add_ex_func("time", time_cmd);
	time (&this->t);
	this->clk=clock();
}

int Ctimer::func(void *p)
{
	return time_cmd(p);
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

#ifndef TIMER_TEST
#define TIMER_TEST 0//1
#endif

#if TIMER_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "TIMER_TEST\n\n";

	Ctimer t;
	//test time cmd
	t.execute((Object *)&t,t.name,(char *)"time",(char *)"%T");//test ok
	t.execute((Object *)&t,t.name,(char *)"time");//test ok
	t.execute((char *)"time",(void *)"%T");//test ok
	t.execute((char *)"time");//test ok
	t.execute((void *)"%T");//test ok

	return 0;
}
#endif 