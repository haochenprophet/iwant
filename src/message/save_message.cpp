#include "save_message.h"
int Csave_message::my_init(void *p)
{
	this->name = "Csave_message";
	this->alias = "save_message";
	return 0;
}

Csave_message::Csave_message()
{
	this->my_init();
}

Csave_message::~Csave_message()
{

}

#ifndef SAVE_MESSAGE_TEST
#define SAVE_MESSAGE_TEST 0//1
#endif

#if SAVE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SAVE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 