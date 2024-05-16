#include "command.h"
int Ccommand::my_init(void *p)
{
	this->name = "Ccommand";
	this->alias = "command";
	return 0;
}

Ccommand::Ccommand()
{
	this->my_init();
}

Ccommand::~Ccommand()
{

}

#ifndef COMMAND_TEST
#define COMMAND_TEST 0//1
#endif

#if COMMAND_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
