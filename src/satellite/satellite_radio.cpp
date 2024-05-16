#include "satellite_radio.h"
int Csatellite_radio::my_init(void *p)
{
	this->name = "Csatellite_radio";
	this->alias = "satellite_radio";
	return 0;
}

Csatellite_radio::Csatellite_radio()
{
	this->my_init();
}

Csatellite_radio::~Csatellite_radio()
{

}

#ifndef SATELLITE_RADIO_TEST
#define SATELLITE_RADIO_TEST 0//1
#endif

#if SATELLITE_RADIO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
