#include "xor_eq.h"
int Cxor_eq::my_init(void *p)
{
	this->name = "Cxor_eq";
	this->alias = "xor_eq";
	return 0;
}

Cxor_eq::Cxor_eq()
{
	this->my_init();
}
