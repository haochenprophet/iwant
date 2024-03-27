#include "ocean_seabed.h"
int Cocean_seabed::my_init(void *p)
{
	this->name = "Cocean_seabed";
	this->alias = "ocean_seabed";
	return 0;
}

Cocean_seabed::Cocean_seabed()
{
	this->my_init();
}

Cocean_seabed::~Cocean_seabed()
{

}

#ifndef OCEAN_SEABED_TEST
#define OCEAN_SEABED_TEST 0//1
#endif

#if OCEAN_SEABED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
