#include "code_message.h"
int Ccode_message::my_init(void *p)
{
	this->name = "Ccode_message";
	this->alias = "code_message";
	return 0;
}

Ccode_message::Ccode_message()
{
	this->my_init();
}

Ccode_message::~Ccode_message()
{

}

#ifndef CODE_MESSAGE_TEST
#define CODE_MESSAGE_TEST 0//1
#endif

#if CODE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CODE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 