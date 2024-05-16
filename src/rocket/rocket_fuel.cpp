#include "rocket_fuel.h"
int Crocket_fuel::my_init(void *p)
{
	this->name = "Crocket_fuel";
	this->alias = "rocket_fuel";
	return 0;
}

Crocket_fuel::Crocket_fuel()
{
	this->my_init();
}

Crocket_fuel::~Crocket_fuel()
{

}

#ifndef ROCKET_FUEL_TEST
#define ROCKET_FUEL_TEST 0//1
#endif

#if ROCKET_FUEL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
