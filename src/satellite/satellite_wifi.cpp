#include "satellite_wifi.h"
int Csatellite_wifi::my_init(void *p)
{
	this->name = "Csatellite_wifi";
	this->alias = "satellite_wifi";
	return 0;
}

Csatellite_wifi::Csatellite_wifi()
{
	this->my_init();
}

Csatellite_wifi::~Csatellite_wifi()
{

}

#ifndef SATELLITE_WIFI_TEST
#define SATELLITE_WIFI_TEST 0//1
#endif

#if SATELLITE_WIFI_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
