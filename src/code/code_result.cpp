#include "code_result.h"
int Ccode_result::my_init(void *p)
{
	this->name = "Ccode_result";
	this->alias = "code_result";
	return 0;
}

Ccode_result::Ccode_result()
{
	this->my_init();
}

Ccode_result::~Ccode_result()
{

}

#ifndef CODE_RESULT_TEST
#define CODE_RESULT_TEST 0//1
#endif

#if CODE_RESULT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
