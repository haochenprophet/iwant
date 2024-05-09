#include "sensor_error.h"
int Csensor_error::my_init(void *p)
{
	this->name = "Csensor_error";
	this->alias = "sensor_error";
	return 0;
}

Csensor_error::Csensor_error()
{
	this->my_init();
}

Csensor_error::~Csensor_error()
{

}

#ifndef SENSOR_ERROR_TEST
#define SENSOR_ERROR_TEST 0//1
#endif

#if SENSOR_ERROR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
