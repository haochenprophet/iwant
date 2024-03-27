#include "ocean_oxygen.h"
int Cocean_oxygen::my_init(void *p)
{
	this->name = "Cocean_oxygen";
	this->alias = "ocean_oxygen";
	return 0;
}

Cocean_oxygen::Cocean_oxygen()
{
	this->my_init();
}

Cocean_oxygen::~Cocean_oxygen()
{

}

#ifndef OCEAN_OXYGEN_TEST
#define OCEAN_OXYGEN_TEST 0//1
#endif

#if OCEAN_OXYGEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
