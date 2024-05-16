#include "satellite_chassis.h"
int Csatellite_chassis::my_init(void *p)
{
	this->name = "Csatellite_chassis";
	this->alias = "satellite_chassis";
	return 0;
}

Csatellite_chassis::Csatellite_chassis()
{
	this->my_init();
}

Csatellite_chassis::~Csatellite_chassis()
{

}

#ifndef SATELLITE_CHASSIS_TEST
#define SATELLITE_CHASSIS_TEST 0//1
#endif

#if SATELLITE_CHASSIS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
