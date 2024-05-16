#include "satellite_about.h"
int Csatellite_about::my_init(void *p)
{
	this->name = "Csatellite_about";
	this->alias = "satellite_about";
	return 0;
}

Csatellite_about::Csatellite_about()
{
	this->my_init();
}

Csatellite_about::~Csatellite_about()
{

}

#ifndef SATELLITE_ABOUT_TEST
#define SATELLITE_ABOUT_TEST 0//1
#endif

#if SATELLITE_ABOUT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
