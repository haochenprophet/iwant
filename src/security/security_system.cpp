#include "security_system.h"
int Csecurity_system::my_init(void *p)
{
	this->name = "Csecurity_system";
	this->alias = "security_system";
	return 0;
}

Csecurity_system::Csecurity_system()
{
	this->my_init();
}

Csecurity_system::~Csecurity_system()
{

}

#ifndef SECURITY_SYSTEM_TEST
#define SECURITY_SYSTEM_TEST 0//1
#endif

#if SECURITY_SYSTEM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
