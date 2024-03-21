#include "satellite_seat.h"
int Csatellite_seat::my_init(void *p)
{
	this->name = "Csatellite_seat";
	this->alias = "satellite_seat";
	return 0;
}

Csatellite_seat::Csatellite_seat()
{
	this->my_init();
}

Csatellite_seat::~Csatellite_seat()
{

}

#ifndef SATELLITE_SEAT_TEST
#define SATELLITE_SEAT_TEST 0//1
#endif

#if SATELLITE_SEAT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
