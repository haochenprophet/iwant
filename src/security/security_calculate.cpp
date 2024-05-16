#include "security_calculate.h"
int Csecurity_calculate::my_init(void *p)
{
	this->name = "Csecurity_calculate";
	this->alias = "security_calculate";
	return 0;
}

Csecurity_calculate::Csecurity_calculate()
{
	this->my_init();
}

Csecurity_calculate::~Csecurity_calculate()
{

}

#ifndef SECURITY_CALCULATE_TEST
#define SECURITY_CALCULATE_TEST 0//1
#endif

#if SECURITY_CALCULATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
