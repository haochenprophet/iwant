#include "spaceport_room.h"
int Cspaceport_room::my_init(void *p)
{
	this->name = "Cspaceport_room";
	this->alias = "spaceport_room";
	return 0;
}

Cspaceport_room::Cspaceport_room()
{
	this->my_init();
}

Cspaceport_room::~Cspaceport_room()
{

}

#ifndef SPACEPORT_ROOM_TEST
#define SPACEPORT_ROOM_TEST 0//1
#endif

#if SPACEPORT_ROOM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
