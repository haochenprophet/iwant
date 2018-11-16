#include "message.h"
int Cmessage::my_init(void *p)
{
	this->name = "Cmessage";
	this->alias = "message";
	return 0;
}

Cmessage::Cmessage()
{
	this->my_init();
}

Cmessage::~Cmessage()
{

}

#ifndef MESSAGE_TEST
#define MESSAGE_TEST 0//1
#endif

#if MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MESSAGE_TEST\n\n";

	return 0;
}
#endif 