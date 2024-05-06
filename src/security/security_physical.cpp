#include "security_physical.h"
int Csecurity_physical::my_init(void *p)
{
	this->name = "Csecurity_physical";
	this->alias = "security_physical";
	return 0;
}

Csecurity_physical::Csecurity_physical()
{
	this->my_init();
}

Csecurity_physical::~Csecurity_physical()
{

}

#ifndef SECURITY_PHYSICAL_TEST
#define SECURITY_PHYSICAL_TEST 0//1
#endif

#if SECURITY_PHYSICAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
