#include "money_message.h"
int Cmoney_message::my_init(void *p)
{
	this->name = "Cmoney_message";
	this->alias = "money_message";
	return 0;
}

Cmoney_message::Cmoney_message()
{
	this->my_init();
}

Cmoney_message::~Cmoney_message()
{

}

#ifndef MONEY_MESSAGE_TEST
#define MONEY_MESSAGE_TEST 0//1
#endif

#if MONEY_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MONEY_MESSAGE_TEST\n\n";

	return 0;
}
#endif 