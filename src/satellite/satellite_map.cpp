#include "satellite_map.h"
int Csatellite_map::my_init(void *p)
{
	this->name = "Csatellite_map";
	this->alias = "satellite_map";
	return 0;
}

Csatellite_map::Csatellite_map()
{
	this->my_init();
}

Csatellite_map::~Csatellite_map()
{

}

#ifndef SATELLITE_MAP_TEST
#define SATELLITE_MAP_TEST 0//1
#endif

#if SATELLITE_MAP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
