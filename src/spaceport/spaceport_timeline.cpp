#include "spaceport_timeline.h"
int Cspaceport_timeline::my_init(void *p)
{
	this->name = "Cspaceport_timeline";
	this->alias = "spaceport_timeline";
	return 0;
}

Cspaceport_timeline::Cspaceport_timeline()
{
	this->my_init();
}

Cspaceport_timeline::~Cspaceport_timeline()
{

}

#ifndef SPACEPORT_TIMELINE_TEST
#define SPACEPORT_TIMELINE_TEST 0//1
#endif

#if SPACEPORT_TIMELINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
