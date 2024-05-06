#include "security_dynamic.h"
int Csecurity_dynamic::my_init(void *p)
{
	this->name = "Csecurity_dynamic";
	this->alias = "security_dynamic";
	return 0;
}

Csecurity_dynamic::Csecurity_dynamic()
{
	this->my_init();
}

Csecurity_dynamic::~Csecurity_dynamic()
{

}

#ifndef SECURITY_DYNAMIC_TEST
#define SECURITY_DYNAMIC_TEST 0//1
#endif

#if SECURITY_DYNAMIC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
