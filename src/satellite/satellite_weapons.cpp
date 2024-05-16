#include "satellite_weapons.h"
int Csatellite_weapons::my_init(void *p)
{
	this->name = "Csatellite_weapons";
	this->alias = "satellite_weapons";
	return 0;
}

Csatellite_weapons::Csatellite_weapons()
{
	this->my_init();
}

Csatellite_weapons::~Csatellite_weapons()
{

}

#ifndef SATELLITE_WEAPONS_TEST
#define SATELLITE_WEAPONS_TEST 0//1
#endif

#if SATELLITE_WEAPONS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
