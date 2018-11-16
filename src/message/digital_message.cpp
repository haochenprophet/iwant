#include "digital_message.h"
int Cdigital_message::my_init(void *p)
{
	this->name = "Cdigital_message";
	this->alias = "digital_message";
	return 0;
}

Cdigital_message::Cdigital_message()
{
	this->my_init();
}

Cdigital_message::~Cdigital_message()
{

}

#ifndef DIGITAL_MESSAGE_TEST
#define DIGITAL_MESSAGE_TEST 0//1
#endif

#if DIGITAL_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DIGITAL_MESSAGE_TEST\n\n";

	return 0;
}
#endif 