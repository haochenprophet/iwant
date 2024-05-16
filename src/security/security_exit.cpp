#include "security_exit.h"
int Csecurity_exit::my_init(void *p)
{
	this->name = "Csecurity_exit";
	this->alias = "security_exit";
	return 0;
}

Csecurity_exit::Csecurity_exit()
{
	this->my_init();
}

Csecurity_exit::~Csecurity_exit()
{

}

#ifndef SECURITY_EXIT_TEST
#define SECURITY_EXIT_TEST 0//1
#endif

#if SECURITY_EXIT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
