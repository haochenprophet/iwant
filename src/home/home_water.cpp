#include "home_water.h"
int Chome_water::my_init(void *p)
{
	this->name = "Chome_water";
	this->alias = "home_water";
	return 0;
}

Chome_water::Chome_water()
{
	this->my_init();
}

Chome_water::~Chome_water()
{

}

#ifndef HOME_WATER_TEST
#define HOME_WATER_TEST 0//1
#endif

#if HOME_WATER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
