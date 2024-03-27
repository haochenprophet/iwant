#include "ocean_location.h"
int Cocean_location::my_init(void *p)
{
	this->name = "Cocean_location";
	this->alias = "ocean_location";
	return 0;
}

Cocean_location::Cocean_location()
{
	this->my_init();
}

Cocean_location::~Cocean_location()
{

}

#ifndef OCEAN_LOCATION_TEST
#define OCEAN_LOCATION_TEST 0//1
#endif

#if OCEAN_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
