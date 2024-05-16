#include "security_real.h"
int Csecurity_real::my_init(void *p)
{
	this->name = "Csecurity_real";
	this->alias = "security_real";
	return 0;
}

Csecurity_real::Csecurity_real()
{
	this->my_init();
}

Csecurity_real::~Csecurity_real()
{

}

#ifndef SECURITY_REAL_TEST
#define SECURITY_REAL_TEST 0//1
#endif

#if SECURITY_REAL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
