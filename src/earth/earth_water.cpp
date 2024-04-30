#include "earth_water.h"
int Cearth_water::my_init(void *p)
{
	this->name = "Cearth_water";
	this->alias = "earth_water";
	return 0;
}

Cearth_water::Cearth_water()
{
	this->my_init();
}

Cearth_water::~Cearth_water()
{

}

#ifndef EARTH_WATER_TEST
#define EARTH_WATER_TEST 0//1
#endif

#if EARTH_WATER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
