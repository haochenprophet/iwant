#include "audio_message.h"
int Caudio_message::my_init(void *p)
{
	this->name = "Caudio_message";
	this->alias = "audio_message";
	return 0;
}

Caudio_message::Caudio_message()
{
	this->my_init();
}

Caudio_message::~Caudio_message()
{

}

#ifndef AUDIO_MESSAGE_TEST
#define AUDIO_MESSAGE_TEST 0//1
#endif

#if AUDIO_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "AUDIO_MESSAGE_TEST\n\n";

	return 0;
}
#endif 