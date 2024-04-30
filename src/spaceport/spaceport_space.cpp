#include "spaceport_space.h"
int Cspaceport_space::my_init(void *p)
{
	this->name = "Cspaceport_space";
	this->alias = "spaceport_space";
	return 0;
}

Cspaceport_space::Cspaceport_space()
{
	this->my_init();
}

Cspaceport_space::~Cspaceport_space()
{

}

#ifndef SPACEPORT_SPACE_TEST
#define SPACEPORT_SPACE_TEST 0//1
#endif

#if SPACEPORT_SPACE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
