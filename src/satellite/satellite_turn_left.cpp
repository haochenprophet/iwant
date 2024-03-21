#include "satellite_turn_left.h"
int Csatellite_turn_left::my_init(void *p)
{
	this->name = "Csatellite_turn_left";
	this->alias = "satellite_turn_left";
	return 0;
}

Csatellite_turn_left::Csatellite_turn_left()
{
	this->my_init();
}

Csatellite_turn_left::~Csatellite_turn_left()
{

}

#ifndef SATELLITE_TURN_LEFT_TEST
#define SATELLITE_TURN_LEFT_TEST 0//1
#endif

#if SATELLITE_TURN_LEFT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
