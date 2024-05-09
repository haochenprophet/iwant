#include "sensor_timeline.h"
int Csensor_timeline::my_init(void *p)
{
	this->name = "Csensor_timeline";
	this->alias = "sensor_timeline";
	return 0;
}

Csensor_timeline::Csensor_timeline()
{
	this->my_init();
}

Csensor_timeline::~Csensor_timeline()
{

}

#ifndef SENSOR_TIMELINE_TEST
#define SENSOR_TIMELINE_TEST 0//1
#endif

#if SENSOR_TIMELINE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
