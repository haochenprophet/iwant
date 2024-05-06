#include "security_how.h"
int Csecurity_how::my_init(void *p)
{
	this->name = "Csecurity_how";
	this->alias = "security_how";
	return 0;
}

Csecurity_how::Csecurity_how()
{
	this->my_init();
}

Csecurity_how::~Csecurity_how()
{

}

#ifndef SECURITY_HOW_TEST
#define SECURITY_HOW_TEST 0//1
#endif

#if SECURITY_HOW_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
