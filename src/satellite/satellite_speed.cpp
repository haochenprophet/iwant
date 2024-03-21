#include "satellite_speed.h"
int Csatellite_speed::my_init(void *p)
{
	this->name = "Csatellite_speed";
	this->alias = "satellite_speed";
	return 0;
}

Csatellite_speed::Csatellite_speed()
{
	this->my_init();
}

Csatellite_speed::~Csatellite_speed()
{

}

#ifndef SATELLITE_SPEED_TEST
#define SATELLITE_SPEED_TEST 0//1
#endif

#if SATELLITE_SPEED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
