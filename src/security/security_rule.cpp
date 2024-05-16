#include "security_rule.h"
int Csecurity_rule::my_init(void *p)
{
	this->name = "Csecurity_rule";
	this->alias = "security_rule";
	return 0;
}

Csecurity_rule::Csecurity_rule()
{
	this->my_init();
}

Csecurity_rule::~Csecurity_rule()
{

}

#ifndef SECURITY_RULE_TEST
#define SECURITY_RULE_TEST 0//1
#endif

#if SECURITY_RULE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
