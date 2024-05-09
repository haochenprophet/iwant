#include "sensor_system.h"
int Csensor_system::my_init(void *p)
{
	this->name = "Csensor_system";
	this->alias = "sensor_system";
	return 0;
}

Csensor_system::Csensor_system()
{
	this->my_init();
}

Csensor_system::~Csensor_system()
{

}

#ifndef SENSOR_SYSTEM_TEST
#define SENSOR_SYSTEM_TEST 0//1
#endif

#if SENSOR_SYSTEM_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
