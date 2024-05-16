#include "ocean_water.h"
int Cocean_water::my_init(void *p)
{
	this->name = "Cocean_water";
	this->alias = "ocean_water";
	return 0;
}

Cocean_water::Cocean_water()
{
	this->my_init();
}

Cocean_water::~Cocean_water()
{

}

#ifndef OCEAN_WATER_TEST
#define OCEAN_WATER_TEST 0//1
#endif

#if OCEAN_WATER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
