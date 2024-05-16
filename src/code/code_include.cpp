#include "code_include.h"
int Ccode_include::my_init(void *p)
{
	this->name = "Ccode_include";
	this->alias = "code_include";
	return 0;
}

Ccode_include::Ccode_include()
{
	this->my_init();
}

Ccode_include::~Ccode_include()
{

}

#ifndef CODE_INCLUDE_TEST
#define CODE_INCLUDE_TEST 0//1
#endif

#if CODE_INCLUDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
