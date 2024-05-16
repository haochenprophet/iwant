#include "spaceport_wall.h"
int Cspaceport_wall::my_init(void *p)
{
	this->name = "Cspaceport_wall";
	this->alias = "spaceport_wall";
	return 0;
}

Cspaceport_wall::Cspaceport_wall()
{
	this->my_init();
}

Cspaceport_wall::~Cspaceport_wall()
{

}

#ifndef SPACEPORT_WALL_TEST
#define SPACEPORT_WALL_TEST 0//1
#endif

#if SPACEPORT_WALL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
