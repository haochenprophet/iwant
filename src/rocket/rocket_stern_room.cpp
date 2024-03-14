#include "rocket_stern_room.h"
int Crocket_stern_room::my_init(void *p)
{
	this->name = "Crocket_stern_room";
	this->alias = "rocket_stern_room";
	return 0;
}

Crocket_stern_room::Crocket_stern_room()
{
	this->my_init();
}

Crocket_stern_room::~Crocket_stern_room()
{

}

#ifndef ROCKET_STERN_ROOM_TEST
#define ROCKET_STERN_ROOM_TEST 0//1
#endif

#if ROCKET_STERN_ROOM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
