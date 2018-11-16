#include "track_message.h"
int Ctrack_message::my_init(void *p)
{
	this->name = "Ctrack_message";
	this->alias = "track_message";
	return 0;
}

Ctrack_message::Ctrack_message()
{
	this->my_init();
}

Ctrack_message::~Ctrack_message()
{

}

#ifndef TRACK_MESSAGE_TEST
#define TRACK_MESSAGE_TEST 0//1
#endif

#if TRACK_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TRACK_MESSAGE_TEST\n\n";

	return 0;
}
#endif 