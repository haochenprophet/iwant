#include "satellite_cable.h"
int Csatellite_cable::my_init(void *p)
{
	this->name = "Csatellite_cable";
	this->alias = "satellite_cable";
	return 0;
}

Csatellite_cable::Csatellite_cable()
{
	this->my_init();
}

Csatellite_cable::~Csatellite_cable()
{

}

#ifndef SATELLITE_CABLE_TEST
#define SATELLITE_CABLE_TEST 0//1
#endif

#if SATELLITE_CABLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
