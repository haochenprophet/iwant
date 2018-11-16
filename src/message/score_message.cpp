#include "score_message.h"
int Cscore_message::my_init(void *p)
{
	this->name = "Cscore_message";
	this->alias = "score_message";
	return 0;
}

Cscore_message::Cscore_message()
{
	this->my_init();
}

Cscore_message::~Cscore_message()
{

}

#ifndef SCORE_MESSAGE_TEST
#define SCORE_MESSAGE_TEST 0//1
#endif

#if SCORE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SCORE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 