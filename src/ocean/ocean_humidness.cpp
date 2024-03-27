#include "ocean_humidness.h"
int Cocean_humidness::my_init(void *p)
{
	this->name = "Cocean_humidness";
	this->alias = "ocean_humidness";
	return 0;
}

Cocean_humidness::Cocean_humidness()
{
	this->my_init();
}

Cocean_humidness::~Cocean_humidness()
{

}

#ifndef OCEAN_HUMIDNESS_TEST
#define OCEAN_HUMIDNESS_TEST 0//1
#endif

#if OCEAN_HUMIDNESS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
