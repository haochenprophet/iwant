#include "mars_location.h"
int Cmars_location::my_init(void *p)
{
	this->name = "Cmars_location";
	this->alias = "mars_location";
	return 0;
}

Cmars_location::Cmars_location()
{
	this->my_init();
}

Cmars_location::~Cmars_location()
{

}

#ifndef MARS_LOCATION_TEST
#define MARS_LOCATION_TEST 0//1
#endif

#if MARS_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
