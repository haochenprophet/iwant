#include "code_replace.h"
int Ccode_replace::my_init(void *p)
{
	this->name = "Ccode_replace";
	this->alias = "code_replace";
	return 0;
}

Ccode_replace::Ccode_replace()
{
	this->my_init();
}

Ccode_replace::~Ccode_replace()
{

}

#ifndef CODE_REPLACE_TEST
#define CODE_REPLACE_TEST 0//1
#endif

#if CODE_REPLACE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
