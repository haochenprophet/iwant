#include "satellite_ultrasonic_radar.h"
int Csatellite_ultrasonic_radar::my_init(void *p)
{
	this->name = "Csatellite_ultrasonic_radar";
	this->alias = "satellite_ultrasonic_radar";
	return 0;
}

Csatellite_ultrasonic_radar::Csatellite_ultrasonic_radar()
{
	this->my_init();
}

Csatellite_ultrasonic_radar::~Csatellite_ultrasonic_radar()
{

}

#ifndef SATELLITE_ULTRASONIC_RADAR_TEST
#define SATELLITE_ULTRASONIC_RADAR_TEST 0//1
#endif

#if SATELLITE_ULTRASONIC_RADAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
