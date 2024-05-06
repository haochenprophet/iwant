#include "security_why.h"
int Csecurity_why::my_init(void *p)
{
	this->name = "Csecurity_why";
	this->alias = "security_why";
	return 0;
}

Csecurity_why::Csecurity_why()
{
	this->my_init();
}

Csecurity_why::~Csecurity_why()
{

}

#ifndef SECURITY_WHY_TEST
#define SECURITY_WHY_TEST 0//1
#endif

#if SECURITY_WHY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
