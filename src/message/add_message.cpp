#include "add_message.h"
int Cadd_message::my_init(void *p)
{
	this->name = "Cadd_message";
	this->alias = "add_message";
	return 0;
}

Cadd_message::Cadd_message()
{
	this->my_init();
}

Cadd_message::~Cadd_message()
{

}

#ifndef ADD_MESSAGE_TEST
#define ADD_MESSAGE_TEST 0//1
#endif

#if ADD_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ADD_MESSAGE_TEST\n\n";

	return 0;
}
#endif 