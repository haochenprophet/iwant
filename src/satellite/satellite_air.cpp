#include "satellite_air.h"
int Csatellite_air::my_init(void *p)
{
	this->name = "Csatellite_air";
	this->alias = "satellite_air";
	return 0;
}

Csatellite_air::Csatellite_air()
{
	this->my_init();
}

Csatellite_air::~Csatellite_air()
{

}

#ifndef SATELLITE_AIR_TEST
#define SATELLITE_AIR_TEST 0//1
#endif

#if SATELLITE_AIR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
