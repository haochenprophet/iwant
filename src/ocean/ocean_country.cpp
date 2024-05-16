#include "ocean_country.h"
int Cocean_country::my_init(void *p)
{
	this->name = "Cocean_country";
	this->alias = "ocean_country";
	return 0;
}

Cocean_country::Cocean_country()
{
	this->my_init();
}

Cocean_country::~Cocean_country()
{

}

#ifndef OCEAN_COUNTRY_TEST
#define OCEAN_COUNTRY_TEST 0//1
#endif

#if OCEAN_COUNTRY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
