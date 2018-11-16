#include "question_message.h"
int Cquestion_message::my_init(void *p)
{
	this->name = "Cquestion_message";
	this->alias = "question_message";
	return 0;
}

Cquestion_message::Cquestion_message()
{
	this->my_init();
}

Cquestion_message::~Cquestion_message()
{

}

#ifndef QUESTION_MESSAGE_TEST
#define QUESTION_MESSAGE_TEST 0//1
#endif

#if QUESTION_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "QUESTION_MESSAGE_TEST\n\n";

	return 0;
}
#endif 