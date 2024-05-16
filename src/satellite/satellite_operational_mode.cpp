#include "satellite_operational_mode.h"
int Csatellite_operational_mode::my_init(void *p)
{
	this->name = "Csatellite_operational_mode";
	this->alias = "satellite_operational_mode";
	return 0;
}

Csatellite_operational_mode::Csatellite_operational_mode()
{
	this->my_init();
}

Csatellite_operational_mode::~Csatellite_operational_mode()
{

}

#ifndef SATELLITE_OPERATIONAL_MODE_TEST
#define SATELLITE_OPERATIONAL_MODE_TEST 0//1
#endif

#if SATELLITE_OPERATIONAL_MODE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
