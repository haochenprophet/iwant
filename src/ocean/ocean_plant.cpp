#include "ocean_plant.h"
int Cocean_plant::my_init(void *p)
{
	this->name = "Cocean_plant";
	this->alias = "ocean_plant";
	return 0;
}

Cocean_plant::Cocean_plant()
{
	this->my_init();
}

Cocean_plant::~Cocean_plant()
{

}

#ifndef OCEAN_PLANT_TEST
#define OCEAN_PLANT_TEST 0//1
#endif

#if OCEAN_PLANT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
