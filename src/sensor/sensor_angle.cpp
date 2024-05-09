#include "sensor_angle.h"
int Csensor_angle::my_init(void *p)
{
	this->name = "Csensor_angle";
	this->alias = "sensor_angle";
	return 0;
}

Csensor_angle::Csensor_angle()
{
	this->my_init();
}

Csensor_angle::~Csensor_angle()
{

}

#ifndef SENSOR_ANGLE_TEST
#define SENSOR_ANGLE_TEST 0//1
#endif

#if SENSOR_ANGLE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
