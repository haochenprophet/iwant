#include "earth_food.h"
int Cearth_food::my_init(void *p)
{
	this->name = "Cearth_food";
	this->alias = "earth_food";
	return 0;
}

Cearth_food::Cearth_food()
{
	this->my_init();
}

Cearth_food::~Cearth_food()
{

}

#ifndef EARTH_FOOD_TEST
#define EARTH_FOOD_TEST 0//1
#endif

#if EARTH_FOOD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
