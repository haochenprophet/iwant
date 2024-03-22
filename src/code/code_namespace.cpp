#include "code_namespace.h"
int Ccode_namespace::my_init(void *p)
{
	this->name = "Ccode_namespace";
	this->alias = "code_namespace";
	return 0;
}

Ccode_namespace::Ccode_namespace()
{
	this->my_init();
}

Ccode_namespace::~Ccode_namespace()
{

}

#ifndef CODE_NAMESPACE_TEST
#define CODE_NAMESPACE_TEST 0//1
#endif

#if CODE_NAMESPACE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
