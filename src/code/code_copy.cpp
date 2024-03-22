#include "code_copy.h"
int Ccode_copy::my_init(void *p)
{
	this->name = "Ccode_copy";
	this->alias = "code_copy";
	return 0;
}

Ccode_copy::Ccode_copy()
{
	this->my_init();
}

Ccode_copy::~Ccode_copy()
{

}

#ifndef CODE_COPY_TEST
#define CODE_COPY_TEST 0//1
#endif

#if CODE_COPY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
