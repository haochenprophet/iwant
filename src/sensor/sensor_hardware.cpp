#include "sensor_hardware.h"
int Csensor_hardware::my_init(void *p)
{
	this->name = "Csensor_hardware";
	this->alias = "sensor_hardware";
	return 0;
}

Csensor_hardware::Csensor_hardware()
{
	this->my_init();
}

Csensor_hardware::~Csensor_hardware()
{

}

#ifndef SENSOR_HARDWARE_TEST
#define SENSOR_HARDWARE_TEST 0//1
#endif

#if SENSOR_HARDWARE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
