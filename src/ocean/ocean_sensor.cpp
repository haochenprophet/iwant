#include "ocean_sensor.h"
int Cocean_sensor::my_init(void *p)
{
	this->name = "Cocean_sensor";
	this->alias = "ocean_sensor";
	return 0;
}

Cocean_sensor::Cocean_sensor()
{
	this->my_init();
}

Cocean_sensor::~Cocean_sensor()
{

}

#ifndef OCEAN_SENSOR_TEST
#define OCEAN_SENSOR_TEST 0//1
#endif

#if OCEAN_SENSOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
