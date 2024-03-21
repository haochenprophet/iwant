#include "satellite_broadcast.h"
int Csatellite_broadcast::my_init(void *p)
{
	this->name = "Csatellite_broadcast";
	this->alias = "satellite_broadcast";
	return 0;
}

Csatellite_broadcast::Csatellite_broadcast()
{
	this->my_init();
}

Csatellite_broadcast::~Csatellite_broadcast()
{

}

#ifndef SATELLITE_BROADCAST_TEST
#define SATELLITE_BROADCAST_TEST 0//1
#endif

#if SATELLITE_BROADCAST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
