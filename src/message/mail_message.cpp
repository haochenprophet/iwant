#include "mail_message.h"
int Cmail_message::my_init(void *p)
{
	this->name = "Cmail_message";
	this->alias = "mail_message";
	return 0;
}

Cmail_message::Cmail_message()
{
	this->my_init();
}

Cmail_message::~Cmail_message()
{

}

#ifndef MAIL_MESSAGE_TEST
#define MAIL_MESSAGE_TEST 0//1
#endif

#if MAIL_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MAIL_MESSAGE_TEST\n\n";

	return 0;
}
#endif 