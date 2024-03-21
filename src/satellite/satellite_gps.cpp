#include "satellite_gps.h"
int Csatellite_gps::my_init(void *p)
{
	this->name = "Csatellite_gps";
	this->alias = "satellite_gps";
	return 0;
}

Csatellite_gps::Csatellite_gps()
{
	this->my_init();
}

Csatellite_gps::~Csatellite_gps()
{

}

#ifndef SATELLITE_GPS_TEST
#define SATELLITE_GPS_TEST 0//1
#endif

#if SATELLITE_GPS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
