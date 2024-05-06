#include "security_command.h"
int Csecurity_command::my_init(void *p)
{
	this->name = "Csecurity_command";
	this->alias = "security_command";
	return 0;
}

Csecurity_command::Csecurity_command()
{
	this->my_init();
}

Csecurity_command::~Csecurity_command()
{

}

#ifndef SECURITY_COMMAND_TEST
#define SECURITY_COMMAND_TEST 0//1
#endif

#if SECURITY_COMMAND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
