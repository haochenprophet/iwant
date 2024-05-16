#include "ocean_command.h"
int Cocean_command::my_init(void *p)
{
	this->name = "Cocean_command";
	this->alias = "ocean_command";
	return 0;
}

Cocean_command::Cocean_command()
{
	this->my_init();
}

Cocean_command::~Cocean_command()
{

}

#ifndef OCEAN_COMMAND_TEST
#define OCEAN_COMMAND_TEST 0//1
#endif

#if OCEAN_COMMAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
