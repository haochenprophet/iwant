#include "satellite_logo.h"
int Csatellite_logo::my_init(void *p)
{
	this->name = "Csatellite_logo";
	this->alias = "satellite_logo";
	return 0;
}

Csatellite_logo::Csatellite_logo()
{
	this->my_init();
}

Csatellite_logo::~Csatellite_logo()
{

}

#ifndef SATELLITE_LOGO_TEST
#define SATELLITE_LOGO_TEST 0//1
#endif

#if SATELLITE_LOGO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
