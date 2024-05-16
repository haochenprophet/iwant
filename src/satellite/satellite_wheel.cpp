#include "satellite_wheel.h"
int Csatellite_wheel::my_init(void *p)
{
	this->name = "Csatellite_wheel";
	this->alias = "satellite_wheel";
	return 0;
}

Csatellite_wheel::Csatellite_wheel()
{
	this->my_init();
}

Csatellite_wheel::~Csatellite_wheel()
{

}

#ifndef SATELLITE_WHEEL_TEST
#define SATELLITE_WHEEL_TEST 0//1
#endif

#if SATELLITE_WHEEL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
