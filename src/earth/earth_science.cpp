#include "earth_science.h"
int Cearth_science::my_init(void *p)
{
	this->name = "Cearth_science";
	this->alias = "earth_science";
	return 0;
}

Cearth_science::Cearth_science()
{
	this->my_init();
}

Cearth_science::~Cearth_science()
{

}

#ifndef EARTH_SCIENCE_TEST
#define EARTH_SCIENCE_TEST 0//1
#endif

#if EARTH_SCIENCE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
