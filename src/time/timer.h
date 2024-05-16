#ifndef TIMER_H
#define TIMER_H

#include "object/object.h"

namespace n_timer {
	class Ctimer :public Object
	{
	public:
		  clock_t clk;
		  time_t t;//time
	public:
		Ctimer();
		int func(void *p);
		clock_t t_clock();
		double  t_difftime (time_t end, time_t beginning);
		time_t  t_mktime (struct tm * timeptr);
		time_t  t_time (time_t* timer);
		char*   t_asctime (const struct tm * timeptr);
		char*   t_ctime(const time_t * timer);
		struct tm * t_gmtime (const time_t * timer);
		struct tm * t_localtime (const time_t * timer);
		size_t t_strftime (char* ptr, size_t maxsize, const char* format,const struct tm* timeptr );
	};

}
using namespace n_timer;

#endif
