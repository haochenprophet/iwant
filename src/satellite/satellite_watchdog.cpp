#include "satellite_watchdog.h"
int Csatellite_watchdog::my_init(void *p)
{
	this->name = "Csatellite_watchdog";
	this->alias = "satellite_watchdog";
	return 0;
}

Csatellite_watchdog::Csatellite_watchdog()
{
	this->my_init();
}

Csatellite_watchdog::~Csatellite_watchdog()
{

}

#ifndef SATELLITE_WATCHDOG_TEST
#define SATELLITE_WATCHDOG_TEST 0//1
#endif

#if SATELLITE_WATCHDOG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
