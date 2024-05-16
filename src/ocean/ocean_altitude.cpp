#include "ocean_altitude.h"
int Cocean_altitude::my_init(void *p)
{
	this->name = "Cocean_altitude";
	this->alias = "ocean_altitude";
	return 0;
}

Cocean_altitude::Cocean_altitude()
{
	this->my_init();
}

Cocean_altitude::~Cocean_altitude()
{

}

#ifndef OCEAN_ALTITUDE_TEST
#define OCEAN_ALTITUDE_TEST 0//1
#endif

#if OCEAN_ALTITUDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
