#include "spaceport_water.h"
int Cspaceport_water::my_init(void *p)
{
	this->name = "Cspaceport_water";
	this->alias = "spaceport_water";
	return 0;
}

Cspaceport_water::Cspaceport_water()
{
	this->my_init();
}

Cspaceport_water::~Cspaceport_water()
{

}

#ifndef SPACEPORT_WATER_TEST
#define SPACEPORT_WATER_TEST 0//1
#endif

#if SPACEPORT_WATER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
