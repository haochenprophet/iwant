#include "satellite_oxygen.h"
int Csatellite_oxygen::my_init(void *p)
{
	this->name = "Csatellite_oxygen";
	this->alias = "satellite_oxygen";
	return 0;
}

Csatellite_oxygen::Csatellite_oxygen()
{
	this->my_init();
}

Csatellite_oxygen::~Csatellite_oxygen()
{

}

#ifndef SATELLITE_OXYGEN_TEST
#define SATELLITE_OXYGEN_TEST 0//1
#endif

#if SATELLITE_OXYGEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
