#include "sensor_display.h"
int Csensor_display::my_init(void *p)
{
	this->name = "Csensor_display";
	this->alias = "sensor_display";
	return 0;
}

Csensor_display::Csensor_display()
{
	this->my_init();
}

Csensor_display::~Csensor_display()
{

}

#ifndef SENSOR_DISPLAY_TEST
#define SENSOR_DISPLAY_TEST 0//1
#endif

#if SENSOR_DISPLAY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
