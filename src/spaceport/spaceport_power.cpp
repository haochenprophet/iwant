#include "spaceport_power.h"
int Cspaceport_power::my_init(void *p)
{
	this->name = "Cspaceport_power";
	this->alias = "spaceport_power";
	return 0;
}

Cspaceport_power::Cspaceport_power()
{
	this->my_init();
}

Cspaceport_power::~Cspaceport_power()
{

}

#ifndef SPACEPORT_POWER_TEST
#define SPACEPORT_POWER_TEST 0//1
#endif

#if SPACEPORT_POWER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
