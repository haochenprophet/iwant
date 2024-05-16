#include "spaceport_air.h"
int Cspaceport_air::my_init(void *p)
{
	this->name = "Cspaceport_air";
	this->alias = "spaceport_air";
	return 0;
}

Cspaceport_air::Cspaceport_air()
{
	this->my_init();
}

Cspaceport_air::~Cspaceport_air()
{

}

#ifndef SPACEPORT_AIR_TEST
#define SPACEPORT_AIR_TEST 0//1
#endif

#if SPACEPORT_AIR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
