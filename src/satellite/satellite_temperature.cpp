#include "satellite_temperature.h"
int Csatellite_temperature::my_init(void *p)
{
	this->name = "Csatellite_temperature";
	this->alias = "satellite_temperature";
	return 0;
}

Csatellite_temperature::Csatellite_temperature()
{
	this->my_init();
}

Csatellite_temperature::~Csatellite_temperature()
{

}

#ifndef SATELLITE_TEMPERATURE_TEST
#define SATELLITE_TEMPERATURE_TEST 0//1
#endif

#if SATELLITE_TEMPERATURE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
