#include "satellite_rescue.h"
int Csatellite_rescue::my_init(void *p)
{
	this->name = "Csatellite_rescue";
	this->alias = "satellite_rescue";
	return 0;
}

Csatellite_rescue::Csatellite_rescue()
{
	this->my_init();
}

Csatellite_rescue::~Csatellite_rescue()
{

}

#ifndef SATELLITE_RESCUE_TEST
#define SATELLITE_RESCUE_TEST 0//1
#endif

#if SATELLITE_RESCUE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
