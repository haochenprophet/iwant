#include "home_cook.h"
int Chome_cook::my_init(void *p)
{
	this->name = "Chome_cook";
	this->alias = "home_cook";
	return 0;
}

Chome_cook::Chome_cook()
{
	this->my_init();
}

Chome_cook::~Chome_cook()
{

}

#ifndef HOME_COOK_TEST
#define HOME_COOK_TEST 0//1
#endif

#if HOME_COOK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
