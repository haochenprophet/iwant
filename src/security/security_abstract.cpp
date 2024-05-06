#include "security_abstract.h"
int Csecurity_abstract::my_init(void *p)
{
	this->name = "Csecurity_abstract";
	this->alias = "security_abstract";
	return 0;
}

Csecurity_abstract::Csecurity_abstract()
{
	this->my_init();
}

Csecurity_abstract::~Csecurity_abstract()
{

}

#ifndef SECURITY_ABSTRACT_TEST
#define SECURITY_ABSTRACT_TEST 0//1
#endif

#if SECURITY_ABSTRACT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
