#include "text_message.h"
int Ctext_message::my_init(void *p)
{
	this->name = "Ctext_message";
	this->alias = "text_message";
	return 0;
}

Ctext_message::Ctext_message()
{
	this->my_init();
}

Ctext_message::~Ctext_message()
{

}

#ifndef TEXT_MESSAGE_TEST
#define TEXT_MESSAGE_TEST 0//1
#endif

#if TEXT_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TEXT_MESSAGE_TEST\n\n";

	return 0;
}
#endif 