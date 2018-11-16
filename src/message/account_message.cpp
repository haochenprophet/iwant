#include "account_message.h"
int Caccount_message::my_init(void *p)
{
	this->name = "Caccount_message";
	this->alias = "account_message";
	return 0;
}

Caccount_message::Caccount_message()
{
	this->my_init();
}

Caccount_message::~Caccount_message()
{

}

#ifndef ACCOUNT_MESSAGE_TEST
#define ACCOUNT_MESSAGE_TEST 0//1
#endif

#if ACCOUNT_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ACCOUNT_MESSAGE_TEST\n\n";

	return 0;
}
#endif 