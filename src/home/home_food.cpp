#include "home_food.h"
int Chome_food::my_init(void *p)
{
	this->name = "Chome_food";
	this->alias = "home_food";
	return 0;
}

Chome_food::Chome_food()
{
	this->my_init();
}

Chome_food::~Chome_food()
{

}

#ifndef HOME_FOOD_TEST
#define HOME_FOOD_TEST 0//1
#endif

#if HOME_FOOD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
