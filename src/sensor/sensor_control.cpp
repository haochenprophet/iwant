#include "sensor_control.h"
int Csensor_control::my_init(void *p)
{
	this->name = "Csensor_control";
	this->alias = "sensor_control";
	return 0;
}

Csensor_control::Csensor_control()
{
	this->my_init();
}

Csensor_control::~Csensor_control()
{

}

#ifndef SENSOR_CONTROL_TEST
#define SENSOR_CONTROL_TEST 0//1
#endif

#if SENSOR_CONTROL_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
