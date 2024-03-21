#include "satellite_laser_radar.h"
int Csatellite_laser_radar::my_init(void *p)
{
	this->name = "Csatellite_laser_radar";
	this->alias = "satellite_laser_radar";
	return 0;
}

Csatellite_laser_radar::Csatellite_laser_radar()
{
	this->my_init();
}

Csatellite_laser_radar::~Csatellite_laser_radar()
{

}

#ifndef SATELLITE_LASER_RADAR_TEST
#define SATELLITE_LASER_RADAR_TEST 0//1
#endif

#if SATELLITE_LASER_RADAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
