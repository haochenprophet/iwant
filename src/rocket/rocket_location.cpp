#include "rocket_location.h"
int Crocket_location::my_init(void *p)
{
	this->name = "Crocket_location";
	this->alias = "rocket_location";
	return 0;
}

Crocket_location::Crocket_location()
{
	this->my_init();
}

Crocket_location::~Crocket_location()
{

}

#ifndef ROCKET_LOCATION_TEST
#define ROCKET_LOCATION_TEST 0//1
#endif

#if ROCKET_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
