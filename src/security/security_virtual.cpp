#include "security_virtual.h"
int Csecurity_virtual::my_init(void *p)
{
	this->name = "Csecurity_virtual";
	this->alias = "security_virtual";
	return 0;
}

Csecurity_virtual::Csecurity_virtual()
{
	this->my_init();
}

Csecurity_virtual::~Csecurity_virtual()
{

}

#ifndef SECURITY_VIRTUAL_TEST
#define SECURITY_VIRTUAL_TEST 0//1
#endif

#if SECURITY_VIRTUAL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
