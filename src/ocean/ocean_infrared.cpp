#include "ocean_infrared.h"
int Cocean_infrared::my_init(void *p)
{
	this->name = "Cocean_infrared";
	this->alias = "ocean_infrared";
	return 0;
}

Cocean_infrared::Cocean_infrared()
{
	this->my_init();
}

Cocean_infrared::~Cocean_infrared()
{

}

#ifndef OCEAN_INFRARED_TEST
#define OCEAN_INFRARED_TEST 0//1
#endif

#if OCEAN_INFRARED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
