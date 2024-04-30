#include "home_waste.h"
int Chome_waste::my_init(void *p)
{
	this->name = "Chome_waste";
	this->alias = "home_waste";
	return 0;
}

Chome_waste::Chome_waste()
{
	this->my_init();
}

Chome_waste::~Chome_waste()
{

}

#ifndef HOME_WASTE_TEST
#define HOME_WASTE_TEST 0//1
#endif

#if HOME_WASTE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
