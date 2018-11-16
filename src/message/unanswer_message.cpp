#include "unanswer_message.h"
int Cunanswer_message::my_init(void *p)
{
	this->name = "Cunanswer_message";
	this->alias = "unanswer_message";
	return 0;
}

Cunanswer_message::Cunanswer_message()
{
	this->my_init();
}

Cunanswer_message::~Cunanswer_message()
{

}

#ifndef UNANSWER_MESSAGE_TEST
#define UNANSWER_MESSAGE_TEST 0//1
#endif

#if UNANSWER_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "UNANSWER_MESSAGE_TEST\n\n";

	return 0;
}
#endif 