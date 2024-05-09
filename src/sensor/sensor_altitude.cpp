#include "sensor_altitude.h"
int Csensor_altitude::my_init(void *p)
{
	this->name = "Csensor_altitude";
	this->alias = "sensor_altitude";
	return 0;
}

Csensor_altitude::Csensor_altitude()
{
	this->my_init();
}

Csensor_altitude::~Csensor_altitude()
{

}

#ifndef SENSOR_ALTITUDE_TEST
#define SENSOR_ALTITUDE_TEST 0//1
#endif

#if SENSOR_ALTITUDE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
