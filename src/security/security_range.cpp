#include "security_range.h"
int Csecurity_range::my_init(void *p)
{
	this->name = "Csecurity_range";
	this->alias = "security_range";
	return 0;
}

Csecurity_range::Csecurity_range()
{
	this->my_init();
}

Csecurity_range::~Csecurity_range()
{

}

#ifndef SECURITY_RANGE_TEST
#define SECURITY_RANGE_TEST 0//1
#endif

#if SECURITY_RANGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
