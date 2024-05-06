#include "security_condition.h"
int Csecurity_condition::my_init(void *p)
{
	this->name = "Csecurity_condition";
	this->alias = "security_condition";
	return 0;
}

Csecurity_condition::Csecurity_condition()
{
	this->my_init();
}

Csecurity_condition::~Csecurity_condition()
{

}

#ifndef SECURITY_CONDITION_TEST
#define SECURITY_CONDITION_TEST 0//1
#endif

#if SECURITY_CONDITION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
