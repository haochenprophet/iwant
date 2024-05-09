#include "sensor_off.h"
int Csensor_off::my_init(void *p)
{
	this->name = "Csensor_off";
	this->alias = "sensor_off";
	return 0;
}

Csensor_off::Csensor_off()
{
	this->my_init();
}

Csensor_off::~Csensor_off()
{

}

#ifndef SENSOR_OFF_TEST
#define SENSOR_OFF_TEST 0//1
#endif

#if SENSOR_OFF_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
