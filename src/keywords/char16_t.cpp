#include "char16_t.h"
int Cchar16_t::my_init(void *p)
{
	this->name = "Cchar16_t";
	this->alias = "char16_t";
	return 0;
}

Cchar16_t::Cchar16_t()
{
	this->my_init();
}
