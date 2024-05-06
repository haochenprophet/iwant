#include "security_message.h"
int Csecurity_message::my_init(void *p)
{
	this->name = "Csecurity_message";
	this->alias = "security_message";
	return 0;
}

Csecurity_message::Csecurity_message()
{
	this->my_init();
}

Csecurity_message::~Csecurity_message()
{

}

#ifndef SECURITY_MESSAGE_TEST
#define SECURITY_MESSAGE_TEST 0//1
#endif

#if SECURITY_MESSAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
