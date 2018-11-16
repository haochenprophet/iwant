#include "destroy_message.h"
int Cdestroy_message::my_init(void *p)
{
	this->name = "Cdestroy_message";
	this->alias = "destroy_message";
	return 0;
}

Cdestroy_message::Cdestroy_message()
{
	this->my_init();
}

Cdestroy_message::~Cdestroy_message()
{

}

#ifndef DESTROY_MESSAGE_TEST
#define DESTROY_MESSAGE_TEST 0//1
#endif

#if DESTROY_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DESTROY_MESSAGE_TEST\n\n";

	return 0;
}
#endif 