#include "earth_technology.h"
int Cearth_technology::my_init(void *p)
{
	this->name = "Cearth_technology";
	this->alias = "earth_technology";
	return 0;
}

Cearth_technology::Cearth_technology()
{
	this->my_init();
}

Cearth_technology::~Cearth_technology()
{

}

#ifndef EARTH_TECHNOLOGY_TEST
#define EARTH_TECHNOLOGY_TEST 0//1
#endif

#if EARTH_TECHNOLOGY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
