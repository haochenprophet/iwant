#include "ocean_region.h"
int Cocean_region::my_init(void *p)
{
	this->name = "Cocean_region";
	this->alias = "ocean_region";
	return 0;
}

Cocean_region::Cocean_region()
{
	this->my_init();
}

Cocean_region::~Cocean_region()
{

}

#ifndef OCEAN_REGION_TEST
#define OCEAN_REGION_TEST 0//1
#endif

#if OCEAN_REGION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
