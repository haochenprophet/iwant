#include "earth_business.h"
int Cearth_business::my_init(void *p)
{
	this->name = "Cearth_business";
	this->alias = "earth_business";
	return 0;
}

Cearth_business::Cearth_business()
{
	this->my_init();
}

Cearth_business::~Cearth_business()
{

}

#ifndef EARTH_BUSINESS_TEST
#define EARTH_BUSINESS_TEST 0//1
#endif

#if EARTH_BUSINESS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
