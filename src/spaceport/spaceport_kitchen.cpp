#include "spaceport_kitchen.h"
int Cspaceport_kitchen::my_init(void *p)
{
	this->name = "Cspaceport_kitchen";
	this->alias = "spaceport_kitchen";
	return 0;
}

Cspaceport_kitchen::Cspaceport_kitchen()
{
	this->my_init();
}

Cspaceport_kitchen::~Cspaceport_kitchen()
{

}

#ifndef SPACEPORT_KITCHEN_TEST
#define SPACEPORT_KITCHEN_TEST 0//1
#endif

#if SPACEPORT_KITCHEN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
