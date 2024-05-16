#include "earth_economic.h"
int Cearth_economic::my_init(void *p)
{
	this->name = "Cearth_economic";
	this->alias = "earth_economic";
	return 0;
}

Cearth_economic::Cearth_economic()
{
	this->my_init();
}

Cearth_economic::~Cearth_economic()
{

}

#ifndef EARTH_ECONOMIC_TEST
#define EARTH_ECONOMIC_TEST 0//1
#endif

#if EARTH_ECONOMIC_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
