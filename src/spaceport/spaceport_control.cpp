#include "spaceport_control.h"
int Cspaceport_control::my_init(void *p)
{
	this->name = "Cspaceport_control";
	this->alias = "spaceport_control";
	return 0;
}

Cspaceport_control::Cspaceport_control()
{
	this->my_init();
}

Cspaceport_control::~Cspaceport_control()
{

}

#ifndef SPACEPORT_CONTROL_TEST
#define SPACEPORT_CONTROL_TEST 0//1
#endif

#if SPACEPORT_CONTROL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
