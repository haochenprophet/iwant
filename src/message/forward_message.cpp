#include "forward_message.h"
int Cforward_message::my_init(void *p)
{
	this->name = "Cforward_message";
	this->alias = "forward_message";
	return 0;
}

Cforward_message::Cforward_message()
{
	this->my_init();
}

Cforward_message::~Cforward_message()
{

}

#ifndef FORWARD_MESSAGE_TEST
#define FORWARD_MESSAGE_TEST 0//1
#endif

#if FORWARD_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FORWARD_MESSAGE_TEST\n\n";

	return 0;
}
#endif 