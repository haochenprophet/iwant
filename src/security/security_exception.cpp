#include "security_exception.h"
int Csecurity_exception::my_init(void *p)
{
	this->name = "Csecurity_exception";
	this->alias = "security_exception";
	return 0;
}

Csecurity_exception::Csecurity_exception()
{
	this->my_init();
}

Csecurity_exception::~Csecurity_exception()
{

}

#ifndef SECURITY_EXCEPTION_TEST
#define SECURITY_EXCEPTION_TEST 0//1
#endif

#if SECURITY_EXCEPTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
