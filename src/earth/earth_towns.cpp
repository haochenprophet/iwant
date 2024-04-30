#include "earth_towns.h"
int Cearth_towns::my_init(void *p)
{
	this->name = "Cearth_towns";
	this->alias = "earth_towns";
	return 0;
}

Cearth_towns::Cearth_towns()
{
	this->my_init();
}

Cearth_towns::~Cearth_towns()
{

}

#ifndef EARTH_TOWNS_TEST
#define EARTH_TOWNS_TEST 0//1
#endif

#if EARTH_TOWNS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
