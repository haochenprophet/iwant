#include "satellite_mode_night.h"
int Csatellite_mode_night::my_init(void *p)
{
	this->name = "Csatellite_mode_night";
	this->alias = "satellite_mode_night";
	return 0;
}

Csatellite_mode_night::Csatellite_mode_night()
{
	this->my_init();
}

Csatellite_mode_night::~Csatellite_mode_night()
{

}

#ifndef SATELLITE_MODE_NIGHT_TEST
#define SATELLITE_MODE_NIGHT_TEST 0//1
#endif

#if SATELLITE_MODE_NIGHT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
