#include "home_kitchen.h"
int Chome_kitchen::my_init(void *p)
{
	this->name = "Chome_kitchen";
	this->alias = "home_kitchen";
	return 0;
}

Chome_kitchen::Chome_kitchen()
{
	this->my_init();
}

Chome_kitchen::~Chome_kitchen()
{

}

#ifndef HOME_KITCHEN_TEST
#define HOME_KITCHEN_TEST 0//1
#endif

#if HOME_KITCHEN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
