#include "security_package.h"
int Csecurity_package::my_init(void *p)
{
	this->name = "Csecurity_package";
	this->alias = "security_package";
	return 0;
}

Csecurity_package::Csecurity_package()
{
	this->my_init();
}

Csecurity_package::~Csecurity_package()
{

}

#ifndef SECURITY_PACKAGE_TEST
#define SECURITY_PACKAGE_TEST 0//1
#endif

#if SECURITY_PACKAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
