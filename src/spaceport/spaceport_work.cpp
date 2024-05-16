#include "spaceport_work.h"
int Cspaceport_work::my_init(void *p)
{
	this->name = "Cspaceport_work";
	this->alias = "spaceport_work";
	return 0;
}

Cspaceport_work::Cspaceport_work()
{
	this->my_init();
}

Cspaceport_work::~Cspaceport_work()
{

}

#ifndef SPACEPORT_WORK_TEST
#define SPACEPORT_WORK_TEST 0//1
#endif

#if SPACEPORT_WORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
