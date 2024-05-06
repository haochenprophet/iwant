#include "security_test.h"
int Csecurity_test::my_init(void *p)
{
	this->name = "Csecurity_test";
	this->alias = "security_test";
	return 0;
}

Csecurity_test::Csecurity_test()
{
	this->my_init();
}

Csecurity_test::~Csecurity_test()
{

}

#ifndef SECURITY_TEST_TEST
#define SECURITY_TEST_TEST 0//1
#endif

#if SECURITY_TEST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
