#include "earth_engineering.h"
int Cearth_engineering::my_init(void *p)
{
	this->name = "Cearth_engineering";
	this->alias = "earth_engineering";
	return 0;
}

Cearth_engineering::Cearth_engineering()
{
	this->my_init();
}

Cearth_engineering::~Cearth_engineering()
{

}

#ifndef EARTH_ENGINEERING_TEST
#define EARTH_ENGINEERING_TEST 0//1
#endif

#if EARTH_ENGINEERING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
