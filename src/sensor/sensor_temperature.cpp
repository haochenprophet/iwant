#include "sensor_temperature.h"
int Csensor_temperature::my_init(void *p)
{
	this->name = "Csensor_temperature";
	this->alias = "sensor_temperature";
	return 0;
}

Csensor_temperature::Csensor_temperature()
{
	this->my_init();
}

Csensor_temperature::~Csensor_temperature()
{

}

#ifndef SENSOR_TEMPERATURE_TEST
#define SENSOR_TEMPERATURE_TEST 0//1
#endif

#if SENSOR_TEMPERATURE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
