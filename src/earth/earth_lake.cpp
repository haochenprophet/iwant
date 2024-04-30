#include "earth_lake.h"
int Cearth_lake::my_init(void *p)
{
	this->name = "Cearth_lake";
	this->alias = "earth_lake";
	return 0;
}

Cearth_lake::Cearth_lake()
{
	this->my_init();
}

Cearth_lake::~Cearth_lake()
{

}

#ifndef EARTH_LAKE_TEST
#define EARTH_LAKE_TEST 0//1
#endif

#if EARTH_LAKE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
