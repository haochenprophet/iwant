#include "satellite_mileage.h"
int Csatellite_mileage::my_init(void *p)
{
	this->name = "Csatellite_mileage";
	this->alias = "satellite_mileage";
	return 0;
}

Csatellite_mileage::Csatellite_mileage()
{
	this->my_init();
}

Csatellite_mileage::~Csatellite_mileage()
{

}

#ifndef SATELLITE_MILEAGE_TEST
#define SATELLITE_MILEAGE_TEST 0//1
#endif

#if SATELLITE_MILEAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
