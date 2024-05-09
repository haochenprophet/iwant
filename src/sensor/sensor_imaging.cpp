#include "sensor_imaging.h"
int Csensor_imaging::my_init(void *p)
{
	this->name = "Csensor_imaging";
	this->alias = "sensor_imaging";
	return 0;
}

Csensor_imaging::Csensor_imaging()
{
	this->my_init();
}

Csensor_imaging::~Csensor_imaging()
{

}

#ifndef SENSOR_IMAGING_TEST
#define SENSOR_IMAGING_TEST 0//1
#endif

#if SENSOR_IMAGING_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
