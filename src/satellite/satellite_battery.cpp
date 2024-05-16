#include "satellite_battery.h"
int Csatellite_battery::my_init(void *p)
{
	this->name = "Csatellite_battery";
	this->alias = "satellite_battery";
	return 0;
}

Csatellite_battery::Csatellite_battery()
{
	this->my_init();
}

Csatellite_battery::~Csatellite_battery()
{

}

#ifndef SATELLITE_BATTERY_TEST
#define SATELLITE_BATTERY_TEST 0//1
#endif

#if SATELLITE_BATTERY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
