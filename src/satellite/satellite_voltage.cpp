#include "satellite_voltage.h"
int Csatellite_voltage::my_init(void *p)
{
	this->name = "Csatellite_voltage";
	this->alias = "satellite_voltage";
	return 0;
}

Csatellite_voltage::Csatellite_voltage()
{
	this->my_init();
}

Csatellite_voltage::~Csatellite_voltage()
{

}

#ifndef SATELLITE_VOLTAGE_TEST
#define SATELLITE_VOLTAGE_TEST 0//1
#endif

#if SATELLITE_VOLTAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
