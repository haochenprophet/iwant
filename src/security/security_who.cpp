#include "security_who.h"
int Csecurity_who::my_init(void *p)
{
	this->name = "Csecurity_who";
	this->alias = "security_who";
	return 0;
}

Csecurity_who::Csecurity_who()
{
	this->my_init();
}

Csecurity_who::~Csecurity_who()
{

}

#ifndef SECURITY_WHO_TEST
#define SECURITY_WHO_TEST 0//1
#endif

#if SECURITY_WHO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
