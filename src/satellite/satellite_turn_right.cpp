#include "satellite_turn_right.h"
int Csatellite_turn_right::my_init(void *p)
{
	this->name = "Csatellite_turn_right";
	this->alias = "satellite_turn_right";
	return 0;
}

Csatellite_turn_right::Csatellite_turn_right()
{
	this->my_init();
}

Csatellite_turn_right::~Csatellite_turn_right()
{

}

#ifndef SATELLITE_TURN_RIGHT_TEST
#define SATELLITE_TURN_RIGHT_TEST 0//1
#endif

#if SATELLITE_TURN_RIGHT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
