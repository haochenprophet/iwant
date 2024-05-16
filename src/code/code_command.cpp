#include "code_command.h"
int Ccode_command::my_init(void *p)
{
	this->name = "Ccode_command";
	this->alias = "code_command";
	return 0;
}

Ccode_command::Ccode_command()
{
	this->my_init();
}

Ccode_command::~Ccode_command()
{

}

#ifndef CODE_COMMAND_TEST
#define CODE_COMMAND_TEST 0//1
#endif

#if CODE_COMMAND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
