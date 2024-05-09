#include "sensor_calculate.h"
int Csensor_calculate::my_init(void *p)
{
	this->name = "Csensor_calculate";
	this->alias = "sensor_calculate";
	return 0;
}

Csensor_calculate::Csensor_calculate()
{
	this->my_init();
}

Csensor_calculate::~Csensor_calculate()
{

}

#ifndef SENSOR_CALCULATE_TEST
#define SENSOR_CALCULATE_TEST 0//1
#endif

#if SENSOR_CALCULATE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
