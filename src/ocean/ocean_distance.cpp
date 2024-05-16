#include "ocean_distance.h"
int Cocean_distance::my_init(void *p)
{
	this->name = "Cocean_distance";
	this->alias = "ocean_distance";
	return 0;
}

Cocean_distance::Cocean_distance()
{
	this->my_init();
}

Cocean_distance::~Cocean_distance()
{

}

#ifndef OCEAN_DISTANCE_TEST
#define OCEAN_DISTANCE_TEST 0//1
#endif

#if OCEAN_DISTANCE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
