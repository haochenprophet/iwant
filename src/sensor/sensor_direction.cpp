#include "sensor_direction.h"
int Csensor_direction::my_init(void *p)
{
	this->name = "Csensor_direction";
	this->alias = "sensor_direction";
	return 0;
}

Csensor_direction::Csensor_direction()
{
	this->my_init();
}

Csensor_direction::~Csensor_direction()
{

}

#ifndef SENSOR_DIRECTION_TEST
#define SENSOR_DIRECTION_TEST 0//1
#endif

#if SENSOR_DIRECTION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
