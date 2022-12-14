#include "timepoint.h"
#include <time.h> //Use the standard C time library
TimePoint::TimePoint()
{
	this->timer = 0;
	this->clock_start = 0;
	this->clock_now = 0;
	this->clock_end = 0;
	this->status = Etime_orientation::zero;
	this->time_scale = Etime_scale::second;
}

TimePoint::~TimePoint()
{
	this->object_list.clear();
}

void TimePoint::add(void* object)//add object to object_list
{
	this->object_list.push_back(object);
}

//get and set this->timer, clock_start, clock_end, clock_now
void TimePoint::now()
{
	this->clock_start = clock();//Record the start cpu clocks
	this->timer = time(nullptr);
	this->clock_end = clock();//Record the end cpu clocks
	//set clock now
	this->clock_now = clock();
}

Etime_orientation TimePoint::adjust_status(time_t now_timer, clock_t now_clk)
{
	if (now_timer > this->timer)
	{
		this->status = Etime_orientation::past;
		return Etime_orientation::past;
	}

	if (now_timer < this->timer)
	{
		this->status = Etime_orientation::future;
		return Etime_orientation::future;
	}
	//if (now_timer == this->timer)
	if (now_clk > this->clock_now)
	{
		this->status = Etime_orientation::past;
		return Etime_orientation::past;
	}

	if (now_clk < this->clock_now)
	{
		this->status = Etime_orientation::future;
		return Etime_orientation::future;
	}

	//if ( (now_clk == this->clock_now) && (now_timer == this->timer) )
	if (this->timer == 0)//check zero
	{
		this->status = Etime_orientation::zero;
		return Etime_orientation::zero;
	}
	// now == current  
	this->status = Etime_orientation::now;
	return Etime_orientation::now;
}

Etime_orientation TimePoint::adjust_status(TimePoint* tp_now)
{
	return this->adjust_status(tp_now->timer, tp_now->clock_now);
}

int Ctimepoint::my_init(void *p)
{
	this->name = "Ctimepoint";
	this->alias = "timepoint";
	return 0;
}

Ctimepoint::Ctimepoint()
{
	this->my_init();
}

Ctimepoint::~Ctimepoint()
{

}

#ifndef TIMEPOINT_TEST
#define TIMEPOINT_TEST 0//1
#endif

#if TIMEPOINT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
