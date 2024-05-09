#include "sensor_current.h"
int Csensor_current::my_init(void *p)
{
	this->name = "Csensor_current";
	this->alias = "sensor_current";
	return 0;
}

Csensor_current::Csensor_current()
{
	this->my_init();
}

Csensor_current::~Csensor_current()
{

}

#ifndef SENSOR_CURRENT_TEST
#define SENSOR_CURRENT_TEST 0//1
#endif

#if SENSOR_CURRENT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
