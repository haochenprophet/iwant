#include "security_belt.h"
int Csecurity_belt::my_init(void *p)
{
	this->name = "Csecurity_belt";
	this->alias = "security_belt";
	return 0;
}

Csecurity_belt::Csecurity_belt()
{
	this->my_init();
}

Csecurity_belt::~Csecurity_belt()
{

}

#ifndef SECURITY_BELT_TEST
#define SECURITY_BELT_TEST 0//1
#endif

#if SECURITY_BELT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
