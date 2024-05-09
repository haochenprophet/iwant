#include "sensor_scanning.h"
int Csensor_scanning::my_init(void *p)
{
	this->name = "Csensor_scanning";
	this->alias = "sensor_scanning";
	return 0;
}

Csensor_scanning::Csensor_scanning()
{
	this->my_init();
}

Csensor_scanning::~Csensor_scanning()
{

}

#ifndef SENSOR_SCANNING_TEST
#define SENSOR_SCANNING_TEST 0//1
#endif

#if SENSOR_SCANNING_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
