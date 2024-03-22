#include "code_error.h"
int Ccode_error::my_init(void *p)
{
	this->name = "Ccode_error";
	this->alias = "code_error";
	return 0;
}

Ccode_error::Ccode_error()
{
	this->my_init();
}

Ccode_error::~Ccode_error()
{

}

#ifndef CODE_ERROR_TEST
#define CODE_ERROR_TEST 0//1
#endif

#if CODE_ERROR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
