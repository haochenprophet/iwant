#include "home_command.h"
int Chome_command::my_init(void *p)
{
	this->name = "Chome_command";
	this->alias = "home_command";
	return 0;
}

Chome_command::Chome_command()
{
	this->my_init();
}

Chome_command::~Chome_command()
{

}

#ifndef HOME_COMMAND_TEST
#define HOME_COMMAND_TEST 0//1
#endif

#if HOME_COMMAND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
