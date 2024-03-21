#include "satellite_mode_rain.h"
int Csatellite_mode_rain::my_init(void *p)
{
	this->name = "Csatellite_mode_rain";
	this->alias = "satellite_mode_rain";
	return 0;
}

Csatellite_mode_rain::Csatellite_mode_rain()
{
	this->my_init();
}

Csatellite_mode_rain::~Csatellite_mode_rain()
{

}

#ifndef SATELLITE_MODE_RAIN_TEST
#define SATELLITE_MODE_RAIN_TEST 0//1
#endif

#if SATELLITE_MODE_RAIN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
