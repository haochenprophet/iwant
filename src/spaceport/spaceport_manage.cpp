#include "spaceport_manage.h"
int Cspaceport_manage::my_init(void *p)
{
	this->name = "Cspaceport_manage";
	this->alias = "spaceport_manage";
	return 0;
}

Cspaceport_manage::Cspaceport_manage()
{
	this->my_init();
}

Cspaceport_manage::~Cspaceport_manage()
{

}

#ifndef SPACEPORT_MANAGE_TEST
#define SPACEPORT_MANAGE_TEST 0//1
#endif

#if SPACEPORT_MANAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
