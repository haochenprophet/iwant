#include "satellite_power_off.h"
int Csatellite_power_off::my_init(void *p)
{
	this->name = "Csatellite_power_off";
	this->alias = "satellite_power_off";
	return 0;
}

Csatellite_power_off::Csatellite_power_off()
{
	this->my_init();
}

Csatellite_power_off::~Csatellite_power_off()
{

}

#ifndef SATELLITE_POWER_OFF_TEST
#define SATELLITE_POWER_OFF_TEST 0//1
#endif

#if SATELLITE_POWER_OFF_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
