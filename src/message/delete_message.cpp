#include "delete_message.h"
int Cdelete_message::my_init(void *p)
{
	this->name = "Cdelete_message";
	this->alias = "delete_message";
	return 0;
}

Cdelete_message::Cdelete_message()
{
	this->my_init();
}

Cdelete_message::~Cdelete_message()
{

}

#ifndef DELETE_MESSAGE_TEST
#define DELETE_MESSAGE_TEST 0//1
#endif

#if DELETE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DELETE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 