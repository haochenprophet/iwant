#include "sensor_speed.h"
int Csensor_speed::my_init(void *p)
{
	this->name = "Csensor_speed";
	this->alias = "sensor_speed";
	return 0;
}

Csensor_speed::Csensor_speed()
{
	this->my_init();
}

Csensor_speed::~Csensor_speed()
{

}

#ifndef SENSOR_SPEED_TEST
#define SENSOR_SPEED_TEST 0//1
#endif

#if SENSOR_SPEED_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
