#include "note_message.h"
int Cnote_message::my_init(void *p)
{
	this->name = "Cnote_message";
	this->alias = "note_message";
	return 0;
}

Cnote_message::Cnote_message()
{
	this->my_init();
}

Cnote_message::~Cnote_message()
{

}

#ifndef NOTE_MESSAGE_TEST
#define NOTE_MESSAGE_TEST 0//1
#endif

#if NOTE_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NOTE_MESSAGE_TEST\n\n";

	return 0;
}
#endif 