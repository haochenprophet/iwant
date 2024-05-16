#include "satellite_rotate_speed.h"
int Csatellite_rotate_speed::my_init(void *p)
{
	this->name = "Csatellite_rotate_speed";
	this->alias = "satellite_rotate_speed";
	return 0;
}

Csatellite_rotate_speed::Csatellite_rotate_speed()
{
	this->my_init();
}

Csatellite_rotate_speed::~Csatellite_rotate_speed()
{

}

#ifndef SATELLITE_ROTATE_SPEED_TEST
#define SATELLITE_ROTATE_SPEED_TEST 0//1
#endif

#if SATELLITE_ROTATE_SPEED_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
