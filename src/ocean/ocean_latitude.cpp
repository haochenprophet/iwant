#include "ocean_latitude.h"
int Cocean_latitude::my_init(void *p)
{
	this->name = "Cocean_latitude";
	this->alias = "ocean_latitude";
	return 0;
}

Cocean_latitude::Cocean_latitude()
{
	this->my_init();
}

Cocean_latitude::~Cocean_latitude()
{

}

#ifndef OCEAN_LATITUDE_TEST
#define OCEAN_LATITUDE_TEST 0//1
#endif

#if OCEAN_LATITUDE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
