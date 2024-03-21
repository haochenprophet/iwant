#include "satellite_satellitebon_monoxide.h"
int Csatellite_satellitebon_monoxide::my_init(void *p)
{
	this->name = "Csatellite_satellitebon_monoxide";
	this->alias = "satellite_satellitebon_monoxide";
	return 0;
}

Csatellite_satellitebon_monoxide::Csatellite_satellitebon_monoxide()
{
	this->my_init();
}

Csatellite_satellitebon_monoxide::~Csatellite_satellitebon_monoxide()
{

}

#ifndef SATELLITE_SATELLITEBON_MONOXIDE_TEST
#define SATELLITE_SATELLITEBON_MONOXIDE_TEST 0//1
#endif

#if SATELLITE_SATELLITEBON_MONOXIDE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
