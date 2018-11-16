#include "error_message.h"
int Cerror_message::my_init(void *p)
{
	this->name = "Cerror_message";
	this->alias = "error_message";
	return 0;
}

Cerror_message::Cerror_message()
{
	this->my_init();
}

Cerror_message::~Cerror_message()
{

}

#ifndef ERROR_MESSAGE_TEST
#define ERROR_MESSAGE_TEST 0//1
#endif

#if ERROR_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ERROR_MESSAGE_TEST\n\n";

	return 0;
}
#endif 