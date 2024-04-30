#include "home_plant.h"
int Chome_plant::my_init(void *p)
{
	this->name = "Chome_plant";
	this->alias = "home_plant";
	return 0;
}

Chome_plant::Chome_plant()
{
	this->my_init();
}

Chome_plant::~Chome_plant()
{

}

#ifndef HOME_PLANT_TEST
#define HOME_PLANT_TEST 0//1
#endif

#if HOME_PLANT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
