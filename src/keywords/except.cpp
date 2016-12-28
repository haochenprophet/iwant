#include "except.h"
int Cexcept::my_init(void *p)
{
	this->name = "Cexcept";
	this->alias = "except";
	return 0;
}

Cexcept::Cexcept()
{
	this->my_init();
}
