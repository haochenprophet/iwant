#include "spaceport_auto.h"
int Cspaceport_auto::my_init(void *p)
{
	this->name = "Cspaceport_auto";
	this->alias = "spaceport_auto";
	return 0;
}

Cspaceport_auto::Cspaceport_auto()
{
	this->my_init();
}

Cspaceport_auto::~Cspaceport_auto()
{

}

#ifndef SPACEPORT_AUTO_TEST
#define SPACEPORT_AUTO_TEST 0//1
#endif

#if SPACEPORT_AUTO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
