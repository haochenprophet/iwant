#include "spaceport_go.h"
int Cspaceport_go::my_init(void *p)
{
	this->name = "Cspaceport_go";
	this->alias = "spaceport_go";
	return 0;
}

Cspaceport_go::Cspaceport_go()
{
	this->my_init();
}

Cspaceport_go::~Cspaceport_go()
{

}

#ifndef SPACEPORT_GO_TEST
#define SPACEPORT_GO_TEST 0//1
#endif

#if SPACEPORT_GO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
