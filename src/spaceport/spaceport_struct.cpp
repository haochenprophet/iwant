#include "spaceport_struct.h"
int Cspaceport_struct::my_init(void *p)
{
	this->name = "Cspaceport_struct";
	this->alias = "spaceport_struct";
	return 0;
}

Cspaceport_struct::Cspaceport_struct()
{
	this->my_init();
}

Cspaceport_struct::~Cspaceport_struct()
{

}

#ifndef SPACEPORT_STRUCT_TEST
#define SPACEPORT_STRUCT_TEST 0//1
#endif

#if SPACEPORT_STRUCT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
