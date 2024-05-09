#include "sensor_basic_point.h"
int Csensor_basic_point::my_init(void *p)
{
	this->name = "Csensor_basic_point";
	this->alias = "sensor_basic_point";
	return 0;
}

Csensor_basic_point::Csensor_basic_point()
{
	this->my_init();
}

Csensor_basic_point::~Csensor_basic_point()
{

}

#ifndef SENSOR_BASIC_POINT_TEST
#define SENSOR_BASIC_POINT_TEST 0//1
#endif

#if SENSOR_BASIC_POINT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
