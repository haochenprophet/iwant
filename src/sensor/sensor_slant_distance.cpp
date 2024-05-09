#include "sensor_slant_distance.h"
int Csensor_slant_distance::my_init(void *p)
{
	this->name = "Csensor_slant_distance";
	this->alias = "sensor_slant_distance";
	return 0;
}

Csensor_slant_distance::Csensor_slant_distance()
{
	this->my_init();
}

Csensor_slant_distance::~Csensor_slant_distance()
{

}

#ifndef SENSOR_SLANT_DISTANCE_TEST
#define SENSOR_SLANT_DISTANCE_TEST 0//1
#endif

#if SENSOR_SLANT_DISTANCE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
