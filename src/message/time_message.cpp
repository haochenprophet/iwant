#include "time_message.h"
int Ctime_message::my_init(void *p)
{
	this->name = "Ctime_message";
	this->alias = "time_message";
	return 0;
}

Ctime_message::Ctime_message()
{
	this->my_init();
}

Ctime_message::~Ctime_message()
{

}

#ifndef TIME_MESSAGE_TEST
#define TIME_MESSAGE_TEST 0//1
#endif

#if TIME_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TIME_MESSAGE_TEST\n\n";

	return 0;
}
#endif 