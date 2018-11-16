#include "name_message.h"
int Cname_message::my_init(void *p)
{
	this->name = "Cname_message";
	this->alias = "name_message";
	return 0;
}

Cname_message::Cname_message()
{
	this->my_init();
}

Cname_message::~Cname_message()
{

}

#ifndef NAME_MESSAGE_TEST
#define NAME_MESSAGE_TEST 0//1
#endif

#if NAME_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NAME_MESSAGE_TEST\n\n";

	return 0;
}
#endif 