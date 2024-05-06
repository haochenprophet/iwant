#include "security_hammer.h"
int Csecurity_hammer::my_init(void *p)
{
	this->name = "Csecurity_hammer";
	this->alias = "security_hammer";
	return 0;
}

Csecurity_hammer::Csecurity_hammer()
{
	this->my_init();
}

Csecurity_hammer::~Csecurity_hammer()
{

}

#ifndef SECURITY_HAMMER_TEST
#define SECURITY_HAMMER_TEST 0//1
#endif

#if SECURITY_HAMMER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
