#include "revoke_message.h"
int Crevoke_message::my_init(void *p)
{
	this->name = "Crevoke_message";
	this->alias = "revoke_message";
	return 0;
}

Crevoke_message::Crevoke_message()
{
	this->my_init();
}

Crevoke_message::~Crevoke_message()
{

}

#ifndef REVOKE_MESSAGE_TEST
#define REVOKE_MESSAGE_TEST 0//1
#endif

#if REVOKE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REVOKE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 