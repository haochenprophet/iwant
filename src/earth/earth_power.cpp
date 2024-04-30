#include "earth_power.h"
int Cearth_power::my_init(void *p)
{
	this->name = "Cearth_power";
	this->alias = "earth_power";
	return 0;
}

Cearth_power::Cearth_power()
{
	this->my_init();
}

Cearth_power::~Cearth_power()
{

}

#ifndef EARTH_POWER_TEST
#define EARTH_POWER_TEST 0//1
#endif

#if EARTH_POWER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
