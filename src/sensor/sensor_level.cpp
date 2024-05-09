#include "sensor_level.h"
int Csensor_level::my_init(void *p)
{
	this->name = "Csensor_level";
	this->alias = "sensor_level";
	return 0;
}

Csensor_level::Csensor_level()
{
	this->my_init();
}

Csensor_level::~Csensor_level()
{

}

#ifndef SENSOR_LEVEL_TEST
#define SENSOR_LEVEL_TEST 0//1
#endif

#if SENSOR_LEVEL_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
