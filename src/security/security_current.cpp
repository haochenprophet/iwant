#include "security_current.h"
int Csecurity_current::my_init(void *p)
{
	this->name = "Csecurity_current";
	this->alias = "security_current";
	return 0;
}

Csecurity_current::Csecurity_current()
{
	this->my_init();
}

Csecurity_current::~Csecurity_current()
{

}

#ifndef SECURITY_CURRENT_TEST
#define SECURITY_CURRENT_TEST 0//1
#endif

#if SECURITY_CURRENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
