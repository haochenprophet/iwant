#include "earth_ocean.h"
int Cearth_ocean::my_init(void *p)
{
	this->name = "Cearth_ocean";
	this->alias = "earth_ocean";
	return 0;
}

Cearth_ocean::Cearth_ocean()
{
	this->my_init();
}

Cearth_ocean::~Cearth_ocean()
{

}

#ifndef EARTH_OCEAN_TEST
#define EARTH_OCEAN_TEST 0//1
#endif

#if EARTH_OCEAN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
