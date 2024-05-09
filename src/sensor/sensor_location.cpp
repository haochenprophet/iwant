#include "sensor_location.h"
int Csensor_location::my_init(void *p)
{
	this->name = "Csensor_location";
	this->alias = "sensor_location";
	return 0;
}

Csensor_location::Csensor_location()
{
	this->my_init();
}

Csensor_location::~Csensor_location()
{

}

#ifndef SENSOR_LOCATION_TEST
#define SENSOR_LOCATION_TEST 0//1
#endif

#if SENSOR_LOCATION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
