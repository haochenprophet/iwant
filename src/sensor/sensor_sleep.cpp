#include "sensor_sleep.h"
int Csensor_sleep::my_init(void *p)
{
	this->name = "Csensor_sleep";
	this->alias = "sensor_sleep";
	return 0;
}

Csensor_sleep::Csensor_sleep()
{
	this->my_init();
}

Csensor_sleep::~Csensor_sleep()
{

}

#ifndef SENSOR_SLEEP_TEST
#define SENSOR_SLEEP_TEST 0//1
#endif

#if SENSOR_SLEEP_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
