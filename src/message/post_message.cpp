#include "post_message.h"
int Cpost_message::my_init(void *p)
{
	this->name = "Cpost_message";
	this->alias = "post_message";
	return 0;
}

Cpost_message::Cpost_message()
{
	this->my_init();
}

Cpost_message::~Cpost_message()
{

}

#ifndef POST_MESSAGE_TEST
#define POST_MESSAGE_TEST 0//1
#endif

#if POST_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "POST_MESSAGE_TEST\n\n";

	return 0;
}
#endif 