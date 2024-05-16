#include "satellite.h"
int Csatellite::my_init(void *p)
{
	this->name = "Csatellite";
	this->alias = "satellite";
	return 0;
}

Csatellite::Csatellite()
{
	this->my_init();
}

Csatellite::~Csatellite()
{

}

#ifndef SATELLITE_TEST
#define SATELLITE_TEST 0//1
#endif

#if SATELLITE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
