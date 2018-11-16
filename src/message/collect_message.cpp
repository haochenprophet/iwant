#include "collect_message.h"
int Ccollect_message::my_init(void *p)
{
	this->name = "Ccollect_message";
	this->alias = "collect_message";
	return 0;
}

Ccollect_message::Ccollect_message()
{
	this->my_init();
}

Ccollect_message::~Ccollect_message()
{

}

#ifndef COLLECT_MESSAGE_TEST
#define COLLECT_MESSAGE_TEST 0//1
#endif

#if COLLECT_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "COLLECT_MESSAGE_TEST\n\n";

	return 0;
}
#endif 