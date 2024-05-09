#include "sensor_length.h"
int Csensor_length::my_init(void *p)
{
	this->name = "Csensor_length";
	this->alias = "sensor_length";
	return 0;
}

Csensor_length::Csensor_length()
{
	this->my_init();
}

Csensor_length::~Csensor_length()
{

}

#ifndef SENSOR_LENGTH_TEST
#define SENSOR_LENGTH_TEST 0//1
#endif

#if SENSOR_LENGTH_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
