#include "satellite_trunk.h"
int Csatellite_trunk::my_init(void *p)
{
	this->name = "Csatellite_trunk";
	this->alias = "satellite_trunk";
	return 0;
}

Csatellite_trunk::Csatellite_trunk()
{
	this->my_init();
}

Csatellite_trunk::~Csatellite_trunk()
{

}

#ifndef SATELLITE_TRUNK_TEST
#define SATELLITE_TRUNK_TEST 0//1
#endif

#if SATELLITE_TRUNK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
