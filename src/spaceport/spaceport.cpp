#include "spaceport.h"
int Cspaceport::my_init(void *p)
{
	this->name = "Cspaceport";
	this->alias = "spaceport";
	return 0;
}

Cspaceport::Cspaceport()
{
	this->my_init();
}

Cspaceport::~Cspaceport()
{

}

#ifndef SPACEPORT_TEST
#define SPACEPORT_TEST 0//1
#endif

#if SPACEPORT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
