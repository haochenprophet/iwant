#include "schedule.h"
int Cschedule::my_init(void *p)
{
	this->name = "Cschedule";
	this->alias = "schedule";
	return 0;
}

Cschedule::Cschedule()
{
	this->my_init();
}
