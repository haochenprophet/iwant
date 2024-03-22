#include "code_value.h"
int Ccode_value::my_init(void *p)
{
	this->name = "Ccode_value";
	this->alias = "code_value";
	return 0;
}

Ccode_value::Ccode_value()
{
	this->my_init();
}

Ccode_value::~Ccode_value()
{

}

#ifndef CODE_VALUE_TEST
#define CODE_VALUE_TEST 0//1
#endif

#if CODE_VALUE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
