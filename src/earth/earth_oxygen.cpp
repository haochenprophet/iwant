#include "earth_oxygen.h"
int Cearth_oxygen::my_init(void *p)
{
	this->name = "Cearth_oxygen";
	this->alias = "earth_oxygen";
	return 0;
}

Cearth_oxygen::Cearth_oxygen()
{
	this->my_init();
}

Cearth_oxygen::~Cearth_oxygen()
{

}

#ifndef EARTH_OXYGEN_TEST
#define EARTH_OXYGEN_TEST 0//1
#endif

#if EARTH_OXYGEN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
