#include "search_message.h"
int Csearch_message::my_init(void *p)
{
	this->name = "Csearch_message";
	this->alias = "search_message";
	return 0;
}

Csearch_message::Csearch_message()
{
	this->my_init();
}

Csearch_message::~Csearch_message()
{

}

#ifndef SEARCH_MESSAGE_TEST
#define SEARCH_MESSAGE_TEST 0//1
#endif

#if SEARCH_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SEARCH_MESSAGE_TEST\n\n";

	return 0;
}
#endif 