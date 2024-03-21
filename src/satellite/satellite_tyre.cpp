#include "satellite_tyre.h"
int Csatellite_tyre::my_init(void *p)
{
	this->name = "Csatellite_tyre";
	this->alias = "satellite_tyre";
	return 0;
}

Csatellite_tyre::Csatellite_tyre()
{
	this->my_init();
}

Csatellite_tyre::~Csatellite_tyre()
{

}

#ifndef SATELLITE_TYRE_TEST
#define SATELLITE_TYRE_TEST 0//1
#endif

#if SATELLITE_TYRE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
