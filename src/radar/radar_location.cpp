#include "radar_location.h"
int Cradar_location::my_init(void *p)
{
	this->name = "Cradar_location";
	this->alias = "radar_location";
	return 0;
}

Cradar_location::Cradar_location()
{
	this->my_init();
}

Cradar_location::~Cradar_location()
{

}

#ifndef RADAR_LOCATION_TEST
#define RADAR_LOCATION_TEST 0//1
#endif

#if RADAR_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
