#include "security_life_support.h"
int Csecurity_life_support::my_init(void *p)
{
	this->name = "Csecurity_life_support";
	this->alias = "security_life_support";
	return 0;
}

Csecurity_life_support::Csecurity_life_support()
{
	this->my_init();
}

Csecurity_life_support::~Csecurity_life_support()
{

}

#ifndef SECURITY_LIFE_SUPPORT_TEST
#define SECURITY_LIFE_SUPPORT_TEST 0//1
#endif

#if SECURITY_LIFE_SUPPORT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
