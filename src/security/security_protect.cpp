#include "security_protect.h"
int Csecurity_protect::my_init(void *p)
{
	this->name = "Csecurity_protect";
	this->alias = "security_protect";
	return 0;
}

Csecurity_protect::Csecurity_protect()
{
	this->my_init();
}

Csecurity_protect::~Csecurity_protect()
{

}

#ifndef SECURITY_PROTECT_TEST
#define SECURITY_PROTECT_TEST 0//1
#endif

#if SECURITY_PROTECT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
