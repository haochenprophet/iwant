#include "security_bug.h"
int Csecurity_bug::my_init(void *p)
{
	this->name = "Csecurity_bug";
	this->alias = "security_bug";
	return 0;
}

Csecurity_bug::Csecurity_bug()
{
	this->my_init();
}

Csecurity_bug::~Csecurity_bug()
{

}

#ifndef SECURITY_BUG_TEST
#define SECURITY_BUG_TEST 0//1
#endif

#if SECURITY_BUG_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
