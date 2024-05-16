#include "spaceport_back.h"
int Cspaceport_back::my_init(void *p)
{
	this->name = "Cspaceport_back";
	this->alias = "spaceport_back";
	return 0;
}

Cspaceport_back::Cspaceport_back()
{
	this->my_init();
}

Cspaceport_back::~Cspaceport_back()
{

}

#ifndef SPACEPORT_BACK_TEST
#define SPACEPORT_BACK_TEST 0//1
#endif

#if SPACEPORT_BACK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
