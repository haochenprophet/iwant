#include "transmit_message.h"
int Ctransmit_message::my_init(void *p)
{
	this->name = "Ctransmit_message";
	this->alias = "transmit_message";
	return 0;
}

Ctransmit_message::Ctransmit_message()
{
	this->my_init();
}

Ctransmit_message::~Ctransmit_message()
{

}

#ifndef TRANSMIT_MESSAGE_TEST
#define TRANSMIT_MESSAGE_TEST 0//1
#endif

#if TRANSMIT_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TRANSMIT_MESSAGE_TEST\n\n";

	return 0;
}
#endif 