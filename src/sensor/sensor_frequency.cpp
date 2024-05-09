#include "sensor_frequency.h"
int Csensor_frequency::my_init(void *p)
{
	this->name = "Csensor_frequency";
	this->alias = "sensor_frequency";
	return 0;
}

Csensor_frequency::Csensor_frequency()
{
	this->my_init();
}

Csensor_frequency::~Csensor_frequency()
{

}

#ifndef SENSOR_FREQUENCY_TEST
#define SENSOR_FREQUENCY_TEST 0//1
#endif

#if SENSOR_FREQUENCY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
