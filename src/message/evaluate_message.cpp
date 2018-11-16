#include "evaluate_message.h"
int Cevaluate_message::my_init(void *p)
{
	this->name = "Cevaluate_message";
	this->alias = "evaluate_message";
	return 0;
}

Cevaluate_message::Cevaluate_message()
{
	this->my_init();
}

Cevaluate_message::~Cevaluate_message()
{

}

#ifndef EVALUATE_MESSAGE_TEST
#define EVALUATE_MESSAGE_TEST 0//1
#endif

#if EVALUATE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "EVALUATE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 