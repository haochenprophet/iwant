#include "sensor_target.h"
int Csensor_target::my_init(void *p)
{
	this->name = "Csensor_target";
	this->alias = "sensor_target";
	return 0;
}

Csensor_target::Csensor_target()
{
	this->my_init();
}

Csensor_target::~Csensor_target()
{

}

#ifndef SENSOR_TARGET_TEST
#define SENSOR_TARGET_TEST 0//1
#endif

#if SENSOR_TARGET_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
