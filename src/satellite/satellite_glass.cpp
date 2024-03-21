#include "satellite_glass.h"
int Csatellite_glass::my_init(void *p)
{
	this->name = "Csatellite_glass";
	this->alias = "satellite_glass";
	return 0;
}

Csatellite_glass::Csatellite_glass()
{
	this->my_init();
}

Csatellite_glass::~Csatellite_glass()
{

}

#ifndef SATELLITE_GLASS_TEST
#define SATELLITE_GLASS_TEST 0//1
#endif

#if SATELLITE_GLASS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
