#include "code_cut.h"
int Ccode_cut::my_init(void *p)
{
	this->name = "Ccode_cut";
	this->alias = "code_cut";
	return 0;
}

Ccode_cut::Ccode_cut()
{
	this->my_init();
}

Ccode_cut::~Ccode_cut()
{

}

#ifndef CODE_CUT_TEST
#define CODE_CUT_TEST 0//1
#endif

#if CODE_CUT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
