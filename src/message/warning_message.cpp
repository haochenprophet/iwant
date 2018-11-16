#include "warning_message.h"
int Cwarning_message::my_init(void *p)
{
	this->name = "Cwarning_message";
	this->alias = "warning_message";
	return 0;
}

Cwarning_message::Cwarning_message()
{
	this->my_init();
}

Cwarning_message::~Cwarning_message()
{

}

#ifndef WARNING_MESSAGE_TEST
#define WARNING_MESSAGE_TEST 0//1
#endif

#if WARNING_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "WARNING_MESSAGE_TEST\n\n";

	return 0;
}
#endif 