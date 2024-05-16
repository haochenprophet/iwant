#include "spaceport_floor.h"
int Cspaceport_floor::my_init(void *p)
{
	this->name = "Cspaceport_floor";
	this->alias = "spaceport_floor";
	return 0;
}

Cspaceport_floor::Cspaceport_floor()
{
	this->my_init();
}

Cspaceport_floor::~Cspaceport_floor()
{

}

#ifndef SPACEPORT_FLOOR_TEST
#define SPACEPORT_FLOOR_TEST 0//1
#endif

#if SPACEPORT_FLOOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
