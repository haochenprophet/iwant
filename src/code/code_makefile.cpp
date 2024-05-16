#include "code_makefile.h"
int Ccode_makefile::my_init(void *p)
{
	this->name = "Ccode_makefile";
	this->alias = "code_makefile";
	return 0;
}

Ccode_makefile::Ccode_makefile()
{
	this->my_init();
}

Ccode_makefile::~Ccode_makefile()
{

}

#ifndef CODE_MAKEFILE_TEST
#define CODE_MAKEFILE_TEST 0//1
#endif

#if CODE_MAKEFILE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
