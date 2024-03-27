#include "ocean_safety.h"
int Cocean_safety::my_init(void *p)
{
	this->name = "Cocean_safety";
	this->alias = "ocean_safety";
	return 0;
}

Cocean_safety::Cocean_safety()
{
	this->my_init();
}

Cocean_safety::~Cocean_safety()
{

}

#ifndef OCEAN_SAFETY_TEST
#define OCEAN_SAFETY_TEST 0//1
#endif

#if OCEAN_SAFETY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
