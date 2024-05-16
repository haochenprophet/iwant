#include "code_add.h"
int Ccode_add::my_init(void *p)
{
	this->name = "Ccode_add";
	this->alias = "code_add";
	return 0;
}

Ccode_add::Ccode_add()
{
	this->my_init();
}

Ccode_add::~Ccode_add()
{

}

#ifndef CODE_ADD_TEST
#define CODE_ADD_TEST 0//1
#endif

#if CODE_ADD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
