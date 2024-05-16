#include "satellite_umbrella.h"
int Csatellite_umbrella::my_init(void *p)
{
	this->name = "Csatellite_umbrella";
	this->alias = "satellite_umbrella";
	return 0;
}

Csatellite_umbrella::Csatellite_umbrella()
{
	this->my_init();
}

Csatellite_umbrella::~Csatellite_umbrella()
{

}

#ifndef SATELLITE_UMBRELLA_TEST
#define SATELLITE_UMBRELLA_TEST 0//1
#endif

#if SATELLITE_UMBRELLA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
