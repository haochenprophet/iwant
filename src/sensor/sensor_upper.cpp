#include "sensor_upper.h"
int Csensor_upper::my_init(void *p)
{
	this->name = "Csensor_upper";
	this->alias = "sensor_upper";
	return 0;
}

Csensor_upper::Csensor_upper()
{
	this->my_init();
}

Csensor_upper::~Csensor_upper()
{

}

#ifndef SENSOR_UPPER_TEST
#define SENSOR_UPPER_TEST 0//1
#endif

#if SENSOR_UPPER_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
