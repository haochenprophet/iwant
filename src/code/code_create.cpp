#include "code_create.h"
int Ccode_create::my_init(void *p)
{
	this->name = "Ccode_create";
	this->alias = "code_create";
	return 0;
}

Ccode_create::Ccode_create()
{
	this->my_init();
}

Ccode_create::~Ccode_create()
{

}

#ifndef CODE_CREATE_TEST
#define CODE_CREATE_TEST 0//1
#endif

#if CODE_CREATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
