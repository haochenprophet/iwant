#include "sensor_time.h"
int Csensor_time::my_init(void *p)
{
	this->name = "Csensor_time";
	this->alias = "sensor_time";
	return 0;
}

Csensor_time::Csensor_time()
{
	this->my_init();
}

Csensor_time::~Csensor_time()
{

}

#ifndef SENSOR_TIME_TEST
#define SENSOR_TIME_TEST 0//1
#endif

#if SENSOR_TIME_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
