#include "table_message.h"
int Ctable_message::my_init(void *p)
{
	this->name = "Ctable_message";
	this->alias = "table_message";
	return 0;
}

Ctable_message::Ctable_message()
{
	this->my_init();
}

Ctable_message::~Ctable_message()
{

}

#ifndef TABLE_MESSAGE_TEST
#define TABLE_MESSAGE_TEST 0//1
#endif

#if TABLE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TABLE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 