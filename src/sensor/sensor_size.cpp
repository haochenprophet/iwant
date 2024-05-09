#include "sensor_size.h"
int Csensor_size::my_init(void *p)
{
	this->name = "Csensor_size";
	this->alias = "sensor_size";
	return 0;
}

Csensor_size::Csensor_size()
{
	this->my_init();
}

Csensor_size::~Csensor_size()
{

}

#ifndef SENSOR_SIZE_TEST
#define SENSOR_SIZE_TEST 0//1
#endif

#if SENSOR_SIZE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
