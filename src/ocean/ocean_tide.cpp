#include "ocean_tide.h"
int Cocean_tide::my_init(void *p)
{
	this->name = "Cocean_tide";
	this->alias = "ocean_tide";
	return 0;
}

Cocean_tide::Cocean_tide()
{
	this->my_init();
}

Cocean_tide::~Cocean_tide()
{

}

#ifndef OCEAN_TIDE_TEST
#define OCEAN_TIDE_TEST 0//1
#endif

#if OCEAN_TIDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
