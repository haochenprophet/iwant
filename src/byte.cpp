#include "byte.h"
int Cbyte::my_init(void *p)
{
	this->name = "Cbyte";
	this->alias = "byte";
	return 0;
}

Cbyte::Cbyte()
{
	this->my_init();
}
