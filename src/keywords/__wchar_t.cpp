#include "__wchar_t.h"
int C__wchar_t::my_init(void *p)
{
	this->name = "C__wchar_t";
	this->alias = "__wchar_t";
	return 0;
}

C__wchar_t::C__wchar_t()
{
	this->my_init();
}
