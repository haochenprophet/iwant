#include "sensor_lower.h"
int Csensor_lower::my_init(void *p)
{
	this->name = "Csensor_lower";
	this->alias = "sensor_lower";
	return 0;
}

Csensor_lower::Csensor_lower()
{
	this->my_init();
}

Csensor_lower::~Csensor_lower()
{

}

#ifndef SENSOR_LOWER_TEST
#define SENSOR_LOWER_TEST 0//1
#endif

#if SENSOR_LOWER_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
