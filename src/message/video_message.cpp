#include "video_message.h"
int Cvideo_message::my_init(void *p)
{
	this->name = "Cvideo_message";
	this->alias = "video_message";
	return 0;
}

Cvideo_message::Cvideo_message()
{
	this->my_init();
}

Cvideo_message::~Cvideo_message()
{

}

#ifndef VIDEO_MESSAGE_TEST
#define VIDEO_MESSAGE_TEST 0//1
#endif

#if VIDEO_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "VIDEO_MESSAGE_TEST\n\n";

	return 0;
}
#endif 