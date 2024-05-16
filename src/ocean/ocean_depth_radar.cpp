#include "ocean_depth_radar.h"
int Cocean_depth_radar::my_init(void *p)
{
	this->name = "Cocean_depth_radar";
	this->alias = "ocean_depth_radar";
	return 0;
}

Cocean_depth_radar::Cocean_depth_radar()
{
	this->my_init();
}

Cocean_depth_radar::~Cocean_depth_radar()
{

}

#ifndef OCEAN_DEPTH_RADAR_TEST
#define OCEAN_DEPTH_RADAR_TEST 0//1
#endif

#if OCEAN_DEPTH_RADAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
