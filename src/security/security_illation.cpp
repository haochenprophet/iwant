#include "security_illation.h"
int Csecurity_illation::my_init(void *p)
{
	this->name = "Csecurity_illation";
	this->alias = "security_illation";
	return 0;
}

Csecurity_illation::Csecurity_illation()
{
	this->my_init();
}

Csecurity_illation::~Csecurity_illation()
{

}

#ifndef SECURITY_ILLATION_TEST
#define SECURITY_ILLATION_TEST 0//1
#endif

#if SECURITY_ILLATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
