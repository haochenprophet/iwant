#include "receive_message.h"
int Creceive_message::my_init(void *p)
{
	this->name = "Creceive_message";
	this->alias = "receive_message";
	return 0;
}

Creceive_message::Creceive_message()
{
	this->my_init();
}

Creceive_message::~Creceive_message()
{

}

#ifndef RECEIVE_MESSAGE_TEST
#define RECEIVE_MESSAGE_TEST 0//1
#endif

#if RECEIVE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "RECEIVE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 