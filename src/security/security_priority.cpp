#include "security_priority.h"
int Csecurity_priority::my_init(void *p)
{
	this->name = "Csecurity_priority";
	this->alias = "security_priority";
	return 0;
}

Csecurity_priority::Csecurity_priority()
{
	this->my_init();
}

Csecurity_priority::~Csecurity_priority()
{

}

#ifndef SECURITY_PRIORITY_TEST
#define SECURITY_PRIORITY_TEST 0//1
#endif

#if SECURITY_PRIORITY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
