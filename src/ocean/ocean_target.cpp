#include "ocean_target.h"
int Cocean_target::my_init(void *p)
{
	this->name = "Cocean_target";
	this->alias = "ocean_target";
	return 0;
}

Cocean_target::Cocean_target()
{
	this->my_init();
}

Cocean_target::~Cocean_target()
{

}

#ifndef OCEAN_TARGET_TEST
#define OCEAN_TARGET_TEST 0//1
#endif

#if OCEAN_TARGET_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
