#include "ocean_radar.h"
int Cocean_radar::my_init(void *p)
{
	this->name = "Cocean_radar";
	this->alias = "ocean_radar";
	return 0;
}

Cocean_radar::Cocean_radar()
{
	this->my_init();
}

Cocean_radar::~Cocean_radar()
{

}

#ifndef OCEAN_RADAR_TEST
#define OCEAN_RADAR_TEST 0//1
#endif

#if OCEAN_RADAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
