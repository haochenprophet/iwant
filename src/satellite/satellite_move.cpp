#include "satellite_move.h"
int Csatellite_move::my_init(void *p)
{
	this->name = "Csatellite_move";
	this->alias = "satellite_move";
	return 0;
}

Csatellite_move::Csatellite_move()
{
	this->my_init();
}

Csatellite_move::~Csatellite_move()
{

}

#ifndef SATELLITE_MOVE_TEST
#define SATELLITE_MOVE_TEST 0//1
#endif

#if SATELLITE_MOVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
