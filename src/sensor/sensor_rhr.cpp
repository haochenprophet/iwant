#include "sensor_rhr.h"
int Csensor_rhr::my_init(void *p)
{
	this->name = "Csensor_rhr";
	this->alias = "sensor_rhr";
	return 0;
}

Csensor_rhr::Csensor_rhr()
{
	this->my_init();
}

Csensor_rhr::~Csensor_rhr()
{

}

#ifndef SENSOR_RHR_TEST
#define SENSOR_RHR_TEST 0//1
#endif

#if SENSOR_RHR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
