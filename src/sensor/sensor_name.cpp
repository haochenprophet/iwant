#include "sensor_name.h"
int Csensor_name::my_init(void *p)
{
	this->name = "Csensor_name";
	this->alias = "sensor_name";
	return 0;
}

Csensor_name::Csensor_name()
{
	this->my_init();
}

Csensor_name::~Csensor_name()
{

}

#ifndef SENSOR_NAME_TEST
#define SENSOR_NAME_TEST 0//1
#endif

#if SENSOR_NAME_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
