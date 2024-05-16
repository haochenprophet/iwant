#include "code_build.h"
int Ccode_build::my_init(void *p)
{
	this->name = "Ccode_build";
	this->alias = "code_build";
	return 0;
}

Ccode_build::Ccode_build()
{
	this->my_init();
}

Ccode_build::~Ccode_build()
{

}

#ifndef CODE_BUILD_TEST
#define CODE_BUILD_TEST 0//1
#endif

#if CODE_BUILD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
