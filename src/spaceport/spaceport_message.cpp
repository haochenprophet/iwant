#include "spaceport_message.h"
int Cspaceport_message::my_init(void *p)
{
	this->name = "Cspaceport_message";
	this->alias = "spaceport_message";
	return 0;
}

Cspaceport_message::Cspaceport_message()
{
	this->my_init();
}

Cspaceport_message::~Cspaceport_message()
{

}

#ifndef SPACEPORT_MESSAGE_TEST
#define SPACEPORT_MESSAGE_TEST 0//1
#endif

#if SPACEPORT_MESSAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
