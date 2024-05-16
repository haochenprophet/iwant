#include "spaceport_sleep.h"
int Cspaceport_sleep::my_init(void *p)
{
	this->name = "Cspaceport_sleep";
	this->alias = "spaceport_sleep";
	return 0;
}

Cspaceport_sleep::Cspaceport_sleep()
{
	this->my_init();
}

Cspaceport_sleep::~Cspaceport_sleep()
{

}

#ifndef SPACEPORT_SLEEP_TEST
#define SPACEPORT_SLEEP_TEST 0//1
#endif

#if SPACEPORT_SLEEP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
