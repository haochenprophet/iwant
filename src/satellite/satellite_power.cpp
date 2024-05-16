#include "satellite_power.h"
int Csatellite_power::my_init(void *p)
{
	this->name = "Csatellite_power";
	this->alias = "satellite_power";
	return 0;
}

Csatellite_power::Csatellite_power()
{
	this->my_init();
}

Csatellite_power::~Csatellite_power()
{

}

#ifndef SATELLITE_POWER_TEST
#define SATELLITE_POWER_TEST 0//1
#endif

#if SATELLITE_POWER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
