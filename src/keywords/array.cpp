#include "array.h"
int Carray::my_init(void *p)
{
	this->name = "Carray";
	this->alias = "array";
	return 0;
}

Carray::Carray()
{
	this->my_init();
}
