#include "xor.h"
int Cxor::my_init(void *p)
{
	this->name = "Cxor";
	this->alias = "xor";
	return 0;
}

Cxor::Cxor()
{
	this->my_init();
}
