#include "ocean_stack.h"
int Cocean_stack::my_init(void *p)
{
	this->name = "Cocean_stack";
	this->alias = "ocean_stack";
	return 0;
}

Cocean_stack::Cocean_stack()
{
	this->my_init();
}

Cocean_stack::~Cocean_stack()
{

}

#ifndef OCEAN_STACK_TEST
#define OCEAN_STACK_TEST 0//1
#endif

#if OCEAN_STACK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
