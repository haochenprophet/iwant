#include "ocean_check.h"
int Cocean_check::my_init(void *p)
{
	this->name = "Cocean_check";
	this->alias = "ocean_check";
	return 0;
}

Cocean_check::Cocean_check()
{
	this->my_init();
}

Cocean_check::~Cocean_check()
{

}

#ifndef OCEAN_CHECK_TEST
#define OCEAN_CHECK_TEST 0//1
#endif

#if OCEAN_CHECK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
