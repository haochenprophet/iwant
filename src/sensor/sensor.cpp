#include "sensor.h"
int Csensor::my_init(void *p)
{
	this->name = "Csensor";
	this->alias = "sensor";
	return 0;
}

Csensor::Csensor()
{
	this->my_init();
}

Csensor::~Csensor()
{

}

#ifndef SENSOR_TEST
#define SENSOR_TEST 0//1
#endif

#if SENSOR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
