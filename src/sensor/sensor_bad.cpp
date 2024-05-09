#include "sensor_bad.h"
int Csensor_bad::my_init(void *p)
{
	this->name = "Csensor_bad";
	this->alias = "sensor_bad";
	return 0;
}

Csensor_bad::Csensor_bad()
{
	this->my_init();
}

Csensor_bad::~Csensor_bad()
{

}

#ifndef SENSOR_BAD_TEST
#define SENSOR_BAD_TEST 0//1
#endif

#if SENSOR_BAD_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
