#include "code_patch.h"
int Ccode_patch::my_init(void *p)
{
	this->name = "Ccode_patch";
	this->alias = "code_patch";
	return 0;
}

Ccode_patch::Ccode_patch()
{
	this->my_init();
}

Ccode_patch::~Ccode_patch()
{

}

#ifndef CODE_PATCH_TEST
#define CODE_PATCH_TEST 0//1
#endif

#if CODE_PATCH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
