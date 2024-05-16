#include "home_room.h"
int Chome_room::my_init(void *p)
{
	this->name = "Chome_room";
	this->alias = "home_room";
	return 0;
}

Chome_room::Chome_room()
{
	this->my_init();
}

Chome_room::~Chome_room()
{

}

#ifndef HOME_ROOM_TEST
#define HOME_ROOM_TEST 0//1
#endif

#if HOME_ROOM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
