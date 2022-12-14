#include "timeline.h"

int Ctimeline::my_init(void *p)
{
	this->name = "Ctimeline";
	this->alias = "timeline";
	return 0;
}

Ctimeline::Ctimeline()
{
	this->my_init();
}

Ctimeline::~Ctimeline()
{
	this->time_point_list.clear();
}

void Ctimeline::add(TimePoint* tp)
{
	this->time_point_list.push_back(tp);
}

void Ctimeline::adjust_status(TimePoint* tp_now)
{
	for (auto it = this->time_point_list.cbegin(); it != this->time_point_list.cend(); ++it)
	{
		(TimePoint*)(*it)->adjust_status(tp_now);
	}
}

#ifndef TIMELINE_TEST
#define TIMELINE_TEST 0//1
#endif

#if TIMELINE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
