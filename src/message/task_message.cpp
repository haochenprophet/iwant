#include "task_message.h"
int Ctask_message::my_init(void *p)
{
	this->name = "Ctask_message";
	this->alias = "task_message";
	return 0;
}

Ctask_message::Ctask_message()
{
	this->my_init();
}

Ctask_message::~Ctask_message()
{

}

#ifndef TASK_MESSAGE_TEST
#define TASK_MESSAGE_TEST 0//1
#endif

#if TASK_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TASK_MESSAGE_TEST\n\n";

	return 0;
}
#endif 