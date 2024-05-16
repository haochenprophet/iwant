#include "security_cruise.h"
int Csecurity_cruise::my_init(void *p)
{
	this->name = "Csecurity_cruise";
	this->alias = "security_cruise";
	return 0;
}

Csecurity_cruise::Csecurity_cruise()
{
	this->my_init();
}

Csecurity_cruise::~Csecurity_cruise()
{

}

#ifndef SECURITY_CRUISE_TEST
#define SECURITY_CRUISE_TEST 0//1
#endif

#if SECURITY_CRUISE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
