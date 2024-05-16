#include "spaceport_storeroom.h"
int Cspaceport_storeroom::my_init(void *p)
{
	this->name = "Cspaceport_storeroom";
	this->alias = "spaceport_storeroom";
	return 0;
}

Cspaceport_storeroom::Cspaceport_storeroom()
{
	this->my_init();
}

Cspaceport_storeroom::~Cspaceport_storeroom()
{

}

#ifndef SPACEPORT_STOREROOM_TEST
#define SPACEPORT_STOREROOM_TEST 0//1
#endif

#if SPACEPORT_STOREROOM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
