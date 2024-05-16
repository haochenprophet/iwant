#include "satellite_ssd.h"
int Csatellite_ssd::my_init(void *p)
{
	this->name = "Csatellite_ssd";
	this->alias = "satellite_ssd";
	return 0;
}

Csatellite_ssd::Csatellite_ssd()
{
	this->my_init();
}

Csatellite_ssd::~Csatellite_ssd()
{

}

#ifndef SATELLITE_SSD_TEST
#define SATELLITE_SSD_TEST 0//1
#endif

#if SATELLITE_SSD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
