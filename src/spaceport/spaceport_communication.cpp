#include "spaceport_communication.h"
int Cspaceport_communication::my_init(void *p)
{
	this->name = "Cspaceport_communication";
	this->alias = "spaceport_communication";
	return 0;
}

Cspaceport_communication::Cspaceport_communication()
{
	this->my_init();
}

Cspaceport_communication::~Cspaceport_communication()
{

}

#ifndef SPACEPORT_COMMUNICATION_TEST
#define SPACEPORT_COMMUNICATION_TEST 0//1
#endif

#if SPACEPORT_COMMUNICATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
