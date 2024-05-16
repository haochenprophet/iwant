#include "satellite_mode_snow.h"
int Csatellite_mode_snow::my_init(void *p)
{
	this->name = "Csatellite_mode_snow";
	this->alias = "satellite_mode_snow";
	return 0;
}

Csatellite_mode_snow::Csatellite_mode_snow()
{
	this->my_init();
}

Csatellite_mode_snow::~Csatellite_mode_snow()
{

}

#ifndef SATELLITE_MODE_SNOW_TEST
#define SATELLITE_MODE_SNOW_TEST 0//1
#endif

#if SATELLITE_MODE_SNOW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
