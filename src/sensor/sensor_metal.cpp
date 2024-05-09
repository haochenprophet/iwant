#include "sensor_metal.h"
int Csensor_metal::my_init(void *p)
{
	this->name = "Csensor_metal";
	this->alias = "sensor_metal";
	return 0;
}

Csensor_metal::Csensor_metal()
{
	this->my_init();
}

Csensor_metal::~Csensor_metal()
{

}

#ifndef SENSOR_METAL_TEST
#define SENSOR_METAL_TEST 0//1
#endif

#if SENSOR_METAL_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
