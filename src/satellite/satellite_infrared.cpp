#include "satellite_infrared.h"
int Csatellite_infrared::my_init(void *p)
{
	this->name = "Csatellite_infrared";
	this->alias = "satellite_infrared";
	return 0;
}

Csatellite_infrared::Csatellite_infrared()
{
	this->my_init();
}

Csatellite_infrared::~Csatellite_infrared()
{

}

#ifndef SATELLITE_INFRARED_TEST
#define SATELLITE_INFRARED_TEST 0//1
#endif

#if SATELLITE_INFRARED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
