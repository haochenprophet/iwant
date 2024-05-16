#include "spaceport_plant.h"
int Cspaceport_plant::my_init(void *p)
{
	this->name = "Cspaceport_plant";
	this->alias = "spaceport_plant";
	return 0;
}

Cspaceport_plant::Cspaceport_plant()
{
	this->my_init();
}

Cspaceport_plant::~Cspaceport_plant()
{

}

#ifndef SPACEPORT_PLANT_TEST
#define SPACEPORT_PLANT_TEST 0//1
#endif

#if SPACEPORT_PLANT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
