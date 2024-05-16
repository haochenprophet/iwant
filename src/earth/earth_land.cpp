#include "earth_land.h"
int Cearth_land::my_init(void *p)
{
	this->name = "Cearth_land";
	this->alias = "earth_land";
	return 0;
}

Cearth_land::Cearth_land()
{
	this->my_init();
}

Cearth_land::~Cearth_land()
{

}

#ifndef EARTH_LAND_TEST
#define EARTH_LAND_TEST 0//1
#endif

#if EARTH_LAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
