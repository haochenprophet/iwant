#include "html_message.h"
int Chtml_message::my_init(void *p)
{
	this->name = "Chtml_message";
	this->alias = "html_message";
	return 0;
}

Chtml_message::Chtml_message()
{
	this->my_init();
}

Chtml_message::~Chtml_message()
{

}

#ifndef HTML_MESSAGE_TEST
#define HTML_MESSAGE_TEST 0//1
#endif

#if HTML_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "HTML_MESSAGE_TEST\n\n";

	return 0;
}
#endif 