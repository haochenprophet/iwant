#include "code_revert.h"
int Ccode_revert::my_init(void *p)
{
	this->name = "Ccode_revert";
	this->alias = "code_revert";
	return 0;
}

Ccode_revert::Ccode_revert()
{
	this->my_init();
}

Ccode_revert::~Ccode_revert()
{

}

#ifndef CODE_REVERT_TEST
#define CODE_REVERT_TEST 0//1
#endif

#if CODE_REVERT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
