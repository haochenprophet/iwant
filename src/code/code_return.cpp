#include "code_return.h"
int Ccode_return::my_init(void *p)
{
	this->name = "Ccode_return";
	this->alias = "code_return";
	return 0;
}

Ccode_return::Ccode_return()
{
	this->my_init();
}

Ccode_return::~Ccode_return()
{

}

#ifndef CODE_RETURN_TEST
#define CODE_RETURN_TEST 0//1
#endif

#if CODE_RETURN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
