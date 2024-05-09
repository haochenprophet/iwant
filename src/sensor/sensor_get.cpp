#include "sensor_get.h"
int Csensor_get::my_init(void *p)
{
	this->name = "Csensor_get";
	this->alias = "sensor_get";
	return 0;
}

Csensor_get::Csensor_get()
{
	this->my_init();
}

Csensor_get::~Csensor_get()
{

}

#ifndef SENSOR_GET_TEST
#define SENSOR_GET_TEST 0//1
#endif

#if SENSOR_GET_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
