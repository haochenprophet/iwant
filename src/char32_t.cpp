#include "char32_t.h"
int Cchar32_t::my_init(void *p)
{
	this->name = "Cchar32_t";
	this->alias = "char32_t";
	return 0;
}

Cchar32_t::Cchar32_t()
{
	this->my_init();
}
