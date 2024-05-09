#include "sensor_oxygen.h"
int Csensor_oxygen::my_init(void *p)
{
	this->name = "Csensor_oxygen";
	this->alias = "sensor_oxygen";
	return 0;
}

Csensor_oxygen::Csensor_oxygen()
{
	this->my_init();
}

Csensor_oxygen::~Csensor_oxygen()
{

}

#ifndef SENSOR_OXYGEN_TEST
#define SENSOR_OXYGEN_TEST 0//1
#endif

#if SENSOR_OXYGEN_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
