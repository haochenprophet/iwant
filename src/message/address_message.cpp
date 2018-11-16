#include "address_message.h"
int Caddress_message::my_init(void *p)
{
	this->name = "Caddress_message";
	this->alias = "address_message";
	return 0;
}

Caddress_message::Caddress_message()
{
	this->my_init();
}

Caddress_message::~Caddress_message()
{

}

#ifndef ADDRESS_MESSAGE_TEST
#define ADDRESS_MESSAGE_TEST 0//1
#endif

#if ADDRESS_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ADDRESS_MESSAGE_TEST\n\n";

	return 0;
}
#endif 