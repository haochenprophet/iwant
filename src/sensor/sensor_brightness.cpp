#include "sensor_brightness.h"
int Csensor_brightness::my_init(void *p)
{
	this->name = "Csensor_brightness";
	this->alias = "sensor_brightness";
	return 0;
}

Csensor_brightness::Csensor_brightness()
{
	this->my_init();
}

Csensor_brightness::~Csensor_brightness()
{

}

#ifndef SENSOR_BRIGHTNESS_TEST
#define SENSOR_BRIGHTNESS_TEST 0//1
#endif

#if SENSOR_BRIGHTNESS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
