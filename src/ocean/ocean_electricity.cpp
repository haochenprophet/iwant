#include "ocean_electricity.h"
int Cocean_electricity::my_init(void *p)
{
	this->name = "Cocean_electricity";
	this->alias = "ocean_electricity";
	return 0;
}

Cocean_electricity::Cocean_electricity()
{
	this->my_init();
}

Cocean_electricity::~Cocean_electricity()
{

}

#ifndef OCEAN_ELECTRICITY_TEST
#define OCEAN_ELECTRICITY_TEST 0//1
#endif

#if OCEAN_ELECTRICITY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
