#include "ocean_island.h"
int Cocean_island::my_init(void *p)
{
	this->name = "Cocean_island";
	this->alias = "ocean_island";
	return 0;
}

Cocean_island::Cocean_island()
{
	this->my_init();
}

Cocean_island::~Cocean_island()
{

}

#ifndef OCEAN_ISLAND_TEST
#define OCEAN_ISLAND_TEST 0//1
#endif

#if OCEAN_ISLAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
