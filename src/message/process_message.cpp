#include "process_message.h"
int Cprocess_message::my_init(void *p)
{
	this->name = "Cprocess_message";
	this->alias = "process_message";
	return 0;
}

Cprocess_message::Cprocess_message()
{
	this->my_init();
}

Cprocess_message::~Cprocess_message()
{

}

#ifndef PROCESS_MESSAGE_TEST
#define PROCESS_MESSAGE_TEST 0//1
#endif

#if PROCESS_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "PROCESS_MESSAGE_TEST\n\n";

	return 0;
}
#endif 