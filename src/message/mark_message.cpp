#include "mark_message.h"
int Cmark_message::my_init(void *p)
{
	this->name = "Cmark_message";
	this->alias = "mark_message";
	return 0;
}

Cmark_message::Cmark_message()
{
	this->my_init();
}

Cmark_message::~Cmark_message()
{

}

#ifndef MARK_MESSAGE_TEST
#define MARK_MESSAGE_TEST 0//1
#endif

#if MARK_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MARK_MESSAGE_TEST\n\n";

	return 0;
}
#endif 