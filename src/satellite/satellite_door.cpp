#include "satellite_door.h"
int Csatellite_door::my_init(void *p)
{
	this->name = "Csatellite_door";
	this->alias = "satellite_door";
	return 0;
}

Csatellite_door::Csatellite_door()
{
	this->my_init();
}

Csatellite_door::~Csatellite_door()
{

}

#ifndef SATELLITE_DOOR_TEST
#define SATELLITE_DOOR_TEST 0//1
#endif

#if SATELLITE_DOOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
