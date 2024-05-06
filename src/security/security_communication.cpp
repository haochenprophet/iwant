#include "security_communication.h"
int Csecurity_communication::my_init(void *p)
{
	this->name = "Csecurity_communication";
	this->alias = "security_communication";
	return 0;
}

Csecurity_communication::Csecurity_communication()
{
	this->my_init();
}

Csecurity_communication::~Csecurity_communication()
{

}

#ifndef SECURITY_COMMUNICATION_TEST
#define SECURITY_COMMUNICATION_TEST 0//1
#endif

#if SECURITY_COMMUNICATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
