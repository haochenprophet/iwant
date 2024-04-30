#include "spaceport_update.h"
int Cspaceport_update::my_init(void *p)
{
	this->name = "Cspaceport_update";
	this->alias = "spaceport_update";
	return 0;
}

Cspaceport_update::Cspaceport_update()
{
	this->my_init();
}

Cspaceport_update::~Cspaceport_update()
{

}

#ifndef SPACEPORT_UPDATE_TEST
#define SPACEPORT_UPDATE_TEST 0//1
#endif

#if SPACEPORT_UPDATE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
