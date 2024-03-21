#include "satellite_radar.h"
int Csatellite_radar::my_init(void *p)
{
	this->name = "Csatellite_radar";
	this->alias = "satellite_radar";
	return 0;
}

Csatellite_radar::Csatellite_radar()
{
	this->my_init();
}

Csatellite_radar::~Csatellite_radar()
{

}

#ifndef SATELLITE_RADAR_TEST
#define SATELLITE_RADAR_TEST 0//1
#endif

#if SATELLITE_RADAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
