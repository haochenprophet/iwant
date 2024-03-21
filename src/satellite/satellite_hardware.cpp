#include "satellite_hardware.h"
int Csatellite_hardware::my_init(void *p)
{
	this->name = "Csatellite_hardware";
	this->alias = "satellite_hardware";
	return 0;
}

Csatellite_hardware::Csatellite_hardware()
{
	this->my_init();
}

Csatellite_hardware::~Csatellite_hardware()
{

}

#ifndef SATELLITE_HARDWARE_TEST
#define SATELLITE_HARDWARE_TEST 0//1
#endif

#if SATELLITE_HARDWARE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
