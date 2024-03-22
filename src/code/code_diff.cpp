#include "code_diff.h"
int Ccode_diff::my_init(void *p)
{
	this->name = "Ccode_diff";
	this->alias = "code_diff";
	return 0;
}

Ccode_diff::Ccode_diff()
{
	this->my_init();
}

Ccode_diff::~Ccode_diff()
{

}

#ifndef CODE_DIFF_TEST
#define CODE_DIFF_TEST 0//1
#endif

#if CODE_DIFF_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
