#include "satellite_driver.h"
int Csatellite_driver::my_init(void *p)
{
	this->name = "Csatellite_driver";
	this->alias = "satellite_driver";
	return 0;
}

Csatellite_driver::Csatellite_driver()
{
	this->my_init();
}

Csatellite_driver::~Csatellite_driver()
{

}

#ifndef SATELLITE_DRIVER_TEST
#define SATELLITE_DRIVER_TEST 0//1
#endif

#if SATELLITE_DRIVER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
