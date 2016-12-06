#include "using.h"
int Cusing::my_init(void *p)
{
	this->name = "Cusing";
	this->alias = "using";
	return 0;
}

Cusing::Cusing()
{
	this->my_init();
}
