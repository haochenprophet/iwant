#include "sensor_depth.h"
int Csensor_depth::my_init(void *p)
{
	this->name = "Csensor_depth";
	this->alias = "sensor_depth";
	return 0;
}

Csensor_depth::Csensor_depth()
{
	this->my_init();
}

Csensor_depth::~Csensor_depth()
{

}

#ifndef SENSOR_DEPTH_TEST
#define SENSOR_DEPTH_TEST 0//1
#endif

#if SENSOR_DEPTH_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
