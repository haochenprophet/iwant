#include "satellite_start.h"
int Csatellite_start::my_init(void *p)
{
	this->name = "Csatellite_start";
	this->alias = "satellite_start";
	return 0;
}

Csatellite_start::Csatellite_start()
{
	this->my_init();
}

Csatellite_start::~Csatellite_start()
{

}

#ifndef SATELLITE_START_TEST
#define SATELLITE_START_TEST 0//1
#endif

#if SATELLITE_START_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
