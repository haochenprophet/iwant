#include "wchar_t.h"
int Cwchar_t::my_init(void *p)
{
	this->name = "Cwchar_t";
	this->alias = "wchar_t";
	return 0;
}

Cwchar_t::Cwchar_t()
{
	this->my_init();
}
