#include "security_door.h"
int Csecurity_door::my_init(void *p)
{
	this->name = "Csecurity_door";
	this->alias = "security_door";
	return 0;
}

Csecurity_door::Csecurity_door()
{
	this->my_init();
}

Csecurity_door::~Csecurity_door()
{

}

#ifndef SECURITY_DOOR_TEST
#define SECURITY_DOOR_TEST 0//1
#endif

#if SECURITY_DOOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
