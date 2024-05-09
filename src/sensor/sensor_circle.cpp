#include "sensor_circle.h"
int Csensor_circle::my_init(void *p)
{
	this->name = "Csensor_circle";
	this->alias = "sensor_circle";
	return 0;
}

Csensor_circle::Csensor_circle()
{
	this->my_init();
}

Csensor_circle::~Csensor_circle()
{

}

#ifndef SENSOR_CIRCLE_TEST
#define SENSOR_CIRCLE_TEST 0//1
#endif

#if SENSOR_CIRCLE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
