#include "sensor_type.h"
int Csensor_type::my_init(void *p)
{
	this->name = "Csensor_type";
	this->alias = "sensor_type";
	return 0;
}

Csensor_type::Csensor_type()
{
	this->my_init();
}

Csensor_type::~Csensor_type()
{

}

#ifndef SENSOR_TYPE_TEST
#define SENSOR_TYPE_TEST 0//1
#endif

#if SENSOR_TYPE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
