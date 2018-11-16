#include "affair_message.h"
int Caffair_message::my_init(void *p)
{
	this->name = "Caffair_message";
	this->alias = "affair_message";
	return 0;
}

Caffair_message::Caffair_message()
{
	this->my_init();
}

Caffair_message::~Caffair_message()
{

}

#ifndef AFFAIR_MESSAGE_TEST
#define AFFAIR_MESSAGE_TEST 0//1
#endif

#if AFFAIR_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "AFFAIR_MESSAGE_TEST\n\n";

	return 0;
}
#endif 