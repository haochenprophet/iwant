#include "reference_message.h"
int Creference_message::my_init(void *p)
{
	this->name = "Creference_message";
	this->alias = "reference_message";
	return 0;
}

Creference_message::Creference_message()
{
	this->my_init();
}

Creference_message::~Creference_message()
{

}

#ifndef REFERENCE_MESSAGE_TEST
#define REFERENCE_MESSAGE_TEST 0//1
#endif

#if REFERENCE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REFERENCE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 