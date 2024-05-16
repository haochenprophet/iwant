#include "security_societal.h"
int Csecurity_societal::my_init(void *p)
{
	this->name = "Csecurity_societal";
	this->alias = "security_societal";
	return 0;
}

Csecurity_societal::Csecurity_societal()
{
	this->my_init();
}

Csecurity_societal::~Csecurity_societal()
{

}

#ifndef SECURITY_SOCIETAL_TEST
#define SECURITY_SOCIETAL_TEST 0//1
#endif

#if SECURITY_SOCIETAL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
