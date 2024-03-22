#include "code_macro.h"
int Ccode_macro::my_init(void *p)
{
	this->name = "Ccode_macro";
	this->alias = "code_macro";
	return 0;
}

Ccode_macro::Ccode_macro()
{
	this->my_init();
}

Ccode_macro::~Ccode_macro()
{

}

#ifndef CODE_MACRO_TEST
#define CODE_MACRO_TEST 0//1
#endif

#if CODE_MACRO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
