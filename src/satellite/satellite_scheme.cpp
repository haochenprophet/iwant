#include "satellite_scheme.h"
int Csatellite_scheme::my_init(void *p)
{
	this->name = "Csatellite_scheme";
	this->alias = "satellite_scheme";
	return 0;
}

Csatellite_scheme::Csatellite_scheme()
{
	this->my_init();
}

Csatellite_scheme::~Csatellite_scheme()
{

}

#ifndef SATELLITE_SCHEME_TEST
#define SATELLITE_SCHEME_TEST 0//1
#endif

#if SATELLITE_SCHEME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
