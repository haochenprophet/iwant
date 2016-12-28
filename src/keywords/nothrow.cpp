#include "nothrow.h"
int Cnothrow::my_init(void *p)
{
	this->name = "Cnothrow";
	this->alias = "nothrow";
	return 0;
}

Cnothrow::Cnothrow()
{
	this->my_init();
}
