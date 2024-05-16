#include "ocean_temperature.h"
int Cocean_temperature::my_init(void *p)
{
	this->name = "Cocean_temperature";
	this->alias = "ocean_temperature";
	return 0;
}

Cocean_temperature::Cocean_temperature()
{
	this->my_init();
}

Cocean_temperature::~Cocean_temperature()
{

}

#ifndef OCEAN_TEMPERATURE_TEST
#define OCEAN_TEMPERATURE_TEST 0//1
#endif

#if OCEAN_TEMPERATURE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
