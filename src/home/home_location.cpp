#include "home_location.h"
int Chome_location::my_init(void *p)
{
	this->name = "Chome_location";
	this->alias = "home_location";
	return 0;
}

Chome_location::Chome_location()
{
	this->my_init();
}

Chome_location::~Chome_location()
{

}

#ifndef HOME_LOCATION_TEST
#define HOME_LOCATION_TEST 0//1
#endif

#if HOME_LOCATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
