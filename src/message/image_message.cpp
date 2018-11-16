#include "image_message.h"
int Cimage_message::my_init(void *p)
{
	this->name = "Cimage_message";
	this->alias = "image_message";
	return 0;
}

Cimage_message::Cimage_message()
{
	this->my_init();
}

Cimage_message::~Cimage_message()
{

}

#ifndef IMAGE_MESSAGE_TEST
#define IMAGE_MESSAGE_TEST 0//1
#endif

#if IMAGE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "IMAGE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 