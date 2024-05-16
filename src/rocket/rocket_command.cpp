#include "rocket_command.h"
int Crocket_command::my_init(void *p)
{
	this->name = "Crocket_command";
	this->alias = "rocket_command";
	return 0;
}

Crocket_command::Crocket_command()
{
	this->my_init();
}

Crocket_command::~Crocket_command()
{

}

#ifndef ROCKET_COMMAND_TEST
#define ROCKET_COMMAND_TEST 0//1
#endif

#if ROCKET_COMMAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
