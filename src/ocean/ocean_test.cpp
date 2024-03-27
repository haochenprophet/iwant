#include "ocean_test.h"
int Cocean_test::my_init(void *p)
{
	this->name = "Cocean_test";
	this->alias = "ocean_test";
	return 0;
}

Cocean_test::Cocean_test()
{
	this->my_init();
}

Cocean_test::~Cocean_test()
{

}

#ifndef OCEAN_TEST_TEST
#define OCEAN_TEST_TEST 0//1
#endif

#if OCEAN_TEST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
