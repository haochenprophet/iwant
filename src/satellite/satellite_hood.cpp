#include "satellite_hood.h"
int Csatellite_hood::my_init(void *p)
{
	this->name = "Csatellite_hood";
	this->alias = "satellite_hood";
	return 0;
}

Csatellite_hood::Csatellite_hood()
{
	this->my_init();
}

Csatellite_hood::~Csatellite_hood()
{

}

#ifndef SATELLITE_HOOD_TEST
#define SATELLITE_HOOD_TEST 0//1
#endif

#if SATELLITE_HOOD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
