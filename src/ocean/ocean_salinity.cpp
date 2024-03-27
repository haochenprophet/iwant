#include "ocean_salinity.h"
int Cocean_salinity::my_init(void *p)
{
	this->name = "Cocean_salinity";
	this->alias = "ocean_salinity";
	return 0;
}

Cocean_salinity::Cocean_salinity()
{
	this->my_init();
}

Cocean_salinity::~Cocean_salinity()
{

}

#ifndef OCEAN_SALINITY_TEST
#define OCEAN_SALINITY_TEST 0//1
#endif

#if OCEAN_SALINITY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
