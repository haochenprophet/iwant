#include "satellite_steer.h"
int Csatellite_steer::my_init(void *p)
{
	this->name = "Csatellite_steer";
	this->alias = "satellite_steer";
	return 0;
}

Csatellite_steer::Csatellite_steer()
{
	this->my_init();
}

Csatellite_steer::~Csatellite_steer()
{

}

#ifndef SATELLITE_STEER_TEST
#define SATELLITE_STEER_TEST 0//1
#endif

#if SATELLITE_STEER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
