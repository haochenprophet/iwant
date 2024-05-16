#include "ocean_map.h"
int Cocean_map::my_init(void *p)
{
	this->name = "Cocean_map";
	this->alias = "ocean_map";
	return 0;
}

Cocean_map::Cocean_map()
{
	this->my_init();
}

Cocean_map::~Cocean_map()
{

}

#ifndef OCEAN_MAP_TEST
#define OCEAN_MAP_TEST 0//1
#endif

#if OCEAN_MAP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
