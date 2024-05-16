#include "earth_mechanical.h"
int Cearth_mechanical::my_init(void *p)
{
	this->name = "Cearth_mechanical";
	this->alias = "earth_mechanical";
	return 0;
}

Cearth_mechanical::Cearth_mechanical()
{
	this->my_init();
}

Cearth_mechanical::~Cearth_mechanical()
{

}

#ifndef EARTH_MECHANICAL_TEST
#define EARTH_MECHANICAL_TEST 0//1
#endif

#if EARTH_MECHANICAL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
