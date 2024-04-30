#include "earth_city.h"
int Cearth_city::my_init(void *p)
{
	this->name = "Cearth_city";
	this->alias = "earth_city";
	return 0;
}

Cearth_city::Cearth_city()
{
	this->my_init();
}

Cearth_city::~Cearth_city()
{

}

#ifndef EARTH_CITY_TEST
#define EARTH_CITY_TEST 0//1
#endif

#if EARTH_CITY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
