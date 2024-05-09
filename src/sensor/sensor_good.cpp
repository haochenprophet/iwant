#include "sensor_good.h"
int Csensor_good::my_init(void *p)
{
	this->name = "Csensor_good";
	this->alias = "sensor_good";
	return 0;
}

Csensor_good::Csensor_good()
{
	this->my_init();
}

Csensor_good::~Csensor_good()
{

}

#ifndef SENSOR_GOOD_TEST
#define SENSOR_GOOD_TEST 0//1
#endif

#if SENSOR_GOOD_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
