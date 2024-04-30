#include "mars_satellite.h"
int Cmars_satellite::my_init(void *p)
{
	this->name = "Cmars_satellite";
	this->alias = "mars_satellite";
	return 0;
}

Cmars_satellite::Cmars_satellite()
{
	this->my_init();
}

Cmars_satellite::~Cmars_satellite()
{

}

#ifndef MARS_SATELLITE_TEST
#define MARS_SATELLITE_TEST 0//1
#endif

#if MARS_SATELLITE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
