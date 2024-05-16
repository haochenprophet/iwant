#include "spaceport_oxygen.h"
int Cspaceport_oxygen::my_init(void *p)
{
	this->name = "Cspaceport_oxygen";
	this->alias = "spaceport_oxygen";
	return 0;
}

Cspaceport_oxygen::Cspaceport_oxygen()
{
	this->my_init();
}

Cspaceport_oxygen::~Cspaceport_oxygen()
{

}

#ifndef SPACEPORT_OXYGEN_TEST
#define SPACEPORT_OXYGEN_TEST 0//1
#endif

#if SPACEPORT_OXYGEN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
