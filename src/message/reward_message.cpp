#include "reward_message.h"
int Creward_message::my_init(void *p)
{
	this->name = "Creward_message";
	this->alias = "reward_message";
	return 0;
}

Creward_message::Creward_message()
{
	this->my_init();
}

Creward_message::~Creward_message()
{

}

#ifndef REWARD_MESSAGE_TEST
#define REWARD_MESSAGE_TEST 0//1
#endif

#if REWARD_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REWARD_MESSAGE_TEST\n\n";

	return 0;
}
#endif 