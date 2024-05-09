#include "sensor_width.h"
int Csensor_width::my_init(void *p)
{
	this->name = "Csensor_width";
	this->alias = "sensor_width";
	return 0;
}

Csensor_width::Csensor_width()
{
	this->my_init();
}

Csensor_width::~Csensor_width()
{

}

#ifndef SENSOR_WIDTH_TEST
#define SENSOR_WIDTH_TEST 0//1
#endif

#if SENSOR_WIDTH_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
