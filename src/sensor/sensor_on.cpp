#include "sensor_on.h"
int Csensor_on::my_init(void *p)
{
	this->name = "Csensor_on";
	this->alias = "sensor_on";
	return 0;
}

Csensor_on::Csensor_on()
{
	this->my_init();
}

Csensor_on::~Csensor_on()
{

}

#ifndef SENSOR_ON_TEST
#define SENSOR_ON_TEST 0//1
#endif

#if SENSOR_ON_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
