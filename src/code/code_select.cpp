#include "code_select.h"
int Ccode_select::my_init(void *p)
{
	this->name = "Ccode_select";
	this->alias = "code_select";
	return 0;
}

Ccode_select::Ccode_select()
{
	this->my_init();
}

Ccode_select::~Ccode_select()
{

}

#ifndef CODE_SELECT_TEST
#define CODE_SELECT_TEST 0//1
#endif

#if CODE_SELECT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
