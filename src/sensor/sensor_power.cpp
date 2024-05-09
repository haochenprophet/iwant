#include "sensor_power.h"
int Csensor_power::my_init(void *p)
{
	this->name = "Csensor_power";
	this->alias = "sensor_power";
	return 0;
}

Csensor_power::Csensor_power()
{
	this->my_init();
}

Csensor_power::~Csensor_power()
{

}

#ifndef SENSOR_POWER_TEST
#define SENSOR_POWER_TEST 0//1
#endif

#if SENSOR_POWER_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
