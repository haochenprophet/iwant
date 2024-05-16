#include "security_environment.h"
int Csecurity_environment::my_init(void *p)
{
	this->name = "Csecurity_environment";
	this->alias = "security_environment";
	return 0;
}

Csecurity_environment::Csecurity_environment()
{
	this->my_init();
}

Csecurity_environment::~Csecurity_environment()
{

}

#ifndef SECURITY_ENVIRONMENT_TEST
#define SECURITY_ENVIRONMENT_TEST 0//1
#endif

#if SECURITY_ENVIRONMENT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
