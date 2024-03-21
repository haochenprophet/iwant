#include "satellite_location.h"
int Csatellite_location::my_init(void *p)
{
	this->name = "Csatellite_location";
	this->alias = "satellite_location";
	return 0;
}

Csatellite_location::Csatellite_location()
{
	this->my_init();
}

Csatellite_location::~Csatellite_location()
{

}

#ifndef SATELLITE_LOCATION_TEST
#define SATELLITE_LOCATION_TEST 0//1
#endif

#if SATELLITE_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
