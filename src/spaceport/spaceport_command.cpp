#include "spaceport_command.h"
int Cspaceport_command::my_init(void *p)
{
	this->name = "Cspaceport_command";
	this->alias = "spaceport_command";
	return 0;
}

Cspaceport_command::Cspaceport_command()
{
	this->my_init();
}

Cspaceport_command::~Cspaceport_command()
{

}

#ifndef SPACEPORT_COMMAND_TEST
#define SPACEPORT_COMMAND_TEST 0//1
#endif

#if SPACEPORT_COMMAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
