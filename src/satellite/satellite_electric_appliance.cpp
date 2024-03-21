#include "satellite_electric_appliance.h"
int Csatellite_electric_appliance::my_init(void *p)
{
	this->name = "Csatellite_electric_appliance";
	this->alias = "satellite_electric_appliance";
	return 0;
}

Csatellite_electric_appliance::Csatellite_electric_appliance()
{
	this->my_init();
}

Csatellite_electric_appliance::~Csatellite_electric_appliance()
{

}

#ifndef SATELLITE_ELECTRIC_APPLIANCE_TEST
#define SATELLITE_ELECTRIC_APPLIANCE_TEST 0//1
#endif

#if SATELLITE_ELECTRIC_APPLIANCE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
