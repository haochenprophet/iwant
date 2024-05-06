#include "security_main.h"
int Csecurity_main::my_init(void *p)
{
	this->name = "Csecurity_main";
	this->alias = "security_main";
	return 0;
}

Csecurity_main::Csecurity_main()
{
	this->my_init();
}

Csecurity_main::~Csecurity_main()
{

}

#ifndef SECURITY_MAIN_TEST
#define SECURITY_MAIN_TEST 0//1
#endif

#if SECURITY_MAIN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
