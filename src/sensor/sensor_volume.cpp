#include "sensor_volume.h"
int Csensor_volume::my_init(void *p)
{
	this->name = "Csensor_volume";
	this->alias = "sensor_volume";
	return 0;
}

Csensor_volume::Csensor_volume()
{
	this->my_init();
}

Csensor_volume::~Csensor_volume()
{

}

#ifndef SENSOR_VOLUME_TEST
#define SENSOR_VOLUME_TEST 0//1
#endif

#if SENSOR_VOLUME_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
