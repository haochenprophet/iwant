#include "satellite_mode_cold.h"
int Csatellite_mode_cold::my_init(void *p)
{
	this->name = "Csatellite_mode_cold";
	this->alias = "satellite_mode_cold";
	return 0;
}

Csatellite_mode_cold::Csatellite_mode_cold()
{
	this->my_init();
}

Csatellite_mode_cold::~Csatellite_mode_cold()
{

}

#ifndef SATELLITE_MODE_COLD_TEST
#define SATELLITE_MODE_COLD_TEST 0//1
#endif

#if SATELLITE_MODE_COLD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
