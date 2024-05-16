#include "radar_slant_distance.h"
int Cradar_slant_distance::my_init(void *p)
{
	this->name = "Cradar_slant_distance";
	this->alias = "radar_slant_distance";
	return 0;
}

Cradar_slant_distance::Cradar_slant_distance()
{
	this->my_init();
}

Cradar_slant_distance::~Cradar_slant_distance()
{

}

#ifndef RADAR_SLANT_DISTANCE_TEST
#define RADAR_SLANT_DISTANCE_TEST 0//1
#endif

#if RADAR_SLANT_DISTANCE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
