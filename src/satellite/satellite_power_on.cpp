#include "satellite_power_on.h"
int Csatellite_power_on::my_init(void *p)
{
	this->name = "Csatellite_power_on";
	this->alias = "satellite_power_on";
	return 0;
}

Csatellite_power_on::Csatellite_power_on()
{
	this->my_init();
}

Csatellite_power_on::~Csatellite_power_on()
{

}

#ifndef SATELLITE_POWER_ON_TEST
#define SATELLITE_POWER_ON_TEST 0//1
#endif

#if SATELLITE_POWER_ON_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
