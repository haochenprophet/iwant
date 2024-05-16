#include "ocean_density.h"
int Cocean_density::my_init(void *p)
{
	this->name = "Cocean_density";
	this->alias = "ocean_density";
	return 0;
}

Cocean_density::Cocean_density()
{
	this->my_init();
}

Cocean_density::~Cocean_density()
{

}

#ifndef OCEAN_DENSITY_TEST
#define OCEAN_DENSITY_TEST 0//1
#endif

#if OCEAN_DENSITY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
