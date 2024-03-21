#include "satellite_sensor.h"
int Csatellite_sensor::my_init(void *p)
{
	this->name = "Csatellite_sensor";
	this->alias = "satellite_sensor";
	return 0;
}

Csatellite_sensor::Csatellite_sensor()
{
	this->my_init();
}

Csatellite_sensor::~Csatellite_sensor()
{

}

#ifndef SATELLITE_SENSOR_TEST
#define SATELLITE_SENSOR_TEST 0//1
#endif

#if SATELLITE_SENSOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
