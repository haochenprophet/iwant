#include "ocean_message.h"
int Cocean_message::my_init(void *p)
{
	this->name = "Cocean_message";
	this->alias = "ocean_message";
	return 0;
}

Cocean_message::Cocean_message()
{
	this->my_init();
}

Cocean_message::~Cocean_message()
{

}

#ifndef OCEAN_MESSAGE_TEST
#define OCEAN_MESSAGE_TEST 0//1
#endif

#if OCEAN_MESSAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
