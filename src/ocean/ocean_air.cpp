#include "ocean_air.h"
int Cocean_air::my_init(void *p)
{
	this->name = "Cocean_air";
	this->alias = "ocean_air";
	return 0;
}

Cocean_air::Cocean_air()
{
	this->my_init();
}

Cocean_air::~Cocean_air()
{

}

#ifndef OCEAN_AIR_TEST
#define OCEAN_AIR_TEST 0//1
#endif

#if OCEAN_AIR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
