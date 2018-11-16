#include "answer_message.h"
int Canswer_message::my_init(void *p)
{
	this->name = "Canswer_message";
	this->alias = "answer_message";
	return 0;
}

Canswer_message::Canswer_message()
{
	this->my_init();
}

Canswer_message::~Canswer_message()
{

}

#ifndef ANSWER_MESSAGE_TEST
#define ANSWER_MESSAGE_TEST 0//1
#endif

#if ANSWER_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ANSWER_MESSAGE_TEST\n\n";

	return 0;
}
#endif 