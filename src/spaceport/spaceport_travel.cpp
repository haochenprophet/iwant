#include "spaceport_travel.h"
int Cspaceport_travel::my_init(void *p)
{
	this->name = "Cspaceport_travel";
	this->alias = "spaceport_travel";
	return 0;
}

Cspaceport_travel::Cspaceport_travel()
{
	this->my_init();
}

Cspaceport_travel::~Cspaceport_travel()
{

}

#ifndef SPACEPORT_TRAVEL_TEST
#define SPACEPORT_TRAVEL_TEST 0//1
#endif

#if SPACEPORT_TRAVEL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
