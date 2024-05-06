#include "security_policy.h"
int Csecurity_policy::my_init(void *p)
{
	this->name = "Csecurity_policy";
	this->alias = "security_policy";
	return 0;
}

Csecurity_policy::Csecurity_policy()
{
	this->my_init();
}

Csecurity_policy::~Csecurity_policy()
{

}

#ifndef SECURITY_POLICY_TEST
#define SECURITY_POLICY_TEST 0//1
#endif

#if SECURITY_POLICY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
