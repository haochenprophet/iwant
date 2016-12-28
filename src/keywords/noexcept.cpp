#include "noexcept.h"
int Cnoexcept::my_init(void *p)
{
	this->name = "Cnoexcept";
	this->alias = "noexcept";
	return 0;
}

Cnoexcept::Cnoexcept()
{
	this->my_init();
}
