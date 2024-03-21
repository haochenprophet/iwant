#include "satellite_impetus.h"
int Csatellite_impetus::my_init(void *p)
{
	this->name = "Csatellite_impetus";
	this->alias = "satellite_impetus";
	return 0;
}

Csatellite_impetus::Csatellite_impetus()
{
	this->my_init();
}

Csatellite_impetus::~Csatellite_impetus()
{

}

#ifndef SATELLITE_IMPETUS_TEST
#define SATELLITE_IMPETUS_TEST 0//1
#endif

#if SATELLITE_IMPETUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
