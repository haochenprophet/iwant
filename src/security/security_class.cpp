#include "security_class.h"
int Csecurity_class::my_init(void *p)
{
	this->name = "Csecurity_class";
	this->alias = "security_class";
	return 0;
}

Csecurity_class::Csecurity_class()
{
	this->my_init();
}

Csecurity_class::~Csecurity_class()
{

}

#ifndef SECURITY_CLASS_TEST
#define SECURITY_CLASS_TEST 0//1
#endif

#if SECURITY_CLASS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
