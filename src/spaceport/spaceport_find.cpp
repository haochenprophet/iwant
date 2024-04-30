#include "spaceport_find.h"
int Cspaceport_find::my_init(void *p)
{
	this->name = "Cspaceport_find";
	this->alias = "spaceport_find";
	return 0;
}

Cspaceport_find::Cspaceport_find()
{
	this->my_init();
}

Cspaceport_find::~Cspaceport_find()
{

}

#ifndef SPACEPORT_FIND_TEST
#define SPACEPORT_FIND_TEST 0//1
#endif

#if SPACEPORT_FIND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
