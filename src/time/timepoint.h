#ifndef TIMEPOINT_H
#define TIMEPOINT_H

#include "object/object.h"

namespace n_timepoint {

	//time scale enum
	enum class Etime_scale
	{
		clock,//cpu time init
		second,
		decisecond,//ds 10^-1 second 
		centisecond,//cs 10^-2 second 
		millisecond,//ms 10^-3 second
		microsecond,//us 10^-6 second
		nanosecond,//ns 10^-9 second
		picosecond,//ps 10^-12 second
		femtosecond,//fs 10^-15 second
		attosecond,//as 10^-18 second
		zeptosecond,//zs 10^-21 second
		yoctosecond,//ys 10^-24 second
		plancktime,//pt 10^-43 second, Planck time
		minute,//min 60 second
		twelve_min,//five 5 minute
		ten_min,//10 min
		quarter,//quarter 15 min  
		twenty_min,//20 min
		halfy_hour,//30min Half an hour
		three_quarter,//45 min
		hour,//h 3600 second 60 min
		twelfth_day,//2 hour twelfth points of the day
		eighth_day,//3 hour,An eighth of a day
		quarter_day,//6 hour
		half_day,//12hour
		day,// 24 hour
		hou_day,//ºò:1 HOU = 5 day
		xun_day,//Ñ®:1 XUN = 10 day
		solar_terms_day,//½ÚÆø:1 solar terms = 3 HOU =15 day
		week,//7 day
		month,//30 day
		quarter_year,
		eclipse_year,
		tropical_year,//Tropical year
		sidereal_year,//Sidereal year
		besselian_year,//Besselian year
		year,
		decade,//ten year
		century,//Century 10^2 year
		millennium,// 10^3 years
		galactic_year,//Between 225 million and 250 million Earth years.
	};

	//time orientation : 0:zero => 1:start  => 2:past =>  3:origin =>  4:now =>  5:future
	enum class Etime_orientation //E:enum
	{
		zero = 0, //Absolute zero time or Universe zero time
		start, //Start of time of Object
		past,//Past time point
		origin,//The origin of the timeline
		now,//Current point in time
		future,//Future time point
	};

	class TimePoint //time point data class 
	{
	public:
		time_t  timer;//from 1970-01-01 00:00:00 seconds time 
		clock_t clock_start, clock_end, clock_now;// clock start to now for calibrate the time used by the CPU to execute code
		Etime_orientation status;//Use time direction as time point status
		Etime_scale time_scale;//default second
		std::list<void*> object_list; //Multiple objects/things at this point in time
	public:
		TimePoint();
		~TimePoint();
		void add(void* object);//add object to object_list
		void now();//get and set this->timer, clock_start, clock_end, clock_now
		Etime_orientation adjust_status(time_t now_timer, clock_t now_clk);
		Etime_orientation adjust_status(TimePoint * tp_now);
	};
	//Time point Object class 
	class Ctimepoint :public Object
	{
	public:
		Ctimepoint();
		~Ctimepoint();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ctimepoint); }
	};
}

using namespace n_timepoint;

#endif
