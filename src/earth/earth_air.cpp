#include "earth_air.h"
int Cearth_air::my_init(void *p)
{
	this->name = "Cearth_air";
	this->alias = "earth_air";
	return 0;
}

Cearth_air::Cearth_air()
{
	this->my_init();
}

Cearth_air::~Cearth_air()
{

}

#ifndef EARTH_AIR_TEST
#define EARTH_AIR_TEST 0//1
#endif

#if EARTH_AIR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
