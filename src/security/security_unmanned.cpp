#include "security_unmanned.h"
int Csecurity_unmanned::my_init(void *p)
{
	this->name = "Csecurity_unmanned";
	this->alias = "security_unmanned";
	return 0;
}

Csecurity_unmanned::Csecurity_unmanned()
{
	this->my_init();
}

Csecurity_unmanned::~Csecurity_unmanned()
{

}

#ifndef SECURITY_UNMANNED_TEST
#define SECURITY_UNMANNED_TEST 0//1
#endif

#if SECURITY_UNMANNED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
