#include "sensor_weight.h"
int Csensor_weight::my_init(void *p)
{
	this->name = "Csensor_weight";
	this->alias = "sensor_weight";
	return 0;
}

Csensor_weight::Csensor_weight()
{
	this->my_init();
}

Csensor_weight::~Csensor_weight()
{

}

#ifndef SENSOR_WEIGHT_TEST
#define SENSOR_WEIGHT_TEST 0//1
#endif

#if SENSOR_WEIGHT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
