#include "satellite_water.h"
int Csatellite_water::my_init(void *p)
{
	this->name = "Csatellite_water";
	this->alias = "satellite_water";
	return 0;
}

Csatellite_water::Csatellite_water()
{
	this->my_init();
}

Csatellite_water::~Csatellite_water()
{

}

#ifndef SATELLITE_WATER_TEST
#define SATELLITE_WATER_TEST 0//1
#endif

#if SATELLITE_WATER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
