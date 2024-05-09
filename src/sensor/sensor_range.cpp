#include "sensor_range.h"
int Csensor_range::my_init(void *p)
{
	this->name = "Csensor_range";
	this->alias = "sensor_range";
	return 0;
}

Csensor_range::Csensor_range()
{
	this->my_init();
}

Csensor_range::~Csensor_range()
{

}

#ifndef SENSOR_RANGE_TEST
#define SENSOR_RANGE_TEST 0//1
#endif

#if SENSOR_RANGE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
