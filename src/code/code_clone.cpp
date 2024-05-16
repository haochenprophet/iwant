#include "code_clone.h"
int Ccode_clone::my_init(void *p)
{
	this->name = "Ccode_clone";
	this->alias = "code_clone";
	return 0;
}

Ccode_clone::Ccode_clone()
{
	this->my_init();
}

Ccode_clone::~Ccode_clone()
{

}

#ifndef CODE_CLONE_TEST
#define CODE_CLONE_TEST 0//1
#endif

#if CODE_CLONE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
