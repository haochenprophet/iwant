#include "ocean_pressure.h"
int Cocean_pressure::my_init(void *p)
{
	this->name = "Cocean_pressure";
	this->alias = "ocean_pressure";
	return 0;
}

Cocean_pressure::Cocean_pressure()
{
	this->my_init();
}

Cocean_pressure::~Cocean_pressure()
{

}

#ifndef OCEAN_PRESSURE_TEST
#define OCEAN_PRESSURE_TEST 0//1
#endif

#if OCEAN_PRESSURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
