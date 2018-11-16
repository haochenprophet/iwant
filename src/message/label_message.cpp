#include "label_message.h"
int Clabel_message::my_init(void *p)
{
	this->name = "Clabel_message";
	this->alias = "label_message";
	return 0;
}

Clabel_message::Clabel_message()
{
	this->my_init();
}

Clabel_message::~Clabel_message()
{

}

#ifndef LABEL_MESSAGE_TEST
#define LABEL_MESSAGE_TEST 0//1
#endif

#if LABEL_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LABEL_MESSAGE_TEST\n\n";

	return 0;
}
#endif 