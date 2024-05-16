#include "satellite_fire.h"
int Csatellite_fire::my_init(void *p)
{
	this->name = "Csatellite_fire";
	this->alias = "satellite_fire";
	return 0;
}

Csatellite_fire::Csatellite_fire()
{
	this->my_init();
}

Csatellite_fire::~Csatellite_fire()
{

}

#ifndef SATELLITE_FIRE_TEST
#define SATELLITE_FIRE_TEST 0//1
#endif

#if SATELLITE_FIRE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
