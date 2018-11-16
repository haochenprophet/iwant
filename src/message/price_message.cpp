#include "price_message.h"
int Cprice_message::my_init(void *p)
{
	this->name = "Cprice_message";
	this->alias = "price_message";
	return 0;
}

Cprice_message::Cprice_message()
{
	this->my_init();
}

Cprice_message::~Cprice_message()
{

}

#ifndef PRICE_MESSAGE_TEST
#define PRICE_MESSAGE_TEST 0//1
#endif

#if PRICE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "PRICE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 