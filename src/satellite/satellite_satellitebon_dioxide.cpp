#include "satellite_satellitebon_dioxide.h"
int Csatellite_satellitebon_dioxide::my_init(void *p)
{
	this->name = "Csatellite_satellitebon_dioxide";
	this->alias = "satellite_satellitebon_dioxide";
	return 0;
}

Csatellite_satellitebon_dioxide::Csatellite_satellitebon_dioxide()
{
	this->my_init();
}

Csatellite_satellitebon_dioxide::~Csatellite_satellitebon_dioxide()
{

}

#ifndef SATELLITE_SATELLITEBON_DIOXIDE_TEST
#define SATELLITE_SATELLITEBON_DIOXIDE_TEST 0//1
#endif

#if SATELLITE_SATELLITEBON_DIOXIDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
