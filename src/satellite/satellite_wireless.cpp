#include "satellite_wireless.h"
int Csatellite_wireless::my_init(void *p)
{
	this->name = "Csatellite_wireless";
	this->alias = "satellite_wireless";
	return 0;
}

Csatellite_wireless::Csatellite_wireless()
{
	this->my_init();
}

Csatellite_wireless::~Csatellite_wireless()
{

}

#ifndef SATELLITE_WIRELESS_TEST
#define SATELLITE_WIRELESS_TEST 0//1
#endif

#if SATELLITE_WIRELESS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
