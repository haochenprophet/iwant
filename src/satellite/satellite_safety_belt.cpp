#include "satellite_safety_belt.h"
int Csatellite_safety_belt::my_init(void *p)
{
	this->name = "Csatellite_safety_belt";
	this->alias = "satellite_safety_belt";
	return 0;
}

Csatellite_safety_belt::Csatellite_safety_belt()
{
	this->my_init();
}

Csatellite_safety_belt::~Csatellite_safety_belt()
{

}

#ifndef SATELLITE_SAFETY_BELT_TEST
#define SATELLITE_SAFETY_BELT_TEST 0//1
#endif

#if SATELLITE_SAFETY_BELT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
