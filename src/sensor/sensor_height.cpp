#include "sensor_height.h"
int Csensor_height::my_init(void *p)
{
	this->name = "Csensor_height";
	this->alias = "sensor_height";
	return 0;
}

Csensor_height::Csensor_height()
{
	this->my_init();
}

Csensor_height::~Csensor_height()
{

}

#ifndef SENSOR_HEIGHT_TEST
#define SENSOR_HEIGHT_TEST 0//1
#endif

#if SENSOR_HEIGHT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
