#include "form_message.h"
int Cform_message::my_init(void *p)
{
	this->name = "Cform_message";
	this->alias = "form_message";
	return 0;
}

Cform_message::Cform_message()
{
	this->my_init();
}

Cform_message::~Cform_message()
{

}

#ifndef FORM_MESSAGE_TEST
#define FORM_MESSAGE_TEST 0//1
#endif

#if FORM_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FORM_MESSAGE_TEST\n\n";

	return 0;
}
#endif 