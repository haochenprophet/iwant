#include "code_struct.h"
int Ccode_struct::my_init(void *p)
{
	this->name = "Ccode_struct";
	this->alias = "code_struct";
	return 0;
}

Ccode_struct::Ccode_struct()
{
	this->my_init();
}

Ccode_struct::~Ccode_struct()
{

}

#ifndef CODE_STRUCT_TEST
#define CODE_STRUCT_TEST 0//1
#endif

#if CODE_STRUCT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
