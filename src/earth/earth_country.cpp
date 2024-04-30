#include "earth_country.h"
int Cearth_country::my_init(void *p)
{
	this->name = "Cearth_country";
	this->alias = "earth_country";
	return 0;
}

Cearth_country::Cearth_country()
{
	this->my_init();
}

Cearth_country::~Cearth_country()
{

}

#ifndef EARTH_COUNTRY_TEST
#define EARTH_COUNTRY_TEST 0//1
#endif

#if EARTH_COUNTRY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
