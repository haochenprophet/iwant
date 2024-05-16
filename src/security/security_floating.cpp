#include "security_floating.h"
int Csecurity_floating::my_init(void *p)
{
	this->name = "Csecurity_floating";
	this->alias = "security_floating";
	return 0;
}

Csecurity_floating::Csecurity_floating()
{
	this->my_init();
}

Csecurity_floating::~Csecurity_floating()
{

}

#ifndef SECURITY_FLOATING_TEST
#define SECURITY_FLOATING_TEST 0//1
#endif

#if SECURITY_FLOATING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
