#include "security_help.h"
int Csecurity_help::my_init(void *p)
{
	this->name = "Csecurity_help";
	this->alias = "security_help";
	return 0;
}

Csecurity_help::Csecurity_help()
{
	this->my_init();
}

Csecurity_help::~Csecurity_help()
{

}

#ifndef SECURITY_HELP_TEST
#define SECURITY_HELP_TEST 0//1
#endif

#if SECURITY_HELP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
