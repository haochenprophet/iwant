#include "earth_temperature.h"
int Cearth_temperature::my_init(void *p)
{
	this->name = "Cearth_temperature";
	this->alias = "earth_temperature";
	return 0;
}

Cearth_temperature::Cearth_temperature()
{
	this->my_init();
}

Cearth_temperature::~Cearth_temperature()
{

}

#ifndef EARTH_TEMPERATURE_TEST
#define EARTH_TEMPERATURE_TEST 0//1
#endif

#if EARTH_TEMPERATURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
