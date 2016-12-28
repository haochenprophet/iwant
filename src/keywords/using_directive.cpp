#include "using_directive.h"
int Cusing_directive::my_init(void *p)
{
	this->name = "Cusing_directive";
	this->alias = "using_directive";
	return 0;
}

Cusing_directive::Cusing_directive()
{
	this->my_init();
}
