#include "broadcast_message.h"
int Cbroadcast_message::my_init(void *p)
{
	this->name = "Cbroadcast_message";
	this->alias = "broadcast_message";
	return 0;
}

Cbroadcast_message::Cbroadcast_message()
{
	this->my_init();
}

Cbroadcast_message::~Cbroadcast_message()
{

}

#ifndef BROADCAST_MESSAGE_TEST
#define BROADCAST_MESSAGE_TEST 0//1
#endif

#if BROADCAST_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "BROADCAST_MESSAGE_TEST\n\n";

	return 0;
}
#endif 