#include "reply_message.h"
int Creply_message::my_init(void *p)
{
	this->name = "Creply_message";
	this->alias = "reply_message";
	return 0;
}

Creply_message::Creply_message()
{
	this->my_init();
}

Creply_message::~Creply_message()
{

}

#ifndef REPLY_MESSAGE_TEST
#define REPLY_MESSAGE_TEST 0//1
#endif

#if REPLY_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REPLY_MESSAGE_TEST\n\n";

	return 0;
}
#endif 