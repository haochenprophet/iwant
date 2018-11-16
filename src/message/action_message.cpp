#include "action_message.h"
int Caction_message::my_init(void *p)
{
	this->name = "Caction_message";
	this->alias = "action_message";
	return 0;
}

Caction_message::Caction_message()
{
	this->my_init();
}

Caction_message::~Caction_message()
{

}

#ifndef ACTION_MESSAGE_TEST
#define ACTION_MESSAGE_TEST 0//1
#endif

#if ACTION_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ACTION_MESSAGE_TEST\n\n";

	return 0;
}
#endif 