#include "spaceport_live.h"
int Cspaceport_live::my_init(void *p)
{
	this->name = "Cspaceport_live";
	this->alias = "spaceport_live";
	return 0;
}

Cspaceport_live::Cspaceport_live()
{
	this->my_init();
}

Cspaceport_live::~Cspaceport_live()
{

}

#ifndef SPACEPORT_LIVE_TEST
#define SPACEPORT_LIVE_TEST 0//1
#endif

#if SPACEPORT_LIVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
