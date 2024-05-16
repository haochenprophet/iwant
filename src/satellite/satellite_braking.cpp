#include "satellite_braking.h"
int Csatellite_braking::my_init(void *p)
{
	this->name = "Csatellite_braking";
	this->alias = "satellite_braking";
	return 0;
}

Csatellite_braking::Csatellite_braking()
{
	this->my_init();
}

Csatellite_braking::~Csatellite_braking()
{

}

#ifndef SATELLITE_BRAKING_TEST
#define SATELLITE_BRAKING_TEST 0//1
#endif

#if SATELLITE_BRAKING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
