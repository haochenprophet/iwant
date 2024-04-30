#include "spaceport_object.h"
int Cspaceport_object::my_init(void *p)
{
	this->name = "Cspaceport_object";
	this->alias = "spaceport_object";
	return 0;
}

Cspaceport_object::Cspaceport_object()
{
	this->my_init();
}

Cspaceport_object::~Cspaceport_object()
{

}

#ifndef SPACEPORT_OBJECT_TEST
#define SPACEPORT_OBJECT_TEST 0//1
#endif

#if SPACEPORT_OBJECT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
