#include "code_function.h"
int Ccode_function::my_init(void *p)
{
	this->name = "Ccode_function";
	this->alias = "code_function";
	return 0;
}

Ccode_function::Ccode_function()
{
	this->my_init();
}

Ccode_function::~Ccode_function()
{

}

#ifndef CODE_FUNCTION_TEST
#define CODE_FUNCTION_TEST 0//1
#endif

#if CODE_FUNCTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
