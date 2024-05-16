#include "security_which.h"
int Csecurity_which::my_init(void *p)
{
	this->name = "Csecurity_which";
	this->alias = "security_which";
	return 0;
}

Csecurity_which::Csecurity_which()
{
	this->my_init();
}

Csecurity_which::~Csecurity_which()
{

}

#ifndef SECURITY_WHICH_TEST
#define SECURITY_WHICH_TEST 0//1
#endif

#if SECURITY_WHICH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
