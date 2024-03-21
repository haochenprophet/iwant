#include "satellite_air_conditioner.h"
int Csatellite_air_conditioner::my_init(void *p)
{
	this->name = "Csatellite_air_conditioner";
	this->alias = "satellite_air_conditioner";
	return 0;
}

Csatellite_air_conditioner::Csatellite_air_conditioner()
{
	this->my_init();
}

Csatellite_air_conditioner::~Csatellite_air_conditioner()
{

}

#ifndef SATELLITE_AIR_CONDITIONER_TEST
#define SATELLITE_AIR_CONDITIONER_TEST 0//1
#endif

#if SATELLITE_AIR_CONDITIONER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
