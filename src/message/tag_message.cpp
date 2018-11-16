#include "tag_message.h"
int Ctag_message::my_init(void *p)
{
	this->name = "Ctag_message";
	this->alias = "tag_message";
	return 0;
}

Ctag_message::Ctag_message()
{
	this->my_init();
}

Ctag_message::~Ctag_message()
{

}

#ifndef TAG_MESSAGE_TEST
#define TAG_MESSAGE_TEST 0//1
#endif

#if TAG_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TAG_MESSAGE_TEST\n\n";

	return 0;
}
#endif 