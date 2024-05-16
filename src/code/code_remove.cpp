#include "code_remove.h"
int Ccode_remove::my_init(void *p)
{
	this->name = "Ccode_remove";
	this->alias = "code_remove";
	return 0;
}

Ccode_remove::Ccode_remove()
{
	this->my_init();
}

Ccode_remove::~Ccode_remove()
{

}

#ifndef CODE_REMOVE_TEST
#define CODE_REMOVE_TEST 0//1
#endif

#if CODE_REMOVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
