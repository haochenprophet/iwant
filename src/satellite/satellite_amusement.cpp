#include "satellite_amusement.h"
int Csatellite_amusement::my_init(void *p)
{
	this->name = "Csatellite_amusement";
	this->alias = "satellite_amusement";
	return 0;
}

Csatellite_amusement::Csatellite_amusement()
{
	this->my_init();
}

Csatellite_amusement::~Csatellite_amusement()
{

}

#ifndef SATELLITE_AMUSEMENT_TEST
#define SATELLITE_AMUSEMENT_TEST 0//1
#endif

#if SATELLITE_AMUSEMENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
