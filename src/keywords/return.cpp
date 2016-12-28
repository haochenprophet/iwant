#include "return.h"
int Creturn::my_init(void *p)
{
	this->name = "Creturn";
	this->alias = "return";
	return 0;
}

Creturn::Creturn()
{
	this->my_init();
}
