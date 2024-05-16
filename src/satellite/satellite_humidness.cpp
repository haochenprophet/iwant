#include "satellite_humidness.h"
int Csatellite_humidness::my_init(void *p)
{
	this->name = "Csatellite_humidness";
	this->alias = "satellite_humidness";
	return 0;
}

Csatellite_humidness::Csatellite_humidness()
{
	this->my_init();
}

Csatellite_humidness::~Csatellite_humidness()
{

}

#ifndef SATELLITE_HUMIDNESS_TEST
#define SATELLITE_HUMIDNESS_TEST 0//1
#endif

#if SATELLITE_HUMIDNESS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
