#include "satellite_electric_current.h"
int Csatellite_electric_current::my_init(void *p)
{
	this->name = "Csatellite_electric_current";
	this->alias = "satellite_electric_current";
	return 0;
}

Csatellite_electric_current::Csatellite_electric_current()
{
	this->my_init();
}

Csatellite_electric_current::~Csatellite_electric_current()
{

}

#ifndef SATELLITE_ELECTRIC_CURRENT_TEST
#define SATELLITE_ELECTRIC_CURRENT_TEST 0//1
#endif

#if SATELLITE_ELECTRIC_CURRENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
