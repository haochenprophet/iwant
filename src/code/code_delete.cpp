#include "code_delete.h"
int Ccode_delete::my_init(void *p)
{
	this->name = "Ccode_delete";
	this->alias = "code_delete";
	return 0;
}

Ccode_delete::Ccode_delete()
{
	this->my_init();
}

Ccode_delete::~Ccode_delete()
{

}

#ifndef CODE_DELETE_TEST
#define CODE_DELETE_TEST 0//1
#endif

#if CODE_DELETE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
