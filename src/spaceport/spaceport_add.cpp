#include "spaceport_add.h"
int Cspaceport_add::my_init(void *p)
{
	this->name = "Cspaceport_add";
	this->alias = "spaceport_add";
	return 0;
}

Cspaceport_add::Cspaceport_add()
{
	this->my_init();
}

Cspaceport_add::~Cspaceport_add()
{

}

#ifndef SPACEPORT_ADD_TEST
#define SPACEPORT_ADD_TEST 0//1
#endif

#if SPACEPORT_ADD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
