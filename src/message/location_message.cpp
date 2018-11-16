#include "location_message.h"
int Clocation_message::my_init(void *p)
{
	this->name = "Clocation_message";
	this->alias = "location_message";
	return 0;
}

Clocation_message::Clocation_message()
{
	this->my_init();
}

Clocation_message::~Clocation_message()
{

}

#ifndef LOCATION_MESSAGE_TEST
#define LOCATION_MESSAGE_TEST 0//1
#endif

#if LOCATION_MESSAGE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOCATION_MESSAGE_TEST\n\n";

	return 0;
}
#endif 