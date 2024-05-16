#include "earth_plant.h"
int Cearth_plant::my_init(void *p)
{
	this->name = "Cearth_plant";
	this->alias = "earth_plant";
	return 0;
}

Cearth_plant::Cearth_plant()
{
	this->my_init();
}

Cearth_plant::~Cearth_plant()
{

}

#ifndef EARTH_PLANT_TEST
#define EARTH_PLANT_TEST 0//1
#endif

#if EARTH_PLANT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
