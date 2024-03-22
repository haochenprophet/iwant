#include "code_define.h"
int Ccode_define::my_init(void *p)
{
	this->name = "Ccode_define";
	this->alias = "code_define";
	return 0;
}

Ccode_define::Ccode_define()
{
	this->my_init();
}

Ccode_define::~Ccode_define()
{

}

#ifndef CODE_DEFINE_TEST
#define CODE_DEFINE_TEST 0//1
#endif

#if CODE_DEFINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
