#include "ocean_function.h"
int Cocean_function::my_init(void *p)
{
	this->name = "Cocean_function";
	this->alias = "ocean_function";
	return 0;
}

Cocean_function::Cocean_function()
{
	this->my_init();
}

Cocean_function::~Cocean_function()
{

}

#ifndef OCEAN_FUNCTION_TEST
#define OCEAN_FUNCTION_TEST 0//1
#endif

#if OCEAN_FUNCTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
