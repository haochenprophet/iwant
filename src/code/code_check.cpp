#include "code_check.h"
int Ccode_check::my_init(void *p)
{
	this->name = "Ccode_check";
	this->alias = "code_check";
	return 0;
}

Ccode_check::Ccode_check()
{
	this->my_init();
}

Ccode_check::~Ccode_check()
{

}

#ifndef CODE_CHECK_TEST
#define CODE_CHECK_TEST 0//1
#endif

#if CODE_CHECK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
