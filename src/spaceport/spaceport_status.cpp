#include "spaceport_status.h"
int Cspaceport_status::my_init(void *p)
{
	this->name = "Cspaceport_status";
	this->alias = "spaceport_status";
	return 0;
}

Cspaceport_status::Cspaceport_status()
{
	this->my_init();
}

Cspaceport_status::~Cspaceport_status()
{

}

#ifndef SPACEPORT_STATUS_TEST
#define SPACEPORT_STATUS_TEST 0//1
#endif

#if SPACEPORT_STATUS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
