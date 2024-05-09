#include "sensor_amplitude.h"
int Csensor_amplitude::my_init(void *p)
{
	this->name = "Csensor_amplitude";
	this->alias = "sensor_amplitude";
	return 0;
}

Csensor_amplitude::Csensor_amplitude()
{
	this->my_init();
}

Csensor_amplitude::~Csensor_amplitude()
{

}

#ifndef SENSOR_AMPLITUDE_TEST
#define SENSOR_AMPLITUDE_TEST 0//1
#endif

#if SENSOR_AMPLITUDE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
