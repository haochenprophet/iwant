#include "spaceport_seat.h"
int Cspaceport_seat::my_init(void *p)
{
	this->name = "Cspaceport_seat";
	this->alias = "spaceport_seat";
	return 0;
}

Cspaceport_seat::Cspaceport_seat()
{
	this->my_init();
}

Cspaceport_seat::~Cspaceport_seat()
{

}

#ifndef SPACEPORT_SEAT_TEST
#define SPACEPORT_SEAT_TEST 0//1
#endif

#if SPACEPORT_SEAT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
