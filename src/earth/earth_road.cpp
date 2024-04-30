#include "earth_road.h"
int Cearth_road::my_init(void *p)
{
	this->name = "Cearth_road";
	this->alias = "earth_road";
	return 0;
}

Cearth_road::Cearth_road()
{
	this->my_init();
}

Cearth_road::~Cearth_road()
{

}

#ifndef EARTH_ROAD_TEST
#define EARTH_ROAD_TEST 0//1
#endif

#if EARTH_ROAD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
