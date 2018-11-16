#include "command_message.h"
int Ccommand_message::my_init(void *p)
{
	this->name = "Ccommand_message";
	this->alias = "command_message";
	return 0;
}

Ccommand_message::Ccommand_message()
{
	this->my_init();
}

Ccommand_message::~Ccommand_message()
{

}

#ifndef COMMAND_MESSAGE_TEST
#define COMMAND_MESSAGE_TEST 0//1
#endif

#if COMMAND_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "COMMAND_MESSAGE_TEST\n\n";

	return 0;
}
#endif 