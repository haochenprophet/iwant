#include "sensor_open.h"
int Csensor_open::my_init(void *p)
{
	this->name = "Csensor_open";
	this->alias = "sensor_open";
	return 0;
}

Csensor_open::Csensor_open()
{
	this->my_init();
}

Csensor_open::~Csensor_open()
{

}

#ifndef SENSOR_OPEN_TEST
#define SENSOR_OPEN_TEST 0//1
#endif

#if SENSOR_OPEN_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
