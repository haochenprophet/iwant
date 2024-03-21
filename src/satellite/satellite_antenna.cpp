#include "satellite_antenna.h"
int Csatellite_antenna::my_init(void *p)
{
	this->name = "Csatellite_antenna";
	this->alias = "satellite_antenna";
	return 0;
}

Csatellite_antenna::Csatellite_antenna()
{
	this->my_init();
}

Csatellite_antenna::~Csatellite_antenna()
{

}

#ifndef SATELLITE_ANTENNA_TEST
#define SATELLITE_ANTENNA_TEST 0//1
#endif

#if SATELLITE_ANTENNA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
