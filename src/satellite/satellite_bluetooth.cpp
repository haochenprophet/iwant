#include "satellite_bluetooth.h"
int Csatellite_bluetooth::my_init(void *p)
{
	this->name = "Csatellite_bluetooth";
	this->alias = "satellite_bluetooth";
	return 0;
}

Csatellite_bluetooth::Csatellite_bluetooth()
{
	this->my_init();
}

Csatellite_bluetooth::~Csatellite_bluetooth()
{

}

#ifndef SATELLITE_BLUETOOTH_TEST
#define SATELLITE_BLUETOOTH_TEST 0//1
#endif

#if SATELLITE_BLUETOOTH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
