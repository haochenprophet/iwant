#include "satellite_device.h"
int Csatellite_device::my_init(void *p)
{
	this->name = "Csatellite_device";
	this->alias = "satellite_device";
	return 0;
}

Csatellite_device::Csatellite_device()
{
	this->my_init();
}

Csatellite_device::~Csatellite_device()
{

}

#ifndef SATELLITE_DEVICE_TEST
#define SATELLITE_DEVICE_TEST 0//1
#endif

#if SATELLITE_DEVICE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
