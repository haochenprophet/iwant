#include "array_subscript.h"
int Carray_subscript::my_init(void *p)
{
	this->name = "Carray_subscript";
	this->alias = "array_subscript";
	this->symbol = "[exp]";//exp:expression
	this->op_priority = 2;
	this->combination = Combination::L2R;
	return 0;
}

Carray_subscript::Carray_subscript()
{
	this->my_init();
}

Carray_subscript::~Carray_subscript()
{

}

#ifndef ARRAY_SUBSCRIPT_TEST
#define ARRAY_SUBSCRIPT_TEST 0//1
#endif

#if ARRAY_SUBSCRIPT_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ARRAY_SUBSCRIPT_TEST\n\n";

	return 0;
}
#endif 