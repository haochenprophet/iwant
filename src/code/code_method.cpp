#include "code_method.h"
int Ccode_method::my_init(void *p)
{
	this->name = "Ccode_method";
	this->alias = "code_method";
	return 0;
}

Ccode_method::Ccode_method()
{
	this->my_init();
}

Ccode_method::~Ccode_method()
{

}

#ifndef CODE_METHOD_TEST
#define CODE_METHOD_TEST 0//1
#endif

#if CODE_METHOD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
