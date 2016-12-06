#include "interior_ptr.h"
int Cinterior_ptr::my_init(void *p)
{
	this->name = "Cinterior_ptr";
	this->alias = "interior_ptr";
	return 0;
}

Cinterior_ptr::Cinterior_ptr()
{
	this->my_init();
}
