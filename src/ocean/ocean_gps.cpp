#include "ocean_gps.h"
int Cocean_gps::my_init(void *p)
{
	this->name = "Cocean_gps";
	this->alias = "ocean_gps";
	return 0;
}

Cocean_gps::Cocean_gps()
{
	this->my_init();
}

Cocean_gps::~Cocean_gps()
{

}

#ifndef OCEAN_GPS_TEST
#define OCEAN_GPS_TEST 0//1
#endif

#if OCEAN_GPS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
