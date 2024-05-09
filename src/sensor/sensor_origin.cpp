#include "sensor_origin.h"
int Csensor_origin::my_init(void *p)
{
	this->name = "Csensor_origin";
	this->alias = "sensor_origin";
	return 0;
}

Csensor_origin::Csensor_origin()
{
	this->my_init();
}

Csensor_origin::~Csensor_origin()
{

}

#ifndef SENSOR_ORIGIN_TEST
#define SENSOR_ORIGIN_TEST 0//1
#endif

#if SENSOR_ORIGIN_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
