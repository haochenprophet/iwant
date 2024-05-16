#include "spaceport_action.h"
int Cspaceport_action::my_init(void *p)
{
	this->name = "Cspaceport_action";
	this->alias = "spaceport_action";
	return 0;
}

Cspaceport_action::Cspaceport_action()
{
	this->my_init();
}

Cspaceport_action::~Cspaceport_action()
{

}

#ifndef SPACEPORT_ACTION_TEST
#define SPACEPORT_ACTION_TEST 0//1
#endif

#if SPACEPORT_ACTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
