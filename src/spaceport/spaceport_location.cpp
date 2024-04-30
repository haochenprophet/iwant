#include "spaceport_location.h"
int Cspaceport_location::my_init(void *p)
{
	this->name = "Cspaceport_location";
	this->alias = "spaceport_location";
	return 0;
}

Cspaceport_location::Cspaceport_location()
{
	this->my_init();
}

Cspaceport_location::~Cspaceport_location()
{

}

#ifndef SPACEPORT_LOCATION_TEST
#define SPACEPORT_LOCATION_TEST 0//1
#endif

#if SPACEPORT_LOCATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
