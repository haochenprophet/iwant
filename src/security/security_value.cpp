#include "security_value.h"
int Csecurity_value::my_init(void *p)
{
	this->name = "Csecurity_value";
	this->alias = "security_value";
	return 0;
}

Csecurity_value::Csecurity_value()
{
	this->my_init();
}

Csecurity_value::~Csecurity_value()
{

}

#ifndef SECURITY_VALUE_TEST
#define SECURITY_VALUE_TEST 0//1
#endif

#if SECURITY_VALUE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
