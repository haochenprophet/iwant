#include "follow_message.h"
int Cfollow_message::my_init(void *p)
{
	this->name = "Cfollow_message";
	this->alias = "follow_message";
	return 0;
}

Cfollow_message::Cfollow_message()
{
	this->my_init();
}

Cfollow_message::~Cfollow_message()
{

}

#ifndef FOLLOW_MESSAGE_TEST
#define FOLLOW_MESSAGE_TEST 0//1
#endif

#if FOLLOW_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FOLLOW_MESSAGE_TEST\n\n";

	return 0;
}
#endif 