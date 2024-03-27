#include "ocean_fish.h"
int Cocean_fish::my_init(void *p)
{
	this->name = "Cocean_fish";
	this->alias = "ocean_fish";
	return 0;
}

Cocean_fish::Cocean_fish()
{
	this->my_init();
}

Cocean_fish::~Cocean_fish()
{

}

#ifndef OCEAN_FISH_TEST
#define OCEAN_FISH_TEST 0//1
#endif

#if OCEAN_FISH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
