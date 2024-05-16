#include "earth_location.h"
int Cearth_location::my_init(void *p)
{
	this->name = "Cearth_location";
	this->alias = "earth_location";
	return 0;
}

Cearth_location::Cearth_location()
{
	this->my_init();
}

Cearth_location::~Cearth_location()
{

}

#ifndef EARTH_LOCATION_TEST
#define EARTH_LOCATION_TEST 0//1
#endif

#if EARTH_LOCATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
