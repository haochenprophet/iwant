#include "send_message.h"
int Csend_message::my_init(void *p)
{
	this->name = "Csend_message";
	this->alias = "send_message";
	return 0;
}

Csend_message::Csend_message()
{
	this->my_init();
}

Csend_message::~Csend_message()
{

}

#ifndef SEND_MESSAGE_TEST
#define SEND_MESSAGE_TEST 0//1
#endif

#if SEND_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SEND_MESSAGE_TEST\n\n";

	return 0;
}
#endif 