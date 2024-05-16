#include "security_room.h"
int Csecurity_room::my_init(void *p)
{
	this->name = "Csecurity_room";
	this->alias = "security_room";
	return 0;
}

Csecurity_room::Csecurity_room()
{
	this->my_init();
}

Csecurity_room::~Csecurity_room()
{

}

#ifndef SECURITY_ROOM_TEST
#define SECURITY_ROOM_TEST 0//1
#endif

#if SECURITY_ROOM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
