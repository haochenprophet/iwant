#include "spaceport_pet.h"
int Cspaceport_pet::my_init(void *p)
{
	this->name = "Cspaceport_pet";
	this->alias = "spaceport_pet";
	return 0;
}

Cspaceport_pet::Cspaceport_pet()
{
	this->my_init();
}

Cspaceport_pet::~Cspaceport_pet()
{

}

#ifndef SPACEPORT_PET_TEST
#define SPACEPORT_PET_TEST 0//1
#endif

#if SPACEPORT_PET_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
