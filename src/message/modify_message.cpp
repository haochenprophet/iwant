#include "modify_message.h"
int Cmodify_message::my_init(void *p)
{
	this->name = "Cmodify_message";
	this->alias = "modify_message";
	return 0;
}

Cmodify_message::Cmodify_message()
{
	this->my_init();
}

Cmodify_message::~Cmodify_message()
{

}

#ifndef MODIFY_MESSAGE_TEST
#define MODIFY_MESSAGE_TEST 0//1
#endif

#if MODIFY_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MODIFY_MESSAGE_TEST\n\n";

	return 0;
}
#endif 