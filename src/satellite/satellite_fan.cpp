#include "satellite_fan.h"
int Csatellite_fan::my_init(void *p)
{
	this->name = "Csatellite_fan";
	this->alias = "satellite_fan";
	return 0;
}

Csatellite_fan::Csatellite_fan()
{
	this->my_init();
}

Csatellite_fan::~Csatellite_fan()
{

}

#ifndef SATELLITE_FAN_TEST
#define SATELLITE_FAN_TEST 0//1
#endif

#if SATELLITE_FAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
