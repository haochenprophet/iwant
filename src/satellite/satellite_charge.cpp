#include "satellite_charge.h"
int Csatellite_charge::my_init(void *p)
{
	this->name = "Csatellite_charge";
	this->alias = "satellite_charge";
	return 0;
}

Csatellite_charge::Csatellite_charge()
{
	this->my_init();
}

Csatellite_charge::~Csatellite_charge()
{

}

#ifndef SATELLITE_CHARGE_TEST
#define SATELLITE_CHARGE_TEST 0//1
#endif

#if SATELLITE_CHARGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
