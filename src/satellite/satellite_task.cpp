#include "satellite_task.h"
int Csatellite_task::my_init(void *p)
{
	this->name = "Csatellite_task";
	this->alias = "satellite_task";
	return 0;
}

Csatellite_task::Csatellite_task()
{
	this->my_init();
}

Csatellite_task::~Csatellite_task()
{

}

#ifndef SATELLITE_TASK_TEST
#define SATELLITE_TASK_TEST 0//1
#endif

#if SATELLITE_TASK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
