#include "code_package.h"
int Ccode_package::my_init(void *p)
{
	this->name = "Ccode_package";
	this->alias = "code_package";
	return 0;
}

Ccode_package::Ccode_package()
{
	this->my_init();
}

Ccode_package::~Ccode_package()
{

}

#ifndef CODE_PACKAGE_TEST
#define CODE_PACKAGE_TEST 0//1
#endif

#if CODE_PACKAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
