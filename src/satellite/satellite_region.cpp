#include "satellite_region.h"
int Csatellite_region::my_init(void *p)
{
	this->name = "Csatellite_region";
	this->alias = "satellite_region";
	return 0;
}

Csatellite_region::Csatellite_region()
{
	this->my_init();
}

Csatellite_region::~Csatellite_region()
{

}

#ifndef SATELLITE_REGION_TEST
#define SATELLITE_REGION_TEST 0//1
#endif

#if SATELLITE_REGION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
