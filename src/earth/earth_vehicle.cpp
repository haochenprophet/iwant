#include "earth_vehicle.h"
int Cearth_vehicle::my_init(void *p)
{
	this->name = "Cearth_vehicle";
	this->alias = "earth_vehicle";
	return 0;
}

Cearth_vehicle::Cearth_vehicle()
{
	this->my_init();
}

Cearth_vehicle::~Cearth_vehicle()
{

}

#ifndef EARTH_VEHICLE_TEST
#define EARTH_VEHICLE_TEST 0//1
#endif

#if EARTH_VEHICLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
