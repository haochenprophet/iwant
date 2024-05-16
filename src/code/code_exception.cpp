#include "code_exception.h"
int Ccode_exception::my_init(void *p)
{
	this->name = "Ccode_exception";
	this->alias = "code_exception";
	return 0;
}

Ccode_exception::Ccode_exception()
{
	this->my_init();
}

Ccode_exception::~Ccode_exception()
{

}

#ifndef CODE_EXCEPTION_TEST
#define CODE_EXCEPTION_TEST 0//1
#endif

#if CODE_EXCEPTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
