#include "spaceport_waste.h"
int Cspaceport_waste::my_init(void *p)
{
	this->name = "Cspaceport_waste";
	this->alias = "spaceport_waste";
	return 0;
}

Cspaceport_waste::Cspaceport_waste()
{
	this->my_init();
}

Cspaceport_waste::~Cspaceport_waste()
{

}

#ifndef SPACEPORT_WASTE_TEST
#define SPACEPORT_WASTE_TEST 0//1
#endif

#if SPACEPORT_WASTE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
