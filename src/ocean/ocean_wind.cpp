#include "ocean_wind.h"
int Cocean_wind::my_init(void *p)
{
	this->name = "Cocean_wind";
	this->alias = "ocean_wind";
	return 0;
}

Cocean_wind::Cocean_wind()
{
	this->my_init();
}

Cocean_wind::~Cocean_wind()
{

}

#ifndef OCEAN_WIND_TEST
#define OCEAN_WIND_TEST 0//1
#endif

#if OCEAN_WIND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
