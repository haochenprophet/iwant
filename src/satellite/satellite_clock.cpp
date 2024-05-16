#include "satellite_clock.h"
int Csatellite_clock::my_init(void *p)
{
	this->name = "Csatellite_clock";
	this->alias = "satellite_clock";
	return 0;
}

Csatellite_clock::Csatellite_clock()
{
	this->my_init();
}

Csatellite_clock::~Csatellite_clock()
{

}

#ifndef SATELLITE_CLOCK_TEST
#define SATELLITE_CLOCK_TEST 0//1
#endif

#if SATELLITE_CLOCK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
