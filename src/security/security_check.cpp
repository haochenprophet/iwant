#include "security_check.h"
int Csecurity_check::my_init(void *p)
{
	this->name = "Csecurity_check";
	this->alias = "security_check";
	return 0;
}

Csecurity_check::Csecurity_check()
{
	this->my_init();
}

Csecurity_check::~Csecurity_check()
{

}

#ifndef SECURITY_CHECK_TEST
#define SECURITY_CHECK_TEST 0//1
#endif

#if SECURITY_CHECK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
