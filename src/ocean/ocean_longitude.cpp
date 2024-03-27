#include "ocean_longitude.h"
int Cocean_longitude::my_init(void *p)
{
	this->name = "Cocean_longitude";
	this->alias = "ocean_longitude";
	return 0;
}

Cocean_longitude::Cocean_longitude()
{
	this->my_init();
}

Cocean_longitude::~Cocean_longitude()
{

}

#ifndef OCEAN_LONGITUDE_TEST
#define OCEAN_LONGITUDE_TEST 0//1
#endif

#if OCEAN_LONGITUDE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
