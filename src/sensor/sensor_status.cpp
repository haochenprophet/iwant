#include "sensor_status.h"
int Csensor_status::my_init(void *p)
{
	this->name = "Csensor_status";
	this->alias = "sensor_status";
	return 0;
}

Csensor_status::Csensor_status()
{
	this->my_init();
}

Csensor_status::~Csensor_status()
{

}

#ifndef SENSOR_STATUS_TEST
#define SENSOR_STATUS_TEST 0//1
#endif

#if SENSOR_STATUS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
