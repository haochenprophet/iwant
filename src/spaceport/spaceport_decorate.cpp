#include "spaceport_decorate.h"
int Cspaceport_decorate::my_init(void *p)
{
	this->name = "Cspaceport_decorate";
	this->alias = "spaceport_decorate";
	return 0;
}

Cspaceport_decorate::Cspaceport_decorate()
{
	this->my_init();
}

Cspaceport_decorate::~Cspaceport_decorate()
{

}

#ifndef SPACEPORT_DECORATE_TEST
#define SPACEPORT_DECORATE_TEST 0//1
#endif

#if SPACEPORT_DECORATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
