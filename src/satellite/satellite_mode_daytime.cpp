#include "satellite_mode_daytime.h"
int Csatellite_mode_daytime::my_init(void *p)
{
	this->name = "Csatellite_mode_daytime";
	this->alias = "satellite_mode_daytime";
	return 0;
}

Csatellite_mode_daytime::Csatellite_mode_daytime()
{
	this->my_init();
}

Csatellite_mode_daytime::~Csatellite_mode_daytime()
{

}

#ifndef SATELLITE_MODE_DAYTIME_TEST
#define SATELLITE_MODE_DAYTIME_TEST 0//1
#endif

#if SATELLITE_MODE_DAYTIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
