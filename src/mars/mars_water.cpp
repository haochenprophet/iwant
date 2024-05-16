#include "mars_water.h"
int Cmars_water::my_init(void *p)
{
	this->name = "Cmars_water";
	this->alias = "mars_water";
	return 0;
}

Cmars_water::Cmars_water()
{
	this->my_init();
}

Cmars_water::~Cmars_water()
{

}

#ifndef MARS_WATER_TEST
#define MARS_WATER_TEST 0//1
#endif

#if MARS_WATER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
