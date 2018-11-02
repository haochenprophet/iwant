#include "array_subscript.h"
int Carray_subscript::my_init(void *p)
{
	this->name = "Carray_subscript";
	this->alias = "array_subscript";
	this->symbol = "[exp]";//exp:expression
	return 0;
}

Carray_subscript::Carray_subscript()
{
	this->my_init();
}

Carray_subscript::~Carray_subscript()
{

}
