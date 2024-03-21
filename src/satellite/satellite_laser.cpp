#include "satellite_laser.h"
int Csatellite_laser::my_init(void *p)
{
	this->name = "Csatellite_laser";
	this->alias = "satellite_laser";
	return 0;
}

Csatellite_laser::Csatellite_laser()
{
	this->my_init();
}

Csatellite_laser::~Csatellite_laser()
{

}

#ifndef SATELLITE_LASER_TEST
#define SATELLITE_LASER_TEST 0//1
#endif

#if SATELLITE_LASER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
